/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_sinf.c --function sinf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.b22cb6p-90f, 0x1.1aadc6p-16f, 0.0f, 0x1.dbd124p-17f, 0.0f, 0x1.a597ap-109f,
     0.0f, 0x1.ea3486p-71f, 0.0f, 0.0f, 0x1.17d586p-50f, 0x1.9ee6acp-39f, 0.0f,
     0x1.56c6fp-91f, 0.0f, 0.0f, 0.0f, 0x1.945b76p-27f, 0x1.2d1938p-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c445ap-115f, 0x1.d810bep-82f, 0x1.845592p-13f, 0.0f,
     0x1.d3c8d8p-24f, 0.0f, 0x1.097bfep-73f, 0.0f, 0.0f, 0x1.21cd52p-65f, 0.0f,
     0x1.3fb6d2p-94f, 0.0f, 0x1.ee9bcep-88f, 0x1.55c4d6p-92f, 0x1.dfb6dep-48f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c6ea6ep-43f, 0.0f, 0x1.1ef99ap-90f, 0x1.e5dd38p-45f,
     0x1.c4475ep-74f, 0x1.9ef93ap-74f, 0x1.2b4c18p-90f, 0.0f, 0x1.0826d6p-118f, 0.0f,
     0x1.8be0b8p-76f, 0.0f, 0x1.5961eap-34f, 0.0f, 0x1.b0e09p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d60e6p-107f, 0.0f, 0x1.57713ep-117f, 0x1p0f, 0x1.e2cf22p-40f,
     0x1.ea80a2p-91f, 0.0f, 0x1.ef9d94p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1699a4p-57f, 0.0f, 0.0f, 0.0f, 0x1.4c81d8p-50f, 0.0f, 0.0f, 0x1.cbc6c4p-44f,
     0x1.bbe07ep-40f, 0x1.9888cp-120f, 0.0f, 0x1.a086cep-90f, 0.0f, 0x1.6224acp-107f,
     0.0f, 0.0f, 0.0f, 0x1.cc14a6p-54f, 0x1.2579f8p-74f, 0.0f, 0x1.d2784p-51f,
     0x1.2032ap-104f, 0x1.34bbdcp-56f, 0x1.8c8f14p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4b88cp-80f, 0.0f, 0.0f, 0x1.e0552ap-121f, 0x1.e4e42cp-105f,
     0x1.840c42p-39f, 0x1.b4d0ecp-57f, 0.0f, 0x1.a02a4p-64f, 0x1.af1442p-38f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.828004p-98f, 0x1.efb5dcp-116f, 0.0f, 0.0f, 0.0f,
     0x1.3f7486p-19f, 0x1.eaf6f4p-28f, 0.0f, 0x1.92594ep-113f, 0.0f, 0x1.3fc0cap-27f,
     0.0f, 0.0f, 0x1.29b7fcp-10f, 0.0f, 0x1.def214p-4f, 0.0f, 0x1.22ea68p-30f, 0.0f,
     0.0f, 0x1.40e454p-119f, 0.0f, 0x1.0f864cp-89f, 0.0f, 0x1.7690b8p-93f,
     0x1.80b8bcp-16f, 0.0f, 0x1.018bb8p-88f, 0x1.5aa15ap-59f, 0.0f, 0.0f,
     0x1.47e58p-4f, 0x1.0c1a36p-26f, 0x1.d65ad8p-47f, 0x1.b29e66p-9f, 0.0f,
     0x1.c7516cp-56f, 0x1.8219e8p-103f, 0x1.8d3ea2p-14f, 0.0f, 0x1.15d5f6p-38f, 0.0f,
     0x1.d607bap-39f, 0.0f, 0.0f, 0x1.2a6772p-109f, 0.0f, 0x1.eb39b2p-20f,
     0x1.38b69ep-67f, 0x1.593bfap-48f, 0x1.d1feb6p-91f, 0x1.eb8976p-54f, 0.0f,
     0x1.f61c28p-30f, 0x1.b84bd2p-53f, 0.0f, 0.0f, 0x1.25d55ap-83f, 0x1.9bf59ap-89f,
     0x1.8ff7f6p-54f, 0.0f, 0x1.387edp-12f, 0x1.f8378ep-36f, 0x1.6cbee8p-42f,
     0x1.1d2e3ap-118f, 0.0f, 0x1.b3faeep-4f, 0x1.6a3eccp-39f, 0x1.cb962ep-107f, 0.0f,
     0x1.7b66aap-104f, 0.0f, 0x1.c37284p-83f, 0.0f, 0.0f, 0x1.fd9aa6p-89f, 0.0f,
     0x1.c40ep-68f, 0.0f, 0x1.94b3dcp-54f, 0.0f, 0.0f, 0x1.45d12ap-38f, 0.0f, 0.0f,
     0x1.6f66aap-102f, 0.0f, 0.0f, 0x1.e8368p-111f, 0x1.14780ep-67f, 0x1.93a41p-99f,
     0x1.7279fap-90f, 0x1.b4a062p-118f, 0x1.b6fa84p-104f, 0x1.6612c4p-12f, 0.0f, 0.0f,
     0.0f, 0x1.ffa3d4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c2da8p-17f,
     0x1.bf0016p-58f, 0x1.18188cp-31f, 0x1.5a525p-39f, 0x1.dc5988p-88f,
     0x1.39bc9ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.da90cep-116f, 0x1.37a7a4p-83f, 0x1.42fdb6p-43f,
     0x1.800d5ep-88f, 0x1.9ac692p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dd508p-52f,
     0x1.d787p-86f, 0x1.167b4ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8c154p-28f,
     0x1.3a2fcep-116f, 0x1.3ef3cap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebe078p-47f, 0.0f, 0.0f, 0x1.396f4ap-119f, 0.0f, 0.0f, 0.0f, 0x1.d6134p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff5db2p-37f, 0.0f, 0x1.133fd8p-10f,
     0x1.58965cp-2f, 0.0f, 0x1.1fb4cap-70f, 0.0f, 0.0f, 0x1.d84492p-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.42c482p-126f, 0.0f, 0.0f, 0x1.fdd60ep-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8437bcp-40f, 0x1.85a7ccp-23f, 0.0f, 0x1.8c85a8p-41f, 0.0f,
     0x1.c0b0f8p-122f, 0x1.65e626p-39f, 0.0f, 0.0f, 0x1.469392p-7f, 0.0f,
     0x1.77e6cep-126f, 0x1.c7cfeap-47f, 0x1.147db2p-56f, 0.0f, 0x1.2e33fap-74f,
     0x1.50ec5cp-117f, 0.0f, 0x1.d869d4p-53f, 0x1.1fca12p-54f, 0.0f, 0.0f, 0.0f,
     0x1.831eaap-79f, 0.0f, 0.0f, 0x1.4821ap-39f, 0x1.a6304ep-94f, 0.0f,
     0x1.e3918cp-119f, 0x1.603f2ap-68f, 0.0f, 0.0f, 0x1.5e902cp-51f, 0x1.770588p-64f,
     0x1.e20124p-10f, 0.0f, 0x1.401f1p-59f, 0x1.4d9f1cp-6f, 0.0f, 0.0f,
     0x1.244d3p-102f, 0x1.ee592ap-15f, 0.0f, 0.0f, 0x1.f44cep-70f, 0x1.83a204p-42f,
     0.0f, 0x1.ce972ap-92f, 0x1.fcc958p-55f, 0.0f, 0.0f, 0.0f, 0x1.697956p-61f, 0.0f,
     0.0f, 0.0f, 0x1.547764p-124f, 0x1.826a16p-25f, 0x1.2ebad4p-60f, 0.0f,
     0x1.72fabep-67f, 0x1.fa004p-1f, 0x1.879ffcp-71f, 0x1.576632p-50f, 0.0f, 0.0f,
     0x1.3fdf2ep-102f, 0x1.bdc5e6p-99f, 0.0f, 0.0f, 0x1.6f34aap-108f,
     0x1.f2b8a8p-124f, 0.0f, 0x1.f7e45p-42f, 0x1.658e7p-4f, 0x1.f09fa8p-80f, 0.0f,
     0x1.43d184p-43f, 0.0f, 0x1.874cap-36f, 0.0f, 0x1.b9410ep-49f, 0x1.347bc6p-117f,
     0.0f, 0x1p0f, 0x1.00f8acp-45f, 0.0f, 0.0f, 0.0f, 0x1.51bc38p-18f, 0x1.41d04p-71f,
     0x1.1ae838p-57f, 0.0f, 0x1.a69p-73f, 0x1.e1ca34p-126f, 0x1.50bd6ap-51f, 0.0f,
     0.0f, 0x1.f5fd12p-74f, 0.0f, 0.0f, 0x1.2972f4p-103f, 0x1.09726cp-110f, 0.0f,
     0x1.819d88p-60f, 0.0f, 0x1.3ce6c6p-87f, 0x1.b512f2p-35f, 0x1.f4df66p-66f,
     0x1.5aa55ap-52f, 0x1.9215ccp-62f, 0x1.8174dap-98f, 0x1.a1e808p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5e4d82p-9f, 0x1.5e83e6p-104f, 0x1.5a499cp-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6cf98ap-96f, 0x1.42a1e8p-53f, 0x1.81faf4p-39f,
     0x1.032eb8p-119f, 0.0f, 0x1.6d01ap-58f, 0x1.b04f8ep-60f, 0x1.8af26cp-101f, 0.0f,
     0x1.066bd8p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c83ee8p-95f,
     0x1.f4515p-31f, 0x1.150f1p-106f, 0.0f, 0x1.0309bp-7f, 0x1.6984d8p-114f,
     0x1.81461p-40f, 0.0f, 0x1.4bb796p-57f, 0.0f, 0x1.429b46p-20f, 0x1.912082p-29f,
     0x1.55038p-111f, 0.0f, 0x1.0ea59ep-11f, 0x1.a93228p-42f, 0x1.7335dap-11f, 0x1p0f,
     0x1.977498p-25f, 0.0f, 0.0f, 0x1.f8c0dep-2f, 0x1.b912ecp-111f, 0.0f,
     0x1.39634ap-48f, 0x1.f7185cp-48f, 0.0f, 0.0f, 0.0f, 0x1.c2de4p-119f, 0.0f, 0.0f,
     0x1.8a566p-83f, 0.0f, 0.0f, 0.0f, 0x1.5b9c2cp-30f, 0.0f, 0.0f, 0x1.3d15a2p-6f,
     0x1.2577d6p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ba3cp-5f, 0x1.25d0c6p-116f, 0.0f,
     0.0f, 0x1.572bc8p-103f, 0.0f, 0.0f, 0x1.fc67fep-2f, 0x1.166678p-73f, 0.0f, 0.0f,
     0.0f, 0x1.d94d24p-121f, 0x1.9c182ep-36f, 0.0f, 0x1.8efec4p-42f, 0.0f,
     0x1.053f4ep-16f, 0x1.fecd56p-98f, 0.0f, 0x1.a44676p-18f, 0.0f, 0x1.313474p-11f,
     0x1p0f, 0x1.30d8ccp-77f, 0x1.77d29ep-19f, 0.0f, 0x1.47db24p-126f,
     0x1.f60872p-49f, 0x1.de874ep-92f, 0x1.d5b51ep-16f, 0x1.b79b4ap-34f, 0.0f, 0.0f,
     0.0f, 0x1.3a6e64p-70f, 0x1.f3cdfap-84f, 0x1.6aa23cp-79f, 0.0f, 0.0f,
     0x1.6ec3f4p-38f, 0x1.9f654p-54f, 0x1.f7c7eap-65f, 0x1.ab853ep-6f, 0x1.2c4a9cp-3f,
     0.0f, 0.0f, 0x1.12bf76p-75f, 0x1.7e702cp-8f, 0x1.6f2924p-105f, 0x1.b89056p-47f,
     0x1.c8e00cp-115f, 0.0f, 0.0f, 0.0f, 0x1.87b002p-33f, 0x1.ccc0a6p-54f, 0.0f,
     0x1.112efap-79f, 0.0f, 0x1.e3032cp-64f, 0x1.80979ap-114f, 0x1.c20356p-48f, 0.0f,
     0.0f, 0x1.26aedap-47f, 0x1.84752ap-8f, 0x1.e5b8a6p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0f65ep-32f, 0x1.3d7718p-96f, 0x1p0f, 0x1.8c7f7ep-44f, 0x1.043548p-25f,
     0x1.7dba76p-126f, 0x1.26976p-114f, 0.0f, 0x1.cf2cccp-2f, 0x1.d4ffecp-113f, 0.0f,
     0x1.12e11cp-15f, 0x1.17e1acp-47f, 0x1.1a45ccp-74f, 0.0f, 0.0f, 0x1.8babc8p-70f,
     0x1.d5de08p-125f, 0x1.07af14p-77f, 0.0f, 0.0f, 0x1.1f69d2p-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.decab8p-86f, 0.0f, 0.0f, 0.0f, 0x1.65f39p-17f, 0x1.4b75a6p-114f, 0.0f,
     0x1.b84f44p-68f, 0.0f, 0.0f, 0.0f, 0x1.429916p-14f, 0.0f, 0x1.d3938cp-16f, 0.0f,
     0x1.3d86e8p-113f, 0x1.721d18p-109f, 0.0f, 0x1.b21c7cp-3f, 0.0f, 0.0f,
     0x1.5fc1d4p-105f, 0x1.8f3474p-30f, 0x1.92fa68p-85f, 0x1.06e7a8p-100f,
     0x1.e54d5p-87f, 0.0f, 0.0f, 0.0f, 0x1.4d318p-23f, 0x1.595836p-125f,
     0x1.5a3d4ep-2f, 0x1.8b7bcap-54f, 0x1.4abd7cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a7902p-120f, 0x1.63a13ep-19f, 0.0f, 0x1.f42c56p-79f, 0x1.19db7ap-14f,
     0.0f, 0x1.c8c77cp-74f, 0.0f, 0.0f, 0.0f, 0x1.35431ap-4f, 0x1.4212cap-15f, 0.0f,
     0.0f, 0x1.f7fc06p-61f, 0.0f, 0.0f, 0.0f, 0x1.28cc82p-122f, 0.0f, 0.0f, 0.0f,
     0x1.30d27ap-116f, 0.0f, 0.0f, 0.0f, 0x1.66f866p-107f, 0.0f, 0.0f,
     0x1.053d88p-28f, 0x1.f5616p-23f, 0x1.c1b0e6p-126f, 0.0f, 0x1.7a240ap-47f,
     0x1.206cf6p-62f, 0.0f, 0.0f, 0.0f, 0x1.f5701p-54f, 0.0f, 0.0f, 0x1.ca65fap-39f,
     0x1.d0455cp-7f, 0.0f, 0.0f, 0x1.7a8062p-9f, 0.0f, 0.0f, 0x1.76af2ap-110f, 0.0f,
     0x1.d76886p-105f, 0x1.b10a82p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46855p-74f,
     0x1.d2ecdcp-8f, 0.0f, 0x1.dff2fp-104f, 0.0f, 0x1.a07ae2p-109f, 0x1.a50ca2p-20f,
     0.0f, 0.0f, 0x1.66ebbap-15f, 0.0f, 0x1.e21644p-51f, 0.0f, 0.0f, 0.0f,
     0x1.f3744ep-98f, 0x1.dcc5dp-20f, 0.0f, 0x1.2730cp-1f, 0x1.dcaf8ap-6f, 0.0f,
     0x1.8c1014p-12f, 0.0f, 0x1.1534fp-81f, 0.0f, 0.0f, 0x1.40c5dap-100f,
     0x1.0df128p-11f, 0x1.03cd3p-121f, 0x1.fb442ap-27f, 0.0f, 0x1.d0292ep-78f,
     0x1.1aa932p-25f, 0x1.4ce66ep-126f, 0.0f, 0x1.923b38p-36f, 0.0f, 0x1.9c74f2p-80f,
     0x1.949686p-45f, 0x1.d2902ap-114f, 0x1.96f3fcp-54f, 0.0f, 0x1.c8ee86p-66f, 0.0f,
     0x1.70c52ep-73f, 0.0f, 0.0f, 0x1.4fb022p-44f, 0.0f, 0x1.1d9246p-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.727a8ep-38f, 0x1.43e23p-36f, 0.0f, 0x1.7a9536p-44f, 0.0f,
     0x1.3c9dfp-125f, 0x1.3c97cap-78f, 0x1.668d3p-100f, 0x1.b2d26ep-3f, 0.0f, 0.0f,
     0x1.ef1aeap-27f, 0x1.5fda66p-60f, 0x1.21f4e6p-1f, 0x1.59d80ap-41f, 0.0f,
     0x1.a273c4p-109f, 0.0f, 0x1.b6f768p-26f, 0x1.b23258p-31f, 0.0f, 0.0f, 0.0f,
     0x1.f5ba7ep-111f, 0x1.93d31ep-4f, 0x1.879f84p-108f, 0x1.2b1f38p-66f,
     0x1.46a858p-72f, 0.0f, 0.0f, 0.0f, 0x1.b3d388p-93f, 0.0f, 0.0f, 0x1.e916c8p-16f,
     0x1.56c08p-71f, 0x1.66dc1ap-33f, 0x1.da7974p-83f, 0.0f, 0x1.b6fd6ap-52f,
     0x1.3dc9ap-15f, 0x1.4ddd36p-46f, 0.0f, 0x1.af682p-19f, 0.0f, 0x1.9676d4p-64f,
     0.0f, 0x1.cc3ed8p-80f, 0x1.8e218ep-91f, 0.0f, 0.0f, 0.0f, 0x1.9c5192p-120f,
     0x1.7887aap-21f, 0.0f, 0x1.dd369cp-22f, 0.0f, 0x1.250274p-118f, 0.0f,
     0x1.211658p-101f, 0.0f, 0x1.d5b346p-87f, 0.0f, 0x1.ac1fcep-24f, 0.0f, 0.0f,
     0x1.f60adap-76f, 0.0f, 0x1.acb56ap-74f, 0x1.9add32p-120f, 0x1.4708dcp-94f,
     0x1.9a05ep-76f, 0.0f, 0x1.be2d48p-122f, 0.0f, 0x1.ea7ab6p-79f, 0.0f, 0.0f,
     0x1.e03faap-79f, 0.0f, 0x1.eb2baap-125f, 0x1.99a8e4p-121f, 0.0f,
     0x1.43cb22p-125f, 0.0f, 0.0f, 0.0f, 0x1.bd26b6p-80f, 0x1.ed8b16p-25f,
     0x1.5e85b8p-86f, 0x1.1bf238p-71f, 0.0f, 0.0f, 0x1.416c8cp-113f, 0.0f,
     0x1.ced32p-46f, 0x1.53acp-29f, 0x1p0f, 0x1.212faap-31f, 0x1.bb004p-27f, 0.0f,
     0x1.02ad0ep-75f, 0.0f, 0.0f, 0x1.3b441ep-74f, 0x1.ce9126p-92f, 0.0f,
     0x1.1e8a28p-36f, 0x1.a7f27ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.db8cd2p-65f, 0x1.7d3eacp-122f, 0x1.1a687ap-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0e6dap-111f, 0.0f, 0x1.cbaa74p-44f, 0x1.c9b1cap-18f, 0x1.ea1e4ep-67f, 0.0f,
     0x1.34e88cp-80f, 0x1.e09a08p-100f, 0.0f, 0.0f, 0.0f, 0x1.e4ffa2p-23f,
     0x1.2cdd34p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdeb8p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.150d08p-44f, 0x1.5045eep-39f, 0x1.9d7b54p-52f,
     0x1.a9730ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e62606p-61f, 0x1.79234cp-119f, 0.0f,
     0.0f, 0x1.294d5ep-67f, 0.0f, 0x1.b7df8p-93f, 0x1.7ccce8p-20f, 0.0f, 0.0f, 0.0f,
     0x1.c3593cp-77f, 0x1p0f, 0x1.7168fcp-46f, 0x1.0784a6p-115f, 0x1.a100d8p-44f,
     0.0f, 0x1.bd1736p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac478p-95f, 0.0f, 0.0f,
     0.0f, 0x1.2800eep-106f, 0.0f, 0x1.cf5f48p-22f, 0x1.4b3bfep-72f, 0.0f,
     0x1.892902p-114f, 0x1.22f8a4p-31f, 0x1.c6e932p-89f, 0x1.1125cap-43f, 0.0f,
     0x1.5bc92cp-14f, 0x1.819316p-14f, 0.0f, 0x1.7b7a4p-39f, 0x1.ba63acp-5f,
     0x1.29001p-69f, 0x1.b5fc76p-110f, 0x1.346eap-45f, 0.0f, 0.0f, 0x1.720a74p-72f,
     0x1.e37c42p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a801cp-20f, 0x1.cd404cp-45f, 0x1.2a9d86p-5f, 0x1.8ddfdcp-10f, 0.0f,
     0x1.9a4c34p-17f, 0.0f, 0x1.ba3a4ap-122f, 0.0f, 0x1.439f6ep-13f, 0x1.ff77ep-35f,
     0x1.0ff10cp-117f, 0.0f, 0x1.acf042p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3cce84p-77f, 0x1.065e5p-105f, 0x1.e82556p-101f, 0x1.133ff8p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4f4184p-62f, 0.0f, 0x1.903784p-58f, 0.0f, 0x1.99f9c8p-15f,
     0x1.da85bep-2f, 0.0f, 0x1.14b01ep-100f, 0x1.2087a6p-89f, 0.0f, 0x1.979582p-68f,
     0.0f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = sinf(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("sinf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("sinf bench acc %a\n", global_bench_acc);
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
