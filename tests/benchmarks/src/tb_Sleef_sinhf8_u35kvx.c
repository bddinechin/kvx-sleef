/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhf8_u35kvx.c --function Sleef_sinhf8_u35kvx \
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
     0x1.8bf4acp-18f, 0.0f, 0.0f, 0x1.0f01cep-69f, 0.0f, 0.0f, 0x1.42049ep-17f, 0.0f,
     0.0f, 0x1.72e724p-72f, 0.0f, 0x1.dde1a8p-15f, 0x1.4d28f6p-70f, 0x1.0f2e3p-32f,
     0.0f, 0.0f, 0x1.ee049ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86257ep-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6588cp-48f, 0.0f, 0x1.a26d12p-111f, 0x1.d64b68p-61f,
     0.0f, 0x1.9c42fcp-65f, 0x1.d8bfcep-125f, 0.0f, 0.0f, 0x1.dc1046p-57f,
     0x1.ed9fe6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25beb6p-94f, 0.0f, 0.0f,
     0x1.89755ep-53f, 0x1.c7e5acp-36f, 0x1.1bf912p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.100188p-20f, 0x1.7e22cep-56f, 0x1.ce9766p-25f, 0x1p0f, 0.0f, 0.0f,
     0x1.166d3ep-10f, 0x1.0a38p-63f, 0.0f, 0x1.8a89fap-90f, 0.0f, 0.0f, 0.0f,
     0x1.02611ap-15f, 0x1.a2900cp-74f, 0.0f, 0x1.82a0dp-1f, 0.0f, 0x1.b7fdfap-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7720a6p-104f, 0x1.a0f1aap-124f,
     0x1.e6018ap-59f, 0.0f, 0.0f, 0.0f, 0x1.4b2e34p-27f, 0x1.d5c4ap-38f, 0.0f,
     0x1.6282e4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a45772p-29f, 0x1.30ebeap-96f,
     0x1.eaba14p-81f, 0x1.3fc06cp-6f, 0.0f, 0x1.ff6614p-18f, 0.0f, 0x1.1ab33ep-77f,
     0x1.9959bp-74f, 0x1.ef5b0cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff7632p-116f,
     0x1.4b3896p-74f, 0.0f, 0.0f, 0x1.be061p-84f, 0x1.81afbep-119f, 0.0f, 0.0f, 0.0f,
     0x1.dcb7dap-91f, 0x1.8160dcp-44f, 0.0f, 0x1.eb0652p-115f, 0.0f, 0x1.2e8268p-45f,
     0x1.1b5686p-22f, 0x1.166164p-19f, 0x1.8639e4p-54f, 0.0f, 0x1.a21964p-21f, 0.0f,
     0x1.cf7a26p-52f, 0.0f, 0x1.72b758p-80f, 0x1.84e03ap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ca06ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.85a75cp-81f, 0.0f, 0x1.116524p-60f, 0x1.2b5426p-12f, 0x1.60775ap-32f,
     0.0f, 0.0f, 0x1.29c5cep-9f, 0x1.14dfa8p-125f, 0x1.69aa4cp-101f, 0.0f,
     0x1.a37b56p-85f, 0x1.9d0764p-74f, 0.0f, 0.0f, 0.0f, 0x1.fbd586p-13f,
     0x1.058ffcp-76f, 0x1.5261f8p-100f, 0x1.a8542ap-95f, 0x1.897402p-32f,
     0x1.741202p-54f, 0.0f, 0x1.64dc88p-58f, 0.0f, 0x1.a906bep-85f, 0.0f,
     0x1.eee6eap-65f, 0.0f, 0x1.0a139ep-101f, 0x1.240e1cp-15f, 0.0f, 0.0f, 0.0f,
     0x1.5cf0b2p-111f, 0.0f, 0.0f, 0x1.6d4572p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.93d51ap-115f, 0x1.a7f6ccp-120f, 0x1.7e50eep-121f, 0.0f, 0x1.bb91bp-30f,
     0x1.997b6ap-5f, 0x1.4bd748p-93f, 0x1.6c2f0ep-121f, 0x1.624668p-113f,
     0x1.65ac02p-90f, 0.0f, 0x1.e1ecep-122f, 0.0f, 0x1.5c070cp-71f, 0x1.5ecafp-50f,
     0x1.33c3cep-123f, 0.0f, 0.0f, 0x1.757e2ep-42f, 0.0f, 0x1.1aeebap-12f,
     0x1.94cd62p-6f, 0.0f, 0x1.c73284p-113f, 0.0f, 0.0f, 0.0f, 0x1.977e4p-40f, 0.0f,
     0.0f, 0.0f, 0x1.aef314p-123f, 0.0f, 0x1.0d8c32p-26f, 0.0f, 0x1.20f386p-125f,
     0x1.9984b6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08182ap-74f, 0.0f,
     0.0f, 0.0f, 0x1.909b4ap-2f, 0.0f, 0x1.afe84ep-102f, 0x1.8f3f28p-57f,
     0x1.70b432p-74f, 0x1.f2ede6p-13f, 0x1.e7314ap-1f, 0.0f, 0x1.b91ec4p-79f, 0.0f,
     0x1.3f5106p-74f, 0x1.a0d798p-24f, 0x1.67c9a8p-111f, 0.0f, 0.0f, 0.0f,
     0x1.a0780ap-43f, 0x1.a5b462p-86f, 0.0f, 0x1.e42a1ep-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83a1c2p-49f, 0x1.670cecp-16f, 0.0f, 0.0f, 0x1.67d322p-14f, 0x1.c5881cp-105f,
     0x1.77a832p-50f, 0.0f, 0.0f, 0x1.8332b8p-39f, 0x1.1508cp-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e500a8p-48f, 0.0f, 0.0f, 0x1.cdcebp-80f, 0.0f, 0x1.8e56f4p-18f,
     0x1.6578f8p-8f, 0x1.14a902p-33f, 0.0f, 0.0f, 0x1.e23dbcp-30f, 0x1.ae2d46p-80f,
     0x1.ebc93ap-8f, 0x1.d8278ap-100f, 0x1.33db02p-55f, 0.0f, 0.0f, 0x1.001b4ap-27f,
     0.0f, 0.0f, 0.0f, 0x1.e16facp-17f, 0x1.4443f6p-126f, 0.0f, 0.0f, 0x1.f4fb2p-87f,
     0.0f, 0x1.a2425cp-7f, 0x1.5ef4aep-112f, 0x1.c1514ap-84f, 0.0f, 0x1.5ef22ep-74f,
     0x1.66f262p-122f, 0.0f, 0x1.241b7ap-100f, 0.0f, 0.0f, 0x1.022172p-64f,
     0x1.40d414p-76f, 0.0f, 0.0f, 0.0f, 0x1.27b45cp-49f, 0.0f, 0.0f, 0x1.5a8f8ap-34f,
     0.0f, 0.0f, 0x1.1d3792p-117f, 0x1.3fb0bep-70f, 0.0f, 0x1.89acccp-90f, 0.0f, 0.0f,
     0.0f, 0x1.8f4cfcp-114f, 0.0f, 0x1.e172d4p-113f, 0x1.f843a6p-78f,
     0x1.52e2e8p-115f, 0x1.b4855ap-82f, 0.0f, 0.0f, 0.0f, 0x1.58c024p-88f,
     0x1.e8976p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fd742p-69f, 0.0f, 0.0f,
     0x1.5619d4p-123f, 0.0f, 0x1.7e8494p-6f, 0x1.74034p-62f, 0.0f, 0x1.ee8a7ap-54f,
     0x1.8080fp-15f, 0.0f, 0x1.36fb3p-82f, 0x1.069986p-34f, 0x1.dbe0a4p-40f,
     0x1.96818p-17f, 0.0f, 0.0f, 0.0f, 0x1.66a1d4p-8f, 0x1.656e2ap-52f, 0.0f, 0.0f,
     0x1.4bc6cap-79f, 0.0f, 0x1.9395dep-13f, 0x1.373102p-103f, 0x1.b748a6p-82f,
     0x1.226b1ep-126f, 0x1.a2bbdcp-86f, 0.0f, 0.0f, 0.0f, 0x1.55366ep-109f,
     0x1.462c66p-17f, 0.0f, 0x1.73353p-121f, 0x1.aed0e8p-96f, 0x1.7af84ap-78f,
     0x1.6f0faap-84f, 0x1.7941dp-65f, 0.0f, 0.0f, 0x1.7549dap-79f, 0.0f,
     0x1.61fdbep-59f, 0x1.c7ea68p-5f, 0x1.ac98c2p-102f, 0x1.aca40cp-37f,
     0x1.fa1bd6p-1f, 0x1.e9d3fap-9f, 0x1.b40274p-43f, 0x1.7d5894p-23f, 0.0f, 0.0f,
     0x1.7a175ap-114f, 0x1.17b752p-71f, 0x1.5f6cccp-72f, 0x1.ef9bb8p-5f, 0.0f, 0.0f,
     0x1.3ab51cp-15f, 0x1.dadb32p-71f, 0.0f, 0x1.efe9d4p-115f, 0x1.de9a38p-44f,
     0x1.f213fp-38f, 0x1.3044cep-67f, 0x1.c45528p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44ccd2p-31f, 0x1.b11a0cp-74f, 0x1.cbae86p-4f, 0x1.54d4dp-82f,
     0x1.6a23f2p-113f, 0x1.00e184p-69f, 0.0f, 0.0f, 0x1.0ec1fep-53f, 0x1.c6f706p-39f,
     0x1.ac0b4p-112f, 0x1.cf95f4p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d477ap-31f,
     0x1.8380c8p-125f, 0.0f, 0x1.ee2632p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21ee28p-9f,
     0.0f, 0.0f, 0x1.e7ce9ep-94f, 0x1.75ed48p-38f, 0x1.8876b2p-16f, 0x1.ac4db8p-74f,
     0x1.cf5fbp-105f, 0.0f, 0.0f, 0x1.82b57ep-111f, 0.0f, 0.0f, 0x1.70b06ap-21f,
     0x1.a3372p-8f, 0.0f, 0x1.5b8cbcp-109f, 0x1p0f, 0.0f, 0x1.98fb9p-98f,
     0x1.8bc6a8p-94f, 0.0f, 0.0f, 0.0f, 0x1.275094p-40f, 0.0f, 0.0f, 0x1.87f61p-23f,
     0.0f, 0x1.2b348ap-79f, 0.0f, 0.0f, 0x1.61acd8p-101f, 0x1.0d911ep-91f, 0.0f,
     0x1.6c5a36p-85f, 0.0f, 0.0f, 0.0f, 0x1.25ca6ep-23f, 0x1.dab59p-2f, 0.0f, 0.0f,
     0x1.4da6b8p-124f, 0.0f, 0.0f, 0x1.24345ep-25f, 0.0f, 0x1.634c3ap-33f,
     0x1.7240aap-69f, 0.0f, 0.0f, 0.0f, 0x1.300dd4p-87f, 0.0f, 0x1.db1bf6p-67f, 0.0f,
     0x1.b5572cp-109f, 0x1.52c4e2p-25f, 0x1.15f4aap-26f, 0x1.2da02ep-120f, 0.0f,
     0x1.5a5b32p-55f, 0x1.a2f44p-65f, 0.0f, 0x1.6241a2p-58f, 0.0f, 0.0f,
     0x1.81b5fep-121f, 0x1.63b5bap-92f, 0.0f, 0x1.2de8d6p-68f, 0x1.2518acp-50f,
     0x1.df9d86p-81f, 0x1.1a9ff2p-17f, 0.0f, 0x1.f7a95p-2f, 0.0f, 0x1.209ccep-104f,
     0.0f, 0.0f, 0x1.b3cfe6p-12f, 0x1.3b6d52p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a29d42p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.699fcap-121f, 0.0f, 0.0f,
     0x1.ab2b1ap-9f, 0x1.7afdaep-85f, 0.0f, 0x1.7aace2p-2f, 0x1.860db8p-43f, 0.0f,
     0.0f, 0.0f, 0x1.ee5a3p-117f, 0x1.729c6p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.599cbcp-33f, 0.0f, 0.0f, 0.0f, 0x1.f423aap-122f, 0.0f, 0x1.f595f6p-70f,
     0x1.f55cfp-30f, 0x1.eb0cfep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d834b6p-39f, 0.0f,
     0x1.b135b2p-33f, 0x1.cd6c9ep-23f, 0x1.740864p-29f, 0x1.b016p-71f, 0.0f, 0.0f,
     0x1.c3d3ccp-93f, 0x1.b1a60ap-33f, 0x1.bae4f8p-95f, 0x1.b226eap-102f, 0.0f, 0.0f,
     0.0f, 0x1.b2276ap-99f, 0.0f, 0.0f, 0x1.93f0fcp-6f, 0x1p0f, 0x1.29bfd6p-81f,
     0x1p0f, 0x1.060718p-89f, 0.0f, 0.0f, 0x1.40c70ap-62f, 0.0f, 0x1.41a36ep-110f,
     0x1.8a6b58p-43f, 0.0f, 0x1.c5bcdcp-38f, 0.0f, 0.0f, 0x1.f10fbep-89f,
     0x1.9e63d4p-63f, 0.0f, 0.0f, 0.0f, 0x1.aacaeap-48f, 0x1.487c38p-49f, 0.0f,
     0x1.f54facp-34f, 0x1.496c9cp-47f, 0.0f, 0.0f, 0.0f, 0x1.eca2acp-71f,
     0x1.9f9752p-36f, 0x1.ba22f4p-78f, 0.0f, 0.0f, 0.0f, 0x1.37ce02p-7f,
     0x1.dbc3bcp-2f, 0.0f, 0.0f, 0x1.222e14p-102f, 0x1.08d4ap-33f, 0.0f, 0.0f, 0.0f,
     0x1.d5c6cp-1f, 0.0f, 0.0f, 0x1.30c7a4p-79f, 0x1.429b58p-61f, 0.0f,
     0x1.97f50cp-122f, 0x1.61284p-115f, 0x1.8f29dap-42f, 0x1.b83ecp-85f, 0.0f,
     0x1.1476aep-109f, 0.0f, 0x1.294e12p-49f, 0.0f, 0x1.7dc78ep-45f, 0x1.d1f6dap-111f,
     0.0f, 0x1.4ba254p-103f, 0x1.dbd86cp-23f, 0.0f, 0.0f, 0x1.c84bap-41f,
     0x1.6c7cd4p-81f, 0x1.b6d85ap-87f, 0x1.cae92p-2f, 0.0f, 0x1.f2f8c4p-100f,
     0x1.9f202p-119f, 0x1.1015cp-88f, 0x1.102a04p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e1abp-45f, 0x1.21fe66p-74f, 0x1.df2724p-115f, 0x1.05874p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83a484p-116f, 0.0f, 0.0f, 0.0f, 0x1.65e0dap-105f,
     0x1.6b403cp-54f, 0x1.84bbfep-13f, 0x1.450beep-31f, 0x1.8f463ap-104f,
     0x1.60e42cp-94f, 0x1.68b4e2p-116f, 0x1.77a3dcp-66f, 0.0f, 0.0f, 0.0f,
     0x1.975e16p-100f, 0x1.7c82acp-109f, 0x1.098d84p-55f, 0x1.62f84p-97f,
     0x1.41292ap-39f, 0.0f, 0.0f, 0.0f, 0x1.09903ep-60f, 0x1.e66facp-55f, 0.0f, 0.0f,
     0.0f, 0x1.7dfa7cp-91f, 0.0f, 0x1.28b0aap-124f, 0x1.ba474cp-114f, 0x1.ff952cp-3f,
     0.0f, 0x1.8d975p-77f, 0.0f, 0x1.67de58p-118f, 0x1.36cd8cp-113f, 0.0f, 0.0f,
     0x1.4cf9p-98f, 0x1.9d3536p-43f, 0.0f, 0x1.253228p-13f, 0x1.8673a6p-25f, 0.0f,
     0.0f, 0.0f, 0x1.a35b4ap-31f, 0x1.d1bcfep-109f, 0x1.424024p-2f, 0x1.b1d12p-23f,
     0.0f, 0.0f, 0.0f, 0x1.bd65b2p-40f, 0.0f, 0x1.6f31aep-2f, 0x1.f1f014p-25f,
     0x1.5c89fap-82f, 0.0f, 0x1.74d436p-122f, 0.0f, 0.0f, 0.0f, 0x1.1ae49ap-75f,
     0x1.bd2d9p-10f, 0x1.488c48p-119f, 0.0f, 0x1.8166a2p-48f, 0x1.1a4ae6p-93f,
     0x1.fddf92p-96f, 0x1.dc9a56p-80f, 0x1.7e1458p-109f, 0.0f, 0.0f, 0.0f,
     0x1.d3ac3ap-91f, 0x1.51d2e8p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e9296p-62f, 0.0f,
     0x1.6f275p-86f, 0.0f, 0x1.9dffdap-45f, 0.0f, 0x1.a15b2cp-119f, 0x1.585ccap-21f,
     0x1.bf349p-76f, 0.0f, 0.0f, 0x1.98eb16p-74f, 0.0f, 0x1.a0afecp-86f,
     0x1.f152fap-43f, 0.0f, 0x1.49914p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d54efp-102f, 0.0f, 0.0f, 0.0f, 0x1.742f4cp-110f, 0x1.ce00eap-47f, 0.0f,
     0x1.fee0cp-46f, 0.0f, 0x1.3ad884p-95f, 0.0f, 0x1.6b8ecep-114f, 0x1.4e8448p-28f,
     0x1.37bf94p-52f, 0.0f, 0.0f, 0.0f, 0x1.49bf18p-78f, 0.0f, 0x1.66ae24p-79f,
     0x1.8393bcp-119f, 0x1.44aa36p-32f, 0x1.d6c406p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0eb5e8p-18f, 0x1.b7509ep-61f, 0.0f, 0x1.e81e1ep-7f,
     0x1.ce4f7ep-89f, 0.0f, 0.0f, 0x1.4d9b06p-15f, 0x1.5c631p-64f, 0x1.205b7ap-24f,
     0.0f, 0.0f, 0.0f, 0x1.341dbp-82f, 0x1.e5c1bp-101f, 0.0f, 0.0f, 0x1.24a0acp-119f,
     0x1.15ddccp-115f, 0.0f, 0.0f, 0x1.4e07f2p-98f, 0x1.402044p-31f, 0x1.aafbd6p-67f,
     0.0f, 0.0f, 0x1.13f03ap-120f, 0.0f, 0x1.0a3a7p-66f, 0x1.4e399ap-95f,
     0x1.9fabdp-92f, 0x1.82cffap-79f, 0.0f, 0.0f, 0x1.a174ecp-56f, 0x1.9b9e62p-15f,
     0.0f, 0x1.a5bd4cp-3f, 0x1.76583ap-24f, 0x1.6a41cp-120f, 0.0f, 0.0f,
     0x1.15d054p-48f, 0.0f, 0x1.4d474cp-97f, 0.0f, 0x1.90301p-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d4f02p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.283b9p-70f, 0x1.8345bep-3f, 0x1.0d831ap-60f,
     0x1.0dc9d6p-101f, 0x1.af9b76p-44f, 0x1.5f29ccp-37f, 0x1.cbd08ap-27f,
     0x1.5e54e6p-101f, 0x1.b2899cp-35f, 0x1.846328p-92f, 0.0f, 0x1.f8418p-31f, 0.0f,
     0.0f, 0.0f, 0x1.ee7fe2p-11f, 0x1.575a66p-101f, 0x1.d6ebe2p-126f, 0x1.6ac35ap-95f,
     0.0f, 0.0f, 0x1.ca493p-28f, 0.0f, 0x1.641fbap-53f, 0x1.c63ff4p-84f, 0.0f,
     0x1.c92682p-25f, 0.0f, 0.0f, 0.0f, 0x1.e7f9f4p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a5e3dep-85f, 0.0f, 0.0f, 0x1.8476acp-97f, 0x1.69785p-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35e2ap-46f, 0x1.1d0834p-20f, 0.0f,
     0x1.881d7p-41f, 0.0f, 0x1.2a5718p-35f, 0.0f, 0x1.a88426p-21f, 0x1.86176ep-60f,
     0x1.f22fdp-114f, 0x1.c25ebap-102f, 0x1.3b4cfcp-25f, 0x1.4e04b6p-115f, 0.0f,
     0x1.1796bep-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d72fbcp-37f, 0x1.b78784p-61f,
     0x1.9bef46p-42f, 0.0f, 0.0f, 0x1.d31cd6p-124f, 0x1.72684ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.4e3edp-31f, 0.0f, 0.0f, 0.0f, 0x1.7b7844p-59f, 0.0f, 0x1.ae7346p-71f,
     0x1.5a583cp-77f, 0x1.415634p-120f, 0.0f, 0.0f, 0x1.a0b50cp-59f, 0x1.1b3866p-91f,
     0.0f, 0x1.3a4566p-9f, 0.0f, 0x1.37438p-30f, 0x1.197b1cp-112f, 0x1.089994p-29f,
     0x1.834444p-40f, 0.0f, 0.0f, 0x1.4b8352p-18f, 0.0f, 0x1.0605f6p-6f,
     0x1.1d5532p-105f, 0x1.1ffcc4p-35f, 0x1.177746p-70f, 0x1.3a5f2ep-124f, 0.0f,
     0x1.1ddfcep-24f, 0.0f, 0x1.9e205p-64f, 0.0f, 0x1.e7cd22p-50f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4bec1p-22f, 0x1.1edcd6p-98f, 0.0f, 0x1.78b19cp-72f, 0.0f,
     0x1.f7dbd6p-75f, 0x1.995eecp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_sinhf8_u35kvx(tmp0);
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
    printf("Sleef_sinhf8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sinhf8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
