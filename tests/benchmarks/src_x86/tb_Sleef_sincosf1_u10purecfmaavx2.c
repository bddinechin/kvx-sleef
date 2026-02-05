/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf1_u10purecfma.c --function \
 *     Sleef_sincosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.abec18p-18f, 0.0f, 0x1.8491eap-93f, 0x1.3cb75cp-121f, 0.0f, 0x1.167556p-83f,
     0.0f, 0x1.825f24p-11f, 0.0f, 0.0f, 0x1.291774p-44f, 0.0f, 0x1.1f2608p-25f,
     0x1.b19d8ep-8f, 0.0f, 0x1.0dcae6p-68f, 0.0f, 0.0f, 0x1.067fcep-68f, 0.0f, 0.0f,
     0.0f, 0x1.01ad3p-74f, 0.0f, 0x1.8f30c6p-1f, 0.0f, 0x1.497434p-91f,
     0x1.50b718p-51f, 0x1.6930ap-62f, 0x1.11e35cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.7a7ccep-7f, 0x1.415482p-19f, 0.0f, 0x1.1c4ae4p-105f, 0x1.e02bbp-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.45fcd4p-81f, 0x1.eab898p-45f,
     0x1.ff339cp-83f, 0x1.18ebfp-73f, 0.0f, 0.0f, 0.0f, 0x1.3cda1ap-89f,
     0x1.5a6386p-24f, 0x1.a9e97p-7f, 0x1.df9da8p-24f, 0.0f, 0x1.185d8p-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8cdc92p-118f, 0x1.c7490ep-126f, 0x1.630418p-121f, 0.0f,
     0x1.848bf4p-36f, 0x1.6b0d44p-74f, 0x1.99d3cap-76f, 0.0f, 0x1.27b348p-4f,
     0x1.79384p-39f, 0x1.cfe244p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3db0ep-26f,
     0x1.49309ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cd384p-75f,
     0x1.fbca76p-103f, 0x1.e5b10ap-85f, 0.0f, 0.0f, 0.0f, 0x1.03b698p-13f, 0.0f,
     0x1.f66a46p-51f, 0x1.bd05b8p-120f, 0.0f, 0x1.df4fecp-26f, 0.0f, 0x1.99731cp-39f,
     0.0f, 0x1.09543ap-70f, 0.0f, 0x1.b016f2p-85f, 0x1.d22642p-122f, 0.0f,
     0x1.6baa66p-53f, 0.0f, 0.0f, 0.0f, 0x1.fe6ab8p-33f, 0x1.dbea5cp-99f,
     0x1.8912fap-56f, 0.0f, 0x1.266caep-13f, 0.0f, 0.0f, 0.0f, 0x1.eb672p-16f, 0.0f,
     0.0f, 0.0f, 0x1.8f0feep-16f, 0.0f, 0x1.ae3a3cp-63f, 0.0f, 0.0f, 0x1.1372dep-25f,
     0.0f, 0x1.77c26ep-83f, 0x1.4ee50ep-55f, 0.0f, 0x1.076d6ep-9f, 0.0f, 0.0f,
     0x1.2cd63p-86f, 0x1.e0991cp-27f, 0x1.01bf86p-53f, 0.0f, 0.0f, 0x1.9f7dd6p-46f,
     0.0f, 0.0f, 0x1.bb0aaap-47f, 0.0f, 0.0f, 0x1.394c08p-64f, 0x1.88c7b8p-123f,
     0x1.4cf73ap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.edb62p-111f, 0.0f,
     0x1.96a43ep-43f, 0.0f, 0.0f, 0x1.746d6ep-94f, 0.0f, 0x1.533048p-54f, 0.0f, 0.0f,
     0x1.c3af8p-68f, 0.0f, 0x1.634cbp-29f, 0x1.a4fb5p-114f, 0x1.3516a4p-77f, 0.0f,
     0x1.11f6d4p-65f, 0x1.2aaa18p-3f, 0x1.03e072p-21f, 0.0f, 0x1.7587d4p-42f,
     0x1.3f3fc8p-2f, 0.0f, 0.0f, 0x1.0c737cp-6f, 0.0f, 0x1.87563ep-23f, 0.0f,
     0x1.69eec4p-57f, 0.0f, 0x1.560844p-102f, 0x1.cdbedp-30f, 0x1.5a118ap-78f, 0.0f,
     0x1.0cc484p-45f, 0.0f, 0.0f, 0x1.3dcd04p-72f, 0.0f, 0x1.d1ea8p-30f, 0.0f,
     0x1.76932cp-123f, 0.0f, 0.0f, 0.0f, 0x1.f072dep-92f, 0.0f, 0.0f, 0.0f,
     0x1.627162p-79f, 0x1.8ab0cep-51f, 0.0f, 0x1.a1ad74p-126f, 0x1.7ee3c8p-94f,
     0x1.bb9dbp-60f, 0x1.e6659cp-23f, 0.0f, 0.0f, 0.0f, 0x1.e73a1cp-90f,
     0x1.db393cp-19f, 0.0f, 0x1.179452p-37f, 0.0f, 0.0f, 0x1.6d4512p-63f,
     0x1.05b03ep-90f, 0x1.ea72e6p-21f, 0.0f, 0x1.85fbc6p-98f, 0x1.ba3062p-123f,
     0x1.4a986p-32f, 0x1.b1643cp-124f, 0x1.4fc3a4p-82f, 0.0f, 0x1.b42aa2p-87f, 0.0f,
     0x1.2123dcp-94f, 0.0f, 0x1.063bdap-32f, 0x1.3873f8p-49f, 0.0f, 0x1.07091p-5f,
     0.0f, 0.0f, 0x1.73eadcp-6f, 0.0f, 0x1.20c99cp-7f, 0x1.770d08p-29f,
     0x1.ad5554p-23f, 0x1.91b3ep-39f, 0.0f, 0x1.d7ba84p-7f, 0.0f, 0x1.0ddb3ap-23f,
     0x1.dd36d4p-35f, 0x1.39bc1ap-94f, 0x1.db4aa8p-67f, 0x1.03909p-86f, 0.0f, 0.0f,
     0x1.0085dcp-60f, 0x1.d82accp-43f, 0x1.ce0f18p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ce6p-81f, 0x1.db640cp-73f, 0.0f, 0.0f, 0.0f, 0x1.2fe4bcp-82f, 0.0f, 0.0f,
     0x1.36663cp-78f, 0.0f, 0x1.1e68bp-67f, 0x1.a84b0cp-10f, 0.0f, 0x1.ff1326p-40f,
     0.0f, 0x1.571c46p-94f, 0.0f, 0x1.06dfd2p-100f, 0.0f, 0x1.57528ap-90f, 0.0f, 0.0f,
     0x1.76fc4p-113f, 0.0f, 0x1.e0c544p-22f, 0x1.25a316p-103f, 0.0f, 0x1.1e15e8p-84f,
     0.0f, 0x1.8326bap-73f, 0x1.ddcbc2p-105f, 0.0f, 0x1.e65584p-126f, 0x1.43fp-68f,
     0.0f, 0.0f, 0x1.1b4f56p-90f, 0x1.155b3p-106f, 0.0f, 0.0f, 0x1.321bcp-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6e935cp-16f, 0x1.0622bep-47f, 0.0f, 0x1.788fe6p-19f,
     0x1.b74daep-89f, 0.0f, 0.0f, 0x1.eda648p-6f, 0x1.699878p-1f, 0.0f,
     0x1.f78d76p-92f, 0.0f, 0x1.5a5d5ap-21f, 0.0f, 0x1.272204p-125f, 0x1.67dc9cp-61f,
     0x1.ca56aap-3f, 0x1.53b4f2p-64f, 0x1.52beap-106f, 0x1.df5efep-73f, 0.0f,
     0x1.e0c158p-37f, 0.0f, 0x1.a90428p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e53ccp-98f,
     0.0f, 0x1.581174p-28f, 0.0f, 0.0f, 0x1.5fa8fap-7f, 0x1.1fe2c4p-57f, 0.0f,
     0x1.c6e05ep-68f, 0x1.7a6bc6p-6f, 0.0f, 0x1.a27f04p-14f, 0.0f, 0.0f,
     0x1.ef3718p-91f, 0.0f, 0x1.75629p-70f, 0x1.e4b4b6p-108f, 0.0f, 0.0f,
     0x1.d7c224p-74f, 0x1.6727c6p-20f, 0x1.be932p-126f, 0.0f, 0.0f, 0.0f,
     0x1.7deccp-122f, 0.0f, 0.0f, 0x1.008a3cp-122f, 0.0f, 0x1.b8140ep-90f,
     0x1.4906bep-63f, 0.0f, 0x1.b6bfacp-102f, 0.0f, 0x1.a0fe2p-122f, 0.0f,
     0x1.7c6696p-99f, 0.0f, 0.0f, 0x1.252e9cp-104f, 0.0f, 0x1.356074p-23f,
     0x1.c1cfc4p-11f, 0.0f, 0.0f, 0x1.b00abep-86f, 0x1.4cbf9cp-107f, 0x1.b7b688p-29f,
     0.0f, 0x1.fcb808p-87f, 0.0f, 0x1.f101fep-5f, 0x1.99db9cp-34f, 0x1.efde86p-58f,
     0.0f, 0x1.bbff24p-57f, 0x1.45df12p-65f, 0.0f, 0.0f, 0.0f, 0x1.fc559p-14f,
     0x1.a0d534p-79f, 0.0f, 0.0f, 0x1.13dbecp-24f, 0x1.3fd87p-78f, 0x1.f2a98p-117f,
     0x1.e1d69p-96f, 0x1.4da73p-91f, 0x1.0c2a08p-90f, 0x1.fb24fcp-73f,
     0x1.4412f6p-73f, 0.0f, 0.0f, 0x1.c62288p-27f, 0x1.ae022p-7f, 0x1.cf1518p-67f,
     0x1.e28ab8p-50f, 0x1.3f79f6p-50f, 0.0f, 0x1.a1abd4p-45f, 0.0f, 0x1.fec05ep-42f,
     0.0f, 0x1.366f54p-87f, 0.0f, 0.0f, 0x1.0e0e28p-35f, 0.0f, 0x1.1a6a6ep-87f,
     0x1.d561dcp-14f, 0.0f, 0.0f, 0.0f, 0x1.cadf4cp-7f, 0x1.c4c2e4p-7f,
     0x1.a2697ep-96f, 0x1.7e0a54p-98f, 0x1.b219bap-122f, 0x1.698a98p-36f, 0.0f, 0.0f,
     0.0f, 0x1.40fb2ep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53a80cp-19f,
     0x1.4896fap-88f, 0.0f, 0x1.64e166p-122f, 0.0f, 0.0f, 0x1.fc92f8p-75f,
     0x1.fbf87ap-10f, 0.0f, 0.0f, 0x1.e4fb4ap-10f, 0.0f, 0.0f, 0x1.e83548p-30f, 0.0f,
     0x1.62d61cp-87f, 0x1.be428ap-86f, 0.0f, 0x1.509252p-124f, 0.0f, 0x1.7c4b16p-84f,
     0x1.7965aep-109f, 0.0f, 0x1.fd2102p-98f, 0x1.3a31d6p-72f, 0.0f, 0x1.70e716p-79f,
     0.0f, 0x1.80d106p-99f, 0.0f, 0.0f, 0x1.d57994p-124f, 0.0f, 0.0f, 0x1.7272fp-19f,
     0.0f, 0x1.fff156p-17f, 0x1.3d3728p-124f, 0x1.52bb72p-52f, 0x1.8e73f6p-3f,
     0x1.4fe7dp-49f, 0x1.60688p-120f, 0x1.c34f5cp-41f, 0x1.5e9ce4p-58f,
     0x1.7a3e08p-68f, 0.0f, 0.0f, 0.0f, 0x1.1da51ep-35f, 0x1.4b049ap-4f, 0.0f,
     0x1.3bff6ep-73f, 0x1.663b0cp-39f, 0.0f, 0x1.bd22c2p-95f, 0.0f, 0x1.fe51ecp-13f,
     0.0f, 0.0f, 0x1.97803ep-126f, 0.0f, 0.0f, 0x1.013278p-50f, 0x1.062d9cp-62f,
     0x1.bfa776p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32d972p-116f, 0.0f,
     0.0f, 0x1.50c0c6p-110f, 0x1.37337p-55f, 0.0f, 0x1.bd89bcp-109f, 0x1.9d1be2p-9f,
     0x1.c721acp-126f, 0.0f, 0x1.4105eap-18f, 0.0f, 0x1.73050ep-73f, 0x1.54788ap-48f,
     0x1.f9783ap-37f, 0x1.c87394p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95d2dp-28f,
     0x1.1fca04p-43f, 0.0f, 0.0f, 0x1.70601cp-117f, 0.0f, 0x1.524332p-45f,
     0x1.cea0bep-42f, 0.0f, 0.0f, 0x1.63fcc2p-73f, 0x1.28222ep-11f, 0x1.ee313ep-30f,
     0x1.e1fb4cp-74f, 0x1.1d0106p-27f, 0.0f, 0.0f, 0x1.ffd0bcp-87f, 0.0f,
     0x1.873df2p-52f, 0.0f, 0x1.b5e5dep-17f, 0x1.50c0b8p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84f5c8p-18f, 0x1.a8d45ep-117f, 0x1.0ffa46p-48f, 0.0f, 0x1.4f5c0ap-42f,
     0.0f, 0x1.1f6ca4p-114f, 0.0f, 0.0f, 0.0f, 0x1.0a78fcp-93f, 0.0f,
     0x1.fc5bd2p-112f, 0x1.98d154p-31f, 0x1.2c0e76p-108f, 0x1.672c22p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49549ap-19f, 0.0f, 0.0f, 0.0f, 0x1.6d87fcp-61f,
     0.0f, 0x1.85f196p-26f, 0.0f, 0x1.8accf8p-69f, 0x1.7cc09ap-27f, 0.0f, 0.0f,
     0x1.6b054ep-75f, 0x1.9ecb8ap-112f, 0.0f, 0x1.bcc348p-100f, 0x1.1aaae2p-17f, 0.0f,
     0.0f, 0.0f, 0x1.b8902p-26f, 0x1.942fdp-91f, 0x1.c66cc8p-5f, 0x1.679a8p-53f,
     0x1.1bc2acp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3929p-63f, 0.0f, 0x1.9848fcp-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd36c2p-48f, 0x1.d447bcp-27f, 0x1.28354p-109f,
     0.0f, 0x1.ce035ep-114f, 0.0f, 0.0f, 0x1.662c58p-71f, 0x1.eeb1acp-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a87b4p-73f, 0.0f, 0.0f, 0x1.fb4446p-103f, 0x1.d6b8fp-96f, 0.0f,
     0.0f, 0x1.cd4c6ep-65f, 0.0f, 0x1.1f8b04p-50f, 0x1.3a5a48p-10f, 0.0f, 0.0f, 0.0f,
     0x1.a85898p-90f, 0x1.9599b8p-33f, 0x1.709f26p-56f, 0x1.356298p-84f,
     0x1.d14baep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.becc32p-6f, 0x1.028d2ap-39f,
     0.0f, 0.0f, 0.0f, 0x1.a6f4b4p-51f, 0.0f, 0x1.3b3d74p-55f, 0x1.4c1208p-75f, 0.0f,
     0.0f, 0.0f, 0x1.0c457ep-100f, 0x1.c68eb8p-83f, 0x1.62bde8p-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6a1afep-105f, 0x1.8002e8p-54f, 0.0f, 0.0f, 0x1.320126p-16f, 0.0f,
     0x1.f8318ap-20f, 0x1.35ceb8p-20f, 0x1.03c6dap-32f, 0.0f, 0x1.c46088p-104f, 0.0f,
     0.0f, 0x1.78ef68p-87f, 0.0f, 0x1.f67b02p-102f, 0x1.0f40dp-114f, 0x1.bdfe94p-112f,
     0.0f, 0.0f, 0x1.80d4e8p-41f, 0x1.4fa8fap-67f, 0.0f, 0.0f, 0.0f, 0x1.7408b6p-58f,
     0.0f, 0x1.4597fap-72f, 0x1.ea513p-110f, 0x1.e0bd3cp-4f, 0.0f, 0x1.0f72bcp-51f,
     0x1.906d8ep-1f, 0.0f, 0x1.6edfep-98f, 0.0f, 0x1.7b535p-99f, 0x1.3cb6b6p-97f,
     0x1.d37baep-123f, 0x1.1e9688p-6f, 0.0f, 0x1.62068cp-31f, 0x1.7f48a8p-50f, 0.0f,
     0x1.b44b52p-114f, 0x1.2dd304p-83f, 0x1.ff8092p-11f, 0x1.e46ceep-11f, 0.0f,
     0x1.8df684p-70f, 0x1.abaa9p-36f, 0.0f, 0x1.e2224ep-18f, 0.0f, 0x1.ab0e5ap-59f,
     0x1.d46312p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd6474p-37f, 0x1.aca858p-36f, 0.0f,
     0x1.d7d5b2p-101f, 0x1.bc994cp-8f, 0x1.8af1d8p-32f, 0x1.e64878p-71f,
     0x1.405fb2p-33f, 0.0f, 0x1.f2a0f2p-126f, 0.0f, 0.0f, 0.0f, 0x1.767a5ap-66f, 0.0f,
     0.0f, 0x1.729bbep-126f, 0x1.7b68ecp-43f, 0.0f, 0.0f, 0x1.b67226p-44f, 0.0f, 0.0f,
     0x1.38f59p-4f, 0.0f, 0x1.36b73p-22f, 0x1.c9ad8cp-108f, 0x1.aad5dp-89f, 0x1p0f,
     0.0f, 0x1.25475cp-79f, 0x1.9a1978p-49f, 0.0f, 0.0f, 0x1.8425fp-48f, 0.0f,
     0x1.81872ap-47f, 0x1.e55784p-72f, 0x1.c9b60ep-70f, 0x1.2a23dp-87f,
     0x1.cd985p-12f, 0x1.130ce4p-4f, 0x1.0023a6p-87f, 0.0f, 0x1.a430f6p-42f,
     0x1.e95206p-117f, 0.0f, 0x1.6a5f1cp-37f, 0x1.80dffep-106f, 0x1.ca7b86p-79f,
     0x1.65e34p-39f, 0.0f, 0.0f, 0x1.eaefaap-92f, 0x1.762e82p-91f, 0x1.3c8f3p-26f,
     0x1.4635eep-27f, 0x1.891fbcp-41f, 0x1.c6da78p-120f, 0.0f, 0x1.346ae2p-64f, 0.0f,
     0.0f, 0x1.192e7ap-23f, 0.0f, 0x1.87299ap-66f, 0.0f, 0x1.f94fdep-1f, 0.0f, 0.0f,
     0.0f, 0x1.f77474p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fd516p-17f,
     0x1.f11db8p-92f, 0x1.d8f718p-109f, 0.0f, 0.0f, 0.0f, 0x1.5b9834p-122f, 0.0f,
     0.0f, 0.0f, 0x1.1e33eap-105f, 0.0f, 0.0f, 0.0f, 0x1.ec5b7p-88f, 0x1.5a01c8p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a5edep-83f, 0.0f, 0x1.77e084p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d98fap-1f, 0x1.31f4c6p-19f, 0x1.872954p-104f,
     0x1.dfe2c4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a4d4p-44f,
     0x1.31492ap-1f, 0.0f, 0x1.0ac35p-116f, 0x1.27c196p-84f, 0x1.1c6f84p-55f, 0.0f,
     0.0f, 0x1.d0b7d4p-111f, 0.0f, 0.0f, 0x1.580052p-120f, 0.0f, 0x1.ad73b8p-72f,
     0.0f, 0x1.74dd72p-84f, 0.0f, 0.0f, 0.0f, 0x1.6735c2p-124f, 0x1.defe56p-93f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6409ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.585b5cp-75f, 0x1.91232ep-64f, 0x1.4a3e9ep-2f, 0.0f, 0.0f, 0x1.6952d2p-95f,
     0.0f, 0x1p0f, 0x1.9f462ap-98f, 0.0f, 0.0f, 0x1.f6e6a2p-85f, 0x1.7bca58p-91f,
     0x1.b89688p-18f, 0.0f, 0x1.858c3ap-73f, 0.0f, 0.0f, 0.0f, 0x1.1d2212p-62f, 0.0f,
     0x1.4a07b2p-87f, 0.0f, 0x1.1cbc46p-17f, 0.0f, 0x1.675fc8p-54f, 0x1.c42ba2p-13f,
     0.0f, 0x1.5aa218p-42f, 0x1.ebe836p-101f, 0x1.9d84c2p-55f, 0.0f, 0.0f, 0.0f,
     0x1.d199d4p-86f, 0.0f, 0.0f, 0.0f, 0x1.eadc5ep-68f, 0x1.4f067ep-18f,
     0x1.dfadb2p-126f, 0x1.b6992ap-1f, 0x1.e2d1e4p-120f, 0.0f, 0.0f, 0.0f,
     0x1.65a3c8p-31f, 0.0f, 0x1.732f46p-105f, 0.0f, 0x1.5e0a94p-98f, 0.0f,
     0x1.abd644p-113f, 0.0f, 0.0f, 0.0f, 0x1.6c56fcp-86f, 0x1.7d3ee4p-119f,
     0x1.2c2c7ap-61f, 0x1.260218p-65f, 0x1.a8e724p-55f, 0x1.a5b51cp-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfb898p-40f, 0x1.11ec2ap-26f, 0x1.cf5fe8p-13f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d835cp-74f, 0x1.5ee0a6p-37f, 0.0f, 0.0f,
     0x1.fcd98p-57f, 0x1.f2e2bap-10f, 0.0f, 0x1.a02d1p-33f, 0x1.b265eep-99f, 0.0f,
     0x1.804962p-54f, 0x1.929a7cp-109f, 0x1.6f9778p-80f, 0.0f, 0.0f, 0x1.2f65f2p-88f,
     0x1.9531eap-21f, 0x1.c3755ap-87f, 0.0f, 0x1.5c1504p-105f, 0.0f, 0x1.a926c2p-77f,
     0x1.c11ca8p-63f, 0.0f, 0.0f, 0x1.75ff5p-17f, 0.0f, 0x1.224f6p-114f,
     0x1.473312p-118f, 0x1.ecc92p-74f, 0x1.ed621p-17f, 0x1.e5ca18p-33f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp2;
        float tmp3;
        float tmp4;
        __m128 carg3;
        __m128 carg4;
        __m128 carg5;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp4;
            float tmp5;
            float tmp6;
            __m128 carg3;
            __m128 carg4;
            __m128 carg5;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            carg = _mm_set_ss(tmp2);
            carg1 = _mm_set_ss(tmp3);
            carg2 = _mm_add_ss(carg, carg1);
            tmp4 = _mm_cvtss_f32(carg2);
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            carg3 = _mm_set_ss(tmp5);
            carg4 = _mm_set_ss(tmp6);
            carg5 = _mm_add_ss(carg3, carg4);
            tmp7 = _mm_cvtss_f32(carg5);
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        carg = _mm_set_ss(tmp0);
        carg1 = _mm_set_ss(tmp1);
        carg2 = _mm_add_ss(carg, carg1);
        tmp2 = _mm_cvtss_f32(carg2);
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        carg3 = _mm_set_ss(tmp3);
        carg4 = _mm_set_ss(tmp4);
        carg5 = _mm_add_ss(carg3, carg4);
        tmp5 = _mm_cvtss_f32(carg5);
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosf1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
