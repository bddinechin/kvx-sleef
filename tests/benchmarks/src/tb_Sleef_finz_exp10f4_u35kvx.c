/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f4_u35kvx.c --function \
 *     Sleef_finz_exp10f4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.c204e2p-34f, 0x1.9fff92p-119f, 0x1.a9b6f2p-18f, 0.0f, 0.0f, 0.0f,
     0x1.bd09bcp-122f, 0x1.31d198p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60360ap-79f,
     0.0f, 0.0f, 0.0f, 0x1.ec60eep-93f, 0x1.d355d8p-118f, 0x1.32ae3ap-95f, 0.0f, 0.0f,
     0x1.f1ae58p-84f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24237ap-22f,
     0x1.682fb6p-11f, 0x1.9e244cp-21f, 0x1.72db02p-8f, 0.0f, 0x1.409afap-11f, 0.0f,
     0x1.fde122p-37f, 0.0f, 0x1.51a04p-110f, 0.0f, 0.0f, 0x1.8e35aap-21f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ca429cp-16f, 0x1.461e32p-102f, 0.0f, 0x1.942364p-94f, 0.0f,
     0x1.6197bp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfc27ep-37f, 0.0f,
     0x1.7d6ccp-62f, 0x1.7f1f52p-38f, 0x1.8723b4p-114f, 0x1.cf1f54p-16f,
     0x1.6837a8p-89f, 0x1.b7cea6p-97f, 0.0f, 0.0f, 0.0f, 0x1.b58266p-3f,
     0x1.694884p-68f, 0x1.f36cdp-5f, 0x1.67ac28p-118f, 0.0f, 0x1.13ae7ap-103f, 0.0f,
     0x1.e1d04p-10f, 0x1.8cca34p-90f, 0x1.b5dec2p-6f, 0x1.9d696ep-26f,
     0x1.de502p-114f, 0.0f, 0x1.a098p-38f, 0x1.81197cp-11f, 0x1.f415cp-69f, 0.0f,
     0x1.b66fb4p-125f, 0x1.cb2dcep-79f, 0.0f, 0.0f, 0x1.4e476cp-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c87406p-63f, 0x1.633936p-113f, 0x1.55735ap-93f, 0.0f, 0x1.7acbe6p-111f,
     0x1.03c026p-36f, 0.0f, 0.0f, 0x1.da2702p-124f, 0.0f, 0.0f, 0.0f, 0x1.a22fe8p-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.11df6ap-42f, 0.0f, 0x1.65f402p-1f, 0x1.38f396p-14f,
     0x1.4ec0b8p-20f, 0.0f, 0x1.6e651ep-28f, 0.0f, 0x1.5a5a6cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.2fc2dap-31f, 0x1.36e5cap-73f, 0.0f, 0x1.20f264p-63f, 0.0f, 0x1.a0e0a4p-8f,
     0.0f, 0.0f, 0.0f, 0x1.5f285ep-64f, 0x1.d624aap-82f, 0.0f, 0x1.f340cp-37f, 0.0f,
     0x1.838bcap-23f, 0.0f, 0.0f, 0x1.e0f12p-3f, 0.0f, 0x1.b50cbap-76f,
     0x1.bd1d5cp-61f, 0x1.5e06ap-83f, 0x1.7068bap-27f, 0x1.caf60ep-109f, 0.0f, 0x1p0f,
     0x1.1ab132p-45f, 0x1.ea5da2p-101f, 0x1.5e8e0cp-29f, 0.0f, 0x1.6ed1a2p-66f, 0.0f,
     0.0f, 0x1.d0c40ap-51f, 0x1.a7894cp-23f, 0.0f, 0x1.b111p-30f, 0.0f, 0.0f,
     0x1.a6624ep-88f, 0.0f, 0.0f, 0x1.a7f0bap-22f, 0.0f, 0x1.cffac6p-108f,
     0x1.fe9916p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cee7f2p-45f, 0x1.6f1b3p-125f, 0x1.57d6eap-62f, 0.0f, 0.0f, 0.0f,
     0x1.3aa004p-119f, 0x1.5f97b4p-3f, 0x1.4d5e7ap-94f, 0x1.3da7ap-36f, 0.0f,
     0x1.af98a8p-41f, 0.0f, 0x1.4afb68p-56f, 0x1.380bd2p-28f, 0x1.65f72p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2bda94p-2f, 0.0f, 0x1.32c9eep-70f, 0x1.84d98ap-42f,
     0x1.7c0c1ap-85f, 0.0f, 0x1.93a0c8p-2f, 0x1.0c08cep-92f, 0x1.b7bb16p-97f, 0.0f,
     0.0f, 0.0f, 0x1.15f728p-6f, 0x1.0af6b4p-66f, 0x1.fe4cd2p-94f, 0x1.4fd9dp-109f,
     0.0f, 0.0f, 0x1.e73f82p-111f, 0x1.f1881cp-55f, 0x1.8630a4p-28f, 0.0f,
     0x1.5c13dp-87f, 0.0f, 0.0f, 0.0f, 0x1.946fecp-19f, 0.0f, 0.0f, 0.0f,
     0x1.1efbbep-96f, 0.0f, 0.0f, 0.0f, 0x1.979862p-102f, 0.0f, 0.0f, 0x1.282a84p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2d1fcp-2f, 0.0f, 0.0f, 0x1.73a784p-38f,
     0x1.45bf44p-74f, 0x1.cb75fep-88f, 0.0f, 0.0f, 0x1.86297cp-95f, 0x1.2cf5d4p-32f,
     0.0f, 0x1.d0a6bcp-122f, 0x1.b23acp-64f, 0x1.6e4ebp-19f, 0.0f, 0.0f,
     0x1.77b83ap-62f, 0x1.de2486p-53f, 0x1.6991dp-82f, 0x1.52ad06p-47f, 0.0f,
     0x1.b3c89cp-29f, 0.0f, 0.0f, 0x1.2cd422p-105f, 0x1.627116p-5f, 0x1.d813a4p-28f,
     0.0f, 0x1.d27d94p-95f, 0.0f, 0x1.b0aad2p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8687dcp-37f, 0x1.4d645cp-7f, 0.0f, 0.0f, 0x1.ed5296p-34f, 0x1.bd10c2p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00614cp-107f, 0.0f,
     0x1.67524cp-53f, 0.0f, 0x1.b08a74p-85f, 0x1.374c66p-31f, 0x1.2bc0e2p-10f, 0.0f,
     0x1.05b0fp-54f, 0.0f, 0.0f, 0.0f, 0x1.4af544p-53f, 0x1.eae71cp-49f, 0.0f, 0.0f,
     0x1.425b54p-121f, 0.0f, 0.0f, 0x1.fad9d6p-46f, 0x1.c2dddep-123f, 0.0f,
     0x1.e8a5b8p-101f, 0.0f, 0x1.46e186p-39f, 0x1.71648ep-51f, 0x1.bf1a84p-9f, 0.0f,
     0x1.9216c6p-31f, 0x1.d9066ap-45f, 0x1.3986fp-12f, 0x1.e8b1a4p-56f, 0.0f, 0.0f,
     0x1.66e808p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35432p-45f, 0x1.cd16fap-71f,
     0x1.0156bp-6f, 0x1.e7c724p-38f, 0.0f, 0x1.b9dd82p-95f, 0.0f, 0.0f,
     0x1.4ff6cp-22f, 0x1.08d862p-76f, 0x1.6e87f2p-89f, 0.0f, 0x1.f5594ap-86f,
     0x1.3d8e1cp-21f, 0.0f, 0x1.15c868p-9f, 0.0f, 0x1.d4507ep-52f, 0x1.6c88a8p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c95a6p-19f, 0.0f, 0.0f, 0.0f,
     0x1.7956e6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e13f4p-100f, 0x1.b03798p-80f,
     0x1.74a9d4p-121f, 0x1.76e744p-90f, 0x1.49c56ep-36f, 0.0f, 0.0f, 0.0f,
     0x1.f97f24p-24f, 0.0f, 0.0f, 0x1.c4e0f8p-9f, 0.0f, 0x1.4c64ccp-91f,
     0x1.5281f6p-19f, 0x1.faa02ap-123f, 0.0f, 0x1.9aa47ap-9f, 0.0f, 0.0f,
     0x1.431ddep-13f, 0x1.622938p-36f, 0x1.c29ffep-57f, 0x1.3c0d16p-58f,
     0x1.93f2eap-19f, 0x1.f26e26p-98f, 0x1.5f0f1ap-95f, 0x1.36c46ep-83f,
     0x1.d39238p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3331cp-95f, 0x1.511056p-21f,
     0x1.bd0e08p-26f, 0x1.1f915ep-50f, 0.0f, 0x1.51f34ap-49f, 0.0f, 0.0f,
     0x1.b8c2fap-118f, 0x1.224c98p-43f, 0x1.35e47ep-98f, 0x1.fc385p-88f,
     0x1.c3a3cep-27f, 0x1p0f, 0.0f, 0x1.44cb6cp-39f, 0.0f, 0x1.f08dd2p-124f,
     0x1.3b003ep-122f, 0.0f, 0x1.d20cdp-41f, 0.0f, 0.0f, 0.0f, 0x1.54f8ccp-70f, 0.0f,
     0x1.d0e414p-35f, 0x1.40211ep-49f, 0x1.329d42p-6f, 0.0f, 0.0f, 0.0f,
     0x1.f6628cp-48f, 0x1.108deep-110f, 0x1.08cd46p-112f, 0x1.8adc3cp-90f,
     0x1.a1ae9cp-46f, 0.0f, 0.0f, 0.0f, 0x1.952bbcp-16f, 0.0f, 0x1.b71e16p-20f, 0.0f,
     0.0f, 0.0f, 0x1.f3aee2p-9f, 0.0f, 0.0f, 0x1.e483ap-90f, 0x1.ccb76p-9f,
     0x1.e1ee58p-59f, 0.0f, 0x1.10b33p-1f, 0.0f, 0.0f, 0.0f, 0x1.e9c93ep-79f, 0.0f,
     0x1.b1871ep-47f, 0.0f, 0x1.34998ap-37f, 0x1.b8b9b2p-26f, 0.0f, 0.0f, 0.0f,
     0x1.1187f6p-1f, 0x1.8b4518p-108f, 0.0f, 0x1.15c81cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.42e564p-125f, 0x1.063576p-82f, 0x1.98412p-93f, 0x1.dc76dcp-68f, 0.0f, 0.0f,
     0x1.c73ce4p-39f, 0.0f, 0x1.7cf272p-26f, 0.0f, 0x1.00dc08p-72f, 0x1.1a4418p-42f,
     0x1.e12c54p-32f, 0x1.670d7p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31392ap-17f, 0.0f,
     0x1.f97f4ap-62f, 0x1.e9b968p-103f, 0.0f, 0x1.bc6e9cp-53f, 0.0f, 0x1.73959ap-60f,
     0x1.816c46p-123f, 0.0f, 0x1.ee4668p-109f, 0x1.4aad68p-38f, 0x1.79ba28p-77f,
     0x1.e779c6p-35f, 0x1.7b3f86p-58f, 0x1.3cca08p-32f, 0.0f, 0.0f, 0.0f,
     0x1.ea744p-5f, 0.0f, 0.0f, 0.0f, 0x1.0d346ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11bacap-79f, 0.0f, 0x1.adcc82p-67f, 0.0f, 0.0f,
     0x1.8f31dp-77f, 0.0f, 0.0f, 0.0f, 0x1.f95826p-79f, 0x1.35955ep-10f,
     0x1.e52952p-90f, 0x1.1c5c6cp-85f, 0.0f, 0.0f, 0x1.aab84p-39f, 0.0f,
     0x1.eecc68p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23271ap-63f, 0.0f, 0x1.342c2ep-63f,
     0x1.6ab818p-13f, 0x1.5458a4p-16f, 0x1.336a98p-16f, 0.0f, 0.0f, 0x1.6adfa4p-122f,
     0.0f, 0x1.6daefp-72f, 0x1.1fe00ap-12f, 0x1.1a62c6p-81f, 0.0f, 0.0f,
     0x1.3f0362p-42f, 0x1.d01ab6p-70f, 0x1.9bb16cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6dd26ap-65f, 0.0f, 0x1.00364ep-122f, 0.0f, 0x1.7e888p-36f, 0x1.4bb88ep-83f,
     0x1.6d6376p-75f, 0.0f, 0.0f, 0x1.a1096p-125f, 0.0f, 0x1.3946c8p-100f,
     0x1.8beb5cp-109f, 0.0f, 0.0f, 0.0f, 0x1.181ac8p-20f, 0x1.30bddep-4f, 0.0f, 0.0f,
     0x1.98f646p-35f, 0x1.3af8eep-116f, 0.0f, 0.0f, 0.0f, 0x1.9058acp-4f, 0.0f, 0.0f,
     0x1.c68022p-106f, 0x1.3280d8p-101f, 0x1.8caad8p-35f, 0.0f, 0x1.2b76e4p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.432a88p-58f, 0.0f, 0x1.f0b3ep-63f, 0.0f, 0x1.f621ecp-32f,
     0.0f, 0x1.893542p-103f, 0x1.6be2eap-65f, 0.0f, 0x1.24b60ap-33f, 0x1.1b7e2ep-61f,
     0x1.4ef242p-99f, 0.0f, 0x1.dacbf4p-46f, 0.0f, 0x1.013ffcp-59f, 0x1.39e3dap-42f,
     0x1.91139p-65f, 0.0f, 0.0f, 0.0f, 0x1.7e47f4p-13f, 0.0f, 0x1.10f8f8p-5f, 0.0f,
     0x1.df4c34p-25f, 0x1.3906b6p-63f, 0.0f, 0x1.86b4f2p-44f, 0.0f, 0x1.2e7ac4p-45f,
     0x1.322c98p-109f, 0x1.736f96p-68f, 0x1.ba6f64p-108f, 0x1.a4e3f8p-39f, 0.0f,
     0x1.aa9d7p-59f, 0.0f, 0x1.80a5dep-113f, 0x1.33ff7ep-92f, 0x1.4ba64p-24f, 0.0f,
     0x1.458b72p-71f, 0x1.762c7ap-41f, 0.0f, 0.0f, 0.0f, 0x1.9cecd2p-33f,
     0x1.247034p-55f, 0.0f, 0.0f, 0x1.6cb9aap-19f, 0.0f, 0x1.614d9ep-114f,
     0x1.77c172p-42f, 0x1.aafe56p-66f, 0.0f, 0.0f, 0x1.dc5b92p-41f, 0x1.400c24p-80f,
     0x1.45d528p-117f, 0x1.85d146p-67f, 0x1.02472ap-66f, 0.0f, 0.0f, 0.0f,
     0x1.3dcf74p-30f, 0x1.366f9ap-5f, 0x1.0f6dd8p-26f, 0.0f, 0x1.ccacd6p-52f, 0.0f,
     0.0f, 0x1.212374p-115f, 0x1.c3cdfp-50f, 0x1.838fe8p-73f, 0x1.13f52ap-116f, 0.0f,
     0.0f, 0x1.c9779p-27f, 0x1.ae92f4p-72f, 0x1.4c7adep-6f, 0x1.3540cep-100f, 0.0f,
     0x1.48a73cp-105f, 0x1.a03712p-82f, 0.0f, 0x1.ecd1f8p-96f, 0x1.883388p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b8b6ap-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0d5574p-32f, 0x1.369728p-52f, 0x1.feee74p-60f, 0x1.236eap-117f,
     0x1.25470ap-115f, 0x1.c516a8p-120f, 0.0f, 0.0f, 0.0f, 0x1.f16fbcp-118f,
     0x1.dd8f1ep-42f, 0x1.b51238p-24f, 0x1.7f59fep-7f, 0.0f, 0.0f, 0x1.447046p-119f,
     0x1.d005f6p-22f, 0x1.388188p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.968102p-54f,
     0x1.79a1dp-28f, 0x1.78ee94p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c0106p-87f, 0.0f,
     0x1.076642p-121f, 0.0f, 0x1.e638ecp-10f, 0x1.b7e0f6p-85f, 0.0f, 0x1.002694p-121f,
     0x1.92ca36p-120f, 0.0f, 0x1.5493bep-109f, 0x1.23512cp-125f, 0x1.34debap-92f,
     0.0f, 0.0f, 0x1.fe3a16p-81f, 0x1.73c0bep-77f, 0.0f, 0.0f, 0x1.1a1106p-73f,
     0x1.5a7c94p-96f, 0x1.4cf18p-10f, 0x1.e37ab4p-9f, 0x1.373638p-90f,
     0x1.2df9b6p-16f, 0.0f, 0.0f, 0.0f, 0x1.91ba9ep-77f, 0x1.3b98f6p-32f,
     0x1.67d2e4p-17f, 0x1.1087bep-35f, 0x1.8788dp-59f, 0x1.571b8p-126f, 0.0f,
     0x1.fc005cp-37f, 0.0f, 0x1.60a36ep-64f, 0x1.193582p-31f, 0x1.4fde34p-117f, 0.0f,
     0x1.3eba92p-88f, 0.0f, 0x1p0f, 0.0f, 0x1.8d54f4p-114f, 0x1.03baf2p-100f,
     0x1.6df138p-77f, 0x1.c2acaep-124f, 0x1.fba408p-19f, 0.0f, 0x1.14d152p-60f, 0.0f,
     0x1.a85a5ep-12f, 0x1.762a1cp-21f, 0.0f, 0x1.c30e7ep-103f, 0.0f, 0x1.22ade8p-87f,
     0.0f, 0.0f, 0.0f, 0x1.11fb78p-31f, 0.0f, 0x1.7a065ap-114f, 0x1.f18bcep-100f,
     0.0f, 0x1.f7738cp-11f, 0x1.089916p-35f, 0x1.ff0e88p-100f, 0x1.10ac46p-27f,
     0x1.739eaap-97f, 0.0f, 0x1.b50414p-2f, 0x1.a34ebap-15f, 0.0f, 0x1.7299e2p-81f,
     0x1.1120f8p-84f, 0.0f, 0x1.47ec8cp-79f, 0.0f, 0x1.ebfcap-83f, 0x1.1b4d8ep-3f,
     0.0f, 0.0f, 0x1.63a97p-120f, 0.0f, 0x1.775c32p-75f, 0.0f, 0.0f, 0.0f,
     0x1.6dcbdep-69f, 0.0f, 0x1.4e4f0ep-115f, 0x1.faf8f2p-111f, 0x1.e8be9cp-124f,
     0.0f, 0.0f, 0x1.a9443p-22f, 0x1.78d132p-78f, 0x1.1259b6p-56f, 0x1.dba79p-98f,
     0.0f, 0.0f, 0.0f, 0x1.5ff146p-95f, 0.0f, 0x1.b42f6p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b48bap-34f, 0.0f, 0x1.c2b9e4p-7f, 0x1.ede99p-48f, 0.0f, 0x1.5c278cp-29f,
     0x1.c68f36p-122f, 0x1.02cbf2p-3f, 0.0f, 0.0f, 0x1.cbd13cp-85f, 0x1.bb0d06p-60f,
     0.0f, 0x1.08fd8cp-41f, 0x1.0620b6p-64f, 0x1.b54736p-79f, 0x1.72dc9p-95f, 0.0f,
     0x1.d0d562p-112f, 0x1.8bd7c4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.005fep-34f, 0.0f, 0x1.05e1c6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9796c6p-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd5baep-77f, 0.0f, 0x1.d0c7b2p-8f, 0x1.6bb098p-32f,
     0.0f, 0x1.5d5578p-54f, 0x1.7b9412p-96f, 0.0f, 0.0f, 0.0f, 0x1.5a87c6p-118f,
     0x1.1eba82p-38f, 0.0f, 0x1.78848ap-106f, 0.0f, 0x1.f33d2ap-50f, 0x1.5895bcp-53f,
     0x1.8a76ap-76f, 0.0f, 0x1.0094c4p-57f, 0.0f, 0.0f, 0x1.ebed9cp-9f,
     0x1.354162p-119f, 0x1.088476p-123f, 0.0f, 0x1.fca958p-41f, 0.0f,
     0x1.b3aa6cp-108f, 0.0f, 0.0f, 0x1.d85134p-57f, 0.0f, 0x1.1fdc9p-92f, 0.0f, 0.0f,
     0.0f, 0x1.ff443cp-114f, 0.0f, 0x1.cfed4cp-79f, 0x1.a9c314p-93f, 0x1.8871c8p-38f,
     0.0f, 0.0f, 0.0f, 0x1.e00d64p-105f, 0x1.695a4ep-100f, 0.0f, 0.0f,
     0x1.bb8f5cp-44f, 0.0f, 0x1.34a8ecp-82f, 0x1.dcb85ep-27f, 0x1.3e8a44p-118f,
     0x1.f594bp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a71ecp-112f, 0.0f, 0.0f,
     0x1.16f6c6p-79f, 0.0f, 0x1.c34acp-76f, 0x1.12fba4p-91f, 0x1.0619fp-117f, 0.0f,
     0x1.430988p-41f, 0x1.ea7746p-69f, 0x1.fc0216p-104f, 0.0f, 0x1.99924cp-117f, 0.0f,
     0.0f, 0.0f, 0x1.9bac26p-118f, 0x1.7ab1f2p-117f, 0.0f, 0x1.5ffcccp-74f, 0.0f,
     0.0f, 0x1.c440c4p-26f, 0x1.ef25cep-93f, 0.0f, 0x1.f68ccep-19f, 0x1.2fcbacp-51f,
     0.0f, 0x1.4f899ap-121f, 0x1.ab0124p-91f, 0.0f, 0x1.360764p-54f, 0x1.5046ccp-64f,
     0x1.61d9c2p-89f, 0x1.f3769ep-46f, 0x1.0293c8p-16f, 0.0f, 0.0f, 0x1.de3b2cp-68f,
     0x1.cefa74p-105f, 0.0f, 0x1.ebc85ap-31f, 0x1.22f8fcp-115f, 0.0f, 0x1.36551p-79f,
     0.0f, 0.0f, 0x1.eccbfep-54f, 0x1.e7a26ap-88f, 0.0f, 0.0f, 0.0f, 0x1.469df6p-87f,
     0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_exp10f4_u35kvx(tmp0);
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
    printf("Sleef_finz_exp10f4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10f4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
