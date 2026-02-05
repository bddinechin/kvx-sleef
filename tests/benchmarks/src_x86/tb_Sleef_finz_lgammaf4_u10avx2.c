/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammaf4_u10avx2128.c --function \
 *     Sleef_finz_lgammaf4_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0x1.39cf3ep-123f, 0.0f, 0.0f, 0x1.1d46bep-92f, 0x1.e6453cp-32f,
     0x1.622d0cp-113f, 0x1.f1a3p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76c63ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f26ccp-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.914af8p-17f, 0.0f, 0x1.86621ap-94f, 0.0f, 0x1.36a2c8p-11f, 0.0f,
     0.0f, 0x1.5dac3cp-5f, 0x1.cdad4cp-114f, 0.0f, 0x1.39cb72p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0fe0ap-93f, 0.0f, 0.0f, 0.0f, 0x1.a2d32p-89f,
     0x1.7c6e6ap-121f, 0x1.2972b2p-96f, 0.0f, 0.0f, 0.0f, 0x1.6bd31p-100f, 0.0f,
     0x1.b1ecdp-86f, 0x1.2e173ap-5f, 0.0f, 0x1.1022d2p-113f, 0.0f, 0x1.7f1924p-3f,
     0.0f, 0x1.c7e266p-118f, 0.0f, 0x1.52122ap-18f, 0x1.225eb8p-78f, 0.0f,
     0x1.6866f4p-44f, 0x1.e30f4cp-42f, 0x1.1a69bap-82f, 0.0f, 0x1.bb77dp-107f,
     0x1.a13f74p-110f, 0x1.63fb9ap-102f, 0x1.bbb66cp-20f, 0.0f, 0.0f, 0.0f,
     0x1.ae04a2p-36f, 0x1.6bbf3p-86f, 0x1.fb5f12p-106f, 0.0f, 0.0f, 0x1.3792dp-107f,
     0x1.5e7216p-79f, 0.0f, 0x1.64548cp-15f, 0.0f, 0x1.ed1b4ep-59f, 0.0f,
     0x1.79ee1p-109f, 0x1.343868p-46f, 0x1.e99986p-114f, 0.0f, 0x1.1fdc84p-14f, 0.0f,
     0x1.6d1e58p-32f, 0x1.fd6d6ap-37f, 0.0f, 0x1.0edf56p-4f, 0.0f, 0.0f,
     0x1.e11022p-113f, 0x1.48e218p-13f, 0x1.51fdcep-18f, 0x1.c2606cp-52f,
     0x1.31ce5cp-37f, 0.0f, 0x1.acfa16p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1138ap-43f,
     0.0f, 0.0f, 0x1.14a23ep-49f, 0.0f, 0.0f, 0.0f, 0x1.d99116p-125f, 0x1.35b446p-87f,
     0.0f, 0.0f, 0x1.7596bap-106f, 0x1.29ebd8p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4fa9a4p-69f, 0.0f, 0x1.0c216ep-29f, 0x1.ebc6bcp-9f, 0x1.fbf768p-16f,
     0x1.63b28p-29f, 0x1.4509d6p-74f, 0.0f, 0.0f, 0.0f, 0x1.723848p-115f, 0.0f,
     0x1.bef852p-14f, 0.0f, 0.0f, 0.0f, 0x1.6c886p-51f, 0.0f, 0.0f, 0x1.4b11f4p-43f,
     0.0f, 0x1.7b8c9ep-82f, 0x1.7a85aap-35f, 0.0f, 0.0f, 0x1.48e7dp-99f,
     0x1.906512p-99f, 0.0f, 0x1.1f43ccp-28f, 0.0f, 0.0f, 0.0f, 0x1.e09084p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76247p-118f, 0x1.f531eep-126f, 0x1.a11b7ap-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.30f94p-45f, 0x1.229ec4p-53f, 0x1.64a912p-17f,
     0x1.b1eefcp-69f, 0.0f, 0x1.38b326p-97f, 0x1.5cc9e8p-18f, 0x1.7beea6p-92f, 0.0f,
     0.0f, 0x1.a1b284p-84f, 0.0f, 0x1.d5a1dap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b7cf78p-71f, 0.0f, 0x1.f6d7c8p-64f, 0x1.4ff97ep-12f, 0.0f, 0.0f,
     0x1.2a4038p-36f, 0x1.26e012p-80f, 0.0f, 0.0f, 0x1.a7fe4p-57f, 0.0f, 0.0f,
     0x1.e9974ap-75f, 0x1.c50bbep-100f, 0x1.c469f6p-66f, 0.0f, 0x1.d94fe8p-55f,
     0x1.ba1c78p-42f, 0.0f, 0x1.7dbaaep-82f, 0x1.15ab96p-91f, 0x1.e4d446p-5f,
     0x1.5d55c2p-9f, 0x1.0d3c2ep-70f, 0.0f, 0x1.7b26dap-34f, 0.0f, 0x1.08a4e4p-34f,
     0x1.c2a278p-84f, 0.0f, 0.0f, 0.0f, 0x1.c288cep-101f, 0x1.0299aep-126f, 0.0f,
     0.0f, 0.0f, 0x1.ad8e5ep-84f, 0.0f, 0x1.8daa4ap-45f, 0.0f, 0x1.54dcb8p-42f, 0.0f,
     0x1.1c2c0ap-80f, 0.0f, 0x1.bc9176p-26f, 0x1.583986p-116f, 0.0f, 0.0f,
     0x1.45254p-68f, 0x1.d4601p-80f, 0.0f, 0x1.0f701cp-101f, 0.0f, 0x1.6eb9cp-76f,
     0.0f, 0.0f, 0.0f, 0x1.a84812p-30f, 0.0f, 0x1.09c37ap-105f, 0x1.57c5aep-19f, 0.0f,
     0.0f, 0x1.67498cp-37f, 0.0f, 0.0f, 0x1.f0c1f2p-86f, 0.0f, 0.0f, 0x1.c11ddap-33f,
     0x1.69b5f8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.077048p-99f, 0x1.2d022cp-103f, 0x1.0cd06ep-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c9d8p-28f, 0.0f, 0x1.30b036p-108f, 0.0f, 0x1.48df44p-82f, 0.0f, 0.0f,
     0x1.56526ap-65f, 0x1.2810c2p-110f, 0x1.0763b4p-79f, 0.0f, 0.0f, 0.0f,
     0x1.7f03ep-110f, 0x1.52a5a6p-96f, 0x1.593f08p-38f, 0.0f, 0x1.c4ab6ap-23f,
     0x1.c66f28p-48f, 0x1.4af694p-18f, 0.0f, 0x1.0f39e8p-63f, 0x1.7104b4p-5f,
     0x1.205db6p-44f, 0x1.12ec5ep-125f, 0x1.d5631ap-98f, 0.0f, 0x1.5a332ap-26f,
     0x1.5ab1cep-104f, 0x1.c229cp-121f, 0.0f, 0x1.66cc54p-41f, 0x1.c0617p-81f,
     0x1.b8c394p-93f, 0x1.1e252cp-124f, 0.0f, 0x1.3ff2fcp-60f, 0.0f, 0.0f,
     0x1.9b104ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.432bc6p-42f, 0.0f, 0x1.c70db4p-49f,
     0.0f, 0.0f, 0x1.46a65cp-23f, 0.0f, 0.0f, 0.0f, 0x1.99415p-118f, 0.0f, 0.0f,
     0x1.7afde4p-113f, 0x1.be2294p-94f, 0.0f, 0x1.5324d8p-67f, 0x1.8aab5cp-114f,
     0x1.fd55a4p-39f, 0x1.13a7d8p-44f, 0x1.3eeffcp-49f, 0x1.b8af3p-93f, 0.0f, 0.0f,
     0.0f, 0x1.72e9d4p-78f, 0x1.afeadep-66f, 0.0f, 0x1.66f138p-45f, 0x1.5ae44ep-2f,
     0x1.e27e1ap-108f, 0x1.892cp-55f, 0x1.f6464p-62f, 0x1.b643aep-108f, 0.0f, 0.0f,
     0.0f, 0x1.225d0ep-54f, 0.0f, 0x1.5aed8p-4f, 0.0f, 0x1.707326p-28f, 0.0f,
     0x1.85cadap-86f, 0x1.c05554p-12f, 0.0f, 0x1.62a3dep-110f, 0x1.b8dbf4p-35f,
     0x1.4725bp-118f, 0.0f, 0x1.8f7b54p-49f, 0.0f, 0.0f, 0x1.f4f13cp-7f,
     0x1.f284dp-108f, 0.0f, 0x1.54cff2p-49f, 0x1.a55ca2p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e2686cp-51f, 0.0f, 0x1.48659ap-55f, 0.0f, 0x1.d6f9acp-40f, 0.0f,
     0x1.9ee35ap-66f, 0x1.617302p-111f, 0x1.ab484p-10f, 0.0f, 0x1.bc22aep-51f,
     0x1.a94322p-55f, 0x1.305a64p-37f, 0x1.1b8f1cp-9f, 0x1.2c7d5ap-52f,
     0x1.03e7fap-91f, 0x1.233d48p-95f, 0.0f, 0x1.c4453ep-115f, 0x1.c3009cp-104f,
     0x1.a8f1cp-81f, 0.0f, 0x1.b8bf82p-9f, 0x1.03840ep-120f, 0.0f, 0x1.1df3d8p-108f,
     0x1.49cefcp-103f, 0.0f, 0.0f, 0x1.c78e3ap-106f, 0x1.0da558p-43f, 0x1.8add7ep-10f,
     0x1.b773ecp-19f, 0.0f, 0x1.8f14bp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58e384p-32f,
     0.0f, 0.0f, 0x1.8cb90cp-43f, 0x1.d7fda2p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e1eca6p-117f, 0x1.9406p-48f, 0.0f, 0.0f, 0x1.638ef8p-28f, 0.0f, 0.0f,
     0x1.f3f404p-47f, 0x1.60b964p-11f, 0.0f, 0x1.5bbeacp-69f, 0x1.f8307cp-52f, 0.0f,
     0x1.c96b96p-107f, 0.0f, 0x1.16c8a6p-21f, 0x1.d2affp-91f, 0x1.041084p-56f, 0.0f,
     0.0f, 0x1.8a966cp-33f, 0x1.1c00b4p-41f, 0x1.80badcp-125f, 0.0f, 0.0f,
     0x1.e4383p-94f, 0.0f, 0.0f, 0.0f, 0x1.4e4d32p-98f, 0x1.f1ea54p-105f, 0.0f,
     0x1.a26dcep-33f, 0x1.729218p-5f, 0.0f, 0.0f, 0.0f, 0x1.50e53ap-82f, 0.0f, 0.0f,
     0x1.2829p-19f, 0x1.fe066cp-111f, 0x1.2f586cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e1e2eap-15f, 0x1.a3f344p-61f, 0x1.f6e742p-97f, 0.0f, 0.0f,
     0x1.d9ebf4p-89f, 0.0f, 0.0f, 0x1.da79fap-71f, 0x1.60162ep-119f, 0x1.58314ap-67f,
     0x1.f63516p-43f, 0x1.5a5de2p-98f, 0x1.868942p-9f, 0.0f, 0x1.07354ap-22f, 0.0f,
     0x1.aeffdp-50f, 0.0f, 0x1.e3b24cp-124f, 0x1.15e8f4p-126f, 0.0f, 0x1.83fbd6p-60f,
     0x1.c17ba6p-91f, 0.0f, 0x1.08bed4p-63f, 0.0f, 0x1.2b5acap-8f, 0x1.5358b8p-105f,
     0x1.4334e2p-123f, 0.0f, 0.0f, 0.0f, 0x1.f379f6p-69f, 0x1.89a9c2p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7061d6p-91f, 0x1.6bbb0ap-25f, 0.0f, 0x1.07c02cp-95f, 0.0f,
     0x1.df5c14p-50f, 0.0f, 0x1.97fe9ep-31f, 0.0f, 0.0f, 0x1.368b96p-112f,
     0x1.4511bp-22f, 0x1.61c082p-67f, 0x1.f8d0a2p-43f, 0.0f, 0x1.297a38p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba6ba4p-104f, 0.0f, 0x1.fdc2acp-54f, 0.0f, 0.0f, 0.0f,
     0x1.9d5d84p-101f, 0x1.c71f24p-89f, 0x1.ecb6d2p-86f, 0.0f, 0x1.7c5488p-21f, 0.0f,
     0x1.6d7762p-83f, 0x1.af8c06p-70f, 0.0f, 0.0f, 0x1.056f92p-35f, 0x1.223fc4p-103f,
     0.0f, 0x1.d89878p-77f, 0.0f, 0.0f, 0x1.19c952p-104f, 0x1.f08a22p-117f, 0.0f,
     0x1.8e6d46p-82f, 0x1.dc61dcp-42f, 0.0f, 0.0f, 0.0f, 0x1.c741fp-28f, 0.0f, 0.0f,
     0.0f, 0x1.1b0a4ep-69f, 0x1.8ba23ep-70f, 0.0f, 0x1.98d1f8p-45f, 0.0f,
     0x1.45aba4p-20f, 0x1p0f, 0.0f, 0.0f, 0x1.a416fap-29f, 0x1.98dc62p-58f,
     0x1.b2575ap-74f, 0x1.beed4p-2f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.7a73f6p-28f,
     0x1.20d408p-12f, 0x1.53f0aap-55f, 0.0f, 0.0f, 0x1.a6da2cp-29f, 0x1.3ccc7ep-52f,
     0x1.4a0abap-78f, 0x1.ff5b74p-125f, 0.0f, 0x1.808c26p-93f, 0x1.82c2dap-17f, 0.0f,
     0.0f, 0.0f, 0x1.a2c344p-88f, 0.0f, 0x1.065ccap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e24f2ap-75f, 0x1.787542p-125f, 0x1.c28514p-12f, 0.0f, 0.0f, 0x1.d8accap-43f,
     0x1.d2785ep-37f, 0x1.f19c78p-33f, 0.0f, 0x1.c574dp-5f, 0x1.3e72dp-61f, 0.0f,
     0.0f, 0.0f, 0x1.b20574p-98f, 0x1.1b4a8ap-112f, 0x1.367f78p-82f, 0x1.8fdc9cp-87f,
     0x1.7d4e6ep-13f, 0.0f, 0.0f, 0.0f, 0x1.9916a6p-36f, 0x1.fd2628p-109f, 0.0f,
     0x1.7e1eb8p-37f, 0x1.78b67ap-101f, 0.0f, 0.0f, 0x1.a6ac4cp-76f, 0.0f, 0.0f,
     0x1.4205bep-84f, 0.0f, 0.0f, 0x1.c3fe04p-22f, 0x1.1dee5p-106f, 0x1.cfbe6ep-71f,
     0x1.e9dcfcp-40f, 0x1.8058cep-53f, 0x1.82111ap-60f, 0x1.462656p-101f, 0.0f, 0.0f,
     0.0f, 0x1.f4c606p-54f, 0.0f, 0.0f, 0x1.dcbe56p-33f, 0.0f, 0x1.b9b0d6p-13f, 0.0f,
     0.0f, 0.0f, 0x1.60594ep-29f, 0.0f, 0x1.d702eap-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d04216p-63f, 0x1.b0c2eap-59f, 0x1.8c932ep-98f, 0x1.963bd4p-106f,
     0x1.d8a9f8p-113f, 0x1.80fcccp-33f, 0x1.d2a0dep-97f, 0.0f, 0.0f, 0x1.0b8e2cp-40f,
     0x1.48c3ecp-105f, 0x1.5eecaap-95f, 0.0f, 0.0f, 0x1.c93deep-92f, 0x1.458ffap-126f,
     0x1.9fdb3p-79f, 0.0f, 0x1.e129c8p-69f, 0.0f, 0.0f, 0.0f, 0x1.decf06p-16f, 0.0f,
     0.0f, 0.0f, 0x1.77bd34p-98f, 0x1.48f19ap-71f, 0.0f, 0x1.5a385ap-97f, 0.0f,
     0x1.049bbap-122f, 0x1.64971p-29f, 0.0f, 0x1.65ca04p-5f, 0x1.6c5cp-23f,
     0x1.686aap-79f, 0.0f, 0x1.5d7208p-3f, 0.0f, 0x1.fbabfep-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84da82p-100f, 0x1.2a394cp-24f,
     0x1.8643f6p-118f, 0.0f, 0.0f, 0x1.9a3c36p-9f, 0x1.1bdf86p-59f, 0x1.965d0ep-41f,
     0x1.c2404cp-119f, 0x1.7d035p-94f, 0x1.41383p-35f, 0.0f, 0x1.f7b6fap-33f, 0.0f,
     0.0f, 0x1.7c119ap-125f, 0.0f, 0.0f, 0x1.b1a49p-32f, 0.0f, 0.0f, 0x1.441ff6p-73f,
     0x1.3065f8p-94f, 0.0f, 0x1.e2435cp-80f, 0x1.a27bd8p-118f, 0x1.2e9318p-125f, 0.0f,
     0.0f, 0x1.50164ep-13f, 0.0f, 0x1.b5866cp-63f, 0x1.d3dbfep-50f, 0x1.7f7e74p-14f,
     0x1.f12b5ap-125f, 0x1.8dd332p-54f, 0.0f, 0x1.189ee4p-9f, 0x1.b9ad66p-78f,
     0x1.6162dep-96f, 0.0f, 0.0f, 0.0f, 0x1.243e9p-117f, 0.0f, 0.0f, 0x1.9810d8p-84f,
     0x1.23695ap-22f, 0x1.191p-49f, 0x1.00459p-125f, 0.0f, 0x1p0f, 0.0f,
     0x1.1d7c7cp-43f, 0x1.1107a8p-100f, 0.0f, 0x1.7f1426p-28f, 0x1.d91eb6p-67f, 0.0f,
     0.0f, 0x1.3c43d2p-78f, 0.0f, 0.0f, 0.0f, 0x1.b9d128p-124f, 0x1.e9ca22p-68f, 0.0f,
     0.0f, 0x1.0f747p-8f, 0x1.1ba1b2p-35f, 0.0f, 0x1.250e7cp-90f, 0x1.c5649p-106f,
     0.0f, 0x1.cd5438p-13f, 0x1.edbd8ep-11f, 0.0f, 0.0f, 0x1.bbfeeap-107f,
     0x1.7ccd7cp-111f, 0x1.93504ep-91f, 0x1.7959f8p-80f, 0.0f, 0x1.7fbedep-125f, 0.0f,
     0.0f, 0x1.631878p-39f, 0x1.fc9f0cp-31f, 0.0f, 0x1.9f8e24p-44f, 0x1.12b95ap-95f,
     0x1.8caf44p-26f, 0.0f, 0x1.fdd8f6p-13f, 0x1.23288cp-119f, 0.0f, 0x1.38c41ep-25f,
     0x1.162678p-31f, 0.0f, 0x1.270c52p-96f, 0.0f, 0.0f, 0x1.8bafd6p-76f, 0.0f, 0.0f,
     0.0f, 0x1.889f26p-81f, 0x1.0e66a8p-15f, 0.0f, 0x1.7106c4p-55f, 0.0f, 0.0f,
     0x1.49dc26p-125f, 0.0f, 0.0f, 0.0f, 0x1.652fp-54f, 0x1.674324p-115f, 0.0f, 0.0f,
     0x1.7109eap-122f, 0.0f, 0.0f, 0.0f, 0x1.3bf004p-111f, 0x1.2ac448p-116f,
     0x1.a6662p-87f, 0.0f, 0.0f, 0x1.cd4388p-108f, 0.0f, 0x1.d6532p-48f, 0.0f, 0.0f,
     0.0f, 0x1.dcf954p-101f, 0x1.1ee9fp-64f, 0x1.47381ap-88f, 0.0f, 0x1.11b174p-52f,
     0.0f, 0x1.a2cf48p-78f, 0.0f, 0x1.11e50ep-27f, 0x1.c7d546p-74f, 0x1.563688p-104f,
     0x1.17c34cp-39f, 0x1.9659bep-125f, 0x1.cc5998p-110f, 0.0f, 0.0f, 0.0f,
     0x1.b889ap-61f, 0.0f, 0x1.0385f8p-62f, 0.0f, 0x1.08f16cp-89f, 0x1.9ce80ep-62f,
     0.0f, 0x1.7d5228p-36f, 0x1.dc3264p-70f, 0x1.f6c262p-114f, 0.0f, 0x1.2205bap-75f,
     0.0f, 0x1.bd649p-119f, 0x1.34cd9cp-42f, 0.0f, 0.0f, 0x1.07385cp-44f,
     0x1.7054fep-92f, 0x1.e4128cp-42f, 0.0f, 0x1.c77e42p-108f, 0x1.28b78ap-90f, 0.0f,
     0x1.d70984p-48f, 0x1.df59a6p-58f, 0.0f, 0x1.072054p-106f, 0.0f, 0x1.a96cep-69f,
     0.0f, 0x1.97671cp-123f, 0x1.8c49cap-80f, 0x1.a38b5ep-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3926b6p-21f, 0x1.5e3078p-42f,
     0x1.ac2fccp-19f, 0x1.99627p-91f, 0x1.6fcbe4p-61f, 0.0f, 0.0f, 0x1.9a7a6ap-102f,
     0x1.6b73e6p-57f, 0.0f, 0.0f, 0x1.678cap-44f, 0x1.ec6096p-121f, 0.0f,
     0x1.34222p-2f, 0.0f, 0.0f, 0x1.add5d8p-5f, 0.0f, 0.0f, 0.0f, 0x1.d71d22p-119f,
     0x1.6fffp-103f, 0.0f, 0.0f, 0x1.e4fe36p-88f, 0x1.6f261cp-104f, 0x1.2fd8a4p-29f,
     0x1.0737aap-43f, 0.0f, 0x1.e9db34p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16bdd2p-14f,
     0x1.17d028p-63f, 0x1.baaf3p-10f, 0.0f, 0x1.f84d6ap-7f, 0.0f, 0x1.a6911ep-42f,
     0.0f, 0x1.45ae2ap-61f, 0.0f, 0.0f, 0x1.7aa87ap-103f, 0x1.4e7dacp-6f, 0.0f, 0.0f,
     0.0f, 0x1.ca941cp-96f, 0x1.7920aap-103f, 0x1.4aa58ap-78f, 0x1.a8e4ap-80f,
     0x1.c077aep-126f, 0.0f, 0.0f, 0x1.efe3dep-125f, 0x1.4193a8p-70f,
     0x1.b415d8p-101f, 0.0f, 0x1.5b111p-45f, 0.0f, 0x1.d56944p-58f, 0x1.a0fd6ap-44f,
     0.0f, 0x1.0cd6a4p-4f, 0.0f, 0x1.0a15b6p-23f, 0x1.76e13ap-73f, 0.0f, 0.0f,
     0x1.8804dep-27f, 0.0f, 0.0f, 0x1.9dd196p-102f, 0x1.afef52p-78f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_lgammaf4_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_lgammaf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_lgammaf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
