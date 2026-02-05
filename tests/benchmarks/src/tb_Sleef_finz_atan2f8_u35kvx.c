/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f8_u35kvx.c --function \
 *     Sleef_finz_atan2f8_u35kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.5667b2p-58f, 0.0f, 0x1.1bf20ep-7f, 0x1.d673aep-69f, 0x1.6f4414p-46f,
     0x1.74221ep-16f, 0.0f, 0.0f, 0x1.e54d32p-88f, 0x1.63faf6p-96f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b7836cp-73f, 0.0f, 0.0f, 0.0f, 0x1.9c43d2p-77f, 0.0f, 0.0f,
     0x1.a2883ep-54f, 0x1.7db4aap-53f, 0x1.b6a1dep-118f, 0.0f, 0x1.5c8c1ap-119f, 0.0f,
     0.0f, 0x1.91bb66p-123f, 0.0f, 0.0f, 0x1.567a3ep-46f, 0x1.edba36p-90f,
     0x1.73cc7ap-16f, 0.0f, 0x1.60ac0cp-62f, 0x1.6d0474p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4681cap-112f, 0x1.d5397p-6f, 0x1.a715dp-111f, 0.0f, 0.0f, 0x1.513a68p-29f,
     0x1.f410cep-120f, 0x1.004f0ap-58f, 0.0f, 0x1.27d21ep-59f, 0x1.98c746p-13f,
     0x1.5427eep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70d654p-61f, 0.0f, 0x1.ec9f22p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1920bap-44f, 0x1.08be08p-82f, 0.0f,
     0x1.9c203ep-90f, 0.0f, 0x1.faa88p-32f, 0.0f, 0.0f, 0.0f, 0x1.5d1a2cp-53f,
     0x1.6951bcp-64f, 0x1.830524p-112f, 0x1.0364b6p-85f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.8bcff4p-4f, 0.0f, 0.0f, 0.0f, 0x1.e2618cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.b2e54ap-17f, 0.0f, 0.0f, 0x1.84a26ep-14f, 0x1.9ffeap-8f, 0x1.640decp-106f,
     0x1.0bedcap-122f, 0x1.417e22p-29f, 0.0f, 0x1.a7772p-95f, 0x1.52a332p-72f,
     0x1.2fdcp-59f, 0.0f, 0.0f, 0x1.c8d34cp-104f, 0x1.692174p-13f, 0.0f, 0.0f,
     0x1.bd15dp-112f, 0x1.148d7ep-69f, 0x1.10b8a6p-96f, 0.0f, 0x1.476278p-2f, 0.0f,
     0.0f, 0x1.dffa04p-58f, 0.0f, 0x1.551e22p-110f, 0.0f, 0x1.9fb53ap-86f,
     0x1.354aacp-40f, 0x1.316b14p-7f, 0.0f, 0x1.d01e6p-124f, 0.0f, 0x1.2c6104p-87f,
     0x1.056a9ep-37f, 0x1.929952p-14f, 0.0f, 0x1.42996ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.df68d6p-49f, 0.0f, 0x1.7c5e62p-41f, 0x1.d55d92p-124f, 0.0f, 0.0f, 0.0f,
     0x1.7361dap-110f, 0.0f, 0.0f, 0.0f, 0x1.15b8f2p-64f, 0.0f, 0x1.40936p-30f, 0.0f,
     0x1p0f, 0x1.ea6aa2p-17f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.023944p-8f,
     0.0f, 0x1.283248p-25f, 0x1.271e2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.234e32p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cdbc6p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35b9a8p-124f, 0x1.54d8f4p-26f, 0.0f, 0x1.455756p-102f, 0x1.e02f6ep-96f,
     0x1.b199fap-91f, 0.0f, 0x1.5232a8p-124f, 0.0f, 0.0f, 0x1.35463cp-42f, 0.0f, 0.0f,
     0x1.7548bcp-49f, 0x1.e7d1f6p-74f, 0.0f, 0x1.e180d8p-123f, 0.0f, 0.0f, 0.0f,
     0x1.30845cp-95f, 0x1.b3ac4ep-59f, 0.0f, 0x1.56c60ap-58f, 0x1.e57c4p-40f,
     0x1.44fdd6p-43f, 0x1.9c6d5p-24f, 0.0f, 0.0f, 0x1.c19f94p-56f, 0x1.61079cp-72f,
     0x1.5712fep-100f, 0.0f, 0x1.f36308p-16f, 0.0f, 0x1.0afc96p-119f, 0.0f, 0.0f,
     0.0f, 0x1.57bb92p-46f, 0.0f, 0.0f, 0x1.f6f74cp-27f, 0.0f, 0.0f, 0.0f,
     0x1.437078p-109f, 0.0f, 0x1.4c3af2p-6f, 0x1.92b57ap-111f, 0.0f, 0.0f,
     0x1.6c8888p-93f, 0x1.c886fcp-125f, 0.0f, 0x1.23d40cp-61f, 0.0f, 0.0f,
     0x1.8654b4p-81f, 0x1.98b266p-82f, 0x1.2f9228p-116f, 0x1.8e4a68p-29f, 0.0f,
     0x1.5473dap-54f, 0.0f, 0x1.5e5e88p-93f, 0x1.61fa68p-59f, 0.0f, 0x1.4d54e6p-21f,
     0x1.5dc52ap-66f, 0.0f, 0x1.b774cp-62f, 0x1.1a50dp-41f, 0.0f, 0.0f,
     0x1.50357ap-71f, 0.0f, 0.0f, 0.0f, 0x1.cad5bp-20f, 0x1.61d0acp-109f,
     0x1.42d77p-112f, 0x1.dcf66p-115f, 0x1.9f4778p-58f, 0.0f, 0.0f, 0.0f,
     0x1.b95d06p-41f, 0x1.f300e2p-41f, 0x1.45a39p-86f, 0x1.75c218p-68f,
     0x1.2893dcp-43f, 0.0f, 0x1.e744f2p-101f, 0.0f, 0.0f, 0x1.5bf112p-26f, 0.0f, 0.0f,
     0.0f, 0x1.af03p-109f, 0x1.079926p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c52db8p-88f, 0x1.58d12cp-67f, 0.0f, 0.0f, 0x1.6ca72ep-5f, 0x1.1e189ep-85f,
     0x1.156ca8p-36f, 0.0f, 0x1.3a41fp-113f, 0.0f, 0x1.c8ad8ap-35f, 0.0f, 0x1p0f,
     0x1.013564p-9f, 0.0f, 0x1.c3e17ap-82f, 0.0f, 0x1.370a42p-82f, 0x1.3aaabp-42f,
     0x1.731d96p-99f, 0.0f, 0x1.fbeceep-89f, 0x1.8270f2p-47f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0x1.06da5ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a97d62p-71f, 0x1.1189f8p-89f, 0.0f, 0x1.5540e4p-40f, 0x1.173034p-55f,
     0x1.7e6af8p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b26fe2p-58f, 0x1.eee71ap-111f,
     0x1.908fap-105f, 0.0f, 0.0f, 0x1.2571d6p-118f, 0x1.ff2e7cp-55f, 0x1.b77e88p-42f,
     0x1.5786bap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a17c4ap-23f, 0x1.5171ep-124f, 0.0f,
     0x1.837c3cp-61f, 0x1.13c852p-69f, 0x1.d0fp-99f, 0x1.81169ap-60f, 0.0f,
     0x1.62384cp-104f, 0x1.5c2fbp-22f, 0.0f, 0x1.33061ap-64f, 0x1.9c969cp-111f, 0.0f,
     0x1.a8a078p-121f, 0x1.694f26p-4f, 0x1.bc6512p-62f, 0x1.fd44c2p-102f,
     0x1.f858aap-48f, 0x1.5c1274p-53f, 0x1.737242p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8384b6p-47f, 0.0f, 0x1.3fb3b2p-87f, 0x1.750ecep-115f, 0x1.e5d7cep-11f,
     0x1.1a6decp-82f, 0.0f, 0.0f, 0x1.a57cdp-10f, 0x1.0944a6p-94f, 0x1.dac7bap-19f,
     0.0f, 0x1.c5b5p-21f, 0.0f, 0x1.582ec8p-36f, 0x1.be466ap-44f, 0x1.df79e6p-9f,
     0x1.342c02p-45f, 0x1.d383fcp-38f, 0.0f, 0.0f, 0x1.875262p-123f, 0.0f,
     0x1.89b1ecp-97f, 0x1.6e5e74p-101f, 0x1.9e1372p-11f, 0.0f, 0x1.cd9056p-39f, 0.0f,
     0x1.3be9eep-70f, 0x1.1b196p-74f, 0x1.a4aefap-104f, 0.0f, 0x1.f605cep-17f,
     0x1.888a78p-80f, 0.0f, 0.0f, 0x1.0feeb2p-10f, 0.0f, 0x1.cab1cap-34f,
     0x1.ef9b26p-97f, 0x1.07d676p-28f, 0.0f, 0.0f, 0x1.9d8cb2p-64f, 0.0f,
     0x1.3be7fap-121f, 0x1.d4d54ap-58f, 0x1.700934p-77f, 0.0f, 0x1.d38804p-104f,
     0x1.44baeap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27e474p-11f, 0x1.150778p-86f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.669ad6p-30f, 0.0f, 0x1.df54bp-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e474cp-106f, 0x1.062fd8p-122f, 0x1.42bc16p-46f,
     0x1.cdd394p-111f, 0.0f, 0x1.89f462p-118f, 0.0f, 0x1.2b3f4ap-126f,
     0x1.6e9cd2p-78f, 0x1.12d87cp-102f, 0x1.2a6576p-86f, 0.0f, 0x1.3b435ep-63f,
     0x1.663c1ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e836f8p-76f, 0.0f,
     0x1.152fe2p-68f, 0.0f, 0.0f, 0.0f, 0x1.844e1ap-88f, 0x1.e66448p-93f, 0.0f,
     0x1.a772c8p-42f, 0.0f, 0x1.e520aap-102f, 0.0f, 0x1.567c6cp-41f, 0x1.8ffedp-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cbea2p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9eb1f4p-109f, 0x1.c30e6ap-23f, 0.0f, 0.0f, 0x1.0611acp-50f, 0.0f, 0.0f,
     0x1.81c894p-39f, 0.0f, 0x1.1a6ebp-99f, 0x1.833dc6p-60f, 0.0f, 0x1.83da36p-117f,
     0.0f, 0x1.57805ep-41f, 0x1.e226d8p-2f, 0.0f, 0x1.da511p-124f, 0.0f,
     0x1.0918c8p-108f, 0.0f, 0.0f, 0x1.ee447cp-40f, 0x1.2709ep-76f, 0.0f, 0.0f,
     0x1.7c37ecp-101f, 0x1.d36b24p-113f, 0.0f, 0x1.9c76d4p-67f, 0.0f, 0x1.df1cf6p-33f,
     0x1.bc8e84p-102f, 0.0f, 0x1.76283ap-39f, 0.0f, 0.0f, 0x1.7b1a6p-92f, 0.0f,
     0x1.5634a8p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf723p-27f, 0.0f, 0.0f,
     0x1.2b701ap-33f, 0x1.02db8cp-126f, 0x1.1239e8p-3f, 0x1.75d736p-18f,
     0x1.963e42p-65f, 0.0f, 0x1.e7ab52p-99f, 0x1.44dff2p-81f, 0.0f, 0x1.3d2edcp-41f,
     0.0f, 0.0f, 0.0f, 0x1.dcdf76p-104f, 0x1.495f08p-92f, 0x1.afdcp-113f, 0.0f,
     0x1.4ed00cp-91f, 0.0f, 0x1.47a256p-59f, 0x1.c0b168p-14f, 0.0f, 0x1.85a54cp-22f,
     0.0f, 0.0f, 0x1.f6cceep-37f, 0x1.326d58p-44f, 0.0f, 0.0f, 0x1.c9af78p-26f,
     0x1.61a3p-28f, 0x1.cc053ap-25f, 0x1.21d654p-75f, 0.0f, 0.0f, 0.0f,
     0x1.228eccp-87f, 0x1.526b26p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d63d8ep-57f,
     0x1.807f08p-81f, 0x1.4340c2p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12db2ep-91f,
     0x1.36042cp-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.881f96p-37f, 0x1.b63154p-97f,
     0x1.0726e8p-39f, 0x1.46804ap-41f, 0.0f, 0.0f, 0.0f, 0x1.111a94p-98f, 0.0f, 0.0f,
     0.0f, 0x1.a47c34p-80f, 0.0f, 0x1.bead42p-65f, 0.0f, 0.0f, 0x1.ba3b7ap-115f,
     0x1.8e0dcp-13f, 0.0f, 0.0f, 0.0f, 0x1.817816p-92f, 0x1.f83654p-101f, 0.0f, 0.0f,
     0.0f, 0x1.e45c18p-122f, 0x1.466aaep-30f, 0.0f, 0x1.541134p-20f, 0.0f,
     0x1.06fdf4p-119f, 0x1.89efe8p-54f, 0x1.729136p-86f, 0.0f, 0x1.96349cp-120f,
     0x1.13b1cp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e81286p-39f, 0x1.d2891p-88f,
     0.0f, 0x1.fa7d7ep-53f, 0x1.87196cp-48f, 0x1.26febp-46f, 0x1.de2ac2p-23f,
     0x1.8d9332p-52f, 0.0f, 0.0f, 0x1.8938b6p-28f, 0.0f, 0.0f, 0x1.21801ap-73f,
     0x1.701b2ep-33f, 0.0f, 0.0f, 0x1.b3eaa8p-43f, 0x1.bab876p-34f, 0.0f,
     0x1.af1d14p-44f, 0x1.bd918p-71f, 0x1.5abfccp-118f, 0x1.f50414p-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8405e8p-118f, 0.0f, 0.0f, 0x1.270a0ap-51f, 0x1.73f898p-54f, 0.0f,
     0.0f, 0x1.b0cce2p-110f, 0x1.8c24fcp-46f, 0.0f, 0x1.5d4806p-119f, 0.0f, 0.0f,
     0x1.99a3c8p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c82fd2p-30f, 0x1.44a67ap-85f, 0.0f,
     0x1.6f3eep-109f, 0x1.1ed6ap-102f, 0x1.8a6d78p-22f, 0.0f, 0.0f, 0x1.e4859ap-18f,
     0.0f, 0x1.044754p-106f, 0.0f, 0x1.75dc94p-97f, 0x1.f79c6ap-99f, 0.0f,
     0x1.4bcffp-106f, 0x1.a7487ap-86f, 0.0f, 0.0f, 0x1.472a2cp-7f, 0.0f,
     0x1.62381ep-118f, 0.0f, 0x1.872c58p-20f, 0.0f, 0.0f, 0x1.01b228p-98f, 0.0f, 0.0f,
     0x1.2881bap-29f, 0x1.e38e3cp-15f, 0x1.0d6148p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.06bbb6p-2f, 0x1.73d6acp-2f, 0x1.acab74p-33f, 0x1.3aef6cp-46f,
     0x1.e4dc5cp-107f, 0.0f, 0x1.b6e522p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a63ffcp-118f, 0x1.fc38b8p-53f, 0.0f, 0x1.4aa158p-65f, 0.0f, 0.0f, 0.0f,
     0x1.87f644p-53f, 0x1.851c1p-45f, 0x1.64817p-11f, 0x1.bdf9bep-107f, 0.0f, 0.0f,
     0x1.42a87p-111f, 0x1.fff5d4p-27f, 0.0f, 0x1.57e2acp-51f, 0x1.a44268p-104f, 0.0f,
     0x1.4be7dap-36f, 0x1.94588p-3f, 0.0f, 0x1.d35e38p-77f, 0x1.f748b8p-86f,
     0x1.68b556p-113f, 0x1.f4d828p-26f, 0x1.20c234p-30f, 0x1.25c46ap-109f, 0.0f, 0.0f,
     0x1.14f7c4p-16f, 0.0f, 0x1.a8152cp-42f, 0.0f, 0.0f, 0.0f, 0x1.fc24acp-113f,
     0x1.a94a4p-1f, 0.0f, 0.0f, 0.0f, 0x1.a57a96p-60f, 0.0f, 0.0f, 0x1.768462p-15f,
     0.0f, 0x1.6884f4p-55f, 0.0f, 0.0f, 0x1.85ab42p-69f, 0x1.889b98p-102f,
     0x1.babee2p-29f, 0.0f, 0x1.cd9b24p-51f, 0.0f, 0x1.87ec9cp-34f, 0x1.c93196p-79f,
     0x1.15c0cap-15f, 0x1.67b558p-71f, 0x1.8f50eap-59f, 0.0f, 0x1.8f757p-93f,
     0x1.34b466p-56f, 0.0f, 0.0f, 0x1.774cbap-82f, 0x1.81e4dep-79f, 0.0f,
     0x1.fb15bp-47f, 0x1.5728c8p-69f, 0x1.2f10b6p-23f, 0x1.c4feeep-123f,
     0x1.135672p-64f, 0x1.627e36p-19f, 0x1.1e7674p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.28e618p-52f, 0.0f, 0x1.5fd12ap-96f, 0.0f, 0.0f, 0.0f, 0x1.28215p-30f, 0.0f,
     0x1.6d12d2p-86f, 0x1.4a26dep-80f, 0.0f, 0x1.5fb284p-124f, 0x1.710a82p-11f, 0.0f,
     0x1.506742p-111f, 0x1.906ff6p-57f, 0x1.118d56p-93f, 0.0f, 0x1.30a166p-98f,
     0x1.3c7becp-31f, 0.0f, 0x1.59808p-8f, 0x1.856e36p-13f, 0.0f, 0x1.934134p-67f,
     0.0f, 0x1.8fbb4ap-15f, 0.0f, 0.0f, 0.0f, 0x1.3f554ep-81f, 0x1.3bc0dp-33f,
     0x1.b4f842p-82f, 0.0f, 0x1.0aaccap-25f, 0x1.c8ed8p-10f, 0x1.874dcap-67f,
     0x1.b2c5bp-114f, 0x1.a1768cp-13f, 0x1.a46baap-21f, 0x1.e65de8p-29f,
     0x1.3fa23ep-99f, 0.0f, 0x1.c526dep-31f, 0x1.248406p-81f, 0x1.011bd8p-3f, 0.0f,
     0x1.0f5882p-108f, 0x1.22440ep-21f, 0.0f, 0x1.cec004p-30f, 0x1.8fca8p-42f,
     0x1.e777cep-16f, 0x1.1b5b62p-117f, 0.0f, 0x1.d48748p-100f, 0x1.35cd4cp-1f, 0.0f,
     0x1.7b539cp-9f, 0x1.a2cc24p-105f, 0x1.54df8cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9d459cp-99f, 0.0f, 0.0f, 0x1.5e28a4p-5f, 0.0f, 0.0f, 0x1.2ec7dep-42f,
     0.0f, 0.0f, 0.0f, 0x1.7ee2p-2f, 0x1.60fd7ap-37f, 0x1.24d5c6p-54f,
     0x1.dc77a4p-122f, 0x1.2072cep-100f, 0x1.9d25a2p-39f, 0x1.a3edb6p-49f, 0.0f,
     0x1.7d49d6p-17f, 0.0f, 0.0f, 0x1.285afp-38f, 0x1.31f5c6p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.358bb8p-85f, 0x1.97d9dcp-31f, 0x1.c3a9d8p-83f, 0x1.754a8ap-98f,
     0x1.1fe26cp-105f, 0.0f, 0.0f, 0.0f, 0x1.d6337p-30f, 0x1.9e11bp-94f,
     0x1.12cbd8p-102f, 0x1.a13a7ep-92f, 0x1.2cc4ecp-74f, 0x1.fe62acp-104f, 0.0f,
     0x1.1ab6b8p-126f, 0x1.c5e5c8p-118f, 0x1.f4bf92p-122f, 0x1.c3f6aep-92f,
     0x1.f89584p-90f, 0.0f, 0.0f, 0x1.a21a14p-94f, 0.0f, 0x1.662152p-121f,
     0x1.be2edep-63f, 0x1.1abcdap-66f, 0.0f, 0.0f, 0.0f, 0x1.386e98p-102f,
     0x1.71eb48p-8f, 0.0f, 0x1.550e38p-2f, 0.0f, 0x1.e1137p-122f, 0.0f, 0.0f, 0.0f,
     0x1.bc56dcp-77f, 0x1.fe49d8p-7f, 0x1.a4c834p-80f, 0x1.7b1f14p-64f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.81e6b4p-49f, 0.0f, 0x1.cad12ap-122f, 0x1.cb6e34p-119f,
     0x1.a93728p-119f, 0.0f, 0x1.78c642p-8f, 0.0f, 0.0f, 0.0f, 0x1.bc7eeep-28f, 0.0f,
     0.0f, 0x1.8878b6p-81f, 0.0f, 0.0f, 0x1.4a117cp-38f, 0.0f, 0x1.f03d2p-121f,
     0x1.cb616ap-89f, 0x1.6e257cp-85f, 0.0f, 0x1.05cbfcp-95f, 0x1.32ba42p-1f, 0.0f,
     0x1.e1062ap-29f, 0.0f, 0.0f, 0x1.c57f18p-99f, 0x1.9c98cap-79f, 0.0f, 0.0f,
     0x1.d7009cp-82f, 0x1.5d104ap-86f, 0.0f, 0.0f, 0x1.31e3acp-13f, 0.0f,
     0x1.6f832ap-97f, 0.0f, 0x1.de0cbep-19f, 0x1.75dc0cp-95f, 0x1.fd2d1p-75f, 0.0f,
     0x1.cff56ap-14f, 0x1.30ce6ap-28f, 0x1.bf3cc4p-17f, 0.0f, 0.0f, 0x1.1a8224p-40f,
     0x1.c01752p-115f, 0x1.00a922p-110f, 0x1.071e0cp-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.375deap-69f, 0x1.3c307cp-23f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0.0f, 0x1.e0565p-57f, 0.0f, 0.0f, 0.0f, 0x1.b5e95ap-103f, 0.0f, 0x1.f4483p-102f,
     0x1.e9463p-57f, 0x1.fddafep-19f, 0x1.e75f76p-5f, 0.0f, 0x1.fbf17cp-89f, 0.0f,
     0x1.a93a9ep-2f, 0.0f, 0.0f, 0x1.941b1cp-45f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e35b7p-80f, 0x1.f1062cp-28f, 0x1.fb4bf4p-107f, 0x1.6a48fep-5f,
     0x1.45623cp-80f, 0x1.d3e06cp-21f, 0x1.8fa44ep-9f, 0.0f, 0x1.a3ee5cp-28f,
     0x1.239678p-79f, 0.0f, 0x1.bccc48p-17f, 0x1.6432dcp-39f, 0x1.5115d2p-116f, 0.0f,
     0.0f, 0x1.4965f6p-126f, 0.0f, 0x1.473df2p-80f, 0.0f, 0.0f, 0x1.a1b74cp-41f, 0.0f,
     0.0f, 0.0f, 0x1.978a4ep-101f, 0.0f, 0x1.00f2aap-1f, 0x1.80f29p-117f,
     0x1.867ca2p-100f, 0.0f, 0x1.8e992p-21f, 0.0f, 0x1.ef54c8p-77f, 0x1.44117ep-98f,
     0x1.b6dcb6p-73f, 0.0f, 0x1.449402p-11f, 0x1.643eep-7f, 0x1.22f5cep-106f, 0.0f,
     0.0f, 0x1.bc4e28p-28f, 0.0f, 0x1.ac686ap-96f, 0x1.70db66p-110f, 0x1.73d5b2p-23f,
     0x1.3f5338p-124f, 0x1.27444ep-110f, 0.0f, 0x1.74377cp-72f, 0.0f, 0.0f,
     0x1.a42478p-21f, 0.0f, 0x1.aa4e08p-59f, 0x1.be63c8p-10f, 0x1.6141bap-99f,
     0x1.63787cp-60f, 0x1.d0eb5p-39f, 0x1.23b146p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e18a8p-122f, 0.0f, 0x1.2f1cp-33f, 0x1.df4d7ap-50f, 0x1.1af122p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23ac8ap-26f, 0.0f, 0.0f, 0x1.fd5498p-38f, 0.0f,
     0.0f, 0x1.4bc3ecp-5f, 0x1.10dda6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89dfa6p-2f,
     0x1.e3b4bcp-34f, 0x1.7edc44p-5f, 0x1.128dfp-86f, 0x1.c8472p-9f, 0x1.633fe8p-4f,
     0.0f, 0x1.ea35fcp-37f, 0.0f, 0x1.63668cp-99f, 0.0f, 0x1.a9db94p-53f, 0.0f, 0.0f,
     0x1.c7102p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0eb0ecp-53f, 0.0f, 0.0f, 0.0f, 0x1.cb86f6p-118f, 0x1.b2732ap-125f, 0.0f,
     0.0f, 0x1.b915d8p-15f, 0.0f, 0.0f, 0.0f, 0x1.ddb328p-123f, 0x1.1dfd2ap-100f,
     0x1.eae7e8p-96f, 0.0f, 0x1.59e1dcp-122f, 0x1.9083a6p-49f, 0.0f, 0.0f, 0.0f,
     0x1.c3f2b4p-119f, 0x1.5c139ap-58f, 0x1.98484cp-125f, 0x1.a2dc4cp-30f, 0.0f, 0.0f,
     0x1.93634p-25f, 0.0f, 0x1.d9b98p-6f, 0x1.5473f2p-31f, 0x1.687d8cp-92f,
     0x1.271942p-81f, 0x1.8eed1p-61f, 0.0f, 0.0f, 0x1.a54aa8p-27f, 0.0f, 0.0f, 0.0f,
     0x1.cce9eap-4f, 0x1.213068p-38f, 0x1.6c7354p-39f, 0.0f, 0.0f, 0.0f,
     0x1.2b4aa4p-35f, 0.0f, 0.0f, 0x1.bf815cp-99f, 0x1.1bb7dap-36f, 0x1.3b9e1ep-99f,
     0.0f, 0.0f, 0x1.d9bfb4p-30f, 0.0f, 0x1.3fdd06p-30f, 0x1.19a93p-76f,
     0x1.a4c3fcp-117f, 0x1.f2cebep-7f, 0.0f, 0x1.a38b28p-119f, 0x1.b705c8p-84f, 0.0f,
     0x1.d4d582p-12f, 0.0f, 0.0f, 0x1.46c888p-89f, 0.0f, 0x1.51315p-126f,
     0x1.af8fp-52f, 0.0f, 0.0f, 0.0f, 0x1.46b07cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.415e08p-107f, 0.0f, 0.0f, 0.0f, 0x1.de299p-32f, 0.0f, 0x1.0127acp-3f,
     0.0f, 0x1.6de01ep-8f, 0.0f, 0.0f, 0x1.98b72ep-42f, 0.0f, 0x1.ca4916p-115f, 0.0f,
     0.0f, 0x1.68c4e4p-64f, 0.0f, 0x1.225c66p-90f, 0x1.18b5cp-84f, 0x1.8ccc5ap-96f,
     0x1.7bf07ap-55f, 0.0f, 0x1.548d3cp-4f, 0.0f, 0x1.cd796ep-85f, 0.0f,
     0x1.afcee8p-45f, 0x1.9f312ap-48f, 0.0f, 0x1.a7887ep-25f, 0.0f, 0x1.f9bc7p-109f,
     0x1.a7bd66p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0edfap-111f, 0x1.2c35fcp-83f,
     0x1.9573eap-72f, 0.0f, 0x1.8eab92p-37f, 0x1.9b4c52p-115f, 0x1.3d6c4ap-122f, 0.0f,
     0x1.146e08p-2f, 0.0f, 0.0f, 0x1.3c4068p-80f, 0x1.2d65bcp-79f, 0.0f,
     0x1.2ee1d4p-72f, 0x1.107e72p-68f, 0.0f, 0.0f, 0.0f, 0x1.ac2b02p-7f, 0.0f,
     0x1.3ee60cp-19f, 0x1.aed112p-1f, 0x1.a3b418p-83f, 0x1.de10bep-101f,
     0x1.93ab62p-30f, 0.0f, 0x1.24ec2cp-39f, 0.0f, 0.0f, 0.0f, 0x1.300f8cp-118f,
     0x1.9fabaap-67f, 0x1.b83a52p-72f, 0x1.591e4ep-40f, 0.0f, 0.0f, 0x1.0beaa6p-76f,
     0x1.b83a74p-44f, 0.0f, 0x1.b50f86p-61f, 0.0f, 0.0f, 0x1.7b12d2p-46f,
     0x1.6b4ff4p-77f, 0.0f, 0.0f, 0.0f, 0x1.13bdaap-74f, 0x1.a4255cp-120f,
     0x1.ff26bep-80f, 0.0f, 0.0f, 0x1.ff7a96p-62f, 0.0f, 0x1.1ea924p-34f, 0.0f, 0.0f,
     0x1.4aa3eap-15f, 0x1.3688ccp-58f, 0x1.7ef65ap-7f, 0x1.28dfdp-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9d41dp-19f, 0x1.df8cfcp-56f, 0x1.5d2424p-120f, 0x1.8a7498p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04da06p-78f, 0.0f, 0.0f, 0x1.946d5ap-16f,
     0.0f, 0x1.938646p-79f, 0.0f, 0x1.52795p-56f, 0.0f, 0x1.e53b74p-122f,
     0x1.e06b4p-46f, 0x1.99f52cp-81f, 0x1.b42a02p-102f, 0.0f, 0.0f, 0.0f,
     0x1.665ec8p-124f, 0.0f, 0.0f, 0x1.1c6d8ap-98f, 0x1.73debep-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f03144p-104f, 0x1.11a1b8p-13f, 0.0f, 0x1.9f094ap-114f,
     0.0f, 0x1.ca38f6p-70f, 0.0f, 0.0f, 0x1.c731c6p-62f, 0.0f, 0x1.8ad736p-64f, 0.0f,
     0x1.152624p-111f, 0x1.dac46p-87f, 0.0f, 0.0f, 0.0f, 0x1.c0d53ep-116f, 0.0f, 0.0f,
     0x1.cfe2b6p-65f, 0x1.9b70e2p-27f, 0.0f, 0.0f, 0x1.0ed6ccp-29f, 0.0f, 0.0f, 0.0f,
     0x1.220fe8p-12f, 0.0f, 0x1.cfd94ep-122f, 0.0f, 0.0f, 0x1.a759dp-93f,
     0x1.3e7c12p-62f, 0x1.a642c2p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8153bep-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0af8fcp-85f, 0x1.a35d4ap-11f, 0.0f, 0x1.31c0ccp-98f,
     0.0f, 0.0f, 0x1.47f3dp-39f, 0x1.888e44p-108f, 0x1.feb3eap-28f, 0x1.13451ap-52f,
     0.0f, 0x1.348a4cp-8f, 0.0f, 0x1.c5000cp-18f, 0.0f, 0x1.01f1p-48f, 0.0f, 0.0f,
     0.0f, 0x1.ea953cp-53f, 0x1.efa59p-87f, 0x1.e0e176p-37f, 0.0f, 0.0f,
     0x1.86dfaep-104f, 0.0f, 0x1.b8b8eep-16f, 0.0f, 0.0f, 0x1.be646ap-124f, 0.0f,
     0x1.b02aa2p-105f, 0x1p0f, 0.0f, 0x1.6f72bep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b9712p-104f, 0.0f, 0x1.a33f2cp-3f, 0.0f, 0x1.55c15ap-28f, 0x1.537f3ep-120f,
     0x1.f19fc6p-22f, 0.0f, 0x1.277624p-107f, 0.0f, 0.0f, 0x1.cbc54ap-52f, 0.0f,
     0x1.fb396cp-58f, 0.0f, 0x1.f112b4p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12de9p-104f, 0.0f, 0x1.a3ad9ap-74f, 0.0f, 0x1.438f6ap-92f, 0.0f,
     0x1.e36ed6p-47f, 0x1.b9fe6p-53f, 0.0f, 0.0f, 0x1.a698dp-75f, 0.0f, 0.0f, 0.0f,
     0x1.e67692p-48f, 0x1.4c20c8p-66f, 0x1.6754ecp-20f, 0x1.e25368p-58f, 0.0f,
     0x1.d28f4ap-121f, 0x1.7af288p-74f, 0.0f, 0x1.cc5aaep-30f, 0x1.df6e92p-35f,
     0x1.511a22p-40f, 0.0f, 0.0f, 0x1.3156d8p-120f, 0x1.27bd48p-83f, 0.0f,
     0x1.297cf6p-122f, 0.0f, 0x1.2db6bap-67f, 0x1.b1a29p-38f, 0x1.1c204p-26f, 0.0f,
     0x1.e4dad4p-4f, 0x1.a80774p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a439c6p-23f, 0.0f,
     0x1.d6bc78p-108f, 0.0f, 0.0f, 0x1.028852p-33f, 0.0f, 0x1.f8dbe8p-1f,
     0x1.9286e8p-45f, 0x1.524276p-107f, 0.0f, 0.0f, 0x1.b8e3eep-107f,
     0x1.5d513cp-105f, 0.0f, 0.0f, 0.0f, 0x1.d7942ap-35f, 0x1.4239ecp-49f,
     0x1.53db4ap-104f, 0.0f, 0.0f, 0x1.15535cp-77f, 0x1.44862ep-37f, 0x1.f64574p-109f,
     0x1.827588p-62f, 0.0f, 0x1.b808p-33f, 0x1.bf802p-88f, 0x1.a2d5cp-49f,
     0x1.ff7eb2p-78f, 0x1.bbdec4p-68f, 0x1.25b032p-20f, 0x1.e0734ap-121f,
     0x1.5ecdb2p-71f, 0x1.b74304p-15f, 0x1.1ecbbep-12f, 0x1.324d5ap-53f,
     0x1.493168p-121f, 0.0f, 0x1.de540cp-58f, 0x1.1feddap-56f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.9242b6p-7f, 0x1.4f0392p-104f, 0x1.6b1d92p-119f, 0.0f, 0.0f, 0.0f,
     0x1.a019fcp-100f, 0.0f, 0x1.138dc8p-43f, 0.0f, 0x1.b5ffbep-121f, 0x1.2d633p-82f,
     0.0f, 0x1.7b9834p-104f, 0x1.3822a4p-88f, 0.0f, 0x1.c43e12p-17f, 0x1.09afc8p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c139ap-25f, 0x1.1da126p-64f, 0x1.a715b4p-102f,
     0x1.d5a41ap-92f, 0.0f, 0x1.361e42p-69f, 0.0f, 0x1.3e749ap-6f, 0.0f,
     0x1.36bd58p-5f, 0x1.f63e3cp-118f, 0x1.09c4e6p-108f, 0x1.31deecp-97f, 0.0f, 0.0f,
     0.0f, 0x1.835938p-97f, 0x1.9117bp-112f, 0.0f, 0x1.f63cccp-57f, 0.0f,
     0x1.50bbbcp-23f, 0x1.c8e79ap-13f, 0.0f, 0x1.64c3a2p-24f, 0x1.e94a1cp-45f, 0.0f,
     0x1.a8c62ep-105f, 0x1.80d91cp-9f, 0.0f, 0x1.8627bep-54f, 0x1.e8cd54p-50f,
     0x1.81a77ap-83f, 0x1.317466p-71f, 0.0f, 0x1.38ec2ep-111f, 0.0f, 0x1.b7948ap-7f,
     0x1.b6481ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60153p-48f, 0.0f, 0.0f,
     0x1.2153aep-55f, 0.0f, 0x1.8879bp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e7736p-61f, 0.0f, 0.0f, 0x1.d00e5ap-100f, 0.0f, 0.0f, 0x1.9dce5ap-51f, 0.0f,
     0x1.4cf28ap-104f, 0.0f, 0.0f, 0.0f, 0x1.ce5d3cp-11f, 0x1.fd018cp-111f, 0.0f,
     0.0f, 0x1.03215ep-1f, 0.0f, 0x1.97688ep-66f, 0x1.13e784p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4626fap-6f, 0.0f, 0.0f,
     0x1.7e30f4p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15a4a4p-14f, 0.0f, 0.0f,
     0x1.131256p-95f, 0.0f, 0x1.dc6e7cp-86f, 0.0f, 0.0f, 0x1.241aa8p-3f, 0.0f,
     0x1.be6458p-32f, 0x1.524c9ap-119f, 0x1.1f5322p-86f, 0.0f, 0.0f, 0x1.ab203p-72f,
     0.0f, 0x1.035eb8p-61f, 0x1.a10caep-30f, 0x1.dc6c68p-103f, 0x1.be55ccp-88f,
     0x1.f5531ap-109f, 0x1.e68ep-33f, 0x1.0e8494p-6f, 0x1.ac78c2p-34f,
     0x1.4eee22p-40f, 0x1.a1ce7cp-15f, 0.0f, 0.0f, 0x1.481e9ap-115f, 0.0f, 0.0f, 0.0f,
     0x1.874358p-15f, 0.0f, 0x1.ce4882p-9f, 0x1.058ecap-18f, 0x1.b45e66p-125f, 0.0f,
     0x1.01c76ap-106f, 0x1.d78bcap-71f, 0.0f, 0x1.03523ep-119f, 0x1.ed0ffcp-10f,
     0x1.6c07fp-1f, 0x1.827ed8p-48f, 0x1.2a3834p-76f, 0x1.c24ffep-73f, 0.0f, 0.0f,
     0.0f, 0x1.b321fap-18f, 0x1.a6a07cp-46f, 0x1.706a8ep-36f, 0.0f, 0x1.9c068ep-110f,
     0.0f, 0x1.b689a8p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12d304p-16f, 0.0f,
     0x1.1859ccp-8f, 0x1.6f51cep-111f, 0x1.b9700ep-55f, 0.0f, 0.0f, 0x1.2a0a5ap-68f,
     0.0f, 0x1.56b9e4p-22f, 0x1.68c322p-10f, 0.0f, 0.0f, 0x1.7df8c8p-109f,
     0x1.192aaap-98f, 0.0f, 0.0f, 0x1.e246dep-82f, 0.0f, 0.0f, 0.0f, 0x1.ca32e2p-40f,
     0.0f, 0.0f, 0x1.530c52p-39f, 0x1.82ceb4p-70f, 0.0f, 0x1.e8d1ep-77f,
     0x1.b823e8p-26f, 0.0f, 0.0f, 0x1.13269ap-123f, 0x1.66d644p-80f, 0.0f, 0.0f,
     0x1.b626c2p-23f, 0x1.c982c8p-45f, 0.0f, 0x1.6bdacp-103f, 0x1.b1c574p-97f,
     0x1.6c74a4p-18f, 0x1p0f, 0x1.efc1d2p-33f, 0.0f, 0.0f, 0x1.1ae622p-1f,
     0x1.d50eb4p-46f, 0.0f, 0.0f, 0x1.cb6cfep-91f, 0x1.a13afp-1f, 0.0f, 0.0f,
     0x1.52e2dep-57f, 0x1.a6e824p-52f, 0.0f, 0.0f, 0x1.eb55f8p-109f, 0.0f,
     0x1.9b8c8ep-89f, 0x1.9fb432p-59f, 0.0f, 0x1.afe48ep-40f, 0.0f, 0.0f, 0.0f,
     0x1.321b4ap-8f, 0.0f, 0x1.6dbb4cp-20f, 0x1.0659b6p-73f, 0x1.16450ep-16f,
     0x1.681d4ep-120f, 0.0f, 0x1.e001c6p-75f, 0x1.924f78p-27f, 0.0f, 0x1.8c30cep-93f,
     0.0f, 0x1.1e6368p-37f, 0.0f, 0.0f, 0.0f, 0x1.5b303ep-101f, 0x1.f69148p-83f,
     0x1.f4c7acp-79f, 0.0f, 0.0f, 0.0f, 0x1.de7f98p-71f, 0.0f, 0.0f, 0x1.4f4d4ap-45f,
     0.0f, 0x1.160fb2p-78f, 0x1.e0c04cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c6f66p-15f,
     0.0f, 0x1.d89f22p-114f, 0.0f, 0.0f, 0x1.d69a64p-36f, 0x1.240726p-95f,
     0x1.86ec88p-47f, 0x1.158066p-7f, 0.0f, 0x1.bda6e6p-119f, 0x1.bfe8b6p-78f,
     0x1.b9984cp-84f, 0.0f, 0.0f, 0x1.1614a8p-11f, 0x1.cf5202p-8f, 0x1.1ef7e2p-55f,
     0.0f, 0.0f, 0.0f, 0x1.213db6p-76f, 0x1.44466cp-38f, 0x1.254d3p-102f, 0.0f,
     0x1.8c2bdp-71f, 0x1.043a02p-65f, 0x1.2687eap-78f, 0x1.6ad486p-16f, 0.0f,
     0x1.ea5c1cp-52f, 0.0f, 0.0f, 0x1.008c26p-57f, 0x1.c35cf8p-104f, 0x1.fd654ap-69f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2011p-124f, 0x1.e59fc2p-33f, 0x1.c55d7ap-124f, 0.0f,
     0.0f, 0x1.3e5c16p-50f, 0.0f, 0x1.718874p-80f, 0x1.9516a4p-53f, 0.0f, 0.0f,
     0x1.27ed7ep-97f, 0x1.cf7aecp-66f, 0.0f, 0x1.f327dep-14f, 0x1.5b30c4p-56f, 0.0f,
     0.0f, 0x1.046e1cp-27f, 0.0f, 0x1.51d91cp-56f, 0x1.d994bap-33f, 0.0f,
     0x1.d09232p-124f, 0.0f, 0x1.9047dp-63f, 0x1.22428ep-66f, 0.0f, 0.0f,
     0x1.b3d50ep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.953448p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.10540cp-69f, 0.0f, 0x1.75559ap-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5d1eacp-15f, 0x1.87b714p-105f, 0x1.16a8a8p-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3be266p-9f, 0x1.e1f846p-105f, 0.0f, 0x1.daaabap-51f,
     0x1.48303p-64f, 0x1.907c82p-23f, 0x1.05bb74p-74f, 0x1.8abe5ep-59f, 0.0f,
     0x1.187ceap-74f, 0.0f, 0x1.c210e8p-30f, 0x1.035bdap-28f, 0.0f, 0x1.82d3c2p-52f,
     0x1.2175fep-56f, 0.0f, 0.0f, 0x1.f9a2ccp-64f, 0x1.55748p-28f, 0.0f,
     0x1.796582p-47f, 0.0f, 0x1.55df62p-2f, 0x1.af25ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0beecp-2f, 0x1.fd67eep-69f, 0x1.a285b2p-32f,
     0x1.9311eep-4f, 0x1.676e0cp-70f, 0x1.c78b7ep-62f, 0x1.9f5ccap-65f,
     0x1.80bd9cp-12f, 0x1.aec74cp-11f, 0.0f, 0x1.ad748ep-47f, 0.0f, 0.0f, 0.0f,
     0x1.dc1e8cp-104f, 0.0f, 0.0f, 0.0f, 0x1.ea9d46p-81f, 0x1.ee381cp-51f, 0.0f,
     0x1.39839ap-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8c6ep-69f, 0x1.007562p-70f,
     0x1.61e166p-78f, 0.0f, 0x1.f65206p-12f, 0.0f, 0.0f, 0x1.9a2c48p-9f, 0.0f, 0.0f,
     0x1.b5a766p-3f, 0.0f, 0x1.179bdp-118f, 0.0f, 0x1.34724p-62f, 0.0f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_finz_atan2f8_u35kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_atan2f8_u35kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_atan2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
