/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinf1_u10purecfma.c --function \
 *     Sleef_asinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.8dabc8p-36f, 0x1.6c714cp-3f, 0x1.ae22e6p-10f, 0x1.5ee67ep-33f,
     0.0f, 0x1.7cf822p-77f, 0x1.4c4614p-71f, 0x1.7a0806p-51f, 0x1.e2e762p-35f,
     0x1.d52ec8p-102f, 0.0f, 0x1.61ddeep-65f, 0x1.2abf4cp-31f, 0.0f, 0.0f,
     0x1.29996ep-40f, 0x1.24f5b4p-16f, 0x1.670e3cp-56f, 0x1.0316c4p-101f,
     0x1.763c3cp-111f, 0x1.8b100cp-96f, 0x1.ad6b4cp-22f, 0.0f, 0.0f, 0x1.033262p-94f,
     0x1.03afaap-40f, 0x1.9e43bp-104f, 0x1.67b3bep-115f, 0x1.e87cfcp-122f,
     0x1.57a0eep-12f, 0x1.a4da2p-23f, 0.0f, 0x1.500b8ap-84f, 0x1.c2a97ap-72f, 0.0f,
     0.0f, 0x1.796392p-2f, 0.0f, 0x1.f15adap-45f, 0.0f, 0x1.829172p-30f, 0.0f,
     0x1.ce75e8p-111f, 0.0f, 0x1.44213ep-115f, 0x1.04343p-86f, 0x1.e3edeep-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2298eap-96f, 0.0f, 0.0f, 0.0f, 0x1.94861p-52f, 0.0f,
     0.0f, 0x1.e679f8p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.735078p-20f, 0x1.18e692p-42f,
     0.0f, 0x1.896418p-45f, 0x1.4bc98cp-52f, 0x1.27ddeap-109f, 0.0f, 0x1.25f0dep-67f,
     0x1.ddb764p-21f, 0x1.226802p-123f, 0.0f, 0.0f, 0x1.875bcap-84f, 0x1.a9478p-69f,
     0.0f, 0x1.44c4ap-92f, 0x1.94308p-119f, 0.0f, 0.0f, 0.0f, 0x1.7ab47p-115f,
     0x1.e90bbap-27f, 0x1.c03234p-86f, 0.0f, 0x1.f022c8p-5f, 0x1.b58d88p-93f,
     0x1.589414p-124f, 0.0f, 0x1.b0690ap-105f, 0x1.c84a2ap-97f, 0x1.42e97ap-79f, 0.0f,
     0x1.277c26p-106f, 0x1.e59aeap-110f, 0.0f, 0x1.fda406p-37f, 0x1.1e6494p-3f, 0.0f,
     0.0f, 0.0f, 0x1.5c881ap-46f, 0.0f, 0x1.f8557ep-111f, 0x1.ff2f08p-106f,
     0x1.5a98d6p-70f, 0.0f, 0x1.b6f43ep-112f, 0.0f, 0x1.170632p-80f, 0x1.c5eb86p-59f,
     0.0f, 0x1.2d01a4p-14f, 0.0f, 0x1.fa7cdcp-112f, 0.0f, 0x1.96fdd2p-45f,
     0x1.ebeb34p-126f, 0x1.99c958p-79f, 0x1.3f02dp-69f, 0.0f, 0x1.58a2b4p-71f,
     0x1.1f9144p-103f, 0x1.f516c8p-84f, 0.0f, 0x1.1b3d18p-77f, 0.0f, 0.0f, 0.0f,
     0x1.681e98p-7f, 0x1.7a568p-122f, 0.0f, 0.0f, 0x1.83e55ap-13f, 0x1.487f58p-51f,
     0x1.4bddep-84f, 0x1.6c7a88p-92f, 0.0f, 0x1.68582ep-26f, 0x1.cbf72ap-103f, 0.0f,
     0.0f, 0x1.26b7bap-97f, 0.0f, 0.0f, 0x1.d25d94p-15f, 0.0f, 0.0f, 0.0f,
     0x1.1c6d02p-71f, 0x1.4b0b36p-92f, 0x1.2396cp-32f, 0.0f, 0.0f, 0x1.c98f5ap-24f,
     0x1.8878f6p-36f, 0.0f, 0x1.6845fap-13f, 0x1.d683b6p-40f, 0.0f, 0.0f,
     0x1.f46196p-49f, 0x1.1a8dp-61f, 0.0f, 0.0f, 0x1.88394ep-6f, 0x1.8c15dap-123f,
     0x1.32147cp-98f, 0x1.b048dap-41f, 0x1.1f6e4ap-64f, 0x1.abc31p-48f,
     0x1.4551dcp-65f, 0x1.58a72cp-20f, 0x1.f38cbcp-37f, 0.0f, 0.0f, 0x1.7f53dp-45f,
     0.0f, 0x1.821adp-35f, 0x1.aa7996p-117f, 0.0f, 0x1.114d7p-28f, 0x1.e934eep-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db781ap-20f, 0.0f, 0.0f,
     0x1.fd19dcp-34f, 0x1.3204aep-75f, 0x1.8f92dp-30f, 0.0f, 0x1.0b768cp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ae9a2p-29f, 0x1.0bacbap-1f,
     0x1.84e036p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4f0cep-19f, 0x1.c00074p-20f, 0.0f,
     0.0f, 0x1.685814p-93f, 0x1.cc0786p-53f, 0x1.91929ep-13f, 0.0f, 0.0f,
     0x1.110adap-72f, 0x1.9fab4ep-70f, 0.0f, 0.0f, 0.0f, 0x1.1cf55ep-52f,
     0x1.50a226p-33f, 0x1.ab03b4p-84f, 0x1.14ad2ap-112f, 0x1.f359d6p-31f,
     0x1.2bd874p-103f, 0.0f, 0.0f, 0x1.1f4c4ep-23f, 0x1.94995cp-7f, 0x1.8d5234p-121f,
     0x1.2bb294p-26f, 0.0f, 0x1.7f2cacp-37f, 0.0f, 0.0f, 0x1.ed3594p-26f,
     0x1.98bc5ap-55f, 0.0f, 0.0f, 0x1.b52882p-76f, 0.0f, 0x1.7e9f74p-37f,
     0x1.0d2fdcp-66f, 0x1.556082p-59f, 0x1.ce1738p-51f, 0x1.b4bf1ep-89f, 0.0f,
     0x1.28f5fcp-74f, 0x1.edbb32p-43f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e212cp-66f, 0x1.9e1f1p-44f, 0.0f, 0.0f, 0x1.88620cp-68f, 0.0f, 0.0f,
     0x1.887eecp-91f, 0x1.230f38p-122f, 0x1.1faca4p-68f, 0.0f, 0x1.42b17ep-71f, 0.0f,
     0x1.4f2bacp-123f, 0x1.e3feap-80f, 0.0f, 0.0f, 0x1.6c344p-20f, 0.0f, 0.0f,
     0x1.db705ap-56f, 0.0f, 0x1.277c3ep-92f, 0.0f, 0x1.8a1e7cp-104f, 0.0f,
     0x1.046a9ep-91f, 0.0f, 0x1.4bc548p-40f, 0.0f, 0.0f, 0x1.01893cp-14f,
     0x1.03b124p-5f, 0.0f, 0x1.0ac462p-93f, 0.0f, 0x1.29619p-88f, 0.0f,
     0x1.7c36b6p-97f, 0x1.18b75p-7f, 0.0f, 0.0f, 0.0f, 0x1.098fbcp-99f,
     0x1.51dc34p-37f, 0x1.581a76p-57f, 0.0f, 0.0f, 0x1.b87e16p-23f, 0x1.25f602p-19f,
     0.0f, 0.0f, 0x1.130914p-11f, 0.0f, 0x1.742538p-113f, 0.0f, 0.0f,
     0x1.78f332p-102f, 0x1.c596aep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bcad2p-9f, 0.0f, 0x1.93786ap-9f, 0.0f, 0x1.36562ep-30f, 0.0f,
     0x1.9660aap-76f, 0x1.753bf6p-64f, 0x1.a60b2ap-80f, 0.0f, 0x1.d7a2f2p-22f,
     0x1.33da68p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9482f6p-106f, 0.0f, 0.0f,
     0x1.5290d4p-15f, 0x1.50ebd6p-31f, 0x1.d3e044p-65f, 0.0f, 0.0f, 0x1.926a4ap-47f,
     0.0f, 0x1.a959aep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebc67cp-116f, 0.0f,
     0x1.fad7eep-73f, 0.0f, 0.0f, 0x1.95274ap-39f, 0.0f, 0.0f, 0.0f, 0x1.7e81c2p-61f,
     0x1.b4d7f2p-80f, 0x1.682dbap-43f, 0.0f, 0x1p0f, 0x1.0c4768p-96f, 0.0f, 0.0f,
     0x1.7afe2ap-60f, 0.0f, 0.0f, 0.0f, 0x1.1cdbeep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6389f2p-13f, 0x1.59b05ap-109f, 0.0f, 0x1.4b69eap-24f, 0x1.52cfa6p-30f,
     0x1.922f6ep-51f, 0.0f, 0.0f, 0x1.faa6b6p-115f, 0x1.67aec8p-77f, 0.0f,
     0x1.a314fcp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.472648p-36f, 0.0f, 0x1.ec10a2p-27f,
     0x1.1661ecp-10f, 0.0f, 0.0f, 0x1.33a28ep-3f, 0.0f, 0.0f, 0x1.7dff52p-88f, 0.0f,
     0.0f, 0.0f, 0x1.a4ca58p-91f, 0x1.951f98p-25f, 0.0f, 0x1.305c44p-85f,
     0x1.b2d1aap-7f, 0.0f, 0x1.03b1ccp-90f, 0x1.7662acp-105f, 0.0f, 0.0f,
     0x1.6e23eap-114f, 0.0f, 0x1.f1d042p-90f, 0x1.4cd522p-78f, 0x1.5de084p-63f, 0.0f,
     0x1.f5462p-45f, 0.0f, 0x1.d0c5ep-58f, 0.0f, 0x1.0932cp-107f, 0x1.d9f448p-26f,
     0x1.e3b5eep-7f, 0.0f, 0x1.bc49dep-102f, 0.0f, 0x1.bf20fcp-36f, 0x1.fcee24p-101f,
     0x1.760388p-16f, 0.0f, 0x1.d0d964p-50f, 0x1.6ee1ecp-46f, 0x1.92336cp-106f, 0.0f,
     0x1.962558p-107f, 0x1.86f33p-88f, 0.0f, 0x1.4ec52ep-31f, 0x1.13b63p-15f, 0.0f,
     0x1.48c456p-125f, 0x1.a7e154p-37f, 0x1.9e0b32p-93f, 0x1.5d128ep-84f,
     0x1.926ccap-121f, 0.0f, 0x1.8d9f36p-51f, 0x1.6a1f42p-11f, 0.0f, 0x1p0f, 0.0f,
     0x1.671f94p-99f, 0x1.fadb9ep-61f, 0.0f, 0.0f, 0.0f, 0x1.76d944p-10f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6798ap-82f, 0x1.9a82bap-36f, 0x1.0f3fap-79f, 0x1.386fp-15f,
     0x1.a5cff2p-11f, 0.0f, 0.0f, 0x1.ebbfb8p-95f, 0.0f, 0.0f, 0.0f, 0x1.c86cep-122f,
     0x1.9d912ep-46f, 0x1.dddfaep-10f, 0x1.454c3ap-88f, 0x1.f66226p-52f, 0.0f, 0.0f,
     0x1.9f3b58p-92f, 0.0f, 0.0f, 0x1.2428eap-80f, 0.0f, 0x1.3f6bdp-101f,
     0x1.4adbf8p-89f, 0x1.a30576p-105f, 0x1.67f7dp-81f, 0x1.b29ffep-19f,
     0x1.d1bf08p-56f, 0.0f, 0x1.b2c668p-9f, 0x1.42e228p-37f, 0.0f, 0x1.3b3204p-106f,
     0.0f, 0x1.fce746p-39f, 0.0f, 0.0f, 0x1.613f5ep-43f, 0.0f, 0x1.ab9582p-45f, 0.0f,
     0x1.b47afap-31f, 0x1.8a58d8p-38f, 0.0f, 0x1.ff4362p-122f, 0.0f, 0.0f,
     0x1.c0622ep-33f, 0.0f, 0.0f, 0.0f, 0x1.1966fcp-40f, 0.0f, 0x1.20b03ap-64f,
     0x1.cfab6p-67f, 0x1.3f9bf8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0408cep-120f, 0.0f,
     0.0f, 0x1.22e598p-126f, 0.0f, 0x1.efec4ep-20f, 0x1.3236aap-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.51f44ap-66f, 0x1.1af356p-38f, 0x1.e66e72p-63f, 0.0f,
     0x1.3eab4ep-66f, 0x1.470f42p-18f, 0x1.05530cp-81f, 0x1.80609p-108f,
     0x1.e48d5p-67f, 0.0f, 0x1.9d241cp-99f, 0x1.ddf0b8p-34f, 0x1.36d51p-121f, 0.0f,
     0.0f, 0.0f, 0x1.6cdc66p-38f, 0x1.52acd2p-98f, 0.0f, 0.0f, 0x1.6dbf92p-18f, 0.0f,
     0x1.80a30ap-26f, 0.0f, 0.0f, 0x1.1c81fap-32f, 0x1.9a6d52p-94f, 0x1.b7236cp-46f,
     0x1.529938p-11f, 0.0f, 0.0f, 0.0f, 0x1.d19fdcp-120f, 0.0f, 0x1.90401ep-50f,
     0x1.87dda6p-104f, 0x1.e7fc8ep-73f, 0x1.bf7308p-18f, 0.0f, 0.0f, 0x1.c515f8p-116f,
     0.0f, 0x1.9e7a7ap-14f, 0x1.a4863p-35f, 0x1.2a8dcep-92f, 0.0f, 0x1.f90b62p-9f,
     0x1.354c3ap-26f, 0.0f, 0x1.1e106cp-12f, 0x1.1fa51cp-61f, 0.0f, 0.0f,
     0x1.464a1ep-52f, 0x1.f9d806p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.345862p-12f,
     0x1.a776ap-42f, 0.0f, 0x1.c7dd42p-72f, 0x1.50ea5ep-79f, 0x1.d2729ap-50f, 0.0f,
     0x1.f90dcp-58f, 0.0f, 0.0f, 0x1.00a5a2p-73f, 0x1.009e7ap-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.849dc8p-40f, 0x1.a8d9e2p-10f, 0x1.c34318p-12f,
     0x1.b3bdfep-82f, 0x1.03601ap-96f, 0.0f, 0x1.16911p-54f, 0.0f, 0.0f,
     0x1.a3f338p-74f, 0x1.d3db3cp-8f, 0x1.53abb6p-54f, 0.0f, 0x1.730c5cp-65f,
     0x1.3ccef2p-83f, 0x1.ab3fccp-57f, 0.0f, 0x1.da5f8ep-31f, 0x1.342918p-84f, 0.0f,
     0.0f, 0x1.536d0cp-95f, 0.0f, 0x1.a5e91ap-45f, 0x1.51cab6p-110f, 0.0f, 0.0f,
     0x1.06206ap-50f, 0x1.f351fep-93f, 0x1.d3f8bep-122f, 0.0f, 0.0f, 0x1.c0550ep-23f,
     0.0f, 0x1.7c6482p-108f, 0x1.d5e2bp-108f, 0x1.0a38dap-20f, 0x1.1b3b7ep-13f,
     0x1.d921a4p-31f, 0x1.d453dp-60f, 0x1.88547cp-99f, 0x1.a3e6bap-98f, 0.0f,
     0x1.940e3ap-65f, 0x1.e63b68p-86f, 0x1.77243ep-25f, 0.0f, 0.0f, 0x1.a1526ap-120f,
     0x1.50352ep-9f, 0.0f, 0.0f, 0x1.5e6be8p-98f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c7588p-79f, 0.0f, 0.0f, 0.0f, 0x1.27929ap-24f, 0x1.3fa35cp-109f,
     0x1.c1919p-26f, 0x1.84b5f4p-18f, 0.0f, 0x1.4440e8p-66f, 0.0f, 0.0f,
     0x1.43176ep-7f, 0x1p0f, 0x1.a467f8p-54f, 0.0f, 0.0f, 0x1.10768cp-59f,
     0x1.de731ap-13f, 0.0f, 0x1.190506p-87f, 0x1.130008p-67f, 0.0f, 0.0f,
     0x1.2fcc72p-76f, 0x1.9e157ep-41f, 0x1.9f618cp-109f, 0.0f, 0x1.20e27ap-50f,
     0x1.69795ep-34f, 0.0f, 0x1.d15bf6p-90f, 0x1.d77374p-45f, 0x1.8e7512p-102f, 0.0f,
     0x1.c1458ap-70f, 0.0f, 0x1.f02404p-103f, 0.0f, 0.0f, 0x1.719692p-1f, 0.0f,
     0x1.762272p-48f, 0x1.1bb6a2p-35f, 0x1.38647ap-39f, 0.0f, 0x1.25798ep-101f,
     0x1.df18f6p-4f, 0.0f, 0x1.98f432p-13f, 0x1.f7d288p-7f, 0x1.f6edap-109f,
     0x1.874a9p-72f, 0.0f, 0x1.12b512p-85f, 0x1.f22fd2p-79f, 0.0f, 0x1.cd6a02p-106f,
     0.0f, 0x1.cc13ap-24f, 0.0f, 0.0f, 0.0f, 0x1.919dccp-63f, 0.0f, 0x1.f7098ep-52f,
     0.0f, 0.0f, 0x1.dbcc9ep-52f, 0x1.5450f4p-74f, 0.0f, 0x1.e0a44cp-84f, 0.0f, 0.0f,
     0x1.ad664ap-6f, 0x1.9f5538p-56f, 0.0f, 0.0f, 0.0f, 0x1.0f22e8p-45f, 0.0f, 0.0f,
     0x1.a00e7cp-11f, 0.0f, 0.0f, 0x1.c3926ap-95f, 0.0f, 0x1.2aae56p-103f, 0.0f, 0.0f,
     0x1.0d5fa8p-106f, 0x1.c77c24p-56f, 0x1.825dbep-72f, 0x1.fee5bp-38f,
     0x1.ae6f28p-79f, 0x1.4527eep-25f, 0x1.a1f4a6p-76f, 0x1.221ea4p-115f, 0.0f,
     0x1.9ce3fcp-120f, 0x1.0f8ba8p-8f, 0x1.f7cdbp-34f, 0x1.cc3a5ep-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbc3ap-94f, 0.0f, 0.0f, 0.0f, 0x1.495866p-4f, 0.0f,
     0.0f, 0x1.22956ap-15f, 0x1.389404p-49f, 0.0f, 0.0f, 0.0f, 0x1.2ed646p-116f,
     0x1.d01782p-20f, 0.0f, 0x1.3d1522p-97f, 0x1.e0035cp-120f, 0.0f, 0x1.d60f5p-57f,
     0x1.751abep-100f, 0.0f, 0x1.d7d7d6p-50f, 0.0f, 0x1.83b2a2p-37f, 0.0f,
     0x1.ab5a4cp-23f, 0x1.43bf04p-58f, 0.0f, 0.0f, 0.0f, 0x1.01bdf6p-108f, 0.0f, 0.0f,
     0.0f, 0x1.7d2828p-95f, 0x1.4323b8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2a5a8p-67f, 0x1.2651aap-93f, 0x1.edb256p-70f, 0x1p0f, 0x1.c3f9aep-25f,
     0x1.47e68cp-9f, 0x1.96967cp-24f, 0.0f, 0x1.7321a4p-68f, 0x1.b1582p-115f,
     0x1.2c5e04p-27f, 0x1.91d928p-14f, 0x1.215292p-46f, 0x1.479b28p-12f,
     0x1.42da1p-81f, 0x1.ed674p-122f, 0x1.585e44p-72f, 0.0f, 0.0f, 0x1.110966p-7f,
     0x1.4cae98p-59f, 0x1.fcfd16p-89f, 0x1.c70074p-19f, 0.0f, 0x1.e28586p-31f,
     0x1.690cdap-90f, 0.0f, 0x1.a72618p-60f, 0.0f, 0.0f, 0x1.2a5c64p-100f, 0.0f, 0.0f,
     0.0f, 0x1.840736p-20f, 0x1.d9653p-18f, 0x1.03884cp-88f, 0.0f, 0.0f,
     0x1.11fc6ap-63f, 0.0f, 0.0f, 0.0f, 0x1.ead976p-36f, 0x1.ff7e86p-13f, 0.0f,
     0x1.1d553ap-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7759p-122f, 0x1.dc656p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ac406p-105f, 0x1.d76af4p-18f, 0.0f, 0.0f, 0.0f,
     0x1.47e012p-103f, 0x1.131408p-30f, 0x1.db01fcp-75f, 0x1.1df216p-85f, 0.0f,
     0x1.e3776ep-23f, 0.0f, 0x1.7fcf3ep-124f, 0x1.4774fap-31f, 0.0f, 0x1.c8b4c2p-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8925bep-42f, 0x1.c5bfccp-126f, 0x1.67f474p-75f, 0.0f,
     0.0f, 0x1.76d192p-59f, 0x1.bbe314p-79f, 0.0f, 0x1.72c5e2p-29f, 0.0f,
     0x1.7d3c6p-64f, 0x1.4c8f8ep-90f, 0x1.06ccdcp-33f, 0x1.7e1f82p-31f, 0.0f,
     0x1.313b6ep-83f, 0.0f, 0x1.56f10ap-85f, 0.0f, 0x1.73bf9p-3f, 0.0f, 0.0f,
     0x1.17f55ep-20f, 0x1.24f812p-89f, 0.0f, 0.0f, 0x1.7e4284p-104f, 0.0f,
     0x1.9e099ep-37f, 0x1.707af4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7975ccp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a892ep-20f, 0x1.3ef734p-94f, 0x1.a729c4p-61f, 0.0f, 0.0f,
     0x1.461beep-74f, 0.0f, 0x1.1a7f42p-94f, 0.0f, 0.0f, 0x1.29c756p-19f,
     0x1.228bb2p-78f, 0x1.9d73dcp-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9f146p-1f, 0.0f,
     0.0f, 0x1.3b4d88p-50f, 0x1.556302p-108f, 0x1.d6c4cep-74f, 0.0f, 0x1.7ee086p-115f,
     0x1.ba3e14p-37f, 0x1.9dd56p-46f, 0x1.0ea654p-36f, 0.0f, 0x1.76b768p-11f,
     0x1.130dc2p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfd5ep-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8c25ap-125f, 0.0f, 0.0f, 0.0f, 0x1.918a44p-36f, 0x1.44695ep-83f
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
            tmp1 = Sleef_asinf1_u10purecfma(tmp0);
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
    printf("Sleef_asinf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
