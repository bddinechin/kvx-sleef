/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_powf4_u10kvx.c --function Sleef_powf4_u10kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03f86p-54f, 0.0f, 0.0f, 0.0f, 0x1.9a45fep-2f,
     0.0f, 0x1.febb56p-115f, 0.0f, 0.0f, 0.0f, 0x1.0b6bcep-102f, 0x1.0cdcbp-115f,
     0x1.40747p-24f, 0x1.2373dep-43f, 0x1.9bd2b2p-24f, 0x1.2334ep-94f, 0.0f,
     0x1.a1b394p-99f, 0.0f, 0x1.d522c4p-115f, 0x1p0f, 0x1.33d28ep-80f, 0.0f,
     0x1.b5cc9ep-93f, 0x1.d06c5ep-35f, 0x1.0181fp-126f, 0x1.9578dcp-53f,
     0x1.b4fd02p-70f, 0.0f, 0x1.86b48ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df79f4p-101f, 0.0f, 0.0f, 0x1.9c20cp-113f, 0x1.414d9ep-75f, 0.0f,
     0x1.241c96p-111f, 0.0f, 0x1.a6477ap-77f, 0.0f, 0.0f, 0x1.13a8c4p-79f, 0.0f,
     0x1.a60a6cp-123f, 0.0f, 0x1.c77686p-113f, 0x1.d630dcp-13f, 0.0f, 0.0f,
     0x1.9d2922p-5f, 0.0f, 0.0f, 0.0f, 0x1.ac7e5ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0x1.fc11dep-114f, 0.0f, 0x1.8c2ca4p-2f, 0.0f, 0.0f,
     0x1.260764p-63f, 0x1.804dcap-69f, 0x1.48b02ap-3f, 0x1.4670cap-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d3e8e4p-4f, 0x1.ff6302p-51f, 0x1.ff5548p-78f, 0.0f,
     0x1.fa5212p-99f, 0x1.df8dc8p-28f, 0x1.69b9cep-3f, 0.0f, 0x1.9f3e4ap-88f, 0.0f,
     0.0f, 0.0f, 0x1.065e2ap-102f, 0x1p0f, 0.0f, 0x1.d6e7bep-22f, 0.0f, 0.0f,
     0x1.5a1f2cp-117f, 0x1.fb95a6p-83f, 0.0f, 0x1.e8d9fcp-84f, 0.0f, 0.0f, 0.0f,
     0x1.78032p-67f, 0x1.c44274p-18f, 0x1.621bd8p-65f, 0.0f, 0x1.a86588p-12f, 0.0f,
     0x1.20edb8p-92f, 0.0f, 0x1.b9aa2ap-114f, 0.0f, 0x1.1be2c8p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.affecap-79f, 0x1.f3fe1cp-116f, 0.0f, 0.0f, 0x1.07dbf8p-63f,
     0x1.e1f0dap-47f, 0.0f, 0.0f, 0.0f, 0x1.3680e4p-112f, 0x1.9863b2p-22f, 0.0f,
     0x1.423cdep-98f, 0x1.361614p-10f, 0.0f, 0.0f, 0x1.4b3ba2p-107f, 0x1.d13bf6p-4f,
     0x1.1487b6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8fcc8p-30f, 0.0f, 0.0f,
     0x1.bb7d7cp-19f, 0x1.bfdee4p-108f, 0.0f, 0x1.7160e8p-1f, 0.0f, 0.0f,
     0x1.f58068p-125f, 0.0f, 0x1.6cd1e6p-33f, 0x1.d7c6e2p-19f, 0.0f, 0x1.19010cp-111f,
     0x1.edfc9ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b475cp-40f, 0.0f, 0.0f,
     0x1.d9da02p-101f, 0x1.05c054p-100f, 0x1.bc072cp-64f, 0x1.697558p-53f, 0.0f, 0.0f,
     0x1.99900ap-13f, 0x1.7ba67ap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30df62p-86f,
     0.0f, 0x1.746b2ap-71f, 0x1.4f2afap-24f, 0.0f, 0x1.e0a794p-3f, 0.0f, 0.0f, 0.0f,
     0x1.e3597p-109f, 0x1.b56b14p-112f, 0x1.5edf98p-33f, 0.0f, 0.0f, 0.0f,
     0x1.fde834p-112f, 0.0f, 0.0f, 0.0f, 0x1.fa232ap-103f, 0.0f, 0x1.b4ed4cp-117f,
     0x1.bbd148p-57f, 0.0f, 0.0f, 0x1.21d19p-45f, 0x1.4a9a4p-84f, 0.0f, 0.0f,
     0x1.bc4214p-98f, 0.0f, 0x1.3bd094p-13f, 0x1.4cada4p-40f, 0.0f, 0.0f,
     0x1.7625cap-70f, 0.0f, 0x1.85acfp-94f, 0x1.205692p-74f, 0x1.7498ecp-113f, 0.0f,
     0x1.e563c8p-103f, 0.0f, 0.0f, 0x1.c02c8ep-115f, 0x1.5df186p-64f, 0x1.296718p-23f,
     0x1.5040ccp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.968acp-92f, 0.0f, 0x1.10e216p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.270ceap-89f, 0.0f, 0.0f, 0x1.eff9acp-65f,
     0x1.0b42c2p-124f, 0x1.e10a86p-33f, 0.0f, 0x1.13a9ap-67f, 0.0f, 0x1.255db8p-100f,
     0x1.fdbf3ep-79f, 0x1.84975cp-33f, 0.0f, 0.0f, 0.0f, 0x1.f5e4d4p-75f,
     0x1.8b5218p-113f, 0x1.b343d6p-65f, 0x1.8db534p-51f, 0.0f, 0x1.e31eecp-74f,
     0x1.19b4d8p-110f, 0x1.895174p-80f, 0x1.454e56p-116f, 0x1.91a24cp-50f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.890bc2p-35f, 0x1.aedfd6p-95f, 0x1.034e34p-118f, 0.0f, 0.0f,
     0x1.52be4ep-26f, 0.0f, 0.0f, 0.0f, 0x1.337decp-36f, 0.0f, 0.0f, 0.0f,
     0x1.da199p-33f, 0x1.e0d876p-92f, 0x1.665f06p-28f, 0x1.249074p-1f,
     0x1.00a534p-48f, 0x1.897ee8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67496cp-103f,
     0x1.23cb24p-25f, 0.0f, 0x1.819df6p-124f, 0x1.6b74fcp-98f, 0x1.a2fb4ap-12f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85ca3ep-121f, 0.0f, 0.0f, 0.0f, 0x1.9e06c8p-124f, 0.0f,
     0x1.a74b42p-117f, 0.0f, 0.0f, 0.0f, 0x1.c1443cp-47f, 0.0f, 0x1.03c1eap-108f,
     0x1.facaaap-67f, 0x1.801fa6p-86f, 0.0f, 0.0f, 0x1.8677dp-111f, 0.0f,
     0x1.d47d18p-65f, 0x1.73805p-22f, 0x1.a60432p-94f, 0x1.007b8cp-28f,
     0x1.1caea2p-13f, 0.0f, 0x1.1fc6f6p-87f, 0x1.a04078p-4f, 0.0f, 0.0f, 0.0f,
     0x1.4d9a6ap-9f, 0x1.e62e52p-31f, 0x1.a3c47ap-63f, 0.0f, 0.0f, 0x1.ce2062p-82f,
     0.0f, 0x1.1e1306p-58f, 0x1.01d1cp-118f, 0x1.c701ap-56f, 0x1.5b37a4p-50f, 0.0f,
     0x1.6f1d72p-117f, 0.0f, 0.0f, 0x1.3c6b64p-105f, 0.0f, 0.0f, 0.0f,
     0x1.8e086cp-78f, 0x1.f9fe2p-113f, 0.0f, 0x1.b8a9d6p-24f, 0.0f, 0.0f,
     0x1.abce72p-68f, 0x1.f0e45ep-19f, 0.0f, 0.0f, 0x1.5540a6p-50f, 0x1.cf8cc6p-46f,
     0.0f, 0x1.686b22p-61f, 0x1.dc207ep-13f, 0.0f, 0x1.da62c2p-47f, 0.0f, 0.0f,
     0x1.a997b6p-87f, 0x1.864b76p-10f, 0x1.13fe28p-43f, 0x1.01c982p-80f,
     0x1.da9d1cp-124f, 0x1.f5759cp-23f, 0x1.2ad8bcp-11f, 0x1.be74bp-63f,
     0x1.9c2372p-110f, 0x1.c2228ep-92f, 0x1.1fe478p-87f, 0x1.0dddb2p-53f,
     0x1.fc2df8p-9f, 0x1.16b94p-61f, 0x1.70ef2ap-10f, 0x1.a145bp-81f, 0.0f, 0.0f,
     0x1.f46466p-9f, 0x1.7a717ap-110f, 0x1.2121b8p-59f, 0.0f, 0x1.02731p-100f,
     0x1.480278p-91f, 0.0f, 0.0f, 0x1.bc968ep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.93f898p-108f, 0.0f, 0.0f, 0x1.e1dd92p-89f, 0.0f, 0x1.2f9238p-78f,
     0x1.0c80d4p-1f, 0x1.03d5d8p-106f, 0.0f, 0.0f, 0x1.bb120ap-123f, 0.0f, 0.0f,
     0x1.20cb7p-64f, 0x1.9e08b6p-18f, 0x1.7fd0a2p-33f, 0x1.e66f72p-5f,
     0x1.842436p-53f, 0.0f, 0x1.aa6efcp-74f, 0x1.6f62e2p-100f, 0x1.05fc52p-91f, 0.0f,
     0x1.70dd5ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1efb5cp-86f, 0x1.05ebb8p-14f, 0.0f,
     0x1.ca20a8p-109f, 0.0f, 0x1.37f10cp-83f, 0x1.3796e2p-67f, 0.0f, 0x1.6847f6p-32f,
     0.0f, 0.0f, 0.0f, 0x1.5ea664p-53f, 0x1.9a86a8p-18f, 0x1.e20c56p-75f,
     0x1.4bc3e6p-77f, 0.0f, 0x1.151f38p-41f, 0.0f, 0x1.45428p-106f, 0x1.3430d8p-39f,
     0x1.be0a5ap-15f, 0x1.1fbcdcp-86f, 0.0f, 0.0f, 0.0f, 0x1.f3ce48p-76f, 0.0f,
     0x1.0e5438p-57f, 0x1.0cba74p-62f, 0.0f, 0.0f, 0x1.494adp-31f, 0.0f, 0.0f,
     0x1.bf144ap-104f, 0.0f, 0.0f, 0x1.c448bcp-53f, 0x1.44748p-97f, 0x1.87636p-72f,
     0x1.68179cp-30f, 0x1.3451cp-40f, 0x1.5ba382p-87f, 0x1.914662p-82f, 0.0f,
     0x1.aa027cp-95f, 0.0f, 0.0f, 0x1.9ab612p-59f, 0.0f, 0x1.774e0ep-3f, 0.0f,
     0x1.a1c276p-5f, 0x1.506e6cp-6f, 0.0f, 0x1.c2f69p-126f, 0.0f, 0x1p0f,
     0x1.fe0ae2p-9f, 0.0f, 0x1.441dd6p-95f, 0x1.b454d4p-95f, 0x1.edcac6p-28f, 0.0f,
     0x1.d990b8p-59f, 0x1.183978p-98f, 0x1.209a18p-121f, 0.0f, 0.0f, 0x1.228aaep-7f,
     0x1.c0d6f2p-117f, 0x1.fa341p-124f, 0x1.0a53p-32f, 0x1.b014fep-96f,
     0x1.49aef6p-86f, 0x1.453da6p-80f, 0x1.8bfad4p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.314362p-15f, 0.0f, 0.0f, 0x1.408edep-110f, 0.0f, 0x1.acb94cp-50f, 0.0f, 0.0f,
     0x1.aba202p-31f, 0.0f, 0x1.74967cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e084cep-7f, 0.0f, 0.0f, 0x1.dd7eb6p-99f, 0.0f, 0x1.6b680cp-55f,
     0x1.328256p-60f, 0x1.1901aap-45f, 0.0f, 0x1.6b9014p-61f, 0.0f, 0x1.9cc38cp-43f,
     0x1.8ed466p-75f, 0.0f, 0.0f, 0x1.601ef8p-59f, 0x1.2025eap-32f, 0x1.c177dep-16f,
     0.0f, 0x1.4271bap-33f, 0.0f, 0.0f, 0x1.4442dp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc0426p-30f, 0x1.40d534p-126f, 0x1.e98d84p-115f, 0.0f, 0.0f, 0.0f,
     0x1.ab93d6p-46f, 0.0f, 0x1.889424p-9f, 0x1.1eff1ap-92f, 0.0f, 0x1.b4bdacp-78f,
     0.0f, 0x1.dd3dcep-77f, 0x1.6b3582p-126f, 0.0f, 0x1.7f643ep-23f, 0.0f, 0.0f,
     0x1.2e4ccap-35f, 0x1.9ff7c8p-53f, 0.0f, 0x1.a45d76p-19f, 0.0f, 0.0f,
     0x1.170ebap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9108bep-7f, 0x1.ab3baep-7f,
     0x1.bb099ap-113f, 0.0f, 0.0f, 0.0f, 0x1.0968dp-28f, 0x1.a0ab46p-3f,
     0x1.342476p-82f, 0x1.f00756p-42f, 0x1.80389ap-27f, 0.0f, 0x1.2b027p-113f,
     0x1.18d256p-96f, 0.0f, 0.0f, 0x1.2cf84p-46f, 0x1.48d93ap-20f, 0x1.b10beep-6f,
     0.0f, 0.0f, 0.0f, 0x1.81db12p-105f, 0.0f, 0.0f, 0.0f, 0x1.bc790cp-45f, 0.0f,
     0.0f, 0.0f, 0x1.f634dp-57f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.266f6ap-64f,
     0.0f, 0.0f, 0x1.dbc8ap-116f, 0x1.fe61c2p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be0668p-78f, 0x1.c2a7ep-36f, 0x1.6948cp-36f, 0.0f, 0.0f, 0x1.236928p-120f,
     0.0f, 0x1.0ddafp-96f, 0x1.50341p-73f, 0.0f, 0x1.06b45ep-30f, 0x1.8ab49ap-42f,
     0.0f, 0x1.7da108p-14f, 0.0f, 0.0f, 0x1.1c35b8p-108f, 0.0f, 0.0f,
     0x1.9d8e1ep-120f, 0.0f, 0x1.73614ep-108f, 0x1.2986cp-63f, 0.0f, 0.0f, 0.0f,
     0x1.03f998p-45f, 0x1.60bebp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98e9a8p-69f,
     0x1.f2a974p-5f, 0.0f, 0.0f, 0x1.eb226ap-41f, 0x1.df0548p-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c3b06p-113f, 0x1.08fd28p-104f, 0x1.c6af86p-25f, 0.0f,
     0x1.d4e5e4p-57f, 0x1.6593bap-113f, 0x1.198e58p-77f, 0x1.585816p-117f, 0.0f, 0.0f,
     0x1.1f6728p-2f, 0x1.49d34cp-94f, 0x1.cfe818p-16f, 0.0f, 0.0f, 0x1.5cbcd4p-42f,
     0.0f, 0.0f, 0x1.1c97aap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a4a76p-85f, 0.0f, 0.0f,
     0.0f, 0x1.15eaa4p-112f, 0.0f, 0.0f, 0.0f, 0x1.1118e6p-120f, 0x1.2bb5fep-43f,
     0x1.5a6524p-44f, 0x1.d20506p-24f, 0x1.514e3p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d10beap-65f, 0.0f, 0.0f, 0x1.71f7b6p-60f, 0.0f, 0.0f, 0.0f, 0x1.15117p-22f,
     0x1.7a479ep-85f, 0.0f, 0x1.370806p-75f, 0x1.c3e348p-118f, 0x1.1647a4p-12f, 0.0f,
     0x1.305e64p-17f, 0.0f, 0x1.cb997p-3f, 0x1.0a61e2p-78f, 0x1.74e2a4p-115f, 0.0f,
     0.0f, 0x1.315da8p-103f, 0x1.05e244p-44f, 0.0f, 0.0f, 0x1.2207f4p-95f, 0.0f,
     0x1.6f29acp-118f, 0.0f, 0x1.2bed0ep-14f, 0x1.b357ap-27f, 0x1.ed957ep-2f, 0.0f,
     0.0f, 0x1.6246ep-26f, 0.0f, 0.0f, 0x1.02ff86p-13f, 0x1.c54b98p-122f, 0.0f, 0.0f,
     0x1.0c123ap-58f, 0.0f, 0x1.0d9daap-4f, 0x1.2a1e62p-95f, 0x1.9e708ap-66f, 0.0f,
     0.0f, 0.0f, 0x1.b6e2bap-106f, 0.0f, 0x1.302a8ep-47f, 0.0f, 0.0f, 0x1.ea563ap-44f,
     0.0f, 0.0f, 0x1.8a7f6p-49f, 0x1.28ff2ap-92f, 0x1.826a22p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.00ff46p-40f, 0x1.9c186ap-83f, 0.0f, 0.0f, 0x1.6cb7d8p-12f,
     0x1.fa862p-42f, 0x1.0fcd12p-19f, 0x1.087552p-121f, 0.0f, 0.0f, 0.0f,
     0x1.3799cp-29f, 0x1.668812p-77f, 0x1.39b5acp-64f, 0x1.a2ba0ep-43f, 0.0f,
     0x1.ffe1dep-16f, 0.0f, 0.0f, 0x1.18ab98p-41f, 0.0f, 0.0f, 0x1.3e3bc2p-13f, 0.0f,
     0x1.955014p-92f, 0x1.09243p-41f, 0.0f, 0x1.5e8284p-12f, 0x1.d3aa64p-65f, 0.0f,
     0.0f, 0x1.81c692p-49f, 0.0f, 0x1.e7f122p-100f, 0.0f, 0x1.b95bcap-23f,
     0x1.6fd77ap-48f, 0x1.c6b452p-68f, 0x1.85743cp-88f, 0x1.929682p-62f,
     0x1.e5065ep-122f, 0x1.46702p-35f, 0x1.07e05ap-123f, 0x1.9543cap-8f,
     0x1.2c677p-65f, 0.0f, 0x1.921aeap-84f, 0.0f, 0.0f, 0x1.49760ep-31f,
     0x1.9e8a68p-15f, 0.0f, 0x1.43b038p-124f, 0x1.bcffdp-100f, 0.0f, 0.0f,
     0x1.e0f2b6p-76f, 0.0f, 0x1.bf19e2p-30f, 0.0f, 0.0f, 0x1.413a5ep-117f,
     0x1.603298p-13f, 0.0f, 0x1.d48b18p-45f, 0x1.b12e4ep-4f, 0x1.c55e24p-117f, 0.0f,
     0x1.5b285ap-93f, 0.0f, 0.0f, 0x1.844726p-6f, 0.0f, 0x1.de07e8p-96f,
     0x1.6746a4p-105f, 0x1.df1018p-86f, 0x1.06a07ep-77f, 0.0f, 0.0f, 0x1.f3beccp-30f,
     0x1.47257ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.294a34p-125f, 0x1.5b8152p-119f,
     0x1.7d7e16p-26f, 0.0f, 0x1.d1fab6p-13f, 0x1.c3039ap-27f, 0.0f, 0x1.17779ap-19f,
     0x1.252a66p-43f, 0.0f, 0x1.bba9ep-55f, 0x1.d8d47p-60f, 0x1.dedf1ep-123f, 0.0f,
     0x1.df9e2cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2468p-114f, 0x1.28aa4ap-93f,
     0x1.1e528ep-29f, 0x1.ff25cep-8f, 0x1.b2d02p-58f, 0x1.814328p-111f,
     0x1.1f06fep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62d0dp-18f, 0.0f, 0x1.e3ecd6p-41f,
     0x1.79109ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa3c3cp-121f, 0x1.88c2bp-11f, 0.0f,
     0.0f, 0x1.30ba7ep-122f, 0x1.e7c154p-65f, 0x1.b972f6p-45f, 0x1.7c8936p-67f,
     0x1.bcb89p-54f, 0.0f, 0.0f, 0.0f, 0x1.33789cp-114f, 0.0f, 0x1.1908bap-26f,
     0x1.562952p-44f, 0x1.319c22p-55f, 0.0f, 0x1.808468p-97f, 0.0f, 0.0f, 0.0f,
     0x1.4f4154p-106f, 0.0f, 0x1.36191ep-100f, 0x1.39c00ap-46f, 0x1.af196ap-7f,
     0x1.798bccp-90f, 0x1.4286a6p-15f, 0.0f, 0x1.9b67fep-96f, 0.0f, 0.0f, 0.0f,
     0x1.05a4f2p-25f, 0.0f, 0.0f, 0x1.6610bep-74f, 0x1.4ab8d2p-69f, 0.0f, 0.0f, 0.0f,
     0x1.d775ccp-38f, 0.0f, 0.0f, 0x1.d3081ep-17f, 0x1.b99ab8p-13f, 0.0f,
     0x1.ed0b5cp-95f, 0x1.45fd1cp-50f, 0x1.0f453cp-75f, 0x1.e4dcc6p-66f,
     0x1.86979ap-84f, 0x1.ced246p-79f, 0.0f, 0x1.c21134p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.198f4ap-83f, 0.0f, 0.0f, 0x1.26039ap-27f, 0.0f, 0.0f, 0x1.5e27d2p-100f,
     0x1.1100e2p-90f, 0x1.f4e068p-27f, 0.0f, 0.0f, 0x1.61f9d4p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.19fbap-103f, 0.0f, 0x1.a8cd68p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.34b5f6p-123f, 0x1.ca36bep-86f, 0x1.a52c74p-75f, 0x1.fd315ep-60f,
     0x1.d5486ap-75f, 0.0f, 0.0f, 0x1.9855eap-14f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.10e456p-104f, 0.0f, 0x1.a50b5p-94f, 0.0f, 0.0f, 0x1.697ebap-116f,
     0x1.850d3cp-94f, 0.0f, 0x1.26407ep-44f, 0x1.0e6f9cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.949e36p-113f, 0.0f, 0.0f, 0x1.580b42p-126f, 0.0f, 0x1.8a712cp-15f,
     0x1.663f6cp-100f, 0x1.cf7084p-86f, 0.0f, 0x1.553884p-48f, 0x1.755e86p-63f,
     0x1.06c836p-10f, 0.0f, 0.0f, 0x1.ab024ap-64f, 0x1.4d17ap-76f, 0x1.e4969p-107f,
     0.0f, 0.0f, 0x1.72a2eep-82f, 0.0f, 0x1.96f8bep-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.51c0e6p-96f, 0x1.983d02p-17f, 0x1.55b41p-108f, 0.0f, 0.0f, 0x1.97298ap-50f,
     0.0f, 0.0f, 0x1.48a13cp-63f, 0x1.2d5ffp-32f, 0x1.c6005ep-109f, 0.0f,
     0x1.2e34b6p-39f, 0x1.6583e2p-12f, 0x1.d2e5c2p-1f, 0.0f, 0x1.b3b9a6p-73f, 0.0f,
     0x1.4547acp-67f, 0.0f, 0x1.eb1822p-53f, 0.0f, 0x1.624e28p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.45561cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3b0cep-13f,
     0x1.74d614p-68f, 0.0f, 0.0f, 0.0f, 0x1.066b2ap-65f, 0.0f, 0x1.7737f4p-95f,
     0x1.c96004p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7a75p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbcb7ap-32f,
     0x1.b8e796p-40f, 0x1.69de1p-38f, 0.0f, 0.0f, 0x1.f70adcp-38f, 0.0f, 0.0f,
     0x1.38273cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcab08p-109f, 0.0f, 0x1.92bf5ep-18f,
     0x1.4cd644p-44f, 0.0f, 0x1.6008p-87f, 0x1.4149c8p-6f, 0.0f, 0.0f, 0.0f,
     0x1.aadf56p-71f, 0x1.29bp-117f, 0.0f, 0x1.544436p-123f, 0x1.375deap-120f,
     0x1.d26aep-97f, 0.0f, 0x1.91f82cp-36f, 0.0f, 0x1.a096b4p-41f, 0.0f,
     0x1.9e29bcp-87f, 0x1.73625p-40f, 0x1.7eff42p-119f, 0.0f, 0x1.87cc0cp-35f,
     0x1.de1cfp-114f, 0.0f, 0x1.90aa98p-83f, 0x1.9b9f6ap-106f, 0.0f, 0.0f,
     0x1.703974p-64f, 0.0f, 0x1.e1966cp-114f, 0.0f, 0.0f, 0x1.0e8544p-87f,
     0x1.a20ep-59f, 0.0f, 0.0f, 0x1.7fe216p-117f, 0x1.376caep-22f, 0x1.00c9a4p-61f,
     0.0f, 0x1.face6cp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c1becp-6f, 0x1.1c6662p-110f,
     0x1.0c706ep-55f, 0.0f, 0.0f, 0.0f, 0x1.e9d3f6p-70f, 0.0f, 0x1.3f2384p-93f, 0.0f,
     0.0f, 0x1.1b4a5p-23f, 0x1.81dba6p-109f, 0.0f, 0.0f, 0x1.ac5008p-97f,
     0x1.334a84p-93f, 0.0f, 0.0f, 0x1.7fa6p-33f, 0x1.59c936p-41f, 0.0f, 0.0f,
     0x1.6c16a4p-109f, 0x1.b657f6p-107f, 0x1.ffcf76p-85f, 0x1.ec7a7cp-116f, 0.0f,
     0x1.96d904p-98f, 0.0f, 0x1.7e0f8ap-52f, 0x1.c979cap-15f, 0.0f, 0x1.b82c32p-21f,
     0x1.d49b3ap-82f, 0x1.9460aap-54f, 0x1.4b996cp-28f, 0x1.f6101ep-79f, 0.0f,
     0x1.249832p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9693e2p-33f, 0x1.a1ddacp-8f,
     0x1.a8bd1ep-93f, 0x1.7c6afap-1f, 0.0f, 0x1.3284c6p-38f, 0x1.957654p-8f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c48d4p-61f, 0x1.e69e4p-23f, 0x1.d1405ap-56f,
     0x1.c9cabp-111f, 0x1.c9b208p-9f, 0x1.8843b4p-31f, 0x1.11bebap-104f,
     0x1.c6118ep-101f, 0x1.d024ecp-12f, 0.0f, 0.0f, 0.0f, 0x1.1b61bp-62f,
     0x1.ac01b4p-33f, 0x1.33aba6p-35f, 0.0f, 0x1.a20b2cp-9f, 0.0f, 0x1.1ac83ep-60f,
     0.0f, 0x1.44e0f2p-49f, 0x1.812adap-109f, 0x1.738664p-68f, 0.0f, 0.0f,
     0x1.5cfbd4p-32f, 0x1.790bf8p-62f, 0x1.6bf148p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4607f4p-46f, 0x1.925d2ep-18f, 0.0f, 0x1.a7685cp-40f, 0x1.d7ba16p-8f,
     0x1.efb502p-43f, 0x1.4222cep-123f, 0.0f, 0x1.bf1d74p-51f, 0.0f, 0x1.b5f792p-105f,
     0x1.3ebbbap-38f, 0.0f, 0x1.9addf2p-42f, 0x1.4a5fbap-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c291f6p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e11ce8p-119f, 0.0f, 0x1.ee53fp-119f, 0x1.3fc4b8p-44f, 0x1.6bad9cp-55f,
     0x1.054f46p-75f, 0.0f, 0.0f, 0x1.d5d1a2p-2f, 0.0f, 0x1.815ffap-108f, 0.0f,
     0x1.cd8d4ep-67f, 0.0f, 0.0f, 0x1.972a66p-54f, 0.0f, 0.0f, 0.0f, 0x1.5e67e6p-35f,
     0x1.0be352p-58f, 0x1.18cddp-40f, 0.0f, 0x1.61debp-36f, 0x1.80e414p-96f,
     0x1.8f3676p-42f, 0.0f, 0.0f, 0x1.25ef94p-9f, 0x1.b6c99ep-85f, 0x1.7a1e1ap-111f,
     0x1.f7de4ap-38f, 0x1.5dd65cp-18f, 0x1.a4dddp-92f, 0.0f, 0.0f, 0x1.13b1a2p-32f,
     0x1.e8a5eep-24f, 0.0f, 0x1.7a71a2p-23f, 0.0f, 0.0f, 0.0f, 0x1.af231ep-66f, 0.0f,
     0x1.2a2a8ep-31f, 0x1.22ef6p-18f, 0x1.c4994ep-66f, 0.0f, 0.0f, 0.0f,
     0x1.d350ccp-10f, 0.0f, 0x1.a927aap-51f, 0x1.0efdfap-38f, 0.0f, 0x1.a4ffd2p-118f,
     0.0f, 0.0f, 0.0f, 0x1.d3b06ap-117f, 0.0f, 0x1.b6deb4p-91f, 0.0f, 0x1.8847bcp-91f,
     0x1.4520bap-117f, 0x1.e6602cp-108f, 0.0f, 0x1.df1ed4p-42f, 0.0f, 0.0f, 0.0f,
     0x1.06f792p-90f, 0x1.8a6644p-31f, 0.0f, 0x1.a2a772p-106f, 0.0f, 0.0f,
     0x1.198094p-48f, 0x1.7b7398p-42f, 0.0f, 0x1.02ec5cp-52f, 0.0f, 0.0f,
     0x1.91c06cp-58f, 0.0f, 0x1.0ed106p-27f, 0.0f, 0x1.7879bcp-40f, 0.0f,
     0x1.346b78p-35f, 0x1.91e936p-119f, 0.0f, 0x1.2e980ap-87f, 0.0f, 0x1.5df88p-52f,
     0x1.479474p-55f, 0x1.76c9fap-50f, 0.0f, 0x1.9d9356p-75f, 0.0f, 0x1.cebap-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8866p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bb52cp-61f,
     0.0f, 0x1.a6a566p-83f, 0.0f, 0x1.cdef2cp-100f, 0x1.39c314p-9f, 0x1.eac6fep-57f,
     0.0f, 0.0f, 0.0f, 0x1.00ec4ap-76f, 0.0f, 0.0f, 0.0f, 0x1.e48b1ep-20f, 0.0f,
     0x1.4f54d6p-114f, 0.0f, 0.0f, 0.0f, 0x1.ee9d0cp-110f, 0.0f, 0x1.116efp-66f, 0.0f,
     0.0f, 0x1.223ee6p-35f, 0.0f, 0.0f, 0x1.6b3d7cp-52f, 0.0f, 0.0f, 0x1.82466p-54f,
     0.0f, 0x1.c15878p-110f, 0.0f, 0x1.97f1dep-39f, 0x1.725e7ep-116f, 0.0f, 0.0f,
     0.0f, 0x1.e2021ap-95f, 0x1.d3d1bp-27f, 0x1.ff8876p-33f, 0.0f, 0x1.1eb598p-6f,
     0x1.30dc34p-35f, 0x1.cb583ep-94f, 0x1.a4e1a8p-77f, 0.0f, 0x1.2ff1b6p-80f,
     0x1.e8575cp-93f, 0.0f, 0x1.440d04p-99f, 0.0f, 0.0f, 0.0f, 0x1.69dc14p-122f,
     0x1.c867c8p-44f, 0x1.e25106p-75f, 0.0f, 0x1.45bc76p-56f, 0x1.3b81d4p-62f, 0.0f,
     0x1.2979d4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a842eep-117f, 0.0f,
     0x1.34422ep-55f, 0.0f, 0x1.d520acp-35f, 0.0f, 0.0f, 0x1.0e3a2ap-22f,
     0x1.9ea7f6p-12f, 0x1.0ba124p-29f, 0.0f, 0x1.066c86p-15f, 0.0f, 0x1.8da4c2p-56f,
     0x1.cb281ep-50f, 0.0f, 0x1.60ecbp-27f, 0x1.157462p-1f, 0x1.ba4cap-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b38cep-27f, 0.0f, 0x1.589982p-5f, 0.0f, 0.0f,
     0x1.48cd66p-75f, 0.0f, 0.0f, 0.0f, 0x1.ec9892p-105f, 0.0f, 0x1.aedap-88f, 0.0f,
     0.0f, 0.0f, 0x1.2e9e44p-33f, 0.0f, 0x1.1dd6c6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.b9aab8p-23f, 0x1.9aad64p-71f, 0.0f, 0.0f, 0.0f, 0x1.1d4f5cp-22f,
     0x1.f54a5ap-14f, 0x1.00f88ep-17f, 0x1.64754p-51f, 0.0f, 0x1.ab085cp-5f, 0.0f,
     0x1.ebae6ep-39f, 0x1.d0fd38p-5f, 0.0f, 0x1.2cb506p-39f, 0x1.e38026p-9f,
     0x1.52a662p-93f, 0x1.5602a8p-96f, 0x1.a05a12p-27f, 0x1.21918cp-83f, 0.0f,
     0x1.dfb9bep-97f, 0x1.0432a2p-35f, 0.0f, 0x1.5254c8p-42f, 0x1.3dcbfep-47f, 0.0f,
     0.0f, 0x1.27f14p-24f, 0.0f, 0x1.f2e0c6p-114f, 0x1.05bce8p-106f, 0x1.056e74p-18f,
     0.0f, 0x1.b97702p-22f, 0x1.3ede56p-13f, 0.0f, 0.0f, 0x1.13b068p-62f, 0.0f,
     0x1.d268dap-94f, 0.0f, 0.0f, 0.0f, 0x1.db981cp-57f, 0x1.77a6a6p-10f,
     0x1.9ec444p-53f, 0x1.9ac068p-83f, 0x1.f117bep-21f, 0x1.7c2312p-99f, 0.0f, 0.0f,
     0x1.3d154ap-18f, 0.0f, 0.0f, 0x1.1d14ccp-26f, 0.0f, 0x1.792aep-22f,
     0x1.451072p-84f, 0x1.404be4p-18f, 0x1.d6b5b6p-99f, 0x1.8445dp-125f,
     0x1.16169ap-126f, 0.0f, 0x1.ac8468p-119f, 0x1.4acdc4p-18f, 0.0f, 0.0f, 0.0f,
     0x1.008bf6p-1f, 0x1.31057cp-89f, 0x1.7caa24p-14f, 0x1.6e6232p-92f,
     0x1.5ade32p-90f, 0x1.09341ap-87f, 0x1.246922p-18f, 0.0f, 0.0f, 0x1.1194bp-104f,
     0.0f, 0x1.84e82ep-84f, 0.0f, 0x1.c7865ep-66f, 0x1.7bb4c6p-29f, 0.0f, 0.0f, 0.0f,
     0x1.fe1616p-31f, 0.0f, 0x1.ca17fcp-89f, 0x1.9fdde6p-1f, 0x1.a52974p-8f,
     0x1.65adbcp-39f, 0.0f, 0.0f, 0x1.1907e6p-59f, 0.0f, 0x1.f9abd8p-13f, 0.0f,
     0x1.894ed4p-15f, 0x1.6df968p-118f, 0x1.707dc4p-92f, 0.0f, 0x1.6b7a2cp-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51ebeap-33f, 0.0f, 0x1.5140e6p-97f, 0x1.cdd1d8p-40f,
     0.0f, 0.0f, 0.0f, 0x1.95e5dp-102f, 0x1.bff5eap-67f, 0x1.439d7p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b17988p-106f, 0.0f, 0x1.0729eap-109f, 0.0f,
     0x1.f8794ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0b148p-7f,
     0.0f, 0.0f, 0.0f, 0x1.83f9dep-18f, 0x1.47799ep-58f, 0x1.cf6fap-50f,
     0x1.c7a128p-86f, 0.0f, 0x1.963dbcp-52f, 0x1.9334acp-18f, 0.0f, 0.0f,
     0x1.c6ffc4p-52f, 0x1.c232e4p-104f, 0.0f, 0x1.a2879ep-88f, 0x1.549788p-41f,
     0x1.346c02p-19f, 0.0f, 0.0f, 0.0f, 0x1.78e09ap-90f, 0x1.690322p-45f,
     0x1.305f78p-118f, 0x1.df07d6p-18f, 0.0f, 0x1.47633cp-113f, 0x1.c8adbp-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61693ap-22f, 0x1.98cad6p-82f, 0x1.0c14b4p-80f,
     0.0f, 0.0f, 0x1.4e7626p-69f, 0.0f, 0.0f, 0x1.abf162p-52f, 0x1.935422p-85f,
     0x1.91728p-29f, 0.0f, 0x1.f6f1p-72f, 0.0f, 0x1.cb5902p-17f, 0.0f, 0.0f,
     0x1.f5881cp-5f, 0.0f, 0.0f, 0x1.984016p-88f, 0.0f, 0x1.1fab96p-63f,
     0x1.307b56p-87f, 0.0f, 0.0f, 0x1.7815bcp-84f, 0x1.ede6fap-34f, 0.0f, 0.0f,
     0x1.fe7876p-77f, 0x1.e7a1dcp-23f, 0x1.aa042ap-27f, 0.0f, 0x1.1102e4p-33f,
     0x1.5910aep-70f, 0x1.0d803cp-56f, 0.0f, 0x1.838e7cp-39f, 0x1.1545c6p-54f,
     0x1.7afaf2p-94f, 0x1.ead286p-17f, 0x1.2231c4p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ebcbap-62f, 0x1.228bdcp-83f, 0x1.964204p-111f, 0x1.3519eap-108f, 0.0f,
     0x1.6fc6aap-74f, 0.0f, 0.0f, 0x1.2568acp-116f, 0x1.49a092p-19f, 0x1.f6dc7ep-73f,
     0x1.c4a7d4p-41f, 0x1.76937p-88f, 0.0f, 0.0f, 0x1.5d9608p-65f, 0x1.ae320ep-123f,
     0.0f, 0x1.12d7ecp-62f, 0x1.4aaa56p-32f, 0x1.1c7382p-68f, 0x1.ad32b4p-38f, 0.0f,
     0.0f, 0.0f, 0x1.c79012p-97f, 0x1.98d068p-65f, 0.0f, 0x1.6edeacp-118f,
     0x1.53e0cep-30f, 0x1.e3b004p-20f, 0x1.8e1b92p-105f, 0x1.10925p-48f, 0.0f,
     0x1.02b0d8p-54f, 0.0f, 0x1.a32734p-57f, 0.0f, 0x1.0534bep-69f, 0x1.c54388p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c54e0cp-100f, 0.0f, 0.0f,
     0x1.42909ep-25f, 0x1.eeff48p-11f, 0x1.b36c74p-39f, 0.0f, 0x1.64ed2ap-30f,
     0x1.754662p-51f, 0x1.ecc602p-14f, 0x1.4daf46p-106f, 0x1.4d2de8p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d09dc2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfb1dep-121f, 0x1.b129f4p-6f, 0.0f, 0.0f, 0x1.b46bdap-53f, 0x1.85b602p-53f,
     0.0f, 0x1.9fec2ep-38f, 0x1.b03a7ap-22f, 0x1.b05c9p-46f, 0.0f, 0x1.f03c52p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a471f4p-102f, 0.0f, 0.0f, 0.0f, 0x1.f2b1bep-12f,
     0.0f, 0.0f, 0.0f, 0x1.bab3b6p-57f, 0x1.b0c4fcp-62f, 0.0f, 0.0f, 0x1.06eef6p-112f,
     0x1.7b1a38p-105f, 0.0f, 0x1.a2c4c2p-119f, 0.0f, 0.0f, 0x1.ed554ep-22f,
     0x1.1f24d8p-55f, 0x1.35873ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9296ap-55f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.0c4858p-103f, 0.0f, 0.0f, 0.0f, 0x1.21d0bcp-108f, 0.0f,
     0.0f, 0.0f, 0x1.6f586cp-68f, 0x1.d5218ep-12f, 0.0f, 0.0f, 0x1.8a0826p-101f,
     0x1.15050cp-1f, 0.0f, 0x1.713b66p-77f, 0.0f, 0x1.04f1c4p-96f, 0x1.5950dcp-103f,
     0.0f, 0.0f, 0x1.cacf16p-60f, 0x1.b97a2ep-70f, 0x1.75264ep-14f, 0.0f,
     0x1.7af102p-69f, 0x1.27d5e8p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb496ep-97f,
     0x1.43807ep-38f, 0x1.831d92p-86f, 0x1.c2e7dep-20f, 0.0f, 0x1.4ede12p-19f,
     0x1.7938b4p-1f, 0x1.edaedcp-106f, 0x1.52240ep-30f, 0.0f, 0.0f, 0x1.70feaap-36f,
     0.0f, 0x1.1b216ap-118f, 0x1.35b6b2p-52f, 0x1.6b6cd8p-7f, 0x1.f6b17ep-48f,
     0x1.8e067ap-19f, 0x1.ef4b28p-93f, 0.0f, 0.0f, 0.0f, 0x1.c52cf2p-51f,
     0x1.155a8p-68f, 0.0f, 0.0f, 0x1.e137b6p-110f, 0x1.8521f8p-19f, 0.0f,
     0x1.ac52c4p-63f, 0.0f, 0x1.bfeca4p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.20b774p-111f, 0.0f, 0x1.acd792p-71f, 0.0f, 0.0f, 0x1.1e7ae2p-109f, 0.0f,
     0.0f, 0x1.43becp-20f, 0x1.df7752p-13f, 0x1.39828ep-55f, 0x1.d26e2ep-119f, 0.0f,
     0x1.e89eaep-2f, 0x1.69289ep-5f, 0x1.97eaccp-113f, 0.0f, 0x1.831c8ep-17f,
     0x1.115f9p-88f, 0x1.4c0924p-107f, 0x1.bea482p-25f, 0x1.ed170ap-50f, 0.0f,
     0x1.0278a8p-28f, 0.0f, 0.0f, 0.0f, 0x1.4189d2p-11f, 0x1.3b3a7ap-88f, 0.0f, 0.0f,
     0x1.e61eb8p-90f, 0x1.9c3cc8p-90f, 0x1.17aa88p-10f, 0.0f, 0.0f, 0x1.c35258p-50f,
     0x1.7cbaa8p-57f, 0x1.6248cp-68f, 0.0f, 0x1.6d567cp-56f, 0.0f, 0.0f, 0.0f,
     0x1.0da2fap-78f, 0x1.54050cp-50f, 0.0f, 0.0f, 0x1.a3c4d8p-36f, 0x1.26f2bep-93f,
     0x1.df83f2p-21f, 0.0f, 0.0f, 0x1.e82212p-80f, 0x1.c4482ep-123f, 0.0f, 0.0f,
     0x1.59d6f2p-65f, 0x1.90f47ep-121f, 0x1.26581ap-64f, 0x1.a48e9p-24f, 0.0f, 0.0f,
     0x1.407c08p-114f, 0x1.3563d8p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.78a45ap-122f, 0x1.2eea7ap-107f, 0x1.bd974ep-98f, 0.0f, 0.0f, 0x1.c9c562p-46f,
     0x1.b0200ap-17f, 0x1.5e40f6p-92f, 0x1.a2f5fap-88f, 0x1.332bbp-5f,
     0x1.39a8c4p-32f, 0x1.c8aa74p-67f, 0.0f, 0.0f, 0.0f, 0x1.191b0cp-60f,
     0x1.91798cp-23f, 0.0f, 0x1.affcb6p-84f, 0x1.6a674cp-103f, 0x1.07a3a8p-92f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_powf4_u10kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_powf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_powf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
