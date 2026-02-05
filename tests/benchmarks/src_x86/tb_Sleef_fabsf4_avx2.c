/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsf4_avx2128.c --function Sleef_fabsf4_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.848a8p-119f, 0.0f, 0.0f, 0.0f, 0x1.a0eaa4p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ebaba6p-117f, 0x1.0d62cap-115f, 0x1.1a091p-115f, 0x1.a382p-36f,
     0x1.de599ep-26f, 0.0f, 0x1.32bd86p-25f, 0x1.ae9188p-19f, 0.0f, 0.0f,
     0x1.de9f3ap-125f, 0.0f, 0x1.3c3092p-67f, 0x1.cfcfbp-99f, 0.0f, 0x1.9b15f8p-75f,
     0.0f, 0.0f, 0x1.b3eadcp-83f, 0x1.7a46p-114f, 0.0f, 0x1.c411c6p-9f,
     0x1.651b98p-60f, 0.0f, 0.0f, 0.0f, 0x1.4c2c1p-105f, 0.0f, 0x1.e110aep-66f,
     0x1.e8b1f4p-81f, 0x1.222ff2p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d6dd4p-12f,
     0x1.009f18p-83f, 0x1.e03c32p-76f, 0.0f, 0.0f, 0x1.843f38p-98f, 0.0f,
     0x1.2042cap-67f, 0.0f, 0x1.2214cep-26f, 0x1.341d58p-36f, 0x1.5b12bcp-109f,
     0x1.dddedcp-55f, 0.0f, 0x1.c2d268p-56f, 0x1.f27e68p-56f, 0x1.84868cp-112f,
     0x1.4d7b5ep-42f, 0.0f, 0.0f, 0x1.a9fcdap-29f, 0x1.2cf21ep-96f, 0x1.9d2a76p-18f,
     0x1.fe911cp-113f, 0.0f, 0.0f, 0x1.18a94ep-32f, 0x1.2745d6p-8f, 0.0f, 0.0f,
     0x1.cd19c4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e2142p-56f, 0.0f, 0x1.5b5bbp-50f,
     0x1.fe2b4p-110f, 0.0f, 0x1.ab490cp-65f, 0.0f, 0x1.8edeccp-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eb4ec4p-57f, 0.0f, 0x1.cb5a4p-2f, 0x1.574894p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.542eaap-108f, 0x1.0d83bap-105f,
     0x1.5be602p-79f, 0.0f, 0x1.e9e214p-115f, 0.0f, 0x1.0bf3aap-52f, 0.0f,
     0x1.25a3dep-3f, 0.0f, 0x1.fc7aep-116f, 0x1.49530cp-73f, 0x1.585254p-66f,
     0x1.1116c4p-78f, 0x1.1f4708p-16f, 0.0f, 0.0f, 0.0f, 0x1.f0381cp-24f, 0.0f,
     0x1.7b338ep-77f, 0.0f, 0x1.df26ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85d47ap-77f, 0x1.e644a6p-59f, 0x1.706b9ep-93f, 0x1.464282p-74f, 0.0f,
     0x1.89a412p-55f, 0.0f, 0.0f, 0x1.9eb018p-108f, 0x1.b16646p-76f, 0.0f, 0.0f,
     0x1.7ea54ep-94f, 0.0f, 0x1.712adep-19f, 0.0f, 0x1.992458p-5f, 0.0f,
     0x1.643dp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.759cep-20f, 0.0f, 0x1.ce1996p-20f,
     0x1.2cdad4p-29f, 0x1.0ffb88p-89f, 0x1.a94feep-125f, 0.0f, 0x1.1ceeeap-28f, 0.0f,
     0.0f, 0x1.07db52p-49f, 0.0f, 0.0f, 0x1.96ebfap-26f, 0x1.933f7cp-37f,
     0x1.ee64cap-107f, 0x1.a968fcp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1217p-63f,
     0.0f, 0x1.753796p-84f, 0x1.a21eep-112f, 0x1.e1d0aap-126f, 0.0f, 0.0f,
     0x1.b773b8p-36f, 0.0f, 0x1.b90286p-64f, 0x1.7d0f24p-10f, 0.0f, 0x1.f447e6p-25f,
     0x1.361952p-55f, 0.0f, 0x1.2791e8p-61f, 0.0f, 0.0f, 0x1.888a2ap-23f,
     0x1.ca2954p-77f, 0.0f, 0x1.254feap-11f, 0.0f, 0.0f, 0x1.2ab472p-59f,
     0x1.0d38dep-64f, 0.0f, 0x1.f8ec78p-30f, 0x1.f7bd7p-125f, 0x1.cdd8aep-69f, 0.0f,
     0x1.32e63ep-81f, 0x1.8afdd4p-67f, 0x1.9de0a2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b411c8p-29f, 0x1.527eeep-73f, 0x1.5f6276p-18f, 0.0f, 0x1.282c96p-79f,
     0x1.14d41ep-59f, 0.0f, 0x1.819a8ap-44f, 0x1.c8c938p-81f, 0.0f, 0.0f,
     0x1.0c6494p-62f, 0.0f, 0x1.6e5808p-117f, 0.0f, 0x1.ce16cep-77f, 0x1.64c17cp-115f,
     0x1.7b817ap-86f, 0x1.4de38cp-123f, 0.0f, 0x1.1dd1fap-13f, 0x1.817f58p-12f,
     0x1.ef056cp-48f, 0.0f, 0.0f, 0x1.1442e8p-71f, 0x1.e64144p-62f, 0.0f,
     0x1.0f4538p-27f, 0x1.89fa62p-8f, 0x1.3e9e9ep-45f, 0x1.8b7046p-52f, 0.0f, 0.0f,
     0x1.a2df82p-86f, 0x1.6b251ap-95f, 0.0f, 0.0f, 0.0f, 0x1.863546p-18f, 0.0f, 0.0f,
     0x1.11c808p-95f, 0x1.ab543cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.793464p-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.17eb4p-48f, 0x1.be0c5ap-112f, 0.0f, 0x1.8ba804p-44f,
     0x1.d9ad62p-12f, 0x1.d3653p-30f, 0.0f, 0x1.ed85b4p-19f, 0.0f, 0x1.d1c882p-79f,
     0.0f, 0.0f, 0x1.418598p-79f, 0x1.e91832p-8f, 0x1.58541ep-43f, 0.0f,
     0x1.7c071ep-53f, 0x1.622c22p-70f, 0.0f, 0x1.6a1ee8p-53f, 0x1.ccafc6p-97f,
     0x1.fb2e12p-68f, 0.0f, 0.0f, 0x1.9d8a4ep-14f, 0.0f, 0x1.ee45dap-68f, 0.0f,
     0x1.718fep-38f, 0.0f, 0.0f, 0.0f, 0x1.01e858p-16f, 0.0f, 0x1.061646p-69f, 0.0f,
     0.0f, 0x1.cb41b4p-89f, 0x1.55dc2p-71f, 0x1.16053p-68f, 0.0f, 0x1.92acap-31f,
     0x1.32a738p-32f, 0x1.74e9aap-107f, 0.0f, 0x1.ccffdep-24f, 0.0f, 0x1.18f36p-126f,
     0x1p0f, 0.0f, 0x1.c285ccp-89f, 0.0f, 0.0f, 0x1.f9dd6ap-125f, 0x1.5f43d6p-50f,
     0x1.0548dep-84f, 0x1.9fcf5ep-62f, 0.0f, 0.0f, 0x1.70c6b4p-42f, 0x1.8c1b94p-68f,
     0.0f, 0x1.16904cp-7f, 0.0f, 0.0f, 0x1.6e5722p-9f, 0.0f, 0x1.944f36p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.15a864p-28f, 0x1.67f0eap-44f, 0.0f, 0.0f, 0x1.6c074cp-68f,
     0x1.9e5ee6p-35f, 0.0f, 0x1.bd86e8p-67f, 0.0f, 0.0f, 0.0f, 0x1.b35742p-66f, 0.0f,
     0.0f, 0x1.db59a4p-38f, 0.0f, 0x1.ac56d4p-60f, 0x1.ec3a2p-40f, 0x1.41c14p-26f,
     0.0f, 0x1.90f316p-43f, 0.0f, 0x1.15200cp-3f, 0x1.03204p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.80371p-24f, 0.0f, 0x1.feed1cp-77f, 0.0f, 0.0f, 0.0f,
     0x1.d32a3ep-54f, 0.0f, 0x1.d7b97cp-89f, 0.0f, 0.0f, 0x1.b62276p-124f,
     0x1.4c084ep-105f, 0.0f, 0.0f, 0.0f, 0x1.032dc4p-29f, 0x1.84834ap-61f, 0.0f,
     0x1.54e78ap-121f, 0.0f, 0.0f, 0x1.58a9b4p-118f, 0x1.345c2ep-79f, 0.0f,
     0x1.707bd4p-14f, 0.0f, 0x1.289e58p-78f, 0x1.eef57cp-126f, 0.0f, 0x1.bd930ep-119f,
     0.0f, 0x1.f1bd1cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e18e3p-95f, 0x1.a753eap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b07e12p-116f,
     0x1.9f9418p-26f, 0x1.a07e2ap-91f, 0x1.935db2p-29f, 0x1.c01f5ep-120f, 0.0f,
     0x1.3815ecp-126f, 0.0f, 0x1.b722fcp-116f, 0.0f, 0.0f, 0.0f, 0x1.5e0e9ap-41f,
     0.0f, 0.0f, 0x1.300246p-115f, 0x1.f7962cp-111f, 0.0f, 0x1.ae5d52p-70f, 0.0f,
     0.0f, 0x1.181c8p-3f, 0x1.07fefep-9f, 0.0f, 0.0f, 0x1.1380acp-98f,
     0x1.60d784p-30f, 0.0f, 0x1.c7edd2p-5f, 0x1.8eb838p-37f, 0x1.a4c53ep-68f,
     0x1.9c5d52p-27f, 0x1.fbe9c4p-22f, 0.0f, 0x1.ad399ap-91f, 0.0f, 0x1.57c49cp-27f,
     0x1.cb889ap-58f, 0x1.4b5be2p-28f, 0.0f, 0x1.7aea8cp-33f, 0.0f, 0.0f,
     0x1.6937c4p-120f, 0.0f, 0x1.57dcdap-118f, 0.0f, 0.0f, 0.0f, 0x1.3b4a2ap-68f,
     0.0f, 0.0f, 0x1.44b09ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.adfc5ep-68f, 0.0f,
     0x1.72cd98p-46f, 0x1.7e1894p-24f, 0.0f, 0x1.26782cp-57f, 0.0f, 0x1.8187a4p-92f,
     0x1.563d04p-22f, 0x1.c7bc9p-27f, 0.0f, 0.0f, 0.0f, 0x1.d4e92cp-83f,
     0x1.fe65aep-15f, 0x1.7e93bp-113f, 0.0f, 0.0f, 0x1.4ec4e6p-111f, 0.0f, 0.0f,
     0x1.c31cep-12f, 0x1.6b65dcp-100f, 0.0f, 0x1.a1b104p-45f, 0.0f, 0x1.dce3a2p-16f,
     0x1.1f44a6p-23f, 0x1.a1442p-18f, 0.0f, 0x1.5331a8p-2f, 0.0f, 0.0f,
     0x1.5cf96cp-38f, 0x1.ca3fe8p-73f, 0x1.3bebacp-53f, 0.0f, 0x1.7896fep-13f,
     0x1.e71754p-109f, 0x1.562e0cp-51f, 0.0f, 0.0f, 0x1.52cbcap-47f, 0.0f,
     0x1.06f55cp-10f, 0.0f, 0x1.b1c7bap-96f, 0x1.35cbap-105f, 0.0f, 0.0f,
     0x1.91557p-47f, 0.0f, 0.0f, 0.0f, 0x1.d055c8p-8f, 0x1.24692cp-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ef326p-107f, 0.0f,
     0x1.f2d04p-43f, 0x1.d86106p-93f, 0x1.9dd1d6p-35f, 0x1.9a8df8p-83f,
     0x1.d2515ep-89f, 0x1.2365cap-34f, 0.0f, 0x1.6168b8p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d159aap-10f, 0x1.cd1c1ap-79f, 0x1.ebf7a4p-23f, 0.0f, 0x1.047192p-28f, 0.0f,
     0x1.6251bap-16f, 0x1.4ff4f2p-28f, 0x1.153ebcp-77f, 0.0f, 0.0f, 0x1.409948p-108f,
     0x1.272cb8p-32f, 0.0f, 0.0f, 0x1.bc7b98p-9f, 0.0f, 0.0f, 0x1.7fa64p-99f,
     0x1.3a82ep-107f, 0x1.738e9ep-122f, 0x1.85d616p-79f, 0x1.a6ef2ep-18f, 0.0f,
     0x1.78820ep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38e0fcp-29f, 0x1.67251ep-66f,
     0x1.a5eabp-17f, 0x1.3e0d7p-6f, 0.0f, 0x1.163ecp-83f, 0.0f, 0x1.a672aap-93f, 0.0f,
     0x1.c60bc2p-75f, 0x1.43e51p-23f, 0x1.f75084p-8f, 0x1.465d4p-111f, 0.0f,
     0x1.9e0748p-104f, 0.0f, 0x1.40a34p-5f, 0.0f, 0.0f, 0x1.bda8p-9f, 0x1.92932p-24f,
     0.0f, 0.0f, 0x1.c29c2ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a70eep-110f, 0x1.01578ap-57f, 0x1.a3bf0ep-69f, 0x1.be21fep-14f,
     0x1.e88eb2p-69f, 0x1.eb6bf2p-53f, 0.0f, 0.0f, 0x1.9ee142p-55f, 0x1.b88538p-5f,
     0.0f, 0.0f, 0.0f, 0x1.698f9p-15f, 0.0f, 0x1.5285f4p-54f, 0.0f, 0.0f, 0.0f,
     0x1.e5b434p-108f, 0.0f, 0x1.69648cp-78f, 0.0f, 0x1.0da09ep-61f, 0.0f,
     0x1.59503p-33f, 0x1.c1299ap-107f, 0x1.3be654p-64f, 0.0f, 0x1.203bf6p-40f, 0.0f,
     0x1.05dd7ap-59f, 0.0f, 0x1.e6503ep-94f, 0.0f, 0.0f, 0x1.3a45f8p-23f, 0.0f, 0.0f,
     0.0f, 0x1.57024ap-97f, 0x1.8120d6p-104f, 0.0f, 0.0f, 0.0f, 0x1.18ec7p-45f, 0.0f,
     0.0f, 0x1.f0debep-92f, 0x1.c9934ap-108f, 0x1.6ab862p-104f, 0.0f,
     0x1.5edfc2p-111f, 0.0f, 0.0f, 0x1.ef81bcp-24f, 0x1.2cce5p-107f, 0.0f,
     0x1.32b0acp-54f, 0.0f, 0.0f, 0.0f, 0x1.1a415p-66f, 0.0f, 0.0f, 0.0f,
     0x1.a3a9d6p-100f, 0x1.b359cap-69f, 0x1.bfa8d2p-72f, 0x1.7b8e54p-31f, 0.0f,
     0x1.02627ep-30f, 0x1.7ba768p-93f, 0.0f, 0x1.16a40ap-14f, 0.0f, 0.0f,
     0x1.410d8cp-69f, 0.0f, 0.0f, 0x1.285f8ap-112f, 0.0f, 0.0f, 0x1.dcab56p-108f,
     0x1.c90188p-56f, 0.0f, 0x1.cce22ep-96f, 0x1.0a365cp-69f, 0x1.2b3502p-81f, 0.0f,
     0x1.aa941p-8f, 0.0f, 0.0f, 0x1.aab6ep-111f, 0.0f, 0.0f, 0x1.a2ae9cp-29f,
     0x1.292bc6p-99f, 0.0f, 0x1.fb6388p-86f, 0.0f, 0x1.72587ep-76f, 0x1.58fadep-8f,
     0x1.e61486p-36f, 0x1.9e59dap-21f, 0x1.74ce3p-66f, 0x1.d3d80ap-53f, 0.0f, 0.0f,
     0x1.9c1c9p-24f, 0x1.c85a88p-82f, 0x1.22df12p-67f, 0.0f, 0x1.70fe5cp-49f, 0.0f,
     0.0f, 0x1.9bc018p-19f, 0.0f, 0x1.dff44ap-113f, 0.0f, 0.0f, 0.0f, 0x1.287776p-52f,
     0.0f, 0x1.23b48ap-27f, 0x1.262eaep-51f, 0.0f, 0x1.5f44a6p-73f, 0x1.edd526p-80f,
     0x1.c321b2p-114f, 0x1.a44a82p-28f, 0.0f, 0.0f, 0x1.a2eb4ap-45f, 0x1.11f9d2p-57f,
     0x1.5ace04p-103f, 0.0f, 0.0f, 0x1.c65c0ep-98f, 0x1.b03afap-91f, 0.0f,
     0x1.9698e8p-31f, 0x1.7ccc46p-107f, 0.0f, 0x1.092146p-42f, 0.0f, 0x1.04fc62p-110f,
     0.0f, 0x1.2ab5e2p-108f, 0.0f, 0x1.a76922p-20f, 0x1.0e01bep-78f, 0.0f,
     0x1.96a9c6p-84f, 0x1.1ac95cp-74f, 0.0f, 0.0f, 0.0f, 0x1.fdb8fep-42f, 0.0f, 0.0f,
     0x1.49f9e4p-119f, 0x1.c83fccp-14f, 0.0f, 0.0f, 0x1.4e70c8p-33f, 0.0f,
     0x1.ab33c4p-14f, 0x1.430bcp-37f, 0.0f, 0x1.102112p-123f, 0x1.375cdap-41f,
     0x1.11335p-102f, 0.0f, 0.0f, 0x1.c39d42p-17f, 0x1.7603aap-55f, 0x1.c82196p-111f,
     0x1.a094b6p-65f, 0x1.04e028p-19f, 0.0f, 0.0f, 0x1.5edeeap-25f, 0x1.a27dc6p-28f,
     0.0f, 0x1.f9738p-62f, 0x1.e587aep-3f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.ac3da6p-22f,
     0x1.21b5b2p-77f, 0.0f, 0.0f, 0.0f, 0x1.86be92p-94f, 0.0f, 0x1.7e0fbap-96f, 0.0f,
     0.0f, 0x1.a9dbdcp-37f, 0x1.7b7e06p-103f, 0.0f, 0.0f, 0x1.d5dafep-105f, 0.0f,
     0.0f, 0.0f, 0x1.9905f8p-99f, 0x1.39f04p-8f, 0x1.b58c58p-64f, 0.0f,
     0x1.140254p-51f, 0x1.95d622p-4f, 0.0f, 0.0f, 0x1.1e78bp-113f, 0x1.96e79p-87f,
     0.0f, 0x1.0e2504p-125f, 0.0f, 0.0f, 0.0f, 0x1.36e558p-5f, 0x1.e182f2p-49f, 0.0f,
     0x1.27a25cp-119f, 0.0f, 0x1.8a061p-62f, 0x1.6140fap-120f, 0.0f, 0.0f,
     0x1.cc973ep-3f, 0.0f, 0.0f, 0x1.7efc4p-98f, 0x1.f8507ep-24f, 0x1.b0e572p-88f,
     0x1.8b496p-25f, 0.0f, 0.0f, 0.0f, 0x1.07de5ap-80f, 0x1.db6a12p-15f,
     0x1.53bab4p-2f, 0x1.4b6cp-112f, 0.0f, 0.0f, 0x1.11c076p-78f, 0x1.42b438p-29f,
     0x1.e3d9bep-44f, 0.0f, 0.0f, 0x1.af5c92p-59f, 0x1.dd98aep-13f, 0x1.ea5d0ap-66f,
     0.0f, 0x1.b80798p-44f, 0.0f, 0x1.4b0c16p-68f, 0.0f, 0.0f, 0.0f, 0x1.ea7e6ep-22f,
     0x1.aae37p-67f, 0.0f, 0x1.6a4812p-24f, 0.0f, 0.0f, 0x1.b9ae96p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ddab6p-26f, 0x1.97bc9ap-74f, 0x1.ad1e38p-74f,
     0.0f, 0x1.d4d8aap-74f, 0x1.a9e6cp-36f, 0x1.a65454p-3f, 0x1.d9cee4p-59f, 0.0f,
     0x1.8a9d6ap-16f, 0x1.ade5ecp-63f, 0x1.4a82cap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5f62ccp-23f, 0x1.b38902p-71f, 0.0f, 0.0f, 0x1.f9e4d4p-81f, 0x1.00ca9p-100f,
     0x1.4ec28ap-90f, 0x1.c995fep-80f, 0x1.f8b658p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb751ap-43f, 0.0f, 0x1.8ff5b8p-51f, 0x1.a90ddcp-1f, 0x1.f8e35ap-15f, 0.0f,
     0x1.3b79cep-90f, 0x1.e5342ap-92f, 0.0f, 0.0f, 0x1.1c148ap-100f, 0x1.ea5be8p-113f,
     0x1.287ca2p-48f, 0x1.31e6d2p-54f, 0.0f, 0x1.612aacp-44f, 0.0f, 0.0f, 0.0f,
     0x1.96f9c6p-57f, 0x1.e98eb8p-90f, 0.0f, 0.0f, 0x1.76734p-78f, 0x1.aded92p-116f,
     0.0f, 0.0f, 0x1.284754p-49f, 0.0f, 0x1.90e264p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27942p-48f, 0x1.4de952p-125f, 0x1.7340f2p-3f, 0x1.61c89p-42f, 0.0f, 0.0f,
     0x1.0b52a6p-88f, 0x1.82e84p-47f, 0.0f, 0x1.6f6456p-25f, 0.0f, 0x1.2390f4p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b84d8p-94f, 0x1.2b2fdap-126f, 0.0f, 0x1.151976p-79f,
     0x1.3cd3dp-20f, 0.0f, 0.0f, 0x1.14c3a8p-47f, 0x1.3dd90cp-44f, 0x1.30ec7p-69f,
     0.0f, 0x1.cc43aap-105f, 0x1.6cc734p-70f, 0x1.622f84p-9f, 0x1.e22b7ep-25f, 0.0f,
     0x1.aeabdcp-123f, 0x1.e4e716p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.567b62p-12f,
     0.0f, 0.0f, 0x1.e764b6p-57f, 0.0f, 0.0f
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
            tmp1 = Sleef_fabsf4_avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_fabsf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fabsf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
