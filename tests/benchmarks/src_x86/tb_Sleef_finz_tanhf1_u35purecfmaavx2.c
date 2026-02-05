/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf1_u35purecfma.c --function \
 *     Sleef_finz_tanhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.0e22b8p-108f, 0.0f, 0x1.ff3c02p-122f, 0x1.3a068ep-5f,
     0x1.901368p-123f, 0.0f, 0.0f, 0x1.aa80e8p-71f, 0x1.c83c4ap-115f, 0x1.ef8586p-53f,
     0x1.7d66f4p-90f, 0.0f, 0x1.06302cp-14f, 0x1.56d7c6p-55f, 0x1.824ee8p-110f,
     0x1.d7ab52p-68f, 0x1.9425e2p-23f, 0.0f, 0.0f, 0.0f, 0x1.dd2a1cp-76f,
     0x1.675112p-113f, 0x1.da6156p-82f, 0x1.2bbb0ep-12f, 0x1.628a6p-119f,
     0x1.6ff2bep-10f, 0.0f, 0x1.5940aep-6f, 0.0f, 0.0f, 0x1.9299bep-27f, 0.0f,
     0x1.0f35f8p-18f, 0x1.deda3p-110f, 0.0f, 0x1.aca0a4p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8bd5ap-71f, 0.0f, 0x1.855dc2p-115f, 0.0f, 0x1.d3f92ap-30f, 0.0f,
     0x1.ce25d6p-115f, 0x1.a08aeep-80f, 0x1.6d025ap-60f, 0.0f, 0.0f, 0x1.cb1806p-17f,
     0.0f, 0.0f, 0x1.4fd796p-123f, 0x1.49fc16p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.80f7c2p-54f, 0.0f, 0.0f, 0x1.86a7c8p-44f, 0x1.31beb2p-102f,
     0x1.d0f7ccp-87f, 0.0f, 0.0f, 0.0f, 0x1.c4c634p-10f, 0x1.b06f46p-108f, 0.0f, 0.0f,
     0x1.f6a2bp-55f, 0x1.a15318p-9f, 0.0f, 0x1.710d5ap-89f, 0x1.25fa8cp-44f,
     0x1.483448p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb8f26p-54f,
     0.0f, 0x1.16fbaep-90f, 0x1.68948ep-21f, 0x1.945e9cp-39f, 0.0f, 0x1.884e9cp-110f,
     0x1.5fda5ap-116f, 0.0f, 0.0f, 0.0f, 0x1.ad013ap-81f, 0x1.e129f8p-118f,
     0x1.beea94p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.abe8f4p-3f, 0.0f, 0.0f,
     0.0f, 0x1.a6928p-13f, 0.0f, 0.0f, 0x1.ad99ep-64f, 0.0f, 0x1.a15c66p-72f,
     0x1.df0176p-56f, 0.0f, 0x1.346584p-11f, 0x1.315588p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4aab2p-79f, 0x1.239f9p-119f, 0.0f, 0.0f, 0x1.42e92p-110f, 0x1.a52706p-11f,
     0x1.756a6ap-41f, 0.0f, 0.0f, 0x1.815bdep-66f, 0.0f, 0x1.f1fa66p-81f, 0.0f,
     0x1.22a38ep-62f, 0x1.00cce8p-79f, 0.0f, 0x1.633b46p-24f, 0.0f, 0x1.c15ef8p-80f,
     0.0f, 0.0f, 0.0f, 0x1.cf9d24p-79f, 0x1.dddefcp-80f, 0x1.9b319p-41f, 0.0f,
     0x1.4bd82ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe8b62p-80f, 0.0f,
     0x1.714f1cp-100f, 0x1.b1b83ep-31f, 0x1.3dc5ap-103f, 0x1.2cc7e8p-8f,
     0x1.f02d1ap-50f, 0.0f, 0.0f, 0x1.05bd62p-15f, 0.0f, 0x1.e155cp-125f, 0.0f, 0.0f,
     0x1.c6dd82p-11f, 0.0f, 0.0f, 0x1.6a395cp-89f, 0x1.b05bf4p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0209bep-62f, 0.0f, 0x1.a56278p-47f, 0x1.16207cp-17f, 0.0f,
     0x1.79ebacp-19f, 0x1.9df7fp-87f, 0.0f, 0x1.ce600ep-82f, 0x1.c87822p-54f,
     0x1.1424e2p-70f, 0.0f, 0x1.2a7f3cp-96f, 0.0f, 0x1.b136bp-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f2e7e8p-38f, 0x1.b113b4p-25f, 0x1.2f7ce6p-31f, 0.0f, 0x1.09ea56p-95f,
     0x1.56ded8p-107f, 0.0f, 0.0f, 0x1.cf8f2p-108f, 0.0f, 0x1.2823d8p-34f,
     0x1.ade84ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b6392p-60f, 0.0f, 0x1.4c13dep-25f,
     0x1.6c2452p-40f, 0.0f, 0x1.2d3ac2p-14f, 0x1.5cca68p-124f, 0.0f, 0x1.49d5p-57f,
     0x1.8510e8p-47f, 0x1.f3a798p-30f, 0.0f, 0.0f, 0x1.ec946p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.970bd4p-80f, 0.0f, 0.0f, 0x1.1a006ep-100f, 0x1.f80a56p-45f, 0.0f,
     0x1.e7227p-43f, 0.0f, 0.0f, 0x1.ddad0ep-102f, 0.0f, 0.0f, 0x1.ac4112p-18f, 0.0f,
     0x1.17320ep-20f, 0x1.e44a1ep-74f, 0.0f, 0.0f, 0x1.1619e4p-119f, 0.0f,
     0x1.62ap-28f, 0x1.cd731cp-77f, 0x1.4d056ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc405ep-27f, 0.0f, 0.0f, 0.0f, 0x1.70ff66p-37f, 0.0f, 0x1.73e98p-26f, 0.0f,
     0x1.6da08p-85f, 0x1.2aca6cp-24f, 0x1.68600cp-84f, 0x1.4c2d26p-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8dc68p-9f, 0x1.6d033ep-29f, 0.0f, 0.0f,
     0x1.0654eap-81f, 0x1.b8a372p-91f, 0x1.ac9f14p-118f, 0x1.21b9b4p-108f,
     0x1.327958p-24f, 0x1.ce3332p-87f, 0x1.37d6c6p-65f, 0.0f, 0x1.e2605cp-49f, 0.0f,
     0x1.dd1b5cp-3f, 0x1.bfd32ep-40f, 0.0f, 0x1.5dec6cp-42f, 0x1.96f742p-116f,
     0x1.69e5e2p-109f, 0x1.f28a42p-97f, 0.0f, 0.0f, 0x1.719f18p-99f, 0x1.5432d4p-12f,
     0x1.b1b60ap-33f, 0x1.7123ep-57f, 0x1.f940dp-124f, 0.0f, 0x1.2164d4p-24f,
     0x1.da9ebap-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7d2e6p-110f, 0.0f, 0.0f,
     0x1.c540e6p-117f, 0.0f, 0x1.02b618p-36f, 0.0f, 0x1.96f122p-59f, 0x1.3cc5f4p-34f,
     0.0f, 0.0f, 0x1.380bb4p-61f, 0.0f, 0x1.bebf2p-119f, 0.0f, 0x1.f2bcc2p-70f, 0.0f,
     0x1.51c366p-82f, 0.0f, 0x1.eb58d6p-124f, 0.0f, 0x1.7d995ep-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b55e26p-109f, 0x1.bdfedap-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e35c2p-123f, 0.0f, 0.0f, 0.0f, 0x1.100c28p-38f, 0x1.96cad8p-72f, 0.0f, 0.0f,
     0x1.7d14aep-44f, 0.0f, 0x1.fbce0ap-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f41e4p-117f,
     0x1.3989f2p-20f, 0.0f, 0x1.d8c284p-57f, 0x1.a0af96p-84f, 0.0f, 0.0f,
     0x1.5c2b2cp-9f, 0x1.580c1ap-84f, 0x1.9badccp-55f, 0.0f, 0x1.d45e1cp-7f, 0.0f,
     0x1.44b8dap-58f, 0x1.a3a894p-112f, 0x1.441f24p-34f, 0.0f, 0.0f, 0x1.ee0644p-123f,
     0x1.d269ecp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49b488p-103f, 0.0f,
     0x1.a8a268p-66f, 0.0f, 0x1.703f32p-96f, 0x1.4cfef6p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95e748p-2f, 0x1.527a2cp-86f,
     0x1.80152p-122f, 0.0f, 0x1.da6382p-95f, 0.0f, 0x1p0f, 0x1.ac0c44p-109f,
     0x1.fabb2ep-74f, 0.0f, 0x1.e2ed7cp-41f, 0.0f, 0x1.4f28b2p-99f, 0x1.f65c46p-70f,
     0x1.186e7ap-108f, 0.0f, 0x1.eb4cb8p-121f, 0x1.b27afep-6f, 0.0f, 0.0f,
     0x1.f540a2p-96f, 0x1.1a3a3cp-19f, 0x1.dbb682p-124f, 0.0f, 0.0f, 0.0f,
     0x1.3f96cp-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99d95ap-111f, 0.0f,
     0x1.6f4e5cp-111f, 0x1.f5aafap-94f, 0x1.772588p-105f, 0x1.3c7c2ap-65f, 0.0f, 0.0f,
     0x1.e9b0a8p-95f, 0x1.c74ddap-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db8438p-30f, 0x1.7cf0bcp-53f, 0.0f, 0.0f, 0x1.887512p-104f, 0x1.57c2f4p-119f,
     0x1.f3398ap-105f, 0x1.6f408ep-24f, 0x1.45534cp-37f, 0.0f, 0x1.46681ep-122f, 0.0f,
     0x1.736a34p-10f, 0.0f, 0x1.20b6acp-58f, 0x1.7aa35ep-22f, 0.0f, 0x1.268c3ap-89f,
     0.0f, 0x1.8632ep-13f, 0.0f, 0x1.331e22p-19f, 0.0f, 0.0f, 0x1.e843b4p-36f, 0.0f,
     0.0f, 0x1.ffc66ap-22f, 0.0f, 0.0f, 0x1.43be8p-7f, 0x1.226d9p-88f, 0.0f,
     0x1.417346p-101f, 0x1.ce36b8p-20f, 0x1.56f9d8p-6f, 0x1.f7669p-98f,
     0x1.c3c85ep-50f, 0.0f, 0x1.095102p-5f, 0x1.f3c52ap-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2e32p-93f, 0.0f, 0.0f, 0x1.9b096p-10f, 0.0f, 0.0f, 0x1.6a8404p-110f,
     0x1.8fc1a4p-49f, 0.0f, 0.0f, 0x1.ae7c7cp-88f, 0.0f, 0.0f, 0x1.d56c56p-82f, 0.0f,
     0.0f, 0.0f, 0x1.78ced4p-78f, 0x1.500d2ap-37f, 0x1.3c2f8ep-12f, 0.0f,
     0x1.ea470cp-120f, 0x1.0aa1cp-82f, 0x1.0447cap-65f, 0x1.62c458p-40f, 0.0f,
     0x1.c5067cp-12f, 0x1.82dc5p-3f, 0x1.e442eap-74f, 0x1.07e862p-1f, 0.0f, 0.0f,
     0x1.1105cep-65f, 0.0f, 0x1.fbfc12p-6f, 0x1.26feccp-99f, 0.0f, 0.0f,
     0x1.e92b32p-100f, 0.0f, 0x1.24ce1cp-118f, 0x1.96d338p-24f, 0x1.b167dap-87f, 0.0f,
     0x1.06227p-88f, 0.0f, 0.0f, 0x1.6d5242p-104f, 0x1.7db662p-112f, 0.0f,
     0x1.775ab8p-31f, 0x1.94e4aep-47f, 0x1.1c0be2p-90f, 0x1.1f761cp-38f, 0.0f, 0.0f,
     0x1.2177c6p-5f, 0.0f, 0.0f, 0x1.9452ccp-33f, 0x1.b2202p-95f, 0x1p0f,
     0x1.a8d4aep-106f, 0x1.d9fce4p-33f, 0x1.63d89ep-39f, 0x1.1e2bd6p-110f,
     0x1.11a0dep-59f, 0x1.7c2c48p-123f, 0x1.b87bd2p-89f, 0.0f, 0.0f, 0x1.e13fdcp-90f,
     0x1.2a1064p-74f, 0.0f, 0.0f, 0x1.3f1ab6p-12f, 0x1.f7cdbep-104f, 0x1.8b46cap-37f,
     0x1.11321cp-73f, 0x1.ed1438p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.618602p-55f, 0x1.a7b3c4p-10f, 0x1.750ccep-22f, 0.0f, 0x1.a38f9ap-35f, 0.0f,
     0x1.8da8d4p-75f, 0x1.f07edep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.164528p-71f,
     0.0f, 0.0f, 0x1.332bf6p-61f, 0.0f, 0.0f, 0x1.a78702p-126f, 0.0f,
     0x1.8869cap-121f, 0.0f, 0x1.5728fep-105f, 0x1.b502aap-126f, 0x1.597e36p-54f,
     0x1.cc6f2ap-28f, 0.0f, 0.0f, 0x1.5eddb2p-20f, 0x1.0d49fcp-72f, 0.0f,
     0x1.c20934p-61f, 0.0f, 0x1.832a3cp-120f, 0x1.6fb756p-80f, 0x1.7d754cp-113f, 0.0f,
     0.0f, 0x1.1ea312p-59f, 0.0f, 0.0f, 0x1.9d1066p-118f, 0x1.45f08cp-120f,
     0x1.6106fcp-1f, 0.0f, 0x1.5c115ep-105f, 0x1.389fd8p-115f, 0x1.6503c2p-111f, 0.0f,
     0x1.b2b7bcp-83f, 0x1.50c2d4p-100f, 0.0f, 0.0f, 0x1.fc6058p-119f, 0.0f, 0.0f,
     0.0f, 0x1.666b42p-8f, 0.0f, 0.0f, 0.0f, 0x1.d095c8p-31f, 0.0f, 0.0f, 0.0f,
     0x1.f64e6p-97f, 0.0f, 0.0f, 0.0f, 0x1.9d6ec8p-117f, 0x1.3d5d56p-94f,
     0x1.86a2bp-104f, 0x1.1c7cfep-123f, 0.0f, 0x1.686ff8p-63f, 0.0f, 0.0f,
     0x1.340e28p-6f, 0.0f, 0.0f, 0.0f, 0x1.6b38bcp-105f, 0x1.4106d2p-94f, 0.0f,
     0x1.3e2d4cp-41f, 0x1.a564f6p-93f, 0x1.af6f8ap-117f, 0x1.8ee9cep-86f,
     0x1.b13f0ap-5f, 0x1.b975e2p-50f, 0x1.fc5496p-79f, 0.0f, 0x1.9e7f72p-38f,
     0x1.05faeap-45f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a15f18p-12f,
     0.0f, 0.0f, 0.0f, 0x1.0c8354p-12f, 0.0f, 0x1.5de5f4p-47f, 0.0f, 0x1.004028p-17f,
     0x1.23087ep-5f, 0x1.91496ap-102f, 0x1.3abe48p-126f, 0x1.9ba35ap-55f,
     0x1.016692p-67f, 0.0f, 0x1.63c29ap-75f, 0.0f, 0x1.2042c8p-14f, 0.0f, 0.0f,
     0x1.a22a3cp-29f, 0x1.2e768ap-21f, 0.0f, 0x1.1d59p-123f, 0.0f, 0.0f, 0.0f,
     0x1.3b5f8ap-64f, 0x1.776768p-92f, 0x1.c99bfep-31f, 0.0f, 0.0f, 0x1.700cfcp-87f,
     0.0f, 0x1.af39c2p-94f, 0.0f, 0.0f, 0.0f, 0x1.dd4602p-5f, 0.0f, 0x1.3a012ep-102f,
     0x1.c29b14p-18f, 0.0f, 0x1.3e75ap-56f, 0.0f, 0x1.1a6662p-103f, 0x1.064056p-74f,
     0x1.22769ap-70f, 0x1.0c561ep-3f, 0.0f, 0x1.1603d2p-14f, 0.0f, 0x1.8d90d8p-81f,
     0.0f, 0.0f, 0.0f, 0x1.51709ap-57f, 0x1.db2798p-43f, 0x1.0108a4p-70f, 0.0f,
     0x1.afac9ep-15f, 0.0f, 0.0f, 0x1.831bd4p-98f, 0.0f, 0.0f, 0x1.fa912ap-106f, 0.0f,
     0x1.3c33a6p-88f, 0x1.b409e8p-28f, 0.0f, 0.0f, 0.0f, 0x1.5a110ap-11f,
     0x1.c5470cp-106f, 0x1.1accaep-51f, 0.0f, 0x1.63ecdap-79f, 0x1.878c5ap-82f,
     0x1.c641d4p-107f, 0x1.5e05e8p-49f, 0x1.ce6ec6p-52f, 0.0f, 0x1.5a9c94p-6f, 0.0f,
     0x1.37339ep-97f, 0x1.87b898p-47f, 0x1.88ef66p-118f, 0x1.ff647ap-81f, 0.0f,
     0x1.45cd02p-26f, 0.0f, 0x1.499bf2p-24f, 0.0f, 0.0f, 0x1.d1819p-105f,
     0x1.08ab7p-51f, 0.0f, 0x1.0e0d96p-97f, 0x1.3347a2p-12f, 0.0f, 0x1.9b427ap-13f,
     0.0f, 0.0f, 0x1.ea1abcp-114f, 0x1.ad495ap-31f, 0x1.29498ap-119f, 0.0f, 0.0f,
     0x1.f251dcp-53f, 0.0f, 0.0f, 0x1.dff9fap-94f, 0.0f, 0x1.db331p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.580298p-125f, 0x1.509fa8p-24f, 0.0f, 0.0f, 0x1.51669cp-79f, 0.0f,
     0x1.51a7b6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8e1ap-47f, 0.0f, 0x1.70669ep-45f,
     0.0f, 0x1.61b4e6p-82f, 0.0f, 0.0f, 0.0f, 0x1.e92a76p-54f, 0x1.548502p-70f,
     0x1.fa1p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70c7a6p-40f,
     0x1.ad1902p-55f, 0x1.6cc6eep-99f, 0.0f, 0x1.9933f8p-55f, 0x1.a538ep-89f,
     0x1.fd9632p-100f, 0x1.d79b9ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a82d2p-23f,
     0x1.4ab8bep-22f, 0.0f, 0x1.391c66p-93f, 0.0f, 0x1.d2121p-66f, 0.0f, 0.0f,
     0x1.2a2804p-96f, 0.0f, 0.0f, 0x1.844716p-6f, 0x1.0aef32p-2f, 0x1.023f84p-57f,
     0x1.c80266p-5f, 0.0f, 0.0f, 0x1.1d7cap-126f, 0.0f, 0.0f, 0x1.1b0c6ap-81f,
     0x1.150edp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f139cp-36f,
     0x1.00a02ep-6f, 0.0f, 0x1.951826p-122f, 0x1.09eb02p-12f, 0.0f, 0x1.6e3e16p-7f,
     0.0f, 0x1.82dea6p-114f, 0.0f, 0x1.01f54ap-96f, 0x1.10cb9ap-114f, 0x1.4b55aep-29f,
     0x1.ea1ee4p-62f, 0.0f, 0x1.c8c664p-22f, 0x1.59b814p-26f, 0.0f, 0x1.8e9194p-113f,
     0.0f, 0.0f, 0x1.91e56p-30f, 0x1.b426bcp-123f, 0.0f, 0x1.1eda9ep-66f,
     0x1.d5d4bep-12f, 0x1.c3cc3cp-17f, 0x1.0026ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.81d508p-9f, 0x1.6f8decp-117f, 0.0f, 0.0f, 0.0f, 0x1.cefacep-70f,
     0x1.1cf4b2p-86f, 0.0f, 0.0f, 0x1.d09f9p-5f, 0.0f, 0x1.2b0f2ap-33f, 0.0f,
     0x1.642bf8p-100f, 0.0f, 0.0f, 0x1.2f9cc6p-9f, 0x1.f926fap-15f, 0x1.7c61aap-125f,
     0.0f, 0.0f, 0.0f, 0x1.5dfae6p-109f, 0.0f, 0x1.5618f6p-65f, 0.0f, 0.0f,
     0x1.b9073ep-16f, 0.0f, 0.0f, 0.0f, 0x1.c5a2ep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a48806p-41f, 0.0f, 0x1.d89192p-87f, 0x1.bb042ep-70f, 0.0f, 0x1.a6bb2cp-10f,
     0x1.d89c84p-31f, 0x1.8c059cp-118f, 0x1.9faf1cp-82f, 0.0f, 0x1.59d89ap-12f, 0.0f,
     0.0f, 0x1.eb1d3cp-99f, 0x1.110e86p-81f, 0x1.62d518p-117f, 0x1.229818p-76f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.58ba92p-19f, 0x1.bef2b4p-69f, 0.0f, 0x1.b4d4cap-5f,
     0.0f, 0.0f, 0.0f, 0x1.1ce118p-72f, 0.0f, 0x1.9ba3ep-85f, 0.0f, 0x1.eff5fp-69f,
     0x1.aaef24p-95f, 0x1.f245c6p-116f, 0x1.7dc74p-58f, 0x1.a9a7d4p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.54140ep-13f, 0x1.ed88cep-58f, 0.0f, 0.0f, 0x1.ea763ap-107f,
     0x1.a53aa6p-21f, 0x1.d6d898p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_tanhf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tanhf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
