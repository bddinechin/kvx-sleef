/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif4_u05avx2128.c --function \
 *     Sleef_finz_sincospif4_u05avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.0f9e2cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d40212p-43f,
     0x1.77fd98p-42f, 0x1.2c4382p-22f, 0x1.f2a9f8p-51f, 0x1.5b935ap-36f, 0.0f, 0.0f,
     0.0f, 0x1.b7ba04p-42f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.963e2ap-89f, 0.0f, 0.0f, 0x1.0e5d7p-48f, 0x1.0a4e98p-9f, 0.0f,
     0x1.6e694p-27f, 0.0f, 0x1.d19bep-1f, 0.0f, 0x1.33d146p-103f, 0x1.48d0a6p-111f,
     0x1.da6b8p-103f, 0x1.667baep-30f, 0x1.930242p-87f, 0.0f, 0x1.03d4c4p-112f, 0.0f,
     0.0f, 0x1.692826p-26f, 0x1.c344eap-36f, 0.0f, 0x1.5223fcp-118f, 0.0f, 0.0f,
     0x1.efa30ap-108f, 0x1.5827dap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdff4p-12f,
     0x1.64d21ep-35f, 0.0f, 0.0f, 0.0f, 0x1.40216cp-126f, 0.0f, 0x1.b4cb04p-43f,
     0x1.33c99ep-126f, 0x1.a34884p-16f, 0x1.ea2468p-18f, 0x1.ba5454p-61f,
     0x1.59a51cp-68f, 0x1.124ad6p-13f, 0.0f, 0.0f, 0x1.4c2cc8p-9f, 0x1.f5b228p-48f,
     0.0f, 0x1.20cd56p-51f, 0x1.fbc9b8p-20f, 0.0f, 0x1.e47e1ep-118f, 0.0f,
     0x1.8ffde8p-86f, 0.0f, 0.0f, 0.0f, 0x1.58d504p-69f, 0x1.0ce9c2p-48f,
     0x1.da272ap-10f, 0.0f, 0x1.f947aap-126f, 0x1.3de50ap-36f, 0x1.296efp-1f, 0.0f,
     0x1.4f4abcp-69f, 0x1.8366a8p-3f, 0x1.56f2e4p-108f, 0x1.a8cd34p-47f,
     0x1.301ba4p-49f, 0x1.645b18p-6f, 0x1.5b056cp-23f, 0.0f, 0x1.7d155cp-44f, 0.0f,
     0x1.c97536p-34f, 0x1.4d9d76p-70f, 0x1.c0d22ep-66f, 0.0f, 0.0f, 0x1.559264p-4f,
     0.0f, 0x1.171572p-97f, 0.0f, 0.0f, 0x1.93de1p-94f, 0x1.5dd814p-12f, 0.0f, 0.0f,
     0.0f, 0x1.303e58p-117f, 0x1.4cc45ap-67f, 0x1.dac7p-51f, 0.0f, 0.0f,
     0x1.1ad1a2p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d936p-115f, 0x1.3b18e4p-97f,
     0x1.b5c45ep-61f, 0x1.29b014p-3f, 0.0f, 0x1.8a6baep-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c27652p-82f, 0.0f, 0.0f, 0x1.183abap-10f, 0.0f,
     0x1.90b316p-47f, 0x1.e3f2d4p-5f, 0x1.9cf326p-106f, 0.0f, 0x1.cbf894p-79f, 0.0f,
     0x1.b95138p-70f, 0.0f, 0x1.ebf588p-40f, 0x1.b802d4p-62f, 0.0f, 0.0f,
     0x1.9f3cp-57f, 0.0f, 0.0f, 0x1.fd54b8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a65b2p-90f, 0x1.3924f6p-32f, 0x1.39a93ep-9f, 0x1.d1e8c6p-1f,
     0x1.eb9694p-57f, 0.0f, 0x1.8e845cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a89602p-106f,
     0x1.201a54p-94f, 0x1.07d562p-21f, 0.0f, 0.0f, 0x1.f7d95ap-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.70ece6p-48f, 0.0f, 0x1.dc5f9p-100f, 0.0f, 0.0f, 0x1.035c2ep-122f,
     0x1.06fb56p-94f, 0.0f, 0x1.8c4ce6p-84f, 0x1.d62b2p-42f, 0x1.fcf7dcp-59f, 0.0f,
     0x1.2993f4p-42f, 0.0f, 0.0f, 0x1.2e8d8p-27f, 0.0f, 0.0f, 0.0f, 0x1.780c2cp-12f,
     0x1.8b41c2p-11f, 0x1.d6373cp-3f, 0x1.468a8p-123f, 0.0f, 0x1.ff137cp-27f,
     0x1.cc4e96p-87f, 0.0f, 0.0f, 0x1.f00892p-22f, 0.0f, 0x1.d39ac2p-51f,
     0x1.29852ep-17f, 0.0f, 0.0f, 0x1.2649d4p-32f, 0.0f, 0.0f, 0x1.c67d38p-113f,
     0x1.20b7bep-107f, 0.0f, 0.0f, 0.0f, 0x1.8ab256p-59f, 0x1.e61b44p-100f,
     0x1.75532ep-14f, 0x1.d4f8bcp-101f, 0.0f, 0.0f, 0x1.ab36bp-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fc1d3p-115f, 0.0f, 0x1.f38e96p-13f, 0x1.b762bep-116f, 0.0f, 0.0f,
     0x1.e8949ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b24dd6p-44f, 0.0f, 0.0f,
     0x1.993e3ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9ea26p-116f, 0x1.631e3cp-25f, 0.0f,
     0x1.7f81f6p-73f, 0x1.47d846p-26f, 0.0f, 0x1.2faff8p-9f, 0x1.bdab24p-98f, 0.0f,
     0x1.f55198p-87f, 0x1.1bbfcp-83f, 0x1.977f1cp-13f, 0x1.a556a6p-78f,
     0x1.1665dcp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61c18p-110f, 0x1.0ee22ap-77f, 0x1.7ff97cp-108f, 0x1.cd6666p-80f,
     0x1.7f0d9p-86f, 0.0f, 0.0f, 0x1.cf9c72p-22f, 0x1.bd4f56p-84f, 0.0f, 0.0f, 0.0f,
     0x1.40a918p-65f, 0x1.51e856p-1f, 0.0f, 0.0f, 0x1.bda7f6p-109f, 0.0f, 0.0f, 0.0f,
     0x1.bbac7cp-76f, 0.0f, 0.0f, 0x1.f06b62p-68f, 0x1.767e02p-52f, 0.0f, 0.0f,
     0x1.3222e8p-70f, 0.0f, 0x1.b485d4p-76f, 0x1.988772p-8f, 0x1.e9c2fap-83f, 0.0f,
     0x1.314352p-6f, 0x1.6a7b5ap-80f, 0.0f, 0.0f, 0x1.ec8242p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.868904p-84f, 0x1.8b7b6ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef1f94p-106f, 0x1.87d29p-9f, 0.0f, 0x1.1265a6p-5f, 0.0f, 0.0f,
     0x1.7a755cp-80f, 0x1.43bca6p-124f, 0x1.aad29ap-114f, 0x1.f3bb9cp-3f,
     0x1.a09aeap-48f, 0x1.d22e56p-7f, 0x1.d90346p-12f, 0x1.01535p-14f, 0.0f,
     0x1.ecd0f8p-2f, 0x1.42c8dep-17f, 0.0f, 0x1.ed3e94p-105f, 0x1.1d0288p-46f,
     0x1.9b441p-28f, 0.0f, 0x1.2c77dcp-35f, 0x1.5fec9ap-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1301d2p-50f, 0.0f, 0.0f, 0x1.56b3ep-64f, 0x1.2852fep-61f,
     0x1.bff7d2p-70f, 0x1.d8e7aep-77f, 0x1.db102ep-84f, 0.0f, 0.0f, 0x1.85d17ep-41f,
     0x1.2cd272p-119f, 0x1.c74c4ap-102f, 0x1.aac52ap-109f, 0x1.82c852p-89f,
     0x1.5baebp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aceaa8p-14f,
     0x1.04bbb2p-49f, 0x1.317606p-43f, 0x1.97829ep-114f, 0x1.8bb2acp-43f, 0.0f,
     0x1.6d9ef6p-49f, 0.0f, 0x1.4c4eacp-125f, 0x1.d8165p-20f, 0x1.42d13ep-125f,
     0x1.2f7d84p-19f, 0x1.e848fep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04d8fep-78f,
     0x1.acb6aap-98f, 0x1.0f1b24p-20f, 0x1.39e714p-25f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc838p-61f, 0.0f, 0x1.89b6ep-97f, 0x1.1fa378p-33f, 0.0f, 0x1.f9a26cp-112f,
     0.0f, 0.0f, 0x1.5f03dp-72f, 0x1.0b52b8p-118f, 0x1.3538bap-14f, 0x1.a872e6p-11f,
     0x1.cef066p-34f, 0.0f, 0x1.46b0ap-125f, 0x1.62519ep-52f, 0x1.a9692p-43f,
     0x1.a92fd4p-122f, 0x1.d947fcp-18f, 0x1.3da872p-100f, 0.0f, 0x1.2d31ccp-68f,
     0x1.840e74p-12f, 0x1.0fdd96p-11f, 0x1.f2463cp-17f, 0x1.8b4f1cp-81f, 0.0f, 0.0f,
     0.0f, 0x1.a2429cp-98f, 0x1.21f8cap-103f, 0x1.33d9e2p-82f, 0.0f, 0.0f,
     0x1.f7fe6p-4f, 0x1.5fdae6p-67f, 0.0f, 0x1.a2da7ep-84f, 0.0f, 0x1.664034p-7f,
     0x1.cb738p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eeceep-12f, 0x1.27c95ep-52f, 0.0f,
     0.0f, 0x1.10a1a4p-44f, 0.0f, 0x1.032316p-72f, 0x1.8e22fep-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f46dep-57f, 0x1.6c0b32p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38c7a4p-43f,
     0x1.50de58p-118f, 0.0f, 0.0f, 0x1.c7c1fep-36f, 0x1.03d4cp-3f, 0x1.223e0cp-65f,
     0.0f, 0x1.4d7358p-29f, 0x1.eca752p-41f, 0x1.45666ep-34f, 0x1.1b7c42p-65f,
     0x1.521474p-67f, 0.0f, 0.0f, 0x1.85647ap-88f, 0.0f, 0x1.a80dfp-59f, 0.0f,
     0x1.92e89ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad2308p-2f, 0.0f, 0.0f,
     0.0f, 0x1.42fe88p-116f, 0x1.8dcaf2p-4f, 0.0f, 0.0f, 0x1.38073ap-124f,
     0x1.dbda8p-77f, 0x1.66417cp-110f, 0.0f, 0.0f, 0.0f, 0x1.900d22p-34f,
     0x1.c829e6p-101f, 0x1.39daeap-59f, 0x1.57d062p-125f, 0.0f, 0x1.29ec4cp-3f,
     0x1.2370e2p-71f, 0.0f, 0x1.2a8a66p-49f, 0x1.9c6784p-96f, 0x1.66f618p-42f, 0.0f,
     0.0f, 0.0f, 0x1.c492b2p-116f, 0x1.b82d78p-33f, 0x1.e87c9cp-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dc7116p-77f, 0.0f, 0.0f, 0x1.473ee6p-116f, 0.0f, 0x1.f85f18p-72f,
     0x1.59f498p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e3872p-7f, 0.0f,
     0x1.c7ebp-119f, 0.0f, 0.0f, 0x1.9f8fb8p-40f, 0x1.acd3aep-42f, 0x1.b27244p-79f,
     0.0f, 0.0f, 0x1.85b092p-86f, 0.0f, 0x1.d84ebap-9f, 0x1.c85bc4p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8691ccp-109f, 0.0f, 0x1.ecc82ep-125f, 0.0f, 0.0f,
     0x1.c58c9ap-102f, 0x1.2c6fb8p-65f, 0.0f, 0.0f, 0x1.9be8d2p-79f, 0.0f,
     0x1.62b842p-111f, 0x1.4920d8p-100f, 0.0f, 0.0f, 0x1.16f3b2p-37f, 0x1.316d74p-84f,
     0.0f, 0x1.6a11f2p-93f, 0x1.a9de2p-12f, 0x1.102084p-30f, 0.0f, 0.0f,
     0x1.34632p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c88f4ep-68f, 0.0f, 0.0f,
     0x1.d61834p-83f, 0.0f, 0x1.248406p-100f, 0x1.3c754p-110f, 0x1.e7e7d2p-45f, 0.0f,
     0x1.4f6d5cp-51f, 0.0f, 0.0f, 0.0f, 0x1.dbbd64p-68f, 0x1.4e787cp-39f,
     0x1.bc5ba4p-43f, 0x1.8088fcp-58f, 0x1.8b21bap-49f, 0.0f, 0x1.a8cae4p-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.788dd4p-30f, 0x1.5ed542p-30f, 0.0f, 0x1.5f79dp-49f,
     0x1.592edcp-72f, 0x1.b6ae46p-125f, 0x1.3f5da4p-61f, 0x1.c9b7fp-67f,
     0x1.1a865cp-53f, 0x1.01041p-27f, 0x1.6409a4p-78f, 0.0f, 0.0f, 0x1.cc34e8p-30f,
     0.0f, 0x1.fed4c2p-103f, 0x1.3b2866p-7f, 0.0f, 0x1.27fed2p-46f, 0x1.287eb6p-9f,
     0x1.3288c2p-120f, 0.0f, 0.0f, 0.0f, 0x1.08ec7ap-126f, 0.0f, 0.0f,
     0x1.86d9a8p-12f, 0x1.16c93ap-60f, 0x1.173648p-37f, 0x1.507954p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef638p-14f, 0x1.87390ap-11f, 0x1.bb21a8p-94f, 0x1.821c64p-121f,
     0x1.364384p-43f, 0x1.45a27cp-27f, 0x1.718594p-125f, 0.0f, 0x1.74b29cp-118f,
     0x1.e85a4cp-28f, 0.0f, 0.0f, 0x1.fbddacp-18f, 0x1.bac436p-90f, 0x1.b72a94p-58f,
     0x1.a7e994p-63f, 0x1.223e2ep-25f, 0.0f, 0x1.94b0fap-117f, 0.0f, 0.0f, 0.0f,
     0x1.648f86p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18d11cp-89f, 0.0f,
     0x1.ab527ep-50f, 0x1.12c288p-31f, 0x1.f2183ap-99f, 0x1.a1bf94p-64f, 0.0f,
     0x1.d33476p-4f, 0.0f, 0x1.d316f2p-15f, 0x1.b91492p-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed16e6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.057322p-65f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fe701ap-66f, 0.0f, 0x1.090d4p-46f, 0x1.50edcap-32f, 0x1.e29c62p-126f,
     0.0f, 0.0f, 0.0f, 0x1.089468p-117f, 0.0f, 0x1.b4fbcep-25f, 0x1.5158e8p-103f,
     0.0f, 0x1.e4bf34p-35f, 0.0f, 0x1.2d0038p-33f, 0.0f, 0x1.bbab9p-64f, 0.0f, 0.0f,
     0x1.6d79d4p-89f, 0.0f, 0.0f, 0.0f, 0x1.6b7e7ap-11f, 0x1.83170ep-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2367acp-13f, 0x1.979db4p-41f, 0x1.24e0fap-65f,
     0.0f, 0x1.2b39d4p-81f, 0.0f, 0.0f, 0.0f, 0x1.31628ep-11f, 0.0f, 0x1.43c31ep-70f,
     0x1.e6a6f6p-18f, 0.0f, 0.0f, 0x1.9c8014p-65f, 0x1.f4169ep-13f, 0.0f,
     0x1.c7e412p-59f, 0.0f, 0x1.366d2p-69f, 0x1.fb6856p-61f, 0.0f, 0.0f,
     0x1.2bfb42p-99f, 0x1.ee627p-31f, 0.0f, 0.0f, 0.0f, 0x1.ea7a68p-27f,
     0x1.1e7aa4p-30f, 0.0f, 0x1.277ba8p-102f, 0x1.b475c8p-61f, 0x1.ac4d26p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47f4e4p-27f, 0x1.54d31ep-22f, 0x1.cfae3ap-95f, 0.0f,
     0x1.9bb9dap-49f, 0.0f, 0x1.359fecp-73f, 0x1.14b652p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7e992p-20f, 0x1.106a8p-83f, 0x1.252952p-60f, 0.0f, 0.0f, 0.0f,
     0x1.25abe8p-90f, 0.0f, 0.0f, 0.0f, 0x1.11e466p-77f, 0x1.ad785p-105f, 0.0f,
     0x1.a32574p-21f, 0.0f, 0x1.23c564p-52f, 0x1.732bd8p-37f, 0x1.dcec6ep-93f, 0.0f,
     0.0f, 0x1.93bf4p-82f, 0.0f, 0x1.88e1eep-86f, 0x1.3deefep-32f, 0.0f,
     0x1.33b2b8p-84f, 0x1.b8354ap-72f, 0.0f, 0x1.40a644p-39f, 0x1.49aec6p-112f, 0.0f,
     0.0f, 0x1.7bdee2p-5f, 0x1.af89c4p-58f, 0.0f, 0.0f, 0x1.babedep-36f,
     0x1.ab4016p-56f, 0.0f, 0.0f, 0.0f, 0x1.a9ae5cp-84f, 0x1.e751e4p-94f, 0.0f,
     0x1.9ce862p-123f, 0x1.eb65e6p-70f, 0.0f, 0.0f, 0.0f, 0x1.d3a31p-11f,
     0x1.9405d6p-89f, 0.0f, 0.0f, 0.0f, 0x1.60f9d4p-69f, 0x1.5f018cp-68f,
     0x1.33bd22p-43f, 0.0f, 0x1.d1e11ap-93f, 0.0f, 0x1.45dd92p-32f, 0x1.99ac1ep-72f,
     0x1.99d1cep-8f, 0x1.b9a57ep-28f, 0.0f, 0x1.0b89ecp-85f, 0x1.77253p-106f,
     0x1.bbb0b4p-37f, 0x1.a51784p-21f, 0x1.a1aff8p-69f, 0.0f, 0x1.3a4566p-17f,
     0x1.d8c436p-5f, 0.0f, 0x1.5fd00ap-31f, 0.0f, 0x1.9fe612p-92f, 0.0f,
     0x1.85589ap-37f, 0x1.8bbde2p-16f, 0x1.7a899cp-114f, 0x1.443ee6p-96f, 0.0f, 0.0f,
     0x1.a6b6d6p-9f, 0.0f, 0x1.a52a76p-74f, 0.0f, 0.0f, 0x1.873baep-112f,
     0x1.2f0ba6p-34f, 0x1.4fd4fap-17f, 0x1.5cd3eap-26f, 0x1.ef032ep-72f, 0.0f, 0.0f,
     0x1.d88e86p-40f, 0.0f, 0x1.a8e6c2p-103f, 0.0f, 0.0f, 0x1.622e78p-87f,
     0x1.b225eap-65f, 0.0f, 0.0f, 0x1.47c772p-113f, 0x1.c57a78p-68f, 0x1.1a005ap-4f,
     0.0f, 0x1.3d8da8p-73f, 0x1.8233c4p-21f, 0.0f, 0.0f, 0x1.ca6becp-126f,
     0x1.268132p-26f, 0.0f, 0x1.5664ap-125f, 0x1.6c85a4p-25f, 0.0f, 0x1.539e9cp-57f,
     0x1.1771b4p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfebe6p-81f, 0x1.079456p-63f,
     0x1.897718p-114f, 0.0f, 0x1.0a992p-30f, 0.0f, 0.0f, 0.0f, 0x1.04b3f2p-50f, 0.0f,
     0.0f, 0x1.2cfff4p-40f, 0x1.f5c156p-85f, 0.0f, 0x1.0624aap-30f, 0.0f,
     0x1.cdf61p-91f, 0.0f, 0x1.f16c8ep-13f, 0x1.ac7aap-65f, 0.0f, 0x1.9313p-30f,
     0x1.906eep-54f, 0.0f, 0.0f, 0.0f, 0x1.66292ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.24a4dap-19f, 0.0f, 0x1.baa9cp-64f, 0.0f, 0.0f, 0.0f, 0x1.7cc61ap-41f,
     0x1.3796fp-46f, 0.0f, 0x1.9c9418p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.958e7cp-112f, 0x1.5b771cp-42f, 0x1.18e3d2p-17f, 0x1.57d1dap-110f,
     0x1.234deep-118f, 0x1.45384ep-108f, 0.0f, 0x1.cb4788p-69f, 0x1.11b766p-54f, 0.0f,
     0.0f, 0.0f, 0x1.f9f26p-48f, 0.0f, 0x1.6b6908p-6f, 0x1.226c96p-8f,
     0x1.3fade8p-126f, 0.0f, 0.0f, 0.0f, 0x1.a9a882p-88f, 0x1.b6759ep-85f,
     0x1.293deap-91f, 0x1.650396p-83f, 0.0f, 0.0f, 0.0f, 0x1.569c44p-75f, 0.0f, 0.0f,
     0x1.85bc2ap-99f, 0x1.5ed98ep-111f, 0.0f, 0x1.2b1bd8p-32f, 0.0f, 0x1.be16e2p-77f,
     0.0f, 0x1.a46b4p-105f, 0.0f, 0.0f, 0x1.874824p-50f, 0.0f, 0x1.b0647ap-86f, 0.0f,
     0x1.6a73ep-99f, 0x1p0f, 0x1.58865cp-71f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospif4_u05avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincospif4_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif4_u05avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
