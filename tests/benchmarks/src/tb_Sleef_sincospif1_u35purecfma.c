/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif1_u35purecfma.c --function \
 *     Sleef_sincospif1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.a2625p-21f, 0x1.f02d62p-56f, 0x1.bdc108p-28f, 0.0f, 0x1.dad344p-93f,
     0x1.76e6e6p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b61c8p-90f, 0.0f, 0.0f,
     0.0f, 0x1.69a57p-46f, 0x1.11fc24p-73f, 0.0f, 0.0f, 0x1.3dcddp-116f, 0.0f, 0.0f,
     0.0f, 0x1.55dcbap-115f, 0.0f, 0x1.d96244p-61f, 0x1.8c5e66p-117f, 0x1.9a6b52p-8f,
     0x1.4cf838p-41f, 0x1.4fe69ep-67f, 0.0f, 0x1.30d7b2p-107f, 0x1.b5d2fep-121f,
     0x1.76feeep-69f, 0x1.e84756p-32f, 0x1.202d56p-21f, 0.0f, 0.0f, 0x1.26b2bep-71f,
     0.0f, 0.0f, 0.0f, 0x1.47adb6p-6f, 0.0f, 0x1.820f62p-2f, 0.0f, 0x1.3249e6p-103f,
     0x1.e47936p-4f, 0.0f, 0x1.22495ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74743cp-78f,
     0x1.6c2af6p-89f, 0x1.7d81f8p-92f, 0x1.a5bea2p-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49d8cap-4f, 0x1.43acc2p-81f, 0.0f, 0.0f, 0x1.44282ep-5f, 0x1.1f0cb8p-71f,
     0x1.75ce96p-56f, 0x1.4953fep-71f, 0.0f, 0x1.ed354p-66f, 0.0f, 0.0f,
     0x1.feddb4p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45396p-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.84f334p-100f, 0x1.baf2ap-104f, 0x1.83ea6ep-103f, 0x1.80ebdcp-29f,
     0.0f, 0x1.b17e6p-117f, 0x1.02ffb4p-42f, 0.0f, 0x1.740686p-2f, 0x1.369bf4p-96f,
     0x1.119064p-29f, 0.0f, 0.0f, 0x1.6648dep-33f, 0.0f, 0x1.21a6ap-35f, 0.0f, 0.0f,
     0x1.461c1cp-100f, 0x1.1bb29ep-65f, 0.0f, 0x1.44fec2p-36f, 0x1.7664aep-76f,
     0x1.1ea9c4p-6f, 0.0f, 0.0f, 0x1.98c506p-9f, 0x1.fb130cp-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2f2ab2p-21f, 0x1.e34846p-110f, 0.0f, 0x1p0f, 0.0f,
     0x1.8ede8ap-43f, 0x1.cd92eap-44f, 0x1.b2bdeap-64f, 0x1.d256e6p-60f, 0.0f,
     0x1.a2e69cp-23f, 0x1.d7616ap-119f, 0x1.de217p-101f, 0x1.49e6e4p-35f,
     0x1.83512ap-59f, 0.0f, 0x1.0b8756p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.319376p-18f, 0x1.a46a88p-73f, 0x1.165efcp-4f, 0x1.eaa05ep-57f,
     0x1.093fecp-59f, 0.0f, 0x1.fa3a3ep-30f, 0.0f, 0x1.5cc408p-61f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4c7686p-126f, 0.0f, 0x1.86e484p-93f, 0.0f, 0x1.9f0ac4p-110f, 0.0f,
     0.0f, 0x1.451312p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.109792p-102f, 0.0f,
     0x1.dd0098p-79f, 0x1.1eeef8p-39f, 0.0f, 0x1.3406fap-111f, 0.0f, 0x1.ab2ff8p-114f,
     0x1.7a906ep-69f, 0x1.0a6992p-34f, 0x1.65393cp-21f, 0.0f, 0x1.024b4cp-76f, 0.0f,
     0.0f, 0x1.615e5cp-67f, 0x1.c98176p-107f, 0x1.7118f4p-27f, 0x1.d5acap-87f, 0.0f,
     0x1.32e0e8p-124f, 0x1.c08354p-123f, 0x1.9377aap-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.313fdap-3f, 0x1.1c61p-119f, 0.0f, 0x1.e6427cp-75f, 0.0f, 0.0f,
     0x1.b40928p-17f, 0x1.6a92b2p-29f, 0x1.4d38c6p-41f, 0.0f, 0.0f, 0x1.1993fp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e76fdp-14f, 0.0f, 0x1.e6054ap-53f, 0.0f,
     0x1.da48b8p-117f, 0.0f, 0.0f, 0x1.5867bep-73f, 0x1.1ee564p-124f, 0.0f, 0.0f,
     0.0f, 0x1.8357dap-65f, 0x1.8ead34p-34f, 0.0f, 0.0f, 0.0f, 0x1.496fc2p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0df5aap-49f, 0.0f, 0x1.20135ap-23f, 0x1.878bcap-75f,
     0x1p0f, 0x1.f44082p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d90b6p-110f,
     0x1.1e4178p-59f, 0x1.3523dcp-79f, 0x1.cb9b7p-15f, 0x1.fe969ep-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6b2c76p-96f, 0.0f, 0x1.235b6ep-113f, 0x1.0d7dfcp-33f, 0.0f,
     0x1.3eb298p-34f, 0x1.2d7112p-84f, 0.0f, 0x1.ecdd9cp-18f, 0x1.0b2abep-112f,
     0x1.083018p-2f, 0.0f, 0x1.8db14ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.512238p-64f,
     0.0f, 0.0f, 0x1.32cd0ep-67f, 0x1.b9d8ap-15f, 0.0f, 0.0f, 0x1.8a8e64p-118f, 0.0f,
     0x1.0a82a4p-46f, 0.0f, 0x1.4b9494p-101f, 0.0f, 0.0f, 0x1.5865dap-7f, 0.0f,
     0x1.8bdbaap-66f, 0.0f, 0x1.0f34f6p-105f, 0.0f, 0.0f, 0x1.06538cp-10f, 0.0f,
     0x1.70647p-77f, 0.0f, 0.0f, 0x1.b3797ep-85f, 0x1.d7a27p-71f, 0x1.d6cb1cp-37f,
     0.0f, 0.0f, 0.0f, 0x1.902138p-70f, 0x1.6079c2p-44f, 0.0f, 0.0f, 0x1.0376bcp-124f,
     0.0f, 0x1.03e642p-83f, 0.0f, 0.0f, 0.0f, 0x1.435472p-19f, 0.0f, 0x1.0aed4p-126f,
     0x1.df4334p-61f, 0x1.bcc9eap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96ebb6p-40f,
     0x1.453b44p-29f, 0x1.71035ap-116f, 0.0f, 0x1.46e7c6p-20f, 0.0f, 0x1.833d36p-25f,
     0.0f, 0.0f, 0x1.5b52b8p-62f, 0.0f, 0x1.13d896p-49f, 0.0f, 0x1.e6aec4p-25f, 0.0f,
     0.0f, 0.0f, 0x1.b38cdp-68f, 0x1.4744bp-51f, 0.0f, 0x1.e18d2ep-105f, 0.0f,
     0x1.3a85e4p-14f, 0.0f, 0.0f, 0x1.fd3cbap-118f, 0x1.682c92p-4f, 0x1.1988f2p-36f,
     0x1.3ede86p-96f, 0x1.21cc0ap-58f, 0x1.22735ep-48f, 0x1.a228f8p-16f,
     0x1.e18114p-20f, 0.0f, 0x1.afa596p-5f, 0x1.9c7046p-118f, 0.0f, 0x1.7d359ep-65f,
     0.0f, 0x1.12ac9ep-76f, 0x1.44689ap-112f, 0.0f, 0.0f, 0x1.dbe9eap-66f,
     0x1.8c08dep-114f, 0x1.44ab28p-3f, 0.0f, 0x1.e9a948p-72f, 0.0f, 0.0f,
     0x1.bb46bp-60f, 0.0f, 0x1.ed1d58p-5f, 0x1.80c82ep-72f, 0.0f, 0.0f, 0.0f,
     0x1.d2f37cp-123f, 0.0f, 0.0f, 0x1.948bfp-49f, 0.0f, 0.0f, 0x1.f3ea1ep-87f, 0.0f,
     0.0f, 0x1.5da1dep-97f, 0x1.63662ep-23f, 0.0f, 0x1.2f29f2p-60f, 0x1.f4e9d8p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9bfb4p-2f, 0x1.34d016p-7f,
     0x1.547a84p-17f, 0x1.df6be8p-6f, 0.0f, 0.0f, 0.0f, 0x1.d00734p-112f,
     0x1.f69f96p-81f, 0.0f, 0.0f, 0.0f, 0x1.05bf68p-33f, 0x1.bbae9ep-71f, 0.0f,
     0x1.dd3ddcp-61f, 0x1.2e2e26p-22f, 0x1.ae25fp-79f, 0x1.968d5ep-87f,
     0x1.a9e3eap-13f, 0x1.7dcc4cp-116f, 0.0f, 0.0f, 0x1.9141bep-42f, 0x1.b386a4p-23f,
     0x1.768c64p-32f, 0x1p0f, 0.0f, 0.0f, 0x1.77f8b4p-20f, 0.0f, 0x1.f68c72p-123f,
     0.0f, 0.0f, 0x1.6240ap-88f, 0.0f, 0x1.72cda2p-1f, 0x1.d9e346p-85f, 0.0f,
     0x1.cc7356p-114f, 0x1.391ae2p-122f, 0.0f, 0x1.ff410cp-47f, 0x1.76724cp-68f,
     0x1.2878a8p-71f, 0x1.9840ap-120f, 0.0f, 0x1.c1793ap-4f, 0x1.402a48p-53f, 0.0f,
     0x1.f56cfcp-76f, 0x1.c95f9ep-100f, 0x1.146978p-66f, 0x1.8f1c18p-7f,
     0x1.a4dc8cp-75f, 0.0f, 0x1.7c5ae6p-62f, 0.0f, 0x1.c1370ep-30f, 0x1.c0d44ap-11f,
     0.0f, 0.0f, 0x1.5c0ab8p-108f, 0x1.79968cp-39f, 0x1.00249ap-44f, 0x1.fe619cp-16f,
     0.0f, 0.0f, 0.0f, 0x1.3d2934p-21f, 0x1.8f62acp-15f, 0x1.bd1b04p-28f,
     0x1.e51d3ep-97f, 0x1.ca65acp-72f, 0x1.9f4022p-30f, 0x1.275508p-12f,
     0x1.b8dabap-59f, 0x1.0849fcp-103f, 0x1.44acc8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.165a88p-55f, 0x1.52830cp-4f, 0x1.c8d748p-107f, 0.0f, 0x1.f83404p-37f,
     0x1.7661cp-120f, 0x1.29efp-113f, 0.0f, 0x1.5ae474p-15f, 0.0f, 0x1.43559cp-43f,
     0.0f, 0.0f, 0.0f, 0x1.9def84p-34f, 0x1.441694p-8f, 0x1.f4af2cp-88f,
     0x1.735394p-116f, 0x1.8f871ep-46f, 0x1.33466cp-118f, 0.0f, 0x1.2a01e2p-83f,
     0x1.288958p-23f, 0.0f, 0x1.3f130ep-53f, 0x1.48d194p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d640f8p-85f, 0.0f, 0.0f, 0x1.45252cp-125f, 0x1.0a630cp-117f,
     0x1.399c44p-113f, 0x1.5dd5d4p-124f, 0.0f, 0.0f, 0x1.424fd2p-48f, 0.0f, 0.0f,
     0x1.d6ea3p-25f, 0.0f, 0.0f, 0.0f, 0x1.4c021p-19f, 0.0f, 0.0f, 0x1.686ba8p-12f,
     0x1.9b88dep-93f, 0x1.8fdf0ep-27f, 0.0f, 0x1.88d9fep-61f, 0x1.0e98e6p-30f, 0.0f,
     0x1.64d53cp-15f, 0x1.38ad42p-75f, 0x1.1582f4p-126f, 0x1.b6168ap-55f, 0.0f,
     0x1.f3abb6p-27f, 0x1.07c2b8p-84f, 0.0f, 0.0f, 0x1.f95cd2p-115f, 0x1.e9afa8p-18f,
     0x1.f803bep-14f, 0x1.62f956p-45f, 0.0f, 0.0f, 0.0f, 0x1.b49d64p-5f,
     0x1.52bcf2p-77f, 0.0f, 0x1.b2112p-1f, 0.0f, 0.0f, 0x1.a782d4p-7f, 0.0f, 0.0f,
     0.0f, 0x1.efcf72p-49f, 0x1.266358p-51f, 0.0f, 0x1.dddcdp-102f, 0.0f,
     0x1.790286p-34f, 0x1.8d88fep-28f, 0.0f, 0.0f, 0.0f, 0x1.f03ceap-55f,
     0x1.8c9b96p-25f, 0.0f, 0.0f, 0x1.bd8afcp-24f, 0.0f, 0.0f, 0x1.598b42p-71f,
     0x1.2f792cp-100f, 0x1.8fc53p-17f, 0.0f, 0x1.50d10ep-38f, 0.0f, 0x1.e6f5c4p-42f,
     0x1.353102p-44f, 0.0f, 0x1.81d882p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b783cp-16f,
     0.0f, 0x1.3018eap-52f, 0x1.b1df18p-58f, 0x1.650b36p-62f, 0x1.182a1cp-34f, 0.0f,
     0x1.8bce56p-106f, 0x1.5fa282p-61f, 0x1.9be92ap-102f, 0x1.65a01cp-4f, 0.0f, 0.0f,
     0.0f, 0x1.ea1db2p-67f, 0x1.36509cp-114f, 0.0f, 0x1.abe85ep-120f, 0.0f,
     0x1.475014p-95f, 0.0f, 0x1.d65fd2p-42f, 0x1.156facp-42f, 0x1.86a73ap-10f,
     0x1.c01648p-13f, 0.0f, 0.0f, 0x1p0f, 0x1.68f6e6p-102f, 0x1.411324p-51f,
     0x1.69f2ap-1f, 0.0f, 0.0f, 0.0f, 0x1.928952p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e144d2p-47f, 0x1.44601p-11f, 0x1.85bd1ap-64f, 0.0f, 0x1.1c0226p-50f,
     0x1.d17a2p-58f, 0x1.7fda7p-21f, 0x1.3e4004p-49f, 0x1.3b1306p-45f,
     0x1.7fd17ep-101f, 0.0f, 0x1.8f74dap-41f, 0x1.1db05ap-109f, 0.0f, 0x1.3fd9a4p-3f,
     0x1.018b22p-26f, 0.0f, 0.0f, 0x1.22837ap-87f, 0x1.aaba66p-88f, 0x1.fcd6a2p-62f,
     0.0f, 0x1.10084ap-119f, 0x1.bf8c38p-100f, 0.0f, 0x1.c25c9ep-81f, 0.0f, 0.0f,
     0x1.b14a9cp-83f, 0.0f, 0.0f, 0x1.d71f02p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e3b46p-61f, 0x1.b2cb84p-42f, 0.0f, 0.0f, 0x1.da47p-5f, 0x1.5fdd4p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df55bp-30f, 0.0f, 0.0f, 0.0f, 0x1.402758p-97f,
     0x1.3737f6p-66f, 0.0f, 0x1.d2715ap-8f, 0.0f, 0x1.3f4122p-74f, 0x1.5ab856p-97f,
     0.0f, 0.0f, 0x1.3d8e78p-68f, 0.0f, 0.0f, 0.0f, 0x1.a7e4eap-124f, 0x1.4954b4p-91f,
     0.0f, 0x1.69bc54p-120f, 0x1.64de24p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0edbap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ff46cp-113f,
     0x1.88b66p-52f, 0.0f, 0x1.263bf6p-111f, 0x1.44a57cp-31f, 0x1.8eff7ap-107f,
     0x1.15bccep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44d0c2p-7f, 0x1.855a04p-12f, 0.0f,
     0.0f, 0x1.617034p-89f, 0.0f, 0.0f, 0x1.2f5e48p-34f, 0.0f, 0x1.fdd3fcp-33f, 0.0f,
     0x1.1ec38ap-110f, 0.0f, 0x1.7e1352p-11f, 0x1.c7e424p-22f, 0x1.235058p-25f,
     0x1.20b8bap-30f, 0.0f, 0.0f, 0x1.5fb65cp-3f, 0.0f, 0.0f, 0.0f, 0x1.d21646p-32f,
     0x1.b465c6p-5f, 0x1.9deb6p-100f, 0x1.7534b6p-80f, 0x1.6bbc26p-113f,
     0x1.8118bep-122f, 0x1.76bd6cp-76f, 0x1.283a82p-13f, 0x1.aa807ep-62f,
     0x1.698848p-119f, 0.0f, 0.0f, 0x1.9b58bcp-34f, 0.0f, 0x1.25bd84p-1f, 0.0f,
     0x1.d406eap-114f, 0.0f, 0x1.a03d14p-92f, 0x1.57c2fcp-119f, 0.0f, 0.0f, 0.0f,
     0x1.dadc6ap-40f, 0.0f, 0x1.330046p-80f, 0.0f, 0x1.7db244p-48f, 0x1.f82d42p-108f,
     0.0f, 0x1.4c0c4p-101f, 0.0f, 0x1.b106cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18c14cp-68f, 0x1.61d032p-61f, 0.0f, 0x1.e7a898p-6f, 0x1.bb86cep-5f,
     0x1.d2ba82p-100f, 0.0f, 0x1.d50b82p-12f, 0.0f, 0.0f, 0.0f, 0x1.d997e2p-11f,
     0x1.2cb932p-53f, 0.0f, 0.0f, 0x1.996556p-72f, 0x1.4a1a4ap-2f, 0x1.87a2ecp-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d69c28p-42f, 0x1.e34c74p-37f, 0.0f, 0.0f,
     0x1.92a044p-102f, 0.0f, 0.0f, 0x1.a6a106p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc5cb4p-24f, 0.0f, 0x1.9c1feap-1f, 0.0f, 0.0f, 0x1.a162bep-67f,
     0x1.e1b8dep-38f, 0.0f, 0x1.b12f7p-9f, 0x1.edbd0ap-46f, 0.0f, 0.0f,
     0x1.f67dfp-10f, 0.0f, 0x1.87417cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0065cap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.617dap-103f, 0.0f,
     0x1.2a8b2cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a755ap-124f,
     0x1.d53f04p-122f, 0.0f, 0.0f, 0x1.483b7ep-95f, 0x1.f04fep-73f, 0x1.d8d84p-71f,
     0x1.662beap-24f, 0.0f, 0.0f, 0x1.cd46c4p-117f, 0.0f, 0x1.c58756p-52f, 0.0f,
     0x1.eb8a74p-77f, 0x1.a5cfc2p-61f, 0.0f, 0.0f, 0x1.a6986ep-68f, 0x1.5ef19ep-88f,
     0x1.594a04p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27c742p-71f,
     0x1.734ce6p-40f, 0x1.66f75ep-40f, 0x1.8c35eap-22f, 0.0f, 0x1.ac87e4p-120f,
     0x1.91babap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39058p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bfd34p-98f, 0x1.eaa86cp-36f, 0.0f, 0x1.f36ddap-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94b4bep-38f, 0.0f, 0x1.4912a4p-31f, 0.0f, 0.0f, 0.0f,
     0x1.0ed5e4p-97f, 0x1.bb3b7ep-88f, 0x1.711b0ap-101f, 0.0f, 0x1.a5c1a8p-81f, 0.0f,
     0x1.52c854p-120f, 0.0f, 0.0f, 0x1.f160eep-25f, 0.0f, 0x1.4da06cp-119f, 0.0f,
     0x1.072482p-52f, 0.0f, 0x1.4b51a8p-112f, 0.0f, 0x1.4d6482p-112f, 0x1.fba00ep-41f,
     0x1.0b718cp-50f, 0.0f, 0.0f, 0x1.0a081ep-97f, 0.0f, 0x1.c03304p-84f,
     0x1.24d53ap-19f, 0.0f, 0x1.2c8dcp-106f, 0.0f, 0x1.c68568p-61f, 0.0f,
     0x1.0b34e6p-106f, 0x1.4d3b9p-88f, 0x1.8f720ep-76f, 0x1.0efe4ep-12f,
     0x1.f92a5ap-51f, 0.0f, 0x1.62eed6p-93f, 0x1.b71adcp-108f, 0.0f, 0x1.bba062p-87f,
     0.0f, 0x1.f8bf4p-11f, 0x1.36c44cp-105f, 0x1.cc91dp-31f, 0.0f, 0.0f,
     0x1.f74fccp-94f, 0x1.a1a718p-40f, 0.0f, 0x1.dda8a6p-65f, 0.0f, 0.0f,
     0x1.67b522p-81f, 0x1.2870ap-58f, 0x1.6d84cap-15f, 0x1.ef4fe6p-38f, 0.0f,
     0x1.a86efp-54f, 0x1.0c9114p-104f, 0x1.7f95e4p-56f, 0.0f, 0.0f, 0x1.a5388cp-41f,
     0.0f, 0x1.a3595p-48f, 0.0f, 0.0f, 0x1.1bdadcp-55f, 0.0f, 0.0f, 0.0f,
     0x1.4430cep-125f, 0.0f, 0x1.ccca56p-123f, 0x1.56ab56p-56f, 0.0f, 0.0f,
     0x1.4cfa26p-22f, 0.0f, 0.0f, 0x1.379866p-117f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
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
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincospif1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincospif1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospif1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
