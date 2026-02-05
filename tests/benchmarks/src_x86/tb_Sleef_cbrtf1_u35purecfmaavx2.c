/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf1_u35purecfma.c --function \
 *     Sleef_cbrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b61c76p-93f, 0x1.28c1e4p-52f, 0x1.25bf44p-95f,
     0x1.e2f708p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080dd8p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.615704p-98f, 0x1.6de6b8p-43f, 0x1.0dc298p-22f,
     0x1.040784p-1f, 0.0f, 0x1.da50ecp-59f, 0.0f, 0.0f, 0x1.9c891cp-62f, 0.0f,
     0x1.e3bcf8p-47f, 0.0f, 0.0f, 0.0f, 0x1.95512ep-46f, 0x1.f9beb4p-57f, 0.0f, 0.0f,
     0x1.6a8a82p-103f, 0x1.a0131ap-120f, 0x1.1a011ep-57f, 0x1.782ccap-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.413a62p-13f, 0.0f, 0.0f, 0.0f, 0x1.a2bd7ep-20f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.03a7aap-17f, 0x1.43e5ep-82f, 0.0f, 0.0f,
     0x1.87d5p-106f, 0.0f, 0x1.69ded6p-102f, 0.0f, 0x1.a19252p-35f, 0.0f,
     0x1.bbc02cp-99f, 0.0f, 0x1.e90fcep-104f, 0x1.c3b248p-1f, 0.0f, 0x1.3e7616p-15f,
     0.0f, 0x1.47555ap-7f, 0.0f, 0.0f, 0.0f, 0x1.6320ccp-123f, 0.0f, 0x1.7486aep-94f,
     0x1.cffc6ap-118f, 0.0f, 0.0f, 0x1.914af2p-22f, 0x1.dce258p-74f, 0x1.22e844p-126f,
     0.0f, 0x1.25b2a6p-4f, 0x1.d02de6p-6f, 0x1.1432c2p-36f, 0.0f, 0.0f, 0.0f,
     0x1.ca0788p-13f, 0x1.54e61cp-125f, 0x1.13fd8ep-81f, 0x1.289e8cp-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9eca14p-52f, 0x1.e5e4c6p-117f, 0x1.7b38d8p-126f, 0.0f,
     0.0f, 0.0f, 0x1.dda1a4p-92f, 0.0f, 0x1.d5708ap-76f, 0x1.7df99p-98f,
     0x1.345f44p-101f, 0x1.6290cap-7f, 0x1.0d02ecp-18f, 0x1.7086dap-43f,
     0x1.4ea104p-75f, 0.0f, 0x1.33a30cp-77f, 0.0f, 0x1.ac0aeep-71f, 0x1.90675p-19f,
     0.0f, 0.0f, 0.0f, 0x1.596f7p-69f, 0x1.1098b4p-72f, 0x1.c92216p-61f, 0.0f,
     0x1.176f76p-29f, 0.0f, 0x1.df1c32p-86f, 0x1.bbac0cp-125f, 0.0f, 0.0f, 0.0f,
     0x1.821bc8p-68f, 0.0f, 0.0f, 0x1.e9e998p-39f, 0x1.2162fap-93f, 0x1.b4641cp-10f,
     0.0f, 0x1.159af2p-46f, 0x1.0e90d8p-121f, 0.0f, 0x1.7d22dp-22f, 0x1.e8accp-71f,
     0x1.fe9294p-3f, 0.0f, 0.0f, 0.0f, 0x1.6bc456p-81f, 0.0f, 0x1.330046p-124f, 0.0f,
     0.0f, 0x1.4b7452p-112f, 0.0f, 0x1.7f44bep-26f, 0x1.99c0b2p-110f, 0.0f, 0.0f,
     0x1.151d26p-28f, 0.0f, 0x1.0c1374p-17f, 0x1.5e0c22p-65f, 0x1.591478p-24f,
     0x1.8cdc36p-56f, 0.0f, 0.0f, 0x1.e6c6eep-61f, 0.0f, 0.0f, 0.0f, 0x1.6f8992p-77f,
     0x1.f479b2p-18f, 0x1.d114c8p-46f, 0.0f, 0.0f, 0x1.28666ap-96f, 0.0f, 0.0f,
     0x1.12222ep-28f, 0x1.eae9e2p-94f, 0.0f, 0.0f, 0x1.c69bdp-111f, 0.0f, 0.0f,
     0x1.99c3bcp-7f, 0.0f, 0.0f, 0x1.e998b6p-121f, 0x1.a7d2ap-97f, 0x1.22f9c4p-22f,
     0x1.81ffc4p-37f, 0x1.4de444p-25f, 0.0f, 0x1.455bc6p-62f, 0.0f, 0.0f,
     0x1.106d2ep-69f, 0x1p0f, 0x1.e68a3cp-30f, 0x1.e4908ep-38f, 0x1.a3b526p-48f, 0.0f,
     0.0f, 0x1.70db76p-94f, 0.0f, 0x1.983afp-37f, 0x1.9903e2p-12f, 0.0f, 0.0f, 0.0f,
     0x1.edf69cp-2f, 0.0f, 0.0f, 0x1.268ce6p-35f, 0x1.f110a2p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e1e2p-120f, 0x1.3b6f5ap-120f, 0x1.7d871ep-47f, 0x1.25989cp-36f,
     0x1.5c051cp-85f, 0x1.0d13dap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06cc7ap-114f,
     0x1.b996bep-59f, 0.0f, 0x1.f59178p-80f, 0x1.ba072ep-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.60f62p-22f, 0x1.4e77fp-82f, 0.0f, 0.0f, 0x1.685ee8p-117f,
     0x1.c624d6p-58f, 0.0f, 0.0f, 0x1.10ba1ep-31f, 0x1.77548ep-122f, 0x1.187f1cp-3f,
     0x1.415f0ep-44f, 0x1.70725cp-9f, 0x1.857e56p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.691ddcp-126f, 0.0f, 0x1.fd26c4p-51f, 0x1.59dddep-98f, 0.0f, 0x1.572406p-63f,
     0x1.4be17ep-19f, 0.0f, 0.0f, 0x1.b16266p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ed94p-49f, 0.0f, 0.0f, 0.0f, 0x1.2249f8p-124f, 0x1.39ce76p-3f, 0.0f, 0.0f,
     0.0f, 0x1.ee7cf8p-40f, 0.0f, 0x1.8c1358p-21f, 0.0f, 0.0f, 0x1.905212p-41f, 0.0f,
     0x1.ed1d28p-20f, 0.0f, 0x1.95e03ap-68f, 0.0f, 0x1.d5e312p-7f, 0x1.dd17cap-58f,
     0.0f, 0x1.9d871cp-7f, 0x1.75e7ap-121f, 0.0f, 0.0f, 0x1.efd916p-18f,
     0x1.b31348p-29f, 0x1.ba74a8p-98f, 0x1.f4bf4ap-79f, 0x1.7a818ap-77f, 0.0f,
     0x1.ec9a88p-3f, 0.0f, 0x1.a23832p-23f, 0x1.f0954p-120f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.4e711cp-77f, 0.0f, 0x1.55f5bep-114f, 0x1.eb31c2p-39f, 0.0f, 0x1.739b94p-34f,
     0.0f, 0x1.902e42p-76f, 0x1.ac9c5p-100f, 0.0f, 0x1.1c70dep-109f, 0.0f, 0.0f,
     0x1.333d14p-116f, 0x1.47745cp-32f, 0.0f, 0x1.71fb5ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.643214p-85f, 0x1.d41e6ep-9f, 0x1.8f358ep-112f, 0.0f, 0x1.478042p-115f,
     0x1.2d2b38p-91f, 0x1.94a6dap-122f, 0x1.1f9d7ep-105f, 0.0f, 0.0f, 0x1.d930c4p-82f,
     0x1.c21526p-4f, 0.0f, 0x1.1371f8p-60f, 0x1.4e6d3p-125f, 0.0f, 0x1.6cfbcep-43f,
     0x1.a17ceep-55f, 0.0f, 0x1.b10b28p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b9966p-18f, 0x1.517ec6p-104f, 0.0f, 0x1.6ed962p-39f, 0x1.6a4abap-81f, 0.0f,
     0x1.970224p-109f, 0x1.20acb8p-37f, 0.0f, 0.0f, 0.0f, 0x1.b3a404p-1f, 0.0f, 0.0f,
     0x1.fa46f4p-8f, 0x1.37520ap-52f, 0.0f, 0x1.c5d03p-67f, 0x1.365d8cp-52f, 0.0f,
     0x1.2ca3d4p-15f, 0.0f, 0x1.3f7a8ep-32f, 0x1.a3df38p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24ccb6p-47f, 0x1.12acp-45f, 0.0f, 0x1.b0c8dep-102f, 0.0f, 0.0f,
     0x1.28149ep-1f, 0x1.4ad0d8p-1f, 0.0f, 0.0f, 0.0f, 0x1.d79a2p-95f,
     0x1.1c818ep-98f, 0.0f, 0x1.957072p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5563a6p-36f,
     0x1.f50082p-66f, 0x1.e84d36p-116f, 0.0f, 0x1.e6345ap-49f, 0x1.351928p-25f,
     0x1.a53cfcp-61f, 0x1.2debacp-45f, 0.0f, 0x1.0733bep-14f, 0.0f, 0.0f,
     0x1.dafecap-31f, 0.0f, 0x1.b10ba2p-8f, 0.0f, 0x1.bb5e26p-108f, 0.0f,
     0x1.47d5ap-112f, 0.0f, 0.0f, 0.0f, 0x1.053148p-48f, 0x1.d957bp-58f, 0.0f,
     0x1.a90018p-77f, 0.0f, 0x1.3c8158p-54f, 0x1.22d6c8p-28f, 0.0f, 0x1.1d4d62p-119f,
     0x1.5461p-61f, 0x1.10a296p-73f, 0x1.baa206p-124f, 0.0f, 0x1.65385p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e5e96p-5f, 0.0f, 0.0f, 0x1.7b62bep-20f,
     0x1.83600ep-16f, 0x1.8beeaap-83f, 0.0f, 0x1.45296ap-109f, 0.0f, 0.0f,
     0x1.f15c1ap-52f, 0x1.335f2ep-90f, 0.0f, 0x1p0f, 0x1.989994p-98f,
     0x1.92dd54p-106f, 0x1.2caeb4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71bd9ep-36f, 0x1.f69e98p-12f, 0.0f, 0x1.6fe7dcp-108f, 0.0f, 0.0f,
     0x1.8f548ep-57f, 0.0f, 0x1.928f0ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eaa454p-63f, 0.0f, 0x1.73e07p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3da878p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc005p-45f, 0x1.f43822p-73f, 0.0f, 0.0f,
     0x1.4c35bcp-121f, 0.0f, 0.0f, 0x1.481436p-99f, 0.0f, 0x1.a64cbcp-88f, 0.0f,
     0x1.0cc988p-78f, 0.0f, 0.0f, 0.0f, 0x1.c56496p-5f, 0.0f, 0.0f, 0.0f,
     0x1.aceb9cp-112f, 0.0f, 0x1.284322p-110f, 0x1.7b0696p-101f, 0x1.c93fbap-86f,
     0.0f, 0.0f, 0x1.0a25a8p-70f, 0.0f, 0.0f, 0x1.6aff22p-9f, 0x1.961bcp-10f, 0.0f,
     0x1.ff70ecp-63f, 0.0f, 0x1.cfa2aap-82f, 0x1.4a1354p-103f, 0.0f, 0.0f,
     0x1.f40476p-50f, 0x1.678dfep-55f, 0x1.550c56p-14f, 0.0f, 0x1.c99a84p-125f,
     0x1.87cc68p-76f, 0x1.b70c42p-59f, 0x1.99db52p-46f, 0.0f, 0.0f, 0x1.8fec96p-24f,
     0x1.84c926p-59f, 0.0f, 0x1.6b4e04p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef8ab6p-95f,
     0x1.7b1eeep-92f, 0x1.ac32f6p-28f, 0.0f, 0x1.ce2d0cp-98f, 0x1.1ec19ep-49f, 0.0f,
     0x1.c9d87p-62f, 0.0f, 0x1.a9f418p-29f, 0.0f, 0.0f, 0.0f, 0x1.5f8196p-15f,
     0x1.9eaac4p-87f, 0.0f, 0.0f, 0x1.62aa62p-104f, 0.0f, 0.0f, 0x1.b8752ap-45f, 0.0f,
     0.0f, 0.0f, 0x1.ebadaep-7f, 0.0f, 0.0f, 0x1.37527ap-19f, 0x1.596608p-55f, 0.0f,
     0x1.74651ep-87f, 0.0f, 0x1.b48b62p-33f, 0x1.83f6acp-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d961cp-93f, 0x1.9c84c2p-3f, 0x1.b7c89cp-111f, 0.0f, 0x1.8a902p-121f,
     0x1.2e221cp-50f, 0.0f, 0.0f, 0x1.81f73ap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0cf15cp-125f, 0x1.6bda04p-17f, 0.0f, 0x1.4db112p-36f, 0.0f, 0.0f,
     0x1.ede01ep-105f, 0x1.0f6d6ep-42f, 0.0f, 0.0f, 0x1.259002p-87f, 0.0f, 0.0f,
     0x1.d1ce3ep-76f, 0.0f, 0x1.15d882p-8f, 0x1.dca08cp-126f, 0x1.214384p-59f, 0.0f,
     0.0f, 0x1.c59cp-3f, 0.0f, 0.0f, 0x1.5a1854p-83f, 0x1.9c4f18p-13f,
     0x1.6b618cp-79f, 0.0f, 0.0f, 0.0f, 0x1.35cd5ep-87f, 0.0f, 0.0f, 0x1.17a51ap-63f,
     0.0f, 0x1.258e52p-46f, 0x1.6947dap-85f, 0x1.f1bcb4p-75f, 0x1.4557d6p-96f,
     0x1.b46178p-73f, 0.0f, 0x1.8f87f6p-54f, 0x1.dd799ep-54f, 0.0f, 0.0f, 0.0f,
     0x1.e64e7ep-54f, 0.0f, 0.0f, 0x1.304cfap-18f, 0.0f, 0x1.1076b4p-4f, 0.0f,
     0x1.d55f74p-63f, 0.0f, 0.0f, 0.0f, 0x1.278c2p-85f, 0.0f, 0.0f, 0x1.202974p-24f,
     0x1.e1390ap-76f, 0.0f, 0x1.3a0766p-96f, 0x1.8e54dcp-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9da49ep-41f, 0.0f, 0x1.51c856p-75f, 0x1.611908p-61f, 0.0f,
     0x1.2bb7f6p-108f, 0x1.73ca1cp-37f, 0.0f, 0x1.eb0f84p-14f, 0.0f, 0x1.e39422p-35f,
     0x1.0fddacp-58f, 0x1.8b667ap-77f, 0.0f, 0x1.47359ep-77f, 0x1.deb7dp-17f,
     0x1.becbep-88f, 0.0f, 0x1.2fd394p-60f, 0x1.1defacp-101f, 0.0f, 0x1.abbd5p-63f,
     0.0f, 0x1.31e932p-44f, 0.0f, 0.0f, 0x1.056ca2p-125f, 0x1.e9d206p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a92288p-55f, 0.0f, 0x1.ebfe8ap-72f, 0x1.9e59e2p-58f,
     0x1.cfddcap-38f, 0.0f, 0x1.3eb82ap-62f, 0.0f, 0x1.889c32p-102f, 0x1.5770e4p-60f,
     0x1.6afbd6p-76f, 0x1.17a442p-83f, 0.0f, 0x1.b99e3ap-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9cfba6p-122f, 0x1.a2237cp-23f, 0x1.15c3d6p-67f, 0.0f,
     0x1.f31f14p-87f, 0.0f, 0x1.2dc66ep-103f, 0.0f, 0x1.aaa07p-111f, 0.0f,
     0x1.5db94p-45f, 0x1.d7d182p-74f, 0x1.40da72p-99f, 0x1.61571ap-50f,
     0x1.356092p-126f, 0x1.c3f51ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6d8bcp-90f, 0.0f, 0x1.d4634ap-91f, 0x1.d6dfa4p-35f, 0.0f, 0.0f,
     0x1.018b3p-36f, 0.0f, 0.0f, 0x1.9ddd84p-4f, 0.0f, 0.0f, 0.0f, 0x1.d573aep-78f,
     0x1.e99814p-8f, 0x1.57cf2ep-46f, 0x1.70d338p-47f, 0.0f, 0x1.5923fep-44f, 0.0f,
     0x1.699ec2p-24f, 0x1.f7493ap-44f, 0x1.32df14p-22f, 0.0f, 0x1.771b2p-106f,
     0x1.cfb44ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a966c8p-53f, 0.0f, 0.0f,
     0x1.535c4ep-54f, 0x1.457d84p-102f, 0x1.8a687ep-72f, 0.0f, 0x1.021f2ep-115f,
     0x1.cc9ea6p-113f, 0.0f, 0.0f, 0x1.3cf3a8p-36f, 0x1.d8dec8p-11f, 0x1.ad614p-70f,
     0.0f, 0x1.2f12b4p-24f, 0.0f, 0.0f, 0x1.c757a6p-74f, 0.0f, 0x1.de2c8p-97f, 0.0f,
     0.0f, 0.0f, 0x1.5bd78cp-112f, 0.0f, 0.0f, 0x1.2b0056p-37f, 0.0f, 0x1.072f12p-91f,
     0.0f, 0.0f, 0.0f, 0x1.c7f67ep-105f, 0x1.0b542ep-30f, 0x1.fc8f28p-39f, 0.0f, 0.0f,
     0.0f, 0x1.a2f3fep-63f, 0x1.7103b6p-106f, 0.0f, 0.0f, 0.0f, 0x1.210e26p-60f,
     0x1.8e3428p-60f, 0x1.5b5c6p-87f, 0.0f, 0x1.e4cf9cp-19f, 0.0f, 0x1.d1acecp-119f,
     0.0f, 0.0f, 0x1.8ec86p-125f, 0x1.8d434ap-108f, 0x1.ef949cp-96f, 0.0f, 0.0f,
     0x1.1bfb6p-40f, 0x1.4582b2p-14f, 0.0f, 0x1.41f746p-99f, 0.0f, 0.0f, 0.0f,
     0x1.e7e896p-15f, 0x1.f5ca1cp-8f, 0.0f, 0.0f, 0x1.e818d2p-92f, 0.0f, 0.0f,
     0x1.ba829ep-9f, 0.0f, 0x1.c6ed7p-60f, 0.0f, 0x1.20295ap-10f, 0x1.2abad4p-74f,
     0.0f, 0x1.3483a2p-3f, 0.0f, 0x1.42d654p-60f, 0x1.e97f28p-36f, 0x1.256f8p-52f,
     0x1.dac354p-74f, 0x1.e42538p-98f, 0x1.e182cap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f615f4p-113f, 0.0f, 0.0f, 0.0f, 0x1.2646fcp-113f, 0.0f, 0.0f, 0.0f,
     0x1.9f1e7cp-44f, 0x1.d06ef4p-126f, 0x1.14d82ep-12f, 0x1.7608c4p-91f,
     0x1.9b9298p-83f, 0.0f, 0.0f, 0x1.a3d1dap-70f, 0.0f, 0x1.4bcce2p-17f,
     0x1.ba652ep-70f, 0.0f, 0x1.649efep-105f, 0.0f, 0x1.393ff6p-80f, 0x1.bcf33ep-72f,
     0.0f, 0.0f, 0.0f, 0x1.7643dap-11f, 0.0f, 0.0f, 0.0f, 0x1.743614p-26f, 0.0f,
     0x1.2a51cap-99f, 0x1.b59a1ap-35f, 0x1.756154p-78f, 0.0f, 0.0f, 0x1.2dbd5ap-58f,
     0x1.43da5ep-14f, 0x1.441ecp-112f, 0.0f, 0x1.7b9dc8p-59f, 0x1.affb08p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.eedbfap-115f, 0.0f, 0.0f, 0x1.e01846p-19f, 0.0f,
     0x1.fce3a8p-58f, 0x1.ce7526p-4f, 0.0f, 0x1.28f3f8p-22f, 0x1.ce2ffp-76f,
     0x1.86e092p-103f, 0.0f, 0.0f, 0x1.da7148p-62f, 0x1.024396p-100f, 0x1.4356bap-84f,
     0.0f, 0x1.76706ap-50f, 0.0f, 0x1.18ccfcp-44f, 0x1.9b60c2p-108f, 0.0f,
     0x1.eecb88p-19f, 0x1.ebf564p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46a392p-74f, 0.0f,
     0.0f, 0x1.977b12p-52f, 0x1.831feep-86f, 0x1.1f9fdep-8f, 0.0f, 0.0f,
     0x1.11db88p-35f, 0x1.ec297ap-46f, 0x1.c46cbep-18f, 0.0f, 0.0f, 0x1.a7723ep-76f,
     0x1.f7a1bcp-16f, 0.0f, 0x1.0dc63ap-126f, 0x1.58dfaap-8f, 0.0f, 0x1.f8554ap-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c7b8p-64f
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
            tmp1 = Sleef_cbrtf1_u35purecfma(tmp0);
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
    printf("Sleef_cbrtf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
