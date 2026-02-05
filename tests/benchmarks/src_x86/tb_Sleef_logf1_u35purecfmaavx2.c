/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logf1_u35purecfma.c --function Sleef_logf1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.5a2182p-104f, 0.0f, 0x1.dd0648p-50f, 0x1.3c0cd6p-7f, 0x1.0a9702p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd713ap-107f, 0.0f, 0x1.1dcc4ep-118f,
     0x1.c6c374p-79f, 0.0f, 0.0f, 0.0f, 0x1.6cefcap-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc99ep-88f, 0.0f, 0.0f, 0.0f, 0x1.286be8p-103f, 0x1.ee77e8p-21f, 0.0f, 0.0f,
     0x1.db557p-88f, 0x1.473826p-50f, 0x1.d0cebp-77f, 0x1.cf4ea8p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.482006p-113f, 0x1.0d42f6p-39f, 0x1.35c6f8p-14f, 0.0f,
     0x1.24ec28p-60f, 0.0f, 0x1.2a234cp-9f, 0x1.e96f98p-125f, 0x1.adbc9cp-110f,
     0x1.557f7ep-93f, 0.0f, 0x1.e75c9ep-56f, 0x1.198b2cp-51f, 0x1.452a74p-14f, 0.0f,
     0x1.fae03cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc9542p-25f, 0x1.90ce6ap-84f,
     0.0f, 0x1.5a19cep-5f, 0x1.3aa1f6p-125f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.bd1898p-62f, 0x1.61cd6ap-106f, 0x1.fbbe8ep-6f, 0.0f, 0x1.6b2f4ap-83f, 0.0f,
     0.0f, 0x1.6ee1cp-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.606e0cp-45f, 0.0f, 0x1.f3fdc2p-38f, 0x1.07d56p-27f, 0.0f, 0.0f,
     0x1.3660ccp-93f, 0x1.21d076p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3518e2p-31f, 0.0f,
     0.0f, 0.0f, 0x1.052faap-89f, 0x1.009f9ap-68f, 0.0f, 0.0f, 0x1.1d9cep-47f, 0.0f,
     0x1.708a76p-46f, 0x1.686826p-69f, 0.0f, 0.0f, 0x1.55ca02p-126f, 0.0f,
     0x1.362802p-89f, 0x1.093b76p-55f, 0x1.74a472p-117f, 0x1.52ad52p-26f,
     0x1.b9e8dep-71f, 0x1.26181ep-9f, 0.0f, 0.0f, 0x1.325abep-61f, 0.0f, 0.0f, 0.0f,
     0x1.d30b4ep-67f, 0x1.a1f77ep-63f, 0x1.7482bap-122f, 0x1.1a8794p-9f, 0.0f,
     0x1.fa53cap-25f, 0.0f, 0x1.8b6b5ep-84f, 0x1.e699eap-37f, 0x1.b0ca06p-118f,
     0x1.746f12p-64f, 0x1.4b61ep-11f, 0x1.cd509ap-99f, 0.0f, 0.0f, 0x1.3e589p-90f,
     0.0f, 0x1.591aeap-91f, 0x1.7025a8p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b6d62p-48f, 0x1.87e7acp-123f, 0x1.4099a2p-15f, 0x1.0bdde4p-6f,
     0x1.6051fp-88f, 0x1.93c1acp-85f, 0.0f, 0x1.f21114p-82f, 0x1.6dab7p-25f, 0.0f,
     0x1.475e5ap-47f, 0x1.dd693cp-61f, 0.0f, 0x1.8969bp-97f, 0x1.09318ep-20f,
     0x1.7f23dep-31f, 0.0f, 0x1.610ac4p-14f, 0x1.186038p-76f, 0x1.bd0164p-32f, 0.0f,
     0.0f, 0.0f, 0x1.12b53cp-99f, 0x1.a71cbap-96f, 0x1.1abb54p-85f, 0x1.21cd98p-16f,
     0x1.ff1e22p-18f, 0x1.b565aap-97f, 0x1.421edp-103f, 0x1.c35bbep-18f,
     0x1.0883cep-54f, 0x1.8ef5b6p-73f, 0.0f, 0.0f, 0x1.dee3a2p-104f, 0x1.b84fbp-104f,
     0x1.c305d6p-36f, 0.0f, 0x1.850988p-105f, 0.0f, 0x1.7053acp-81f, 0.0f, 0.0f,
     0x1.2d35e2p-119f, 0.0f, 0.0f, 0.0f, 0x1.fb7486p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.20e54cp-116f, 0.0f, 0x1.8d88eep-74f, 0.0f, 0x1.f6500ep-110f, 0.0f,
     0.0f, 0.0f, 0x1.79d442p-74f, 0x1.7f2456p-58f, 0x1.4f4432p-68f, 0.0f,
     0x1.7c607ap-81f, 0x1.dae12cp-47f, 0x1.01e8p-103f, 0x1.140802p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.708194p-48f, 0x1.0be452p-44f, 0.0f, 0.0f, 0.0f, 0x1.764b08p-76f,
     0.0f, 0.0f, 0x1.b26e12p-49f, 0.0f, 0.0f, 0x1.fe7fc2p-66f, 0.0f, 0x1.52db84p-112f,
     0x1.d9a2dp-80f, 0.0f, 0.0f, 0x1.ad8378p-107f, 0x1.21784cp-56f, 0x1.904adp-72f,
     0.0f, 0.0f, 0x1.4e572cp-89f, 0.0f, 0x1.aa0ef4p-51f, 0x1.ae6d52p-103f,
     0x1.3a9538p-67f, 0x1.ff2c4ap-62f, 0x1.0d44d6p-53f, 0x1.9a9156p-54f,
     0x1.5e788ep-45f, 0.0f, 0.0f, 0x1.f201cep-4f, 0x1.05ed2p-65f, 0x1.8fea56p-59f,
     0x1.0ba72ep-111f, 0x1.efd5a6p-63f, 0x1.2189aap-58f, 0.0f, 0.0f, 0x1.e77f9cp-17f,
     0x1.9be76ap-123f, 0.0f, 0x1.26f2fp-6f, 0x1.f48ae2p-76f, 0.0f, 0.0f,
     0x1.ffc196p-76f, 0x1.69a0b4p-78f, 0.0f, 0x1.fbc4b6p-125f, 0x1.8288b4p-94f,
     0x1.14826ep-70f, 0.0f, 0.0f, 0x1.109a7ep-107f, 0.0f, 0x1.8bfbep-1f, 0.0f,
     0x1.2dfd6cp-45f, 0.0f, 0x1.62f186p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f670ep-112f, 0x1.cbe3aep-124f, 0x1.fd57d4p-28f, 0.0f, 0.0f, 0.0f,
     0x1.3f6532p-67f, 0x1.57d4aap-58f, 0x1.8dd244p-33f, 0x1.443a2ep-101f,
     0x1.8b884ap-101f, 0x1.cfa744p-118f, 0x1.d353bap-85f, 0.0f, 0.0f, 0.0f,
     0x1.5da764p-113f, 0x1.7c7b7ep-60f, 0x1.ed2792p-38f, 0x1.5fc31cp-24f,
     0x1.5f0938p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aed6ap-113f, 0x1.f2c552p-62f,
     0.0f, 0x1.bb9b5ap-93f, 0.0f, 0.0f, 0.0f, 0x1.460d42p-68f, 0.0f, 0x1.beabb6p-77f,
     0x1.a3eadap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e72976p-74f, 0.0f,
     0x1.3b135cp-22f, 0x1.2ec58p-37f, 0x1.597146p-22f, 0.0f, 0x1.91fcf4p-111f,
     0x1.6bd2aep-10f, 0.0f, 0x1.a61ecep-13f, 0.0f, 0.0f, 0x1.fc0d8cp-40f, 0.0f,
     0x1.639ddep-55f, 0.0f, 0.0f, 0x1.3abdbep-61f, 0x1.6778e4p-91f, 0.0f,
     0x1.9b0fb2p-126f, 0x1.e9d8fap-66f, 0x1.fd9374p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2073c4p-13f, 0.0f, 0x1.73c7d2p-111f, 0.0f, 0.0f, 0x1.242866p-50f, 0.0f, 0.0f,
     0x1.eeab7p-12f, 0x1.2fbaa8p-101f, 0x1.152e0cp-31f, 0x1.7827c4p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a629ecp-99f, 0x1.caa418p-118f, 0.0f,
     0x1.43fac8p-119f, 0x1.bc52a6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5f2eep-66f,
     0.0f, 0.0f, 0x1.51bc7cp-60f, 0.0f, 0.0f, 0x1.6aca08p-26f, 0x1.248852p-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cca1fap-42f, 0x1.24a4d6p-32f, 0.0f, 0x1.68b38ep-43f, 0.0f,
     0x1.e0d3f6p-62f, 0x1.de3bacp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0f898p-43f, 0.0f,
     0.0f, 0x1.8349d2p-115f, 0x1.c249c2p-105f, 0x1.7f2e2ep-75f, 0.0f,
     0x1.27eb9cp-109f, 0x1.fa6f24p-111f, 0x1.c68d5cp-14f, 0x1.176334p-71f,
     0x1.cbda5ap-95f, 0.0f, 0.0f, 0.0f, 0x1.c54712p-1f, 0.0f, 0x1.05906ep-47f, 0.0f,
     0x1.9ab76cp-115f, 0.0f, 0.0f, 0x1.9c34fep-58f, 0.0f, 0.0f, 0x1.5c1034p-126f,
     0.0f, 0x1.68497ep-93f, 0.0f, 0x1.4d90ep-4f, 0x1.e9f4dp-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.04f838p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.513a18p-66f,
     0x1.940bb6p-50f, 0x1.576dc6p-26f, 0x1.1589aap-52f, 0.0f, 0.0f, 0x1.1e5a3ap-44f,
     0x1.3ac112p-74f, 0.0f, 0.0f, 0.0f, 0x1.a964f6p-30f, 0x1.ce9eb2p-64f, 0.0f, 0.0f,
     0x1.c838d2p-24f, 0.0f, 0x1.547402p-78f, 0x1.a255eep-33f, 0x1.e287acp-72f, 0.0f,
     0x1.1ffb5cp-63f, 0x1.9c0d06p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aedfp-119f, 0.0f,
     0.0f, 0.0f, 0x1.5d8326p-21f, 0.0f, 0.0f, 0x1.b6274ep-96f, 0x1.fbe9b2p-40f,
     0x1.413d3ap-53f, 0.0f, 0x1.2b8fa2p-117f, 0x1.feae0ep-12f, 0x1.ba9374p-98f,
     0x1.051308p-5f, 0.0f, 0.0f, 0x1.761002p-46f, 0.0f, 0x1.7251fcp-29f,
     0x1.2fe51ep-21f, 0.0f, 0x1.bfa6bep-9f, 0x1.0d1238p-82f, 0x1.1d1348p-120f, 0.0f,
     0.0f, 0.0f, 0x1.967322p-40f, 0.0f, 0.0f, 0x1.0408b8p-87f, 0.0f, 0.0f,
     0x1.76ae0cp-22f, 0.0f, 0.0f, 0x1.fad27ap-100f, 0.0f, 0x1.07714cp-41f, 0.0f, 0.0f,
     0x1.986724p-37f, 0.0f, 0.0f, 0x1.08f802p-13f, 0.0f, 0x1.a159dcp-64f,
     0x1.74df08p-110f, 0x1.2db47cp-52f, 0.0f, 0.0f, 0x1.4caecap-122f, 0.0f,
     0x1.db1362p-2f, 0.0f, 0.0f, 0.0f, 0x1.1ee39ep-102f, 0.0f, 0x1.2d712p-109f,
     0x1.f56548p-60f, 0.0f, 0.0f, 0.0f, 0x1.948e74p-101f, 0.0f, 0x1.b14912p-19f, 0.0f,
     0x1.1a7e9ep-67f, 0x1.58761p-20f, 0.0f, 0x1.3790bcp-121f, 0.0f, 0.0f,
     0x1.7068d6p-112f, 0.0f, 0x1.71e47p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.743306p-16f,
     0x1.08b026p-117f, 0x1.c86cccp-97f, 0x1.de5274p-3f, 0.0f, 0x1.599c84p-88f,
     0x1.dd6e6ep-118f, 0x1.41ae2cp-85f, 0.0f, 0.0f, 0.0f, 0x1.cff2d6p-15f, 0.0f,
     0x1.066856p-13f, 0x1.7fb6dep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2168cap-25f, 0x1.59a31ep-115f, 0.0f, 0x1.11fc98p-3f, 0x1.c2f916p-31f, 0.0f,
     0x1.2466acp-82f, 0.0f, 0x1.de6002p-80f, 0.0f, 0x1.983d04p-21f, 0.0f, 0.0f, 0.0f,
     0x1.de9ef2p-30f, 0x1.a213f6p-70f, 0.0f, 0x1.167388p-58f, 0.0f, 0.0f,
     0x1.bae58ap-99f, 0x1.eeb374p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a56bcep-16f, 0.0f,
     0.0f, 0.0f, 0x1.59833cp-90f, 0x1.84a722p-24f, 0.0f, 0.0f, 0.0f, 0x1.11b60cp-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29e0dap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34e574p-57f, 0.0f, 0x1.e83bfep-40f, 0.0f, 0x1.019ep-119f, 0.0f,
     0x1.c7667ep-74f, 0x1.c8cf94p-116f, 0.0f, 0.0f, 0x1.c24504p-50f, 0.0f,
     0x1.851fa8p-101f, 0.0f, 0x1.038492p-24f, 0x1.abd2d8p-44f, 0x1.a39b4ep-46f, 0.0f,
     0x1.0c5efcp-112f, 0.0f, 0x1.cab0eep-11f, 0x1.24b182p-75f, 0.0f, 0x1.5ecfeep-16f,
     0.0f, 0.0f, 0.0f, 0x1.2be93ep-61f, 0x1.1a4cbp-55f, 0.0f, 0.0f, 0x1.98ca82p-45f,
     0.0f, 0.0f, 0.0f, 0x1.eb8aeep-34f, 0x1.5abed6p-33f, 0x1.7c0084p-34f,
     0x1.7edc3p-57f, 0x1.d6cb2p-8f, 0x1.4be64p-89f, 0x1.47a6ecp-44f, 0x1.db2d9ep-89f,
     0.0f, 0x1.64a2a2p-85f, 0x1.910a72p-77f, 0x1.a6ae6ap-91f, 0x1.2dcfb4p-50f, 0.0f,
     0x1.bec734p-44f, 0x1.33edap-20f, 0x1.e72d46p-71f, 0x1.096038p-124f, 0.0f, 0.0f,
     0.0f, 0x1.50b862p-85f, 0x1.db2c7p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.146822p-44f,
     0x1.94865ep-16f, 0.0f, 0x1.7ffbdcp-99f, 0x1.3572b8p-120f, 0x1.757c5ap-110f,
     0x1.679f8ap-103f, 0.0f, 0x1.3afd0ap-1f, 0.0f, 0x1.fccc4cp-94f, 0.0f,
     0x1.35f4dcp-4f, 0x1.ac694ep-66f, 0.0f, 0x1.156616p-102f, 0x1.cd99bcp-98f, 0.0f,
     0x1.4b1244p-61f, 0x1.8d67fap-101f, 0.0f, 0.0f, 0x1.963086p-19f, 0x1.092f88p-8f,
     0.0f, 0.0f, 0x1.9284fep-2f, 0x1.de288cp-71f, 0x1.ed2fa4p-109f, 0.0f, 0.0f,
     0x1.0c1ap-2f, 0x1.fd3af2p-100f, 0.0f, 0.0f, 0.0f, 0x1.e5fbd6p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.920cf2p-121f, 0x1.3346cep-31f, 0x1.cf448ep-35f, 0.0f,
     0x1.3aceep-91f, 0.0f, 0x1.565b32p-46f, 0x1.e9e298p-67f, 0.0f, 0.0f,
     0x1.37bb44p-23f, 0x1.71164ep-4f, 0x1.48467p-42f, 0.0f, 0.0f, 0x1.9fb3aap-122f,
     0.0f, 0x1.c4b8e2p-16f, 0x1.a8d176p-14f, 0.0f, 0x1.3d9a4ap-59f, 0x1.4f415p-33f,
     0.0f, 0x1.96d9bcp-8f, 0.0f, 0.0f, 0.0f, 0x1.623864p-76f, 0x1.4ef158p-32f,
     0x1.76a9c6p-87f, 0x1.ce061cp-121f, 0.0f, 0x1.a06b66p-18f, 0x1.78d1p-89f, 0.0f,
     0.0f, 0x1.0a9904p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c85bd4p-9f, 0x1.53ee7p-71f,
     0.0f, 0x1.f83d2ep-14f, 0x1.872a32p-106f, 0.0f, 0.0f, 0.0f, 0x1.157726p-126f,
     0.0f, 0x1.092fc6p-96f, 0.0f, 0.0f, 0x1.f1b9dap-47f, 0.0f, 0.0f, 0x1.d7300ap-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f5dccp-25f, 0.0f, 0x1.fccffp-27f, 0x1.d051ecp-26f,
     0x1.263a5cp-104f, 0x1.9ef7fcp-90f, 0.0f, 0.0f, 0.0f, 0x1.9d8f66p-48f,
     0x1.87abfep-103f, 0x1.ad44fap-81f, 0.0f, 0x1.7dc422p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f364b6p-14f, 0x1.2028b6p-58f, 0x1.6d544ap-78f, 0.0f, 0.0f,
     0x1.748e7ap-83f, 0x1.4c95fep-97f, 0.0f, 0x1.fe9118p-118f, 0x1.2acdcep-75f, 0.0f,
     0x1.bf6036p-15f, 0x1.18591cp-111f, 0x1.b7cb1p-116f, 0x1.7b06b6p-35f, 0.0f, 0.0f,
     0x1.021b88p-113f, 0x1.967a2p-59f, 0x1.0d5434p-34f, 0.0f, 0x1.e4623p-110f,
     0x1.baa416p-13f, 0.0f, 0.0f, 0x1.36edc4p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1fd86p-38f, 0.0f, 0x1.08f4fcp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.acb5dep-103f, 0.0f, 0x1.72016ap-122f, 0.0f, 0x1.3872cp-45f, 0.0f,
     0x1.eaa04p-17f, 0.0f, 0x1.5f82dcp-86f, 0x1.53c47ep-119f, 0x1.294e1ep-38f,
     0x1.a83512p-110f, 0.0f, 0x1.8d4a54p-11f, 0x1.072d3ap-13f, 0.0f, 0x1.4ac8e8p-121f,
     0.0f, 0x1.c74b86p-54f, 0x1.651de4p-115f, 0x1.0bb7c8p-23f, 0.0f, 0x1.106b54p-58f,
     0.0f, 0.0f, 0x1.f645fep-11f, 0x1.21b7c2p-89f, 0x1.78b7f2p-82f, 0x1.341df2p-116f,
     0x1.03c5b6p-75f, 0.0f, 0x1.8931ecp-15f, 0.0f, 0x1.549b7ep-119f, 0x1.99828ap-26f,
     0.0f, 0x1.cd9da2p-93f, 0x1.cca098p-8f, 0.0f, 0x1.b41656p-113f, 0x1.f1548p-123f,
     0x1.aa0052p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c63814p-19f, 0.0f,
     0x1.ec47b4p-75f, 0.0f, 0x1.3565fep-42f, 0x1.8e96dp-125f, 0.0f, 0.0f,
     0x1.56e35p-46f, 0x1.e4d066p-30f, 0x1.a17b74p-43f, 0.0f, 0.0f, 0x1.495fa2p-108f,
     0.0f, 0x1.c507eap-22f, 0.0f, 0.0f, 0x1.9ff9d8p-16f, 0x1.a4fae4p-11f,
     0x1.31125p-88f, 0x1.76e79cp-102f, 0x1.2692dep-32f, 0.0f, 0.0f, 0.0f,
     0x1.15f346p-80f, 0.0f, 0.0f, 0x1.12b868p-4f, 0.0f, 0x1.a0bf9ep-68f, 0.0f, 0.0f,
     0.0f, 0x1.c82e8p-4f, 0.0f, 0.0f, 0.0f, 0x1.e6ce66p-24f, 0x1.e7d692p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ad2f46p-65f, 0x1.f5d1f6p-57f, 0.0f, 0x1.c1199ap-27f,
     0x1.9ab8f2p-8f, 0x1.9270d4p-43f, 0x1.f82012p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f2860ep-72f, 0.0f, 0.0f, 0.0f, 0x1.3374e4p-75f,
     0x1.944392p-66f, 0x1.f56798p-81f, 0x1.41a144p-125f, 0.0f, 0x1.b40b34p-82f, 0.0f,
     0.0f, 0x1.73877p-84f, 0.0f, 0x1.af3c54p-76f, 0x1.e7bdacp-62f, 0.0f, 0.0f, 0.0f,
     0x1.548194p-110f, 0x1.523f7p-20f, 0x1.0c6258p-3f, 0x1.056b64p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.844934p-124f, 0.0f, 0x1.4cb4bp-107f, 0x1.70b3bep-63f,
     0x1.8d4032p-63f, 0x1.24ac9p-119f, 0x1.6130dcp-95f, 0.0f
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
            tmp1 = Sleef_logf1_u35purecfma(tmp0);
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
    printf("Sleef_logf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logf1_u35purecfma bench acc %a\n", global_bench_acc);
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
