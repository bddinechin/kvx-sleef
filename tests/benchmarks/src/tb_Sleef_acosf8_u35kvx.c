/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf8_u35kvx.c --function Sleef_acosf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.597128p-61f, 0x1.6b84eap-65f, 0x1.c8de56p-122f, 0.0f, 0.0f, 0.0f,
     0x1.edd2d8p-5f, 0.0f, 0x1.f311fp-78f, 0x1.7d88e4p-88f, 0.0f, 0.0f,
     0x1.e6e036p-26f, 0.0f, 0.0f, 0x1.73c966p-107f, 0.0f, 0x1.31586cp-71f,
     0x1.7379d6p-27f, 0x1.445d88p-15f, 0.0f, 0x1.91c004p-15f, 0.0f, 0x1.6cb5aap-10f,
     0x1.11023p-42f, 0x1.88a94p-49f, 0x1.70ab04p-60f, 0.0f, 0x1.e9c15cp-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c7f54p-105f, 0x1.3b9cd2p-105f, 0.0f, 0x1.0443ep-113f,
     0x1.679f66p-113f, 0.0f, 0x1.819a2p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bb9f8p-88f, 0.0f, 0.0f, 0.0f, 0x1.c3f8acp-26f, 0.0f, 0x1.d72d36p-44f,
     0x1.163228p-13f, 0x1.603a8ap-50f, 0.0f, 0x1.3355c8p-110f, 0x1.bcac46p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.471b6p-9f, 0x1.b35f16p-76f, 0x1.3f2592p-106f,
     0x1.9946a2p-115f, 0.0f, 0.0f, 0x1.ff203ep-117f, 0.0f, 0.0f, 0x1.573dfcp-107f,
     0x1.cafaeap-108f, 0.0f, 0.0f, 0x1.ac840ap-13f, 0x1.8e13fep-63f, 0x1.854ff2p-20f,
     0.0f, 0.0f, 0x1.0ae92p-83f, 0.0f, 0x1.e02f66p-60f, 0.0f, 0x1.81387cp-70f, 0.0f,
     0x1.618cfep-4f, 0x1.10da5p-68f, 0.0f, 0x1.530e96p-93f, 0.0f, 0x1.f77012p-84f,
     0x1.944b58p-39f, 0x1.1021cep-47f, 0x1.439826p-125f, 0.0f, 0x1.53f50ap-108f, 0.0f,
     0x1.713138p-27f, 0.0f, 0.0f, 0x1.6ee756p-12f, 0x1.0ca302p-42f, 0.0f, 0.0f, 0.0f,
     0x1.99acc6p-67f, 0.0f, 0x1.b2f90cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d3504p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d0b82p-75f, 0.0f, 0x1.dda05ap-10f, 0x1.e68af2p-106f,
     0.0f, 0.0f, 0.0f, 0x1.301098p-120f, 0x1.d30f6p-10f, 0x1.9856e8p-11f,
     0x1.d7dd52p-82f, 0.0f, 0x1.78012ap-46f, 0.0f, 0.0f, 0.0f, 0x1.830d0cp-9f, 0.0f,
     0x1.19bb92p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e63f8p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e6c11p-77f, 0x1.9b6f3cp-11f, 0x1.38e48p-25f, 0.0f, 0x1.dbd7d4p-93f,
     0x1.f7d7ep-35f, 0x1.4d4b4cp-88f, 0.0f, 0.0f, 0.0f, 0x1.d6a10cp-59f, 0.0f,
     0x1.fc8c66p-22f, 0x1.c52dd4p-4f, 0x1.760756p-97f, 0x1.6c1ea4p-87f,
     0x1.1e474ap-13f, 0x1.c8fa86p-70f, 0.0f, 0.0f, 0x1.2d83fep-1f, 0.0f,
     0x1.7e329cp-15f, 0x1.d4b5dap-55f, 0.0f, 0.0f, 0x1.75997p-124f, 0.0f,
     0x1.249588p-114f, 0x1.094b08p-60f, 0x1.17fcfp-14f, 0x1.75fa5ap-65f, 0.0f,
     0x1.0eff12p-12f, 0x1.4bcfcp-74f, 0.0f, 0x1.4dcd86p-106f, 0.0f, 0x1.c53e8cp-90f,
     0x1.337bacp-88f, 0.0f, 0x1.c86bcap-104f, 0x1.fb6872p-32f, 0x1.70758p-124f,
     0x1.3374acp-36f, 0x1.a9e8f8p-104f, 0.0f, 0x1.cdd346p-53f, 0x1.6e3aeap-96f, 0.0f,
     0x1.0529bap-86f, 0.0f, 0.0f, 0x1.a88616p-52f, 0.0f, 0x1.cfe608p-84f,
     0x1.df5e2ep-75f, 0.0f, 0.0f, 0x1.d61bc2p-15f, 0.0f, 0x1.59aac8p-51f,
     0x1.a23154p-79f, 0.0f, 0x1.a63d8cp-95f, 0x1.1f745p-68f, 0x1.2922b6p-37f, 0.0f,
     0.0f, 0x1.268e1ap-53f, 0x1.8fe92p-43f, 0x1.55cb76p-105f, 0x1.743a2cp-91f,
     0x1.2cdff6p-52f, 0.0f, 0.0f, 0x1.75ec08p-114f, 0.0f, 0.0f, 0x1.e3be26p-93f, 0.0f,
     0x1.792a4cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2bc9ep-23f, 0.0f,
     0x1.76f808p-117f, 0x1.02efc8p-55f, 0.0f, 0x1.24fd3ep-26f, 0.0f, 0.0f,
     0x1.b3ef56p-18f, 0x1.07cb0ap-54f, 0x1.0e208ap-105f, 0.0f, 0.0f, 0.0f,
     0x1.b7df42p-102f, 0x1.0e1d72p-86f, 0.0f, 0x1.3fba88p-37f, 0.0f, 0x1.9db05cp-115f,
     0x1.d4c666p-104f, 0x1.3593f4p-71f, 0x1.ddfae6p-8f, 0.0f, 0x1.8a151p-43f,
     0x1.48c7eep-96f, 0x1.0b91eep-43f, 0x1.bac6c6p-72f, 0.0f, 0.0f, 0x1.143e9ep-6f,
     0x1.adfce8p-100f, 0x1.7e6bf8p-105f, 0x1.b90a6cp-11f, 0x1.7355p-103f,
     0x1.e6b68p-93f, 0.0f, 0.0f, 0x1.d79c16p-6f, 0.0f, 0.0f, 0.0f, 0x1.b5e492p-58f,
     0x1.e9753p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6eac9p-47f, 0.0f, 0.0f, 0x1.3fccbp-98f, 0x1.6b260cp-44f, 0x1.9f069ap-100f,
     0x1.29c2f4p-48f, 0.0f, 0.0f, 0x1.8c5b6ap-41f, 0.0f, 0x1.302e1p-97f,
     0x1.758f56p-39f, 0x1.4b8712p-51f, 0.0f, 0x1.4a8682p-6f, 0x1.710fd4p-80f,
     0x1.cbfca4p-110f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.3ed758p-37f,
     0x1.5d7734p-84f, 0.0f, 0x1.7c686ap-103f, 0x1.094cb2p-28f, 0x1.425234p-92f,
     0x1.450e86p-1f, 0x1.9f3242p-75f, 0x1.7141d2p-92f, 0.0f, 0.0f, 0x1.2ab81ap-39f,
     0x1.68af7ep-51f, 0.0f, 0.0f, 0x1.7fc4aep-66f, 0.0f, 0.0f, 0x1.59e37cp-103f, 0.0f,
     0.0f, 0x1.6f62ccp-115f, 0x1.c78682p-30f, 0.0f, 0.0f, 0x1.3b59cp-57f,
     0x1.705388p-25f, 0.0f, 0.0f, 0x1.81dae2p-80f, 0x1.206862p-84f, 0.0f, 0.0f, 0.0f,
     0x1.669b1ep-101f, 0.0f, 0x1.85c1d6p-4f, 0x1.bc4066p-43f, 0x1.75feecp-105f, 0.0f,
     0.0f, 0.0f, 0x1.49032ap-89f, 0x1.ca7676p-96f, 0.0f, 0.0f, 0x1.68114cp-122f, 0.0f,
     0x1.6eb6dap-111f, 0.0f, 0x1.80eda4p-80f, 0.0f, 0x1.ca38e2p-12f, 0x1.f51314p-7f,
     0x1.6fddep-103f, 0x1.13c9a8p-92f, 0x1.d801d4p-114f, 0.0f, 0x1.81d3bap-63f, 0.0f,
     0x1.478928p-42f, 0x1.ac350cp-55f, 0.0f, 0.0f, 0x1.6a423cp-99f, 0x1.10a5f4p-60f,
     0.0f, 0x1.77dac4p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a9dep-17f, 0.0f,
     0.0f, 0x1.a18fd8p-55f, 0.0f, 0.0f, 0x1.7a214ap-101f, 0.0f, 0x1.1f525ep-116f,
     0x1.203d26p-10f, 0x1.6c5f6cp-69f, 0.0f, 0x1.246b1cp-27f, 0x1.27ed44p-98f, 0.0f,
     0x1.3941b8p-96f, 0.0f, 0x1.820336p-29f, 0x1.3333d4p-60f, 0x1.e24114p-39f,
     0x1.db0beap-123f, 0.0f, 0x1.a3581cp-38f, 0x1.a6af44p-6f, 0x1.acdf88p-48f,
     0x1.455282p-16f, 0.0f, 0.0f, 0x1.0454c4p-4f, 0x1.887f44p-106f, 0x1.4c4358p-122f,
     0.0f, 0x1.74c428p-16f, 0.0f, 0x1.7b8116p-117f, 0x1.0354ccp-18f, 0.0f, 0.0f, 0.0f,
     0x1.56d0aep-42f, 0.0f, 0.0f, 0.0f, 0x1.49299p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61471ap-123f, 0.0f, 0.0f, 0x1.62c3b8p-68f, 0x1.c2001ep-58f, 0x1.ea4d68p-45f,
     0x1.fcbaa6p-27f, 0.0f, 0.0f, 0.0f, 0x1.82b236p-60f, 0.0f, 0x1.8e84fcp-103f,
     0x1.59c344p-82f, 0.0f, 0x1.b62c42p-66f, 0x1.24267ep-5f, 0x1.2d3d08p-24f, 0.0f,
     0.0f, 0x1.307ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab5b9ap-84f, 0.0f,
     0x1.da48b8p-21f, 0.0f, 0x1.c61d0ep-43f, 0.0f, 0.0f, 0x1.586f4ap-74f,
     0x1.b4ddb6p-67f, 0x1.3334f4p-91f, 0.0f, 0x1.2e77dp-51f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.a284f2p-76f, 0x1.e67d9cp-124f, 0.0f, 0x1.8382c8p-100f, 0.0f,
     0x1.1c5402p-58f, 0x1.224cd6p-17f, 0.0f, 0x1.109d74p-14f, 0x1.fdf5b2p-11f,
     0x1.c74f6p-25f, 0x1.9c03a2p-39f, 0x1.27f61p-65f, 0x1.d4af9cp-92f,
     0x1.4775f6p-18f, 0x1.946bbap-51f, 0x1.4fae9ep-59f, 0x1.6fb85cp-104f, 0.0f,
     0x1.da4736p-126f, 0.0f, 0.0f, 0.0f, 0x1.f566fep-124f, 0x1.465a1p-80f, 0.0f, 0.0f,
     0x1.e34472p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40766ap-12f, 0.0f, 0.0f,
     0.0f, 0x1.6a7dc8p-45f, 0x1.98793p-34f, 0x1.8a5c5ep-18f, 0x1.568704p-35f,
     0x1.a09ae2p-61f, 0x1.430bfcp-96f, 0x1.1e7d4cp-9f, 0x1.e3dc9p-56f,
     0x1.e92fc8p-63f, 0x1.935372p-84f, 0.0f, 0.0f, 0.0f, 0x1.544c9ap-78f,
     0x1.7f9052p-56f, 0.0f, 0.0f, 0x1.6d1eb8p-16f, 0.0f, 0x1.5fdbdp-15f,
     0x1.68334p-68f, 0x1.d5a81p-84f, 0x1.6b5cf4p-52f, 0.0f, 0x1.d54b22p-83f, 0.0f,
     0x1.335ec2p-118f, 0.0f, 0.0f, 0x1.87539cp-121f, 0.0f, 0.0f, 0x1.a7e622p-37f,
     0x1.b00c8ep-14f, 0x1.ea4794p-72f, 0x1.32d73ap-24f, 0.0f, 0.0f, 0x1.e3972ap-108f,
     0x1.47b602p-53f, 0.0f, 0x1.24d6ecp-80f, 0.0f, 0x1.3aedbcp-58f, 0x1.2c442p-12f,
     0.0f, 0.0f, 0x1.33648cp-38f, 0.0f, 0x1.ea8e1ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.70c506p-39f, 0.0f, 0.0f, 0.0f, 0x1.2beec8p-112f, 0x1.134aaap-94f,
     0x1.4f3368p-68f, 0x1.83dfbp-38f, 0x1.33071p-101f, 0.0f, 0.0f, 0x1.f1db3p-86f,
     0.0f, 0x1.7ac922p-6f, 0.0f, 0.0f, 0.0f, 0x1.6ff884p-29f, 0.0f, 0.0f, 0.0f,
     0x1.48d50ep-39f, 0x1.5c5776p-80f, 0x1.86dbe2p-120f, 0x1.4c65ccp-42f, 0.0f, 0.0f,
     0.0f, 0x1.e3566cp-74f, 0x1.c8681ap-37f, 0x1.e4b328p-87f, 0.0f, 0x1.39bad2p-4f,
     0.0f, 0x1.30a9c4p-16f, 0x1.396f5ap-123f, 0x1.4c448ep-41f, 0x1p0f,
     0x1.7c86dcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b348cp-89f,
     0x1.b62904p-65f, 0.0f, 0x1.3fc992p-20f, 0x1.d61facp-37f, 0x1.244dd4p-10f, 0.0f,
     0.0f, 0x1.205e24p-115f, 0x1.b7958ep-18f, 0x1.aed8bap-35f, 0.0f, 0.0f, 0.0f,
     0x1.2d4222p-98f, 0x1.3eff36p-31f, 0x1.15689cp-78f, 0x1.818f6ap-30f, 0.0f,
     0x1.ec60e6p-14f, 0x1.ff643cp-22f, 0x1.5e223p-41f, 0x1.242c6ep-82f,
     0x1.d3650ap-78f, 0x1.8497ap-100f, 0.0f, 0x1.bc803ap-78f, 0x1.e15a1cp-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95ba32p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d82b3ap-83f, 0x1.6d3682p-119f, 0x1.5d8688p-29f, 0x1.b2620ap-63f, 0.0f, 0.0f,
     0x1.0264a4p-45f, 0x1.89661cp-119f, 0.0f, 0x1.63683cp-123f, 0.0f, 0.0f,
     0x1.232686p-53f, 0x1.5b3aa4p-51f, 0.0f, 0.0f, 0x1.d8855ap-73f, 0x1.98aeeep-22f,
     0.0f, 0.0f, 0x1.4ecbcep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5e7e6p-109f,
     0x1.604f78p-106f, 0x1.d1325cp-77f, 0x1.0724fap-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3a9f6p-94f, 0.0f, 0x1.e19e4cp-91f, 0x1.5016d4p-26f, 0.0f, 0.0f,
     0x1.880c16p-86f, 0x1.a04c7cp-31f, 0.0f, 0.0f, 0x1.fb3582p-32f, 0.0f, 0.0f, 0.0f,
     0x1.1c5ae6p-55f, 0x1.16c532p-126f, 0.0f, 0x1.f760f6p-100f, 0x1.2e30d8p-32f,
     0x1.04d4bp-112f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.2360fcp-62f, 0x1.ad839ap-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddb79cp-14f, 0.0f, 0x1.fb644ap-79f,
     0x1.c258dcp-95f, 0.0f, 0.0f, 0x1.cb548ap-74f, 0.0f, 0.0f, 0x1.c1228p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4817b4p-24f, 0x1.b79beep-80f, 0.0f, 0.0f, 0.0f,
     0x1.2e41bp-8f, 0x1.160726p-95f, 0.0f, 0x1.9b966ep-33f, 0x1.434634p-32f,
     0x1.d17ce4p-77f, 0x1.624da6p-40f, 0.0f, 0x1.eb4d52p-119f, 0x1.2c1442p-79f,
     0x1.95788p-22f, 0x1.1735dp-46f, 0.0f, 0x1.8e6ef2p-57f, 0x1.8c2452p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.12481ep-73f, 0.0f, 0x1.6e7a2ap-94f, 0x1.20e30ap-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1eea2p-35f, 0.0f, 0x1.70b5d8p-35f, 0.0f,
     0x1.5aa224p-53f, 0x1.991894p-76f, 0x1.d5a678p-97f, 0x1.6ed1cap-96f, 0.0f,
     0x1.46808cp-77f, 0.0f, 0.0f, 0x1.75eaa4p-34f, 0.0f, 0x1.67e4d2p-26f,
     0x1.5c8c2ap-89f, 0.0f, 0x1.f2e006p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59ebf6p-8f,
     0.0f, 0x1.65adacp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.920e1ep-38f, 0.0f, 0.0f,
     0.0f, 0x1.0e523cp-90f, 0.0f, 0x1.5e3fbap-90f, 0.0f, 0x1.3b223p-107f,
     0x1.5e0ec2p-85f, 0.0f, 0.0f, 0x1.8096cp-119f, 0x1.195968p-3f, 0.0f, 0.0f,
     0x1.7df3fep-107f, 0x1.19251ap-68f, 0x1.fb6e16p-57f, 0x1.ab53fp-70f, 0.0f,
     0x1.fe84p-64f, 0.0f, 0.0f, 0x1.203b76p-76f, 0.0f, 0.0f, 0x1.a184ccp-31f, 0.0f,
     0x1.300f2p-26f, 0x1.c1596ap-85f, 0.0f, 0x1.dc33c4p-78f, 0x1.36ebdep-112f, 0.0f,
     0.0f, 0x1.e00834p-104f, 0.0f, 0x1.997de4p-79f, 0.0f, 0.0f, 0.0f,
     0x1.449eb6p-111f, 0x1.f450acp-21f, 0.0f, 0x1.2e1118p-90f, 0x1.b6ebcp-101f,
     0x1.0584dep-57f, 0.0f, 0.0f, 0.0f, 0x1.d673f2p-36f, 0x1.3ffep-98f, 0.0f,
     0x1.51b738p-102f, 0.0f, 0.0f, 0.0f, 0x1.c1391cp-117f, 0x1.091a98p-38f,
     0x1.7a4752p-4f, 0x1.8824f8p-76f, 0x1.5d018ap-113f, 0x1.303084p-3f,
     0x1.be55bp-38f, 0.0f, 0.0f, 0x1.3d40e8p-66f, 0x1.ea1fcp-85f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a0d95cp-56f, 0.0f, 0.0f, 0x1.60926cp-38f, 0x1.81192ep-41f,
     0x1.9d2484p-94f, 0.0f, 0.0f, 0x1.6ace1ap-88f, 0x1.2239d2p-68f, 0x1.91374ap-25f,
     0x1.99b10ep-83f, 0.0f, 0x1.4afa24p-6f, 0x1.4537b4p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.97f4d6p-123f, 0x1.88009cp-7f, 0.0f, 0x1.f0c0bap-26f, 0x1.c8324ep-35f,
     0x1.ab2072p-100f, 0.0f, 0x1.cc998ep-47f, 0.0f, 0x1.6f3d62p-75f, 0x1.f2f51cp-117f,
     0.0f, 0x1.193418p-122f, 0x1.9b2da6p-65f, 0x1.84ae1ap-43f, 0.0f, 0x1.a8c70cp-60f,
     0x1.aca7b2p-48f, 0x1.ffd0fcp-32f, 0.0f, 0.0f, 0.0f, 0x1.7494acp-103f, 0.0f,
     0x1.7e303ap-70f, 0x1.b0ff18p-73f, 0x1.aef0d8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2672p-95f, 0.0f, 0.0f, 0.0f, 0x1.1b12eep-125f, 0.0f, 0.0f, 0.0f,
     0x1.a0839ep-86f, 0x1.346bdcp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f1138p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47520cp-107f, 0.0f,
     0x1.85383cp-122f, 0x1.d66c16p-105f, 0x1.22e806p-66f, 0x1.0fc694p-3f,
     0x1.4672eap-56f, 0.0f, 0x1.90f7d6p-38f, 0.0f, 0x1.de198ep-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ff3c8p-3f, 0.0f, 0x1.f60c8ep-82f, 0.0f, 0x1.20bb3ep-93f,
     0x1.70b968p-73f, 0x1.323e72p-74f, 0x1.ff9afap-48f, 0x1.976b44p-36f, 0.0f,
     0x1.83cca2p-34f, 0x1.5c07ep-67f, 0x1.66c64p-57f, 0x1.64eb86p-56f,
     0x1.fad074p-77f, 0x1.195b56p-59f, 0x1.e748c8p-83f, 0x1.e410e8p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fdb0ccp-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a1b8ep-64f, 0x1.c858fp-4f, 0.0f, 0x1.82dedcp-11f, 0x1.e74678p-77f, 0.0f,
     0x1.8785dp-86f, 0.0f, 0.0f, 0x1.c67bc8p-21f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_acosf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_acosf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_acosf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
