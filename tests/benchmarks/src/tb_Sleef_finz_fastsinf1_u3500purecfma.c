/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastsinf1_u3500purecfma.c --function \
 *     Sleef_finz_fastsinf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.577814p-53f, 0x1.4e01bap-9f, 0x1.4e9a92p-91f, 0x1.723fa4p-43f,
     0x1.ad1b6cp-101f, 0.0f, 0x1.23dcp-106f, 0x1.2a247ap-1f, 0x1.91f2ecp-119f,
     0x1.8789ap-7f, 0.0f, 0x1.4a1486p-58f, 0x1.a5b76cp-106f, 0.0f, 0.0f, 0.0f,
     0x1.d3999cp-34f, 0x1.da908ep-56f, 0.0f, 0x1.2bc40ep-89f, 0.0f, 0.0f, 0.0f,
     0x1.07bac4p-35f, 0x1.5f42e4p-45f, 0x1.501b14p-85f, 0.0f, 0.0f, 0x1.d371b6p-34f,
     0x1.ecc3a6p-10f, 0.0f, 0x1.390b1p-19f, 0x1.8ef462p-51f, 0x1.fcd33ap-97f,
     0x1.ed4a2cp-112f, 0.0f, 0x1.f733a2p-44f, 0x1.4e163ap-32f, 0x1.504252p-112f,
     0x1.65924p-56f, 0x1.73527ep-77f, 0.0f, 0x1.e7f9b2p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ee4ap-56f, 0x1.cef1bp-77f, 0.0f, 0x1.6105b2p-76f, 0x1.4be106p-98f,
     0x1.79fac6p-42f, 0.0f, 0x1.209948p-117f, 0.0f, 0x1.514f84p-17f, 0x1.8fa55p-21f,
     0.0f, 0.0f, 0x1.75101ep-30f, 0x1.b5cfe8p-120f, 0.0f, 0.0f, 0x1.a0083ep-31f, 0.0f,
     0x1.7f3822p-85f, 0.0f, 0.0f, 0.0f, 0x1.ebce9ep-68f, 0x1.03bcbp-116f,
     0x1.c53ae4p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8884ep-62f, 0x1.f22faap-25f,
     0x1.727806p-89f, 0.0f, 0.0f, 0x1.a3b9c8p-54f, 0x1.f9c47cp-61f, 0x1.3691c2p-67f,
     0.0f, 0x1.bfe49p-56f, 0x1.a2119cp-119f, 0x1.c2efa2p-46f, 0x1.f3ae42p-34f,
     0x1.d8eb1ep-26f, 0.0f, 0.0f, 0x1.edd4a8p-120f, 0x1.3fa908p-124f, 0x1.d6a26ap-57f,
     0x1.908ap-113f, 0.0f, 0x1.f6f94p-124f, 0.0f, 0x1.ad53d6p-110f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5c9f6cp-9f, 0.0f, 0x1.c23856p-47f, 0x1.380e46p-108f, 0.0f, 0.0f,
     0x1.5a0aa2p-31f, 0x1.f09e66p-83f, 0.0f, 0.0f, 0x1.bed394p-105f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.2e55p-74f, 0.0f, 0x1.1850fcp-110f, 0.0f, 0x1.c4048cp-37f,
     0x1.6db32p-4f, 0.0f, 0x1.660e42p-62f, 0.0f, 0.0f, 0.0f, 0x1.398bbp-39f,
     0x1.4a23f2p-105f, 0x1.b5c916p-44f, 0x1.1976dep-13f, 0x1.ee8108p-35f,
     0x1.e8f7p-104f, 0.0f, 0x1.9f89c4p-42f, 0.0f, 0x1.8cb41p-69f, 0.0f,
     0x1.e8e6cp-103f, 0x1.d1a23cp-41f, 0x1.a67adcp-98f, 0.0f, 0x1.2e0c2cp-89f, 0.0f,
     0x1.0ede86p-66f, 0.0f, 0x1.dc7f24p-116f, 0x1.a52588p-36f, 0.0f, 0x1.693dc2p-50f,
     0.0f, 0x1.9e6c3ap-19f, 0x1.669cbcp-98f, 0.0f, 0x1.d355a2p-90f, 0x1.8412eep-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec7d9ap-111f, 0.0f, 0x1.a5006ep-90f, 0.0f,
     0x1.ff0fdap-85f, 0x1.0920ap-57f, 0x1.bc5d64p-90f, 0x1.65e0ecp-83f, 0.0f, 0.0f,
     0.0f, 0x1.57e7a8p-86f, 0.0f, 0.0f, 0x1.adb5fep-114f, 0.0f, 0.0f, 0x1.ec9526p-6f,
     0.0f, 0.0f, 0x1.469be2p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.46b394p-3f, 0.0f, 0x1.902c46p-29f, 0x1.0167f4p-48f, 0x1.2e6b6cp-6f, 0.0f,
     0x1.2cf5dap-122f, 0.0f, 0.0f, 0.0f, 0x1.580cbp-35f, 0x1.f20f0ap-120f,
     0x1.0a84b2p-69f, 0.0f, 0.0f, 0x1.923676p-89f, 0x1.5ece3ep-9f, 0x1.b7c42p-88f,
     0x1.f5b596p-83f, 0.0f, 0x1.244802p-48f, 0.0f, 0.0f, 0x1.7089aep-115f, 0.0f, 0.0f,
     0x1.146d34p-41f, 0x1.f5595ap-61f, 0.0f, 0.0f, 0x1.e33b5cp-69f, 0x1.0168dp-124f,
     0.0f, 0.0f, 0x1.e14c9cp-32f, 0x1.102a5cp-3f, 0x1.bbb31ep-51f, 0.0f,
     0x1.95026ep-121f, 0.0f, 0.0f, 0.0f, 0x1.8cea5p-11f, 0x1.d16b66p-47f, 0.0f, 0.0f,
     0x1.b47a6cp-113f, 0x1.58dbaep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c969aep-97f,
     0x1.9642e6p-7f, 0x1.02b5cp-16f, 0.0f, 0x1.600178p-95f, 0x1.518108p-20f, 0.0f,
     0.0f, 0x1.7e296ep-40f, 0.0f, 0x1.f4d94ap-86f, 0.0f, 0x1.088deep-50f, 0.0f,
     0x1.0af8dp-109f, 0x1.17d7c8p-28f, 0.0f, 0x1.cbb10cp-103f, 0x1.5c8378p-110f,
     0x1.db9ee8p-6f, 0x1.55e83cp-86f, 0x1.083698p-114f, 0.0f, 0x1.dc74aep-20f, 0.0f,
     0.0f, 0x1.6f912p-71f, 0x1.be0b9ep-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e0186p-18f,
     0x1.c12edap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb1274p-41f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d24d8p-77f, 0x1.a8bbap-92f, 0.0f, 0x1.806c62p-93f, 0x1.599008p-113f,
     0.0f, 0x1.f73bb8p-116f, 0x1.1816dp-43f, 0x1.04f41ap-78f, 0.0f, 0x1.69739ep-35f,
     0x1.dd8308p-111f, 0.0f, 0.0f, 0x1.e3e836p-41f, 0.0f, 0x1.67a5bcp-42f,
     0x1.2a3d64p-111f, 0.0f, 0.0f, 0x1.4cdd02p-53f, 0x1.19c942p-11f, 0x1.e706fep-106f,
     0x1.bad668p-2f, 0x1.e48cp-33f, 0x1.129acp-34f, 0x1.3df1b6p-79f, 0.0f, 0.0f,
     0x1.8df86cp-103f, 0x1.49de4p-56f, 0.0f, 0.0f, 0.0f, 0x1.d744acp-101f,
     0x1.219ae2p-33f, 0x1.4c0568p-71f, 0x1.83f0a6p-53f, 0.0f, 0x1.4f1a18p-97f, 0.0f,
     0x1.1c7f7ap-41f, 0x1.02f66ep-108f, 0.0f, 0x1.cfb0c2p-116f, 0.0f, 0.0f,
     0x1.82174p-99f, 0x1.d01298p-107f, 0x1.b93bb4p-113f, 0.0f, 0x1.957ed2p-124f, 0.0f,
     0x1.eff21ap-71f, 0x1.97788ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.42d0a4p-44f, 0.0f, 0.0f, 0.0f, 0x1.30475ep-38f,
     0.0f, 0x1.33c054p-43f, 0.0f, 0.0f, 0.0f, 0x1.9cbb92p-24f, 0.0f, 0x1.a8d4b2p-34f,
     0x1.bedc98p-9f, 0x1.764332p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a5be4p-54f,
     0x1.485ed4p-48f, 0x1.07a478p-29f, 0x1.b4c4b8p-59f, 0.0f, 0.0f, 0x1.5349bcp-7f,
     0.0f, 0x1.94e714p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bac5ap-92f,
     0x1.02e7dap-117f, 0x1.5b8522p-56f, 0x1.6b2034p-11f, 0.0f, 0x1.e03c1ep-118f, 0.0f,
     0.0f, 0.0f, 0x1.044adep-110f, 0x1.dbd0f6p-29f, 0.0f, 0x1.24d494p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3f1bap-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.643d38p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12021ep-70f, 0.0f, 0.0f, 0x1.457074p-105f, 0x1.c01592p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6cc7dep-64f, 0x1.3c5a4ap-99f, 0x1.d66cb8p-118f, 0x1.69d37ep-111f,
     0x1.35293p-1f, 0x1.aad068p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59aee2p-126f, 0.0f, 0.0f, 0.0f, 0x1.99145cp-118f, 0.0f, 0x1.8704fcp-54f,
     0x1.860db2p-27f, 0x1.e4574cp-85f, 0x1.5c6eacp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c8b54p-66f, 0.0f, 0.0f, 0x1.4c3ae6p-70f, 0x1.321002p-115f, 0x1.0fbc04p-85f,
     0.0f, 0x1.b53b08p-36f, 0.0f, 0.0f, 0x1.88b586p-23f, 0.0f, 0x1.427332p-125f,
     0x1.039294p-37f, 0.0f, 0x1.48a5ccp-116f, 0x1.8a0cdcp-93f, 0x1.9706bcp-95f, 0.0f,
     0.0f, 0x1.ab362ap-105f, 0.0f, 0x1.2c44f6p-59f, 0.0f, 0x1.a971aap-92f,
     0x1.88c70ap-59f, 0.0f, 0.0f, 0x1.425e94p-107f, 0.0f, 0x1.634214p-95f, 0.0f,
     0x1.fd1118p-17f, 0.0f, 0x1.4580ap-34f, 0x1.73d34p-33f, 0x1.c46492p-12f, 0.0f,
     0.0f, 0.0f, 0x1.be67e8p-21f, 0x1.688f22p-111f, 0.0f, 0x1.88f8cp-69f,
     0x1.6fe408p-78f, 0x1.da3bcp-79f, 0x1.b53e3ap-86f, 0.0f, 0x1.d98c96p-93f,
     0x1.4409e8p-94f, 0x1.81fdbap-82f, 0x1.487a5ep-10f, 0x1.400b0ap-8f,
     0x1.25ca9cp-125f, 0.0f, 0.0f, 0x1.f28cdap-98f, 0x1.fabd3ep-50f, 0.0f, 0.0f, 0.0f,
     0x1.18a572p-71f, 0x1.27908p-114f, 0x1.3208c2p-87f, 0.0f, 0x1.1e2724p-12f, 0.0f,
     0.0f, 0x1.27c1aep-97f, 0x1p0f, 0x1.5ec272p-65f, 0.0f, 0x1.8c07a6p-44f, 0.0f,
     0.0f, 0x1.38d492p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac7cf6p-27f, 0.0f,
     0x1.14142cp-15f, 0x1.058978p-4f, 0.0f, 0x1.96883ep-70f, 0x1.1eea8ap-46f,
     0x1.33c822p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7bc1ap-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2826fp-84f, 0.0f, 0x1.c9ea6ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.896aeap-6f, 0x1.18aa64p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b53adcp-19f,
     0x1.503faap-65f, 0x1.fb0b9p-33f, 0x1.84626cp-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a974bp-80f, 0.0f, 0x1.97189cp-126f, 0.0f, 0x1.e47edap-65f, 0x1.91cb66p-47f,
     0x1.ad06bap-29f, 0x1.fd4818p-23f, 0.0f, 0.0f, 0x1.a7e09ep-54f, 0.0f, 0.0f, 0.0f,
     0x1.4d9412p-67f, 0x1.959fap-59f, 0.0f, 0x1.5ef4e6p-109f, 0.0f, 0x1.5323fap-44f,
     0.0f, 0.0f, 0x1.1cbeacp-84f, 0.0f, 0x1.f1b528p-3f, 0.0f, 0.0f, 0x1p0f,
     0x1.b70cf6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54e7eap-126f, 0.0f, 0.0f,
     0x1.8c5ce6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.335d94p-19f,
     0x1.f6c344p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4460ap-7f, 0x1.b675a8p-9f,
     0.0f, 0x1.f9ad62p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58ba28p-27f, 0.0f, 0.0f, 0.0f,
     0x1.7f6fb8p-29f, 0.0f, 0x1.39bfd6p-102f, 0.0f, 0x1.6be1a4p-56f, 0.0f, 0.0f, 0.0f,
     0x1.369972p-65f, 0x1.1a126p-6f, 0x1.8c81b6p-79f, 0.0f, 0x1.06582p-34f,
     0x1.69cb2ep-53f, 0.0f, 0.0f, 0.0f, 0x1.9b8272p-73f, 0.0f, 0x1.2c7b58p-19f, 0.0f,
     0x1.f35ab4p-61f, 0x1.c3c1b8p-2f, 0.0f, 0x1.6ba61p-23f, 0.0f, 0x1.5a8ebep-71f,
     0.0f, 0.0f, 0x1.c6e4c2p-107f, 0x1.3887f2p-14f, 0x1.c7982cp-91f, 0x1.0b08eap-104f,
     0x1.7f8edep-63f, 0.0f, 0.0f, 0x1.bfc9fap-111f, 0.0f, 0x1.f6f1fep-44f,
     0x1.a70ff6p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccd0a4p-46f, 0x1.4dad66p-77f,
     0x1.af502cp-65f, 0x1.df5ecep-79f, 0.0f, 0.0f, 0.0f, 0x1.00e586p-24f,
     0x1.32ccbep-18f, 0x1.960eb8p-53f, 0.0f, 0.0f, 0x1.546c3p-99f, 0.0f, 0.0f,
     0x1.e8a0d4p-110f, 0.0f, 0.0f, 0x1.66fc92p-102f, 0.0f, 0x1.71a286p-82f, 0.0f,
     0x1.4801eep-15f, 0.0f, 0x1.9d7ff8p-43f, 0.0f, 0x1.3087c6p-104f, 0x1.8ae8bcp-118f,
     0x1.41fa08p-60f, 0.0f, 0.0f, 0.0f, 0x1.636936p-19f, 0x1.2c0474p-48f,
     0x1.309bbep-106f, 0x1.833cb2p-25f, 0.0f, 0x1.59a83p-44f, 0x1.d2031ap-91f,
     0x1.26f5f4p-48f, 0.0f, 0x1.12856ap-82f, 0x1.1dfd56p-12f, 0x1.1ba57ap-54f,
     0x1.67440cp-15f, 0x1.e77314p-45f, 0.0f, 0.0f, 0.0f, 0x1.88e0b8p-116f,
     0x1.ab4d44p-69f, 0x1.48a482p-61f, 0x1.d7ccp-77f, 0x1.d1de5cp-69f, 0x1.8b49ep-20f,
     0.0f, 0x1.ac01eep-92f, 0.0f, 0.0f, 0x1.6b82dep-10f, 0x1.ed59f4p-93f, 0.0f,
     0x1.35500ap-38f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c22ff8p-38f,
     0x1.33b084p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4daa16p-124f, 0.0f,
     0x1.155ebcp-102f, 0x1.576f64p-100f, 0x1.4bbc06p-95f, 0x1.a5a7ccp-86f,
     0x1.2762ecp-70f, 0.0f, 0.0f, 0x1.10dd3p-112f, 0x1.08fcc4p-40f, 0.0f,
     0x1.c3c83cp-69f, 0.0f, 0x1.86b1acp-57f, 0.0f, 0.0f, 0x1.df5658p-75f, 0.0f,
     0x1.ca746p-93f, 0.0f, 0x1.1809a2p-107f, 0x1.374b7ap-71f, 0x1.32e114p-69f,
     0x1.44dd0ap-45f, 0x1.f0c34ap-41f, 0x1.1bc1bap-123f, 0.0f, 0x1.76e78ap-105f,
     0x1.370018p-6f, 0.0f, 0.0f, 0x1.47688cp-46f, 0.0f, 0.0f, 0.0f, 0x1.ba5604p-86f,
     0.0f, 0x1.e6767ap-100f, 0.0f, 0x1.504b86p-94f, 0.0f, 0x1.d37086p-7f, 0.0f,
     0x1.4bb08ap-124f, 0.0f, 0.0f, 0x1.61b0d2p-26f, 0.0f, 0x1.5d53fp-101f, 0.0f,
     0x1.dd9db6p-123f, 0x1.bd472ap-7f, 0.0f, 0x1.0bf8b4p-25f, 0.0f, 0.0f,
     0x1.818f04p-111f, 0x1.e627d6p-94f, 0.0f, 0x1.d18aep-21f, 0x1.0a34b2p-8f,
     0x1.ae8b58p-26f, 0x1.185f5ap-37f, 0x1.d026a2p-62f, 0.0f, 0.0f, 0x1.02ff6cp-34f,
     0x1.4c0242p-23f, 0.0f, 0x1.d6432p-82f, 0x1.49965ap-96f, 0.0f, 0x1.8f5c52p-79f,
     0x1.2e67ccp-15f, 0x1.d28f5ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59be42p-38f, 0.0f,
     0x1.c32748p-67f, 0x1.17231p-55f, 0.0f, 0.0f, 0.0f, 0x1.b2268ap-125f,
     0x1.23dd5cp-87f, 0.0f, 0.0f, 0x1.5c069ap-50f, 0x1.d3a24cp-60f, 0x1.35c98cp-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a94302p-40f, 0.0f, 0x1.b78c2ep-101f, 0x1.d229aap-25f,
     0x1.f61ccap-26f, 0.0f, 0x1.519da2p-84f, 0x1.bdbed4p-16f, 0x1.8760f2p-108f, 0.0f,
     0.0f, 0x1.946e84p-95f, 0x1.83efa6p-60f, 0.0f, 0.0f, 0x1.e5e8dp-64f, 0.0f,
     0x1.3fef68p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.519d24p-59f, 0.0f, 0x1.4bdf8ep-104f,
     0.0f, 0x1.7872ap-36f, 0x1.ffcd1ap-49f, 0x1.b07376p-12f, 0x1.9ddbe8p-91f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b4b3cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a6d98p-19f, 0x1.cbf6fcp-67f, 0.0f, 0x1.92994ap-79f, 0x1.2125c4p-76f, 0.0f,
     0.0f, 0.0f, 0x1.4dbd9cp-81f, 0x1.1104acp-8f, 0x1.24e89cp-66f, 0.0f,
     0x1.afa982p-46f, 0.0f, 0x1.cf8e44p-39f, 0.0f, 0x1.31d8e8p-84f, 0x1.145d6p-64f,
     0x1.421fe2p-39f, 0.0f, 0x1.ff3a6cp-85f, 0x1.213718p-7f, 0.0f, 0.0f, 0.0f,
     0x1.cdce08p-76f, 0x1.8ef0eap-59f, 0x1.40d18ap-13f, 0x1.3c7194p-15f, 0.0f, 0.0f,
     0x1.4f4f38p-119f, 0.0f, 0.0f, 0x1.900fcap-101f, 0.0f, 0.0f, 0x1.819932p-41f,
     0x1.60cf5cp-104f, 0x1.6c44f2p-42f, 0.0f, 0.0f, 0x1.1b67cap-118f, 0.0f, 0.0f,
     0.0f, 0x1.80193ep-73f, 0.0f, 0x1.3b9d98p-16f, 0.0f, 0x1.0ecd5ap-123f, 0.0f, 0.0f,
     0x1.23286p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368ebap-52f, 0x1.305956p-44f,
     0x1.a366c8p-52f, 0x1.83f582p-67f, 0x1.cf2b14p-92f, 0.0f, 0.0f, 0x1.94a97cp-57f,
     0.0f, 0x1.50f0fep-30f, 0.0f, 0x1.8a4252p-59f, 0.0f, 0.0f, 0x1.94add2p-34f,
     0x1.dd3412p-16f, 0.0f, 0.0f, 0x1.e1f18ap-103f, 0.0f, 0.0f, 0x1.911784p-44f,
     0x1.1bf972p-119f, 0x1.75df9ap-115f, 0x1.7d67p-102f, 0x1.e8f43cp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.411254p-60f, 0x1.342c2ap-8f, 0.0f, 0x1.07efc2p-49f, 0.0f,
     0x1.6e1d74p-38f, 0.0f
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
            tmp1 = Sleef_finz_fastsinf1_u3500purecfma(tmp0);
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
    printf("Sleef_finz_fastsinf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastsinf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
