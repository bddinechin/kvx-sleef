/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundf1_purecfma.c --function \
 *     Sleef_finz_roundf1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.339cfap-56f, 0x1.68d412p-6f, 0x1.ea1bep-58f, 0.0f,
     0x1.fa8e28p-35f, 0x1.2d661ep-121f, 0.0f, 0x1.e62d62p-57f, 0.0f, 0x1.5fbe46p-44f,
     0x1.40276ap-126f, 0x1.2f3c38p-51f, 0x1.b2e144p-44f, 0.0f, 0x1.15f532p-80f, 0.0f,
     0.0f, 0x1.009426p-69f, 0.0f, 0x1.b91f48p-62f, 0.0f, 0x1.364bp-71f, 0.0f,
     0x1.0fcd36p-94f, 0.0f, 0x1.c6a124p-6f, 0.0f, 0.0f, 0.0f, 0x1.e9496p-67f,
     0x1.211b02p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.605b2p-99f, 0x1.c2d576p-113f, 0.0f,
     0.0f, 0.0f, 0x1.d7ccdcp-76f, 0x1.ad3ebp-16f, 0x1.cf2f38p-40f, 0x1.1c874cp-22f,
     0x1.b5cabcp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c61852p-37f,
     0.0f, 0x1.6f7568p-119f, 0.0f, 0.0f, 0x1.4ec50ap-62f, 0x1.86ea5ap-21f,
     0x1.77208ep-47f, 0.0f, 0x1.1da076p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.125aa8p-68f, 0x1.d1db74p-104f, 0x1.46ee46p-64f, 0x1.447db2p-98f,
     0x1.4e5abap-119f, 0.0f, 0.0f, 0.0f, 0x1.11c14p-71f, 0x1.ef4cb8p-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7005ep-80f, 0x1.33658p-11f, 0x1.b63568p-12f, 0.0f, 0.0f,
     0x1.c66a78p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.734c4p-63f, 0.0f,
     0x1.44e56ap-41f, 0x1.00c934p-60f, 0x1.9a388cp-81f, 0x1.7cb514p-95f,
     0x1.c0f186p-114f, 0x1.b081f4p-102f, 0x1.d72e6cp-98f, 0x1.f9fdeep-34f, 0.0f,
     0x1.ad629p-49f, 0.0f, 0x1.53e3acp-34f, 0.0f, 0.0f, 0.0f, 0x1.b13004p-45f,
     0x1.253026p-113f, 0.0f, 0x1.4952ccp-14f, 0.0f, 0x1.3a7e54p-51f, 0.0f,
     0x1.aeb712p-46f, 0.0f, 0x1.bf4e96p-24f, 0.0f, 0x1.bb04bp-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e669b6p-115f, 0x1.03acaap-101f, 0.0f, 0x1.ace05ep-28f,
     0x1.3c2b24p-116f, 0.0f, 0.0f, 0x1.4c9874p-69f, 0.0f, 0.0f, 0.0f, 0x1.f1fbfep-63f,
     0.0f, 0x1.e5f5d8p-114f, 0.0f, 0x1.6f52e6p-124f, 0.0f, 0x1.6ab89ep-79f,
     0x1.b72a78p-112f, 0x1.7b1554p-19f, 0x1.e38c6p-61f, 0x1.0971d8p-125f,
     0x1.e69e5cp-113f, 0.0f, 0x1.9489c2p-82f, 0x1.4c7494p-109f, 0x1.b6b932p-70f, 0.0f,
     0x1.9c0f6p-109f, 0.0f, 0x1.8f2536p-81f, 0.0f, 0x1.66202cp-90f, 0x1.0919f6p-66f,
     0.0f, 0x1.e5abdp-39f, 0.0f, 0x1.b89c1p-75f, 0.0f, 0.0f, 0.0f, 0x1.c658eep-82f,
     0x1.e5ae0ep-125f, 0.0f, 0.0f, 0x1.c36a4ap-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38f444p-52f, 0x1.dd0a6p-112f, 0x1.852b6ep-90f, 0x1.30f6dep-59f, 0.0f,
     0x1.861ca2p-109f, 0x1.dbb8dp-101f, 0x1.655246p-110f, 0x1.220dp-56f, 0.0f,
     0x1.a61884p-110f, 0x1.b8d28cp-47f, 0x1.f5ce2cp-75f, 0x1.5805a2p-83f,
     0x1.d0240cp-48f, 0x1.49353ep-1f, 0x1.fc886ap-87f, 0x1.97748ep-107f,
     0x1.2b344ap-69f, 0.0f, 0.0f, 0x1.99cc28p-64f, 0x1.c5df9ap-43f, 0x1.30d9dep-36f,
     0x1.416b7ap-83f, 0x1.7be564p-94f, 0x1.e72d16p-81f, 0.0f, 0.0f, 0x1.92579ep-63f,
     0x1.173cccp-63f, 0x1.23651ap-105f, 0x1.a9be2p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d13454p-103f, 0x1.ad663p-13f, 0.0f, 0.0f, 0.0f, 0x1.1fe028p-39f, 0.0f,
     0x1.487246p-12f, 0x1.98c0aap-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d89ccp-64f, 0.0f,
     0.0f, 0x1.2dd192p-22f, 0.0f, 0.0f, 0x1.8458f8p-57f, 0x1.5f4e22p-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecf4b2p-109f, 0.0f, 0.0f, 0.0f, 0x1.85eca8p-39f,
     0.0f, 0.0f, 0.0f, 0x1.e845aap-90f, 0.0f, 0x1.e65138p-103f, 0x1.2fb5d6p-13f, 0.0f,
     0.0f, 0.0f, 0x1.17b522p-121f, 0x1.0582fp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2bb5a4p-103f, 0x1.fadce4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37e884p-75f,
     0x1.3480eap-103f, 0x1.b6a65ap-16f, 0x1.aeb05ep-48f, 0x1.36087cp-36f, 0.0f,
     0x1.8dde64p-126f, 0.0f, 0x1.120e58p-95f, 0x1.b25624p-49f, 0x1.35952cp-63f,
     0x1.577078p-32f, 0.0f, 0.0f, 0x1.8ee646p-36f, 0x1.a8ff7p-80f, 0.0f, 0.0f, 0.0f,
     0x1.44faeap-108f, 0x1.e53d3p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.130be8p-78f, 0.0f,
     0x1.368844p-45f, 0.0f, 0.0f, 0x1.d79098p-9f, 0.0f, 0.0f, 0.0f, 0x1.35f5ecp-101f,
     0.0f, 0x1.2ad678p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22bb5cp-38f,
     0x1.87fb9ap-122f, 0x1.12749p-105f, 0x1.8f416ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f49f2p-81f, 0x1.d0446ap-108f, 0x1.221b0cp-42f, 0x1.59631cp-83f,
     0x1.c98c22p-31f, 0.0f, 0x1.f93c78p-98f, 0x1.5a32f6p-13f, 0.0f, 0x1.1b8f72p-67f,
     0.0f, 0x1.1a8cb4p-55f, 0.0f, 0x1.f649e2p-101f, 0.0f, 0x1.665c9p-104f, 0.0f,
     0x1.b4248ap-123f, 0.0f, 0x1.25abdp-123f, 0.0f, 0x1.516d8ap-26f, 0.0f,
     0x1.a3b50ep-75f, 0x1.b573fp-97f, 0.0f, 0x1.b2e91cp-31f, 0.0f, 0x1.6e435ep-79f,
     0.0f, 0.0f, 0x1.354482p-76f, 0.0f, 0x1.243394p-80f, 0.0f, 0x1.125344p-111f,
     0x1.5f9c88p-67f, 0x1.bdfcf6p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4af6p-90f, 0.0f,
     0x1.17fc76p-12f, 0.0f, 0x1.9bbaf6p-79f, 0x1.5e8de4p-74f, 0x1.2173a6p-87f, 0.0f,
     0x1.1b25dep-44f, 0.0f, 0x1.c7aa46p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1bb6cp-84f,
     0.0f, 0x1.70e2b6p-6f, 0x1.9f494ap-57f, 0.0f, 0.0f, 0x1.ad77cap-52f,
     0x1.8679a2p-98f, 0x1.18d34ap-122f, 0x1.2f2a32p-58f, 0x1.2f7d1p-118f,
     0x1.b22f52p-57f, 0.0f, 0.0f, 0x1.c473eap-64f, 0.0f, 0.0f, 0x1.1e5d2ap-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b90e4cp-29f, 0.0f, 0.0f, 0.0f, 0x1.78a594p-1f,
     0x1.d4f0a2p-59f, 0x1.fee922p-50f, 0x1.aebdc8p-61f, 0.0f, 0x1.2ca996p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.427e2cp-72f, 0.0f, 0x1.9b8b4ep-48f, 0x1.5e343p-27f, 0.0f,
     0x1.71424ep-73f, 0.0f, 0.0f, 0x1.d71e62p-112f, 0x1.63686ap-60f, 0.0f,
     0x1.82de32p-55f, 0x1.403d28p-31f, 0x1.ab928p-37f, 0x1.e79ca4p-49f,
     0x1.ebd098p-123f, 0x1.4af2acp-97f, 0x1.0c13d4p-126f, 0x1.bdd518p-93f, 0.0f,
     0x1.ce92c4p-103f, 0.0f, 0x1.07e0acp-64f, 0x1.83e96ap-73f, 0.0f, 0.0f,
     0x1.43499p-71f, 0.0f, 0x1.768fe8p-44f, 0.0f, 0.0f, 0x1.b20ddcp-50f, 0.0f,
     0x1.32b068p-71f, 0x1.440f6p-104f, 0.0f, 0.0f, 0.0f, 0x1.f2c4aep-89f,
     0x1.a388eap-93f, 0.0f, 0.0f, 0.0f, 0x1.11954cp-67f, 0x1.fa2156p-95f,
     0x1.49eae6p-12f, 0x1.5c157cp-41f, 0.0f, 0x1.723b1ep-78f, 0x1.0ee806p-41f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41516p-107f, 0x1.49e9p-42f, 0x1.0b8d9ep-99f,
     0x1.16fa7cp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e97c4p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0dfdaap-35f, 0x1.977d2cp-3f, 0x1.69fdcep-14f, 0.0f, 0.0f, 0.0f,
     0x1.ef34dcp-9f, 0.0f, 0x1.803e28p-97f, 0.0f, 0.0f, 0x1.48dc22p-112f,
     0x1.4209ap-6f, 0x1.1256cap-116f, 0x1.3d88fp-102f, 0x1.c1d224p-75f,
     0x1.85511p-79f, 0x1.e4ddd4p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe8494p-89f,
     0.0f, 0x1.0434f2p-16f, 0.0f, 0.0f, 0x1.bd604cp-94f, 0.0f, 0x1.96693p-9f, 0.0f,
     0x1.4c0968p-105f, 0.0f, 0x1.5a60aep-42f, 0.0f, 0x1.df0136p-49f, 0.0f,
     0x1.b9db7cp-112f, 0.0f, 0x1p0f, 0.0f, 0x1.1a6ccp-12f, 0x1.fbc202p-95f,
     0x1.00643p-31f, 0.0f, 0.0f, 0x1.21fa8ep-65f, 0x1.851176p-85f, 0x1.e5c752p-83f,
     0x1.cb02e8p-1f, 0x1.42340ep-71f, 0x1.9cd61p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d1b84p-42f, 0x1.4e75fp-51f, 0x1.1a7fep-29f, 0x1.318b88p-51f, 0.0f,
     0x1.798ffp-85f, 0x1.47f96ep-83f, 0x1.bb8e88p-12f, 0.0f, 0.0f, 0.0f,
     0x1.e99464p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26e26p-20f, 0.0f, 0.0f,
     0x1.74151p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb0b22p-1f, 0x1.5a4114p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2b2c8p-110f, 0.0f,
     0x1.71ca56p-25f, 0x1.16a93p-84f, 0.0f, 0x1.bbebe8p-64f, 0.0f, 0x1.e843f8p-111f,
     0x1.b7a3d8p-55f, 0x1.7bd4dp-114f, 0x1.c36004p-94f, 0x1.2f991p-115f, 0.0f, 0.0f,
     0x1.0fd0f8p-81f, 0.0f, 0.0f, 0x1.4786dp-83f, 0x1.203c5ap-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.003336p-86f, 0.0f, 0.0f, 0.0f, 0x1.3d67e2p-55f, 0.0f, 0x1.b8621cp-39f,
     0x1.927ep-111f, 0x1.3ddec8p-63f, 0.0f, 0.0f, 0.0f, 0x1.e69cf2p-5f, 0.0f, 0.0f,
     0x1.b899b6p-37f, 0.0f, 0x1.71e96ap-13f, 0.0f, 0.0f, 0x1.0ace74p-122f,
     0x1.4c9252p-110f, 0.0f, 0.0f, 0x1.422a3ap-118f, 0x1.b03e3ep-125f,
     0x1.7ba81ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d126bep-57f, 0.0f, 0.0f,
     0x1.2d08bcp-42f, 0x1.20b38p-99f, 0x1.77a628p-47f, 0.0f, 0.0f, 0x1.9805a4p-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd173ap-96f, 0x1.0461a4p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f451ap-72f, 0.0f, 0.0f,
     0x1.56205p-117f, 0x1.2c8014p-84f, 0.0f, 0x1.79ee18p-58f, 0.0f, 0.0f,
     0x1.220556p-70f, 0x1.aba5c4p-109f, 0.0f, 0x1.28eb62p-35f, 0x1.43706cp-27f, 0.0f,
     0x1.678184p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a86924p-65f, 0x1.d18feep-62f,
     0.0f, 0.0f, 0x1.5de738p-117f, 0.0f, 0.0f, 0.0f, 0x1.a1035p-74f, 0.0f,
     0x1.0c4cf2p-31f, 0x1.c2b738p-15f, 0x1.2b0262p-46f, 0.0f, 0x1.d6c824p-48f,
     0x1.15af22p-71f, 0x1.10378cp-21f, 0.0f, 0.0f, 0x1.cae292p-113f, 0.0f, 0.0f,
     0x1.61de7p-92f, 0x1.5c76f4p-110f, 0.0f, 0x1.08effap-42f, 0.0f, 0.0f,
     0x1.6dd8f4p-49f, 0x1.9318e8p-55f, 0x1.d349cp-75f, 0.0f, 0.0f, 0.0f,
     0x1.68232cp-41f, 0.0f, 0.0f, 0x1.f4fb9cp-31f, 0x1.61766ep-31f, 0x1.bffafep-11f,
     0.0f, 0x1.c885ep-70f, 0.0f, 0x1.2687eep-36f, 0x1.064a84p-3f, 0x1.4644p-69f, 0.0f,
     0x1.f6f518p-35f, 0x1.069b48p-42f, 0.0f, 0.0f, 0x1.28955cp-42f, 0x1.6dc3aap-8f,
     0.0f, 0x1.f2239p-42f, 0.0f, 0.0f, 0.0f, 0x1.074288p-118f, 0x1.e3a312p-46f,
     0x1.c602ap-72f, 0x1.667566p-104f, 0.0f, 0x1.79455p-90f, 0x1.8770c4p-38f,
     0x1.40b7bp-6f, 0.0f, 0x1.526844p-51f, 0x1.a6187ep-69f, 0x1.4c7ep-25f, 0.0f, 0.0f,
     0x1.ce2786p-26f, 0.0f, 0x1.2469ecp-96f, 0.0f, 0x1.f8d15ap-26f, 0.0f, 0.0f, 0.0f,
     0x1.5aa60ap-50f, 0.0f, 0.0f, 0.0f, 0x1.271ac8p-51f, 0x1.e34a44p-82f, 0.0f,
     0x1.0b76dap-67f, 0x1.216746p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e0644cp-48f, 0x1.a92d12p-31f, 0.0f, 0.0f, 0x1.5fcbf8p-16f, 0.0f,
     0x1.7d9016p-90f, 0.0f, 0x1.336d58p-50f, 0x1.ff61p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.199aa2p-19f, 0.0f, 0.0f, 0x1.a1bc42p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a5ee96p-91f, 0x1.1eef84p-28f, 0.0f, 0.0f, 0.0f, 0x1.344446p-107f,
     0x1.f5477p-31f, 0.0f, 0.0f, 0x1.14da24p-107f, 0.0f, 0.0f, 0x1.647b5ep-41f, 0.0f,
     0x1.dbb5cep-51f, 0.0f, 0.0f, 0x1.53de54p-26f, 0.0f, 0.0f, 0.0f, 0x1.5f042cp-95f,
     0.0f, 0.0f, 0x1.2de6ecp-100f, 0x1.584908p-36f, 0.0f, 0x1.ae2b1p-121f,
     0x1.bdbb8cp-84f, 0x1.cd5948p-21f, 0.0f, 0x1.ef6906p-3f, 0.0f, 0x1.7738dcp-55f,
     0.0f, 0x1.ef331p-8f, 0.0f, 0x1.6623d4p-124f, 0.0f, 0x1.4a94ap-78f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.696098p-25f, 0.0f, 0.0f, 0.0f, 0x1.dc127p-86f, 0x1.063b76p-18f,
     0.0f, 0x1.6efd9p-11f, 0.0f, 0x1.30d4d2p-27f, 0.0f, 0.0f, 0.0f, 0x1.a858f4p-39f,
     0x1.27ef32p-78f, 0.0f, 0x1.037aep-117f, 0x1.649844p-71f, 0x1.8cb894p-75f,
     0x1.a9c8f4p-2f, 0.0f, 0.0f, 0x1.fc90eap-44f, 0.0f, 0.0f, 0.0f, 0x1.bd826ap-20f,
     0.0f, 0x1.7cb5p-123f, 0.0f, 0.0f, 0x1.3e03ep-117f, 0x1.c5ba2cp-18f,
     0x1.e9cbaep-67f, 0x1.9af37ep-125f, 0.0f, 0.0f, 0x1.32fd9cp-50f, 0.0f, 0.0f,
     0x1.2aac04p-81f, 0x1.7dc0fap-74f, 0x1.4dba04p-76f, 0.0f, 0x1.e99c2ep-14f, 0.0f,
     0x1.71975ap-7f, 0.0f, 0x1.552098p-34f, 0x1.c4e90ap-33f, 0x1.80c9eep-20f,
     0x1.aee8c8p-16f, 0x1.e41eb2p-24f, 0.0f, 0x1.a6e072p-23f, 0x1.ac8bacp-118f, 0.0f,
     0x1.fb341cp-48f, 0x1.ec3e52p-105f, 0.0f, 0.0f, 0x1.ca0eep-85f, 0.0f,
     0x1.d668e8p-126f, 0.0f, 0.0f, 0x1.335632p-92f, 0x1.69dca4p-61f, 0.0f, 0.0f,
     0x1.336dacp-114f, 0x1.b7d32ep-66f, 0x1.99f286p-8f, 0.0f, 0x1.1722dap-50f, 0.0f,
     0.0f, 0.0f, 0x1.a2954ep-49f, 0x1.26211cp-113f, 0x1.c540b2p-126f,
     0x1.f3b0ecp-126f, 0.0f, 0x1.30247p-38f, 0x1.8d5f1ep-26f, 0x1.dbdf1ap-67f,
     0x1.af2456p-2f, 0x1p0f, 0.0f, 0x1.980c6cp-60f, 0x1.201b6p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cb28cap-24f, 0x1.c0c426p-30f, 0x1.1db1b2p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06e376p-83f, 0x1.ef68a6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b401c4p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66cbd6p-74f, 0x1.fad172p-116f, 0.0f, 0x1.3d01cp-102f,
     0x1.df74b2p-71f, 0.0f, 0.0f, 0x1.78d998p-45f, 0x1.458262p-8f, 0x1.17d8aap-56f,
     0x1.dd663ap-13f, 0x1.ef8714p-17f, 0x1.771b48p-112f, 0x1.5f82a6p-35f,
     0x1.ab106ap-111f, 0x1.812434p-29f, 0x1.b47fdep-101f, 0.0f, 0x1.a5a8c2p-65f, 0.0f,
     0.0f, 0x1.4e25eap-110f, 0x1.aecf44p-76f, 0.0f, 0.0f, 0x1.bcb4e6p-126f,
     0x1.796f1cp-60f, 0.0f, 0x1.4695e8p-60f, 0x1.df60f6p-21f, 0.0f, 0x1.d40174p-124f,
     0x1.11ed7ep-53f, 0.0f, 0.0f, 0x1.f4b67cp-33f, 0.0f, 0x1.9d71f4p-108f, 0.0f,
     0x1.56baaep-125f, 0.0f
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
            tmp1 = Sleef_finz_roundf1_purecfma(tmp0);
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
    printf("Sleef_finz_roundf1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_roundf1_purecfma bench acc %a\n", global_bench_acc);
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
