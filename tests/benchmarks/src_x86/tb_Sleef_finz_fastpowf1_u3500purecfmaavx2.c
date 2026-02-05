/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastpowf1_u3500purecfma.c --function \
 *     Sleef_finz_fastpowf1_u3500purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.1e3d72p-94f, 0x1.35415cp-6f, 0x1.fd9c64p-122f, 0.0f, 0x1.804588p-87f,
     0x1.21cfccp-97f, 0x1.70cd16p-4f, 0x1.67bbf2p-30f, 0.0f, 0x1.31ba5p-78f, 0.0f,
     0.0f, 0x1.7b2e44p-126f, 0x1.aa72dcp-1f, 0.0f, 0x1.afc4bap-111f, 0.0f, 0.0f,
     0x1.552298p-45f, 0.0f, 0x1.f5836ap-22f, 0.0f, 0x1.248d72p-79f, 0x1.f5294ep-72f,
     0.0f, 0.0f, 0.0f, 0x1.93e076p-38f, 0.0f, 0.0f, 0x1.69451ep-70f, 0x1.a373a6p-74f,
     0x1.b6e2d6p-53f, 0x1.9a9b36p-40f, 0x1.65b23ep-90f, 0.0f, 0.0f, 0.0f,
     0x1.26373p-63f, 0x1.0a2686p-81f, 0x1.df360ep-113f, 0x1.6f611p-39f,
     0x1.4cb478p-16f, 0x1.0831acp-79f, 0x1.801c52p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.034972p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01e972p-70f,
     0x1.679f1ep-57f, 0x1.eac484p-103f, 0x1.d67cp-46f, 0.0f, 0.0f, 0x1.8ab108p-34f,
     0x1.069a9p-46f, 0.0f, 0.0f, 0x1.f5daa2p-117f, 0x1.7e2ad6p-112f, 0.0f, 0.0f,
     0x1.e89384p-109f, 0x1.8e7942p-98f, 0x1.bb4598p-65f, 0x1.24ed8ap-106f, 0.0f, 0.0f,
     0x1.0c0fe2p-45f, 0x1.99023p-6f, 0x1.4eabp-54f, 0x1.d1ec7p-77f, 0x1.b69ffcp-90f,
     0x1.ef43b2p-12f, 0.0f, 0.0f, 0.0f, 0x1.ec4ef8p-37f, 0.0f, 0.0f, 0x1.d2728ep-85f,
     0x1.9e83b8p-96f, 0x1.84233ep-92f, 0x1.b4edep-81f, 0x1.d30634p-7f, 0.0f,
     0x1.5dd98cp-119f, 0.0f, 0.0f, 0x1.783432p-74f, 0.0f, 0.0f, 0x1.c5bc9cp-86f, 0.0f,
     0x1.d6addep-86f, 0x1.665306p-110f, 0.0f, 0.0f, 0.0f, 0x1.c9b46p-125f, 0.0f, 0.0f,
     0x1.338ca2p-123f, 0.0f, 0.0f, 0x1.37fbf4p-73f, 0.0f, 0.0f, 0x1.17335ap-73f,
     0x1.9305e4p-51f, 0.0f, 0x1.d2fd8p-88f, 0x1p0f, 0.0f, 0.0f, 0x1.e22398p-122f,
     0.0f, 0x1.f0bcc4p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da6f66p-103f,
     0.0f, 0.0f, 0x1.601a1cp-81f, 0.0f, 0x1p0f, 0x1.90074ap-89f, 0x1.c197fep-26f,
     0.0f, 0x1.28ba7cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09bee2p-59f,
     0x1.541d52p-123f, 0.0f, 0x1.4e8594p-113f, 0x1.f40696p-87f, 0.0f, 0x1.50489p-5f,
     0x1.0dcec8p-49f, 0x1.7ab3f2p-35f, 0.0f, 0.0f, 0x1.24159ep-58f, 0.0f,
     0x1.4ad3ccp-92f, 0.0f, 0x1.855d3cp-9f, 0.0f, 0x1.b288b2p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d71272p-58f, 0x1.abe434p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0e366p-39f, 0x1.e7f724p-3f, 0.0f, 0x1.82965cp-68f, 0.0f, 0.0f,
     0x1.45bb76p-17f, 0.0f, 0x1.13146p-118f, 0.0f, 0x1.352162p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2d1d6ap-25f, 0.0f, 0.0f, 0x1.b92448p-104f, 0x1.c1774ap-57f, 0.0f, 0.0f,
     0x1.42bc4ep-49f, 0.0f, 0x1.f8543cp-3f, 0x1.143dap-50f, 0.0f, 0x1.7ea2a6p-55f,
     0x1.fc2b24p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51435cp-99f, 0x1.724c1ep-78f,
     0x1.995602p-50f, 0x1.ac7224p-100f, 0x1.1daebp-76f, 0.0f, 0.0f, 0x1.be2f46p-104f,
     0x1.c3210cp-56f, 0.0f, 0.0f, 0x1.5d5b48p-31f, 0.0f, 0x1.015658p-52f,
     0x1.54e10ep-43f, 0x1.cd3822p-49f, 0x1.0f1b9cp-45f, 0.0f, 0x1.00c14cp-58f,
     0x1.29be86p-86f, 0x1.a5c6c2p-62f, 0.0f, 0x1.5ebb16p-103f, 0x1.4571c6p-68f, 0.0f,
     0.0f, 0.0f, 0x1.a73e7p-55f, 0x1.130094p-78f, 0x1.346adcp-93f, 0.0f,
     0x1.512e8cp-40f, 0x1.933356p-104f, 0x1.1ec2d4p-112f, 0x1.f95dccp-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f148ep-43f, 0.0f, 0x1.b62b84p-73f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f262dap-47f, 0.0f, 0.0f, 0x1.a7b242p-92f, 0x1.0ae4e4p-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.66370ep-60f, 0x1.764d2ap-68f, 0.0f, 0.0f, 0x1.5b7e5ep-119f,
     0.0f, 0x1.8cf55cp-15f, 0x1.78853cp-81f, 0.0f, 0x1.bfbe3p-57f, 0x1.406d4p-107f,
     0.0f, 0x1.db5296p-49f, 0.0f, 0x1.8f4eb6p-66f, 0.0f, 0.0f, 0x1.e0f05cp-48f, 0.0f,
     0.0f, 0x1.032968p-76f, 0x1.1e33d2p-8f, 0x1.361896p-78f, 0x1.990682p-96f,
     0x1.a83596p-80f, 0.0f, 0x1.152fap-18f, 0.0f, 0.0f, 0x1.84b242p-111f, 0.0f, 0.0f,
     0x1.d7c29p-87f, 0x1.5a19aap-98f, 0.0f, 0.0f, 0.0f, 0x1.ef0148p-59f,
     0x1.a15eep-61f, 0x1.17a218p-16f, 0x1.2f8ff6p-18f, 0x1.49be1cp-49f, 0.0f, 0.0f,
     0x1.76794cp-21f, 0.0f, 0.0f, 0x1.1769d4p-40f, 0x1.c268d4p-122f, 0x1.e0a786p-39f,
     0x1.14bafep-108f, 0.0f, 0.0f, 0x1.a543d6p-66f, 0x1.964718p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7f4b08p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.549e14p-64f, 0.0f,
     0x1.82ef4cp-120f, 0.0f, 0x1.05b508p-98f, 0.0f, 0x1.8dc22p-114f, 0x1.eef758p-9f,
     0x1.4a2746p-48f, 0x1.03b75p-126f, 0.0f, 0x1.29229ep-1f, 0x1.634734p-20f, 0.0f,
     0.0f, 0x1.633a64p-126f, 0.0f, 0x1.90789p-60f, 0x1.6b3e1ap-63f, 0x1.92639p-60f,
     0.0f, 0x1.29720ep-102f, 0x1.14dfb4p-52f, 0.0f, 0.0f, 0.0f, 0x1.87fb46p-120f,
     0x1.ead732p-92f, 0x1.853b8ap-22f, 0.0f, 0.0f, 0x1.df29p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ec3b8ap-53f, 0.0f, 0.0f, 0x1.1fa118p-82f, 0.0f, 0x1.5dec98p-55f,
     0x1.700bb4p-115f, 0.0f, 0x1.1f5a68p-52f, 0x1.96bdf4p-67f, 0x1.dc85c2p-52f, 0.0f,
     0x1.02e8dcp-54f, 0x1.ff736cp-70f, 0x1.739d86p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f1bfcp-43f, 0x1.1ec09ap-81f, 0.0f, 0x1.490f2cp-122f, 0.0f, 0.0f,
     0x1.196ccap-19f, 0x1.45867p-77f, 0x1.6f46ap-50f, 0.0f, 0x1.fc8892p-9f,
     0x1.ea60d2p-67f, 0x1.7851dap-46f, 0.0f, 0x1.57fa34p-3f, 0x1.b99f6cp-62f,
     0x1.7f327cp-68f, 0x1.6b368ap-12f, 0x1.03ee82p-49f, 0.0f, 0x1.45dbbep-17f,
     0x1.51752ep-122f, 0.0f, 0x1.8c9408p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7869cap-77f, 0x1.df8ed4p-78f, 0.0f, 0x1.43b88ep-36f, 0x1.5efeaap-117f, 0.0f,
     0x1.407764p-82f, 0x1.57c5d2p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc03ap-95f,
     0x1.54ed08p-19f, 0x1.f4b32ep-99f, 0x1.14bb8ap-5f, 0x1.08807ap-31f,
     0x1.8f31ep-72f, 0x1.6d9c2cp-70f, 0.0f, 0x1.31d31ep-26f, 0x1.ad293ep-101f, 0.0f,
     0.0f, 0x1.92e5eap-64f, 0.0f, 0.0f, 0x1.40c64p-107f, 0.0f, 0x1.e24284p-63f, 0.0f,
     0x1.711644p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90118ap-11f, 0.0f,
     0x1.c8260ap-112f, 0.0f, 0.0f, 0.0f, 0x1.c44fd8p-1f, 0.0f, 0x1.3b21cep-54f,
     0x1.411b2p-38f, 0x1.b06c76p-109f, 0x1.35bed8p-37f, 0.0f, 0x1.329566p-41f, 0.0f,
     0x1.6f295ep-59f, 0.0f, 0.0f, 0x1.d6d3cap-30f, 0.0f, 0.0f, 0x1.9f74c4p-41f, 0.0f,
     0x1.93af66p-65f, 0x1.3ac7c2p-11f, 0.0f, 0.0f, 0x1.d67f36p-14f, 0.0f,
     0x1.d5228ap-8f, 0.0f, 0.0f, 0x1.094366p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3c0e26p-20f, 0.0f, 0x1.a396c8p-113f, 0x1.244d58p-103f,
     0x1.dc3e4ap-97f, 0x1.edd6bep-96f, 0.0f, 0x1.9a4a36p-104f, 0x1.f8879ep-3f,
     0x1.470c9ap-111f, 0.0f, 0x1.7260dcp-46f, 0x1.bcdaap-73f, 0.0f, 0x1.75e908p-112f,
     0.0f, 0x1.eb4bbep-22f, 0x1.699b5cp-29f, 0.0f, 0x1.6006eap-25f, 0.0f,
     0x1.40ebcap-113f, 0.0f, 0x1.d7955p-112f, 0x1.211602p-119f, 0.0f, 0.0f, 0.0f,
     0x1.927d88p-37f, 0x1.a40b54p-49f, 0x1.3cfba8p-14f, 0x1.eeb4e4p-2f, 0.0f,
     0x1.5bce36p-86f, 0x1.f6a6ap-60f, 0x1.b4351ap-16f, 0x1.baecacp-63f, 0.0f,
     0x1.acccdcp-54f, 0.0f, 0.0f, 0x1.48cc42p-56f, 0x1.10ae76p-60f, 0x1.efed92p-61f,
     0.0f, 0.0f, 0.0f, 0x1.102d92p-59f, 0x1.160866p-93f, 0x1.720558p-46f,
     0x1.4ce3bcp-25f, 0.0f, 0.0f, 0x1.770448p-27f, 0.0f, 0x1.763636p-12f, 0.0f,
     0x1.81eeep-9f, 0.0f, 0.0f, 0.0f, 0x1.5f17d4p-10f, 0x1.22f8fp-59f,
     0x1.15226ep-57f, 0.0f, 0x1.51a336p-126f, 0x1.e38f4ep-88f, 0x1.bc199ep-76f,
     0x1.3f707ep-42f, 0x1.bf274p-77f, 0x1.f66096p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b0528p-113f, 0.0f, 0x1.8dee64p-106f, 0x1.db2c16p-40f, 0x1.d68814p-54f, 0.0f,
     0x1.1f3d0ep-121f, 0.0f, 0x1.43e5c6p-3f, 0x1.4a754cp-82f, 0.0f, 0x1.fabd7cp-54f,
     0x1.2bcf9cp-116f, 0.0f, 0.0f, 0x1.885bep-44f, 0x1.70593cp-36f, 0x1.23426ap-100f,
     0.0f, 0.0f, 0.0f, 0x1.f56612p-58f, 0x1.7308c6p-101f, 0.0f, 0.0f,
     0x1.ced0a2p-124f, 0.0f, 0x1.058e0ap-28f, 0.0f, 0x1.a788bcp-109f, 0.0f, 0.0f,
     0.0f, 0x1.47595ap-29f, 0.0f, 0x1.0533e6p-89f, 0.0f, 0x1.990b2cp-50f,
     0x1.6b31dep-98f, 0.0f, 0x1.fa015ep-106f, 0.0f, 0.0f, 0x1.68e412p-40f, 0.0f,
     0x1.1ba3acp-30f, 0x1.fc3886p-118f, 0.0f, 0x1.0943fep-56f, 0x1.b64cbep-79f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.3a865cp-85f, 0x1.90bfb6p-30f, 0.0f, 0.0f,
     0x1.1f99d6p-24f, 0x1.583f9p-104f, 0x1.14b14ep-55f, 0x1.f398dcp-14f,
     0x1.0c46d8p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.caf0d6p-123f, 0.0f, 0x1.4e6818p-50f,
     0.0f, 0x1.9ec27p-67f, 0x1.5901aap-95f, 0x1.1fcff4p-47f, 0x1.c1a5fp-88f, 0.0f,
     0x1.7beb98p-95f, 0x1.66e39ep-98f, 0.0f, 0.0f, 0x1.229f96p-40f, 0x1.6b465ep-29f,
     0x1.d4c2fep-28f, 0x1.bcb7fcp-16f, 0.0f, 0x1.7f964cp-74f, 0x1.02dfcap-123f,
     0x1.247a44p-45f, 0.0f, 0.0f, 0x1.21c58cp-30f, 0x1.c2e572p-110f, 0x1.c0245ep-72f,
     0.0f, 0x1.be689ap-76f, 0x1.789ee4p-27f, 0.0f, 0.0f, 0.0f, 0x1.bd6f44p-88f,
     0x1.4352e4p-109f, 0x1.93cf76p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.928ap-120f, 0.0f, 0x1.5d2116p-120f, 0.0f, 0.0f, 0.0f, 0x1.aeb9ep-26f,
     0x1.a814bcp-18f, 0.0f, 0.0f, 0x1.ee2438p-125f, 0.0f, 0.0f, 0x1.47fd52p-37f,
     0x1.62b4bap-93f, 0x1.214004p-114f, 0.0f, 0.0f, 0x1.71f0f4p-43f, 0.0f,
     0x1.38042ap-121f, 0.0f, 0.0f, 0x1.d76ff2p-94f, 0.0f, 0x1.905d44p-17f,
     0x1.47155cp-65f, 0x1.fd186ap-29f, 0.0f, 0.0f, 0.0f, 0x1.d826b8p-76f, 0.0f, 0.0f,
     0x1.7c5364p-113f, 0.0f, 0.0f, 0x1.b2bbf6p-83f, 0.0f, 0.0f, 0x1.656ee6p-32f, 0.0f,
     0x1.9682p-17f, 0.0f, 0x1.03bdaap-37f, 0x1.ad30f6p-16f, 0x1.9a0b8ep-76f,
     0x1.09e558p-34f, 0.0f, 0x1.1c6644p-57f, 0.0f, 0.0f, 0x1.f39b5ep-42f,
     0x1.18573p-110f, 0.0f, 0.0f, 0.0f, 0x1.7c1becp-98f, 0x1.4ec9f2p-9f,
     0x1.ec1e66p-125f, 0x1.073d62p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1195ep-3f, 0.0f,
     0.0f, 0x1.c8dcd4p-99f, 0x1.7df882p-113f, 0x1.9adf3p-81f, 0.0f, 0x1.709bc2p-92f,
     0.0f, 0x1.089b1ap-84f, 0x1.7e6c1ap-112f, 0x1.19e878p-25f, 0.0f, 0.0f, 0.0f,
     0x1.e925bep-79f, 0x1.bedf8ep-110f, 0x1.d250ecp-94f, 0.0f, 0x1.13750ep-60f, 0.0f,
     0.0f, 0.0f, 0x1.826832p-12f, 0.0f, 0.0f, 0x1.02af2ap-116f, 0x1.ea5406p-29f,
     0x1.6c6d54p-26f, 0x1.0557fap-121f, 0.0f, 0x1.6f0fdcp-36f, 0.0f, 0x1.c4ec42p-125f,
     0.0f, 0x1.9432f8p-56f, 0x1.f370b8p-53f, 0x1.552edap-2f, 0x1.0c1f8ap-3f, 0.0f,
     0x1.5e981ap-67f, 0x1.388554p-123f, 0.0f, 0.0f, 0x1.a7c96ep-103f, 0.0f, 0.0f,
     0x1.7d0a08p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a30a4p-119f, 0.0f, 0.0f,
     0x1.cde3bp-109f, 0.0f, 0.0f, 0.0f, 0x1.4efb48p-87f, 0.0f, 0.0f, 0x1.1278ep-7f,
     0x1.470d22p-35f, 0.0f, 0x1.407fe4p-34f, 0.0f, 0.0f, 0.0f, 0x1.ce48f6p-16f, 0.0f,
     0x1.13f11ep-73f, 0.0f, 0.0f, 0x1.a6afcap-3f, 0.0f, 0.0f, 0.0f, 0x1.8c6cacp-18f,
     0.0f, 0x1.8071dep-35f, 0x1.e89826p-17f, 0.0f, 0.0f, 0x1.5e8b6p-55f, 0.0f, 0.0f,
     0x1.5d75a6p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.739fcap-124f, 0x1.d0af8p-106f, 0.0f,
     0.0f, 0x1.c3d7ecp-90f, 0x1.d46534p-58f, 0.0f, 0x1.98719ep-64f, 0x1.e23602p-104f,
     0.0f, 0x1.6729f6p-106f, 0x1.cb3122p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a23ac2p-15f,
     0.0f, 0x1.745832p-81f, 0.0f, 0.0f, 0.0f, 0x1.5b58fp-115f, 0.0f, 0x1.487568p-63f,
     0.0f, 0x1.7806c4p-46f, 0.0f, 0x1.cd63ccp-86f, 0.0f, 0.0f, 0x1.740678p-59f,
     0x1.2d4368p-47f, 0x1.463a98p-69f, 0x1.588b42p-101f, 0x1.7078d2p-54f, 0.0f,
     0x1.1bac0ep-89f, 0.0f, 0.0f, 0.0f, 0x1.f7c43ep-86f, 0x1.2cddb6p-47f,
     0x1.98fe12p-74f, 0x1.957ffep-42f, 0.0f, 0x1.b5a98p-84f, 0.0f, 0.0f, 0.0f,
     0x1.82d8b2p-62f, 0x1.b694bep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d1014p-2f,
     0x1.077ffcp-94f, 0.0f, 0.0f, 0x1.ed1b78p-31f, 0.0f, 0x1.aebd9ep-29f,
     0x1.e7ce4cp-68f, 0.0f, 0x1.9f96f6p-19f, 0.0f, 0x1.ded792p-116f, 0x1.8fe55ap-5f,
     0.0f, 0x1.d3f5ccp-26f, 0.0f, 0.0f, 0.0f, 0x1.4368a6p-92f, 0x1.be051cp-89f,
     0x1.ee48f8p-37f, 0x1.e0de76p-105f, 0x1.dc12ecp-90f, 0.0f, 0.0f, 0x1.8abbe4p-103f,
     0.0f, 0x1.ef031ep-17f, 0x1.0b6992p-26f, 0x1.87669ap-12f, 0.0f, 0x1.c7e182p-95f,
     0.0f, 0.0f, 0x1.561b64p-85f, 0x1.9bf078p-46f, 0x1.8010e6p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e3764cp-114f, 0.0f, 0x1.0cd672p-36f, 0x1.3d678p-110f, 0.0f,
     0x1.f0035ep-118f, 0.0f, 0.0f, 0x1.250a62p-67f, 0x1.95a424p-42f, 0x1.2896e4p-28f,
     0x1.aae182p-63f, 0x1.8ad5a4p-101f, 0.0f, 0.0f, 0x1.79587ap-119f,
     0x1.f2857cp-109f, 0.0f, 0.0f, 0x1.f23b86p-97f, 0.0f, 0x1.ec9a96p-79f,
     0x1.b372eap-6f, 0x1.6b03b4p-25f, 0.0f, 0x1.610c7cp-84f, 0.0f, 0.0f,
     0x1.29c0e4p-60f, 0.0f, 0x1.88194ep-57f, 0x1.55f6cep-110f, 0.0f, 0.0f,
     0x1.f33358p-82f, 0.0f, 0x1.4f9988p-78f, 0x1.3bd1a2p-58f, 0.0f, 0x1.8b229p-38f,
     0.0f, 0.0f, 0x1.7c5a08p-50f, 0x1.6a0242p-86f, 0x1.7ad28ep-55f, 0x1.e19f36p-101f,
     0.0f, 0.0f, 0x1.ae9c9ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aef404p-113f, 0.0f,
     0x1.528ed2p-78f, 0x1.76c8f4p-94f, 0.0f, 0x1.822784p-101f, 0.0f, 0x1.5e445ap-74f,
     0x1.736594p-110f, 0x1.45f7bep-21f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.8a6b74p-48f, 0.0f, 0x1.ffbfcp-50f, 0x1.7dd214p-19f, 0.0f, 0x1.f0b094p-121f,
     0x1.101bcap-109f, 0x1.e76e7ep-26f, 0x1.e7562cp-44f, 0.0f, 0x1.e59c2ep-74f,
     0x1.7f6cf6p-114f, 0.0f, 0x1.bbd94p-85f, 0.0f, 0x1.c41846p-107f, 0x1.23f558p-48f,
     0x1.b41686p-109f, 0.0f, 0.0f, 0x1.e05a6ep-27f, 0.0f, 0x1.a73c3ap-11f,
     0x1.b76c8cp-110f, 0x1.4ae982p-34f, 0.0f, 0x1.2ff09ep-79f, 0x1.318972p-121f,
     0x1.882168p-47f, 0.0f, 0x1.fb761cp-66f, 0x1.71fad4p-115f, 0.0f, 0x1.e3f512p-27f,
     0x1.f037a8p-35f, 0.0f, 0x1.be77a8p-28f, 0x1.14fad8p-80f, 0x1.870fa2p-13f, 0.0f,
     0.0f, 0x1.d38ff4p-97f, 0x1.ff3aacp-107f, 0.0f, 0.0f, 0x1.2202f2p-33f,
     0x1.6eaacep-72f, 0.0f, 0x1.2ffd2ap-99f, 0.0f, 0.0f, 0.0f, 0x1.975664p-20f,
     0x1.3d562cp-63f, 0.0f, 0x1.e0633ap-100f, 0.0f, 0x1.2d9a62p-70f, 0x1.183da4p-100f,
     0.0f, 0.0f, 0x1.9fcef6p-99f, 0.0f, 0x1.1faf8p-12f, 0.0f, 0x1.20966cp-26f,
     0x1.56a986p-33f, 0x1.ed9eap-44f, 0x1.e493dcp-45f, 0x1.0a935ep-3f, 0.0f,
     0x1.9d41fap-28f, 0x1.ce4a6cp-72f, 0x1.ed1844p-53f, 0x1.44511p-52f,
     0x1.f4554ep-40f, 0.0f, 0.0f, 0x1.9cdb5ap-57f, 0.0f, 0x1.265348p-47f, 0.0f, 0.0f,
     0.0f, 0x1.80d21p-31f, 0.0f, 0x1.e09d98p-58f, 0x1.f73408p-49f, 0.0f,
     0x1.dfd006p-51f, 0x1.ba554ap-94f, 0x1.1d4998p-32f, 0.0f, 0x1.1a4e3cp-36f, 0.0f,
     0x1.659f28p-103f, 0.0f, 0.0f, 0.0f, 0x1.8c159p-70f, 0.0f, 0.0f, 0.0f,
     0x1.c9ebacp-110f, 0x1.e6df74p-60f, 0x1.6f5ceap-85f, 0.0f, 0x1.476e96p-119f, 0.0f,
     0x1.8cc396p-120f, 0x1.82858ep-48f, 0x1.78a7cep-28f, 0x1.6e60c4p-49f,
     0x1.0f47ccp-96f, 0x1.ecd9fcp-69f, 0x1.82f3dcp-108f, 0x1.484a4p-30f,
     0x1.151c2ep-48f, 0.0f, 0x1.7b942ep-99f, 0x1.2f5266p-108f, 0x1.aa6462p-40f,
     0x1.0c4238p-71f, 0x1.5ef36ep-10f, 0x1.02de92p-115f, 0.0f, 0x1.c4ec92p-22f,
     0x1.0d1de4p-110f, 0.0f, 0.0f, 0x1.cf69e2p-122f, 0x1.81d1a6p-66f,
     0x1.5f1668p-106f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.4523dap-94f, 0x1.8c2674p-46f,
     0x1.18cf5ap-52f, 0x1.b48eb8p-79f, 0.0f, 0.0f, 0.0f, 0x1.1bb74cp-31f, 0.0f, 0.0f,
     0x1p0f, 0x1.d95aacp-62f, 0x1.b6b50ap-97f, 0x1.0d08f2p-103f, 0x1.13fa66p-47f,
     0.0f, 0x1.46c64p-35f, 0x1.99e9dcp-78f, 0x1.a7ddecp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.b63afap-87f, 0.0f, 0.0f, 0.0f, 0x1.e50674p-38f, 0x1.e8b952p-11f,
     0x1.60b02p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5a674p-5f,
     0.0f, 0.0f, 0x1.02cfdep-125f, 0.0f, 0.0f, 0.0f, 0x1.249028p-70f, 0.0f,
     0x1.91ce7cp-84f, 0.0f, 0x1.c31cfap-60f, 0.0f, 0x1.50892ep-62f, 0x1.c66e62p-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.02dfc4p-49f, 0x1.831452p-58f, 0.0f, 0x1.306a7cp-49f,
     0x1.65d7b2p-59f, 0.0f, 0x1.44a24ep-30f, 0x1.9616cp-90f, 0x1.54a02p-27f,
     0x1.ecbb02p-65f, 0.0f, 0x1.b78526p-72f, 0x1.0bcfacp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.370916p-104f, 0x1.a9989ap-114f, 0x1.46360ep-63f, 0.0f, 0x1.6d37acp-41f,
     0x1.ec3d2ap-5f, 0.0f, 0x1.e20b48p-115f, 0.0f, 0.0f, 0x1.d9270cp-100f, 0.0f,
     0x1.a05d88p-66f, 0.0f, 0.0f, 0x1.a0d29cp-69f, 0x1.9cb106p-125f, 0x1.b2d42p-80f,
     0.0f, 0x1.8b124ap-9f, 0x1.dec088p-126f, 0x1.4c3d66p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea6e2p-65f, 0x1.411dap-12f, 0x1.24332ep-14f, 0x1.c7718ap-21f, 0.0f, 0.0f,
     0x1.9175ccp-24f, 0x1.b89bccp-125f, 0x1.c66d64p-47f, 0x1.f38e88p-76f,
     0x1.be3158p-97f, 0x1.34f37ap-29f, 0.0f, 0.0f, 0x1.666dbap-37f, 0.0f, 0.0f,
     0x1.4886fp-65f, 0.0f, 0.0f, 0.0f, 0x1.9ea7fap-118f, 0x1.b3ba9cp-27f, 0.0f, 0.0f,
     0x1.dcdc7ap-62f, 0x1.a394d4p-98f, 0.0f, 0x1.4c9c92p-125f, 0.0f, 0.0f,
     0x1.e37e18p-11f, 0.0f, 0.0f, 0.0f, 0x1.9f9c46p-2f, 0x1.3a179cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.7aaa74p-57f, 0x1.e8a1p-12f, 0.0f, 0.0f, 0x1.7d59bep-57f,
     0x1.dac884p-10f, 0.0f, 0.0f, 0x1.237f98p-45f, 0x1.3de656p-119f, 0x1p0f,
     0x1.6500a8p-105f, 0x1.4f513ep-51f, 0.0f, 0.0f, 0x1.00c49p-54f, 0x1.2e1c0cp-21f,
     0.0f, 0.0f, 0.0f, 0x1.b45a3ep-43f, 0x1.e26556p-124f, 0x1.5e6b66p-37f,
     0x1.153c1p-124f, 0.0f, 0x1.ffa836p-119f, 0x1.dff41ep-16f, 0.0f, 0x1.266fcep-93f,
     0x1.fada44p-32f, 0.0f, 0.0f, 0x1.a9f042p-35f, 0.0f, 0.0f, 0x1.b97028p-85f,
     0x1.a71cep-119f, 0x1.368794p-93f, 0x1.98528p-20f, 0x1.d32832p-60f, 0.0f,
     0x1.fae2fp-72f, 0.0f, 0x1.f5fadp-42f, 0x1.831c9p-118f, 0.0f, 0x1.4bcc06p-110f,
     0x1.c55858p-17f, 0.0f, 0.0f, 0x1.b7ceb8p-37f, 0.0f, 0.0f, 0x1.444a08p-74f,
     0x1.ef8986p-78f, 0x1.b792aep-81f, 0x1.414bdp-14f, 0.0f, 0.0f, 0.0f,
     0x1.ba250ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.7e739p-4f,
     0x1.460bfep-117f, 0.0f, 0x1.f3cd2ap-69f, 0x1.31590ep-24f, 0x1.6a5c68p-14f,
     0x1.767548p-3f, 0x1.09475cp-7f, 0x1.0622bp-91f, 0x1.4e16c2p-2f, 0x1.1b65e6p-8f,
     0.0f, 0x1.0778dcp-116f, 0.0f, 0x1.a89e14p-91f, 0x1.b317e6p-18f, 0x1.b6c942p-1f,
     0.0f, 0x1.f69c7p-92f, 0.0f, 0.0f, 0x1.84ed72p-35f, 0.0f, 0.0f, 0x1.f0e4bep-103f,
     0.0f, 0.0f, 0x1.9600bp-17f, 0.0f, 0.0f, 0x1.2d45bap-61f, 0x1.43e738p-3f,
     0x1.e59eb4p-96f, 0.0f, 0.0f, 0x1.344e2cp-112f, 0.0f, 0x1.e67604p-95f,
     0x1.589ab4p-86f, 0.0f, 0x1.2fa8b8p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7442d2p-108f,
     0x1.d9a8e6p-31f, 0.0f, 0x1.e832bap-88f, 0x1.f458bep-99f, 0.0f, 0.0f,
     0x1.b1792cp-71f, 0x1.e5359ap-89f, 0x1.07c8a2p-29f, 0.0f, 0.0f, 0x1.417018p-71f,
     0.0f, 0.0f, 0x1.36b926p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6f9ep-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2d0da6p-47f, 0.0f, 0x1.2ac92p-106f, 0.0f, 0.0f, 0x1.314acap-99f,
     0.0f, 0x1.1f2f18p-25f, 0.0f, 0.0f, 0x1.4148e4p-41f, 0x1.47dcfcp-52f, 0.0f, 0.0f,
     0.0f, 0x1.ebd294p-113f, 0.0f, 0.0f, 0x1.476a0ap-82f, 0.0f, 0.0f, 0x1.db81bap-45f,
     0x1.929ed2p-81f, 0.0f, 0.0f, 0x1.13f68cp-81f, 0x1.45fd8ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.55db24p-84f, 0.0f, 0.0f, 0x1.705baep-53f, 0.0f, 0.0f, 0x1.4c0614p-41f,
     0x1.052ca8p-110f, 0x1.653454p-85f, 0x1.271b5p-53f, 0x1.81cef8p-72f, 0.0f,
     0x1.73e6d8p-64f, 0x1.61240cp-89f, 0x1.69f29ep-89f, 0.0f, 0.0f, 0x1.84cfcep-99f,
     0.0f, 0.0f, 0x1.c70e02p-42f, 0x1.2ecb08p-37f, 0.0f, 0.0f, 0x1.db7a9ep-67f, 0.0f,
     0x1.4436e2p-21f, 0.0f, 0x1.ba7ea8p-20f, 0.0f, 0x1.888598p-34f, 0x1.dc6dcp-7f,
     0x1.429618p-118f, 0x1.d7dd9ep-7f, 0x1.8c609ep-97f, 0.0f, 0.0f, 0x1.419462p-21f,
     0x1.f4a5bcp-83f, 0x1.3c4174p-103f, 0.0f, 0.0f, 0x1.0ee40ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.d8c1bp-25f, 0.0f, 0.0f, 0.0f, 0x1.ae04f4p-40f, 0.0f, 0.0f,
     0x1.42f15ep-102f, 0.0f, 0x1.4ce34cp-30f, 0x1.e75fcep-30f, 0.0f, 0x1.ed9746p-109f,
     0.0f, 0x1.1b8fd6p-12f, 0.0f, 0.0f, 0x1.4ab8b2p-8f, 0x1.f36d3ep-18f, 0.0f, 0.0f,
     0x1.af8094p-62f, 0x1.80ef7ep-32f, 0x1.1e88f8p-51f, 0x1.05ebbep-11f, 0.0f,
     0x1.003aeep-67f, 0.0f, 0.0f, 0.0f, 0x1.ba94e4p-123f, 0x1.11a37ep-116f, 0.0f,
     0.0f, 0x1.c741a6p-66f, 0x1.85530cp-60f, 0x1.e4ac22p-114f, 0x1.efcc2ep-41f, 0.0f,
     0x1.66cc44p-7f, 0x1.63c65cp-43f, 0.0f, 0x1.815b1ep-58f, 0x1.675a5ep-79f,
     0x1.7eb5e6p-30f, 0x1.b97842p-41f, 0x1.6a5432p-98f, 0.0f, 0x1.529e0ep-65f, 0.0f,
     0.0f, 0x1.159ca2p-60f, 0x1.4240f2p-26f, 0x1.b45916p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a071ap-87f, 0.0f, 0x1.60a4e4p-58f, 0x1.aac0fp-109f, 0.0f, 0.0f,
     0x1.218218p-42f, 0.0f, 0x1.89084ep-55f, 0.0f, 0.0f, 0x1.9cd3d4p-22f, 0.0f,
     0x1.f10172p-107f, 0.0f, 0x1.672ea4p-42f, 0.0f, 0x1.9639bep-112f, 0x1.52903ap-81f,
     0x1.4c7a9ap-1f, 0.0f, 0x1.5454f2p-76f, 0x1.5bfbccp-122f, 0.0f, 0.0f,
     0x1.607594p-29f, 0x1.92460ep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c823cp-28f, 0.0f,
     0x1.888e7ep-114f, 0x1.62341p-56f, 0x1.c4ecd6p-93f, 0.0f, 0x1.d36732p-81f, 0.0f,
     0.0f, 0x1.6d0d44p-65f, 0.0f, 0.0f, 0x1.279b72p-39f, 0x1.895478p-108f,
     0x1.6c8b78p-38f, 0.0f, 0.0f, 0x1.ae9d4cp-24f, 0x1.53ecfep-60f, 0x1.fc522ep-60f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00d4dap-25f, 0.0f, 0x1.968dbap-46f,
     0.0f, 0.0f, 0x1.27c924p-115f, 0x1.82fe7ep-24f, 0x1.d08546p-4f, 0.0f, 0.0f,
     0x1.adbfbcp-112f, 0.0f, 0.0f, 0x1.12f298p-6f, 0x1.bad4d8p-35f, 0x1.6afccap-35f,
     0.0f, 0.0f, 0x1.9b8c62p-97f, 0.0f, 0x1.5c480ep-113f, 0.0f, 0.0f, 0x1.43ee68p-19f,
     0.0f, 0.0f, 0x1.eaa5ep-102f, 0.0f, 0.0f, 0x1.a8b67ap-33f, 0.0f, 0x1.a44a66p-105f,
     0.0f, 0.0f, 0.0f, 0x1.037e42p-126f, 0x1.6bd516p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f10198p-27f, 0.0f, 0x1.f01edcp-14f, 0.0f, 0.0f, 0x1.ecebdap-79f,
     0x1.6e147ep-52f, 0x1.ee81c8p-40f, 0.0f, 0.0f, 0.0f, 0x1.397aa6p-74f, 0.0f, 0.0f,
     0x1.585bb8p-104f, 0x1.6233bcp-30f, 0x1.cea368p-75f, 0.0f, 0.0f, 0x1.8f2cfcp-121f,
     0.0f, 0x1.a4a252p-45f, 0x1.cd605p-23f, 0.0f, 0.0f, 0x1.def468p-32f, 0.0f,
     0x1.cb1812p-57f, 0x1.b46e8p-20f, 0.0f, 0x1.9f602ap-32f, 0x1.12c058p-111f,
     0x1.1dda02p-74f, 0.0f, 0x1.78615ap-83f, 0.0f, 0x1.e6386ep-38f, 0x1.b2508cp-118f,
     0x1.eaecc6p-47f, 0.0f, 0.0f, 0x1.50b7acp-83f, 0x1.c7dba6p-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.369f42p-48f, 0.0f, 0x1.e21f8ep-96f, 0.0f, 0x1.42fde6p-112f,
     0x1.a51bep-105f, 0x1.2de124p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18604ep-3f,
     0x1.48f8c2p-70f, 0x1.911e2ap-109f, 0.0f, 0x1.82095ep-55f, 0x1.6c2162p-56f, 0.0f,
     0.0f, 0x1.60da0ap-91f, 0x1.8a5804p-31f, 0.0f, 0x1.8341f4p-9f, 0x1.badd78p-6f,
     0x1.da5c46p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45fcbp-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8e34fep-34f, 0x1.d7772ap-83f, 0x1.336246p-35f, 0x1.e1e4a2p-99f, 0.0f,
     0.0f, 0.0f, 0x1.60613cp-62f, 0.0f, 0x1.7d3bf2p-70f, 0.0f, 0.0f, 0x1.7eb084p-72f,
     0.0f, 0x1.95641ap-20f, 0x1.35dd5ep-23f, 0x1.40619ap-123f, 0x1.8d44eep-3f,
     0x1.60e214p-15f, 0x1.47f0f4p-11f, 0x1.fbf22p-100f, 0x1.2dc00ep-11f,
     0x1.9ae4p-67f, 0x1.20f776p-115f, 0.0f, 0.0f, 0x1.22dc18p-52f, 0.0f, 0.0f, 0.0f,
     0x1.efd89cp-19f, 0.0f, 0x1.bbeaa4p-70f, 0x1.e07ap-81f, 0x1.beb92ep-11f, 0.0f,
     0x1.07dc72p-86f, 0x1.84126p-126f, 0.0f, 0.0f, 0x1.8ef72p-1f, 0.0f, 0.0f,
     0x1.3309d8p-101f, 0.0f, 0x1.347ed2p-45f, 0x1.9986aap-63f, 0x1.c30d92p-66f,
     0x1.9b5138p-86f, 0x1.83d0bep-56f, 0.0f, 0x1.37dafep-91f, 0x1.b7558cp-17f, 0.0f,
     0.0f, 0.0f, 0x1.c31962p-19f, 0x1.1f17f4p-89f, 0x1.611058p-46f, 0.0f,
     0x1.7d7276p-103f, 0.0f, 0.0f, 0x1.8bb60ep-50f, 0.0f, 0x1.8e9e7ap-45f,
     0x1.5cf71ap-1f, 0x1.abeedp-12f, 0.0f, 0x1.323564p-14f, 0x1.40e948p-111f,
     0x1.fb32cp-94f, 0.0f, 0x1.c35a74p-16f, 0.0f, 0x1.524a68p-116f, 0x1.8bf1e8p-26f,
     0.0f, 0x1.b96e66p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c477cep-86f, 0.0f, 0.0f, 0.0f,
     0x1.ff842ap-82f, 0.0f, 0x1.d4be0ap-3f, 0.0f, 0x1.3cdb9ep-125f, 0x1.3f341cp-121f,
     0.0f, 0x1.af7a2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62af6cp-73f,
     0x1.bf036ep-97f, 0x1.af48c2p-69f, 0x1.d7ff4ap-103f, 0x1.8ab454p-115f,
     0x1.297fc8p-101f, 0x1.67e72cp-105f, 0x1.21436cp-120f, 0x1.7b3144p-7f, 0.0f, 0.0f,
     0x1.d4f0ap-61f, 0x1.c36d66p-119f, 0x1.a96bcp-121f, 0x1.d732ecp-80f, 0.0f, 0.0f,
     0x1.d0bcd6p-23f, 0.0f, 0x1.8b403p-96f, 0.0f, 0.0f, 0x1.7cb094p-108f, 0.0f,
     0x1.11f518p-49f, 0.0f, 0.0f, 0.0f, 0x1.8ebeacp-87f, 0.0f, 0.0f, 0.0f,
     0x1.719c54p-67f, 0x1.de85eap-5f, 0.0f, 0x1.f0cbd2p-89f, 0.0f, 0x1.a4b9aep-29f,
     0.0f, 0x1.18e4e4p-112f, 0x1.b1ae9ap-19f, 0.0f, 0x1.ba897ap-36f, 0.0f,
     0x1.921ab8p-103f, 0.0f, 0.0f, 0x1.b3c5f4p-36f, 0.0f, 0x1.5b14cap-63f,
     0x1.9c6852p-97f, 0x1.7c089ep-106f, 0x1.61ad8ep-72f, 0.0f, 0.0f, 0x1.a9c55ap-22f,
     0x1.575202p-73f, 0.0f, 0x1.e19c4cp-101f, 0.0f, 0x1.e24a8cp-19f, 0x1.a33e2ap-31f,
     0x1.3946c2p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f94784p-123f, 0x1.100318p-121f,
     0x1.ad65eap-121f, 0.0f, 0.0f, 0x1.6cead2p-21f, 0.0f, 0.0f, 0x1.869dcp-84f,
     0x1.2bf5bp-1f, 0x1.4f83f4p-101f, 0.0f, 0x1.1a7e64p-120f, 0.0f, 0x1.7e96d6p-66f,
     0x1.b21b28p-57f, 0x1.47fdc6p-78f, 0x1.48c1d4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ae885p-63f, 0.0f, 0.0f, 0x1.6f20fep-109f, 0.0f, 0x1.184f58p-16f,
     0x1.4aa5ecp-29f, 0x1.27e074p-123f, 0x1.b4b30ap-56f, 0.0f, 0x1.102618p-4f, 0.0f,
     0.0f, 0.0f, 0x1.332cdep-86f, 0x1.8238ep-40f, 0x1.bccde2p-21f, 0x1.0814c8p-67f,
     0.0f, 0x1.7b96a4p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c8d6cp-71f, 0.0f,
     0x1.490d0ap-40f, 0x1.6a3b5p-74f, 0.0f, 0.0f, 0x1.f37484p-27f, 0x1.42ab2ap-110f,
     0x1.be7d7ap-59f, 0.0f, 0x1.9a66bap-43f, 0x1.1588f2p-30f, 0x1.e8bf04p-76f,
     0x1.0f18bcp-101f, 0.0f, 0.0f, 0x1.8963e2p-70f, 0.0f, 0.0f, 0.0f, 0x1.fb8c96p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f835cp-26f, 0x1.6db886p-13f, 0x1.faf768p-102f, 0.0f,
     0x1.4d715ap-31f, 0.0f, 0x1.389ea2p-100f, 0x1.ac267cp-121f, 0.0f, 0x1.8980d6p-2f,
     0.0f, 0.0f, 0x1.a85efep-116f, 0x1.ba840cp-45f, 0x1.cba1a2p-107f, 0x1.f3b5f2p-39f,
     0.0f, 0x1.5833e2p-66f, 0.0f, 0.0f, 0x1.7c2eep-91f, 0.0f, 0x1.2f3384p-29f, 0.0f,
     0.0f, 0x1.44b546p-45f
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
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fastpowf1_u3500purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_fastpowf1_u3500purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastpowf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
