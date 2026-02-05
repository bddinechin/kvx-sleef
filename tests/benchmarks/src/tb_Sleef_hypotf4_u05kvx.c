/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf4_u05kvx.c --function Sleef_hypotf4_u05kvx \
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
     0x1.e3883ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a5184p-46f, 0.0f, 0x1.93ff94p-43f,
     0.0f, 0x1.78b8b4p-36f, 0x1.7b054ep-114f, 0x1.e87a18p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1ba9dap-43f, 0x1.db3604p-56f, 0x1.4ffa22p-8f, 0x1.3846e4p-23f, 0.0f,
     0x1.92aaccp-110f, 0x1.811172p-14f, 0.0f, 0x1.ac3374p-70f, 0x1.511b0ap-29f,
     0x1.8292d8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ba318ap-23f, 0x1.9ef52cp-94f, 0x1.c79a48p-92f, 0x1.351b1p-118f,
     0x1.7eb4c6p-87f, 0x1.440346p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f48cp-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f4a5ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.82bd26p-125f, 0x1.ab82e4p-51f, 0.0f, 0x1.655bfcp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8603ecp-86f, 0x1.b6592ep-66f, 0x1.d18686p-14f, 0x1.7b684cp-120f, 0.0f,
     0x1.435218p-113f, 0.0f, 0x1.560f3p-14f, 0.0f, 0.0f, 0x1.4d909ep-109f,
     0x1.8d01aep-104f, 0.0f, 0x1.106724p-50f, 0.0f, 0.0f, 0x1.e92a36p-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8d3cc6p-81f, 0.0f, 0x1.242b7p-48f, 0x1.232fc4p-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cb0a8p-72f, 0.0f, 0.0f, 0x1.c8c9cp-101f, 0.0f,
     0x1.9b4ccep-4f, 0.0f, 0x1.46c016p-106f, 0.0f, 0x1.56579p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.34c84ep-86f, 0x1.6d7d7p-73f, 0.0f, 0x1.e90a42p-96f, 0.0f,
     0x1.8da2p-93f, 0x1.75c75ep-78f, 0x1.c3b3p-101f, 0.0f, 0x1.7802p-21f,
     0x1.a8c1f2p-52f, 0x1.9b2288p-89f, 0.0f, 0.0f, 0x1.7310e4p-125f, 0x1.cc8c6p-64f,
     0.0f, 0.0f, 0.0f, 0x1.5d83acp-97f, 0x1.f3521p-81f, 0.0f, 0.0f, 0x1.3a5deap-119f,
     0.0f, 0x1.31c9f4p-43f, 0.0f, 0.0f, 0x1.d2d508p-33f, 0.0f, 0.0f, 0x1.3975f8p-72f,
     0x1.785d9ep-84f, 0.0f, 0x1.b31d32p-33f, 0x1.7fb7d8p-39f, 0x1.808daep-47f,
     0x1.394f54p-112f, 0x1.7a5fbcp-22f, 0.0f, 0.0f, 0x1.42b34p-55f, 0x1.7ae43ep-57f,
     0x1p0f, 0x1.a1c4ccp-92f, 0x1.058fe8p-84f, 0.0f, 0x1.918478p-82f, 0x1.486dep-105f,
     0.0f, 0x1.a55cd2p-38f, 0x1.9f42fp-120f, 0x1.7ade0ep-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d9efcp-65f, 0.0f, 0.0f, 0x1.5b7a6ap-8f, 0x1.9905dcp-13f, 0.0f,
     0.0f, 0.0f, 0x1.fb70b2p-70f, 0.0f, 0x1.496d2cp-9f, 0.0f, 0.0f, 0x1.448b26p-45f,
     0x1.5a5b44p-71f, 0.0f, 0.0f, 0x1.1dab8cp-10f, 0.0f, 0x1.f8c9e8p-82f,
     0x1.814c82p-99f, 0.0f, 0.0f, 0x1.b9593ap-97f, 0x1.331bb8p-110f, 0x1.25be3ep-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34f3c8p-34f, 0.0f, 0.0f, 0x1.995d44p-29f,
     0x1.ac71ecp-7f, 0.0f, 0x1.eea47ep-47f, 0.0f, 0.0f, 0x1.58f6eep-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f0a766p-6f, 0x1.4ad6e4p-113f, 0x1.2e73b4p-37f,
     0x1.881654p-34f, 0x1.5f464cp-63f, 0.0f, 0.0f, 0x1.5d4ee2p-56f, 0x1.992692p-81f,
     0.0f, 0x1.a9a1d2p-63f, 0.0f, 0x1.2864a8p-44f, 0x1.787966p-35f, 0.0f,
     0x1.2a5b06p-101f, 0x1.abc90ap-28f, 0.0f, 0.0f, 0x1.8245b6p-117f, 0x1.429fa6p-97f,
     0.0f, 0x1.ebfc78p-89f, 0x1.cc4f9ap-37f, 0x1.8a20e2p-114f, 0.0f, 0.0f, 0.0f,
     0x1.4c76cp-73f, 0.0f, 0x1.f8dcfep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6e6602p-33f, 0.0f, 0x1.c87064p-38f, 0.0f, 0x1.8aa0bp-48f, 0x1.16d894p-99f,
     0.0f, 0x1.bc2d3cp-114f, 0.0f, 0.0f, 0.0f, 0x1.c60a0ep-4f, 0.0f, 0x1.06f828p-15f,
     0.0f, 0.0f, 0.0f, 0x1.60063cp-9f, 0.0f, 0.0f, 0.0f, 0x1.308e7ap-113f,
     0x1.0ab764p-75f, 0.0f, 0x1.979cdap-73f, 0x1.a71c2cp-98f, 0x1.56cea4p-42f, 0.0f,
     0x1.73d6c6p-1f, 0x1.2818c4p-51f, 0x1.6e4f28p-52f, 0.0f, 0.0f, 0.0f,
     0x1.f4bf2p-1f, 0.0f, 0.0f, 0x1.2cfe62p-12f, 0x1.46020cp-31f, 0.0f,
     0x1.637de4p-56f, 0x1.556692p-49f, 0x1.39e3d8p-10f, 0.0f, 0.0f, 0x1.1c53p-93f,
     0.0f, 0x1.3187eep-113f, 0x1.2cf45cp-108f, 0.0f, 0.0f, 0.0f, 0x1.9eee48p-58f,
     0.0f, 0x1.b9a92ep-4f, 0.0f, 0x1.960654p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0bca78p-94f, 0x1.596eb4p-126f, 0x1.5d15b6p-92f, 0.0f, 0x1.790caap-58f, 0.0f,
     0.0f, 0.0f, 0x1.f4f662p-86f, 0.0f, 0.0f, 0x1.135e78p-87f, 0x1.a76806p-64f,
     0x1.8b981p-5f, 0.0f, 0.0f, 0x1.353fe2p-105f, 0x1.249446p-27f, 0.0f, 0.0f,
     0x1.97ca5ep-93f, 0.0f, 0.0f, 0.0f, 0x1.9a8346p-37f, 0x1.44b3aep-41f,
     0x1.61ba7p-39f, 0.0f, 0x1.0dda26p-53f, 0.0f, 0.0f, 0x1.a4d73cp-8f,
     0x1.04d8f4p-42f, 0.0f, 0.0f, 0x1.dc01e8p-37f, 0.0f, 0x1.a8bd96p-10f,
     0x1.96d8bp-110f, 0.0f, 0x1.ec1f36p-50f, 0.0f, 0x1.cc2a04p-34f, 0.0f,
     0x1.a51764p-2f, 0.0f, 0x1.993c2p-34f, 0x1.1c283p-47f, 0x1.d42a54p-57f,
     0x1.44b5bep-65f, 0.0f, 0x1.b8ee9ep-94f, 0x1.ef2de2p-118f, 0x1.cf5862p-38f, 0.0f,
     0.0f, 0x1.8fdc4ap-117f, 0.0f, 0x1.377778p-60f, 0x1.3fb02cp-64f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a64cep-78f, 0x1.429504p-45f, 0x1.f37b22p-74f, 0.0f, 0x1.54bf5ep-59f,
     0.0f, 0x1.0b9c3p-17f, 0.0f, 0.0f, 0x1.2f970ep-91f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.7879e8p-56f, 0x1.b82894p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0cceap-126f,
     0x1.1f9f8cp-125f, 0x1.a01db4p-126f, 0x1.d5eabap-61f, 0.0f, 0x1.7d3c72p-17f, 0.0f,
     0x1.4f16ep-52f, 0x1.8cb292p-18f, 0x1.214e36p-76f, 0x1.eb7efep-38f, 0.0f, 0.0f,
     0.0f, 0x1.f94988p-68f, 0.0f, 0x1.6ca03p-37f, 0x1.ae7528p-26f, 0x1.cd8f16p-78f,
     0.0f, 0x1.afd2fp-48f, 0x1.5dd0e4p-114f, 0.0f, 0x1.fb7eep-74f, 0x1.d63ff6p-104f,
     0x1.64624ap-60f, 0x1.f0888ep-44f, 0x1.73a84ap-97f, 0.0f, 0.0f, 0x1.ce5cb2p-28f,
     0x1.7b31eap-77f, 0.0f, 0x1.d9c57p-70f, 0x1.7a0884p-84f, 0x1.15d43ap-71f, 0.0f,
     0x1.79696ep-95f, 0x1.a19b84p-96f, 0x1.4cb56cp-123f, 0x1.546522p-7f, 0.0f, 0.0f,
     0x1.16ba34p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3e846p-89f, 0x1.4fe99ep-68f,
     0x1.28ac2ep-33f, 0x1.82b3dap-18f, 0x1.efb468p-105f, 0.0f, 0x1.cbb4dp-28f,
     0x1.44bc8cp-35f, 0x1.550e16p-111f, 0.0f, 0x1.978ca4p-88f, 0.0f, 0.0f,
     0x1.c65c46p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88c9f2p-97f, 0.0f,
     0x1.3a9d9ep-105f, 0x1.eb3ccap-117f, 0.0f, 0x1.daf2cap-26f, 0x1.a142c8p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0882p-114f, 0.0f, 0x1.c0f0d6p-116f,
     0x1.24303cp-44f, 0.0f, 0x1.21d18p-108f, 0x1.3fb7e2p-21f, 0x1.f72292p-124f, 0.0f,
     0.0f, 0.0f, 0x1.043dc8p-60f, 0x1.e50572p-95f, 0x1.baa366p-125f, 0.0f, 0.0f,
     0x1.5403a6p-86f, 0x1.ae4c6ep-41f, 0x1.38626ep-41f, 0x1.356426p-73f,
     0x1.0c1c34p-103f, 0x1.e21ebp-1f, 0x1.6a69bp-77f, 0.0f, 0x1.e22d2ap-1f, 0.0f,
     0x1.e81542p-31f, 0x1.4ad49ep-98f, 0.0f, 0x1.253a18p-24f, 0.0f, 0x1.2a8064p-64f,
     0.0f, 0x1.d84d5ep-74f, 0x1.97fcfep-88f, 0x1.4082eap-112f, 0x1.b47f44p-32f,
     0x1.842502p-21f, 0.0f, 0x1.08ba68p-103f, 0.0f, 0x1.dd3238p-18f, 0.0f,
     0x1.bc2e88p-120f, 0x1.131ebap-116f, 0.0f, 0x1.6232bp-122f, 0x1.5444a8p-36f,
     0x1.fd70e6p-63f, 0x1.5accd4p-18f, 0x1.58f7fp-91f, 0x1.ff9736p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d8f26cp-109f, 0.0f, 0.0f, 0.0f, 0x1.b55f9p-53f, 0.0f, 0.0f,
     0.0f, 0x1.68bc7p-26f, 0x1.8ba7eap-62f, 0.0f, 0x1.a468e8p-76f, 0.0f, 0.0f, 0.0f,
     0x1.f3a734p-1f, 0x1.2f22b8p-102f, 0.0f, 0x1.0babeep-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3d14p-94f, 0x1.153a56p-30f, 0x1.2db8c6p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afbd24p-2f, 0.0f, 0x1.f98dbp-120f, 0x1.57e418p-44f, 0.0f, 0x1.3c1c14p-54f,
     0x1.cf2c56p-43f, 0.0f, 0x1.5210e8p-49f, 0x1.de34bap-31f, 0.0f, 0x1.594e32p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e82c24p-55f, 0x1.58fb9cp-10f, 0.0f, 0x1p0f,
     0.0f, 0x1.7ab528p-27f, 0.0f, 0x1.eb5206p-79f, 0x1.ccaa98p-14f, 0x1.90327ep-16f,
     0x1.4f6bc4p-105f, 0.0f, 0x1.94195ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db838ep-16f,
     0.0f, 0x1.ccdb3ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e4388p-26f, 0.0f,
     0x1.c042f6p-43f, 0x1.9d2f0cp-4f, 0x1.05a738p-12f, 0.0f, 0x1.2aeffep-44f, 0.0f,
     0x1.9dd75p-35f, 0.0f, 0x1.4051ecp-124f, 0x1.abdcdp-123f, 0x1.acc29ap-96f,
     0x1.158c3cp-38f, 0x1.5145a8p-55f, 0x1.a17da6p-94f, 0x1.3cfdfp-76f, 0.0f,
     0x1.8fe8fap-6f, 0x1.f558f6p-110f, 0x1.18cda2p-7f, 0x1.e3c98cp-92f, 0.0f,
     0x1.5fbbfp-63f, 0x1.9b6ec6p-40f, 0x1.03a6cep-22f, 0x1.37506cp-68f,
     0x1.f005a8p-73f, 0.0f, 0.0f, 0x1.608a66p-18f, 0.0f, 0x1.e80b7p-102f, 0.0f,
     0x1.58385ap-99f, 0x1.366a06p-56f, 0.0f, 0.0f, 0x1.d81c82p-51f, 0x1.b4735p-89f,
     0x1.1256b2p-18f, 0.0f, 0.0f, 0.0f, 0x1.e51256p-12f, 0x1.144edap-70f, 0.0f,
     0x1.a291aap-101f, 0x1.b5f47cp-125f, 0.0f, 0.0f, 0.0f, 0x1.735e0ep-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d12d4p-106f, 0x1.5d20dp-126f, 0.0f, 0x1.7e2c8ap-79f,
     0x1.22ac9cp-47f, 0x1.18ce4p-105f, 0x1.0a47dep-62f, 0.0f, 0x1.945a44p-50f,
     0x1.d3d4a4p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d477fp-44f, 0x1.306b8ap-83f, 0.0f,
     0.0f, 0.0f, 0x1.9e0cf6p-22f, 0x1.355f54p-26f, 0x1.2223e8p-34f, 0x1.3f1da8p-12f,
     0x1.2b919ep-52f, 0x1.53733ep-124f, 0.0f, 0x1.70023ap-26f, 0x1.3357eap-40f, 0.0f,
     0x1.a9c784p-39f, 0x1.09c36ap-122f, 0.0f, 0.0f, 0x1.d9b17ap-117f, 0.0f,
     0x1.e6c96ep-23f, 0.0f, 0x1.8f63ccp-37f, 0.0f, 0.0f, 0x1.4df698p-108f, 0.0f, 0.0f,
     0.0f, 0x1.58e82ep-83f, 0.0f, 0x1.181a48p-87f, 0x1.be4954p-69f, 0.0f, 0.0f,
     0x1.941342p-50f, 0x1.1bb168p-51f, 0x1.937a38p-91f, 0x1.08f57ap-19f, 0.0f,
     0x1.ee0dc8p-111f, 0.0f, 0.0f, 0.0f, 0x1.869ae2p-20f, 0.0f, 0x1.978c9ep-88f, 0.0f,
     0x1.e8848p-118f, 0x1.a88778p-45f, 0.0f, 0x1.7df4f6p-3f, 0.0f, 0x1.f772a2p-41f,
     0.0f, 0.0f, 0x1.61da6cp-15f, 0.0f, 0.0f, 0x1.2ac9bap-77f, 0x1.afe4d6p-20f,
     0x1.719326p-34f, 0x1.59aa5cp-90f, 0.0f, 0.0f, 0x1.82e562p-121f, 0x1.be6836p-69f,
     0.0f, 0.0f, 0.0f, 0x1.81f8e6p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b795ep-102f,
     0x1.a4fe9cp-53f, 0x1.d6d56ap-26f, 0x1.db1dfap-98f, 0.0f, 0x1.553b0ap-3f, 0.0f,
     0.0f, 0x1.d2519ap-44f, 0.0f, 0x1.55c02cp-71f, 0.0f, 0.0f, 0.0f, 0x1.1a5446p-25f,
     0x1.c5c908p-33f, 0.0f, 0.0f, 0x1.ee7206p-109f, 0.0f, 0.0f, 0x1.c963a8p-49f,
     0x1.a1a246p-43f, 0.0f, 0x1.d26548p-88f, 0x1.67f58ep-84f, 0x1.930e44p-51f, 0.0f,
     0x1.6f652cp-40f, 0x1.dd70cp-125f, 0x1.1fd966p-1f, 0.0f, 0.0f, 0x1.63fd04p-87f,
     0x1.d27988p-24f, 0.0f, 0x1.bb116cp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf7502p-115f,
     0.0f, 0.0f, 0x1.717436p-97f, 0x1.8b6e16p-86f, 0x1.cbd092p-123f, 0.0f,
     0x1.54cbbap-87f, 0x1.be276p-41f, 0x1.cfa6p-90f, 0x1.9f978ap-13f, 0x1.26afaap-45f,
     0x1.619884p-15f, 0.0f, 0x1.7473dep-5f, 0x1.e5746ep-9f, 0.0f, 0x1.276d32p-109f,
     0x1.e7148cp-57f, 0x1.4dbc78p-83f, 0x1.7ae61ep-58f, 0.0f, 0.0f, 0x1.f6eb5p-5f,
     0x1p0f, 0.0f, 0.0f, 0x1.c7a73p-6f, 0.0f, 0.0f, 0x1.3f97c4p-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d31aa4p-82f, 0.0f, 0.0f, 0.0f, 0x1.f8496ap-1f, 0.0f, 0.0f,
     0x1.96d0a8p-120f, 0x1.0ad0ccp-27f, 0.0f, 0x1.bac57ap-66f, 0.0f, 0x1.9bd728p-34f,
     0.0f, 0x1.ee6caap-17f, 0.0f, 0x1.640c2p-78f, 0x1.04e6bap-80f, 0x1.5191a2p-45f,
     0.0f, 0x1.378d82p-80f, 0.0f, 0x1.a3aaep-43f, 0.0f, 0.0f, 0x1.aa2efcp-94f,
     0x1.7cc1fcp-25f, 0x1.a833a8p-15f, 0.0f, 0x1.9d3c74p-65f, 0.0f, 0x1.a215bcp-106f,
     0x1.7ef66ap-93f, 0x1.8d14c6p-125f, 0.0f, 0x1.a7ce7p-72f, 0x1.671fbap-107f, 0.0f,
     0x1.d7dc54p-99f, 0x1.3642acp-27f, 0x1.4ddf5ap-47f, 0x1.b4fdbep-51f,
     0x1.a557aep-54f, 0.0f, 0x1.bca9f6p-94f, 0.0f, 0x1.0115d2p-125f, 0.0f,
     0x1.e2f87p-120f, 0x1.f04b8ep-12f, 0x1.111cfap-72f, 0.0f, 0.0f, 0.0f,
     0x1.901986p-19f, 0x1.d9f5b8p-2f, 0x1.2f87ccp-111f, 0x1.2f42dcp-42f, 0.0f,
     0x1.ace9bp-117f, 0x1.96f94p-103f, 0.0f, 0.0f, 0x1.65dbcp-44f, 0.0f, 0.0f, 0.0f,
     0x1.ef4244p-8f, 0.0f, 0.0f, 0.0f, 0x1.0b3beep-98f, 0x1.0bb9a4p-12f, 0.0f,
     0x1.8f6d5ap-107f, 0.0f, 0x1.73d4acp-48f, 0x1.21ac08p-106f, 0.0f, 0x1.a83c7p-96f,
     0.0f, 0x1.d1acd4p-2f, 0.0f, 0x1.7bb31ap-3f, 0x1.82fbfep-101f, 0x1.3321e4p-117f,
     0x1.eb3a54p-36f, 0.0f, 0x1.63138ap-11f, 0x1.eead62p-50f, 0x1.f3a198p-69f,
     0x1.bc29fcp-95f, 0x1.55266cp-80f, 0x1.01fca8p-84f, 0x1.87debep-97f, 0.0f, 0.0f,
     0.0f, 0x1.f72cf4p-119f, 0x1.c1d87cp-72f, 0.0f, 0x1.4cb4a2p-44f, 0x1.4df15cp-50f,
     0.0f, 0x1.5842dap-86f, 0.0f, 0x1.c11bfp-10f, 0.0f, 0x1.b0a6cp-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1ad68cp-122f, 0.0f, 0x1.535f1ep-76f, 0.0f, 0x1.0adf16p-61f,
     0x1.3a3acap-110f, 0x1.2f5a34p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2e6f2p-8f,
     0x1.d461e4p-116f, 0x1.7baf5p-60f, 0x1.6a3e28p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27720ep-111f, 0.0f, 0x1.eaa34ep-5f, 0.0f, 0x1.519d6cp-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.12af1p-25f, 0.0f, 0.0f, 0.0f, 0x1.2260d8p-73f, 0.0f,
     0x1.43476ap-56f, 0x1.f3171ep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3289p-47f,
     0.0f, 0x1.5f6b48p-43f, 0x1p0f, 0x1.eaf7f2p-102f, 0x1.08c5f2p-66f,
     0x1.2f75d4p-107f, 0.0f, 0.0f, 0x1.fb6cc8p-80f, 0x1.eafb4ep-107f, 0x1.07f54p-74f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.03323cp-83f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.25b438p-124f, 0.0f, 0.0f,
     0.0f, 0x1.6ad316p-23f, 0.0f, 0x1.6d752cp-70f, 0x1.315b94p-56f, 0x1.afb6d4p-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c138ep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b2838p-125f, 0.0f, 0.0f, 0.0f, 0x1.6f8c2ap-64f, 0.0f, 0x1.8f4a7p-47f,
     0x1.4a8e1ap-18f, 0.0f, 0.0f, 0x1.bc625ap-55f, 0x1.f05d66p-60f, 0x1.d70be8p-111f,
     0x1.d30dacp-22f, 0.0f, 0x1.56e1f4p-19f, 0.0f, 0.0f, 0x1.a7666ap-115f,
     0x1.ce88fep-57f, 0.0f, 0x1p0f, 0x1.e01584p-54f, 0x1.742094p-112f,
     0x1.978d92p-82f, 0.0f, 0x1.be644ep-76f, 0.0f, 0x1.7d37d4p-79f, 0.0f, 0.0f, 0.0f,
     0x1.78a19ap-100f, 0x1.a05736p-72f, 0.0f, 0x1.6bdf16p-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1942dap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6618bcp-36f, 0.0f, 0.0f,
     0x1.32e31ap-51f, 0x1.4c7c44p-72f, 0x1.08b0b2p-32f, 0.0f, 0x1.31988p-10f, 0.0f,
     0x1.160c5ep-75f, 0x1.29d1ep-13f, 0x1.481e4ap-18f, 0x1.9c0af8p-117f,
     0x1.f25388p-52f, 0x1.c6e014p-78f, 0x1.fac88ep-117f, 0x1.d0704ep-56f,
     0x1.e41fdep-37f, 0x1.d98aeep-46f, 0.0f, 0.0f, 0x1.dc274ap-117f, 0x1.8b2ffep-108f,
     0x1.6a24fcp-35f, 0.0f, 0.0f, 0x1.050036p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dff64ep-35f, 0x1.35ccc6p-3f, 0x1.4457dep-99f, 0.0f, 0.0f, 0x1.9a4978p-120f,
     0.0f, 0x1.cf560ap-104f, 0x1.415cbep-67f, 0.0f, 0x1.01f952p-41f, 0.0f, 0.0f,
     0x1.5bdbb6p-86f, 0x1.3730dap-74f, 0x1.8e5cp-120f, 0x1.2e61d4p-75f,
     0x1.616b9ap-61f, 0.0f, 0x1.6c308cp-36f, 0.0f, 0x1.1b9356p-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4952e4p-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eccf76p-126f, 0.0f, 0x1.97329ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.ce598cp-13f, 0x1.6fa9a2p-64f, 0x1.9a7bbcp-112f, 0.0f, 0.0f, 0x1.6b8cd4p-118f,
     0x1.a7588p-60f, 0x1.03241ep-49f, 0.0f, 0.0f, 0x1.644a84p-84f, 0.0f,
     0x1.dfdc7ap-89f, 0x1.69f1cep-71f, 0.0f, 0.0f, 0x1.0280c8p-18f, 0x1.413bc8p-80f,
     0x1.f1916cp-126f, 0x1.5b7a5ap-76f, 0.0f, 0x1.f5f71ap-42f, 0.0f, 0.0f,
     0x1.117298p-28f, 0x1.792fc6p-96f, 0x1.b2db2ep-124f, 0x1.f27f1ep-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.39d408p-6f, 0.0f, 0x1.5bb824p-71f, 0.0f,
     0x1.9a2b1cp-44f, 0.0f, 0x1.b57616p-3f, 0x1.82615cp-66f, 0x1.9fe54ap-24f,
     0x1.c7f6f6p-123f, 0.0f, 0x1.bb91d4p-94f, 0x1.02217cp-31f, 0.0f, 0x1.9dea92p-86f,
     0.0f, 0.0f, 0x1.9a42bp-43f, 0.0f, 0.0f, 0x1.252bdep-94f, 0.0f, 0.0f, 0.0f,
     0x1.66766ap-90f, 0x1.556a9p-35f, 0.0f, 0x1.44e77ep-22f, 0.0f, 0x1.67a3bp-35f,
     0x1.a9daf2p-30f, 0.0f, 0x1.a02752p-6f, 0.0f, 0.0f, 0x1.48e0b6p-71f,
     0x1.3cb272p-115f, 0x1.00ab52p-51f, 0.0f, 0.0f, 0x1.30fda2p-32f, 0.0f, 0.0f,
     0x1.4f0a86p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c503cp-112f, 0x1.0ea04ep-79f, 0.0f,
     0x1.1f4fcap-91f, 0x1.3bebb4p-82f, 0x1.380996p-65f, 0x1.facce4p-61f,
     0x1.5b192cp-107f, 0.0f, 0x1.7d18ccp-17f, 0x1.3b63ep-72f, 0.0f, 0x1.c10c24p-53f,
     0.0f, 0x1.5ae5dcp-43f, 0.0f, 0x1.7bbb24p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.064cc2p-81f, 0.0f, 0x1.4014eep-26f, 0.0f, 0.0f, 0x1.79de54p-59f,
     0x1.14f5f8p-117f, 0.0f, 0.0f, 0x1.0d2836p-26f, 0.0f, 0.0f, 0x1.7811f8p-102f,
     0.0f, 0x1.e04caep-24f, 0.0f, 0x1.77e812p-110f, 0.0f, 0.0f, 0x1.784bb2p-105f,
     0.0f, 0x1.0f259cp-49f, 0x1.f09192p-125f, 0x1.fd517ap-73f, 0x1.2c1318p-18f,
     0x1.dabaa4p-117f, 0x1.8cc248p-23f, 0x1.a03086p-88f, 0x1.a70408p-26f,
     0x1.296a8p-28f, 0.0f, 0.0f, 0x1.64bb3p-94f, 0.0f, 0.0f, 0.0f, 0x1.fd566p-30f,
     0.0f, 0x1.01a40ep-1f, 0.0f, 0.0f, 0x1.ddd86p-46f, 0x1.0acbfap-25f, 0.0f,
     0x1.140f24p-47f, 0x1.c9f108p-103f, 0.0f, 0x1.9a5e3p-38f, 0.0f, 0x1.85abb8p-44f,
     0x1.4b5da6p-102f, 0x1.83ee2ep-68f, 0x1.2c5204p-91f, 0.0f, 0.0f, 0x1.3236p-9f,
     0x1.ab41cp-67f, 0.0f, 0x1.890038p-123f, 0x1.187a94p-71f, 0x1.1190b8p-38f, 0.0f,
     0x1.e78fe2p-45f, 0.0f, 0.0f, 0x1.1cf6ap-92f, 0x1.5872a8p-122f, 0x1.d2db8ap-73f,
     0x1.1253fap-107f, 0x1.02b5eep-95f, 0x1.23f688p-124f, 0x1.db7dp-62f,
     0x1.ee882p-92f, 0.0f, 0x1.aea7p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4af14ap-35f,
     0x1.490b6ap-75f, 0.0f, 0.0f, 0x1.4e13c8p-42f, 0x1.8d3efp-70f, 0x1.5fae3cp-7f,
     0.0f, 0.0f, 0x1.3a713p-103f, 0.0f, 0x1.2ba10ep-126f, 0x1.81aa08p-97f,
     0x1.73404cp-78f, 0.0f, 0x1.3f2964p-49f, 0x1.16f6bcp-13f, 0x1.97a1acp-81f,
     0x1.194a14p-36f, 0x1.688ddcp-103f, 0.0f, 0x1.672ffep-119f, 0x1.db39c2p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8719p-61f, 0x1.f745d8p-24f, 0x1.b73f96p-122f,
     0x1.b71d72p-124f, 0.0f, 0.0f, 0.0f, 0x1.5b685cp-76f, 0x1.cda0fcp-97f,
     0x1.de9b8ap-101f, 0.0f, 0.0f, 0x1.83162ap-119f, 0x1.db6d66p-93f, 0.0f, 0.0f,
     0x1.4dcde8p-86f, 0.0f, 0.0f, 0x1.9d29e2p-1f, 0x1.f92c92p-115f, 0x1.cef06cp-92f,
     0.0f, 0x1.170672p-48f, 0x1.177e34p-78f, 0x1.10cb1ep-15f, 0.0f, 0x1.d4f2b4p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ea60ap-78f, 0x1.15d14ap-49f, 0x1.6d22e8p-94f,
     0x1.c0336ap-27f, 0.0f, 0x1.56e712p-123f, 0x1.da0138p-67f, 0x1.778e6cp-46f,
     0x1.40af0ap-53f, 0x1.f25afep-39f, 0x1.81fa9p-97f, 0.0f, 0x1.4ff4dap-95f,
     0x1.a9d68ep-11f, 0.0f, 0x1.c5c55ep-90f, 0.0f, 0x1.5acd78p-67f, 0.0f,
     0x1.ca647ep-81f, 0x1.83b45cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c958p-21f,
     0.0f, 0.0f, 0x1.ceeeecp-109f, 0x1.1baa8ap-42f, 0x1.74da0ep-90f, 0x1.237764p-124f,
     0x1.ee772p-3f, 0.0f, 0x1.2e94d6p-27f, 0x1.4429dap-102f, 0x1.455426p-74f,
     0x1.6acb04p-112f, 0x1.af187p-52f, 0.0f, 0x1.00cd8ap-75f, 0x1.431ac6p-35f,
     0x1.c4059p-73f, 0x1.abec44p-52f, 0.0f, 0.0f, 0.0f, 0x1.bb21cp-101f, 0.0f, 0.0f,
     0x1.3843acp-26f, 0.0f, 0x1.a56ff6p-43f, 0.0f, 0x1.262cdcp-27f, 0x1.9c4d02p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d3106p-48f, 0x1.69fffp-101f,
     0.0f, 0x1.b2953ap-71f, 0x1.180f3p-29f, 0.0f, 0x1.4cec08p-75f, 0x1.ba8dp-108f,
     0.0f, 0x1.bfa20cp-104f, 0x1.6bbdf8p-39f, 0x1.042faap-45f, 0x1.ba9d52p-124f, 0.0f,
     0x1.947d0ep-19f, 0x1.609f72p-89f, 0x1.0ea4f8p-8f, 0.0f, 0x1.25073ap-120f, 0.0f,
     0x1.d4e10ap-105f, 0x1.ab23p-25f, 0.0f, 0.0f, 0x1.e078aep-80f, 0.0f, 0.0f, 0.0f,
     0x1.6dab7ep-74f, 0x1.8d4564p-2f, 0x1.75a28ap-96f, 0x1.5ee3b4p-32f, 0.0f,
     0x1.b3e652p-68f, 0.0f, 0.0f, 0x1.ed098ap-114f, 0x1.a9d314p-104f, 0.0f,
     0x1.1ef5p-113f, 0x1.5fa79ap-34f, 0x1.b59254p-51f, 0.0f, 0.0f, 0.0f,
     0x1.4d4934p-71f, 0x1.ea8b6p-110f, 0x1.d9d24ap-82f, 0.0f, 0x1.6f54a6p-34f,
     0x1.108d3cp-66f, 0.0f, 0.0f, 0x1.ff94c6p-122f, 0.0f, 0x1.d5d5c4p-76f,
     0x1.b7fc06p-124f, 0x1.4d1dfep-90f, 0.0f, 0x1.02e6c6p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a869ep-67f, 0x1.9c73e6p-107f, 0.0f, 0x1.e8a8bep-53f, 0x1.2bdadap-38f,
     0x1.905f56p-27f, 0.0f, 0.0f, 0.0f, 0x1.95e6bep-68f, 0.0f, 0x1.3c39fap-48f, 0.0f,
     0.0f, 0x1.4d2c8ap-17f, 0.0f, 0x1.149ad8p-20f, 0.0f, 0x1.ca2a02p-69f,
     0x1.e0894ep-125f, 0x1.5e233cp-52f, 0.0f, 0.0f, 0.0f, 0x1.d3bc4ep-62f, 0.0f, 0.0f,
     0.0f, 0x1.1c29a2p-29f, 0x1.bc43a2p-64f, 0x1.d8b3f2p-98f, 0.0f, 0x1.cddda2p-83f,
     0.0f, 0x1.10a038p-85f, 0x1.a207bp-30f, 0x1.41ee42p-48f, 0.0f, 0x1.f84b76p-43f,
     0x1.ee78ep-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b65f6p-38f, 0x1.caa9c4p-58f,
     0.0f, 0x1.df8b88p-75f, 0.0f, 0x1.5273cep-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e13fb8p-80f, 0x1.833faap-21f, 0x1.57390ep-68f, 0x1.37ac04p-50f,
     0x1.b647aep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.670bd8p-19f, 0x1.aaf00cp-37f, 0.0f,
     0.0f, 0x1.46381cp-13f, 0x1.170d78p-79f, 0x1.a2477cp-126f, 0x1.f9ae5cp-20f,
     0x1.440e0cp-12f, 0x1.664f0ep-76f, 0x1.3c99bep-112f, 0.0f, 0x1.8718dap-65f,
     0x1.7b7a88p-21f, 0x1.22d9fep-3f, 0x1.97cc44p-18f, 0.0f, 0x1.516ac6p-6f,
     0x1.73ad2cp-63f, 0x1.995c56p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5b1b4p-12f,
     0x1.bdd416p-27f, 0.0f, 0.0f, 0x1.3970f6p-24f, 0x1.6d9fa8p-36f, 0.0f,
     0x1.6552fcp-58f, 0.0f, 0.0f, 0x1.61dc5ap-33f, 0x1.5ea0b4p-30f, 0x1.cae722p-108f,
     0x1.2d3a72p-54f, 0.0f, 0x1.889f8cp-16f, 0x1.24534ep-116f, 0.0f, 0.0f,
     0x1.4ca8d8p-79f, 0x1.d64ea6p-107f, 0x1.4db0d8p-2f, 0x1.8a23ap-48f, 0.0f, 0.0f,
     0x1.020af4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.217216p-46f, 0.0f, 0x1.9d76c4p-98f,
     0x1.153b2ep-82f, 0x1.7478fap-114f, 0x1.890b8cp-64f, 0x1.799c38p-112f, 0.0f, 0.0f,
     0x1.d5fdb2p-87f, 0.0f, 0.0f, 0x1.8d6deep-55f, 0.0f, 0x1.dd42d6p-98f,
     0x1.16d3bap-15f, 0x1.b1e312p-14f, 0x1.96811p-20f, 0.0f, 0.0f, 0x1.6a9d1ep-55f,
     0.0f, 0x1.fa869cp-119f, 0x1.c17312p-31f, 0.0f, 0.0f, 0.0f, 0x1.850368p-107f,
     0.0f, 0.0f, 0x1.f29924p-76f, 0.0f, 0.0f, 0x1.abafeep-64f, 0x1.a4a15p-98f,
     0x1.587e12p-65f, 0x1.58e8cap-4f, 0.0f, 0x1.4ed6aep-67f, 0.0f, 0x1.f1142cp-67f,
     0.0f, 0.0f, 0x1.39b1cep-73f, 0x1.dfdc72p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dc687cp-109f, 0x1.b07fp-92f, 0.0f, 0x1.10e04cp-44f, 0.0f, 0x1.419f44p-3f,
     0x1.5364bp-70f, 0x1.ce6bbap-86f, 0x1.f17142p-74f, 0x1.6e84bap-114f, 0.0f, 0.0f,
     0x1.f9172ap-73f, 0.0f, 0.0f, 0x1.3028fcp-17f, 0x1.fec8a8p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4eae7ap-88f, 0x1.e36812p-31f, 0x1.d9fb52p-80f, 0.0f, 0.0f, 0.0f,
     0x1.249acap-49f, 0x1.a55ea2p-20f, 0x1.b0b6a6p-110f, 0x1.7a77e6p-34f, 0.0f,
     0x1.811468p-116f, 0.0f, 0.0f, 0x1.9a979ap-3f, 0x1.2c1898p-71f, 0.0f, 0.0f,
     0x1.3fed4ap-41f, 0x1.816deap-59f, 0.0f, 0.0f, 0.0f, 0x1.bc1e56p-41f,
     0x1.effeacp-42f, 0x1.7c0d8ap-109f, 0x1.e4cc2cp-91f, 0x1.658982p-11f, 0.0f,
     0x1.d56238p-39f, 0.0f, 0x1.b5a844p-11f, 0x1.af5f8p-12f, 0.0f, 0x1.70160ep-123f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30923p-48f, 0.0f, 0x1.317ebap-94f,
     0x1.a9fae2p-39f, 0x1.421e38p-19f, 0x1.ec308ap-40f, 0.0f, 0x1.5a096cp-35f,
     0x1.76d688p-105f, 0.0f, 0x1.c01174p-53f, 0x1.30016ap-39f, 0.0f, 0x1.589e3ap-93f,
     0.0f, 0.0f, 0.0f, 0x1.92f5b2p-51f, 0x1.c06f8cp-3f, 0x1.46151cp-39f,
     0x1.bd990cp-79f, 0.0f, 0x1.923856p-87f, 0.0f, 0x1.611488p-25f, 0x1.f28e84p-42f,
     0.0f, 0x1.355fc2p-47f, 0x1.b48bcep-23f, 0.0f, 0x1.17899ep-59f, 0x1.4337cp-115f,
     0.0f, 0.0f, 0x1.5d9ddcp-6f, 0x1.ce42eep-22f, 0.0f, 0.0f, 0x1.078792p-124f,
     0x1.fd1516p-125f, 0.0f, 0x1.dc6006p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c6fdb4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0caa7ep-16f, 0x1.367c52p-118f,
     0x1.261466p-102f, 0x1.c0609ep-83f, 0.0f, 0.0f, 0x1.6bd4aap-49f, 0x1.75b96ap-43f,
     0x1.8c824p-117f, 0.0f, 0x1.a5be22p-33f, 0.0f, 0x1.62d01cp-69f, 0.0f,
     0x1.6c06fap-117f, 0.0f, 0.0f, 0x1.e98b18p-58f, 0.0f, 0.0f, 0x1.02e006p-25f,
     0x1.8b5af2p-115f, 0x1.cea1eep-114f, 0.0f, 0.0f, 0x1.2887ep-21f, 0x1.28f9fcp-12f,
     0.0f, 0.0f, 0x1.b2b98p-56f, 0x1.505b32p-96f, 0x1.c58582p-77f, 0x1.76bca2p-71f,
     0x1.534864p-117f, 0x1.127c72p-121f, 0x1.d110d2p-82f, 0x1.3bbf92p-103f,
     0x1.accccp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61b652p-19f,
     0x1.fd5d2cp-57f, 0x1.86d07ap-3f, 0.0f, 0x1.06a5b6p-69f, 0x1.07f3eep-46f,
     0x1.181c66p-113f, 0x1.34484cp-16f, 0x1.4be05ap-48f, 0x1.c65e84p-79f, 0.0f,
     0x1.000716p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8570e2p-2f,
     0x1.e29fe4p-109f, 0.0f, 0x1.07c6cap-2f, 0.0f, 0.0f, 0.0f, 0x1.1e8a86p-69f, 0.0f,
     0.0f, 0x1.19579ap-70f, 0.0f, 0x1.4557dp-9f, 0.0f, 0x1.22b2b4p-51f, 0.0f, 0.0f,
     0x1.93f978p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88287p-21f, 0.0f, 0.0f,
     0x1.dec866p-109f, 0.0f, 0.0f, 0.0f, 0x1.9baa56p-34f, 0x1.a5de62p-92f,
     0x1.d50c92p-45f, 0x1.19c53ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9efcd6p-115f,
     0x1.365cc8p-31f, 0x1.a3c1c6p-20f, 0x1.41f7f2p-91f, 0.0f, 0.0f, 0.0f,
     0x1.eda998p-65f, 0x1.3dac7ep-29f, 0.0f, 0x1.d7c8e8p-105f, 0x1.cb781ep-16f, 0.0f,
     0.0f, 0x1.ad19eep-3f, 0x1.b7cb6p-50f, 0x1.bb4bfep-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e0e9p-2f, 0x1.bf2b9ap-98f, 0x1.b676b2p-66f, 0x1.b48804p-54f,
     0x1.4adafep-58f, 0x1.b42e14p-28f, 0x1.9789bcp-97f, 0x1.ac02ccp-56f, 0.0f,
     0x1.cd549ep-49f, 0x1.c10de2p-118f, 0x1.5c0166p-97f, 0.0f, 0x1.684624p-5f,
     0x1.3a920ep-82f, 0x1.cbafe2p-120f, 0.0f, 0x1.a3ae2ap-76f, 0.0f, 0x1.de3b62p-75f,
     0x1.f5ea2ap-63f, 0.0f, 0x1.072e9ap-82f, 0x1.e00798p-5f, 0x1.bfd5a6p-24f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dad76p-117f,
     0x1.46cbfap-23f, 0x1.24f04ep-78f, 0.0f, 0.0f, 0x1.138924p-115f, 0x1.19097ap-43f,
     0.0f, 0x1.68fe38p-87f, 0.0f, 0x1.b0c172p-99f, 0x1.ba7e68p-72f, 0x1.7e9e42p-105f,
     0.0f, 0x1.87da12p-84f, 0.0f, 0x1.f29deep-61f, 0.0f, 0x1.1ec5c2p-110f, 0.0f,
     0x1.ff07dp-3f, 0x1.dc7a22p-32f, 0x1.783632p-93f, 0.0f, 0x1.34ee72p-100f,
     0x1.a7b98p-15f, 0.0f, 0x1.35788cp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5efaa6p-53f, 0.0f, 0.0f, 0x1.b3edeap-83f, 0.0f
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
            tmp2 = Sleef_hypotf4_u05kvx(tmp0, tmp1);
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
    printf("Sleef_hypotf4_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_hypotf4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
