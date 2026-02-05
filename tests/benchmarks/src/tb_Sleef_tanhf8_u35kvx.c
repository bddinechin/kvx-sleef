/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf8_u35kvx.c --function Sleef_tanhf8_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.743d0ap-84f, 0.0f, 0x1.23da32p-40f, 0x1.6adf18p-105f,
     0x1.d0b772p-116f, 0x1.8a3cfcp-65f, 0x1.252884p-119f, 0x1.48c158p-20f,
     0x1.5daff8p-32f, 0x1.420a58p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4635ep-56f, 0.0f,
     0x1.30e9dcp-126f, 0x1.aec4c8p-119f, 0.0f, 0x1.ab72b8p-23f, 0x1.d08342p-66f, 0.0f,
     0.0f, 0.0f, 0x1.3fab4p-51f, 0x1.f965c8p-24f, 0.0f, 0x1.0c9f6cp-60f, 0.0f,
     0x1.b05d46p-25f, 0.0f, 0x1.a62e8cp-93f, 0x1.e6d1cp-114f, 0.0f, 0.0f,
     0x1.6b4cd8p-9f, 0x1.3b5708p-93f, 0x1.723462p-5f, 0x1.8a505ap-37f, 0x1.cd2fdp-69f,
     0.0f, 0.0f, 0x1.a8c3acp-24f, 0x1.08b438p-47f, 0x1.952314p-106f, 0.0f,
     0x1.19d21cp-3f, 0.0f, 0.0f, 0x1.6ec5ccp-90f, 0.0f, 0x1.1e669cp-54f, 0.0f,
     0x1.1c9268p-126f, 0.0f, 0x1.ab6d24p-99f, 0x1.5d82cep-92f, 0x1.800b4ap-83f,
     0x1.262d42p-105f, 0x1.91cb5cp-13f, 0x1.11bc42p-125f, 0x1.c854b2p-113f, 0.0f,
     0x1.161e7ep-82f, 0x1.0dc6c2p-66f, 0.0f, 0.0f, 0.0f, 0x1.8151cep-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af0f92p-83f, 0.0f, 0x1.bc05bep-54f, 0.0f, 0.0f,
     0.0f, 0x1.b0752cp-31f, 0.0f, 0.0f, 0x1.46d434p-32f, 0x1.21164p-15f, 0.0f,
     0x1.0f03b2p-68f, 0.0f, 0x1.f87e3ep-40f, 0x1.5e5e68p-69f, 0x1.071c5p-104f,
     0x1.9d2256p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20d45ep-94f,
     0x1.56b4cap-47f, 0.0f, 0.0f, 0.0f, 0x1.33a04ap-125f, 0.0f, 0.0f, 0.0f,
     0x1.109ceap-101f, 0x1.998de4p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ec88cp-55f, 0x1.c0614ap-110f, 0x1.dc2976p-63f, 0.0f, 0.0f,
     0x1.a6eb92p-35f, 0x1.cc96f4p-7f, 0.0f, 0x1.dce0cep-72f, 0x1.0b81eap-11f,
     0x1.01f0fp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b8052p-18f, 0.0f,
     0x1.96d768p-24f, 0x1.cd9d36p-90f, 0x1.dc7798p-61f, 0.0f, 0.0f, 0.0f,
     0x1.f2bd1p-76f, 0.0f, 0x1.bf9fbap-72f, 0x1.8a719cp-16f, 0.0f, 0x1.6eb5aep-12f,
     0.0f, 0x1.477e74p-46f, 0.0f, 0.0f, 0x1.5dc886p-68f, 0x1.504accp-119f,
     0x1.c27112p-110f, 0x1.ddb59ep-91f, 0.0f, 0x1.cc049ep-77f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0x1.f19058p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd1196p-16f,
     0x1.c95676p-5f, 0.0f, 0x1.70d428p-47f, 0.0f, 0x1.b81542p-20f, 0x1.4ca216p-52f,
     0.0f, 0x1.def756p-14f, 0.0f, 0.0f, 0.0f, 0x1.ccf3a4p-63f, 0.0f, 0x1.7b89aep-126f,
     0x1.743fb6p-18f, 0.0f, 0x1.26964cp-57f, 0x1.3080f8p-78f, 0x1.b80b2p-114f,
     0x1.4d24a8p-54f, 0x1.0e918cp-66f, 0.0f, 0.0f, 0x1.28844ep-92f, 0.0f, 0.0f,
     0x1.672202p-100f, 0.0f, 0x1.4550dp-82f, 0.0f, 0.0f, 0x1.3062dp-20f,
     0x1.d320b2p-63f, 0x1.1bca6cp-69f, 0.0f, 0.0f, 0x1.d1bd5ap-85f, 0x1.30de26p-126f,
     0x1.f3e258p-30f, 0x1.9b3384p-55f, 0.0f, 0.0f, 0x1.a2f40ap-111f, 0x1.00e12ap-46f,
     0x1.36abdcp-9f, 0.0f, 0x1.d0603p-103f, 0x1.64d392p-13f, 0.0f, 0.0f,
     0x1.6461aap-33f, 0.0f, 0x1.aa6ee4p-47f, 0x1.77b9c4p-113f, 0x1.b1b03p-17f,
     0x1.84aefcp-73f, 0.0f, 0x1.b4eap-121f, 0.0f, 0.0f, 0x1.d4402cp-23f, 0.0f,
     0x1.82dc16p-110f, 0x1.e223f2p-83f, 0x1.f3dc4p-23f, 0x1.5d9772p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d82e68p-68f, 0.0f, 0.0f, 0x1.60db0ap-60f, 0.0f,
     0x1.1e9e08p-88f, 0.0f, 0x1.7774cap-81f, 0x1.08761ap-65f, 0x1.49870cp-78f, 0.0f,
     0.0f, 0.0f, 0x1.388f7cp-24f, 0.0f, 0x1.b71c4cp-114f, 0x1.b560a2p-75f, 0.0f,
     0x1.28dcep-92f, 0.0f, 0.0f, 0x1.0303f2p-76f, 0.0f, 0x1.43808cp-37f,
     0x1.8c206ep-106f, 0.0f, 0.0f, 0x1.621216p-117f, 0x1.8b261cp-34f, 0.0f,
     0x1.6e79a8p-100f, 0x1.56eebep-37f, 0.0f, 0x1.ffa17ep-26f, 0x1.9937fep-13f, 0.0f,
     0.0f, 0x1.c7c622p-81f, 0x1.4d65cp-124f, 0x1.688fdep-93f, 0x1.349a52p-124f, 0.0f,
     0x1.d419e6p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89491ap-39f,
     0x1.64a9eep-80f, 0x1.242b7cp-36f, 0.0f, 0.0f, 0.0f, 0x1.7ecap-35f,
     0x1.2e0ddep-13f, 0.0f, 0x1.103c94p-56f, 0x1.1e9f4ep-60f, 0.0f, 0x1.cb6c6ap-71f,
     0x1.d3c69ep-63f, 0.0f, 0x1.1d696ep-30f, 0.0f, 0.0f, 0x1.6f2176p-20f, 0.0f,
     0x1.366782p-17f, 0x1.ac6202p-89f, 0.0f, 0.0f, 0x1.b50fa6p-25f, 0x1.cce874p-85f,
     0.0f, 0.0f, 0x1.c6434ap-104f, 0.0f, 0.0f, 0x1.b736c8p-33f, 0x1.4ff0dep-6f, 0.0f,
     0x1.f86736p-14f, 0.0f, 0x1.070a56p-108f, 0x1.55c03ep-70f, 0x1.bf1e42p-14f, 0.0f,
     0x1.612cf4p-51f, 0x1.1133e6p-45f, 0.0f, 0x1.cd95p-54f, 0x1.59bdf2p-91f, 0.0f,
     0.0f, 0x1.978524p-95f, 0.0f, 0x1.5e9666p-69f, 0x1.dfe3b4p-58f, 0x1.b49e56p-11f,
     0x1.0fab2ep-1f, 0x1.682fep-112f, 0.0f, 0x1.ff4346p-31f, 0x1.800e0cp-38f, 0.0f,
     0.0f, 0x1.ab6b3ap-78f, 0x1.99f3ap-78f, 0.0f, 0.0f, 0.0f, 0x1.e35c7ep-29f, 0.0f,
     0x1.51619p-92f, 0.0f, 0x1.9893c8p-75f, 0.0f, 0.0f, 0.0f, 0x1.de2db2p-103f, 0.0f,
     0x1.499592p-25f, 0x1.2633eap-95f, 0.0f, 0.0f, 0x1.8fd136p-104f, 0x1.4bdea6p-40f,
     0.0f, 0x1.a6ceaep-64f, 0.0f, 0.0f, 0.0f, 0x1.fb8414p-109f, 0x1.0dea9ep-25f, 0.0f,
     0x1.8e2d3ap-17f, 0x1.5f3a04p-102f, 0x1.de7766p-108f, 0x1.a3ecd6p-11f,
     0x1.21781ep-19f, 0.0f, 0x1.4bab26p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b51ep-87f, 0.0f, 0.0f, 0.0f, 0x1.748466p-33f, 0.0f, 0x1.5beb44p-105f,
     0x1.62449cp-4f, 0x1.aaf868p-53f, 0x1.a4ba6cp-32f, 0x1.5514a2p-44f,
     0x1.154c96p-81f, 0x1.6b3ed6p-84f, 0.0f, 0x1.813fc2p-36f, 0.0f, 0.0f, 0.0f,
     0x1.069334p-45f, 0.0f, 0x1.5a975cp-81f, 0.0f, 0.0f, 0.0f, 0x1.a8a7d4p-1f,
     0x1.a8e35p-111f, 0x1.60ec22p-13f, 0.0f, 0.0f, 0x1.d36d8cp-44f, 0.0f, 0.0f,
     0x1.84fd06p-101f, 0x1.a501e8p-89f, 0x1.ad0cf2p-62f, 0.0f, 0.0f, 0x1.dbe484p-50f,
     0x1.22d2c6p-72f, 0x1.695442p-62f, 0.0f, 0x1.103102p-9f, 0.0f, 0.0f,
     0x1.94be68p-109f, 0x1.6a5198p-28f, 0.0f, 0x1.ebfc8cp-106f, 0x1.527108p-31f,
     0x1.7abe52p-100f, 0.0f, 0x1.4ff602p-89f, 0.0f, 0x1.2d81d4p-9f, 0x1.91805cp-107f,
     0.0f, 0.0f, 0x1.a6438cp-116f, 0x1.cc02b6p-16f, 0x1.90fe36p-89f, 0.0f, 0.0f, 0.0f,
     0x1.3d7012p-104f, 0x1.bd9b42p-94f, 0x1.6d55a8p-108f, 0x1.c99f3ap-106f,
     0x1.95f348p-92f, 0x1.8dac4cp-90f, 0x1.402204p-31f, 0.0f, 0x1.21e3aep-121f,
     0x1.01aefp-27f, 0.0f, 0.0f, 0x1.27c482p-17f, 0.0f, 0x1.6de514p-65f, 0.0f, 0.0f,
     0x1.861bfp-91f, 0x1.79d174p-46f, 0x1.da37e6p-20f, 0.0f, 0.0f, 0x1.9a6984p-70f,
     0.0f, 0x1.e4c5eep-49f, 0x1.b97fap-84f, 0.0f, 0x1.9922c6p-111f, 0x1.190126p-126f,
     0x1.ee418p-89f, 0x1.11eadcp-43f, 0.0f, 0x1.67c99p-79f, 0.0f, 0.0f,
     0x1.763958p-63f, 0.0f, 0x1.256c12p-79f, 0x1.1ec3ap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.504e64p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69474cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.07a4f4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24815p-8f, 0.0f, 0.0f, 0.0f,
     0x1.4887ap-24f, 0.0f, 0.0f, 0x1.9433cap-78f, 0x1.d42586p-112f, 0x1.1138bcp-42f,
     0x1.020e1p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7aa95ep-67f, 0x1.857a92p-68f,
     0x1.411728p-58f, 0x1.5dfc5ap-53f, 0.0f, 0.0f, 0x1.0001f2p-60f, 0.0f,
     0x1.4ccbap-21f, 0.0f, 0x1.b8e002p-114f, 0x1.436684p-6f, 0.0f, 0.0f,
     0x1.e2201p-86f, 0.0f, 0.0f, 0.0f, 0x1.445b76p-25f, 0.0f, 0x1.9dcbfep-55f, 0.0f,
     0x1.5ca0f4p-40f, 0x1.4a9ee4p-4f, 0x1.7db05cp-49f, 0.0f, 0x1.ac34bp-74f,
     0x1.345242p-11f, 0.0f, 0.0f, 0.0f, 0x1.68b346p-106f, 0x1.222b84p-113f,
     0x1.6b0996p-34f, 0x1.6c7e8ep-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f43cbcp-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5654f6p-29f, 0x1.b9c608p-97f, 0.0f,
     0.0f, 0x1.471d4cp-99f, 0x1.9b78d8p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4442e4p-1f,
     0x1.1aa1aap-21f, 0x1.2c05bap-68f, 0.0f, 0x1.6ce458p-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0cf0ap-22f, 0x1.f6f0dp-113f, 0.0f, 0.0f, 0.0f, 0x1.5de9e6p-68f,
     0x1.21b02cp-37f, 0.0f, 0.0f, 0x1.96ec06p-86f, 0.0f, 0x1.e9f054p-8f, 0.0f,
     0x1.551d32p-67f, 0.0f, 0x1.55a034p-113f, 0x1.c84598p-30f, 0x1.870316p-51f, 0.0f,
     0.0f, 0.0f, 0x1.e500e4p-124f, 0x1.b2181ep-117f, 0x1.400a4cp-8f, 0x1.3c7c7ap-60f,
     0x1.f14722p-24f, 0x1.46bf66p-90f, 0.0f, 0.0f, 0x1.3d4718p-108f, 0x1.e13b5p-28f,
     0x1.23dddp-20f, 0x1.6faa94p-75f, 0x1.bbde0ap-25f, 0.0f, 0.0f, 0x1.264b6ap-22f,
     0.0f, 0.0f, 0x1.18b3e8p-113f, 0x1.f77464p-15f, 0x1.ff2262p-123f, 0.0f, 0.0f,
     0x1.f1cd76p-17f, 0.0f, 0x1.cc6cfap-125f, 0x1.ed7a6p-101f, 0x1.04f644p-16f,
     0x1.c97c46p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cde722p-96f, 0.0f,
     0x1.52559p-75f, 0.0f, 0x1.9531dcp-42f, 0x1.6c013ep-56f, 0.0f, 0x1.d352fap-114f,
     0.0f, 0.0f, 0x1.82b67cp-14f, 0x1.f7569p-48f, 0x1.3907aap-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c82ef4p-120f,
     0x1.d96b12p-40f, 0x1.28ff42p-48f, 0.0f, 0x1.0f93dap-1f, 0x1.e50b68p-60f, 0.0f,
     0x1.34a55ap-59f, 0x1.95c96p-18f, 0x1.baa3a8p-110f, 0x1.61ac86p-93f,
     0x1.3f3668p-53f, 0x1.103562p-40f, 0x1.c04ec8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.772e94p-45f, 0x1.6b3034p-84f, 0x1.c7d694p-81f, 0x1.dfef68p-48f, 0.0f,
     0.0f, 0x1.558e24p-105f, 0x1.61e42ap-11f, 0.0f, 0x1.cec2ap-32f, 0x1.66c4ap-55f,
     0x1.51abb8p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10313p-103f, 0.0f, 0x1.9907dap-73f,
     0x1.59d042p-87f, 0x1.2bc02ep-24f, 0x1.60d67cp-41f, 0x1.0939e4p-56f,
     0x1.714d64p-66f, 0x1.755548p-102f, 0.0f, 0x1.ffb3a4p-9f, 0x1.d8e14p-89f, 0.0f,
     0x1.87a6acp-67f, 0x1.0f9e4ep-12f, 0x1.c9e294p-70f, 0.0f, 0.0f, 0.0f,
     0x1.2c3a02p-124f, 0.0f, 0x1.4ca25p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2616fep-17f, 0.0f, 0x1.29e326p-29f, 0.0f, 0.0f, 0x1.12c25ap-104f, 0.0f,
     0x1.992254p-74f, 0.0f, 0x1.1a0cbp-54f, 0.0f, 0.0f, 0x1.c2ff9ap-92f,
     0x1.c6f3e2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb10b4p-126f,
     0x1.3f75bep-40f, 0x1.073e1cp-69f, 0x1.bece48p-50f, 0.0f, 0x1.ca78b6p-43f,
     0x1.a2d568p-70f, 0.0f, 0.0f, 0.0f, 0x1.fae4ecp-16f, 0.0f, 0x1.380f16p-20f, 0.0f,
     0.0f, 0.0f, 0x1.9bc472p-30f, 0.0f, 0.0f, 0.0f, 0x1.6a331ep-93f, 0.0f,
     0x1.b7a04p-55f, 0.0f, 0.0f, 0x1.1859b4p-21f, 0.0f, 0.0f, 0x1.3c0884p-40f, 0.0f,
     0x1.3ad164p-37f, 0x1.0f2dfp-89f, 0x1.124c1p-43f, 0.0f, 0x1.0e0a5cp-32f, 0.0f,
     0x1.02f114p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1d118p-75f, 0x1.9b492ep-46f,
     0.0f, 0x1.e1aad4p-89f, 0.0f, 0x1.963d9p-21f, 0.0f, 0.0f, 0x1.80e384p-9f,
     0x1.5aef8p-62f, 0x1.9afc84p-35f, 0x1.4cc2c4p-87f, 0.0f, 0x1.654696p-39f,
     0x1.c4bf0ep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b24bc4p-76f, 0.0f, 0.0f, 0.0f,
     0x1.cfe2acp-100f, 0.0f, 0x1.62576p-106f, 0x1.65eb4ep-53f, 0.0f, 0x1.c89e1ep-21f,
     0x1.6e893ep-15f, 0x1.199b1cp-118f, 0x1.587d42p-36f, 0x1.9b51b2p-11f, 0.0f,
     0x1.0a425p-92f, 0x1.c41ea6p-54f, 0x1.7a807p-8f, 0x1.8f7bd6p-114f, 0x1.6a1e1p-47f,
     0x1.bbe80ap-121f, 0.0f, 0.0f, 0x1.0dc1d8p-120f, 0.0f, 0x1.d76c36p-66f,
     0x1.9c3d46p-113f, 0.0f, 0x1.0bd4dcp-53f, 0.0f, 0.0f, 0.0f, 0x1.94d06p-72f,
     0x1.a3c124p-40f, 0.0f, 0.0f, 0x1.18b964p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ef698p-44f, 0.0f, 0x1.6ac23cp-116f, 0.0f, 0x1.6731b6p-39f, 0.0f,
     0x1.5c2fd4p-117f, 0.0f, 0x1.615a5p-39f, 0x1.a8f256p-6f, 0.0f, 0.0f,
     0x1.3ca5fap-14f, 0x1.945e18p-104f, 0x1.d6c604p-36f, 0x1.c0dc5cp-19f,
     0x1.98755ap-107f, 0.0f, 0.0f, 0.0f, 0x1.f73f54p-45f, 0.0f, 0.0f, 0x1.25cfb6p-11f,
     0x1.de99fcp-24f, 0x1.5daa8cp-37f, 0x1.bc4b7cp-52f, 0x1.a0771ap-45f, 0.0f,
     0x1.8fe3a2p-2f, 0x1.e6818ap-114f, 0x1.09d4c6p-121f, 0.0f, 0x1.cf9594p-17f,
     0x1.5e8a5ep-17f, 0.0f, 0x1.99a492p-19f, 0x1.0b0064p-97f, 0x1.c2fa36p-107f, 0.0f,
     0.0f, 0.0f, 0x1.bc5416p-85f, 0x1.d75a1p-99f, 0x1.df377p-120f, 0.0f,
     0x1.43869ap-83f, 0x1.442c2p-96f, 0x1.d64786p-56f, 0.0f, 0x1.cb1fdep-3f,
     0x1.23e49cp-123f, 0x1.363bb2p-105f, 0.0f, 0.0f, 0.0f, 0x1.f069fcp-14f,
     0x1.efcf76p-51f, 0x1.512af2p-70f, 0.0f, 0x1.685ae6p-113f, 0x1.3a7eeap-111f, 0.0f,
     0.0f, 0x1.65498cp-36f, 0x1.5af7e2p-59f, 0x1.71491cp-15f, 0x1.521c3ap-29f, 0.0f,
     0.0f, 0.0f, 0x1.6de19ap-73f, 0x1.a1fc96p-4f, 0.0f, 0.0f, 0x1.c47418p-125f, 0.0f,
     0x1.cc1ffp-126f, 0x1.bb366ap-34f, 0x1.9a26ecp-1f, 0x1.782ec2p-39f, 0.0f,
     0x1.af36d4p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03b61ap-86f, 0x1.62f268p-49f, 0.0f,
     0x1.b58a2ep-126f, 0.0f, 0.0f, 0.0f, 0x1.8e8ac4p-37f, 0.0f, 0.0f, 0.0f,
     0x1.a2da54p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e5476p-6f, 0x1.e4bf1ap-38f,
     0x1.106c4cp-19f, 0x1.f2a98cp-58f, 0.0f, 0x1.f34edcp-56f, 0.0f, 0x1.b79438p-23f,
     0.0f, 0.0f, 0x1.e7805ap-54f, 0.0f, 0.0f, 0x1.36476cp-119f, 0x1.a23a38p-76f, 0.0f,
     0x1.77d7e6p-51f, 0x1.a27edp-41f, 0.0f, 0x1.a7c6d2p-17f, 0x1.8a172p-105f,
     0x1.e625aep-7f, 0x1.931a4cp-87f, 0x1.be5f2cp-69f, 0.0f, 0x1.4a570ep-45f,
     0x1.d86ebp-117f, 0.0f, 0x1.87dd3cp-35f, 0x1.cfe14cp-67f, 0.0f, 0x1.36a308p-114f,
     0x1.b8aa44p-28f, 0x1.e163a8p-62f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_tanhf8_u35kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_tanhf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_tanhf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
