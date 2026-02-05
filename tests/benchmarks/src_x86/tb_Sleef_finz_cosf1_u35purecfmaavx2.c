/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf1_u35purecfma.c --function \
 *     Sleef_finz_cosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.a7b91ap-32f, 0.0f, 0.0f, 0.0f, 0x1.f39f7ep-58f, 0x1.8c709ap-62f,
     0x1.ff0b58p-83f, 0x1.7a5104p-7f, 0.0f, 0x1.970f14p-65f, 0x1.1f1472p-17f,
     0x1.5001cp-39f, 0x1.08f2bp-72f, 0x1.f494acp-94f, 0.0f, 0x1.c9c77ap-120f, 0.0f,
     0x1.f104ccp-48f, 0x1.79c1c8p-123f, 0x1p0f, 0x1.b4888ap-66f, 0x1.0e1d4ep-123f,
     0.0f, 0x1.f2eef2p-96f, 0x1.f51118p-121f, 0x1.f72fbep-89f, 0x1.df5c8p-22f, 0.0f,
     0x1.8e9404p-20f, 0.0f, 0x1.b9e1c8p-28f, 0x1.2601b4p-109f, 0x1.b3f452p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f72a6p-74f, 0.0f, 0.0f, 0x1.6da39ap-32f,
     0x1.4a52dep-37f, 0.0f, 0x1.3e2c34p-11f, 0x1.bfc0b8p-31f, 0x1.f71678p-10f,
     0x1.c4e984p-75f, 0.0f, 0.0f, 0x1.518064p-21f, 0x1.8fe408p-72f, 0.0f, 0.0f,
     0x1.bb749cp-47f, 0.0f, 0.0f, 0.0f, 0x1.9937b4p-92f, 0x1.836ac8p-124f,
     0x1.78c2ap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bda96p-64f, 0x1.876c6ep-120f, 0.0f,
     0.0f, 0x1.7c3a38p-95f, 0.0f, 0x1.f814a4p-80f, 0.0f, 0x1.2fdb5p-114f,
     0x1.ce5ac6p-73f, 0.0f, 0x1.02f348p-99f, 0x1.109888p-48f, 0.0f, 0.0f,
     0x1.3153e8p-103f, 0.0f, 0.0f, 0x1.63c228p-55f, 0x1.985b66p-50f, 0x1.7683dap-83f,
     0.0f, 0.0f, 0x1.04852p-49f, 0.0f, 0x1.1da0dap-49f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.440daap-54f, 0x1.df8c22p-43f, 0.0f, 0.0f, 0.0f, 0x1.3d095p-21f,
     0x1.a9736ap-14f, 0x1.02547cp-9f, 0.0f, 0.0f, 0x1.af7776p-102f, 0x1.503af6p-54f,
     0.0f, 0x1.88beb8p-98f, 0.0f, 0.0f, 0x1.a5b53ap-116f, 0x1.bec686p-81f,
     0x1.31d28p-77f, 0x1.7926a2p-84f, 0.0f, 0.0f, 0x1.2817e2p-50f, 0.0f,
     0x1.f5c41ep-99f, 0.0f, 0x1.7e805p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5246ep-9f,
     0x1.dad554p-124f, 0x1.143ca8p-103f, 0x1.e7afc4p-107f, 0.0f, 0x1.e1384ep-67f,
     0x1.027a7ep-55f, 0x1.95f572p-1f, 0.0f, 0.0f, 0x1.adc2ecp-73f, 0x1.a7cae8p-8f,
     0x1.108b74p-124f, 0.0f, 0x1.2befdep-96f, 0.0f, 0.0f, 0.0f, 0x1.96089ep-55f, 0.0f,
     0x1.661c1ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.875486p-49f, 0.0f,
     0x1.8803cap-50f, 0.0f, 0.0f, 0x1.774108p-63f, 0.0f, 0x1.fd8374p-10f, 0.0f,
     0x1.83cc5ep-115f, 0x1.b7f234p-92f, 0x1.21dc36p-27f, 0x1.4ccacap-84f, 0.0f,
     0x1.d814c2p-16f, 0.0f, 0.0f, 0x1.b385fp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39984ep-124f, 0x1p0f, 0x1.80308cp-78f, 0x1.d06182p-21f, 0x1.0bee76p-113f,
     0.0f, 0x1.333292p-40f, 0x1.a6722ep-36f, 0.0f, 0.0f, 0.0f, 0x1.28de7p-121f, 0.0f,
     0x1.32a89cp-63f, 0.0f, 0x1.ec57ecp-93f, 0.0f, 0x1.ac76dep-21f, 0.0f, 0.0f,
     0x1.329346p-11f, 0x1.29a94p-12f, 0x1.e51ad4p-28f, 0x1.289e68p-109f,
     0x1.b5b5cep-114f, 0.0f, 0x1.2b761ep-73f, 0.0f, 0x1.bcf7d4p-31f, 0.0f, 0.0f,
     0x1.d602a8p-102f, 0x1.07982p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.460ec4p-58f,
     0x1.08b538p-100f, 0.0f, 0x1.8e1072p-7f, 0.0f, 0x1.7e652p-90f, 0.0f, 0.0f, 0.0f,
     0x1.6a7de6p-27f, 0x1.942f36p-107f, 0x1.d86732p-123f, 0x1.fe7e7p-94f,
     0x1.ac304cp-100f, 0.0f, 0x1.47caacp-82f, 0x1.57dd1ep-93f, 0x1.3598c6p-107f, 0.0f,
     0x1.26ef6p-14f, 0.0f, 0.0f, 0x1.3e1facp-118f, 0x1.f3f108p-47f, 0.0f,
     0x1.c5c204p-1f, 0.0f, 0x1.f63bc6p-65f, 0x1.14c03p-101f, 0.0f, 0x1.abcb84p-50f,
     0x1.ea82f6p-19f, 0x1.2bc2aep-32f, 0x1.66842p-39f, 0.0f, 0x1.3a254ap-8f, 0.0f,
     0x1.5651ap-113f, 0.0f, 0x1.0ff7f6p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc630cp-17f,
     0.0f, 0x1.108c3ap-49f, 0.0f, 0x1.eed5a2p-30f, 0x1.6dcb8ap-69f, 0x1.8c0ad8p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f31ccp-62f, 0.0f, 0x1.194222p-101f, 0.0f,
     0.0f, 0x1.3f7158p-22f, 0.0f, 0x1.7a2e18p-90f, 0.0f, 0.0f, 0x1.3fd5ccp-48f, 0.0f,
     0.0f, 0x1.1ddbd6p-49f, 0.0f, 0x1.d4adf2p-32f, 0x1.135de4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.2e0b04p-45f, 0x1.8ca0eap-126f, 0x1.a2a0e2p-56f, 0.0f, 0x1.4fb6e6p-53f,
     0x1.e0a316p-49f, 0x1.985284p-19f, 0x1.cd271p-53f, 0.0f, 0.0f, 0x1.aabe2cp-43f,
     0x1.cba492p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2215ep-87f,
     0x1.9dad0cp-27f, 0x1.0dca3ap-42f, 0x1.de976ep-78f, 0x1.e9d81cp-116f,
     0x1.a4e01ap-71f, 0x1.03af14p-11f, 0.0f, 0.0f, 0.0f, 0x1.b1edb6p-39f, 0.0f, 0.0f,
     0x1.004bd2p-58f, 0.0f, 0.0f, 0x1.3032c8p-124f, 0.0f, 0x1.bb439cp-49f,
     0x1.1c7426p-74f, 0.0f, 0x1.602d6ap-40f, 0.0f, 0x1.320822p-34f, 0.0f, 0.0f,
     0x1.042dfp-16f, 0x1.21a33ap-15f, 0x1.8b0f82p-76f, 0.0f, 0.0f, 0x1.5d6728p-50f,
     0x1.fa3738p-51f, 0.0f, 0x1.2dc47ap-88f, 0.0f, 0x1.5e96e8p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.067ceap-48f, 0.0f, 0.0f, 0.0f, 0x1.8a3aa8p-86f, 0x1.7368d8p-13f, 0.0f,
     0x1.8e787ap-63f, 0x1.07c378p-3f, 0.0f, 0.0f, 0x1.393578p-78f, 0.0f, 0.0f, 0.0f,
     0x1.359b9ep-94f, 0.0f, 0.0f, 0x1.416932p-85f, 0x1.791c34p-42f, 0.0f,
     0x1.a60dep-21f, 0.0f, 0x1.0019c6p-117f, 0x1.eeaba8p-76f, 0x1.fbe58ap-119f, 0.0f,
     0x1.4410f2p-88f, 0.0f, 0x1.247446p-13f, 0x1.69ccb4p-71f, 0.0f, 0x1.61fa56p-119f,
     0x1.801e18p-107f, 0x1.ec7cecp-27f, 0.0f, 0x1.04f6ep-11f, 0.0f, 0x1.b8087ep-125f,
     0.0f, 0.0f, 0x1.0fb63ep-53f, 0.0f, 0.0f, 0x1.e22532p-30f, 0.0f, 0.0f,
     0x1.6c5276p-121f, 0x1.7282a4p-103f, 0x1.f84a0cp-81f, 0.0f, 0.0f, 0x1.945856p-54f,
     0x1.4efbf8p-126f, 0.0f, 0x1.5d07b6p-49f, 0.0f, 0.0f, 0x1.62ac26p-124f,
     0x1.9fbdap-2f, 0.0f, 0x1.1abc26p-114f, 0x1.5d752p-85f, 0x1.d9d7bcp-108f, 0.0f,
     0x1.107cc4p-35f, 0.0f, 0.0f, 0.0f, 0x1.77da4ep-75f, 0x1.f330a8p-91f,
     0x1.0675b2p-93f, 0x1.2c33dep-10f, 0.0f, 0.0f, 0.0f, 0x1.f892aap-18f, 0.0f,
     0x1.d0cd7ep-30f, 0.0f, 0x1.d3cfep-32f, 0.0f, 0x1.6b6f04p-94f, 0.0f,
     0x1.64102cp-32f, 0x1.53d81ap-59f, 0.0f, 0.0f, 0x1.8c3c44p-100f, 0x1.da0534p-31f,
     0.0f, 0.0f, 0x1.fec368p-53f, 0x1.e81d3ap-109f, 0.0f, 0x1.808b7p-123f, 0.0f,
     0x1.0fa1c2p-121f, 0.0f, 0.0f, 0x1.452116p-92f, 0x1.64ca4ep-70f, 0.0f,
     0x1.3d05aep-47f, 0x1.0d754p-123f, 0x1.14d794p-102f, 0.0f, 0.0f, 0.0f,
     0x1.ee817p-118f, 0x1.7787aap-83f, 0.0f, 0.0f, 0x1.af187ep-62f, 0x1.d39a44p-7f,
     0.0f, 0.0f, 0.0f, 0x1.8cd292p-83f, 0x1.6ae2c2p-7f, 0.0f, 0.0f, 0x1.857938p-91f,
     0x1.a56c82p-8f, 0x1.ac6f28p-27f, 0x1.e25e26p-74f, 0x1.856a9ap-72f,
     0x1.62da5p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.7b8528p-56f,
     0.0f, 0x1.37dd32p-11f, 0x1.e83e3cp-59f, 0.0f, 0.0f, 0x1.0dceb8p-36f, 0.0f, 0.0f,
     0x1.023bf6p-43f, 0x1.c1f1bp-5f, 0x1.690d78p-120f, 0.0f, 0.0f, 0.0f,
     0x1.4018ecp-100f, 0.0f, 0.0f, 0.0f, 0x1.b138acp-19f, 0x1.987308p-70f,
     0x1.08e6b2p-109f, 0.0f, 0.0f, 0x1.2da0cp-42f, 0.0f, 0x1.7ab604p-112f,
     0x1.ec50ccp-40f, 0x1.ae510ep-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2195a8p-4f, 0x1.a7d9acp-41f, 0x1.feba26p-81f, 0x1.2ddce4p-101f,
     0x1.4656f4p-91f, 0x1.d6e2dep-95f, 0.0f, 0.0f, 0x1.043148p-97f, 0x1.ca7bp-81f,
     0.0f, 0x1.fcce7ap-16f, 0x1.af79c6p-35f, 0.0f, 0.0f, 0.0f, 0x1.980ec6p-85f, 0.0f,
     0.0f, 0x1.fcb0eap-81f, 0x1.1078a2p-26f, 0x1.37c5d6p-5f, 0x1.3ae568p-23f, 0.0f,
     0.0f, 0x1.78dd6ep-107f, 0x1.8666fp-36f, 0.0f, 0.0f, 0x1.8dfb26p-84f,
     0x1.b133fp-20f, 0x1.56b294p-85f, 0.0f, 0x1.5ade28p-2f, 0x1.a1fe38p-102f,
     0x1.400338p-68f, 0x1.a576d8p-91f, 0.0f, 0.0f, 0.0f, 0x1.82b956p-96f,
     0x1.9f2e4ap-16f, 0.0f, 0.0f, 0x1.35754p-123f, 0x1.d30d1ap-11f, 0x1.cf12p-125f,
     0.0f, 0x1.20e2b6p-36f, 0x1.76c36ep-26f, 0x1.f3579cp-100f, 0x1.d68e58p-68f,
     0x1.cc50a8p-38f, 0.0f, 0.0f, 0.0f, 0x1.1b3486p-43f, 0.0f, 0.0f, 0x1.a96556p-13f,
     0x1.eeb0cap-84f, 0x1.cbdedep-17f, 0x1.ad8f6cp-69f, 0.0f, 0x1.d23bd8p-57f,
     0x1.af1f46p-85f, 0x1.8eab3ap-32f, 0.0f, 0x1.e3ed5p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d66272p-100f, 0x1.a9e62ep-68f, 0.0f, 0.0f, 0.0f,
     0x1.ca2484p-31f, 0.0f, 0.0f, 0.0f, 0x1.a2adep-47f, 0.0f, 0x1.40221ep-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.58fa46p-14f, 0x1.8ebb8cp-8f, 0x1.1a6be6p-56f, 0.0f,
     0x1.76a7e8p-9f, 0.0f, 0.0f, 0x1.253b3ap-1f, 0.0f, 0x1.8d493cp-84f,
     0x1.ae16acp-68f, 0.0f, 0x1p0f, 0.0f, 0x1.99ab3p-57f, 0x1.71be9p-126f, 0.0f, 0.0f,
     0.0f, 0x1.ff226p-103f, 0x1.3b9d26p-101f, 0.0f, 0.0f, 0x1.76ffd8p-99f, 0.0f, 0.0f,
     0x1.606c48p-109f, 0x1.5b6b92p-70f, 0x1.4e17d6p-119f, 0.0f, 0.0f, 0.0f,
     0x1.c66c94p-11f, 0.0f, 0.0f, 0x1.ab12f8p-46f, 0x1.4de8aep-122f, 0x1.76ad7ep-93f,
     0x1.da7faep-116f, 0.0f, 0x1.5edb6ap-38f, 0x1.f67232p-40f, 0.0f, 0x1.76db1p-54f,
     0.0f, 0.0f, 0x1.6f669ap-78f, 0x1.d85032p-103f, 0x1.f0cb1p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.56951p-54f, 0.0f, 0x1.281af2p-42f, 0.0f, 0x1.49c1cep-111f,
     0x1.14061p-91f, 0x1.e2c658p-108f, 0x1.0e92c6p-47f, 0x1.cb0e64p-121f, 0.0f, 0.0f,
     0x1.70f6a8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.462534p-120f, 0x1.178dbp-118f, 0.0f,
     0x1.90d31p-89f, 0.0f, 0x1.33e85ep-36f, 0.0f, 0.0f, 0x1.8e3d2ep-3f,
     0x1.8d660ap-6f, 0x1.1beaa6p-71f, 0.0f, 0.0f, 0.0f, 0x1.f3bd8ep-85f,
     0x1.2f0f38p-38f, 0x1.b3cebep-114f, 0x1.18256cp-45f, 0x1.39d844p-110f,
     0x1.d88f42p-58f, 0.0f, 0.0f, 0x1.4919fep-3f, 0.0f, 0.0f, 0x1.93e3aep-94f, 0.0f,
     0x1.7c308ep-30f, 0x1.5259a8p-45f, 0.0f, 0x1.35226ep-124f, 0.0f, 0.0f, 0x1p0f,
     0x1.b234e6p-58f, 0x1.80529cp-126f, 0.0f, 0x1.33a4f8p-89f, 0.0f, 0.0f,
     0x1.648e1cp-69f, 0x1.16894cp-41f, 0x1.dae478p-91f, 0.0f, 0.0f, 0.0f,
     0x1.1f65cap-32f, 0x1.f04bep-14f, 0.0f, 0x1.03d63cp-44f, 0.0f, 0.0f,
     0x1.f9f44ap-15f, 0x1.45facp-101f, 0.0f, 0x1.757382p-31f, 0x1.3d6c82p-119f,
     0x1.f43882p-66f, 0x1.bb8e92p-99f, 0x1.8f556ep-93f, 0x1.cdc286p-112f, 0.0f, 0.0f,
     0x1.1238bap-55f, 0.0f, 0.0f, 0x1.89c5b2p-40f, 0.0f, 0x1.25b832p-15f,
     0x1.5b8914p-5f, 0x1.ea0d02p-113f, 0x1.f2a5f8p-63f, 0x1.21d52ap-39f, 0.0f, 0.0f,
     0x1.4db5acp-103f, 0.0f, 0.0f, 0.0f, 0x1.39caccp-95f, 0x1.a383fap-9f,
     0x1.28f376p-48f, 0.0f, 0.0f, 0x1.0ca344p-58f, 0x1.58c03p-93f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.d77e5ep-103f, 0x1.bef35p-66f, 0x1.c9f35cp-124f, 0.0f, 0.0f,
     0x1.4d0b9p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12d894p-113f, 0.0f, 0.0f,
     0x1.135ee6p-64f, 0x1.af71a2p-85f, 0.0f, 0.0f, 0x1.ff0ea4p-66f, 0.0f, 0.0f,
     0x1.cb7c8ep-100f, 0x1.b94952p-14f, 0x1.ec172ep-19f, 0x1.36abdep-124f,
     0x1.fee5a6p-6f, 0.0f, 0x1.bc6252p-42f, 0x1.f51794p-34f, 0x1.c0e4eap-100f,
     0x1.0e9176p-95f, 0.0f, 0x1.34ba02p-100f, 0.0f, 0.0f, 0x1.c39092p-11f,
     0x1.89a73ep-126f, 0x1.f8e0ccp-62f, 0.0f, 0x1.989b2ap-6f, 0x1.b5507cp-86f, 0.0f,
     0x1.667448p-23f, 0x1.e4b5f8p-25f, 0x1.1ca28ap-118f, 0.0f, 0.0f, 0x1.212c26p-110f,
     0.0f, 0x1.c60efep-34f, 0.0f, 0x1.b47996p-22f, 0.0f, 0.0f, 0.0f, 0x1.939458p-10f,
     0x1.aacf92p-74f, 0.0f, 0.0f, 0.0f, 0x1.b3853cp-42f, 0x1.e7ecb2p-69f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c8955ap-48f, 0.0f, 0x1.473154p-76f, 0x1.a8100cp-8f,
     0x1.38ee4ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8ef5p-102f, 0x1.8f686ep-23f, 0.0f,
     0.0f, 0.0f, 0x1.267992p-73f, 0.0f, 0x1.4aea3ep-56f, 0x1.015f96p-119f, 0.0f, 0.0f,
     0x1.2065e6p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afc2fap-40f, 0.0f,
     0x1.8c7e52p-114f, 0x1.3a96b6p-78f, 0x1.8b957ep-61f, 0.0f, 0x1.8c5a0ep-104f, 0.0f,
     0.0f, 0x1.d246c6p-53f, 0.0f, 0.0f, 0x1.2eedd8p-42f, 0.0f, 0x1.c333ecp-34f,
     0x1.699cd8p-2f, 0.0f, 0.0f, 0.0f, 0x1.681fb4p-78f, 0.0f, 0x1.45e2ap-28f, 0.0f,
     0x1.809b9ep-94f, 0x1.c151e8p-90f, 0x1.4ef222p-116f, 0.0f, 0x1.0780fcp-30f,
     0x1.9a2f94p-52f, 0x1.cf333ep-30f, 0x1.c20cfap-13f, 0x1.731db8p-75f,
     0x1.a00c9cp-6f, 0x1.755c22p-77f, 0x1.7133dp-114f, 0.0f, 0.0f, 0.0f,
     0x1.5e0096p-1f, 0x1.b37136p-70f, 0x1.5a85f8p-121f, 0x1.3b07d2p-11f,
     0x1.4c12ecp-19f, 0.0f, 0x1.2d29e4p-117f, 0x1.2e2fbep-103f, 0x1.849f1ap-53f, 0.0f,
     0.0f, 0x1.64cc6ep-101f, 0x1.8eac72p-70f, 0x1.2dc7b4p-33f, 0x1.c6b42ep-105f,
     0x1.9f361ep-87f, 0x1.59f884p-52f, 0.0f, 0.0f, 0.0f, 0x1.2ec18p-49f,
     0x1.26ee2ap-98f, 0.0f, 0.0f, 0x1.58bb2p-99f, 0.0f, 0x1.6ec988p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cc3764p-40f, 0x1.36d10cp-62f, 0.0f, 0x1.bafad6p-27f,
     0x1.e126fep-52f, 0.0f, 0.0f, 0x1.56eb98p-79f, 0.0f, 0.0f, 0x1.dbd99ap-38f, 0.0f,
     0.0f, 0x1.77924cp-32f, 0x1.1ed774p-20f, 0x1.3af076p-53f, 0.0f, 0.0f,
     0x1.5b5538p-111f, 0.0f, 0.0f, 0.0f, 0x1.b2e11cp-100f, 0.0f, 0.0f,
     0x1.eb05bep-118f, 0x1.52111p-2f, 0.0f, 0.0f, 0x1.b2b8a6p-112f, 0.0f,
     0x1.4f0c7ep-9f, 0x1.adf912p-44f, 0x1.668c0ap-70f, 0x1p0f, 0x1.e1ee6cp-37f, 0.0f,
     0x1.81708ep-19f, 0.0f, 0x1.3fded6p-36f, 0x1.19d55cp-40f, 0x1.649ceap-101f,
     0x1.8a8cdp-55f, 0x1.b583fap-119f, 0.0f, 0.0f, 0x1.03722cp-60f, 0x1.d69d84p-1f,
     0x1.0accd2p-17f, 0.0f, 0.0f, 0x1.2ef956p-28f, 0.0f, 0.0f, 0x1.812056p-57f, 0.0f,
     0x1.df5dbcp-71f, 0x1.b6f85cp-39f, 0.0f, 0x1.75ba12p-108f, 0x1.b73e42p-53f,
     0x1.43302ep-13f, 0x1.2088f8p-111f
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
            tmp1 = Sleef_finz_cosf1_u35purecfma(tmp0);
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
    printf("Sleef_finz_cosf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosf1_u35purecfma bench acc %a\n", global_bench_acc);
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
