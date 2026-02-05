/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fminf4_kvx.c --function Sleef_finz_fminf4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.61796ep-121f, 0.0f, 0x1.45f68p-87f, 0.0f, 0x1.36038ap-14f, 0x1.6af7f8p-25f,
     0.0f, 0x1.2891c2p-60f, 0x1.ba447cp-30f, 0x1.d5f92cp-11f, 0x1.1c8332p-70f, 0.0f,
     0x1.8c98dap-39f, 0.0f, 0.0f, 0.0f, 0x1.deec82p-78f, 0.0f, 0x1.f14b66p-56f, 0.0f,
     0x1.7da60cp-3f, 0x1.e58c02p-15f, 0x1.b4cb2cp-118f, 0.0f, 0.0f, 0x1.2b5184p-96f,
     0.0f, 0x1.8b40e2p-70f, 0.0f, 0x1.52b2d4p-61f, 0.0f, 0x1.ea6452p-24f,
     0x1.afc7ap-116f, 0.0f, 0x1.03eabp-103f, 0.0f, 0.0f, 0.0f, 0x1.ace6c6p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.773aaap-93f, 0x1.8cc272p-11f, 0.0f, 0x1.8c2b1p-31f,
     0.0f, 0x1.025f2cp-24f, 0x1.a8b42cp-41f, 0x1.a855fp-113f, 0x1.90d206p-72f,
     0x1.ffea76p-80f, 0.0f, 0.0f, 0x1.19e57cp-19f, 0.0f, 0.0f, 0x1.ddaa2ep-16f, 0.0f,
     0x1.4c371ap-114f, 0x1.31b5ecp-79f, 0.0f, 0x1.087e26p-56f, 0x1.4e4ab6p-117f, 0.0f,
     0.0f, 0x1.6e7066p-48f, 0x1.9a126ap-103f, 0.0f, 0.0f, 0x1.0d26p-94f,
     0x1.e57e22p-95f, 0.0f, 0x1.5bf262p-19f, 0x1.d6b13ap-56f, 0x1.66e772p-93f,
     0x1.860d9ep-97f, 0x1.f26d42p-119f, 0.0f, 0x1.428d04p-66f, 0x1.d0bc9cp-100f,
     0x1.12ba6p-113f, 0.0f, 0x1.e9831ap-13f, 0x1.f6c742p-74f, 0.0f, 0x1.a2da18p-64f,
     0x1.64242ep-28f, 0.0f, 0x1.024376p-110f, 0.0f, 0.0f, 0x1.ceb112p-105f,
     0x1.c43574p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb7bcap-4f, 0.0f, 0x1.a5b2cap-95f,
     0x1.e1bc04p-85f, 0.0f, 0.0f, 0x1.9f380ep-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86bc54p-2f, 0.0f, 0x1.4cb5fcp-39f, 0.0f, 0.0f, 0x1.bf70e6p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c979p-40f, 0x1.52e098p-119f, 0.0f, 0.0f,
     0x1.907a96p-98f, 0.0f, 0.0f, 0.0f, 0x1.45702p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.944acp-74f, 0x1.a63a1cp-14f, 0.0f, 0.0f, 0x1.c2ef92p-73f, 0.0f, 0.0f,
     0x1.c230e8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.196454p-24f, 0x1.60368p-19f, 0.0f,
     0.0f, 0.0f, 0x1.53f998p-57f, 0.0f, 0x1.fc12dcp-111f, 0.0f, 0x1.5487f4p-121f,
     0.0f, 0.0f, 0x1.64bdb8p-44f, 0x1.deb78ap-51f, 0.0f, 0x1.428358p-122f, 0.0f, 0.0f,
     0x1.75139ep-94f, 0x1.a1b55cp-15f, 0x1.74e09ap-120f, 0.0f, 0.0f, 0x1.77a9b4p-63f,
     0.0f, 0.0f, 0x1.6a5434p-14f, 0.0f, 0x1.9d15f6p-112f, 0.0f, 0.0f, 0x1.d2a996p-93f,
     0x1.df6aeep-34f, 0.0f, 0x1.7f6e58p-15f, 0.0f, 0.0f, 0x1.8816e8p-16f, 0.0f,
     0x1.303068p-13f, 0x1.e99172p-38f, 0.0f, 0x1.127c86p-24f, 0.0f, 0x1.4acd56p-124f,
     0x1.e91f72p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26580ap-55f, 0.0f,
     0x1.c9c8cp-90f, 0x1.cc156ep-45f, 0x1.2e7814p-11f, 0.0f, 0x1.193c06p-99f, 0.0f,
     0.0f, 0x1.a3ea58p-120f, 0x1.d3173cp-70f, 0x1.c755a6p-101f, 0x1.469a0ap-106f,
     0x1.796954p-58f, 0x1.b94a2ap-115f, 0x1.cca01ep-59f, 0.0f, 0x1.0ab11p-92f, 0.0f,
     0x1.226146p-43f, 0x1.f95948p-46f, 0.0f, 0x1.56afbp-59f, 0x1.208a18p-35f, 0.0f,
     0x1.a72b36p-58f, 0.0f, 0.0f, 0.0f, 0x1.a36c84p-3f, 0.0f, 0x1.04f0bp-102f,
     0x1.5a5398p-6f, 0.0f, 0.0f, 0x1.145984p-29f, 0.0f, 0x1.43bd48p-57f, 0.0f, 0.0f,
     0.0f, 0x1.7b55f4p-42f, 0.0f, 0x1.8be468p-103f, 0x1.049ad4p-30f, 0.0f,
     0x1.bbbcaep-113f, 0.0f, 0.0f, 0x1.f34158p-126f, 0x1.7d0bcep-66f, 0x1.b89eb6p-73f,
     0x1.95b276p-28f, 0x1.8c972ep-34f, 0x1.bcae6ep-122f, 0x1.e29686p-106f,
     0x1.fb6cf2p-34f, 0x1.dba64cp-2f, 0.0f, 0.0f, 0.0f, 0x1.92e55ap-20f, 0.0f,
     0x1.b0322ep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e4e36p-81f, 0.0f, 0.0f,
     0x1.61e598p-68f, 0x1.d6402ap-67f, 0x1.54b602p-76f, 0x1.b13f5p-95f, 0.0f,
     0x1.eaf896p-106f, 0.0f, 0x1.219bf2p-59f, 0.0f, 0x1.b3c4f8p-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.310b86p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92852cp-46f, 0.0f,
     0.0f, 0x1.c0c268p-126f, 0x1.e77b6ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8f2daep-102f, 0x1.2b1a42p-20f, 0x1.7a327p-38f, 0.0f, 0x1.46dc3ap-3f,
     0x1.77ed72p-42f, 0x1.9530eep-17f, 0.0f, 0x1.dfe8eap-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.534ec2p-76f, 0x1.f79dd6p-1f, 0.0f, 0x1.2ab24ep-3f, 0.0f, 0.0f,
     0.0f, 0x1.a62b66p-102f, 0x1.7bcaa2p-93f, 0x1.ad28e4p-110f, 0x1.1404a2p-121f,
     0.0f, 0x1.7d2cfap-58f, 0.0f, 0.0f, 0x1.7b52a8p-96f, 0x1.2fff5p-39f, 0.0f,
     0x1.8fb0e6p-96f, 0x1.e3d69ep-10f, 0.0f, 0.0f, 0x1.14625cp-125f, 0x1.92964cp-88f,
     0x1.85ef4p-88f, 0x1.92e036p-8f, 0.0f, 0.0f, 0x1.d20e76p-90f, 0x1.81b41ap-12f,
     0.0f, 0.0f, 0x1.c5e2ap-41f, 0x1.688bc8p-110f, 0x1.5f28ccp-118f, 0.0f,
     0x1.58da9p-104f, 0.0f, 0x1.a2264ap-30f, 0.0f, 0.0f, 0x1.fd911cp-67f, 0.0f, 0.0f,
     0x1.f490e6p-8f, 0.0f, 0.0f, 0x1.d1a3d8p-91f, 0.0f, 0.0f, 0x1.2c8942p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.151c1p-62f, 0.0f, 0.0f, 0x1.239c32p-80f, 0.0f,
     0x1.c2fe9ap-25f, 0x1.bb6136p-115f, 0x1.588f54p-104f, 0x1.a04a42p-40f, 0.0f, 0.0f,
     0x1.d46f4ep-54f, 0.0f, 0x1.76bce8p-55f, 0x1.414ca6p-4f, 0.0f, 0x1.f42318p-43f,
     0x1.265d52p-27f, 0x1.c1b148p-30f, 0x1.1e26b4p-96f, 0x1.67b4acp-91f, 0.0f, 0.0f,
     0x1.34276ep-11f, 0x1.70d4f6p-42f, 0.0f, 0x1.01c6bcp-20f, 0x1.03dd68p-45f,
     0x1.94f3a2p-3f, 0.0f, 0x1.481a2p-24f, 0x1.3040aap-106f, 0x1.d3714cp-58f,
     0x1.d90426p-103f, 0x1.06428cp-113f, 0x1.3443e6p-7f, 0x1.f68188p-90f,
     0x1.437b0ap-95f, 0x1.9be238p-58f, 0x1.35d552p-91f, 0.0f, 0x1.3e620ep-59f,
     0x1.9cc488p-59f, 0x1.f27b5ep-49f, 0.0f, 0x1.c897eap-81f, 0x1.ee2b7ap-93f,
     0x1.498a6ep-97f, 0.0f, 0x1.b735b4p-122f, 0x1.34b1d6p-64f, 0.0f, 0x1.26abb4p-118f,
     0.0f, 0x1.0c9664p-75f, 0.0f, 0.0f, 0.0f, 0x1.5a07acp-87f, 0x1.f36916p-11f,
     0x1.014c0cp-113f, 0x1.086ce2p-15f, 0x1.cbc858p-45f, 0x1.b26b22p-13f,
     0x1.c04a46p-34f, 0x1.6dc67ap-61f, 0.0f, 0x1.940edap-80f, 0x1.6458ecp-112f,
     0x1.04d80ep-75f, 0x1.ab21p-34f, 0.0f, 0x1.750c4ep-44f, 0.0f, 0.0f,
     0x1.fe2fe6p-17f, 0x1.1addaap-33f, 0x1.12fba4p-38f, 0x1.90ae1ap-81f,
     0x1.fd15bep-17f, 0.0f, 0.0f, 0x1.fb06e2p-4f, 0.0f, 0x1.1aa66ap-82f, 0.0f,
     0x1.e862cp-75f, 0x1.90e5d8p-47f, 0x1.97e82cp-37f, 0.0f, 0x1.e4003ep-54f,
     0x1.0e162cp-84f, 0.0f, 0x1.99d94p-59f, 0x1.c0720cp-4f, 0x1.50d912p-13f,
     0x1.842826p-116f, 0x1.0f57b6p-3f, 0x1.74de02p-32f, 0.0f, 0x1.663048p-16f,
     0x1.bb2f24p-42f, 0x1.c0bcb4p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6237cp-41f, 0.0f,
     0x1.0ab40ap-50f, 0x1.2ddb66p-107f, 0x1.5a95f8p-103f, 0.0f, 0x1.7caf6ap-97f, 0.0f,
     0x1.87ed0cp-98f, 0x1.559a34p-16f, 0x1.da0766p-125f, 0.0f, 0.0f, 0.0f,
     0x1.d0e83p-4f, 0x1.459c1ep-26f, 0x1.74a446p-19f, 0x1.0e2bc8p-82f,
     0x1.8f8e3p-106f, 0x1.32ad64p-109f, 0.0f, 0.0f, 0.0f, 0x1.478aap-110f, 0.0f, 0.0f,
     0x1.28bcap-4f, 0.0f, 0x1.ced952p-25f, 0x1.5c2444p-61f, 0x1.662d04p-73f, 0.0f,
     0.0f, 0.0f, 0x1.b9afcep-21f, 0x1.eb64eep-40f, 0.0f, 0.0f, 0x1.2cff8ep-81f, 0.0f,
     0.0f, 0.0f, 0x1.666b4p-68f, 0x1.152f74p-9f, 0.0f, 0.0f, 0.0f, 0x1.bcfabp-35f,
     0x1.895536p-1f, 0x1.ed350ep-66f, 0x1.2e5d54p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7862ap-24f, 0x1.27931ep-53f, 0x1.050778p-1f, 0x1.1476e6p-74f, 0.0f, 0.0f,
     0x1.d83c3p-67f, 0.0f, 0x1.00a134p-37f, 0.0f, 0x1.65b126p-107f, 0.0f,
     0x1.cab0d4p-110f, 0x1.fb14fap-37f, 0.0f, 0.0f, 0x1.3e3442p-26f, 0.0f,
     0x1.db8eb4p-26f, 0x1.ac4a98p-38f, 0.0f, 0x1.216ceep-108f, 0x1.4ee3b2p-99f, 0.0f,
     0x1.563eeep-20f, 0.0f, 0x1.18470ep-24f, 0x1.3a0e1ap-21f, 0.0f, 0x1.fc2ad4p-8f,
     0.0f, 0.0f, 0.0f, 0x1.3bf34ap-29f, 0.0f, 0.0f, 0x1.f0c9eap-101f, 0x1.9dd1e8p-31f,
     0x1.0813aap-122f, 0x1.2aa8acp-56f, 0.0f, 0x1.1b313ap-54f, 0x1.ab2238p-113f,
     0x1.a3abap-5f, 0x1.229e1ep-104f, 0x1.840984p-14f, 0x1.75561p-51f,
     0x1.e7e584p-14f, 0.0f, 0x1.2877d6p-101f, 0.0f, 0x1.bf5026p-79f, 0.0f,
     0x1.24c878p-90f, 0x1.41607cp-124f, 0.0f, 0.0f, 0x1.476dfcp-5f, 0x1.424514p-34f,
     0x1.de1454p-25f, 0x1.b8cd1ap-117f, 0x1.790caep-82f, 0.0f, 0.0f, 0x1.7d573p-58f,
     0x1.25bb74p-55f, 0.0f, 0.0f, 0x1.3748a2p-42f, 0.0f, 0x1.005feap-54f,
     0x1.a6ad4cp-101f, 0x1.25f834p-88f, 0x1.1870c4p-106f, 0x1.7e9606p-89f,
     0x1.0f0f54p-35f, 0.0f, 0.0f, 0x1.e5a942p-78f, 0x1.cd4ed6p-14f, 0.0f,
     0x1.a8f2cep-83f, 0.0f, 0.0f, 0x1.94547p-85f, 0.0f, 0x1.38d616p-125f,
     0x1.bf7b8p-46f, 0x1.f1cd84p-35f, 0.0f, 0x1.37c0ccp-82f, 0x1.71b5aap-42f, 0.0f,
     0x1.b1ff94p-56f, 0x1.581052p-69f, 0.0f, 0x1.65794p-42f, 0x1.f2fa8cp-91f,
     0x1.5ad0cp-80f, 0x1.ba2e6p-55f, 0.0f, 0x1.5ff16cp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a92be6p-107f, 0x1.6654f6p-65f, 0x1.e0978cp-86f, 0.0f, 0x1.bf809ap-62f,
     0x1.f7a654p-85f, 0x1.973bap-27f, 0.0f, 0x1.e6821ep-67f, 0.0f, 0x1.4fce46p-38f,
     0x1.20735ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cccd2cp-112f, 0.0f, 0.0f, 0.0f, 0x1.585102p-6f, 0.0f, 0.0f, 0x1.23f624p-29f,
     0x1.3632e6p-114f, 0.0f, 0x1.cdf6dep-117f, 0x1.b922ep-52f, 0.0f, 0x1.a09388p-5f,
     0.0f, 0x1.a3f35ap-40f, 0.0f, 0x1.57c2cp-36f, 0.0f, 0.0f, 0.0f, 0x1.462fecp-85f,
     0x1.0e6d7p-16f, 0x1.162d4ap-103f, 0.0f, 0x1.4a5d9ap-55f, 0x1.6c82c4p-40f, 0.0f,
     0x1.1cfe2ep-96f, 0x1.0f3dc2p-76f, 0x1.d488c8p-9f, 0x1.ee11b6p-70f, 0.0f,
     0x1.06e6fp-50f, 0x1.2fb43cp-31f, 0x1.ee5944p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dff8d8p-86f, 0.0f, 0.0f, 0.0f, 0x1.ef595ep-29f, 0x1.a090acp-11f,
     0x1.406646p-119f, 0.0f, 0.0f, 0x1.d92c5cp-99f, 0x1.d5d3cep-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c2f518p-45f, 0.0f, 0.0f, 0x1.78eep-125f, 0x1.03280ep-28f, 0.0f, 0.0f,
     0x1.4062cep-9f, 0.0f, 0.0f, 0.0f, 0x1.4ca92ap-109f, 0x1.7bf0c4p-112f, 0.0f,
     0x1.35303p-24f, 0x1.93cc42p-57f, 0.0f, 0x1.f1e262p-111f, 0x1.2fb214p-34f, 0.0f,
     0.0f, 0x1.ad768p-75f, 0.0f, 0x1.0c4d4ep-114f, 0x1.e86a5p-4f, 0.0f, 0.0f,
     0x1.7ab0c8p-30f, 0x1.f533d2p-97f, 0.0f, 0.0f, 0.0f, 0x1.8424c6p-36f, 0.0f, 0.0f,
     0.0f, 0x1.647088p-41f, 0x1.e3713ep-45f, 0.0f, 0.0f, 0x1.51b1e6p-54f, 0.0f,
     0x1.6280b2p-59f, 0.0f, 0.0f, 0x1.df3034p-100f, 0.0f, 0.0f, 0.0f, 0x1.ed76bp-123f,
     0x1.a8a886p-22f, 0.0f, 0.0f, 0x1.f68416p-53f, 0.0f, 0x1.c61e08p-93f, 0.0f, 0.0f,
     0x1.79f84cp-54f, 0x1.233ceap-25f, 0x1.ba7b24p-24f, 0x1.e455dcp-47f,
     0x1.9f5a84p-109f, 0x1.b4b332p-52f, 0x1.5f989ep-23f, 0x1.de599p-58f,
     0x1.9952c6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c95d28p-6f, 0.0f,
     0x1.35c942p-123f, 0x1.d9331ap-43f, 0x1.1da136p-98f, 0.0f, 0.0f, 0x1.1b52f2p-118f,
     0.0f, 0.0f, 0x1.e252bcp-68f, 0x1.064eeep-42f, 0x1.ee8a64p-115f, 0.0f, 0.0f, 0.0f,
     0x1.53eb78p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c520eap-60f, 0.0f, 0.0f,
     0x1.daf29p-61f, 0x1.5e19c4p-114f, 0.0f, 0x1.1da04p-45f, 0.0f, 0x1.e6e4ap-20f,
     0x1.932db8p-39f, 0x1.15e742p-42f, 0x1.57b45p-117f, 0x1.25a5p-32f, 0.0f,
     0x1.a150fap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90be82p-66f, 0.0f, 0x1.cbb9f8p-72f,
     0x1.fab1d4p-109f, 0.0f, 0.0f, 0x1.b5131cp-80f, 0x1.d37356p-42f, 0x1.dff55p-2f,
     0x1.d5088ep-101f, 0.0f, 0x1.d09a34p-108f, 0x1.d39c06p-5f, 0.0f, 0.0f, 0.0f,
     0x1.fef244p-111f, 0x1.52e79p-31f, 0x1.a013b4p-1f, 0.0f, 0x1.a3b136p-86f,
     0x1.15d66p-99f, 0x1.ff9ff2p-13f, 0x1.8c117cp-92f, 0.0f, 0x1.3dfdf4p-42f,
     0x1.f9d5acp-114f, 0x1.bd39fp-67f, 0x1.918e1p-93f, 0x1.c02a08p-48f, 0.0f, 0.0f,
     0x1.cdddaap-8f, 0.0f, 0.0f, 0x1.04e09p-12f, 0.0f, 0x1.f0c95ep-79f, 0.0f,
     0x1.05e0a2p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.920558p-80f,
     0x1.f0b004p-81f, 0.0f, 0x1.afd462p-12f, 0x1.4fep-22f, 0.0f, 0x1.42272p-14f,
     0x1.04ab86p-5f, 0x1.8c6c3cp-27f, 0.0f, 0.0f, 0x1.6a25eep-102f, 0x1.de6168p-115f,
     0.0f, 0.0f, 0.0f, 0x1.06c2p-102f, 0x1.6eda66p-86f, 0x1.604f7ep-21f,
     0x1.be4884p-60f, 0.0f, 0.0f, 0x1.413186p-69f, 0.0f, 0x1.7d95f8p-44f, 0.0f, 0.0f,
     0x1.e1ffa2p-28f, 0x1.4f7feep-45f, 0.0f, 0x1.a8b942p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e00158p-4f, 0.0f, 0.0f, 0x1.87121p-113f, 0x1.d3333cp-3f,
     0x1.79e58ap-11f, 0.0f, 0x1.60770cp-94f, 0x1.ca2a7p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.033fa2p-112f, 0x1.8e97c6p-103f, 0.0f, 0x1.45b886p-85f, 0.0f, 0x1.57b8a6p-84f,
     0x1.6d6cfep-15f, 0.0f, 0x1.3475ecp-67f, 0.0f, 0.0f, 0.0f, 0x1.fd24f2p-85f, 0.0f,
     0x1.f39bb4p-118f, 0x1.2ece28p-20f, 0x1.eaacbp-54f, 0.0f, 0x1.8242f6p-31f,
     0x1.73bf5ap-77f, 0.0f, 0.0f, 0x1.6abd82p-41f, 0x1.3e1aacp-72f, 0x1.bfcecp-38f,
     0x1.9faf48p-126f, 0.0f, 0x1.505a08p-16f, 0.0f, 0.0f, 0.0f, 0x1.cc095ep-73f, 0.0f,
     0x1.de6832p-70f, 0x1.858212p-58f, 0x1.bacc0ep-97f, 0x1.79c7aap-89f, 0.0f, 0.0f,
     0x1.5be234p-62f, 0x1.a6a8p-49f, 0.0f, 0.0f, 0x1.338b02p-120f, 0.0f,
     0x1.d1f4a8p-53f, 0.0f, 0x1.faede8p-92f, 0x1.d9bf4cp-116f, 0.0f, 0x1.7ac3bap-50f,
     0x1.f4010cp-86f, 0.0f, 0x1.a79c7ep-69f, 0x1.f1ed18p-69f, 0x1.c7eeb6p-8f,
     0x1.03eb16p-22f, 0x1.59f8fap-120f, 0.0f, 0x1.c8bd0ap-10f, 0.0f, 0.0f,
     0x1.fe6862p-35f, 0.0f, 0x1.767f88p-77f, 0.0f, 0.0f, 0.0f, 0x1.27021p-54f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.de536cp-1f, 0x1.00845p-41f, 0x1.ebfce8p-116f,
     0x1.a9268cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d14a8p-86f, 0x1.11c84p-23f,
     0x1.811646p-31f, 0.0f, 0.0f, 0.0f, 0x1.5a9b76p-84f, 0.0f, 0.0f, 0x1.e83d52p-77f,
     0.0f, 0x1.4f6886p-17f, 0.0f, 0.0f, 0.0f, 0x1.18ac42p-9f, 0x1.dd49d8p-26f,
     0x1.70c29ep-55f, 0.0f, 0x1.c02e8ap-63f, 0x1.5e271ap-113f, 0.0f, 0x1.304f72p-34f,
     0x1.854ceap-77f, 0x1.18f0a4p-83f, 0x1.cee744p-14f, 0x1.98bfdep-10f, 0.0f,
     0x1.4b5976p-34f, 0x1.e511fp-9f, 0x1.e8ac74p-1f, 0x1.02ff88p-5f, 0x1.ca0e32p-97f,
     0.0f, 0.0f, 0x1.7cfffap-124f, 0.0f, 0x1.d87bcp-100f, 0.0f, 0x1.094b82p-65f, 0.0f,
     0x1.0756aep-43f, 0.0f, 0.0f, 0x1.2b4514p-39f, 0.0f, 0.0f, 0x1.6effeep-103f,
     0x1.75a818p-86f, 0.0f, 0x1.1d2074p-123f, 0x1.bcbd06p-58f, 0.0f, 0.0f, 0.0f,
     0x1.fc1b0ep-126f, 0x1p0f, 0.0f, 0x1.d2e376p-33f, 0x1.044f04p-59f, 0.0f, 0.0f,
     0x1.5221ccp-33f, 0x1.6da574p-71f, 0.0f, 0x1.9def96p-59f, 0.0f, 0.0f, 0.0f,
     0x1.4811fp-75f, 0x1.83fa44p-123f, 0x1.93a0f4p-99f, 0.0f, 0.0f, 0.0f,
     0x1.9945fp-117f, 0.0f, 0.0f, 0x1.5d7f4p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.786d2ap-27f, 0x1.595706p-79f, 0.0f, 0.0f, 0.0f, 0x1.1077cp-115f,
     0x1.4b14e8p-105f, 0.0f, 0x1.5c7ac2p-33f, 0.0f, 0x1.8e73fap-53f, 0x1.295f84p-98f,
     0x1.4f259ep-66f, 0x1.2e2e9ap-117f, 0.0f, 0x1.ce93cp-74f, 0.0f, 0x1.cacea4p-61f,
     0.0f, 0x1.e42d7cp-37f, 0.0f, 0x1.17b8dcp-12f, 0x1.45c628p-25f, 0.0f, 0.0f,
     0x1.4aab9ep-79f, 0.0f, 0.0f, 0x1.5c9034p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7895c2p-93f, 0x1.7634b4p-54f, 0x1.81ed18p-100f, 0x1.4b7a66p-37f, 0.0f, 0.0f,
     0x1.ee57eap-34f, 0x1.64d79p-71f, 0x1.69c594p-29f, 0.0f, 0.0f, 0x1.6d80e6p-17f,
     0.0f, 0x1.bfda24p-114f, 0x1.edfa34p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53827ep-88f,
     0.0f, 0x1.a51d4p-91f, 0.0f, 0x1.cb7fb4p-49f, 0x1.cc47a4p-25f, 0x1.5be61ap-114f,
     0x1.547304p-85f, 0.0f, 0.0f, 0x1.176e96p-13f, 0.0f, 0x1.40388p-42f,
     0x1.b4792ep-112f, 0.0f, 0x1.5721bap-54f, 0.0f, 0x1.3f1142p-64f, 0x1.a6b12ap-98f,
     0x1.8ecdb6p-41f, 0x1.766256p-80f, 0.0f, 0x1.2a256ep-125f, 0x1.b7df72p-120f,
     0x1.7a82b6p-83f, 0x1.64c776p-7f, 0.0f, 0x1.1ccfaap-125f, 0x1.decffcp-119f,
     0x1.755acep-99f, 0x1.3dbdfep-91f, 0x1.213d12p-12f, 0x1.04370cp-87f,
     0x1.aa3d7p-90f, 0.0f, 0.0f, 0x1.6faadap-102f, 0x1.c4958ep-110f, 0x1.56e198p-19f,
     0.0f, 0x1.99c9c8p-44f, 0.0f, 0.0f, 0x1.9eaf84p-39f, 0.0f, 0x1.de8356p-19f,
     0x1.3bc948p-24f, 0.0f, 0.0f, 0x1.7ee95ap-26f, 0.0f, 0.0f, 0x1.3a7fbcp-49f,
     0x1.497d6ap-55f, 0.0f, 0x1.970e52p-3f, 0.0f, 0.0f, 0.0f, 0x1.c5cff6p-59f,
     0x1.9a5692p-88f, 0x1.3b04b8p-73f, 0.0f, 0x1.63a85ep-122f, 0.0f, 0.0f,
     0x1.3728b6p-79f, 0.0f, 0x1.e9566cp-67f, 0x1.2fd3f2p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecdf86p-94f, 0.0f, 0x1.4fa8c8p-22f, 0.0f, 0x1.ab4c7ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.466b34p-70f, 0x1.80d716p-48f, 0x1.28a072p-94f, 0.0f, 0x1.24dbc2p-63f, 0.0f,
     0.0f, 0.0f, 0x1.bd653p-43f, 0x1.e23ae8p-105f, 0.0f, 0x1.8d9038p-120f,
     0x1.8b7066p-8f, 0.0f, 0.0f, 0x1.eedc5p-3f, 0.0f, 0x1.f57d94p-121f,
     0x1.038632p-81f, 0x1.cd1d3p-85f, 0.0f, 0x1.eb6d96p-27f, 0x1.0006fep-59f, 0.0f,
     0x1.693a2ap-33f, 0.0f, 0x1.e29baep-20f, 0.0f, 0x1.a8ff58p-84f, 0.0f, 0.0f,
     0x1.6eb1fcp-86f, 0.0f, 0x1.773368p-38f, 0x1.d12a2p-62f, 0x1.a31dccp-101f, 0.0f,
     0x1.116db2p-79f, 0.0f, 0.0f, 0.0f, 0x1.bdfc5p-42f, 0.0f, 0.0f, 0x1.ca0688p-93f,
     0.0f, 0x1.1d819ep-15f, 0x1.b5c084p-106f, 0.0f, 0.0f, 0x1.0d8834p-53f, 0.0f,
     0x1.533afep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c7a78p-78f, 0x1.b6c05cp-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b8354p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.307d46p-94f, 0.0f,
     0x1.5c1bdcp-47f, 0x1.01d9a8p-59f, 0.0f, 0.0f, 0x1.7a036cp-59f, 0.0f,
     0x1.11d066p-112f, 0x1.57cb58p-15f, 0.0f, 0x1.ffe066p-51f, 0.0f, 0x1.5d7724p-84f,
     0x1.1f3f32p-119f, 0.0f, 0x1.c202fep-27f, 0x1.043b8cp-88f, 0x1.8fcedep-104f,
     0x1.aae232p-35f, 0.0f, 0x1.57dbd2p-15f, 0.0f, 0x1.914fbcp-10f, 0x1.de3e54p-54f,
     0.0f, 0x1.fbe8bep-125f, 0x1.e05498p-14f, 0x1.54fbc8p-88f, 0x1.cd8ac2p-114f,
     0x1.f2e324p-31f, 0.0f, 0.0f, 0.0f, 0x1.4524fap-81f, 0.0f, 0x1.f57ff6p-70f, 0.0f,
     0.0f, 0.0f, 0x1.7e84e4p-26f, 0x1.ec60d4p-104f, 0x1.d5dfe2p-78f, 0x1.4193a8p-9f,
     0x1.2f4616p-43f, 0x1.03cbap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7c24ap-31f,
     0x1.468444p-12f, 0x1.be6ef6p-14f, 0.0f, 0x1.7634a6p-60f, 0x1.e77aa4p-112f, 0.0f,
     0x1.86ffeap-61f, 0.0f, 0x1.de3e58p-40f, 0.0f, 0x1.79f36ep-79f, 0x1.b2751p-126f,
     0.0f, 0.0f, 0x1.8c81fp-62f, 0.0f, 0x1.e18af6p-44f, 0x1.c4308cp-116f,
     0x1.27345p-93f, 0.0f, 0x1.0e71bp-79f, 0x1.a5095p-102f, 0.0f, 0x1.8a797ep-76f,
     0.0f, 0.0f, 0x1p0f, 0x1.795ec6p-73f, 0.0f, 0x1.b4e73ap-89f, 0x1.66b16p-80f, 0.0f,
     0x1.ab910ap-36f, 0.0f, 0.0f, 0x1.f6fd4cp-54f, 0x1.acf728p-60f, 0x1.15f6d4p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d94aa8p-63f, 0x1.8be1a4p-11f, 0.0f,
     0x1.780f74p-113f, 0x1.cbed06p-61f, 0.0f, 0.0f, 0.0f, 0x1.308118p-45f, 0.0f,
     0x1.18d34ap-77f, 0x1.5ae1aap-79f, 0x1.7619c4p-72f, 0.0f, 0x1.c86f4p-37f, 0.0f,
     0x1.381ef4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9921eep-28f, 0.0f, 0.0f,
     0x1.880b32p-58f, 0x1.517ab8p-122f, 0x1.bf124p-14f, 0.0f, 0.0f, 0x1.948f9ep-44f,
     0.0f, 0.0f, 0.0f, 0x1.39a82ep-29f, 0x1.492edap-35f, 0x1.89b862p-121f, 0.0f,
     0x1.440c0cp-96f, 0x1.732ebp-4f, 0x1.39d5fep-75f, 0.0f, 0.0f, 0x1.b44148p-51f,
     0.0f, 0x1.4ab76ap-63f, 0.0f, 0x1.b34c44p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb1754p-71f, 0x1.bd95dap-85f, 0x1.b09bcp-87f, 0x1.34ae8cp-73f,
     0x1.e88044p-58f, 0x1.1b8aa2p-122f, 0.0f, 0.0f, 0x1.2d7b12p-35f, 0x1.32b45cp-81f,
     0x1.d6475cp-121f, 0.0f, 0x1.0fdabap-76f, 0.0f, 0x1.ad610ap-37f, 0x1.a69d1ep-84f,
     0x1.0a5e0ap-55f, 0x1.f6b6e8p-18f, 0.0f, 0.0f, 0x1.f5b6aep-123f, 0.0f, 0.0f,
     0x1.d33e42p-84f, 0.0f, 0x1.7f2958p-104f, 0.0f, 0.0f, 0.0f, 0x1.e10a54p-108f,
     0.0f, 0.0f, 0.0f, 0x1.25f71p-57f, 0x1.0bd24p-65f, 0x1.e62c2ap-74f,
     0x1.7fc7b6p-53f, 0.0f, 0x1.91e5dp-64f, 0.0f, 0x1.a32948p-73f, 0.0f,
     0x1.cba2a6p-82f, 0x1.2eac8ap-94f, 0.0f, 0x1.0928fap-77f, 0x1.25d164p-83f,
     0x1.99893ep-6f, 0x1.dbbd6cp-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a859ep-104f, 0x1.7d13d2p-1f, 0x1.2f44f8p-75f, 0.0f, 0x1.31cf3p-100f,
     0x1.870d06p-100f, 0x1.c98a18p-91f, 0x1.24c57ep-88f, 0.0f, 0.0f, 0x1.ef6bb4p-52f,
     0x1.983afap-105f, 0.0f, 0x1.0db1dp-61f, 0x1.7262fp-74f, 0.0f, 0x1.7b1aep-80f,
     0.0f, 0x1.9ac9bp-47f, 0x1.a14b22p-15f, 0.0f, 0.0f, 0x1.dcee7cp-46f, 0.0f,
     0x1.749b18p-87f, 0x1.51b23ap-51f, 0.0f, 0.0f, 0x1.27215cp-100f, 0x1.65fc28p-2f,
     0x1.89396p-16f, 0.0f, 0.0f, 0.0f, 0x1.ae7fb2p-14f, 0x1.213facp-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.bda10cp-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a61192p-87f, 0.0f, 0x1.439474p-35f, 0x1.58049p-96f, 0x1.2ef818p-60f, 0.0f,
     0.0f, 0x1.9d7602p-14f, 0.0f, 0x1.4a311ap-44f, 0x1.3bc9cap-77f, 0x1.9ed2e6p-40f,
     0x1.5369bap-84f, 0x1.a1b46ap-81f, 0.0f, 0.0f, 0x1.7b9872p-36f, 0.0f,
     0x1.ade84ap-110f, 0.0f, 0x1.e377dp-118f, 0.0f, 0.0f, 0.0f, 0x1.79665ap-13f,
     0x1.d9cbb4p-107f, 0.0f, 0x1.25601cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c76e9ap-38f, 0.0f, 0.0f, 0.0f, 0x1.2e4a8p-123f, 0x1.10d18p-119f,
     0x1.caaa8cp-80f, 0x1.303b4ep-44f, 0x1.c94b0cp-64f, 0.0f, 0.0f, 0.0f,
     0x1.39cb22p-99f, 0.0f, 0.0f, 0x1.98b626p-13f, 0.0f, 0x1.4f2c44p-40f,
     0x1.507f1ep-101f, 0x1.9cdbep-79f, 0x1.6bc2e6p-115f, 0.0f, 0.0f, 0.0f,
     0x1.7c472p-21f, 0x1.e73254p-93f, 0.0f, 0.0f, 0x1.2b49f8p-68f, 0x1.c291d2p-84f,
     0.0f, 0x1.e4d008p-65f, 0x1.ca1314p-92f, 0.0f, 0x1.77ea8ep-26f, 0.0f,
     0x1.b12bd8p-91f, 0.0f, 0.0f, 0x1.7f27b4p-5f, 0x1.9ae89cp-104f, 0x1.1efc64p-17f,
     0x1.c881c6p-95f, 0.0f, 0.0f, 0.0f, 0x1.3bf4dap-123f, 0.0f, 0.0f, 0x1.d5412ep-27f,
     0.0f, 0.0f, 0x1.2c9e06p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80329p-78f, 0.0f, 0x1.c904a2p-95f, 0x1.100f2ap-81f, 0x1.82b21cp-83f,
     0x1.6e761p-54f, 0x1.e07e5ap-6f, 0.0f, 0x1.d7418p-28f, 0x1.e5798ap-81f, 0.0f,
     0x1.995d8cp-99f, 0x1.143fe2p-71f, 0x1.49e37ep-115f, 0.0f, 0x1.44ad18p-53f,
     0x1.9bdc44p-124f, 0x1.dc8686p-2f, 0x1.7b36e2p-91f, 0x1.99e8cep-69f,
     0x1.574bb2p-55f, 0x1.af9b12p-110f, 0x1.6e861cp-70f, 0x1.a8931cp-23f, 0.0f, 0.0f,
     0x1.4848c2p-2f, 0.0f, 0.0f, 0x1.381c26p-61f, 0x1.ceff7ep-103f, 0x1.1bfep-9f,
     0x1.ee525ap-107f, 0x1.b88ff6p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.833baap-103f,
     0x1.83448ap-111f, 0x1.34677cp-103f, 0x1.0b0366p-59f, 0x1.d69554p-89f, 0.0f,
     0x1.7d639cp-121f, 0x1.66cbe8p-56f, 0x1.cc0d18p-108f, 0.0f, 0.0f, 0x1.d67a4ep-12f,
     0.0f, 0x1.c07976p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55ac42p-67f, 0.0f,
     0x1.8cb40ep-125f, 0x1.6738a4p-46f, 0x1.8d5374p-126f, 0x1.9d4cbep-78f, 0.0f, 0.0f,
     0x1.ffdbfp-86f, 0x1.711f26p-19f, 0.0f, 0x1.c772p-1f, 0.0f, 0x1.23f708p-17f,
     0x1.3d768p-8f, 0.0f, 0x1.67a92ep-18f, 0.0f, 0x1.760412p-78f, 0.0f,
     0x1.cddc1p-73f, 0x1.b8e352p-24f, 0x1.01135ep-85f, 0.0f, 0x1.36f6dep-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85cdd8p-62f, 0.0f, 0x1.58c4c8p-94f, 0.0f, 0x1.fd6ad2p-46f,
     0x1.e334cp-79f, 0x1.0e9a48p-121f, 0.0f, 0.0f, 0.0f, 0x1.c3a7c6p-117f,
     0x1.6cfd46p-45f, 0x1.1df4b4p-42f, 0x1.fad132p-22f, 0.0f, 0.0f, 0x1.8cdadcp-62f,
     0.0f, 0x1.a55df8p-23f, 0x1.955cb2p-71f, 0.0f, 0.0f, 0x1.089d56p-11f,
     0x1.66dc9ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9075ep-93f, 0x1.66aa46p-54f, 0.0f,
     0x1.be1614p-121f, 0x1.efb576p-6f, 0x1.ad375ap-110f, 0x1p0f, 0x1.b5e3cp-102f,
     0x1.758834p-102f, 0x1.8f6c52p-101f, 0x1.e19a66p-67f, 0x1.0f35dp-8f, 0.0f,
     0x1.f2414ap-76f, 0.0f, 0.0f, 0x1.0671b6p-34f, 0x1.751088p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d697b8p-85f, 0x1.ab0594p-27f,
     0x1.ca6948p-6f, 0x1.60f35cp-40f, 0.0f, 0.0f, 0x1.7f3778p-53f, 0.0f,
     0x1.232ccep-93f, 0.0f, 0.0f, 0.0f, 0x1.6c8c3cp-80f, 0x1.98c356p-103f, 0.0f, 0.0f,
     0x1.471a38p-56f, 0.0f, 0.0f, 0x1.2e1f2ep-77f, 0.0f, 0.0f, 0.0f, 0x1.ad8e8cp-67f,
     0x1.9a051ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1239cp-33f, 0.0f,
     0x1.1e8252p-78f, 0x1.a1c494p-68f, 0x1.ada6bap-55f, 0.0f, 0.0f, 0.0f,
     0x1.753f3ep-125f, 0.0f, 0x1.d691cep-91f, 0.0f, 0.0f, 0x1.5e9ddep-113f,
     0x1.01173ap-30f, 0.0f, 0x1.b7195ep-81f, 0x1.34454p-119f, 0x1.08678p-73f, 0.0f,
     0x1.5ab164p-2f, 0x1.0cb5cap-67f, 0x1.069aaep-28f, 0x1.6a04aep-107f,
     0x1.538452p-44f, 0.0f, 0x1.e6aae2p-22f, 0.0f, 0.0f, 0x1.aeb22p-113f,
     0x1.8b8cbap-111f, 0.0f, 0x1.2d2e52p-60f, 0x1.1d5f7ap-51f, 0x1.dc57f4p-70f, 0.0f,
     0.0f, 0x1.186fb4p-77f, 0x1.4b6c06p-19f, 0x1.134a6ep-101f, 0x1.8318d4p-27f, 0.0f,
     0.0f, 0x1.d4e624p-50f, 0.0f, 0x1.55bf58p-69f, 0.0f, 0.0f, 0.0f, 0x1.4118fep-111f,
     0.0f, 0.0f, 0x1.30610ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.effb4cp-123f,
     0x1.0ff5b2p-50f, 0.0f, 0.0f, 0x1.1dea5p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be9fcep-60f, 0x1.38e4b4p-47f, 0.0f, 0x1.90f308p-74f, 0.0f, 0.0f,
     0x1.cbcccp-32f, 0x1.45d1bp-21f, 0x1.c2fa6p-113f, 0.0f, 0.0f, 0x1.bcbcdep-96f,
     0.0f, 0.0f, 0.0f, 0x1.215582p-47f, 0x1.ab74d2p-14f, 0x1.22958ep-114f,
     0x1.eb976cp-97f, 0x1.ed695p-75f, 0x1.405cbep-77f, 0x1.7aab0cp-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7c5d48p-115f, 0x1.ba5c1ap-112f, 0x1.5a8ce8p-121f, 0.0f,
     0x1.7f7e64p-42f, 0.0f, 0x1.67ab58p-31f, 0x1.32305cp-97f, 0x1.a525c6p-11f,
     0x1.425b72p-69f, 0x1.3a390cp-104f, 0.0f, 0x1.9144e8p-108f, 0.0f, 0x1.bbc76p-111f,
     0x1.a6f832p-32f, 0x1.197314p-39f, 0x1.55df64p-65f, 0x1.852bd6p-61f, 0.0f,
     0x1.4b112ap-98f, 0.0f, 0.0f, 0.0f, 0x1.1868a8p-78f, 0x1.c9435ap-85f, 0.0f, 0.0f,
     0x1.4f15e4p-25f, 0x1.d7ab0ep-61f, 0.0f, 0.0f, 0x1.9acbbp-117f, 0.0f,
     0x1.5072f4p-49f, 0.0f, 0.0f, 0x1.ae041p-19f, 0.0f, 0x1.8e55cep-18f, 0.0f, 0.0f,
     0.0f, 0x1.ca6be8p-110f, 0x1.b242fp-94f, 0.0f, 0x1.536f8ap-58f, 0x1.617806p-81f,
     0.0f, 0.0f, 0x1.135414p-54f, 0x1.01a0ep-75f, 0x1.b8a1bcp-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c8484p-10f, 0.0f, 0x1.d20ff8p-44f, 0x1.9f3feep-8f, 0.0f, 0.0f,
     0x1.8eedfep-72f, 0x1.e90328p-55f, 0x1.2b3952p-32f, 0x1.d88092p-95f, 0.0f,
     0x1.a2eb5ep-51f, 0x1.82595ap-106f, 0.0f, 0x1.08fc68p-113f, 0x1.ad0ef6p-45f, 0.0f,
     0.0f, 0.0f, 0x1.eefb4ap-4f, 0.0f, 0x1.b20ef8p-84f, 0x1.7cb5c6p-104f,
     0x1.93508ep-52f, 0.0f, 0x1.6bf158p-88f, 0.0f, 0.0f, 0x1.bda9c2p-40f,
     0x1.5e3deep-41f, 0.0f, 0x1.61edeep-77f, 0.0f, 0.0f, 0x1.88851ap-124f, 0.0f,
     0x1.a4aed2p-30f, 0.0f
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
            tmp2 = Sleef_finz_fminf4_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_fminf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fminf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
