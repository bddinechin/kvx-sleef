/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_erff.c --function erff --headers math.h,ml_support_lib.h \
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
     0x1.0c55acp-121f, 0x1.ef96fep-62f, 0.0f, 0.0f, 0.0f, 0x1.ed11dcp-106f, 0.0f,
     0.0f, 0.0f, 0x1.1a2b06p-73f, 0x1.bfa2b4p-87f, 0.0f, 0x1.0c4f08p-31f,
     0x1.c860fcp-19f, 0x1.c34152p-42f, 0.0f, 0.0f, 0.0f, 0x1.45de48p-67f,
     0x1.3a7a72p-114f, 0x1.77e2d8p-106f, 0.0f, 0.0f, 0x1.61360ep-15f, 0x1.6e255p-67f,
     0.0f, 0.0f, 0x1.be84dcp-109f, 0x1.0ed4b4p-46f, 0x1.ecf204p-82f, 0x1.7eb2bp-18f,
     0.0f, 0.0f, 0x1.e17116p-91f, 0.0f, 0x1.e35b4ap-57f, 0x1.1605d6p-56f,
     0x1.d26f52p-17f, 0.0f, 0x1.3c59ccp-26f, 0.0f, 0x1.67aeecp-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.71b4ccp-2f, 0x1.8d30d4p-123f, 0x1.41da52p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.43f43ep-13f, 0x1.1d641ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3191d6p-102f, 0.0f, 0x1.563c6ap-59f, 0x1.2b7f8p-30f, 0x1.2a4b5ap-82f, 0.0f,
     0.0f, 0x1.bfbe4ap-47f, 0x1.8c31bap-26f, 0.0f, 0.0f, 0x1.a10fdp-39f,
     0x1.9a696p-25f, 0.0f, 0.0f, 0x1.498bb8p-85f, 0x1.e73a0cp-113f, 0.0f,
     0x1.18241ep-63f, 0.0f, 0.0f, 0.0f, 0x1.5d23a6p-122f, 0x1.c2796cp-16f,
     0x1.c116e8p-39f, 0.0f, 0.0f, 0x1.77d656p-84f, 0.0f, 0.0f, 0.0f, 0x1.7de21ap-112f,
     0x1.480652p-59f, 0.0f, 0.0f, 0x1.97a274p-84f, 0x1.73eabp-109f, 0.0f,
     0x1.3f6bd2p-7f, 0.0f, 0.0f, 0.0f, 0x1.34fc7cp-38f, 0.0f, 0.0f, 0x1.dabb24p-107f,
     0.0f, 0x1.2fbe3cp-28f, 0.0f, 0x1.8e48b8p-2f, 0x1.78845ap-37f, 0x1.a23654p-4f,
     0x1.631714p-117f, 0.0f, 0x1.fc9a66p-119f, 0x1.4d41ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.2aeee2p-46f, 0x1.35742ap-44f, 0.0f, 0x1.f1b21ep-49f, 0.0f, 0x1.341d18p-22f,
     0.0f, 0.0f, 0x1.84ba3p-82f, 0x1.bd96d8p-3f, 0.0f, 0x1.30921cp-4f,
     0x1.79d3d4p-105f, 0.0f, 0.0f, 0x1.d965e2p-48f, 0.0f, 0.0f, 0x1.4932e8p-8f, 0.0f,
     0.0f, 0.0f, 0x1.1acdcap-12f, 0.0f, 0.0f, 0x1.5296cap-113f, 0x1.8a5d3cp-109f,
     0x1.377c4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a54d52p-111f, 0x1.098276p-94f,
     0.0f, 0x1.e89026p-125f, 0x1.a0ef84p-88f, 0.0f, 0.0f, 0x1.911dp-63f,
     0x1.aca518p-7f, 0x1.ce2a58p-54f, 0x1.b7e0dcp-120f, 0x1.af422ap-47f, 0.0f,
     0x1.5955d6p-33f, 0.0f, 0x1.5aa2eap-78f, 0x1.3e10c6p-35f, 0.0f, 0.0f, 0.0f,
     0x1.fbcc18p-87f, 0x1.ed6364p-24f, 0x1.593cd4p-34f, 0x1.3c5f06p-53f,
     0x1.578978p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6ebcap-10f, 0.0f,
     0x1.e5ba76p-94f, 0.0f, 0.0f, 0x1.b6b884p-93f, 0x1.163026p-86f, 0.0f,
     0x1.a02288p-94f, 0x1p0f, 0x1.9c2dccp-7f, 0x1.a800dap-39f, 0x1.159d3p-117f,
     0x1.719368p-100f, 0.0f, 0x1.be754p-114f, 0x1.c59bcap-3f, 0x1.ad92b4p-115f,
     0x1.af151p-31f, 0.0f, 0x1.3909c8p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.110116p-116f,
     0.0f, 0x1.020f02p-97f, 0x1.4c04fep-92f, 0x1.ac90ep-67f, 0x1.6b2e22p-50f,
     0x1.1705a8p-30f, 0x1.447ab6p-21f, 0x1.96873p-106f, 0x1.1e40f4p-74f, 0.0f,
     0x1.20b568p-50f, 0x1.45d4a6p-104f, 0x1.ae395ep-66f, 0x1.9b96c2p-90f, 0.0f, 0.0f,
     0x1.2c2948p-77f, 0.0f, 0.0f, 0x1.19253ap-80f, 0x1.abe97cp-44f, 0.0f,
     0x1.72fecap-76f, 0x1.fdaa8ap-89f, 0x1.1fb2c2p-75f, 0x1.2d3c78p-123f, 0.0f, 0.0f,
     0.0f, 0x1.9a2f7cp-76f, 0x1.69bbe8p-77f, 0.0f, 0x1.43b0d8p-125f, 0x1.eb3b2cp-114f,
     0x1.e04516p-41f, 0.0f, 0.0f, 0.0f, 0x1.b4775ap-93f, 0x1.51366cp-25f,
     0x1.36957ap-47f, 0x1.27d284p-81f, 0.0f, 0.0f, 0x1.6a9f32p-85f, 0.0f,
     0x1.000152p-28f, 0.0f, 0x1.d3357ap-63f, 0x1.1fb68ap-63f, 0x1.20cef8p-75f,
     0x1.a3e09ap-80f, 0x1.d79566p-20f, 0x1.169356p-108f, 0x1.11a6cp-21f, 0.0f,
     0x1.c005bep-122f, 0x1.fb915cp-116f, 0x1.b6605ap-21f, 0.0f, 0x1.3da30cp-71f, 0.0f,
     0x1.a0d05ep-43f, 0.0f, 0x1.6934b8p-121f, 0x1.8657e6p-55f, 0.0f, 0.0f,
     0x1.716b2ep-49f, 0.0f, 0.0f, 0x1.b5a3bap-39f, 0x1.58759ep-111f, 0x1.9c9568p-5f,
     0.0f, 0x1.9695c8p-25f, 0x1.7a02ccp-103f, 0.0f, 0x1.aab7c8p-26f, 0.0f, 0.0f, 0.0f,
     0x1.b74668p-44f, 0.0f, 0x1.10ea32p-112f, 0.0f, 0x1.7deee2p-58f, 0.0f, 0.0f,
     0x1.361e7cp-3f, 0.0f, 0x1.3c0c52p-7f, 0.0f, 0.0f, 0x1.c10094p-16f,
     0x1.0c6092p-91f, 0.0f, 0x1.b80cfep-74f, 0x1.8f9e02p-122f, 0x1.d92848p-27f,
     0x1.02d826p-72f, 0.0f, 0x1.bfdf2cp-93f, 0x1.3d286ep-116f, 0.0f, 0x1.608a96p-4f,
     0x1.3035e2p-116f, 0x1.b450dep-32f, 0.0f, 0x1.864ca8p-78f, 0.0f, 0x1.239554p-122f,
     0x1.eebe24p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b84b82p-59f, 0.0f, 0x1.6a8f9ap-12f, 0x1.3fa75ep-29f, 0x1.a204c2p-35f,
     0x1.670d2ap-49f, 0x1.1a3d04p-25f, 0x1.02e0d6p-103f, 0.0f, 0.0f, 0x1.9e8142p-36f,
     0x1.db9a34p-3f, 0.0f, 0x1.5091dp-92f, 0.0f, 0.0f, 0x1.edd76p-80f, 0.0f, 0.0f,
     0.0f, 0x1.213f24p-76f, 0x1.6345fp-124f, 0x1.d663f8p-115f, 0x1.ecead6p-19f,
     0x1.db7974p-75f, 0.0f, 0x1.ec6f56p-15f, 0.0f, 0.0f, 0x1.1de666p-88f, 0.0f, 0.0f,
     0x1.27b9acp-77f, 0.0f, 0x1.5f516cp-40f, 0x1.71732p-39f, 0x1.538884p-67f,
     0x1.d42c8ep-56f, 0.0f, 0.0f, 0x1.504092p-41f, 0x1.5eb3c4p-12f, 0x1.77b684p-14f,
     0x1.86a828p-61f, 0x1.a3d192p-33f, 0.0f, 0x1.dd6cbcp-114f, 0.0f, 0x1.ad0e3p-47f,
     0.0f, 0.0f, 0.0f, 0x1.40d26ap-102f, 0x1.609f36p-121f, 0x1.7cb016p-98f, 0.0f,
     0.0f, 0.0f, 0x1.61b554p-108f, 0x1.1fcd02p-46f, 0x1.275678p-35f, 0.0f, 0.0f,
     0x1.b14808p-115f, 0x1.537dd8p-124f, 0x1.5a7ebap-96f, 0x1.7cbefap-43f,
     0x1.8f91aep-50f, 0.0f, 0.0f, 0.0f, 0x1.32e58ap-81f, 0.0f, 0.0f, 0x1.ee58b6p-33f,
     0x1.955332p-47f, 0.0f, 0x1.8b7f46p-4f, 0.0f, 0.0f, 0x1.51b7f4p-34f, 0.0f,
     0x1.f40ff2p-92f, 0x1.3b428ap-71f, 0.0f, 0x1.0ee524p-120f, 0.0f, 0x1.598c74p-47f,
     0.0f, 0x1.2ce6p-94f, 0x1.7512a8p-65f, 0.0f, 0x1.c2e936p-22f, 0.0f,
     0x1.6f7ab2p-96f, 0x1.7f2ebep-101f, 0x1.2aa72ap-121f, 0x1.9dcfb6p-13f, 0.0f,
     0x1.e5a524p-80f, 0x1.63173cp-124f, 0x1.9ce864p-9f, 0.0f, 0.0f, 0.0f,
     0x1.53ee7ap-5f, 0.0f, 0.0f, 0.0f, 0x1.eead7p-87f, 0x1.e619b8p-104f, 0.0f, 0.0f,
     0x1.8bb0fp-116f, 0x1.5eecccp-76f, 0x1.b276cp-47f, 0x1.b30c62p-77f,
     0x1.81bdb8p-125f, 0.0f, 0x1.8d9c52p-7f, 0.0f, 0x1.1f8482p-54f, 0.0f,
     0x1.35a2c2p-105f, 0.0f, 0x1.b51c1p-60f, 0.0f, 0x1.10cce2p-92f, 0.0f, 0.0f,
     0x1.d8b3f8p-40f, 0x1.89d882p-118f, 0.0f, 0x1.ff927ep-25f, 0.0f, 0.0f,
     0x1.c09dc6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a1e44p-72f, 0x1.0ee9c8p-68f,
     0.0f, 0x1.f04028p-15f, 0x1.5a2c8ep-50f, 0.0f, 0x1.8a7d32p-117f, 0.0f, 0.0f,
     0x1.ab3046p-61f, 0x1.fca136p-51f, 0.0f, 0x1.197f3ap-60f, 0x1.85dcfep-14f,
     0x1.c7fbf6p-6f, 0x1.a1fb74p-34f, 0x1.65608p-62f, 0.0f, 0.0f, 0x1.78b462p-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc0b5ep-27f, 0x1.d941bap-12f, 0.0f, 0x1.070b9cp-98f,
     0.0f, 0x1.0d145ep-82f, 0x1.5c64a8p-70f, 0x1.7be9f4p-72f, 0x1.628fdp-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7991e8p-47f, 0x1.44278ap-18f, 0x1.7a669ap-57f,
     0x1.bf75ecp-53f, 0.0f, 0x1.7391a2p-93f, 0x1.56f10ep-72f, 0x1.063fap-87f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5aaf34p-88f, 0x1.cc2c62p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e16928p-58f, 0x1.7f477p-100f, 0.0f, 0x1.c1c1b4p-39f, 0x1.7b0242p-71f,
     0x1.19a868p-1f, 0x1.32527cp-19f, 0.0f, 0x1.eb4f7p-108f, 0x1.46cd56p-59f, 0.0f,
     0.0f, 0x1.31531cp-9f, 0.0f, 0.0f, 0.0f, 0x1.5ea9dp-92f, 0.0f, 0.0f,
     0x1.dca51ap-101f, 0x1.9ec9c8p-84f, 0.0f, 0.0f, 0.0f, 0x1.13c326p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.418c9p-107f, 0x1.367cc2p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3d5cd6p-61f, 0x1.0ff59cp-47f, 0x1.3117e8p-45f, 0x1.dca3ap-83f,
     0x1.871c0ep-34f, 0.0f, 0x1.3c47a6p-45f, 0x1.c1a992p-18f, 0x1.70b1d2p-90f, 0.0f,
     0x1.e8f39ap-14f, 0x1.40bcf8p-77f, 0x1.43d6c8p-36f, 0x1.a25c1p-10f, 0.0f, 0.0f,
     0x1.0ff53cp-19f, 0x1.33190ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.19b7b8p-13f, 0x1.e1e52cp-44f, 0.0f, 0.0f, 0.0f, 0x1.07f904p-31f,
     0x1.069724p-116f, 0.0f, 0.0f, 0x1.b84e1cp-49f, 0.0f, 0.0f, 0x1.60034p-18f,
     0x1.9d834ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30039ep-31f, 0.0f, 0.0f,
     0x1.9c54a2p-122f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.d7ec04p-88f, 0.0f, 0.0f,
     0x1.a99b48p-40f, 0.0f, 0.0f, 0x1.48b108p-63f, 0.0f, 0.0f, 0.0f, 0x1.8aa54p-88f,
     0x1.e99c5p-30f, 0.0f, 0.0f, 0x1.04d612p-8f, 0.0f, 0.0f, 0.0f, 0x1.071adp-81f,
     0.0f, 0.0f, 0x1.bb8be6p-47f, 0.0f, 0x1.3094e4p-84f, 0x1.86c4acp-34f, 0.0f, 0.0f,
     0x1.b4969ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80ddf8p-6f, 0x1.a5436ap-59f, 0.0f,
     0.0f, 0.0f, 0x1.c69f6p-68f, 0x1.94c086p-65f, 0x1.1d9b7cp-66f, 0x1.cddabp-69f,
     0x1.1153c6p-12f, 0.0f, 0.0f, 0.0f, 0x1.674af2p-16f, 0.0f, 0.0f, 0x1.2119aap-50f,
     0.0f, 0x1.2a01fp-92f, 0x1.eff13cp-45f, 0.0f, 0x1.623794p-117f, 0x1.e0dc1cp-9f,
     0.0f, 0.0f, 0x1.eb85f4p-83f, 0x1.58a8e6p-78f, 0.0f, 0.0f, 0x1.19689cp-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cbb1ep-22f, 0.0f, 0x1.97dc1ep-27f, 0x1.187002p-72f,
     0x1.7a6ce2p-48f, 0.0f, 0x1.cf042cp-46f, 0x1.23099p-51f, 0x1.705f3p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.74ed2cp-118f, 0.0f, 0x1.f15944p-49f, 0x1.595cccp-63f,
     0x1.6c586ep-54f, 0.0f, 0.0f, 0x1.5b5a7p-98f, 0x1.ff913p-96f, 0x1.64e5acp-95f,
     0.0f, 0x1.6a73dp-24f, 0.0f, 0.0f, 0x1.3aaca4p-113f, 0.0f, 0.0f, 0x1.65515cp-88f,
     0x1.a43f28p-44f, 0.0f, 0.0f, 0x1.24554p-99f, 0x1.e3d58cp-9f, 0x1.95eeep-87f,
     0.0f, 0.0f, 0.0f, 0x1.84fddcp-21f, 0x1.756b78p-15f, 0x1.70a6ap-84f,
     0x1.ceb52ap-43f, 0x1.7d3722p-11f, 0x1.a7175cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.0245f6p-116f, 0x1.ce7e96p-99f, 0x1.a1f21ep-45f, 0.0f, 0.0f, 0.0f,
     0x1.1eda22p-63f, 0x1.657046p-91f, 0.0f, 0x1.b5aeep-16f, 0.0f, 0x1.c7f01p-29f,
     0.0f, 0x1.e97372p-119f, 0.0f, 0x1.085b78p-117f, 0.0f, 0x1.1b8b3ap-13f,
     0x1.f8fab8p-29f, 0.0f, 0x1.6506c4p-86f, 0.0f, 0x1.de95ecp-88f, 0x1.9e8d32p-11f,
     0x1.6aa958p-84f, 0x1.48579ep-22f, 0x1.b95bb2p-75f, 0x1.e735aap-4f, 0.0f,
     0x1.655f86p-21f, 0.0f, 0.0f, 0x1.5ee14p-76f, 0x1.5777p-87f, 0.0f,
     0x1.3fc264p-125f, 0x1.b1236ap-41f, 0.0f, 0.0f, 0.0f, 0x1.1f51ap-87f,
     0x1.72021ep-65f, 0.0f, 0x1.b0793p-103f, 0.0f, 0x1.23d5d4p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.145114p-61f, 0x1.663d36p-114f, 0.0f, 0.0f, 0.0f, 0x1.a16778p-103f,
     0x1.0081acp-72f, 0.0f, 0x1.87b4ccp-87f, 0.0f, 0.0f, 0x1.482f22p-80f, 0.0f,
     0x1.dc9848p-112f, 0x1.b0f7fep-88f, 0x1.11aebp-28f, 0x1.fa4b2ap-54f,
     0x1.e10d3p-5f, 0x1.305abcp-48f, 0x1.8310aep-42f, 0.0f, 0.0f, 0.0f,
     0x1.3aab92p-75f, 0x1.7ade5cp-103f, 0.0f, 0.0f, 0x1.98f442p-3f, 0x1.263f9ep-24f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f138d4p-112f, 0.0f, 0x1.a8b674p-85f, 0.0f, 0.0f,
     0.0f, 0x1.5c18d6p-50f, 0.0f, 0.0f, 0x1.92ba6ep-119f, 0.0f, 0x1.592a74p-19f,
     0x1.525c46p-37f, 0x1.1dd51cp-70f, 0x1.bf64eep-106f, 0.0f, 0.0f, 0.0f,
     0x1.f97712p-1f, 0.0f, 0.0f, 0x1.a2a454p-4f, 0.0f, 0.0f, 0x1.314e1cp-119f,
     0x1.2b3ad8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baa8d8p-59f, 0x1.8e9fc6p-39f,
     0x1.dbda94p-71f, 0.0f, 0.0f, 0x1.ab8fe8p-29f, 0.0f, 0.0f, 0x1.b96246p-108f, 0.0f,
     0x1.0873b2p-9f, 0.0f, 0.0f, 0x1.f65dbap-29f, 0x1.8ae696p-43f, 0.0f, 0.0f, 0.0f,
     0x1.d2b586p-44f, 0.0f, 0.0f, 0x1.637216p-100f, 0.0f, 0.0f, 0x1.f0ae6cp-4f,
     0x1.162d28p-112f, 0x1.7dd6cp-69f, 0x1.e3da58p-101f, 0.0f, 0x1.24975ap-3f,
     0x1.cbe7c4p-122f, 0x1.2e92acp-29f, 0.0f, 0.0f, 0x1.9f8956p-101f, 0.0f,
     0x1.8a457p-56f, 0.0f, 0.0f, 0x1.cff35cp-94f, 0x1.ae2aacp-64f, 0.0f, 0.0f,
     0x1.68e62ep-34f, 0.0f, 0.0f, 0x1.c87172p-37f, 0x1.0f646ep-102f, 0x1.7796c2p-94f,
     0x1.075348p-79f, 0.0f, 0x1.57cb9ep-124f, 0x1.b469c6p-26f, 0x1.668dd6p-85f,
     0x1.458cb6p-100f, 0x1.47113ep-45f, 0x1.071a6ep-28f, 0.0f, 0.0f, 0.0f,
     0x1.291c82p-89f, 0.0f, 0.0f, 0x1.8c5836p-96f, 0x1.b05874p-42f, 0.0f, 0.0f, 0.0f,
     0x1.b9160ap-69f, 0.0f, 0x1.058794p-40f, 0x1.57c488p-120f, 0x1.49e1p-12f, 0.0f,
     0.0f, 0x1.bcc16cp-8f, 0x1p0f, 0.0f, 0x1.a35a54p-75f, 0.0f, 0.0f, 0x1.9f2166p-1f,
     0.0f, 0x1.48ad74p-79f, 0.0f, 0x1.1c9706p-115f, 0x1.0d5936p-33f, 0.0f, 0.0f, 0.0f,
     0x1.989ad4p-81f, 0.0f, 0.0f, 0.0f, 0x1.8b8adap-88f, 0.0f, 0.0f, 0x1.ffb19cp-97f,
     0x1.2f4aep-80f, 0x1.564574p-101f, 0.0f, 0x1.f12226p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.80d29p-13f, 0.0f, 0.0f, 0.0f, 0x1.cb0cf6p-19f, 0.0f, 0.0f, 0.0f,
     0x1.be05ap-109f, 0.0f, 0.0f, 0.0f, 0x1.ac8346p-7f, 0x1.2ef24ap-34f, 0.0f, 0.0f,
     0x1.03cc0cp-121f, 0.0f, 0x1.f1bd5ap-35f, 0.0f, 0x1.94b3bp-100f, 0x1.6b8dbp-123f,
     0x1.2b6f54p-59f, 0.0f, 0x1.91684p-23f, 0.0f, 0x1.b51102p-5f, 0x1.2ca196p-116f,
     0.0f, 0.0f, 0.0f, 0x1.44c53ap-2f, 0x1.d7100cp-24f, 0.0f, 0x1.f4d558p-19f, 0.0f,
     0x1.ed2542p-70f, 0x1.1977d4p-113f, 0.0f, 0.0f, 0.0f, 0x1.aa6cep-43f,
     0x1.5106cap-114f, 0.0f, 0x1.18d364p-98f, 0.0f, 0x1.8ab8e2p-2f
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
            tmp1 = erff(tmp0);
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
    printf("erff %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("erff bench acc %a\n", global_bench_acc);
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
