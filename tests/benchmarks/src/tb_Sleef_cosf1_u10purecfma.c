/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf1_u10purecfma.c --function Sleef_cosf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.60db68p-37f, 0x1.2eed44p-6f, 0.0f, 0x1.0e31aep-29f,
     0x1.4856aap-103f, 0x1.0281b4p-110f, 0.0f, 0x1.8f7ce8p-96f, 0.0f, 0.0f, 0.0f,
     0x1.ef1d6ap-97f, 0x1.0410e6p-90f, 0.0f, 0x1.6c308p-86f, 0x1.34d87ep-6f,
     0x1.fb7f78p-36f, 0.0f, 0x1.f411c6p-69f, 0.0f, 0x1.d10236p-100f, 0.0f,
     0x1.f5b0ccp-71f, 0.0f, 0x1.97d8ccp-32f, 0.0f, 0.0f, 0.0f, 0x1.f78d6ep-8f, 0.0f,
     0x1.859ecap-104f, 0x1.1fcc44p-102f, 0.0f, 0.0f, 0x1.5f4814p-78f, 0x1.a188b6p-71f,
     0.0f, 0.0f, 0x1.6836e8p-65f, 0.0f, 0.0f, 0.0f, 0x1.9841f4p-42f, 0x1.001a4ap-114f,
     0x1.d133fp-86f, 0x1.15518ep-29f, 0x1.a695eep-85f, 0x1.5c3daap-15f, 0x1.9bd7p-5f,
     0.0f, 0x1.046f12p-65f, 0.0f, 0x1.7e5598p-74f, 0.0f, 0x1.38e314p-2f,
     0x1.52105p-31f, 0.0f, 0x1.15a0fep-19f, 0.0f, 0.0f, 0.0f, 0x1.bd8fe8p-74f, 0.0f,
     0x1.221734p-65f, 0.0f, 0x1.324da6p-94f, 0x1.7d94ap-87f, 0.0f, 0x1.85d07p-4f,
     0.0f, 0.0f, 0.0f, 0x1.51813ap-30f, 0x1.92db9ap-41f, 0x1.3dc992p-13f, 0.0f, 0.0f,
     0x1.90e906p-71f, 0.0f, 0.0f, 0.0f, 0x1.560912p-74f, 0x1.3b6398p-65f, 0.0f,
     0x1.004c28p-118f, 0x1.4acb26p-35f, 0.0f, 0x1.23c7e4p-122f, 0x1.f5933ep-120f,
     0x1.452fp-97f, 0x1.ec2c82p-40f, 0x1.ed26fep-126f, 0x1.bb2f94p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e69e12p-70f, 0x1.e26354p-95f, 0x1.61f27ep-114f, 0x1.f93f34p-6f,
     0x1.d40ceep-91f, 0x1.7877fap-114f, 0.0f, 0.0f, 0x1.c4ef2ap-25f, 0.0f,
     0x1.60b9cep-25f, 0x1.46abdap-27f, 0.0f, 0x1.644548p-14f, 0x1.a28facp-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79ba0ap-3f, 0.0f, 0x1.cd68a6p-93f, 0.0f, 0x1.959716p-84f,
     0.0f, 0.0f, 0x1.a0fccep-96f, 0x1.7d17f6p-1f, 0x1.57c656p-43f, 0x1.0e3f6cp-32f,
     0x1.156b5ep-5f, 0x1.0920eep-87f, 0x1.d231c6p-57f, 0x1.ffd15ep-80f, 0.0f, 0.0f,
     0x1.a43064p-71f, 0.0f, 0.0f, 0.0f, 0x1.537966p-68f, 0x1.ec8782p-54f,
     0x1.a4ba6ep-17f, 0.0f, 0x1.d8bb18p-116f, 0x1.75b258p-21f, 0x1.d94298p-65f, 0.0f,
     0x1.92cdc2p-101f, 0x1.72cb4p-64f, 0x1p0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.0912cep-18f, 0.0f, 0.0f, 0x1.af9f2cp-122f, 0.0f, 0.0f, 0.0f, 0x1.e1c95ep-90f,
     0x1.847e46p-14f, 0x1.047a5cp-8f, 0.0f, 0x1.e78e3ap-58f, 0x1.332582p-92f,
     0x1.1e5f8ap-13f, 0x1.cfb47ep-71f, 0x1.6295aap-40f, 0x1.f326d6p-71f, 0.0f, 0.0f,
     0x1.1d4a48p-45f, 0.0f, 0x1.8a9d78p-27f, 0x1.c6056ap-95f, 0x1.958332p-43f, 0.0f,
     0x1.bc08a4p-61f, 0.0f, 0x1.83f92p-90f, 0x1.fdda44p-66f, 0.0f, 0x1.c2b95cp-81f,
     0x1.0baa28p-13f, 0.0f, 0.0f, 0x1.bb8328p-58f, 0x1.eb605ep-4f, 0x1.9a215p-15f,
     0x1.67fc7ap-29f, 0x1.8988a4p-14f, 0x1.c5051cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f18df8p-115f, 0x1.bc52aep-108f, 0x1.28169ep-40f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.4e8168p-9f, 0x1.5c3054p-106f, 0x1.fb575ep-119f, 0.0f,
     0x1.ed8dc8p-106f, 0x1.599912p-116f, 0x1.15f8eep-23f, 0.0f, 0x1.e8580cp-1f,
     0x1.5ab2c4p-69f, 0.0f, 0.0f, 0x1.79c186p-24f, 0.0f, 0.0f, 0.0f, 0x1.944c98p-58f,
     0x1.f525fap-63f, 0x1.3006f8p-13f, 0.0f, 0.0f, 0.0f, 0x1.660beap-71f, 0.0f, 0.0f,
     0x1.1a3f46p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3650dp-20f, 0.0f, 0x1.07e5eap-64f,
     0x1.9d1022p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f859p-89f, 0x1.7f27c6p-102f,
     0x1.22d388p-101f, 0x1.4ade4p-91f, 0.0f, 0.0f, 0x1.8c85aap-33f, 0.0f,
     0x1.3159f6p-24f, 0.0f, 0x1.bbf192p-117f, 0x1.85ce48p-51f, 0.0f, 0x1.ea5386p-36f,
     0.0f, 0.0f, 0x1.afbc1ep-126f, 0x1.b97ab4p-54f, 0x1.49c24ap-124f, 0.0f,
     0x1.ab8fep-34f, 0x1.d96732p-53f, 0x1.039362p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91aec2p-73f, 0.0f, 0x1.357046p-43f, 0x1.0658d2p-11f, 0.0f, 0.0f,
     0x1.bde0cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.033342p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e56b62p-2f, 0x1.25d65cp-83f, 0x1.a5b6a4p-95f, 0x1.faea9p-68f,
     0x1.b210e8p-124f, 0.0f, 0.0f, 0x1.ff818cp-7f, 0x1.1f833ep-50f, 0.0f,
     0x1.7da3d2p-25f, 0.0f, 0.0f, 0.0f, 0x1.6c56dcp-16f, 0x1.b4a98p-57f,
     0x1.42b806p-5f, 0x1.29481ep-114f, 0x1.b5b3cap-89f, 0x1.908016p-4f,
     0x1.ed3cfep-50f, 0.0f, 0x1.b8cc84p-6f, 0.0f, 0x1.228ec8p-87f, 0.0f,
     0x1.e0af62p-59f, 0x1.a6b3e8p-110f, 0.0f, 0x1.565088p-80f, 0.0f, 0x1.9adde2p-68f,
     0x1.575416p-101f, 0x1.2afd3ap-11f, 0.0f, 0x1.d2d4eap-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.257594p-123f, 0x1.e92e6cp-102f, 0x1.852492p-118f, 0.0f,
     0x1.78bafap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc775p-58f, 0.0f, 0.0f, 0.0f,
     0x1.a28e08p-24f, 0x1.6d453ap-47f, 0.0f, 0x1.a33732p-77f, 0.0f, 0x1.d2c5f8p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f055bcp-28f, 0.0f, 0x1.f432fep-72f, 0.0f,
     0x1.a89348p-71f, 0x1.801ba2p-112f, 0.0f, 0x1.8ada26p-87f, 0.0f, 0x1.91a6dap-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30ed5ap-19f, 0x1.295e16p-72f, 0.0f, 0.0f,
     0x1.6fc38cp-101f, 0.0f, 0x1.30db38p-55f, 0.0f, 0.0f, 0x1.455578p-119f,
     0x1.e9feb4p-72f, 0x1.9279c4p-81f, 0.0f, 0x1.87c9b4p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5881f2p-33f, 0.0f, 0.0f, 0x1.1e9c9ep-96f, 0x1.3ff156p-3f, 0.0f,
     0x1.dc3d6cp-17f, 0x1.d8f6b2p-40f, 0x1.56403cp-72f, 0.0f, 0x1.96a552p-121f,
     0x1.21b97ep-90f, 0x1.35b7fp-40f, 0.0f, 0.0f, 0x1.1382fcp-37f, 0x1.47221p-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bbac6p-64f, 0x1.bf07a6p-105f, 0x1.53ec08p-50f,
     0x1.ecef6cp-4f, 0x1.a87428p-17f, 0.0f, 0x1.01133p-26f, 0x1.7671f4p-26f,
     0x1.ad753p-87f, 0x1.347918p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d00e0ep-99f,
     0x1.1b15bap-103f, 0.0f, 0.0f, 0.0f, 0x1.4e0894p-12f, 0.0f, 0x1.afb39ep-48f,
     0x1.8cde72p-61f, 0x1.23b62cp-1f, 0.0f, 0x1.6e9242p-27f, 0x1.d4e8a8p-42f,
     0x1.37cf94p-14f, 0x1.589118p-29f, 0.0f, 0.0f, 0x1.cf436ep-22f, 0x1.1bd5d2p-80f,
     0.0f, 0x1.a7eb9cp-106f, 0.0f, 0.0f, 0x1.2dcddp-64f, 0x1.120438p-105f, 0.0f, 0.0f,
     0x1.e7b3f4p-70f, 0.0f, 0x1.52f03p-56f, 0x1.12d0bap-14f, 0x1.93004p-40f, 0.0f,
     0.0f, 0.0f, 0x1.a6793ap-96f, 0x1.287066p-104f, 0x1.8c296ap-75f, 0x1.122494p-123f,
     0x1.16829cp-13f, 0x1.e569f2p-72f, 0.0f, 0x1.c90e06p-84f, 0x1.d2c286p-63f,
     0x1.d314dap-59f, 0x1.5e954ep-8f, 0.0f, 0.0f, 0.0f, 0x1.448cdep-10f, 0.0f,
     0x1.5ee216p-3f, 0.0f, 0.0f, 0x1.37ae8cp-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d49b4p-34f, 0x1.7d7242p-99f, 0.0f, 0.0f, 0.0f, 0x1.4ac8b4p-45f,
     0x1.ae356p-42f, 0.0f, 0.0f, 0x1.a3b0c6p-116f, 0.0f, 0.0f, 0x1.5df59p-17f,
     0x1.e3ac56p-55f, 0.0f, 0x1.c827a2p-18f, 0.0f, 0.0f, 0.0f, 0x1.2b4ca2p-76f, 0.0f,
     0.0f, 0x1.5a33b2p-73f, 0x1.e2d66ap-82f, 0x1.1ca692p-120f, 0.0f, 0.0f,
     0x1.9040a6p-63f, 0.0f, 0.0f, 0x1.c3e1fcp-105f, 0x1.bb7704p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.28ad44p-9f, 0.0f, 0.0f, 0.0f, 0x1.36ce8ep-91f, 0x1.531edp-25f,
     0x1.80fc94p-5f, 0.0f, 0x1.3a514p-74f, 0.0f, 0x1.90d142p-122f, 0.0f, 0.0f,
     0x1.dc341ep-73f, 0.0f, 0x1.590b9cp-81f, 0.0f, 0x1.0180bap-23f, 0.0f, 0.0f, 0.0f,
     0x1.b72a58p-112f, 0x1.7e80dcp-9f, 0x1.91540ep-116f, 0x1.7dea5ap-38f,
     0x1.5040bp-6f, 0x1.3971e4p-14f, 0.0f, 0x1.d709a2p-120f, 0.0f, 0x1.1db932p-102f,
     0x1.4be1c4p-57f, 0.0f, 0.0f, 0x1.a7162ap-40f, 0x1.174a94p-26f, 0.0f,
     0x1.132cd6p-78f, 0.0f, 0x1.e14402p-46f, 0.0f, 0x1.ed9952p-30f, 0.0f,
     0x1.b4708p-11f, 0x1.b43954p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f4838p-124f,
     0.0f, 0x1.a2d00cp-85f, 0x1.aa175ap-21f, 0.0f, 0x1.d6aff2p-104f, 0x1.4b269cp-117f,
     0.0f, 0.0f, 0x1.903a1ap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.091baep-87f,
     0x1.debadap-40f, 0.0f, 0x1.0af6acp-67f, 0x1.6467f8p-89f, 0.0f, 0x1.00511cp-17f,
     0x1.c19146p-42f, 0.0f, 0.0f, 0x1.282ed2p-32f, 0.0f, 0x1.891feap-118f, 0.0f, 0.0f,
     0x1.26a4b4p-118f, 0x1.305404p-114f, 0x1.5ce666p-68f, 0x1.bbfca8p-109f, 0.0f,
     0x1.136e8ap-76f, 0x1.a1518p-5f, 0x1.ade71ep-102f, 0.0f, 0.0f, 0x1.2d82e2p-21f,
     0x1.2c5b1p-20f, 0x1.ba626ap-87f, 0x1.00ba06p-85f, 0.0f, 0.0f, 0.0f,
     0x1.fce7b2p-57f, 0x1.de5dfcp-34f, 0.0f, 0x1.7e67ccp-108f, 0x1.44ae36p-33f,
     0x1.4920eap-89f, 0x1.f43e24p-81f, 0.0f, 0.0f, 0x1.0a815cp-96f, 0.0f,
     0x1.55a856p-108f, 0.0f, 0x1.cf8dc8p-86f, 0.0f, 0.0f, 0x1.21ae58p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a181cp-18f, 0.0f, 0.0f, 0x1.be5b2ep-86f, 0x1.5c0c56p-22f, 0.0f,
     0.0f, 0.0f, 0x1.61a9aep-27f, 0x1.848e9ep-60f, 0x1.469acap-104f, 0.0f, 0.0f, 0.0f,
     0x1.fe0218p-23f, 0x1.08bfb4p-47f, 0x1.5ffbp-124f, 0.0f, 0x1.ea4a18p-40f, 0.0f,
     0.0f, 0x1.f1294ep-56f, 0x1.06f18ep-12f, 0.0f, 0x1.47b90ep-36f, 0.0f, 0.0f,
     0x1.0d3c5ep-91f, 0x1.893aeep-46f, 0.0f, 0.0f, 0x1.5034fcp-73f, 0x1.0159f2p-64f,
     0x1.f6dd08p-16f, 0x1.098a86p-91f, 0.0f, 0.0f, 0x1.f932bep-115f, 0.0f,
     0x1.5430eap-93f, 0x1.0ee01p-89f, 0x1.f90632p-94f, 0.0f, 0x1.61a70cp-86f, 0.0f,
     0x1.c0e45ap-69f, 0x1p0f, 0.0f, 0x1.e1c55p-95f, 0x1.1ae62cp-13f, 0.0f,
     0x1.190578p-87f, 0.0f, 0x1.9f44acp-102f, 0.0f, 0.0f, 0x1.194a82p-40f,
     0x1.9bb33cp-112f, 0x1.134a96p-28f, 0x1.558ca4p-33f, 0x1.c4664ep-71f, 0.0f,
     0x1.7276ecp-92f, 0.0f, 0x1.10acb8p-32f, 0x1.0dad46p-26f, 0x1.14d95ap-48f, 0.0f,
     0.0f, 0x1.35f572p-37f, 0.0f, 0x1.60b29ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c93604p-85f, 0x1.11b8bcp-70f, 0.0f, 0.0f, 0.0f, 0x1.c703cp-84f,
     0x1.f2c38p-55f, 0x1.6bf586p-32f, 0.0f, 0x1.083ca6p-27f, 0x1.40b53cp-60f, 0.0f,
     0.0f, 0x1.5085cap-43f, 0x1.e83782p-122f, 0.0f, 0x1.e2d3f8p-68f, 0x1.5975fap-80f,
     0x1.29973cp-59f, 0.0f, 0.0f, 0x1.5ab2ep-58f, 0.0f, 0.0f, 0x1.9c338ap-2f, 0.0f,
     0.0f, 0.0f, 0x1.6dc0f2p-18f, 0x1.1b347p-102f, 0.0f, 0x1.b290ecp-91f,
     0x1.48261cp-48f, 0x1.4a8bb8p-47f, 0.0f, 0.0f, 0x1.12ef2p-124f, 0x1.426cd4p-21f,
     0.0f, 0x1.8a8904p-99f, 0.0f, 0x1.1ca03ap-110f, 0x1.1d21c8p-112f, 0.0f,
     0x1.6c2aaep-55f, 0.0f, 0x1.67154ap-82f, 0.0f, 0x1.1fa85cp-53f, 0.0f,
     0x1.30e02p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe8bfap-88f, 0x1.a8edd6p-90f, 0.0f,
     0.0f, 0x1.7b745cp-101f, 0.0f, 0.0f, 0x1.2a1b9cp-41f, 0x1.8c86b6p-93f, 0.0f,
     0x1.e12e6p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00372p-8f, 0x1.a75404p-61f,
     0.0f, 0x1.9d069ap-89f, 0x1.b29ddap-56f, 0.0f, 0.0f, 0.0f, 0x1.e2da8p-12f,
     0x1.c7a00ep-61f, 0x1.03c112p-102f, 0x1.60def4p-97f, 0x1.464f7p-15f, 0.0f, 0.0f,
     0x1.856248p-27f, 0.0f, 0x1.74e46p-19f, 0.0f, 0.0f, 0x1.a8bab6p-13f, 0.0f,
     0x1.d6d36p-93f, 0.0f, 0x1.6e41bp-66f, 0x1.ac1f9cp-27f, 0x1.24033p-123f,
     0x1.38cd16p-114f, 0x1.274784p-94f, 0x1.080e4ap-62f, 0x1.e939ccp-69f, 0.0f, 0.0f,
     0x1.58382cp-11f, 0.0f, 0x1.48231p-113f, 0x1.08ef06p-108f, 0x1.1f2ec6p-8f,
     0x1.8d1288p-67f, 0x1.771a2p-88f, 0x1.228fd8p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b607bep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33e10ap-94f, 0.0f, 0.0f, 0.0f,
     0x1.7d3bccp-40f, 0.0f, 0x1.bcf436p-96f, 0x1.46630ep-20f, 0.0f, 0x1.cbf146p-73f,
     0.0f, 0x1.da2e08p-84f, 0.0f, 0x1.252fcap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26780ap-33f, 0x1.1fb508p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e68e48p-39f, 0x1.a2e3b2p-82f, 0.0f, 0x1.03a408p-96f, 0x1.783c16p-124f, 0.0f,
     0.0f, 0x1.5507d2p-37f, 0x1.f3781ep-93f, 0.0f, 0x1.a4704ap-49f, 0x1.fa22fap-11f,
     0x1.7128e8p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2526fap-3f, 0.0f, 0x1.d808e6p-11f,
     0x1.77ad1p-83f, 0x1.77b074p-119f, 0.0f, 0.0f, 0.0f, 0x1.ab133ep-73f,
     0x1.42f7ap-70f, 0.0f, 0x1.9daeaep-77f, 0.0f, 0x1.886c5ep-18f, 0.0f,
     0x1.3822fcp-68f, 0.0f, 0.0f, 0x1.48356cp-83f, 0.0f, 0.0f, 0x1.cfc3eep-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c3465ep-50f, 0x1.a2c3ecp-60f, 0.0f, 0.0f, 0x1.7822cp-126f,
     0.0f, 0.0f, 0x1.017904p-35f, 0.0f, 0.0f, 0.0f, 0x1.cb509cp-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cad184p-13f, 0x1.cf384cp-33f, 0.0f, 0.0f, 0x1.b2e7c8p-6f, 0.0f,
     0.0f, 0.0f, 0x1.685356p-126f, 0.0f, 0.0f, 0.0f, 0x1.701272p-31f, 0.0f, 0.0f,
     0x1p0f, 0x1.ea8194p-44f, 0x1.500a7ep-8f, 0x1.38b872p-74f, 0x1.ce4332p-15f, 0.0f,
     0x1.b34624p-23f, 0.0f, 0x1.fc4414p-111f, 0.0f, 0.0f, 0x1.a1733cp-72f,
     0x1.375edap-110f, 0.0f, 0.0f, 0x1.7fd1f8p-42f, 0.0f, 0x1.769acap-82f, 0.0f,
     0x1.d994ap-34f, 0x1.d0c15cp-7f, 0x1.e86204p-78f, 0.0f, 0x1.35704p-17f,
     0x1.d1f672p-4f, 0.0f, 0x1.3b0816p-97f, 0.0f, 0x1.025ca4p-67f, 0.0f,
     0x1.14e79ap-71f, 0.0f, 0.0f, 0x1.23c0b6p-111f, 0.0f, 0x1.8f3ed4p-28f, 0.0f, 0.0f,
     0x1.7e14dap-118f, 0.0f, 0x1.96f28ep-8f, 0.0f, 0x1.860a2p-79f, 0x1.c579p-26f,
     0.0f, 0.0f, 0.0f, 0x1.f1916cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.50214ep-111f, 0x1.708c8p-34f, 0x1.c2067ap-106f, 0x1.bc69dp-14f, 0.0f,
     0x1.5c20ccp-62f, 0x1.8366cp-79f
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
            tmp1 = Sleef_cosf1_u10purecfma(tmp0);
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
    printf("Sleef_cosf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
