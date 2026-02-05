/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1f1_u10purecfma.c --function \
 *     Sleef_finz_expm1f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.0c5876p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a506cep-33f, 0.0f, 0.0f,
     0x1.ece2dcp-59f, 0.0f, 0x1.41e584p-121f, 0.0f, 0x1.a8d6dcp-119f, 0x1.cc8c84p-60f,
     0x1.e974acp-82f, 0x1.0961acp-121f, 0.0f, 0.0f, 0x1.6ebb6ap-113f, 0x1.2af0d4p-86f,
     0x1.e8da4p-42f, 0x1.0aa9e6p-123f, 0.0f, 0x1.734fb8p-79f, 0.0f, 0.0f,
     0x1.961604p-32f, 0x1.03ef88p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bebf6p-52f,
     0x1.4e9f0ep-59f, 0.0f, 0.0f, 0.0f, 0x1.8e07f8p-90f, 0x1.eb6a5cp-62f,
     0x1.752124p-106f, 0x1.7eff08p-72f, 0x1.d55176p-15f, 0x1.d41336p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.27476p-43f, 0.0f, 0x1.d74d6ep-13f, 0.0f, 0x1.654508p-41f, 0.0f,
     0.0f, 0.0f, 0x1.dc27e2p-96f, 0x1.d55fb4p-49f, 0x1.8dc98p-58f, 0.0f, 0.0f,
     0x1.8be268p-39f, 0x1.e08ce2p-12f, 0.0f, 0.0f, 0.0f, 0x1.101f96p-14f,
     0x1.cff594p-40f, 0.0f, 0.0f, 0.0f, 0x1.9db73p-87f, 0x1.85a48p-88f, 0.0f, 0.0f,
     0x1.1584p-76f, 0x1.9c9056p-20f, 0x1.872256p-8f, 0x1.8f672ep-99f, 0.0f, 0.0f,
     0x1.2317c8p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b2abcp-52f, 0x1.d7f022p-91f, 0x1.0e64bp-82f, 0.0f, 0.0f, 0.0f,
     0x1.f6f97cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8117ep-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cf7e1cp-55f, 0.0f, 0x1.3ac61cp-111f, 0.0f, 0x1.69fbdep-96f,
     0x1.7c7b46p-61f, 0.0f, 0x1.2d1512p-61f, 0x1.4608f8p-62f, 0x1.d47a3p-4f, 0.0f,
     0x1.2df41p-112f, 0.0f, 0.0f, 0x1.657ceap-60f, 0.0f, 0.0f, 0.0f, 0x1.3773b8p-19f,
     0x1.4ce53cp-42f, 0.0f, 0.0f, 0.0f, 0x1.0e5d0ap-77f, 0.0f, 0x1.2b8dbap-26f, 0.0f,
     0x1.678feap-126f, 0x1.3307ep-43f, 0x1.be6f2ep-96f, 0.0f, 0.0f, 0x1.75917cp-123f,
     0x1.648bbap-45f, 0x1.45d7f6p-91f, 0.0f, 0x1.94930ap-97f, 0x1.f0f412p-30f,
     0x1.8c9a3cp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72d78ap-11f, 0.0f,
     0x1.c3bf9cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82fe12p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd7534p-66f, 0x1.593594p-53f, 0x1.f464b2p-37f, 0x1.1dd99cp-5f, 0.0f, 0.0f,
     0x1.4e9b54p-33f, 0x1.86be3ep-102f, 0x1.a7b812p-15f, 0x1.50c27p-46f, 0.0f,
     0x1.964c52p-25f, 0x1.6cd044p-3f, 0x1.e34bf8p-74f, 0.0f, 0.0f, 0.0f,
     0x1.8d3ca4p-32f, 0x1.9ab502p-20f, 0x1.09acp-94f, 0.0f, 0x1.1a588p-65f,
     0x1.2a7c68p-73f, 0x1.bf5324p-81f, 0.0f, 0.0f, 0.0f, 0x1.3f81e4p-84f, 0.0f, 0.0f,
     0x1.d50f6cp-120f, 0x1.da6dcap-67f, 0x1.e634dep-60f, 0x1.48df4p-49f, 0.0f, 0.0f,
     0x1.37e282p-38f, 0x1.5bdf96p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91d7eep-66f, 0.0f,
     0.0f, 0x1.acdcfcp-111f, 0.0f, 0x1.d2d6b6p-87f, 0x1.547da4p-17f, 0x1.994d68p-125f,
     0x1.5a099p-107f, 0x1.c6d222p-80f, 0x1.f54d74p-60f, 0.0f, 0x1.5b43dep-103f, 0.0f,
     0x1.e6478ap-90f, 0x1.26de7ep-46f, 0x1.23605p-50f, 0x1.39c2e4p-5f, 0.0f,
     0x1.1a2254p-22f, 0x1.980accp-50f, 0x1.701972p-35f, 0x1.48cec4p-65f,
     0x1.6a004p-31f, 0.0f, 0x1.842bd8p-79f, 0.0f, 0x1.7d658cp-95f, 0x1.06fb18p-117f,
     0x1.ff2faep-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef2ecep-80f,
     0x1.f0ad64p-67f, 0x1.68a7ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b57ap-96f,
     0x1.60f858p-112f, 0.0f, 0x1.dd0aap-76f, 0.0f, 0x1.f4df7cp-30f, 0x1.e8ea14p-39f,
     0x1.414b18p-33f, 0x1.4eeafap-20f, 0.0f, 0.0f, 0x1.9cc702p-93f, 0x1.4a685ep-99f,
     0x1.03be1ap-12f, 0.0f, 0x1.3c0af2p-38f, 0x1.59c91ap-93f, 0x1.075906p-55f, 0.0f,
     0.0f, 0x1.d1859p-59f, 0.0f, 0.0f, 0.0f, 0x1.2ee09cp-116f, 0x1.2797b4p-40f,
     0x1.c6352cp-18f, 0.0f, 0.0f, 0.0f, 0x1.daf04ap-49f, 0x1.18de54p-22f, 0.0f,
     0x1.491076p-114f, 0x1.20f436p-23f, 0x1.55173ep-78f, 0.0f, 0x1.c63b5cp-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f7386p-68f, 0.0f, 0x1.e0a1d2p-66f, 0x1.7442ecp-121f,
     0.0f, 0.0f, 0x1.0b36ecp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c241dcp-79f,
     0x1.7bbf9ep-35f, 0x1.bba9bp-122f, 0.0f, 0x1.d73b4cp-62f, 0.0f, 0x1.93ee3p-44f,
     0x1.fa5002p-116f, 0x1.607174p-87f, 0.0f, 0x1.6dc61ap-70f, 0x1.1bb0b8p-97f, 0.0f,
     0x1.3a641ap-88f, 0.0f, 0.0f, 0.0f, 0x1.45f7p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ec84cp-37f, 0x1.4ceb64p-33f, 0.0f, 0x1.c2c2fp-103f, 0.0f, 0.0f,
     0x1.c12c26p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.124fbep-28f, 0.0f, 0x1.f5d2d6p-115f,
     0x1.cf8f86p-8f, 0.0f, 0.0f, 0x1.28761p-47f, 0.0f, 0.0f, 0.0f, 0x1.ef75d2p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c68c4p-88f, 0x1.4b463ep-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.80a22ep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9dcb1cp-9f, 0.0f,
     0x1.de27ccp-99f, 0.0f, 0.0f, 0x1.a69a7ep-34f, 0.0f, 0.0f, 0.0f, 0x1.a69984p-17f,
     0.0f, 0.0f, 0x1.412218p-42f, 0.0f, 0.0f, 0x1.368b82p-30f, 0x1.825462p-51f,
     0x1.f0490ap-56f, 0.0f, 0.0f, 0.0f, 0x1.e790cap-9f, 0x1.5c7bdp-63f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.a31fep-11f, 0x1.97d4bcp-29f, 0.0f, 0x1.86f7cap-67f, 0.0f,
     0.0f, 0x1.8365b8p-65f, 0x1.31ce16p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.834b7p-26f, 0.0f, 0.0f, 0.0f, 0x1.aa00b4p-52f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec97a2p-114f,
     0x1.d6a004p-11f, 0.0f, 0.0f, 0.0f, 0x1.ec9bccp-23f, 0.0f, 0x1.74a0c8p-4f, 0.0f,
     0x1.ad6ff4p-39f, 0.0f, 0.0f, 0x1.2912ap-60f, 0.0f, 0x1.511e5cp-2f, 0.0f,
     0x1.37aae8p-121f, 0x1.4b8588p-57f, 0.0f, 0.0f, 0.0f, 0x1.741264p-103f, 0.0f,
     0.0f, 0.0f, 0x1.3205d6p-18f, 0x1.4e624cp-110f, 0x1.ed7572p-82f, 0x1.0865c4p-88f,
     0x1.4702f6p-78f, 0x1.b6ce34p-41f, 0.0f, 0x1.9d6ce4p-75f, 0.0f, 0x1.02e1b8p-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.398e3cp-118f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6f0d3p-55f, 0.0f, 0x1.c840b8p-47f, 0.0f, 0.0f, 0x1.186e72p-18f, 0.0f,
     0x1.b25ae8p-67f, 0x1.185edep-119f, 0.0f, 0x1.ab345cp-120f, 0.0f, 0x1.b8f346p-66f,
     0.0f, 0.0f, 0x1.698b06p-68f, 0.0f, 0x1.8a941cp-80f, 0x1.d23f02p-14f, 0.0f,
     0x1.94cb66p-79f, 0x1.37fb12p-21f, 0x1.c17e9p-12f, 0x1.d6d492p-11f, 0.0f, 0.0f,
     0.0f, 0x1.1afe1p-83f, 0.0f, 0.0f, 0.0f, 0x1.39fdb4p-24f, 0x1.1dee06p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.909114p-13f, 0.0f, 0x1.88285p-40f, 0.0f, 0x1.f73536p-80f,
     0x1.deb4c2p-102f, 0.0f, 0x1.6596fap-112f, 0x1.279354p-87f, 0x1.42014p-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ebabe4p-39f, 0.0f, 0x1.35d098p-86f, 0.0f, 0.0f,
     0x1.04fa74p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c29c4p-39f, 0.0f,
     0x1.87142cp-80f, 0x1p0f, 0x1.18bb2ap-123f, 0x1.8f046p-26f, 0.0f, 0x1.346364p-42f,
     0x1.c3788ap-79f, 0x1.a34bd8p-125f, 0.0f, 0x1.25211ep-70f, 0.0f, 0.0f,
     0x1.b7ef46p-8f, 0.0f, 0x1.baf926p-93f, 0x1.6a10cp-32f, 0.0f, 0.0f,
     0x1.490088p-63f, 0.0f, 0x1.13549ap-76f, 0.0f, 0x1.bccd7cp-28f, 0x1.659d5cp-100f,
     0.0f, 0.0f, 0x1.6d62a2p-102f, 0x1.a58a5cp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc8b8cp-97f, 0x1.86289ap-121f, 0x1.c0033ep-90f,
     0x1.d335bcp-125f, 0x1.01202ap-101f, 0.0f, 0x1.25dfcp-11f, 0x1.2b819cp-84f, 0.0f,
     0.0f, 0x1.f2fc3ep-115f, 0x1.8a588p-27f, 0.0f, 0x1.23e1d6p-67f, 0.0f,
     0x1.82fdd6p-7f, 0.0f, 0.0f, 0x1.ea953ep-98f, 0.0f, 0.0f, 0.0f, 0x1.f937c8p-9f,
     0.0f, 0.0f, 0.0f, 0x1.8d077p-39f, 0x1.92edb2p-90f, 0x1.36310ep-28f,
     0x1.da042p-8f, 0x1.092cfp-78f, 0.0f, 0x1.cbaa6p-73f, 0x1.37dc5ep-86f,
     0x1.a07f34p-119f, 0.0f, 0.0f, 0.0f, 0x1.c5c438p-46f, 0x1.b304dp-119f,
     0x1.cdff62p-24f, 0.0f, 0.0f, 0x1.ad0c2ep-100f, 0x1.e3aaecp-5f, 0x1.fc469cp-32f,
     0x1.9cc8fep-2f, 0x1.e48ea2p-5f, 0x1.252c18p-93f, 0x1.30ee06p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cc6716p-14f, 0x1.e0c574p-123f, 0.0f, 0x1.db6faap-116f,
     0.0f, 0.0f, 0.0f, 0x1.c18f08p-75f, 0x1.7defd2p-30f, 0x1.654b0cp-117f, 0.0f, 0.0f,
     0x1.ccc278p-2f, 0x1.220a44p-37f, 0x1.cc23fcp-83f, 0.0f, 0.0f, 0x1.ffcc48p-46f,
     0.0f, 0x1.5560d4p-108f, 0.0f, 0.0f, 0x1.889ec6p-13f, 0.0f, 0x1.59eap-82f,
     0x1.2a5c1cp-66f, 0x1.063898p-37f, 0.0f, 0x1.9245p-64f, 0.0f, 0x1.3a395ep-35f,
     0.0f, 0x1.2be43ep-108f, 0x1.91d1eep-84f, 0.0f, 0.0f, 0x1.ee1342p-4f,
     0x1.5efd28p-45f, 0x1.011c4ap-45f, 0x1.d13338p-85f, 0x1.ea6d8ap-62f,
     0x1.b07052p-33f, 0.0f, 0x1.f218b8p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ceecp-39f,
     0.0f, 0x1.24931ep-77f, 0.0f, 0.0f, 0x1.199afap-89f, 0.0f, 0x1.84dbecp-98f, 0.0f,
     0x1.ea352cp-96f, 0.0f, 0.0f, 0.0f, 0x1.fea4e6p-28f, 0.0f, 0x1.e7a71ep-101f, 0.0f,
     0x1.fae2bep-37f, 0.0f, 0.0f, 0.0f, 0x1.c8ac2cp-105f, 0x1.215e0ep-47f,
     0x1.d6f806p-67f, 0x1.633644p-93f, 0x1.b89e82p-105f, 0x1.d3b23ap-117f,
     0x1.2b593ep-39f, 0.0f, 0.0f, 0x1.3bf6e8p-27f, 0x1.3e7d48p-50f, 0x1.a33636p-11f,
     0.0f, 0x1.516428p-57f, 0x1.0e31ap-26f, 0x1.49cfb2p-32f, 0.0f, 0x1.181a98p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81a7d4p-15f, 0.0f, 0.0f, 0x1.d71112p-51f, 0.0f,
     0x1.6ca098p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c2f6p-21f, 0x1.e7023ap-45f,
     0x1.3111d8p-115f, 0.0f, 0.0f, 0x1.0369d4p-74f, 0.0f, 0x1.5d6166p-13f, 0.0f,
     0x1.911c32p-109f, 0x1.106e3ap-113f, 0.0f, 0x1.034d02p-15f, 0.0f, 0.0f,
     0x1.968874p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7457cap-8f, 0x1.47a42ep-87f, 0x1.9c592cp-71f, 0.0f, 0.0f, 0.0f,
     0x1.05c758p-32f, 0.0f, 0x1.60b776p-75f, 0x1.ded85p-81f, 0x1.079dfcp-117f, 0.0f,
     0.0f, 0x1.555cdp-59f, 0.0f, 0x1.64ad8ap-78f, 0x1.e0d69cp-80f, 0.0f, 0.0f,
     0x1.935332p-56f, 0.0f, 0.0f, 0x1.71710cp-59f, 0x1.08ebbap-100f, 0.0f,
     0x1.81193p-116f, 0x1.a4658p-32f, 0x1.5ee904p-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82c5f8p-79f, 0.0f, 0x1.3ae154p-44f, 0.0f, 0x1.04b3dp-44f, 0.0f,
     0x1.2cb61ap-40f, 0x1.96495ap-23f, 0x1.5c72e8p-82f, 0.0f, 0.0f, 0.0f,
     0x1.7393bep-15f, 0.0f, 0.0f, 0x1.eb1018p-20f, 0x1.860008p-35f, 0.0f,
     0x1.22866p-124f, 0.0f, 0x1.9cfa3ap-28f, 0x1.5cf908p-91f, 0.0f, 0x1.be4e2p-13f,
     0x1.934868p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28ff3ep-41f, 0x1.8ef038p-107f,
     0x1.d4a75p-10f, 0.0f, 0.0f, 0.0f, 0x1.557826p-42f, 0x1.6843eep-9f, 0.0f, 0.0f,
     0x1.9026eep-113f, 0.0f, 0x1.ccc366p-71f, 0x1.018f4cp-42f, 0.0f, 0.0f, 0.0f,
     0x1.539136p-79f, 0x1.99bc66p-42f, 0x1.0296e2p-110f, 0.0f, 0.0f, 0x1.bddd06p-40f,
     0.0f, 0x1.b602eap-64f, 0.0f, 0.0f, 0x1.8ea494p-77f, 0x1.d3785ep-45f, 0.0f, 0.0f,
     0x1.f64a08p-17f, 0x1.60f7dep-118f, 0.0f, 0x1.bb5eb2p-64f, 0.0f, 0x1.5e1372p-33f,
     0.0f, 0x1.380e64p-14f, 0x1.c3ffc4p-71f, 0x1.781a2cp-11f, 0x1.6fefdep-95f,
     0x1.1ba92p-102f, 0.0f, 0x1.274acap-47f, 0x1.381026p-21f, 0x1.a8ce8ep-74f, 0.0f,
     0x1.14c81p-1f, 0.0f, 0.0f, 0x1.75a06ap-45f, 0x1.b6dca8p-21f, 0x1.869f6p-37f,
     0x1.01032cp-29f, 0.0f, 0.0f, 0x1.2ddf3ep-122f, 0.0f, 0x1.ddec5cp-74f,
     0x1.675558p-116f, 0x1.cd46dap-75f, 0x1.040506p-23f, 0.0f, 0.0f, 0.0f,
     0x1.b1d0aap-18f, 0.0f, 0x1.8874fcp-112f, 0x1.1a2196p-107f, 0.0f, 0x1.922d48p-8f,
     0x1.f285bep-99f, 0x1.59e94p-105f, 0.0f, 0.0f, 0x1.f4f492p-125f, 0x1.5c378cp-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da786cp-88f, 0.0f, 0.0f, 0x1.b62306p-123f,
     0x1.5fffb8p-11f, 0.0f, 0x1.97743ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9864f8p-56f,
     0.0f, 0x1.d95864p-87f, 0.0f, 0x1.6b3a4ep-114f, 0.0f, 0.0f, 0x1.8403eep-104f,
     0x1.4b72a8p-41f, 0x1.f390b8p-110f, 0.0f, 0x1.982182p-66f, 0.0f, 0x1.7d5c18p-10f,
     0.0f, 0.0f, 0.0f, 0x1.c962dep-98f, 0x1.827824p-61f, 0.0f, 0.0f, 0x1.4318e8p-63f,
     0x1.737138p-63f, 0x1.746a8ep-26f, 0x1.db4c2ep-69f, 0x1.48d2d6p-34f, 0.0f,
     0x1.abe0e2p-95f, 0x1.64217ap-90f, 0x1.ce164ap-55f, 0.0f, 0.0f, 0.0f,
     0x1.9c541p-126f, 0.0f, 0.0f, 0x1.f9d386p-23f, 0.0f, 0x1.65fd44p-94f,
     0x1.36f93p-40f, 0x1.02e394p-80f, 0.0f, 0x1.99c022p-90f, 0.0f, 0.0f,
     0x1.c305c2p-73f, 0.0f, 0x1.c71cdap-124f, 0.0f, 0.0f, 0.0f, 0x1.f20716p-56f,
     0x1.37672p-96f, 0.0f, 0x1.537b72p-64f, 0.0f, 0x1.79d8a4p-121f, 0x1.c52b58p-80f,
     0.0f, 0x1.237a26p-58f, 0.0f, 0x1.e93296p-103f, 0x1.f83d94p-29f, 0.0f, 0.0f, 0.0f,
     0x1.599946p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c2d4p-84f, 0.0f, 0.0f,
     0x1.e5619ep-47f, 0.0f, 0x1.2ca57ep-96f, 0x1.6eb682p-125f, 0x1.93f92cp-21f,
     0x1.ff68bep-40f, 0.0f, 0x1.acb352p-72f, 0x1.6b6b2p-124f, 0.0f, 0.0f,
     0x1.76351ep-62f, 0.0f, 0x1.17cfdap-120f, 0x1.ed3494p-31f, 0.0f
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
            tmp1 = Sleef_finz_expm1f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expm1f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expm1f1_u10purecfma bench acc %a\n", global_bench_acc);
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
