/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f4_u10kvx.c --function Sleef_log2f4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.6c9102p-91f, 0x1.e2aa24p-17f, 0x1.43c852p-10f, 0x1.c5d8p-60f, 0.0f,
     0x1.afaac4p-44f, 0.0f, 0x1.cf1968p-98f, 0.0f, 0.0f, 0x1.178096p-37f,
     0x1.b864e6p-92f, 0.0f, 0.0f, 0x1.905dacp-16f, 0.0f, 0x1.5aaddap-116f, 0.0f,
     0x1.d5ea96p-93f, 0x1.45b8a6p-53f, 0x1.fddbaap-34f, 0.0f, 0x1.f4ade8p-12f,
     0x1.97e97ep-16f, 0x1.b34b36p-61f, 0x1.7ea424p-40f, 0x1.6443a2p-81f, 0.0f, 0.0f,
     0x1.bf2cecp-106f, 0.0f, 0.0f, 0x1.deba1ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.86144ep-59f, 0.0f, 0x1.e085f6p-23f, 0.0f, 0x1.a6fd92p-97f,
     0x1.a4a0cep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5f972p-121f, 0x1.78e2d2p-9f,
     0x1.0013cp-2f, 0x1.8a141cp-8f, 0.0f, 0x1.d6db3p-125f, 0x1.8b4b04p-3f, 0.0f, 0.0f,
     0x1.a1e3d2p-107f, 0.0f, 0x1.26f7f8p-5f, 0.0f, 0x1.dc865cp-24f, 0x1.acae12p-63f,
     0x1.7f06a6p-65f, 0x1.7b755p-34f, 0.0f, 0x1.bf806cp-62f, 0.0f, 0.0f,
     0x1.a68a7ap-33f, 0.0f, 0x1.b7801p-71f, 0x1.0897dp-4f, 0x1.d72044p-42f,
     0x1.a24114p-90f, 0x1.169302p-55f, 0.0f, 0x1.fdbb98p-49f, 0x1.a0f2cep-79f,
     0x1.af81dep-117f, 0.0f, 0.0f, 0.0f, 0x1.25e1fep-54f, 0.0f, 0x1.eee9f6p-21f, 0.0f,
     0.0f, 0x1.ae6aa4p-88f, 0x1.18506cp-55f, 0.0f, 0.0f, 0.0f, 0x1.cfdc5p-32f, 0.0f,
     0x1.8aa16ep-38f, 0x1.c595a8p-103f, 0.0f, 0x1.81cf7cp-64f, 0x1.483c12p-69f,
     0x1.e4ab4ap-97f, 0x1.094a9p-20f, 0.0f, 0.0f, 0x1.2a1b4cp-28f, 0x1.38574ep-52f,
     0.0f, 0x1.4b060ap-33f, 0x1.035e04p-21f, 0x1.be51bp-109f, 0x1.d08c3p-102f, 0.0f,
     0x1.689bc4p-82f, 0.0f, 0.0f, 0x1.b0a534p-39f, 0.0f, 0x1.5d7f1ep-11f,
     0x1.c1ce6ap-126f, 0x1.a19648p-63f, 0.0f, 0x1.3b362cp-110f, 0x1.e80496p-98f,
     0x1.1b7c28p-64f, 0x1.c8fa12p-110f, 0x1.3cea14p-108f, 0.0f, 0x1.7999d2p-11f,
     0x1.e3335ap-105f, 0.0f, 0.0f, 0x1.87eb74p-63f, 0x1.22c476p-5f, 0.0f,
     0x1.b445e4p-71f, 0x1.127eb2p-118f, 0.0f, 0.0f, 0x1.8fc9e8p-120f, 0x1.662176p-1f,
     0.0f, 0x1.2b29c6p-3f, 0x1.de4fep-74f, 0x1.6284cp-70f, 0.0f, 0x1.eff39ep-67f,
     0x1.2ebbd8p-7f, 0x1.ea677cp-1f, 0.0f, 0.0f, 0.0f, 0x1.9309a2p-100f, 0.0f,
     0x1.d598dap-42f, 0x1.4affdep-77f, 0.0f, 0.0f, 0.0f, 0x1.ffc17p-119f, 0.0f,
     0x1.51b286p-45f, 0.0f, 0.0f, 0.0f, 0x1.180996p-22f, 0.0f, 0x1.fc4e86p-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0ae48p-6f, 0x1.9fca98p-36f, 0x1.6a394ep-94f,
     0x1.aa2b5ap-3f, 0x1.292d2cp-51f, 0x1.9c8c7cp-106f, 0.0f, 0.0f, 0x1.ee34p-12f,
     0.0f, 0.0f, 0.0f, 0x1.9a7b16p-22f, 0.0f, 0.0f, 0.0f, 0x1.1501b6p-43f,
     0x1.a420a4p-11f, 0.0f, 0x1.a61c3ep-67f, 0.0f, 0x1.30b724p-82f, 0x1p0f,
     0x1.39bb8cp-18f, 0.0f, 0x1.dc5fbp-18f, 0x1.e7adb8p-6f, 0.0f, 0.0f, 0.0f,
     0x1.bf9b0cp-10f, 0.0f, 0x1.adb674p-48f, 0.0f, 0.0f, 0.0f, 0x1.b8b01p-97f,
     0x1.619p-90f, 0x1.8a0306p-73f, 0x1.04862p-23f, 0.0f, 0x1.519664p-126f, 0.0f,
     0x1.ad56bap-70f, 0x1.a943cep-56f, 0x1.4fe312p-113f, 0x1.e8f95ep-26f,
     0x1.a2d1fp-69f, 0.0f, 0.0f, 0.0f, 0x1.f16ea2p-38f, 0.0f, 0x1.d042b2p-89f,
     0x1.4bfb42p-114f, 0x1.0a39fcp-114f, 0.0f, 0.0f, 0.0f, 0x1.36a272p-6f,
     0x1.ec225ep-17f, 0.0f, 0x1.2ad404p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a21c08p-4f,
     0x1.e9f7eap-83f, 0.0f, 0x1.fab624p-105f, 0x1.a3baecp-1f, 0.0f, 0x1.f1a434p-74f,
     0x1.94e4aep-117f, 0x1.55bd3ep-12f, 0x1.27b85cp-105f, 0.0f, 0x1.25dddcp-7f,
     0x1.d7153ep-86f, 0x1.559ec4p-56f, 0.0f, 0.0f, 0x1.b6bd34p-10f, 0x1.2fd40cp-113f,
     0x1.a78cc8p-118f, 0.0f, 0x1.7578a8p-53f, 0.0f, 0x1.b83fd4p-14f, 0.0f,
     0x1.1d5eaap-87f, 0x1.4d25c6p-78f, 0.0f, 0.0f, 0x1.d415dap-104f, 0x1.f6430cp-113f,
     0x1.5fff78p-76f, 0x1.990c8ep-69f, 0x1.fe9304p-46f, 0x1.733652p-72f,
     0x1.05f546p-20f, 0.0f, 0x1.51caaap-125f, 0x1.ebb74p-27f, 0.0f, 0x1.a4cf3cp-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.255ba2p-39f, 0.0f, 0x1.0c9222p-52f, 0.0f, 0x1p0f,
     0x1.c33a72p-79f, 0.0f, 0x1.e2fdc8p-35f, 0.0f, 0.0f, 0x1.05ccb8p-59f, 0.0f,
     0x1.7e602cp-58f, 0.0f, 0x1.bc41b2p-116f, 0x1.f77352p-14f, 0.0f, 0x1.953c54p-13f,
     0.0f, 0.0f, 0.0f, 0x1.4417bap-17f, 0.0f, 0x1.17264p-9f, 0x1.fef824p-38f, 0.0f,
     0.0f, 0x1.f60f26p-118f, 0x1.5ce94ap-46f, 0x1.709602p-71f, 0x1.9c879ep-21f,
     0x1.396034p-68f, 0.0f, 0.0f, 0x1.ec14fap-60f, 0x1.0139e6p-32f, 0x1.df0dfp-7f,
     0.0f, 0.0f, 0x1.5139c2p-70f, 0x1.ad05a4p-19f, 0.0f, 0.0f, 0x1.6524a4p-79f,
     0x1.8b614ap-11f, 0.0f, 0.0f, 0x1.947c68p-91f, 0x1.fabfbep-48f, 0x1.527fc2p-33f,
     0.0f, 0.0f, 0x1.938dcp-48f, 0x1.b7c7cp-60f, 0.0f, 0.0f, 0.0f, 0x1.3395d4p-39f,
     0.0f, 0.0f, 0x1.128c38p-113f, 0.0f, 0x1.3f613ep-13f, 0.0f, 0.0f, 0x1.ae732ep-7f,
     0x1.a0137ep-117f, 0.0f, 0x1.3365b6p-74f, 0x1.22912p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d2562p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0c42ep-28f, 0.0f, 0.0f, 0.0f,
     0x1.96e5ep-73f, 0.0f, 0x1.134658p-85f, 0.0f, 0x1.f5895ep-7f, 0x1.0bf074p-53f,
     0.0f, 0x1.196d12p-32f, 0x1.2281e2p-49f, 0x1.3d99a2p-63f, 0x1.f63e7p-109f,
     0x1.6aca1p-122f, 0.0f, 0.0f, 0x1.00a63p-102f, 0.0f, 0.0f, 0x1.0b4678p-102f,
     0x1.090686p-103f, 0.0f, 0x1.cfc312p-49f, 0.0f, 0.0f, 0x1.5fdecap-109f,
     0x1.953ddcp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d1a72p-10f, 0x1.4b9136p-42f,
     0.0f, 0.0f, 0.0f, 0x1.cae3d4p-85f, 0x1.dca17cp-35f, 0x1.94101cp-110f,
     0x1.2bce5ap-107f, 0.0f, 0.0f, 0x1.4a14bcp-62f, 0.0f, 0x1.cae358p-93f, 0.0f,
     0x1.f43c2p-47f, 0x1.a60944p-36f, 0.0f, 0x1.8abcc8p-39f, 0x1.6f008ep-125f, 0.0f,
     0.0f, 0x1.b5c60ap-126f, 0.0f, 0x1.299628p-107f, 0x1.3933acp-62f,
     0x1.ae99cep-107f, 0.0f, 0.0f, 0x1.388c0ep-46f, 0x1.6b8542p-95f, 0.0f,
     0x1.69724p-101f, 0x1.b787aap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.492838p-123f,
     0x1.88994ap-118f, 0x1.c9c49ap-68f, 0.0f, 0.0f, 0x1.785e62p-50f, 0.0f,
     0x1.31951p-124f, 0.0f, 0x1.874982p-71f, 0x1.333a64p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7546ap-70f, 0x1.e177e8p-6f, 0x1.8d56cap-73f, 0.0f, 0x1.5553c8p-58f, 0.0f,
     0x1.60c184p-12f, 0.0f, 0.0f, 0.0f, 0x1.024ebcp-22f, 0x1.341056p-53f, 0.0f, 0.0f,
     0.0f, 0x1.912dd2p-6f, 0.0f, 0x1.66ebcap-103f, 0.0f, 0.0f, 0.0f, 0x1.5b869cp-58f,
     0x1.c3666cp-120f, 0x1.715028p-94f, 0x1.668ff4p-118f, 0x1.e4c15ep-10f,
     0x1.439f42p-89f, 0x1.9f790ep-122f, 0.0f, 0.0f, 0x1.690266p-65f, 0.0f,
     0x1.3525aep-43f, 0.0f, 0.0f, 0x1.fbafb4p-2f, 0.0f, 0.0f, 0x1.d8db38p-40f, 0.0f,
     0.0f, 0.0f, 0x1.d109c2p-7f, 0x1.02e4dep-17f, 0.0f, 0x1.474b36p-8f,
     0x1.46dffap-9f, 0.0f, 0.0f, 0x1.e7666cp-38f, 0.0f, 0.0f, 0x1.1d18b6p-104f,
     0x1.f65706p-74f, 0x1.c9db74p-60f, 0.0f, 0x1.df6d58p-51f, 0.0f, 0x1.108eaep-1f,
     0x1.9548c8p-122f, 0x1.50be58p-17f, 0.0f, 0.0f, 0x1.d9961p-49f, 0x1.a212d2p-56f,
     0.0f, 0x1.ca032ep-111f, 0.0f, 0.0f, 0x1.9082e8p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3e312p-27f, 0.0f, 0.0f, 0.0f, 0x1.179f24p-16f, 0x1.83d2eap-87f,
     0x1.d76524p-11f, 0.0f, 0x1.ddbf46p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0e9b68p-49f, 0x1.3a5feap-82f, 0x1.4574cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.82c3eap-88f, 0.0f, 0.0f, 0x1.462462p-49f, 0x1.a9ceacp-86f, 0x1.60a8cap-70f,
     0x1.462cbap-75f, 0.0f, 0x1.7eb03ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07e734p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31749ap-117f, 0.0f,
     0x1.bc9a26p-125f, 0x1.983bd6p-75f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.09138cp-101f,
     0x1.67b548p-42f, 0.0f, 0x1.bca39ep-76f, 0.0f, 0.0f, 0x1.4e6a14p-120f, 0.0f, 0.0f,
     0x1.b6e088p-57f, 0x1.60f296p-40f, 0.0f, 0.0f, 0x1.5a8fb6p-66f, 0.0f, 0.0f,
     0x1.edcd7cp-3f, 0.0f, 0.0f, 0x1.b81df8p-30f, 0x1.ccb446p-95f, 0.0f,
     0x1.69150cp-124f, 0.0f, 0.0f, 0x1.4c33bep-2f, 0x1.f4cedp-104f, 0.0f,
     0x1.49ae2p-78f, 0.0f, 0.0f, 0.0f, 0x1.fcbe4cp-20f, 0.0f, 0.0f, 0x1.66f3e4p-30f,
     0.0f, 0.0f, 0x1.96541p-70f, 0x1.3d2a84p-43f, 0x1.411f4cp-34f, 0x1.febd3cp-29f,
     0x1.4caa9cp-70f, 0.0f, 0.0f, 0x1.f51e1ap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cca82p-65f, 0.0f, 0.0f, 0x1.c8d6f4p-75f, 0.0f, 0x1.e05d2ep-71f,
     0x1.ededb6p-101f, 0x1.0472e2p-78f, 0.0f, 0x1.0c406ep-98f, 0.0f, 0x1.b62c62p-118f,
     0.0f, 0.0f, 0x1.4efa9cp-7f, 0.0f, 0x1.306a8ep-24f, 0.0f, 0x1.d3c458p-31f, 0.0f,
     0x1.b05b0ap-25f, 0x1.60a7cp-102f, 0.0f, 0.0f, 0.0f, 0x1.209c64p-43f, 0.0f, 0.0f,
     0.0f, 0x1.1bcfcp-30f, 0x1.c05296p-111f, 0x1.42d02ep-26f, 0.0f, 0.0f, 0.0f,
     0x1.720a6cp-19f, 0.0f, 0x1.cd2c74p-112f, 0.0f, 0.0f, 0x1.57ecb2p-1f, 0.0f,
     0x1.e26592p-78f, 0.0f, 0.0f, 0.0f, 0x1.7e1f42p-28f, 0x1.22f224p-119f,
     0x1.914e1ep-19f, 0x1.36a19cp-25f, 0.0f, 0.0f, 0.0f, 0x1.d61dc4p-70f,
     0x1.6ed93p-26f, 0x1.c2641cp-24f, 0x1.d3cdc8p-17f, 0.0f, 0.0f, 0x1.31fc8ap-105f,
     0x1.3bdaaep-64f, 0x1.fce0f4p-112f, 0x1.b6b6d6p-17f, 0.0f, 0x1.023dbp-21f, 0.0f,
     0x1.434b06p-62f, 0x1.782a66p-85f, 0x1.95140ep-76f, 0.0f, 0.0f, 0.0f,
     0x1.62eedap-67f, 0x1.d96e18p-35f, 0x1.bd2c7p-32f, 0x1.4e6d24p-110f,
     0x1.20c8dcp-117f, 0.0f, 0.0f, 0x1.1cff4p-85f, 0x1.636c48p-62f, 0.0f,
     0x1.7bb9bap-79f, 0x1.211c52p-23f, 0.0f, 0x1.a67384p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cce8c4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51035ep-111f, 0x1.4d606p-119f, 0.0f,
     0x1.c70998p-38f, 0x1.284f0ap-1f, 0x1.492946p-100f, 0.0f, 0x1.538a9ap-82f,
     0x1.0127dcp-73f, 0x1.1ea928p-109f, 0x1.50cbb8p-47f, 0x1.815cb8p-64f,
     0x1.5e9b64p-107f, 0x1.f19b6cp-61f, 0x1.0f7d9ap-33f, 0x1.47bed8p-105f,
     0x1.b29764p-3f, 0x1.a73076p-23f, 0x1.6d7abap-90f, 0.0f, 0x1.917138p-18f,
     0x1.f491e2p-119f, 0.0f, 0.0f, 0x1.812f04p-48f, 0x1.c78d34p-48f, 0.0f,
     0x1.d1a894p-61f, 0x1.aa1ffp-47f, 0x1.3045d8p-60f, 0.0f, 0.0f, 0x1.5ed1fap-124f,
     0x1.37a342p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df16e6p-98f, 0x1.3082bap-94f,
     0x1.b04a3cp-58f, 0x1.0ac602p-119f, 0.0f, 0x1.bfabaep-45f, 0x1.4644e2p-63f,
     0x1.028d58p-99f, 0x1.b096c2p-107f, 0x1.681bd6p-98f, 0x1.65859p-6f, 0.0f,
     0x1.66009p-19f, 0.0f, 0x1.15ee9ep-55f, 0x1.82e5dep-64f, 0x1.fffc46p-12f, 0.0f,
     0x1.e8266ap-50f, 0.0f, 0.0f, 0.0f, 0x1.9a1192p-79f, 0.0f, 0.0f, 0.0f,
     0x1.af63ap-68f, 0.0f, 0x1.c7c20cp-95f, 0.0f, 0x1.5fe37p-120f, 0x1.266b98p-124f,
     0.0f, 0x1.870e68p-32f, 0x1.34e242p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.765d68p-72f, 0.0f, 0.0f, 0x1.32a654p-34f, 0.0f, 0.0f, 0x1.eab13cp-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.13c046p-112f, 0x1.c96c2p-112f, 0x1.a700eep-59f,
     0x1.a746bp-92f, 0x1.b36dcep-40f, 0x1.dc903p-30f, 0x1.551d32p-94f, 0.0f,
     0x1.a934b8p-54f, 0x1.98e8e4p-117f, 0x1.49adeap-34f, 0x1.397c9p-49f,
     0x1.8a37c6p-118f, 0.0f, 0.0f, 0.0f, 0x1.aa7576p-63f, 0x1.663a3p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5078d6p-124f, 0.0f, 0.0f,
     0x1.e7456cp-71f, 0.0f, 0x1.c5e0a4p-84f, 0x1.6957b4p-104f, 0x1.2ec6fap-103f,
     0x1p0f, 0x1.f838fp-79f, 0x1.07c5eap-43f, 0.0f, 0x1.c4fcd6p-87f, 0.0f, 0.0f,
     0x1.275526p-25f, 0x1.a1361ep-122f, 0x1.bdcd1cp-33f, 0x1.0db23p-124f, 0.0f, 0.0f,
     0x1.c07a24p-12f, 0x1.835eacp-20f, 0.0f, 0.0f, 0.0f, 0x1.d5062cp-111f, 0.0f,
     0x1.a34512p-71f, 0x1.ab5c7cp-112f, 0.0f, 0.0f, 0.0f, 0x1.77eefp-118f,
     0x1.1b63e8p-121f, 0.0f, 0.0f, 0x1.6bdacap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d8890ap-7f, 0.0f, 0x1.ea8f0ep-43f, 0.0f, 0x1.62247cp-92f, 0x1.4706f8p-52f,
     0.0f, 0.0f, 0x1.6ef68cp-113f, 0.0f, 0x1.e1b4aep-49f, 0.0f, 0.0f, 0.0f,
     0x1.dd6f96p-16f, 0.0f, 0x1.db91dcp-90f, 0x1.b87b5ep-1f, 0.0f, 0.0f, 0.0f,
     0x1.5757eap-123f, 0.0f, 0.0f, 0.0f, 0x1.aaf41ep-14f, 0.0f, 0x1.f3196ep-35f, 0.0f,
     0.0f, 0x1.529814p-37f, 0x1.774008p-31f, 0x1.0b52a6p-13f, 0x1.c011f4p-124f,
     0x1.7ea946p-40f, 0.0f, 0x1.97d2f8p-90f, 0.0f, 0x1.d9947ap-115f, 0x1.bd20a6p-47f,
     0.0f, 0x1.142a1cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85b7fp-99f, 0.0f,
     0x1.8ed0fcp-46f, 0.0f, 0x1.a61128p-120f, 0.0f, 0x1.651552p-7f, 0.0f, 0.0f,
     0x1.b483acp-63f, 0.0f, 0x1.7be7d2p-105f, 0x1.d40a42p-122f, 0x1.301f8p-68f, 0.0f,
     0x1.90dc7cp-121f, 0.0f, 0.0f, 0x1.e697d8p-10f, 0x1.735746p-31f, 0.0f,
     0x1.dc2bb2p-124f, 0.0f, 0.0f, 0x1.2e60c6p-98f, 0.0f, 0.0f, 0x1.db3aaep-125f,
     0x1.2e9814p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0310cep-78f, 0.0f,
     0x1.83c09p-73f, 0x1.b87526p-47f, 0.0f, 0x1.ee294p-46f, 0x1.d0211p-106f, 0.0f,
     0x1.9831cep-58f, 0.0f, 0x1.f2d9c8p-17f, 0x1.210f06p-89f, 0.0f, 0x1.6b3fe2p-117f,
     0.0f, 0x1.49d81p-57f, 0x1.60c6e4p-118f, 0x1.b49f02p-13f, 0x1.3f1368p-62f,
     0x1.85ee0ap-67f, 0x1.b5b1dep-19f, 0x1.b43a42p-72f, 0.0f, 0x1.e42508p-17f,
     0x1.3438cp-108f, 0.0f, 0.0f, 0x1.7ab36cp-80f, 0x1.91c5ccp-60f, 0.0f, 0.0f,
     0x1.73216ap-62f, 0x1.935232p-14f, 0x1.dd2f4cp-117f, 0.0f, 0x1.62e7dap-75f,
     0x1.cc9c12p-125f, 0.0f, 0.0f, 0.0f, 0x1.0bc6dp-45f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_log2f4_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_log2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
