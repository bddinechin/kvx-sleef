/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf4_u35avx2128.c --function Sleef_coshf4_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0.0f, 0x1.1bea56p-65f, 0x1.877dc8p-62f, 0x1.a8d52ep-40f,
     0x1.f5dd6ap-65f, 0.0f, 0.0f, 0x1.f02eccp-121f, 0.0f, 0.0f, 0x1.92189ap-23f, 0.0f,
     0.0f, 0x1.57284ep-112f, 0.0f, 0.0f, 0x1.7daab6p-42f, 0x1.12e88p-42f,
     0x1.fc3368p-79f, 0.0f, 0.0f, 0x1.46c5eep-9f, 0x1.01fc2ap-48f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a2ea4p-4f, 0x1.fc7738p-21f, 0.0f, 0x1.3d4ddp-99f, 0.0f,
     0x1.ab140cp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86996ap-39f, 0.0f, 0.0f,
     0x1.4184d2p-10f, 0.0f, 0.0f, 0x1.bdae5cp-89f, 0x1.a45f2p-109f, 0x1.b0d2fcp-6f,
     0.0f, 0.0f, 0x1.7f556ap-99f, 0.0f, 0.0f, 0x1.af506cp-59f, 0x1.61a97cp-54f, 0.0f,
     0x1.b4dc9ap-107f, 0x1.91d962p-119f, 0x1.dba48ap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71422p-44f, 0x1.1e8228p-36f, 0.0f, 0.0f, 0.0f, 0x1.c8c0ccp-98f, 0.0f,
     0x1.753ad4p-63f, 0x1.41e922p-20f, 0x1.195888p-65f, 0.0f, 0x1.820c74p-43f,
     0x1.484c7ep-121f, 0x1.50919cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee6658p-114f,
     0.0f, 0x1.13c5ecp-39f, 0x1.50ed88p-71f, 0.0f, 0x1.302e56p-99f, 0.0f,
     0x1.fe756ep-104f, 0.0f, 0.0f, 0x1.98a61ap-85f, 0.0f, 0x1.b9595cp-99f,
     0x1.c103a8p-73f, 0x1.c50cd8p-79f, 0x1.aaba44p-36f, 0x1.53dae6p-60f,
     0x1.5370a8p-88f, 0x1.23dab6p-27f, 0.0f, 0.0f, 0x1.9e1076p-4f, 0x1.1563fp-75f,
     0.0f, 0x1.600e92p-10f, 0.0f, 0.0f, 0.0f, 0x1.ca7286p-121f, 0x1.5ff734p-77f,
     0x1.0cc586p-5f, 0x1.84fbf2p-66f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.df321ep-35f,
     0x1.18a588p-83f, 0.0f, 0x1.0511bcp-90f, 0x1.82197ep-6f, 0.0f, 0x1.e8f6a8p-88f,
     0x1.eb0e8ap-2f, 0x1.2efea8p-83f, 0x1.4d5022p-52f, 0x1.d8622p-93f,
     0x1.4a128ap-50f, 0x1.4a1cep-11f, 0x1.b8c2bap-124f, 0.0f, 0x1.c0eafcp-51f, 0.0f,
     0x1.2a6cbap-59f, 0.0f, 0.0f, 0.0f, 0x1.de9f14p-35f, 0.0f, 0.0f, 0x1.0caef2p-8f,
     0x1.3cb5e6p-126f, 0.0f, 0.0f, 0.0f, 0x1.bf9fdep-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6387b6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8af9bcp-111f,
     0x1.f53584p-64f, 0x1.92ca2ap-16f, 0.0f, 0.0f, 0x1.16b42ep-17f, 0x1.274c4ep-122f,
     0x1.ab7e1cp-112f, 0x1.19f6f4p-95f, 0.0f, 0x1.c0557ep-37f, 0.0f, 0x1.e4dfecp-120f,
     0.0f, 0x1.01642p-60f, 0.0f, 0x1.7febacp-126f, 0x1.42541ep-125f, 0x1.41c458p-60f,
     0x1.399b3ap-100f, 0x1.468c28p-34f, 0.0f, 0x1.84a34ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.cc2838p-29f, 0x1.bf0d12p-117f, 0x1.393fep-54f, 0.0f, 0x1.8231c6p-86f,
     0x1.83f586p-85f, 0.0f, 0.0f, 0.0f, 0x1.aaea24p-1f, 0.0f, 0x1.3fdbcp-80f,
     0x1.1dc2bep-62f, 0.0f, 0x1.217f32p-113f, 0x1.69f6a6p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27d736p-78f, 0.0f, 0x1.3cbabep-9f, 0x1.acf55p-106f, 0.0f,
     0x1.8f7112p-31f, 0x1.2becf2p-34f, 0x1.c5e962p-113f, 0.0f, 0.0f, 0.0f,
     0x1.38fdp-106f, 0.0f, 0.0f, 0x1.917d7cp-13f, 0x1.bb7f04p-32f, 0.0f, 0.0f, 0.0f,
     0x1.685eep-117f, 0x1.b0642ap-110f, 0.0f, 0x1.c3d5c4p-39f, 0x1.0511eep-87f, 0.0f,
     0x1.15dfdap-56f, 0x1.8dc48cp-113f, 0x1.46af3cp-125f, 0.0f, 0.0f, 0.0f,
     0x1.ae3dap-48f, 0x1.891edap-74f, 0.0f, 0.0f, 0x1.0a08d6p-6f, 0.0f,
     0x1.09722cp-17f, 0.0f, 0.0f, 0x1.209386p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f26a36p-105f, 0x1.380232p-25f, 0.0f, 0.0f, 0x1.267254p-23f, 0x1.bc2cd8p-121f,
     0.0f, 0.0f, 0x1.55fe34p-44f, 0x1.37500ap-109f, 0x1.77193ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.c8c23p-81f, 0.0f, 0x1.a6331p-10f, 0.0f, 0.0f, 0.0f, 0x1.bb89acp-123f,
     0x1.8ca788p-1f, 0.0f, 0.0f, 0.0f, 0x1.4abdccp-49f, 0.0f, 0x1.4a36a2p-61f, 0.0f,
     0x1.96e1d8p-96f, 0x1.90bap-124f, 0x1.940b94p-106f, 0x1.2cee1ap-13f,
     0x1.82a6ccp-21f, 0x1.4f557ep-2f, 0.0f, 0x1.99cf84p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6fb6aap-9f, 0x1.7f7c9ap-73f, 0x1.f109dep-67f, 0x1.467474p-4f,
     0x1.779368p-81f, 0.0f, 0.0f, 0.0f, 0x1.ad7a1ap-119f, 0.0f, 0.0f, 0x1.61cbc2p-33f,
     0.0f, 0x1.b49ab8p-7f, 0.0f, 0.0f, 0.0f, 0x1.65a092p-26f, 0.0f, 0x1.e4f1p-55f,
     0x1.30ae04p-4f, 0x1.239d52p-100f, 0.0f, 0.0f, 0x1.70423p-79f, 0x1.7ade3cp-93f,
     0x1.d2840ep-65f, 0.0f, 0.0f, 0x1.86301ap-22f, 0.0f, 0.0f, 0x1.eaafe2p-113f,
     0x1.5906dep-47f, 0x1.ed05b8p-92f, 0.0f, 0.0f, 0x1.2f409p-73f, 0.0f,
     0x1.55ca2ep-90f, 0.0f, 0x1.c08e18p-34f, 0x1.4a44a4p-37f, 0x1.ad3bd4p-9f,
     0x1.a1060cp-98f, 0x1.a8ce48p-23f, 0x1.97f97cp-117f, 0.0f, 0x1.1f7d24p-3f,
     0x1.107598p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20d98ep-122f, 0x1.0880b6p-97f,
     0x1.1ccffp-86f, 0.0f, 0x1.1838f6p-91f, 0x1.462cf4p-69f, 0x1.a8d466p-123f, 0.0f,
     0x1.b0931ep-39f, 0.0f, 0x1.e4fcb4p-39f, 0x1.b99624p-34f, 0.0f, 0.0f,
     0x1.d85c72p-86f, 0.0f, 0x1.d008e6p-97f, 0.0f, 0x1.e9303p-43f, 0x1.93d58ap-1f,
     0.0f, 0.0f, 0.0f, 0x1.90e004p-87f, 0x1.d338ap-56f, 0x1.128b7cp-98f, 0.0f, 0.0f,
     0.0f, 0x1.9a37c6p-123f, 0x1.2d3d12p-110f, 0x1.1a8382p-114f, 0x1.3df3f2p-60f,
     0.0f, 0.0f, 0x1.bddecp-96f, 0x1.9aeap-53f, 0.0f, 0x1.345846p-19f, 0.0f, 0.0f,
     0x1.e6cbd4p-37f, 0x1.597fc6p-57f, 0.0f, 0.0f, 0x1.e5abd6p-112f, 0x1p0f,
     0x1.1f57dap-96f, 0.0f, 0.0f, 0.0f, 0x1.2d6538p-17f, 0.0f, 0.0f, 0x1.6a8424p-77f,
     0.0f, 0x1.4211acp-68f, 0x1.e897a4p-63f, 0x1.7c7f7ep-97f, 0x1.84ae76p-9f, 0.0f,
     0x1.803f26p-35f, 0x1.11d78p-106f, 0.0f, 0x1.43cc2p-87f, 0x1.f52ad8p-64f,
     0x1.06dcc2p-49f, 0.0f, 0.0f, 0x1.dffdccp-70f, 0.0f, 0.0f, 0.0f, 0x1.409ceep-4f,
     0x1.4c54a6p-124f, 0x1.676d6p-28f, 0.0f, 0.0f, 0x1.193046p-92f, 0x1.ebe118p-15f,
     0.0f, 0x1.a11f8p-48f, 0x1.9fa738p-29f, 0.0f, 0.0f, 0.0f, 0x1.df020ep-23f,
     0x1.2c145ap-90f, 0x1.3a4bbep-71f, 0x1.1204a2p-9f, 0.0f, 0x1.b3e476p-45f, 0.0f,
     0x1.d462c6p-44f, 0x1.56182ap-84f, 0x1.639e9ep-22f, 0x1.d7ed9p-67f,
     0x1.412c48p-21f, 0.0f, 0.0f, 0x1.fcf5cp-2f, 0.0f, 0x1.23fa6ap-111f,
     0x1.58a22p-100f, 0x1.ed8a24p-8f, 0x1.af7432p-39f, 0.0f, 0x1.ffe168p-90f, 0.0f,
     0.0f, 0.0f, 0x1.0f5fb8p-52f, 0.0f, 0x1.6f824ep-80f, 0x1.d81c3p-28f, 0.0f,
     0x1.b04ef8p-115f, 0.0f, 0.0f, 0x1.b4a41p-2f, 0x1.cb117ap-72f, 0x1.b483eep-81f,
     0.0f, 0x1.8493cap-22f, 0x1.cd29f8p-16f, 0.0f, 0x1.b7b1d8p-60f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.21b0c4p-83f, 0.0f, 0.0f, 0.0f, 0x1.ab8062p-109f, 0.0f, 0x1.27b304p-79f,
     0x1.3721d8p-64f, 0x1.4bc352p-97f, 0x1.e81d36p-108f, 0.0f, 0.0f, 0x1.6712b4p-74f,
     0x1.bf7d9ep-41f, 0.0f, 0x1.ac780cp-64f, 0x1.7618bep-86f, 0x1.c4f258p-13f,
     0x1.3a8ceap-24f, 0.0f, 0x1.b4ea12p-91f, 0x1.b532a4p-92f, 0x1.a329p-70f,
     0x1.d60bcp-66f, 0x1.15e7bep-48f, 0.0f, 0x1.d2d078p-32f, 0.0f, 0x1.795b52p-15f,
     0x1.2af5f4p-107f, 0.0f, 0x1.7f5bbap-106f, 0x1.48f742p-13f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.73446ap-63f, 0.0f, 0.0f, 0.0f, 0x1.31e6ecp-7f, 0x1.152246p-125f,
     0x1.4f794ap-3f, 0.0f, 0x1.1e75bap-15f, 0x1.becb66p-89f, 0.0f, 0x1.aa202cp-57f,
     0.0f, 0.0f, 0.0f, 0x1.ce3498p-109f, 0x1.f3174ap-26f, 0x1.50f5f6p-59f, 0.0f,
     0x1.3541fp-32f, 0x1.9cb82ep-3f, 0.0f, 0x1.306b98p-122f, 0.0f, 0x1.907db8p-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bb7e68p-73f, 0.0f, 0.0f, 0.0f,
     0x1.0072eap-43f, 0x1.3f03fcp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3281bp-100f, 0.0f, 0.0f, 0x1.d0c9d2p-32f, 0x1.ebbd7ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.06572ap-17f, 0.0f, 0.0f, 0x1.2e743ep-95f, 0x1.137b98p-80f, 0x1.59e6b4p-112f,
     0x1.da1564p-50f, 0x1.9bd4a8p-124f, 0x1.d2376p-24f, 0.0f, 0x1.590d4ap-46f,
     0x1.351596p-35f, 0.0f, 0x1.ba49p-108f, 0.0f, 0x1.f4ff6ep-35f, 0x1.4fbad2p-71f,
     0x1.bd7ccep-24f, 0.0f, 0x1.583a7ep-78f, 0.0f, 0x1.845ddap-18f, 0x1.590a16p-45f,
     0x1.b529bcp-79f, 0x1.f12d34p-32f, 0x1.6adbbp-75f, 0.0f, 0x1.200672p-41f, 0.0f,
     0x1.9533fp-58f, 0x1.69850ap-80f, 0x1.0cd51ap-8f, 0x1.443456p-82f,
     0x1.d90a34p-28f, 0x1.4a18a4p-22f, 0x1.efe746p-114f, 0x1.615dc4p-13f,
     0x1.fb958ap-103f, 0.0f, 0x1.7c4f98p-99f, 0.0f, 0x1.8cc28cp-112f, 0.0f, 0.0f,
     0x1.93dde4p-25f, 0.0f, 0.0f, 0.0f, 0x1.2f606cp-84f, 0.0f, 0.0f, 0.0f,
     0x1.422254p-26f, 0x1.f40108p-97f, 0x1.372474p-45f, 0.0f, 0x1.1d3774p-54f,
     0x1.bc4df8p-31f, 0x1.d09dep-121f, 0x1.6f65b4p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81655ap-44f, 0x1.ca32c2p-67f, 0x1.9659f2p-68f, 0.0f, 0.0f,
     0x1.c041p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.467edap-35f, 0x1.1d08c6p-68f,
     0x1.b0f468p-73f, 0.0f, 0.0f, 0x1.2feb88p-24f, 0x1.af043p-93f, 0.0f,
     0x1.5661ecp-107f, 0x1.56a564p-5f, 0.0f, 0x1.3318e2p-81f, 0.0f, 0x1.c40cbp-90f,
     0x1.4d054ep-65f, 0.0f, 0x1.f7faecp-70f, 0.0f, 0x1.6c57d6p-114f, 0x1.3d779cp-8f,
     0x1.85cc6ap-98f, 0x1.071754p-107f, 0x1.85c9c2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c000b8p-116f, 0x1.b9115p-55f, 0x1.937cap-98f, 0x1.9a576ep-15f,
     0x1.a0cc5ap-61f, 0.0f, 0.0f, 0x1.140d1ep-47f, 0x1.8ca9d6p-56f, 0.0f,
     0x1.286cc8p-5f, 0.0f, 0x1.536bap-40f, 0.0f, 0x1.f12ff4p-18f, 0x1.a0a9c4p-59f,
     0x1.ea6084p-125f, 0x1.ffac5cp-42f, 0x1.086bfp-82f, 0.0f, 0.0f, 0x1.2a8df4p-18f,
     0.0f, 0.0f, 0.0f, 0x1.5a4386p-46f, 0.0f, 0x1.63b24ep-7f, 0x1.2efc04p-27f, 0.0f,
     0x1.d264c8p-106f, 0x1.fffbe2p-119f, 0x1.5a0c44p-65f, 0.0f, 0x1.365206p-85f,
     0x1.56f668p-119f, 0x1.28d0bp-80f, 0x1.9e20dcp-42f, 0.0f, 0x1.9acd8cp-89f, 0.0f,
     0x1.2df694p-51f, 0x1.f37ceap-103f, 0.0f, 0.0f, 0.0f, 0x1.cbbc9p-13f, 0.0f,
     0x1.c9407ep-97f, 0x1.0b4a12p-117f, 0.0f, 0.0f, 0x1.a3992p-10f, 0x1.d4655ap-2f,
     0.0f, 0.0f, 0x1.ee91b4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f967c8p-115f,
     0.0f, 0.0f, 0x1.68b642p-111f, 0x1.a11b4p-101f, 0x1.0abc26p-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9f128cp-4f, 0.0f, 0x1.9bc3c4p-71f, 0.0f, 0.0f, 0x1.5fd57ep-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a3f1cp-99f, 0x1.7c7a5p-57f, 0.0f, 0.0f,
     0x1.ccdd06p-110f, 0x1.54303ep-43f, 0.0f, 0.0f, 0x1.6175e6p-96f, 0x1.1c9fbep-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f66c94p-59f, 0x1.9d7496p-95f, 0.0f, 0.0f,
     0x1.d53062p-120f, 0.0f, 0x1.1c36e6p-110f, 0.0f, 0x1.99b4d8p-117f,
     0x1.5ac9aep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dac1d4p-117f, 0.0f, 0.0f,
     0x1.95ba4p-51f, 0x1.9c8f6cp-38f, 0x1.465d5cp-42f, 0x1.2ca972p-24f, 0.0f,
     0x1.7ea242p-114f, 0.0f, 0.0f, 0x1.bb023ep-76f, 0.0f, 0x1.b2c8fp-107f,
     0x1.93d7bp-7f, 0.0f, 0x1.6c6bccp-107f, 0x1.33a5dp-40f, 0.0f, 0x1.83e70ap-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.558698p-61f, 0x1.dcfffap-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99fb2p-83f, 0x1.fcaddap-2f, 0.0f, 0.0f, 0.0f, 0x1.b0815ep-67f,
     0x1.e2a85ap-19f, 0x1.7d3856p-14f, 0.0f, 0.0f, 0x1.abae2p-125f, 0x1.672198p-122f,
     0.0f, 0.0f, 0.0f, 0x1.04b6ccp-52f, 0.0f, 0.0f, 0x1.7e6536p-37f, 0x1.36404p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a85eep-108f, 0.0f, 0x1.55e8d2p-125f, 0x1.c1c1fcp-7f,
     0.0f, 0x1.dbaf0cp-68f, 0.0f, 0x1.0ececap-63f, 0.0f, 0x1.056c62p-39f,
     0x1.efddf2p-1f, 0.0f, 0.0f, 0x1.968a82p-43f, 0x1.4a098cp-56f, 0.0f, 0.0f, 0.0f,
     0x1.15e55cp-79f, 0x1.e76e5ep-124f, 0.0f, 0x1.0dcf0cp-93f, 0.0f, 0x1.8aa69ap-70f,
     0.0f, 0.0f, 0x1.ea1c68p-70f, 0.0f, 0x1.09f29ep-37f, 0x1.b6cda4p-26f, 0.0f,
     0x1.dadc06p-123f, 0x1.9c482p-117f, 0.0f, 0.0f, 0x1.35077cp-11f, 0.0f, 0.0f,
     0x1.3ead64p-47f, 0x1.73f3eep-115f, 0.0f, 0.0f, 0x1.d1ea92p-10f, 0.0f, 0.0f,
     0x1.c7e6aap-54f, 0x1.6af84ap-108f, 0.0f, 0.0f, 0x1.59d4fap-64f, 0.0f, 0.0f,
     0x1.e9467cp-56f, 0.0f, 0.0f, 0x1.e06c92p-99f, 0x1.ad699ap-81f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.acbbdcp-89f, 0.0f, 0.0f, 0.0f, 0x1.96d9ep-87f, 0x1.ad8078p-46f,
     0.0f, 0x1.b69684p-59f, 0.0f, 0x1.3f4efcp-89f, 0.0f, 0x1.4a9e1p-91f,
     0x1.bb48dap-95f, 0x1.af7a98p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5eda1ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ee5acp-74f, 0.0f,
     0x1.3ce0aep-39f, 0.0f, 0x1.3ffb62p-19f, 0x1.b4932ep-93f, 0.0f, 0x1.6fb07cp-69f,
     0x1.724e64p-99f, 0x1.3e96ap-86f, 0x1.aca13ep-39f, 0x1.b6006p-3f, 0x1.b2f5a4p-20f,
     0x1.a3358p-124f, 0.0f, 0.0f, 0x1.d600a8p-109f, 0.0f, 0x1.e704ecp-57f, 0.0f,
     0x1.cdfe8ep-111f, 0.0f, 0.0f, 0x1.00e434p-38f, 0.0f, 0.0f, 0x1.fd3886p-60f, 0.0f,
     0.0f, 0.0f, 0x1.3907f4p-71f, 0x1.ba63cp-108f, 0.0f, 0x1.2cbf72p-83f, 0.0f, 0.0f,
     0x1.668aep-100f, 0x1.c934e6p-22f, 0.0f, 0x1.932056p-116f, 0.0f, 0.0f,
     0x1.5f27cap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4168ecp-123f, 0.0f,
     0.0f, 0.0f, 0x1.849828p-45f, 0x1.18a38ep-19f, 0x1.425d5p-88f, 0x1.e3f78ap-104f,
     0.0f, 0x1.d8ebaep-48f, 0x1.f803eep-72f, 0x1.7c347ap-27f, 0x1.e409fep-31f,
     0x1.a3a30cp-17f, 0.0f, 0x1.46d826p-2f, 0x1.3b703ap-24f, 0x1.f0c85ep-108f,
     0x1.79a422p-26f, 0.0f, 0.0f, 0x1.cd3facp-12f, 0x1.9609f6p-42f, 0x1.d1f0bp-66f,
     0x1.d639fap-25f, 0.0f, 0x1.47f5e2p-72f, 0x1.a5cc7p-97f, 0.0f
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
            tmp1 = Sleef_coshf4_u35avx2128(tmp0);
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
    printf("Sleef_coshf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_coshf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
