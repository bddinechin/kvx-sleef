/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_hypotf1_u05purecfma.c --function \
 *     Sleef_finz_hypotf1_u05purecfma --arity 2 --headers \
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
     0x1.d2a9cep-100f, 0.0f, 0.0f, 0x1.c999c2p-105f, 0x1.471d22p-108f, 0.0f, 0.0f,
     0x1.7e6beap-124f, 0.0f, 0.0f, 0x1.36a728p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.061a3p-38f, 0.0f, 0x1.f58062p-25f, 0x1.18dcf2p-93f, 0.0f, 0.0f,
     0x1.be46b2p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f57a8p-78f,
     0.0f, 0.0f, 0x1.b36cbap-31f, 0x1.7e045p-108f, 0x1.d91c62p-11f, 0x1.51d53ep-106f,
     0.0f, 0.0f, 0x1.fd92dap-23f, 0.0f, 0.0f, 0x1.5397bep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a6a8d4p-88f, 0.0f, 0x1.031004p-3f, 0x1.6ae346p-28f, 0.0f, 0.0f,
     0x1.5e5886p-17f, 0x1.147fcp-112f, 0x1.04332ep-86f, 0.0f, 0x1.46f244p-110f,
     0x1.9d5a5p-96f, 0x1.b59226p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec57c4p-44f,
     0x1.9bef1cp-27f, 0x1.d1debep-119f, 0x1.32c204p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a4440cp-14f, 0.0f, 0x1.4f4092p-50f, 0x1.d24be6p-4f, 0x1.6dda4ep-83f,
     0.0f, 0x1.a6c17cp-74f, 0x1.088d42p-27f, 0.0f, 0.0f, 0x1.4041d6p-103f,
     0x1.19991p-47f, 0.0f, 0x1.832b2ep-60f, 0x1.fc3478p-92f, 0x1.f8341p-117f,
     0x1.e6a632p-5f, 0.0f, 0x1.0cb278p-97f, 0.0f, 0.0f, 0x1.368aa2p-77f, 0.0f,
     0x1.618e4p-113f, 0x1.a1ad46p-124f, 0x1.675194p-8f, 0.0f, 0.0f, 0x1.7b41cap-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d3d6p-108f, 0.0f, 0.0f, 0x1.d61e44p-32f,
     0x1.9a3662p-86f, 0x1.2f19f8p-116f, 0.0f, 0x1.4da3fp-89f, 0.0f, 0x1.c060b6p-73f,
     0x1.bc9bdap-70f, 0x1.6d419cp-69f, 0x1.5805bcp-44f, 0x1.96a30ep-36f,
     0x1.eee89ap-1f, 0.0f, 0.0f, 0.0f, 0x1.5a3718p-15f, 0x1.743978p-27f,
     0x1.4599f2p-93f, 0x1.39304ep-50f, 0.0f, 0x1.e5c726p-123f, 0x1.2c0682p-103f, 0.0f,
     0x1.9bdc28p-120f, 0.0f, 0x1.29f602p-99f, 0.0f, 0.0f, 0.0f, 0x1.7625b6p-8f,
     0x1.4728d4p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5f97ep-35f, 0.0f, 0.0f,
     0x1.d982b8p-74f, 0x1.0b74acp-18f, 0x1.0c6e9p-18f, 0x1.c46c42p-22f, 0.0f,
     0x1.df2f4ep-58f, 0.0f, 0.0f, 0x1.6f6404p-77f, 0.0f, 0.0f, 0x1.10d924p-48f, 0.0f,
     0x1.1b15ap-72f, 0x1p0f, 0x1.510e2cp-104f, 0x1.890bdap-31f, 0.0f, 0.0f,
     0x1.ffa49p-105f, 0.0f, 0.0f, 0.0f, 0x1.08b1a6p-29f, 0.0f, 0x1.f1f752p-71f, 0.0f,
     0.0f, 0x1.3f4e78p-10f, 0.0f, 0x1.cd2414p-25f, 0.0f, 0.0f, 0x1p0f, 0x1.f5a25p-34f,
     0.0f, 0.0f, 0.0f, 0x1.766004p-76f, 0x1.ec82dcp-108f, 0.0f, 0x1.ec087cp-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43d18ep-21f, 0x1.d488dap-20f, 0x1.334f4ap-30f,
     0x1.a180e6p-17f, 0.0f, 0.0f, 0x1.e7debep-66f, 0.0f, 0x1.7e2c06p-34f, 0.0f,
     0x1.645f1ep-32f, 0x1.cb35f6p-21f, 0x1.fd04p-9f, 0x1.e1f654p-125f,
     0x1.65650ep-43f, 0x1.075cap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a668c6p-46f, 0x1.3b1c6cp-88f, 0.0f, 0.0f, 0x1.f56dfep-85f, 0x1.b89d5cp-58f,
     0.0f, 0x1.888ec8p-102f, 0x1.4a2558p-2f, 0.0f, 0.0f, 0x1.8484b8p-9f,
     0x1.db3f5cp-84f, 0.0f, 0.0f, 0.0f, 0x1.44c614p-119f, 0x1.74ca62p-61f,
     0x1.8e58aap-70f, 0x1.50abep-73f, 0x1.b66ce2p-32f, 0.0f, 0.0f, 0.0f,
     0x1.4d7de4p-87f, 0x1.c6f73cp-45f, 0x1.d24ecp-75f, 0.0f, 0x1.0e5b66p-1f, 0.0f,
     0.0f, 0x1.8d65d4p-3f, 0.0f, 0x1.74c89p-21f, 0.0f, 0x1.73a9e2p-77f,
     0x1.b41aeep-95f, 0x1.282d84p-99f, 0x1.2efddep-39f, 0.0f, 0x1.9fe402p-8f, 0.0f,
     0x1.803a1ap-86f, 0x1.ece2dep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17836p-118f, 0.0f,
     0x1.62b044p-37f, 0x1.97276cp-53f, 0x1.453e64p-39f, 0.0f, 0x1.145faep-121f,
     0x1.df16cap-11f, 0.0f, 0.0f, 0x1.7a6eaep-25f, 0x1.bd1766p-28f, 0.0f,
     0x1.806802p-58f, 0x1.6802ecp-45f, 0x1.bf0e5p-51f, 0x1.96d7aap-49f,
     0x1.7b7856p-116f, 0x1.4685a6p-44f, 0x1.870ad4p-104f, 0.0f, 0x1.d97ad4p-63f,
     0x1.78262p-9f, 0.0f, 0x1.50b5bp-113f, 0x1.540ea6p-109f, 0x1.b643dep-36f,
     0x1.cb0be6p-104f, 0.0f, 0.0f, 0x1.64d2a8p-110f, 0x1.86b962p-77f, 0x1.bdadfap-76f,
     0x1.5eeb5ap-61f, 0x1.5ca8cap-97f, 0.0f, 0x1.7b7edp-62f, 0.0f, 0.0f, 0.0f,
     0x1.60b836p-126f, 0.0f, 0x1.d3edbp-13f, 0x1.b0b5fcp-31f, 0x1.5ba27ap-19f,
     0x1.0176c2p-116f, 0x1.8d1ecep-26f, 0x1.c244ep-101f, 0.0f, 0.0f, 0x1.fb9fb4p-51f,
     0x1.5e49ep-4f, 0.0f, 0.0f, 0x1.6d8434p-110f, 0x1.ec55c4p-21f, 0x1.3b057cp-99f,
     0.0f, 0.0f, 0x1.d43184p-95f, 0.0f, 0.0f, 0x1.a72edap-40f, 0.0f, 0x1.0574dep-9f,
     0.0f, 0x1.10efdep-49f, 0x1.5b7802p-50f, 0x1.3f7498p-67f, 0x1.9d997p-109f,
     0x1.8d0344p-6f, 0x1.cf6faep-84f, 0.0f, 0x1.f8a2a6p-99f, 0.0f, 0x1.e90a34p-95f,
     0x1.d54168p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8df02ap-30f, 0x1.3fec7p-37f,
     0x1.d8cc5cp-102f, 0x1.394404p-26f, 0.0f, 0.0f, 0x1.265f8ep-88f, 0.0f,
     0x1.fc9cfcp-22f, 0x1.8c126p-68f, 0.0f, 0x1.b1827p-33f, 0x1.0806e4p-84f, 0.0f,
     0.0f, 0x1.d5496p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49bf94p-119f, 0x1.992b46p-118f, 0x1.d26f46p-15f, 0x1.6046bp-39f, 0.0f, 0.0f,
     0x1.f0686ap-124f, 0.0f, 0x1.bcd41p-102f, 0x1.c51624p-15f, 0x1.47afdcp-74f,
     0x1.96cbcep-78f, 0.0f, 0x1.e3c1cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbc3ap-72f,
     0x1.a33f2ap-28f, 0x1.6d7172p-107f, 0x1.f09d68p-111f, 0x1.35867p-120f,
     0x1.1ed66ep-52f, 0.0f, 0.0f, 0x1.31ce6ap-116f, 0x1.57272cp-86f, 0x1.525f2p-82f,
     0.0f, 0.0f, 0x1.c38f5p-28f, 0.0f, 0.0f, 0x1.8c6e02p-41f, 0x1.1133b8p-53f,
     0x1.79bf0ep-82f, 0x1.5dfa06p-126f, 0x1.754516p-70f, 0x1.7d92e6p-79f,
     0x1.90ee0cp-41f, 0.0f, 0x1.69449p-46f, 0x1.0a21ccp-90f, 0.0f, 0.0f,
     0x1.bd6b9ap-74f, 0x1.6d3b1p-60f, 0x1.ed1bf2p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.89a65ap-53f, 0.0f, 0x1.fda81p-45f, 0.0f, 0x1.132d16p-4f, 0.0f, 0.0f,
     0x1.cd381cp-94f, 0.0f, 0x1.5d9102p-60f, 0.0f, 0.0f, 0x1.6a5096p-117f, 0.0f,
     0x1.10b866p-56f, 0.0f, 0x1.7934f6p-2f, 0.0f, 0x1.a6d136p-77f, 0x1.90489p-123f,
     0x1.edf9dp-24f, 0.0f, 0x1.a0f54p-78f, 0x1.5848bcp-62f, 0x1.4e16eep-116f, 0.0f,
     0x1.82b28ap-27f, 0x1.8f3896p-67f, 0x1.0bdf9cp-41f, 0.0f, 0x1.3b310ep-34f, 0.0f,
     0x1.13ebe6p-5f, 0x1.ece1f6p-10f, 0x1.4ac74ap-124f, 0x1.61924ap-36f,
     0x1.58ab2p-3f, 0x1.2e721p-41f, 0x1.a16336p-120f, 0x1.101b3ep-89f, 0.0f, 0.0f,
     0x1.b6b2f4p-60f, 0.0f, 0x1.68ae2ep-85f, 0x1.4da35cp-90f, 0x1.74fdc6p-89f, 0.0f,
     0.0f, 0x1.d3ac24p-60f, 0x1.518628p-55f, 0x1.ff8f4p-11f, 0.0f, 0x1.cf613cp-46f,
     0x1.196a1p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b226ep-13f, 0.0f, 0.0f, 0.0f,
     0x1.500028p-88f, 0.0f, 0x1.c91c0ep-38f, 0x1.9020bap-76f, 0x1.3a38a8p-82f, 0.0f,
     0x1.7c4fe4p-46f, 0x1.416bbep-101f, 0x1.e304bap-52f, 0.0f, 0x1.728896p-121f,
     0x1.2ae2d2p-54f, 0.0f, 0.0f, 0x1.cb661ep-63f, 0x1.a60ecap-114f, 0x1.d15cf4p-110f,
     0x1.64c512p-4f, 0x1.dfc5ccp-16f, 0x1.32f92ep-12f, 0.0f, 0x1.c8c026p-96f,
     0x1.b0f7c4p-74f, 0x1.4c734ep-45f, 0.0f, 0x1.427f4p-81f, 0x1.3728fp-78f, 0.0f,
     0.0f, 0x1.54144ap-62f, 0.0f, 0.0f, 0x1.83c88cp-13f, 0x1.860324p-85f,
     0x1.e37a14p-48f, 0.0f, 0x1.64e6e4p-68f, 0x1.b11404p-101f, 0.0f, 0x1.d38c5cp-119f,
     0x1.2b5a76p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01a314p-100f, 0x1.c5eb46p-87f, 0.0f,
     0.0f, 0x1.d0959ap-7f, 0.0f, 0x1.6b8b6cp-66f, 0x1.04e8ccp-102f, 0.0f, 0.0f,
     0x1.3d0e6ap-7f, 0x1.e1a466p-116f, 0x1.eb99f4p-66f, 0.0f, 0x1.be32e6p-63f, 0.0f,
     0.0f, 0.0f, 0x1.ad865ap-43f, 0.0f, 0.0f, 0.0f, 0x1.6b20b2p-25f, 0.0f,
     0x1.e0733ap-109f, 0x1.d1952ep-41f, 0x1.e7b438p-99f, 0.0f, 0x1.8f10f8p-68f, 0.0f,
     0.0f, 0x1.af766ap-68f, 0.0f, 0x1.daaac2p-14f, 0x1.2a3656p-121f, 0x1.0da6c2p-40f,
     0x1.cfd13ep-79f, 0.0f, 0x1.e7b958p-48f, 0x1.a7adccp-110f, 0.0f, 0.0f,
     0x1.6c4004p-43f, 0.0f, 0.0f, 0x1.e8deaep-16f, 0x1.d839aep-89f, 0.0f,
     0x1.2beb94p-8f, 0.0f, 0x1.9a7aaap-64f, 0x1.48be5cp-54f, 0.0f, 0x1.f71572p-4f,
     0.0f, 0x1.05ac18p-123f, 0x1.09759cp-79f, 0.0f, 0x1.437f28p-40f, 0x1.566188p-30f,
     0x1.d07318p-5f, 0.0f, 0x1.bdd3d8p-82f, 0x1.78c14cp-64f, 0x1.ae88aap-6f,
     0x1.3999c2p-85f, 0.0f, 0x1.86295ep-77f, 0x1.e5018ap-109f, 0x1.925a8ep-111f,
     0x1.0a5004p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82f328p-68f, 0x1.cdc1f2p-41f, 0.0f,
     0.0f, 0x1.557c52p-95f, 0.0f, 0x1.cf89b6p-13f, 0.0f, 0.0f, 0x1.9a088cp-9f, 0.0f,
     0x1.9983f4p-15f, 0x1.fa4fa6p-65f, 0.0f, 0x1.cf8178p-60f, 0x1.1779b2p-20f, 0.0f,
     0.0f, 0.0f, 0x1.ebd994p-126f, 0x1.d9e10ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6175d8p-51f, 0.0f, 0.0f, 0x1.13cebp-42f, 0x1.df873ep-2f,
     0x1.be8a2cp-101f, 0x1.6391bp-58f, 0.0f, 0x1.20a6f8p-39f, 0x1.23a65ep-97f,
     0x1.1d6c94p-123f, 0.0f, 0x1.4edc58p-57f, 0x1.4169ecp-45f, 0.0f, 0.0f,
     0x1.ba838ep-80f, 0.0f, 0x1.1e417p-22f, 0x1.8af144p-76f, 0x1.796ab4p-124f,
     0x1.c420ecp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.57b9eep-46f, 0x1.cdae86p-61f,
     0x1.569f52p-74f, 0x1.fa7f68p-45f, 0.0f, 0x1.19e63p-39f, 0.0f, 0.0f,
     0x1.d188dap-42f, 0.0f, 0x1.fb1766p-59f, 0.0f, 0x1.d4a33ap-16f, 0.0f, 0.0f, 0.0f,
     0x1.fe8fbcp-81f, 0x1.aaa7f4p-43f, 0x1.ece404p-81f, 0.0f, 0.0f, 0x1.748cfcp-123f,
     0x1.e9c754p-125f, 0.0f, 0x1.4f2e92p-15f, 0.0f, 0x1.301014p-90f, 0.0f, 0.0f, 0.0f,
     0x1.2f2ap-54f, 0.0f, 0x1.3d8904p-48f, 0x1.6e1198p-6f, 0x1.89953ap-110f,
     0x1.f7e374p-86f, 0x1.b73cecp-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.4ecaaep-36f, 0.0f, 0.0f, 0.0f, 0x1.f25332p-117f, 0x1.b1314ap-113f, 0.0f,
     0x1.ad728ap-29f, 0.0f, 0.0f, 0.0f, 0x1.2ac3dep-115f, 0.0f, 0.0f,
     0x1.b0526ap-116f, 0x1.ddbadap-111f, 0x1.2c1904p-39f, 0.0f, 0x1.df8d8cp-76f,
     0x1.9dadc6p-111f, 0x1.2b7e44p-101f, 0x1.718c34p-106f, 0x1.969c3ap-30f, 0.0f,
     0x1.59304ap-44f, 0.0f, 0.0f, 0x1.4608bep-43f, 0.0f, 0x1.4cb90ap-55f, 0.0f, 0.0f,
     0x1.a8bb72p-45f, 0x1.f4f00ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54e176p-1f, 0.0f,
     0x1.329f82p-34f, 0.0f, 0.0f, 0x1.f405a6p-55f, 0x1.5f2198p-69f, 0.0f, 0.0f,
     0x1.ec1ef4p-85f, 0.0f, 0x1.92e1cap-60f, 0x1.f8c102p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bd83cp-92f, 0x1.080d88p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b7e08p-46f, 0.0f,
     0x1.0bc70ap-83f, 0.0f, 0x1.c0bef8p-123f, 0.0f, 0x1.6b6dc6p-102f,
     0x1.8d8e42p-118f, 0x1.b4cd74p-97f, 0x1.b633ep-74f, 0x1.98ebc6p-13f,
     0x1.f3332ap-45f, 0.0f, 0.0f, 0x1.83bcdp-39f, 0.0f, 0x1.484846p-33f,
     0x1.192532p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccd15cp-38f, 0.0f,
     0x1.46c556p-93f, 0.0f, 0x1.7bc16ep-75f, 0x1.ec3586p-74f, 0.0f, 0x1.4fe59ap-39f,
     0x1.bb06b8p-62f, 0x1.09b84cp-94f, 0.0f, 0.0f, 0x1.3bc698p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.396efp-117f, 0x1.c8d256p-49f, 0.0f, 0.0f, 0.0f, 0x1.e1db32p-62f,
     0x1.30a232p-23f, 0.0f, 0x1.90b336p-70f, 0x1.48ae78p-43f, 0x1.39919ep-102f, 0.0f,
     0.0f, 0x1.dfb47ep-39f, 0.0f, 0.0f, 0x1.4cdc1ep-41f, 0x1.e235ecp-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.17508p-100f, 0x1.592e48p-23f, 0.0f, 0x1.0b1e7p-109f,
     0x1.797842p-12f, 0.0f, 0.0f, 0x1.2e199p-41f, 0.0f, 0.0f, 0.0f, 0x1.e8bf42p-47f,
     0.0f, 0x1.90ed4ap-47f, 0x1.8752ep-29f, 0.0f, 0x1.165a1cp-61f, 0x1.bd1b5ep-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7af99ap-125f, 0.0f, 0x1.947f7ap-82f, 0.0f,
     0.0f, 0x1.8e1e24p-2f, 0.0f, 0.0f, 0.0f, 0x1.10b37ap-84f, 0x1.8dc73cp-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bcda58p-116f, 0.0f, 0.0f, 0x1.54d484p-17f, 0.0f,
     0.0f, 0x1.0d3ep-79f, 0.0f, 0.0f, 0x1.e61eb2p-120f, 0.0f, 0x1.1589b8p-113f, 0.0f,
     0x1.b904f6p-29f, 0.0f, 0x1.b243dcp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af0f7ap-2f, 0x1.6a391cp-41f, 0x1.3d8bdap-91f, 0.0f, 0.0f, 0x1.25f6fcp-98f,
     0x1.80f708p-118f, 0x1.ea4122p-114f, 0x1.100a62p-1f, 0x1.859e54p-93f,
     0x1.4eb78p-45f, 0x1.df0c4cp-64f, 0.0f, 0x1.ce218ap-105f, 0x1.660c18p-24f,
     0x1.9acf9ep-44f, 0.0f, 0.0f, 0x1.6cfb3cp-94f, 0x1.117566p-73f, 0x1.30e04ep-126f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.63d85ap-34f, 0x1.6166cep-17f, 0.0f, 0x1.d2408ep-123f,
     0.0f, 0.0f, 0.0f, 0x1.24dd7p-85f, 0x1.143db6p-73f, 0.0f, 0x1.1ebc04p-79f, 0.0f,
     0.0f, 0x1.04463ap-11f, 0x1.a795b2p-109f, 0x1.6c65bp-98f, 0x1.9f33e2p-15f,
     0x1.4f6cf4p-59f, 0x1.0a6c3ap-6f, 0x1.8b3284p-40f, 0.0f, 0.0f, 0x1.844002p-70f,
     0x1.5d754ap-78f, 0.0f, 0.0f, 0.0f, 0x1.70d892p-89f, 0.0f, 0.0f, 0.0f,
     0x1.f8ccc8p-119f, 0x1.31186ep-45f, 0x1.9fffc6p-67f, 0x1.dcfc32p-49f,
     0x1.9c428p-52f, 0x1.9791d4p-15f, 0x1.a66d96p-57f, 0.0f, 0.0f, 0x1.8b05c2p-33f,
     0x1.5924a6p-97f, 0x1.00434p-6f, 0x1.f22b78p-102f, 0x1.8b1d94p-22f,
     0x1.fb2982p-121f, 0x1.e3fe76p-19f, 0x1.8cd2fep-112f, 0x1.b4bdeep-63f, 0.0f, 0.0f,
     0x1.d719fep-88f, 0.0f, 0x1.6b71a2p-24f, 0.0f, 0.0f, 0x1.2a3514p-126f,
     0x1.c1c7bp-111f, 0x1.e06fdcp-26f, 0.0f, 0.0f, 0.0f, 0x1.50c22ep-49f, 0.0f,
     0x1.510efap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7ac7ep-60f, 0x1.4f3286p-31f,
     0.0f, 0.0f, 0x1.a641cep-39f, 0.0f, 0.0f, 0x1.6f06bcp-6f, 0x1.b786bep-31f,
     0x1.c247c8p-69f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.161ea2p-69f, 0x1.632c1ap-15f, 0.0f, 0x1.902f5p-98f, 0x1.c4b7dcp-95f,
     0x1.4ec19p-28f, 0.0f, 0.0f, 0x1.d3e68ap-51f, 0.0f, 0x1.8c6ca8p-7f, 0.0f, 0.0f,
     0.0f, 0x1.51e288p-108f, 0.0f, 0x1.ff4964p-10f, 0.0f, 0.0f, 0x1.6a2556p-10f,
     0x1.2968bp-74f, 0x1.1ddf04p-77f, 0x1.0461acp-89f, 0.0f, 0x1.84174ap-50f,
     0x1.640a68p-25f, 0x1.1db324p-9f, 0.0f, 0.0f, 0x1.7d56fap-74f, 0.0f,
     0x1.50c36cp-95f, 0.0f, 0x1.735f24p-86f, 0.0f, 0x1.863256p-102f, 0x1.247a0ap-80f,
     0.0f, 0.0f, 0x1.cd6c82p-40f, 0.0f, 0x1.07756ap-109f, 0x1.080b62p-51f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f3eeap-49f, 0.0f, 0x1.a45aaap-51f, 0.0f, 0.0f, 0x1.a12942p-12f,
     0.0f, 0.0f, 0x1.053446p-54f, 0.0f, 0.0f, 0x1.0891cap-40f, 0.0f, 0x1.088cap-105f,
     0x1.656d32p-13f, 0x1.bbdf7ap-58f, 0.0f, 0x1.695decp-87f, 0x1.d6577ep-104f,
     0x1.48fe68p-60f, 0x1.9c8738p-88f, 0.0f, 0.0f, 0x1.4591dap-66f, 0.0f, 0.0f, 0.0f,
     0x1.ba9448p-11f, 0x1.42f5ccp-40f, 0.0f, 0.0f, 0.0f, 0x1.380454p-14f,
     0x1.9db5c2p-79f, 0x1.332b5cp-37f, 0x1.1ff9d2p-60f, 0x1.131806p-67f,
     0x1.59aff6p-103f, 0x1.a5bcb2p-8f, 0x1.1762bep-114f, 0.0f, 0.0f, 0x1.c41826p-73f,
     0.0f, 0.0f, 0.0f, 0x1.38de42p-61f, 0x1.c60a66p-13f, 0.0f, 0.0f, 0x1.c2c78ap-112f,
     0x1.afee3ap-20f, 0.0f, 0x1.7e877ep-28f, 0.0f, 0.0f, 0x1.0dca7ap-46f,
     0x1.21f22ep-55f, 0.0f, 0x1.8231bp-51f, 0x1.92f34ep-65f, 0.0f, 0x1.0dfb2p-109f,
     0.0f, 0.0f, 0.0f, 0x1.dbdc8cp-53f, 0x1.6b43eep-67f, 0.0f, 0x1.164a24p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f89c1p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be6b56p-52f, 0.0f,
     0x1.63b5bp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0b80cp-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.772516p-81f, 0x1.57961ap-33f, 0x1.2a8c46p-119f, 0x1.73a4d4p-44f, 0.0f, 0.0f,
     0x1.817c72p-62f, 0x1.c7704p-62f, 0x1.1a42a2p-15f, 0x1.65b338p-18f, 0.0f, 0.0f,
     0.0f, 0x1.a2d89ap-120f, 0.0f, 0.0f, 0x1.af46f2p-24f, 0x1.dca442p-80f,
     0x1.3100bep-79f, 0.0f, 0x1.62ed1cp-48f, 0x1.630938p-19f, 0x1.e7c5c2p-48f,
     0x1.fe69fcp-24f, 0x1.71d316p-27f, 0x1.8585e2p-81f, 0x1.93e08p-122f, 0.0f, 0.0f,
     0.0f, 0x1.748aa8p-48f, 0.0f, 0x1.08f172p-37f, 0x1.0c2ad4p-74f, 0.0f, 0.0f,
     0x1.0235b6p-25f, 0.0f, 0.0f, 0.0f, 0x1.741244p-90f, 0.0f, 0.0f, 0x1.780f2p-61f,
     0x1.602fe6p-63f, 0x1.fd2222p-113f, 0.0f, 0.0f, 0x1.50ea18p-38f, 0.0f,
     0x1.117088p-123f, 0x1.1cb234p-45f, 0.0f, 0x1.4b509p-66f, 0.0f, 0.0f,
     0x1.b03d38p-35f, 0.0f, 0x1.887bb2p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0e134p-44f,
     0x1.da642cp-76f, 0.0f, 0.0f, 0.0f, 0x1.f90474p-79f, 0.0f, 0.0f, 0.0f,
     0x1.03f90ep-17f, 0x1.5998c6p-122f, 0.0f, 0.0f, 0.0f, 0x1.acd794p-54f, 0.0f, 0.0f,
     0.0f, 0x1.cb54e8p-94f, 0.0f, 0.0f, 0x1.f21718p-41f, 0x1.775a1p-72f, 0.0f,
     0x1.1ce572p-126f, 0.0f, 0x1.183214p-44f, 0.0f, 0.0f, 0.0f, 0x1.d1e0b2p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d8456p-26f, 0x1.cada68p-29f, 0x1.332c8p-96f,
     0x1.4e111ap-105f, 0x1.ddb12p-59f, 0.0f, 0x1.f4fd7ep-20f, 0.0f, 0x1.ea317ep-57f,
     0x1.d7e7dcp-103f, 0.0f, 0x1.e6726p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b01152p-63f,
     0x1.7e3854p-37f, 0x1.39a136p-125f, 0x1.d2dedp-102f, 0x1.7a7d4cp-51f, 0.0f, 0.0f,
     0.0f, 0x1.d59bb2p-103f, 0.0f, 0x1.be5e6ap-46f, 0.0f, 0x1.17bb32p-13f,
     0x1.8fd71ap-13f, 0.0f, 0x1.f9925cp-15f, 0x1.c1616cp-8f, 0x1.f7c44cp-25f, 0.0f,
     0x1.d85388p-32f, 0x1.27157ep-65f, 0.0f, 0x1.5a4998p-16f, 0x1.4b7b04p-38f,
     0x1.e5b72p-58f, 0.0f, 0x1.75b78p-123f, 0.0f, 0x1.464b5cp-30f, 0.0f, 0.0f,
     0x1.79673p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b060b6p-107f, 0.0f, 0x1.753a1ap-96f,
     0x1.7585ep-125f, 0.0f, 0x1.6b2b12p-2f, 0.0f, 0x1p0f, 0.0f, 0x1.296832p-105f,
     0.0f, 0x1.15ed1p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3201ap-104f,
     0x1.663458p-87f, 0.0f, 0x1.7261a4p-120f, 0.0f, 0x1.4c83ap-123f, 0.0f, 0.0f,
     0x1.216936p-96f, 0.0f, 0.0f, 0.0f, 0x1.5a9efcp-6f, 0x1.ae3086p-12f,
     0x1.eef22ep-88f, 0x1.3fd1bp-101f, 0.0f, 0x1.7322d4p-41f, 0x1.82e62p-83f, 0.0f,
     0x1.2b977p-76f, 0x1.e08b8p-51f, 0.0f, 0.0f, 0.0f, 0x1.7b8cbp-39f, 0.0f, 0.0f,
     0.0f, 0x1.00dc7p-33f, 0.0f, 0.0f, 0x1.14f1acp-44f, 0x1.d4187ap-30f, 0.0f,
     0x1.287bb2p-114f, 0.0f, 0.0f, 0x1.2c628cp-32f, 0x1.5fe0b8p-21f, 0.0f,
     0x1.2a37b6p-112f, 0.0f, 0x1.5ef908p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5de38p-41f, 0.0f, 0.0f, 0.0f, 0x1.7e43bep-29f, 0.0f, 0x1.5480bap-125f,
     0x1.d53a98p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c4ebcp-119f, 0x1.a3d2bp-37f,
     0x1.4dfc68p-113f, 0x1.02b09cp-3f, 0x1.a2fb7cp-22f, 0.0f, 0x1.efc458p-126f, 0.0f,
     0.0f, 0x1.8a30d2p-29f, 0.0f, 0.0f, 0x1.838e16p-24f, 0x1.4f0cd2p-122f, 0.0f,
     0x1.b0ffcep-116f, 0x1.9521f6p-92f, 0x1.6abf84p-120f, 0x1.61fcd8p-77f,
     0x1.07715cp-23f, 0x1.373a4p-28f, 0x1.62f86p-22f, 0.0f, 0x1.0639c4p-29f, 0.0f,
     0x1.0d438p-76f, 0.0f, 0x1.ea9c48p-66f, 0x1.63a0c8p-37f, 0x1.67a286p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a2e42p-34f, 0x1.6cf8f4p-5f, 0.0f, 0.0f, 0x1.221f1p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a6ea8p-5f, 0.0f, 0.0f,
     0x1.8ab5aep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7ac62p-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf61d2p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.204fe4p-3f, 0x1.886248p-1f,
     0x1.9405ap-106f, 0.0f, 0x1.0648acp-96f, 0.0f, 0.0f, 0x1.5e628cp-104f,
     0x1.19ad64p-70f, 0x1.4a238ap-23f, 0.0f, 0x1.52083ap-69f, 0x1.ea0364p-6f, 0.0f,
     0x1.fe5c48p-2f, 0x1.e4ddbp-5f, 0x1.f26af6p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.692c4ap-79f, 0x1.c0b82ep-65f, 0.0f, 0.0f, 0x1.3c567p-114f, 0x1.4986cp-4f,
     0x1.8f19b6p-65f, 0x1.1f6af2p-112f, 0.0f, 0.0f, 0x1.6c4f4ap-125f, 0.0f,
     0x1.5258fap-75f, 0x1.98a67cp-74f, 0.0f, 0x1.f03ddcp-88f, 0.0f, 0x1.af641ep-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.137d78p-51f, 0x1.489446p-92f,
     0x1.c2fd9cp-88f, 0x1.0583ecp-26f, 0x1.aba03ap-43f, 0x1.61b30ap-18f,
     0x1.b279fep-74f, 0.0f, 0x1.54dcd6p-33f, 0.0f, 0x1.3d5f76p-17f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.115d3ep-9f, 0.0f, 0x1.baf704p-79f, 0x1.26a47ap-125f, 0.0f,
     0x1.651f3ep-6f, 0x1.12ccd4p-45f, 0x1p0f, 0x1.7e4dep-2f, 0x1.2392d6p-116f,
     0x1.6d2312p-12f, 0.0f, 0x1.a66372p-40f, 0.0f, 0.0f, 0.0f, 0x1.7c87b8p-85f,
     0x1.b7b9fep-39f, 0.0f, 0x1.2a7dfep-27f, 0x1.2d1c72p-94f, 0x1.51b2dap-98f, 0.0f,
     0x1.e11856p-67f, 0x1.b3a43ap-72f, 0.0f, 0x1.ecd9a2p-74f, 0x1.fa17bcp-72f, 0.0f,
     0x1.cfad52p-102f, 0.0f, 0x1.b9585cp-31f, 0.0f, 0x1.28afbp-87f, 0.0f,
     0x1.3ab29p-10f, 0.0f, 0x1.ab10b8p-121f, 0.0f, 0.0f, 0x1.13b24p-85f,
     0x1.9e7f64p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79525ap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d8e2ep-35f, 0x1.9cc556p-14f, 0x1.e0a74ep-98f,
     0x1.2e89c6p-74f, 0.0f, 0.0f, 0x1.d937bep-41f, 0x1.d04546p-32f, 0.0f, 0.0f,
     0x1.ae0e78p-102f, 0x1.e2418p-88f, 0.0f, 0.0f, 0x1.6b6902p-107f, 0x1.459c08p-31f,
     0x1.05a0c2p-55f, 0.0f, 0.0f, 0.0f, 0x1.79c208p-114f, 0x1.2fbab6p-68f, 0.0f, 0.0f,
     0x1.c489fcp-41f, 0.0f, 0.0f, 0x1.511dd2p-22f, 0.0f, 0.0f, 0x1.385c9p-69f, 0.0f,
     0.0f, 0x1.ae68ep-104f, 0.0f, 0.0f, 0.0f, 0x1.b38476p-33f, 0x1.efb2p-65f,
     0x1.25f408p-11f, 0x1.2a416p-91f, 0x1.9fa604p-95f, 0.0f, 0x1.1c70e8p-18f,
     0x1.9ea86cp-108f, 0x1.dd29c2p-32f, 0.0f, 0x1.c3036p-94f, 0.0f, 0.0f,
     0x1.4ea9ecp-15f, 0x1.56d1a4p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7dbf6p-123f,
     0x1.1b6d22p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae1d44p-64f, 0x1.41f04p-67f,
     0.0f, 0x1.4265dap-122f, 0x1.524f3ep-2f, 0x1.596786p-120f, 0x1.e06f22p-16f,
     0x1.57860cp-109f, 0.0f, 0x1.f18a8ep-112f, 0.0f, 0x1.70ae0ap-1f, 0x1.ac4adp-16f,
     0x1.1a21f8p-72f, 0x1.18f61cp-57f, 0.0f, 0x1.d6a354p-80f, 0.0f, 0x1.68be4p-111f,
     0x1.1fd226p-7f, 0x1.9f9d5ap-53f, 0.0f, 0x1.9b893p-40f, 0.0f, 0.0f,
     0x1.25e902p-57f, 0.0f, 0x1.be98fap-32f, 0.0f, 0x1.14e082p-85f, 0.0f, 0.0f,
     0x1.f8c4eap-17f, 0.0f, 0x1.304b7p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e196c4p-124f,
     0.0f, 0x1.c469e4p-59f, 0.0f, 0x1.f68c5ap-72f, 0x1.ec6192p-16f, 0.0f, 0.0f,
     0x1.d9bfd8p-29f, 0.0f, 0x1.5fb24cp-79f, 0.0f, 0.0f, 0x1.1c6ebcp-93f, 0.0f,
     0x1.d5733ap-90f, 0x1.d92e34p-85f, 0x1.966726p-102f, 0.0f, 0x1.e70214p-117f,
     0x1.e7582cp-26f, 0.0f, 0x1.895e82p-44f, 0x1.d403f6p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8689b8p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7b7ef6p-98f, 0.0f, 0x1.f0dfa4p-79f, 0.0f, 0.0f, 0x1.0c5ed2p-85f, 0.0f,
     0x1.780dp-57f, 0x1.84dd76p-86f, 0.0f, 0.0f, 0.0f, 0x1.a962aap-92f, 0.0f,
     0x1.33f76cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5ebe4p-102f, 0.0f, 0x1.dc986p-11f,
     0.0f, 0.0f, 0.0f, 0x1.048ac6p-62f, 0x1.b8a8c8p-53f, 0x1.174154p-42f,
     0x1.5372fcp-16f, 0.0f, 0x1.e28eb8p-51f, 0.0f, 0x1.774e8p-26f, 0.0f,
     0x1.00462ap-118f, 0.0f, 0.0f, 0x1.b5c008p-32f, 0x1.7070c6p-29f, 0x1.971f8p-64f,
     0x1.fbbca6p-52f, 0x1.92d596p-104f, 0.0f, 0x1.df71c6p-106f, 0.0f, 0x1.f036c2p-93f,
     0.0f, 0x1.90be94p-20f, 0x1.3af3ecp-48f, 0.0f, 0.0f, 0x1.ae7f12p-19f, 0.0f,
     0x1.0308e8p-13f, 0x1.70056ap-57f, 0.0f, 0x1.12ff5ap-111f, 0x1.a3d7ecp-58f,
     0x1.c3ad4cp-92f, 0.0f, 0x1.8da10ap-23f, 0x1.aa9d4ap-62f, 0.0f, 0x1.304a66p-78f,
     0.0f, 0x1.6b2d48p-28f, 0.0f, 0x1.6e115ap-44f, 0x1.f5410ap-115f, 0.0f,
     0x1.c7e16ep-43f, 0.0f, 0.0f, 0x1.531aaep-105f, 0.0f, 0x1.bb9768p-122f, 0.0f,
     0x1.c6528ap-5f, 0x1.edca5ap-106f, 0x1.8acdbcp-8f, 0x1.f53e3p-8f, 0.0f,
     0x1.89af2ap-29f, 0.0f, 0.0f, 0.0f, 0x1.7f4ee2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.08d026p-43f, 0.0f, 0.0f, 0x1.6ce198p-62f, 0x1.60aadcp-23f, 0.0f,
     0x1.bc267cp-116f, 0x1.b4976ap-95f, 0x1.67e1acp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.da6698p-34f, 0.0f, 0x1.21ec6ep-71f, 0.0f, 0x1.7e15fcp-6f, 0x1.84d64cp-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.136554p-37f, 0.0f, 0.0f, 0x1.407788p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ff00f2p-52f, 0x1.c80de8p-17f, 0.0f, 0.0f, 0.0f, 0x1.1df5b8p-103f,
     0x1.89726cp-5f, 0x1.e81a6cp-94f, 0x1.2d81f2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.64e2dep-122f, 0.0f, 0x1.636f08p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa2b1p-114f,
     0x1.3a27e8p-88f, 0x1.92886ap-104f, 0x1.071a94p-44f, 0x1.89e94cp-82f,
     0x1.5313d6p-52f, 0.0f, 0.0f, 0.0f, 0x1.9af25ep-122f, 0.0f, 0.0f, 0x1.70aaf8p-93f,
     0.0f, 0x1.b111aap-45f, 0x1.d739a4p-100f, 0.0f, 0x1.bc3cp-110f, 0.0f, 0.0f, 0.0f,
     0x1.fc5b36p-113f, 0.0f, 0x1.d4e6bap-91f, 0x1.8388c6p-78f, 0x1.0570fap-40f, 0.0f,
     0.0f, 0x1.c93376p-12f, 0.0f, 0x1.c3bc24p-25f, 0.0f, 0.0f, 0x1.186b1ep-45f, 0.0f,
     0.0f, 0x1.c1d5bep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cabe2p-73f, 0.0f,
     0x1.66b83ap-113f, 0.0f, 0.0f, 0.0f, 0x1.553a8ep-91f, 0x1.3ba678p-38f,
     0x1.dec8d2p-50f, 0x1.23c862p-43f, 0x1.439d5p-89f, 0x1.07aefap-114f,
     0x1.dbe798p-107f, 0x1.9f91bep-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61bc0ap-76f,
     0.0f, 0x1.189f12p-126f, 0x1.055d62p-113f, 0.0f, 0x1.ddc1b8p-79f, 0x1.28cd9cp-81f,
     0.0f, 0.0f, 0.0f, 0x1.ea6fb6p-27f, 0x1.26c486p-66f, 0.0f, 0.0f, 0x1.340a0cp-107f,
     0x1.93b0a6p-105f, 0.0f, 0x1.f5d166p-96f, 0.0f, 0x1.3319b4p-52f, 0.0f, 0.0f,
     0x1.52a24ap-125f, 0.0f, 0.0f, 0.0f, 0x1.ae5da6p-7f, 0.0f, 0x1.8ac78p-78f, 0.0f,
     0.0f, 0.0f, 0x1.853aa8p-91f, 0x1.3bca08p-35f, 0.0f, 0.0f, 0x1.29af7p-112f, 0.0f,
     0x1.23c7dcp-104f, 0x1.8c2f4p-111f, 0.0f, 0x1.795e38p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d73eep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b093cep-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d4190ap-124f, 0.0f, 0x1.c02c6ep-105f, 0x1.21b31p-113f, 0x1.42a4e2p-76f,
     0x1.f5c97ap-62f, 0x1.5fc5a2p-124f, 0x1.d77bccp-55f, 0x1.69d9d4p-34f,
     0x1.7f1fbp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d46f26p-93f, 0x1.836b1ap-116f,
     0x1.de07c8p-73f, 0x1.f19764p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51c5p-10f,
     0x1.3dce2cp-5f, 0x1.da74a2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5ff7cp-120f,
     0x1.cf1a0ep-15f, 0.0f, 0x1.b54b3ep-26f, 0.0f, 0.0f, 0.0f, 0x1.47d47ep-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f29e46p-8f, 0.0f, 0.0f, 0x1.643e3ap-37f, 0x1.c017d6p-94f,
     0.0f, 0x1.0d077ep-84f, 0x1.47c248p-104f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_hypotf1_u05purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_hypotf1_u05purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_hypotf1_u05purecfma bench acc %a\n", global_bench_acc);
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
