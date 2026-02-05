/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif1_u05purecfma.c --function \
 *     Sleef_finz_sincospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.15256cp-91f, 0.0f, 0.0f, 0x1.2fd8c4p-36f, 0x1.32035p-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e2e08p-83f, 0x1.90bb6ap-103f, 0.0f, 0x1.53a9bp-106f, 0.0f,
     0x1.ea8594p-6f, 0x1.c1a79ap-57f, 0x1.36cf1ap-110f, 0.0f, 0x1.06fafcp-31f,
     0x1.2202d8p-104f, 0x1.1cb27ap-68f, 0x1.d24f6ap-58f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.a61af6p-6f, 0x1.ddd69p-60f, 0.0f, 0x1.78064cp-107f, 0x1.62e10ep-34f, 0.0f,
     0.0f, 0x1.57fd04p-6f, 0x1.733d36p-6f, 0x1.66d17p-114f, 0x1.6ef47cp-60f,
     0x1.0a6bb2p-12f, 0.0f, 0.0f, 0x1.35ab7cp-3f, 0.0f, 0x1.9a6e64p-122f,
     0x1.084306p-2f, 0.0f, 0.0f, 0x1.66b3dp-126f, 0.0f, 0x1.4f00bap-107f,
     0x1.910676p-17f, 0x1.8d26dcp-114f, 0x1.7aef44p-65f, 0x1.98c602p-19f, 0.0f,
     0x1.5d0d8ep-96f, 0x1.03d486p-44f, 0.0f, 0x1.bc4a38p-78f, 0.0f, 0.0f, 0.0f,
     0x1.1077b8p-90f, 0x1.45e0dcp-98f, 0x1.12bb0ap-5f, 0x1.97f6ep-93f, 0.0f, 0.0f,
     0x1.2a4ceap-35f, 0x1.4fd872p-38f, 0.0f, 0.0f, 0.0f, 0x1.0124bap-26f,
     0x1.ede0f4p-79f, 0x1.3bc456p-24f, 0x1.dd158p-91f, 0x1.44764ap-92f,
     0x1.309566p-113f, 0x1.646ce4p-121f, 0.0f, 0.0f, 0x1.86e8e4p-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8cbf26p-59f, 0.0f, 0.0f, 0x1.31063cp-24f, 0.0f, 0x1.608c28p-68f,
     0x1.006952p-87f, 0.0f, 0x1.d59342p-69f, 0x1.ffcb2ep-24f, 0.0f, 0x1.61bfeap-73f,
     0x1.710176p-10f, 0.0f, 0x1.ed3a62p-35f, 0x1.781d1ep-39f, 0x1.41017p-43f, 0.0f,
     0x1.e2f734p-67f, 0.0f, 0x1.7ae9fp-58f, 0.0f, 0x1.08cbe2p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02326p-69f, 0.0f, 0x1.343364p-10f, 0x1.548f32p-103f,
     0x1.1ef28ep-116f, 0.0f, 0.0f, 0.0f, 0x1.f4081p-34f, 0.0f, 0x1.d5818ap-74f, 0.0f,
     0.0f, 0x1.617112p-59f, 0x1.43ee16p-37f, 0x1.3db60ep-42f, 0.0f, 0x1.73af7ap-88f,
     0.0f, 0x1.345ebp-2f, 0.0f, 0x1p0f, 0x1.8377bp-81f, 0.0f, 0.0f, 0x1.65823ap-7f,
     0x1.150e74p-6f, 0x1.593c76p-65f, 0.0f, 0x1.66e92cp-47f, 0.0f, 0x1.96f5cep-114f,
     0.0f, 0x1.4dd074p-85f, 0x1.3f0a2ap-117f, 0x1.4f8054p-52f, 0x1p0f,
     0x1.fcc8aep-27f, 0x1.e9febcp-120f, 0.0f, 0.0f, 0x1.c104e6p-91f, 0.0f, 0.0f, 0.0f,
     0x1.9642b6p-1f, 0.0f, 0.0f, 0x1.e2eee8p-62f, 0.0f, 0.0f, 0x1.c42958p-70f,
     0x1.cc396cp-123f, 0.0f, 0.0f, 0.0f, 0x1.5d9cdp-28f, 0x1.6fa896p-45f,
     0x1.ac717ep-85f, 0x1.7b2554p-125f, 0x1.f60c36p-61f, 0x1.c8fee6p-14f, 0.0f, 0.0f,
     0x1.88f7a8p-116f, 0x1.4beee4p-36f, 0x1.ea3b7ep-90f, 0.0f, 0.0f, 0x1.41c82ap-70f,
     0.0f, 0.0f, 0x1.06c8ccp-36f, 0.0f, 0x1.cfbb48p-33f, 0x1.f7e40ep-43f, 0.0f,
     0x1.bf4c84p-36f, 0x1.d019d2p-114f, 0.0f, 0x1.866314p-15f, 0x1.9568dep-79f, 0.0f,
     0x1.9e2696p-54f, 0.0f, 0.0f, 0.0f, 0x1.2fad6ep-39f, 0x1.8284bcp-8f,
     0x1.d950f6p-34f, 0.0f, 0x1.583d4ep-102f, 0x1.cec612p-94f, 0.0f, 0.0f, 0.0f,
     0x1.8a8388p-74f, 0.0f, 0.0f, 0.0f, 0x1.c16202p-112f, 0x1.66a1acp-13f,
     0x1.228272p-89f, 0.0f, 0x1.72c7b8p-26f, 0.0f, 0x1.35c226p-74f, 0x1.2b8ef6p-115f,
     0.0f, 0x1.25822cp-33f, 0x1.d991a4p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.738aaap-32f, 0x1.40ce9cp-104f, 0x1.bb6264p-44f, 0x1.b1db18p-109f,
     0x1.f8885ep-53f, 0x1.44d626p-82f, 0x1.a5257p-56f, 0x1.8a90e6p-122f, 0.0f,
     0x1.5d3e8ap-118f, 0.0f, 0.0f, 0.0f, 0x1.9dabe4p-123f, 0x1.c9d89ap-17f, 0.0f,
     0x1.dde7bap-91f, 0.0f, 0x1.c69e8cp-108f, 0x1.b8b0a6p-6f, 0x1.cba3dcp-64f, 0.0f,
     0.0f, 0.0f, 0x1.74d1f2p-104f, 0.0f, 0.0f, 0x1.272d4ep-126f, 0x1.376ed6p-31f,
     0x1.d60aap-11f, 0x1.0760d8p-115f, 0.0f, 0.0f, 0x1.fc20bcp-22f, 0.0f, 0.0f,
     0x1.392a1ep-123f, 0.0f, 0x1.25f48ap-10f, 0x1.2bb9e6p-121f, 0x1.d9a516p-31f, 0.0f,
     0.0f, 0x1.994618p-88f, 0.0f, 0.0f, 0x1.11413cp-99f, 0.0f, 0.0f, 0x1.0ee1c2p-47f,
     0x1.f45954p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6398fcp-26f, 0.0f,
     0x1.0f69b8p-16f, 0.0f, 0x1.b10fa6p-31f, 0.0f, 0x1.7467e4p-104f, 0.0f,
     0x1.527364p-111f, 0x1.afefe8p-69f, 0x1.66fe08p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd7dfap-88f, 0.0f, 0.0f, 0x1.65d3p-58f, 0x1.6e47bep-32f, 0.0f,
     0x1.d9c9d4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d375p-40f, 0x1.066368p-119f,
     0.0f, 0x1.4c4628p-21f, 0.0f, 0x1.8ccaf8p-11f, 0x1.64e506p-103f, 0.0f,
     0x1.4f9db2p-112f, 0x1.3c98aep-43f, 0.0f, 0x1.c16502p-62f, 0x1.e308c8p-47f,
     0x1.434784p-66f, 0x1.b12bcp-33f, 0.0f, 0.0f, 0.0f, 0x1.b36586p-80f,
     0x1.e43954p-52f, 0x1.b28914p-58f, 0.0f, 0x1.141166p-84f, 0x1.4d4866p-32f,
     0x1.7551dp-108f, 0.0f, 0x1.c1070ap-100f, 0.0f, 0x1.d3c7c6p-33f, 0.0f, 0.0f,
     0x1.fb65eep-4f, 0.0f, 0.0f, 0x1.165d28p-35f, 0x1.068bd8p-101f, 0x1.62d59cp-31f,
     0.0f, 0.0f, 0x1.01630cp-15f, 0x1.df36e2p-15f, 0x1.8564e4p-79f, 0.0f, 0.0f,
     0x1.f52436p-20f, 0.0f, 0.0f, 0x1.c9c8a4p-18f, 0x1.960c22p-59f, 0x1.5aebfep-80f,
     0.0f, 0x1.61e192p-1f, 0.0f, 0.0f, 0x1.a0b86p-42f, 0.0f, 0.0f, 0x1.8f586ep-25f,
     0x1.808042p-31f, 0x1.6fa006p-74f, 0.0f, 0x1.98552ep-2f, 0.0f, 0.0f,
     0x1.109fcap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16b0a2p-85f, 0x1.91c584p-82f,
     0x1.cbeed6p-93f, 0.0f, 0.0f, 0x1.0d7c54p-30f, 0x1.27ac58p-9f, 0x1.ca2d76p-22f,
     0.0f, 0.0f, 0x1.30b5a8p-19f, 0x1.90883ap-68f, 0.0f, 0x1.404c3ep-34f,
     0x1.525ca4p-116f, 0x1.14416cp-30f, 0x1.3261cp-89f, 0x1.0a5ce8p-39f, 0.0f, 0.0f,
     0x1.5b4d3cp-113f, 0x1.74b056p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6850ap-122f, 0.0f, 0.0f, 0.0f, 0x1.bbc0c2p-120f, 0x1.57d6b6p-30f,
     0x1.8d515ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdea2ep-113f, 0.0f, 0x1.3c39dp-93f,
     0x1.b95e6p-110f, 0x1.296edcp-119f, 0x1.0a4e4cp-36f, 0.0f, 0x1.59b406p-29f, 0.0f,
     0x1.d312ap-85f, 0.0f, 0x1.fa92fap-83f, 0.0f, 0.0f, 0x1.3ef478p-75f,
     0x1.e1b7c8p-50f, 0.0f, 0x1.5deb92p-11f, 0x1.9caacp-70f, 0.0f, 0x1.9385f6p-2f,
     0.0f, 0.0f, 0.0f, 0x1.6da0dp-81f, 0.0f, 0x1.bf3b9p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12c7f8p-125f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.ea7aeep-11f, 0x1.5df7cp-41f,
     0x1.e9a89ap-112f, 0.0f, 0x1.e29d62p-15f, 0.0f, 0x1.4c0c62p-124f, 0.0f,
     0x1.26cb1cp-24f, 0.0f, 0x1.dc1e4p-8f, 0x1.517bbcp-46f, 0x1.278134p-100f, 0.0f,
     0x1.e0d156p-57f, 0x1.f238ccp-110f, 0x1.009892p-85f, 0.0f, 0x1.09a652p-50f,
     0x1.3827d2p-27f, 0x1.f0135ap-25f, 0x1.ec2d34p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.177758p-108f, 0x1.dd4e5p-38f, 0.0f, 0x1.470b9ep-86f, 0x1.488dp-29f, 0.0f,
     0x1.d23122p-32f, 0.0f, 0x1.6f9c12p-81f, 0.0f, 0x1.4ec35cp-79f, 0x1.931afep-106f,
     0x1.2425dcp-46f, 0x1.fc1c64p-52f, 0x1.bf59dap-53f, 0x1.b9e3d6p-64f, 0.0f, 0.0f,
     0x1.ce7d1ep-100f, 0.0f, 0x1.f41f3ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f21b2p-37f,
     0x1.24abd2p-103f, 0.0f, 0x1.26d1c6p-60f, 0.0f, 0.0f, 0x1.0c487ep-115f, 0.0f,
     0.0f, 0x1.9d8c5cp-72f, 0x1.3b8a6ep-76f, 0x1.f7d20ap-61f, 0x1.db48d4p-42f,
     0x1.a7acc4p-42f, 0x1.a580a6p-86f, 0x1.7d83ep-23f, 0.0f, 0x1.420b66p-54f, 0.0f,
     0x1.44062p-85f, 0.0f, 0x1.073da8p-123f, 0.0f, 0.0f, 0x1.1b6138p-61f, 0.0f,
     0x1.2b6ec4p-108f, 0.0f, 0x1.b692c8p-111f, 0.0f, 0x1.ea6a34p-51f, 0.0f,
     0x1.2b36cep-27f, 0.0f, 0.0f, 0x1.9ad29ap-106f, 0.0f, 0x1.be8ab8p-48f,
     0x1.e0c17ap-63f, 0.0f, 0x1.958ab4p-21f, 0.0f, 0.0f, 0.0f, 0x1.4f9726p-3f, 0.0f,
     0x1.0c90c4p-89f, 0.0f, 0.0f, 0x1.bfec24p-81f, 0x1.c48e4ep-79f, 0.0f, 0.0f,
     0x1.eab9a4p-61f, 0.0f, 0x1.d6e146p-68f, 0.0f, 0x1.c3f824p-1f, 0x1.74c2aep-33f,
     0.0f, 0.0f, 0x1.7d552p-11f, 0x1.707836p-122f, 0x1.8df788p-61f, 0x1.f7cc84p-99f,
     0.0f, 0x1.7e2dfap-77f, 0.0f, 0x1.0c9348p-111f, 0x1.21e976p-94f, 0x1.bdf948p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8828p-39f, 0x1.93fc94p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.97b1fp-91f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe250cp-63f, 0x1.b0c578p-113f, 0x1.3062eep-33f, 0.0f, 0.0f,
     0x1.f868b8p-33f, 0x1.d9d452p-74f, 0x1.089a86p-30f, 0.0f, 0x1.d5644ep-88f, 0.0f,
     0x1.650c2p-73f, 0.0f, 0.0f, 0.0f, 0x1.bf2274p-101f, 0x1.da972ep-9f,
     0x1.fcefbap-64f, 0.0f, 0.0f, 0.0f, 0x1.9959b8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bbfc32p-26f, 0.0f, 0.0f, 0.0f, 0x1.ecd70ap-11f, 0x1.488f84p-2f,
     0x1.f6b7bcp-68f, 0x1.b7c45ep-106f, 0x1.023322p-106f, 0x1.edd63p-91f, 0.0f,
     0x1.d7298p-90f, 0x1.978b08p-78f, 0x1.be1306p-117f, 0x1.f04432p-70f,
     0x1.2ba814p-121f, 0x1.e8b35cp-67f, 0.0f, 0x1.c1b096p-59f, 0x1.606d8ep-39f, 0.0f,
     0x1.e6d574p-38f, 0x1.a6d0b2p-4f, 0.0f, 0x1.9cb2bep-31f, 0x1.d70f0ep-104f,
     0x1.2d8deep-44f, 0x1.3e10eap-90f, 0.0f, 0.0f, 0.0f, 0x1.2a32dep-107f,
     0x1.a6803ap-103f, 0.0f, 0x1.394ddap-92f, 0x1.53959cp-114f, 0.0f, 0x1.a734b8p-49f,
     0.0f, 0x1.a27da8p-61f, 0x1.d33e0ep-14f, 0.0f, 0x1.af4f36p-116f, 0x1.1e5058p-46f,
     0x1.36224cp-27f, 0x1.fae1a2p-25f, 0.0f, 0x1.30f5p-31f, 0.0f, 0x1.b488b2p-13f,
     0.0f, 0x1.a1d7aap-26f, 0x1.17621ep-24f, 0.0f, 0x1.a6a282p-105f, 0.0f,
     0x1.9efd82p-85f, 0.0f, 0x1.08e194p-122f, 0x1.aa32cap-69f, 0x1.8509b4p-110f, 0.0f,
     0.0f, 0.0f, 0x1.c12b8cp-69f, 0.0f, 0x1.f7069ap-92f, 0.0f, 0.0f, 0x1.d446cep-86f,
     0x1.62d43p-105f, 0x1.52c66ep-50f, 0.0f, 0x1.9f56bp-98f, 0x1.4a32bap-126f, 0.0f,
     0.0f, 0.0f, 0x1.014b66p-109f, 0.0f, 0.0f, 0.0f, 0x1.b44f96p-17f, 0x1.258122p-42f,
     0x1.bd7618p-104f, 0x1.dfd27cp-51f, 0x1.6707ep-112f, 0.0f, 0x1.a7b36ap-77f, 0.0f,
     0x1.66fp-14f, 0.0f, 0x1.4f602ep-37f, 0x1.6ad286p-63f, 0x1.520694p-53f,
     0x1.7aa79ap-18f, 0x1.1c4b62p-17f, 0.0f, 0x1.44d2fep-86f, 0.0f, 0x1.fa4378p-87f,
     0x1.448caap-66f, 0.0f, 0x1.7d94fp-53f, 0.0f, 0.0f, 0.0f, 0x1.e6d822p-110f, 0.0f,
     0.0f, 0x1.ce4fcap-11f, 0x1.e2b0f2p-77f, 0.0f, 0.0f, 0x1.f9986cp-34f, 0.0f,
     0x1.a8705ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfb85p-91f, 0.0f, 0.0f,
     0x1.a65f6ep-42f, 0.0f, 0.0f, 0.0f, 0x1.b9c206p-4f, 0x1.70244ap-77f,
     0x1.e71b1ap-117f, 0.0f, 0.0f, 0x1.9f32f8p-105f, 0.0f, 0x1.30fcf2p-87f, 0.0f,
     0x1.3495ccp-7f, 0x1.e52b26p-85f, 0x1.c57ad4p-32f, 0.0f, 0x1.686b8ap-111f, 0.0f,
     0.0f, 0x1.87c208p-93f, 0x1.ab443ap-102f, 0x1.f89a16p-65f, 0.0f, 0.0f,
     0x1.ae06f6p-50f, 0x1.e7b8fep-68f, 0.0f, 0x1.345e74p-87f, 0.0f, 0x1.427738p-30f,
     0.0f, 0.0f, 0x1.5e6b3p-71f, 0.0f, 0x1.a053dep-61f, 0.0f, 0.0f, 0.0f,
     0x1.7f1d6cp-101f, 0x1.39448ap-117f, 0x1.5479dp-83f, 0.0f, 0x1.b68b4cp-65f,
     0x1.3f1a06p-45f, 0x1.af175cp-26f, 0.0f, 0x1.2d3f9ep-37f, 0x1.7e9efcp-19f,
     0x1.cf78e6p-38f, 0x1.e3b4c6p-54f, 0.0f, 0x1.d217dp-72f, 0x1.ed151ap-85f,
     0x1.1021f2p-42f, 0.0f, 0x1.17416p-52f, 0.0f, 0.0f, 0x1.995fd8p-20f, 0.0f,
     0x1.61ddccp-96f, 0x1.f08d82p-70f, 0x1.c9cef4p-16f, 0.0f, 0x1.7efca4p-104f,
     0x1.f13ffep-96f, 0x1.d33058p-78f, 0.0f, 0.0f, 0x1.0968dap-124f, 0x1.8e80f4p-25f,
     0x1.53edc2p-40f, 0x1.95f1f2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b350ap-39f, 0.0f,
     0x1.a16f48p-26f, 0x1.660bbep-113f, 0x1.e4a92ep-18f, 0.0f, 0x1.d148ecp-92f,
     0x1.a0ff5p-43f, 0x1.e96d0ap-97f, 0.0f, 0x1.533a6ep-121f, 0.0f, 0x1.434872p-75f,
     0.0f, 0x1.07928cp-31f, 0x1.f0b132p-78f, 0x1.54abbap-82f, 0.0f, 0.0f,
     0x1.1582aep-110f, 0.0f, 0x1.a23282p-12f, 0x1.f6bb7p-122f, 0x1.556cc2p-16f, 0.0f,
     0.0f, 0.0f, 0x1.c1ba6ep-121f, 0x1.0371b2p-107f, 0.0f, 0x1.66ba2p-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8078aep-54f, 0x1.4c1112p-34f,
     0x1.7f73f8p-10f, 0x1.c46f98p-41f, 0.0f, 0x1.c22a38p-57f, 0x1.f8d028p-97f, 0.0f,
     0x1.587cdap-76f, 0.0f, 0.0f, 0.0f, 0x1.077826p-81f, 0.0f, 0x1.7990bp-29f,
     0x1.ed10bp-107f, 0x1.8485e2p-89f, 0.0f, 0x1.f66486p-100f, 0x1.08936ep-87f, 0.0f,
     0.0f, 0.0f, 0x1.327a3p-97f, 0.0f, 0x1.652af4p-7f, 0.0f, 0.0f, 0x1.750f3cp-87f,
     0x1.10d336p-113f, 0.0f, 0.0f, 0x1.6c8b18p-124f, 0x1.e03bcp-125f, 0x1.4938bap-7f,
     0x1.f4081p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2643dp-29f, 0.0f,
     0x1.0fe098p-105f, 0.0f, 0x1.bab05p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69c71ap-105f,
     0.0f, 0.0f, 0.0f, 0x1.f2b4f6p-42f, 0.0f, 0x1.eadb48p-110f, 0.0f, 0.0f,
     0x1.9aa514p-51f, 0.0f, 0.0f, 0.0f, 0x1.58cc8p-77f, 0.0f, 0x1.44cff2p-31f,
     0x1.3b3d92p-99f, 0x1.76f0c6p-11f, 0.0f, 0x1.b5bf78p-27f, 0.0f, 0.0f, 0.0f,
     0x1.55f8dcp-119f, 0.0f, 0x1.c9beb4p-5f, 0.0f, 0.0f, 0x1.93047ep-100f, 0.0f,
     0x1.e6fc94p-29f, 0.0f, 0x1.8c929ap-33f, 0x1.9aebbep-124f, 0.0f, 0x1.99fd08p-125f,
     0x1.37a56ap-59f, 0x1.116e9ep-117f, 0.0f, 0x1.02bed4p-53f, 0.0f, 0x1.c5d74ep-14f,
     0x1.9c5b56p-62f, 0.0f, 0.0f, 0x1.078c7p-11f, 0x1.474246p-54f, 0x1.ea4c6p-71f,
     0.0f, 0.0f, 0.0f, 0x1.5389d4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a579eep-67f,
     0x1.9d47f2p-119f, 0.0f, 0x1.dcbf38p-25f, 0x1.4cf6eap-45f, 0.0f, 0x1.60c0f6p-114f,
     0.0f, 0.0f, 0x1.43dbap-39f, 0x1.537e0ap-120f, 0.0f, 0x1.aab81p-29f,
     0x1.a45702p-57f, 0.0f, 0.0f, 0x1.66d108p-93f, 0x1.feefd4p-115f, 0x1.a13476p-118f,
     0.0f, 0x1.3ef5bap-68f, 0x1.2dc6e6p-57f, 0x1.b4ba04p-72f
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
            tmp1 = Sleef_finz_sincospif1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sincospif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospif1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
