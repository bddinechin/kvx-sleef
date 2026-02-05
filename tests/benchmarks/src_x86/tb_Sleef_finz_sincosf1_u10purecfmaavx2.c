/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosf1_u10purecfma.c --function \
 *     Sleef_finz_sincosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.76dfa2p-122f, 0x1.89ae18p-8f, 0x1.e9b154p-53f, 0.0f, 0x1.7cad08p-116f,
     0x1.39ada4p-37f, 0x1.e78d2cp-73f, 0x1.86a616p-94f, 0x1.ac4234p-86f, 0.0f, 0.0f,
     0x1.f1d1e2p-124f, 0.0f, 0x1.62f70ep-98f, 0.0f, 0.0f, 0x1.385578p-72f,
     0x1.47a202p-67f, 0x1.e8f5fep-15f, 0.0f, 0x1.c1bfaap-73f, 0.0f, 0x1.df1298p-119f,
     0.0f, 0.0f, 0.0f, 0x1.6f0418p-78f, 0x1.f3dd4cp-19f, 0.0f, 0x1.f6b68p-3f,
     0x1.416658p-24f, 0x1.e4fe7p-92f, 0.0f, 0.0f, 0.0f, 0x1.ceff1cp-7f,
     0x1.6b33b2p-110f, 0.0f, 0x1.0b83cap-109f, 0x1.bce898p-103f, 0.0f, 0x1.15588p-11f,
     0.0f, 0x1.713964p-109f, 0x1.d0896ep-48f, 0.0f, 0x1.a65f38p-66f, 0x1p0f,
     0x1.291878p-96f, 0x1.626c48p-105f, 0.0f, 0x1.80f864p-124f, 0.0f, 0.0f,
     0x1.8b86e2p-83f, 0x1.2b1cdcp-85f, 0.0f, 0.0f, 0x1.31689ep-96f, 0x1.b67f6p-118f,
     0x1.44059p-24f, 0x1.62d51p-12f, 0x1.a7a35ep-8f, 0.0f, 0x1.85ebb2p-119f, 0.0f,
     0.0f, 0.0f, 0x1.a1c828p-28f, 0.0f, 0x1.173184p-50f, 0x1.90fdbep-99f,
     0x1.aa5b1p-8f, 0x1.39f37ep-52f, 0.0f, 0.0f, 0x1.262ebep-125f, 0.0f,
     0x1.fcffe4p-117f, 0x1.62278cp-54f, 0.0f, 0.0f, 0.0f, 0x1.7630ep-98f,
     0x1.42172p-97f, 0.0f, 0.0f, 0x1.30320cp-55f, 0.0f, 0.0f, 0x1.cf3dbp-29f, 0.0f,
     0.0f, 0x1.e74cfp-8f, 0x1.a509e8p-18f, 0x1.3bcf22p-32f, 0x1.77b572p-83f, 0.0f,
     0x1.dc547ap-58f, 0.0f, 0x1.8922a6p-4f, 0x1.4bd25ep-86f, 0x1.2c1c22p-109f, 0.0f,
     0.0f, 0x1.0ba3c4p-30f, 0.0f, 0.0f, 0x1.fc9222p-37f, 0.0f, 0.0f, 0.0f,
     0x1.55435p-53f, 0x1.e2c342p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d21228p-31f, 0.0f, 0x1.105e14p-60f, 0.0f, 0x1.87ab3ap-27f, 0.0f, 0.0f,
     0x1.d29928p-41f, 0x1.15eb68p-113f, 0x1.5f4b66p-61f, 0x1.b8488ap-33f,
     0x1.d82bf6p-43f, 0.0f, 0x1.b5c7bep-96f, 0.0f, 0x1.502efp-111f, 0x1.4664a2p-126f,
     0.0f, 0.0f, 0.0f, 0x1.7b65b2p-33f, 0x1.8810cap-10f, 0x1.0a6192p-13f,
     0x1.a0b862p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.495bd2p-32f, 0.0f,
     0x1.2fbd06p-116f, 0x1.da211cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b7c42p-53f,
     0x1.a54f58p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.def00ep-11f, 0x1.9620fcp-10f,
     0x1.5e4262p-25f, 0.0f, 0x1.ec8cecp-105f, 0x1.53ce8ep-26f, 0.0f, 0.0f,
     0x1.f5825cp-50f, 0x1.f64856p-112f, 0.0f, 0.0f, 0.0f, 0x1.611becp-93f, 0.0f,
     0x1.f39bfap-106f, 0.0f, 0x1.84a97ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bbbfeap-20f, 0x1.4369cep-37f, 0x1.4a2fc6p-15f,
     0x1.298a02p-71f, 0x1.fbbfbap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2b2fcp-43f, 0x1.c75856p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59af4cp-119f,
     0x1.f4a45p-65f, 0.0f, 0.0f, 0x1.ded514p-51f, 0.0f, 0x1.184a54p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6a506p-84f, 0.0f, 0x1.16b8bcp-87f, 0x1.74f408p-40f, 0.0f,
     0.0f, 0x1.4193ecp-34f, 0x1.cba2c6p-50f, 0.0f, 0x1.54f9dp-109f, 0x1.f9572ap-25f,
     0x1.c19d5p-46f, 0x1.91ba78p-12f, 0x1.133d2p-12f, 0x1.f8d93ap-62f,
     0x1.00b16cp-122f, 0.0f, 0x1.853beep-109f, 0.0f, 0.0f, 0x1.ccc826p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b93f36p-15f, 0x1.5a328cp-3f, 0.0f,
     0x1.fa6e4cp-122f, 0.0f, 0.0f, 0x1.7fbec6p-105f, 0.0f, 0x1.14302p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d1a45ep-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44a812p-57f,
     0.0f, 0x1.1d1a38p-103f, 0x1.74d54ep-40f, 0x1.7f8cd2p-56f, 0x1.68551ap-31f, 0.0f,
     0.0f, 0x1.f1066ap-21f, 0.0f, 0x1.907b3ep-125f, 0.0f, 0.0f, 0x1.b5bdfap-13f,
     0x1.8e8476p-45f, 0x1.da2524p-101f, 0x1.3831c4p-11f, 0x1.72733ep-40f,
     0x1.e792b4p-54f, 0.0f, 0x1.67dfc4p-81f, 0.0f, 0.0f, 0.0f, 0x1.9653a2p-18f, 0.0f,
     0x1.1172dep-63f, 0.0f, 0.0f, 0.0f, 0x1.8bd76p-69f, 0.0f, 0.0f, 0.0f,
     0x1.80f6a8p-105f, 0x1.992b54p-58f, 0x1.d3286p-94f, 0.0f, 0.0f, 0x1.729622p-9f,
     0x1.b56d08p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6509f4p-108f, 0.0f, 0x1.7ec23p-43f,
     0x1.28a558p-103f, 0.0f, 0x1.25b25ep-54f, 0x1.99fd06p-108f, 0x1.1f7a8ap-79f,
     0x1.d557fep-19f, 0.0f, 0.0f, 0.0f, 0x1.b535c6p-71f, 0x1.d7e328p-87f, 0.0f,
     0x1.b93566p-85f, 0.0f, 0.0f, 0x1.2a8112p-2f, 0.0f, 0x1.de47bp-100f,
     0x1.4c0196p-17f, 0x1.fc7904p-5f, 0x1.87fff2p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09eb62p-126f, 0x1.e0dda2p-23f, 0x1.70789p-6f, 0.0f, 0.0f, 0x1.cb9022p-89f,
     0x1.854b26p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.288572p-9f, 0.0f, 0.0f,
     0x1.8f8744p-111f, 0x1.2f4e5ep-83f, 0.0f, 0x1.2eba1ep-123f, 0x1.d4224cp-93f, 0.0f,
     0x1.f841f4p-15f, 0x1.63ae02p-61f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.7bf962p-46f,
     0x1.004778p-41f, 0x1.9b8136p-65f, 0x1.51fccep-63f, 0x1.da2cbp-114f, 0.0f,
     0x1.181222p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.900e82p-107f,
     0.0f, 0x1.59b15p-89f, 0.0f, 0.0f, 0x1.f439e6p-32f, 0x1.380906p-89f, 0.0f,
     0x1.c9c834p-81f, 0x1.6bfb7ap-66f, 0.0f, 0.0f, 0.0f, 0x1.2ee764p-123f,
     0x1.d2p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.023ee8p-43f, 0.0f, 0x1.ce96a8p-125f,
     0.0f, 0x1.fea5ep-119f, 0x1.47aecp-24f, 0x1.973dep-6f, 0x1.905368p-41f, 0.0f,
     0.0f, 0x1.d476bep-37f, 0x1.18dbd6p-112f, 0.0f, 0x1.d499bap-98f, 0.0f,
     0x1.aa8f1cp-23f, 0x1.13c3cap-42f, 0x1.3a1edap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad33eep-54f, 0x1.1fa9fcp-34f, 0.0f, 0.0f, 0x1.3619e8p-10f, 0x1.005d8ep-69f,
     0x1.003baap-108f, 0.0f, 0.0f, 0x1.fb5abap-52f, 0.0f, 0x1.3468f6p-123f, 0.0f,
     0.0f, 0x1.2d7ec8p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3353dcp-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a4cba2p-74f, 0x1.40216ap-114f, 0x1.da717p-53f, 0.0f, 0.0f,
     0x1.5e833ep-98f, 0x1.344876p-64f, 0x1.6f83fep-29f, 0x1.d73ceep-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70c922p-22f, 0.0f, 0x1.c7865cp-46f,
     0x1.64d32p-57f, 0.0f, 0.0f, 0x1.973ae2p-95f, 0x1.a18ec2p-68f, 0.0f,
     0x1.ff125ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.541bbcp-53f, 0.0f,
     0x1.04dd8cp-5f, 0x1.0bf792p-7f, 0.0f, 0x1.a11478p-70f, 0.0f, 0x1.2fe18cp-43f,
     0x1.a6dca2p-75f, 0x1.d44b9ap-111f, 0.0f, 0x1.24f878p-51f, 0.0f, 0.0f,
     0x1.6f63f2p-3f, 0.0f, 0.0f, 0x1.98fc34p-53f, 0x1.56a246p-34f, 0x1.edb9ccp-42f,
     0.0f, 0.0f, 0.0f, 0x1.b364e4p-103f, 0.0f, 0.0f, 0.0f, 0x1.d2e702p-31f, 0.0f,
     0.0f, 0x1.068ba2p-46f, 0x1.d901dep-118f, 0x1p0f, 0x1.217de4p-31f,
     0x1.0f100cp-37f, 0.0f, 0.0f, 0x1.6e792p-74f, 0x1.ec69eep-32f, 0.0f,
     0x1.352fd2p-77f, 0.0f, 0x1.4941dp-109f, 0x1.0e0016p-47f, 0.0f, 0x1.60b436p-126f,
     0x1.599658p-78f, 0.0f, 0x1.d3fcecp-81f, 0x1.9af22ep-66f, 0.0f, 0x1.a59e9ep-82f,
     0.0f, 0x1.a56f62p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.536df6p-43f, 0x1.a909p-111f,
     0.0f, 0x1.6e534cp-62f, 0x1.a74798p-67f, 0x1.a6e29cp-20f, 0.0f, 0x1.71e018p-74f,
     0x1.a76ddcp-2f, 0x1.15d0dep-48f, 0x1.ac983ap-86f, 0.0f, 0x1.f2c588p-91f,
     0x1.6a436cp-85f, 0x1.0831bep-99f, 0x1.6a0ba8p-91f, 0.0f, 0.0f, 0x1.0343acp-21f,
     0.0f, 0.0f, 0.0f, 0x1.15baaap-41f, 0x1.6eb40cp-65f, 0.0f, 0.0f, 0x1.724832p-62f,
     0x1.ca8f5cp-3f, 0.0f, 0x1.a63414p-104f, 0.0f, 0.0f, 0.0f, 0x1.af4a3cp-97f, 0.0f,
     0.0f, 0.0f, 0x1.e0da82p-44f, 0.0f, 0x1.8e32b2p-53f, 0.0f, 0x1.eac92cp-100f,
     0x1.ee4518p-76f, 0x1.9849dap-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb96cep-15f,
     0x1.692a2cp-43f, 0.0f, 0x1.1a91d4p-92f, 0x1.368c34p-112f, 0x1.06df96p-50f, 0.0f,
     0.0f, 0x1.3505ccp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24c344p-27f, 0x1.bfdbcep-78f,
     0x1.d089ecp-101f, 0x1.28ae68p-12f, 0x1.46ee2ep-100f, 0x1.5813a2p-124f,
     0x1.fcfca8p-19f, 0x1.a848c4p-122f, 0x1.b3c9c6p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e4514p-18f, 0x1.5886d8p-115f, 0.0f, 0x1.2285p-45f, 0x1.46815ep-103f, 0.0f,
     0.0f, 0x1.9eb484p-57f, 0x1.8a364ep-46f, 0x1.1b6c4cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.832ad2p-45f, 0x1.22396cp-83f, 0.0f, 0x1.b18a1ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.725312p-48f, 0.0f, 0x1.0f9704p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c8336p-12f,
     0.0f, 0x1.992b0ep-29f, 0x1.f2fabap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1cbd8cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.65db66p-4f, 0.0f, 0.0f, 0.0f, 0x1.a6381cp-77f, 0x1.201a4p-69f,
     0x1.12adcep-66f, 0.0f, 0x1.a14bacp-84f, 0x1.00ab26p-54f, 0x1.1ea10cp-51f,
     0x1.2a3c78p-30f, 0.0f, 0x1.343afep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a1bdeep-50f, 0.0f, 0x1.cd2e76p-29f, 0.0f, 0x1.4bfd04p-26f, 0x1.8f9514p-41f,
     0x1.38d7e6p-96f, 0.0f, 0.0f, 0x1.6c88p-88f, 0x1.339296p-57f, 0.0f, 0.0f, 0.0f,
     0x1.8e655ap-98f, 0x1.c0e9ap-72f, 0.0f, 0.0f, 0x1.161c88p-46f, 0.0f, 0.0f,
     0x1.3061c8p-53f, 0x1.484a84p-123f, 0.0f, 0x1.b7c19ap-68f, 0.0f, 0.0f,
     0x1.8be9eep-3f, 0.0f, 0x1.6451aep-79f, 0x1.9bc83cp-68f, 0x1.0d5e08p-91f,
     0x1.4ac3cep-49f, 0x1.e7ebd4p-53f, 0x1.1c0ca6p-94f, 0.0f, 0.0f, 0x1.99c3aep-31f,
     0.0f, 0.0f, 0.0f, 0x1.1d68c8p-99f, 0.0f, 0x1.1d26f4p-20f, 0x1.6b333cp-105f, 0.0f,
     0.0f, 0x1.085724p-50f, 0x1.9b42d6p-119f, 0.0f, 0.0f, 0.0f, 0x1.63356p-51f, 0.0f,
     0.0f, 0x1.ccb258p-3f, 0.0f, 0x1.322e8p-20f, 0.0f, 0.0f, 0x1.68470ep-59f,
     0x1.1e7e6ap-24f, 0x1.26f652p-96f, 0.0f, 0x1.6e073p-124f, 0.0f, 0x1.aaa34ap-67f,
     0x1.11541ap-62f, 0x1.f82ffcp-33f, 0x1.6a8d3ap-28f, 0x1.1dfa6ep-7f,
     0x1.f6cac4p-72f, 0.0f, 0.0f, 0.0f, 0x1.990c1ap-22f, 0x1.0c6f9ep-64f,
     0x1.bfc99cp-79f, 0.0f, 0x1p0f, 0x1.261c42p-58f, 0x1.2a0e82p-37f, 0.0f,
     0x1.4ce3a8p-55f, 0x1.679f04p-114f, 0.0f, 0x1.491482p-114f, 0x1.dbc094p-35f,
     0x1.40f294p-15f, 0.0f, 0x1.c6d1ap-1f, 0.0f, 0x1.ac3df8p-31f, 0x1.89a112p-6f,
     0x1.47d74p-14f, 0.0f, 0x1.385c3cp-9f, 0.0f, 0x1.3596fp-122f, 0x1.d406acp-4f,
     0x1.8d79e8p-120f, 0.0f, 0.0f, 0x1.45c8dep-41f, 0.0f, 0x1.acf748p-18f, 0.0f,
     0x1.d10ddcp-17f, 0x1.1af1bcp-125f, 0x1.d5f978p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed29cep-88f, 0x1.86471ap-44f, 0.0f, 0.0f, 0.0f, 0x1.e11ddcp-107f, 0.0f, 0.0f,
     0x1.4efdaap-6f, 0.0f, 0x1.7cb95ep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6d08ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21de26p-108f, 0.0f, 0.0f,
     0x1.88f03cp-51f, 0x1.74c14p-122f, 0x1.c27104p-88f, 0x1.6a7d0ap-126f, 0.0f,
     0x1.742b16p-33f, 0x1.81b638p-98f, 0x1.0f5c86p-27f, 0.0f, 0.0f, 0x1.b487cap-7f,
     0.0f, 0x1.357344p-76f, 0x1.28ab4ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0028bcp-99f, 0.0f, 0x1.1e3db4p-46f, 0x1.b8561ap-104f, 0.0f, 0x1.b84b62p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8b71cp-29f, 0.0f, 0.0f, 0.0f, 0x1.10d55ep-17f, 0.0f,
     0x1.77e882p-29f, 0.0f, 0.0f, 0.0f, 0x1.d1c162p-33f, 0.0f, 0x1.090788p-105f, 0.0f,
     0.0f, 0x1.fed942p-25f, 0.0f, 0.0f, 0x1.cb7678p-16f, 0.0f, 0.0f, 0x1.140a18p-105f,
     0x1.96f00ep-93f, 0.0f, 0.0f, 0x1.1de984p-103f, 0.0f, 0x1.89a152p-11f, 0.0f,
     0x1.6a9ffcp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.318ca8p-120f, 0.0f,
     0.0f, 0.0f, 0x1.4b343ap-102f, 0x1.decfaap-32f, 0.0f, 0x1.33436p-36f,
     0x1.6afec6p-111f, 0.0f, 0.0f, 0x1.1c62e2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f298fep-13f, 0x1.45d202p-69f, 0x1.605df2p-21f, 0x1p0f, 0.0f,
     0x1.0eecbap-10f, 0.0f, 0.0f, 0.0f, 0x1.871324p-61f, 0.0f, 0.0f, 0x1.eb3038p-51f,
     0x1.cdcd88p-6f, 0x1.8df4a4p-58f, 0.0f, 0.0f, 0x1.a2be16p-110f, 0.0f, 0.0f,
     0x1.ac190ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.962f18p-87f, 0.0f, 0x1.18b0fep-88f,
     0x1.41d53p-94f, 0.0f, 0.0f, 0.0f, 0x1.725afep-30f, 0x1.4636c4p-96f, 0.0f, 0.0f,
     0x1.13646ap-101f, 0x1.3f603cp-60f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.02ef3ep-25f,
     0.0f, 0x1.3f8496p-16f, 0x1.0549e4p-73f, 0x1.cfe444p-89f, 0.0f, 0x1.f01c52p-64f,
     0.0f, 0.0f, 0x1.852548p-115f, 0.0f, 0.0f, 0.0f, 0x1.8393e4p-83f,
     0x1.50fadap-114f, 0.0f, 0.0f, 0.0f, 0x1.aed25cp-13f, 0x1.b5be72p-51f,
     0x1.26701p-19f, 0.0f, 0x1.c94b12p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00802ep-78f,
     0x1.f9bca2p-78f, 0x1.6502f6p-115f, 0x1.f8faacp-100f, 0x1.6108dp-5f, 0.0f, 0.0f,
     0.0f, 0x1.5454d2p-9f, 0x1.6513d4p-64f, 0x1.75b80ep-92f, 0x1.0a109ap-10f, 0.0f,
     0x1.901acp-13f, 0.0f, 0x1.0f0458p-20f, 0x1.7c89ecp-25f, 0.0f, 0.0f,
     0x1.e3cb04p-12f, 0.0f, 0x1.63d274p-36f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_sincosf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sincosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosf1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
