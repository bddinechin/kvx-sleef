/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceilf1_purecfma.c --function \
 *     Sleef_finz_ceilf1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.a0afb6p-42f, 0x1.ee20e8p-55f, 0x1.43e3f8p-25f, 0x1.c2e5ep-59f,
     0x1.a66a7p-119f, 0x1.a23998p-124f, 0x1.d6755cp-116f, 0x1.c9fc2p-11f,
     0x1.3a401ap-71f, 0.0f, 0.0f, 0.0f, 0x1.a218dp-119f, 0.0f, 0.0f, 0x1.070d36p-82f,
     0.0f, 0x1.ff09c4p-121f, 0x1.ab6d58p-16f, 0.0f, 0.0f, 0x1.3aabd4p-4f, 0.0f, 0.0f,
     0.0f, 0x1.2bc952p-34f, 0x1.f4ee32p-27f, 0x1.83c318p-57f, 0.0f, 0x1.fb52dcp-112f,
     0x1.a4465p-109f, 0.0f, 0x1.79f378p-61f, 0.0f, 0x1.501abap-70f, 0x1.17a434p-111f,
     0x1.09904ep-29f, 0x1.c0f05ep-97f, 0.0f, 0x1.a6b2cap-107f, 0.0f, 0x1.b249d2p-34f,
     0.0f, 0x1.951f9p-3f, 0x1.bcffcap-19f, 0x1.e6e6cp-121f, 0.0f, 0x1.7f427ap-17f,
     0x1.83c3bep-60f, 0.0f, 0.0f, 0.0f, 0x1.bd5dfap-101f, 0x1.bc75c8p-73f,
     0x1.82253p-67f, 0x1.6e3e2ep-76f, 0.0f, 0x1.92019ep-33f, 0.0f, 0x1.a7f266p-6f,
     0x1.471666p-126f, 0x1.1af522p-1f, 0x1.ec81c2p-118f, 0.0f, 0x1.c9a7a8p-36f,
     0x1.4022p-99f, 0.0f, 0.0f, 0x1.ccd32ap-115f, 0.0f, 0.0f, 0x1.578fe6p-10f,
     0x1.f327d4p-98f, 0.0f, 0.0f, 0x1.a68962p-20f, 0.0f, 0.0f, 0x1.995d1p-24f, 0.0f,
     0x1.c4648cp-123f, 0.0f, 0x1.bf648p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.11b612p-105f, 0x1.20c836p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4f6fp-2f, 0.0f,
     0.0f, 0x1.3b6b28p-122f, 0.0f, 0x1.218184p-54f, 0.0f, 0.0f, 0.0f, 0x1.d54a54p-78f,
     0.0f, 0x1.f7838ep-53f, 0x1.bde2fp-89f, 0x1.8d643ap-79f, 0x1.c8639p-115f,
     0x1.bfe9ccp-11f, 0.0f, 0.0f, 0x1.5dd576p-100f, 0.0f, 0x1.ffc7dp-103f, 0.0f,
     0x1.e9152cp-70f, 0x1.f7bed4p-88f, 0x1.6ba234p-43f, 0.0f, 0x1.7fd66ap-40f, 0.0f,
     0.0f, 0x1.c9f27ap-70f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.c09c48p-25f,
     0x1.5bee22p-6f, 0x1.ff6a28p-78f, 0.0f, 0x1.8c645ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a2c964p-19f, 0.0f, 0x1.b314c8p-15f, 0.0f, 0x1.6f84dcp-120f,
     0x1.cc401p-12f, 0x1.c323dep-108f, 0x1.659a72p-120f, 0x1.0a129p-36f,
     0x1.f5010ap-36f, 0.0f, 0x1.4f1128p-57f, 0x1.66098ep-8f, 0x1.561606p-100f,
     0x1.15478cp-78f, 0x1.4f9c8ep-40f, 0x1.f4b6acp-41f, 0x1.5cd0f8p-70f, 0.0f,
     0x1.845a66p-95f, 0x1.9f1478p-60f, 0x1.2c0facp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8ce62p-8f, 0.0f, 0.0f, 0x1.ea207cp-51f, 0x1.8c4fb6p-53f, 0.0f, 0.0f,
     0x1.95aap-10f, 0x1.480492p-12f, 0.0f, 0x1.5d0ee2p-42f, 0x1.ecfe62p-67f, 0.0f,
     0x1.300bd2p-24f, 0.0f, 0.0f, 0x1.58cfa2p-80f, 0.0f, 0x1.18f6bcp-62f,
     0x1.74e3c2p-82f, 0x1.51c5c6p-65f, 0.0f, 0.0f, 0x1.f3d81cp-64f, 0x1.1c4b7ap-120f,
     0.0f, 0.0f, 0x1.cdcc62p-95f, 0.0f, 0x1.b95c7ep-85f, 0.0f, 0.0f, 0x1.031e3ap-106f,
     0.0f, 0x1.7c0ad6p-3f, 0x1.710258p-113f, 0.0f, 0x1.9dbc62p-110f, 0x1.59f23ep-44f,
     0x1.42a53cp-16f, 0x1.06e9c2p-46f, 0.0f, 0.0f, 0.0f, 0x1.6f7c4ep-17f,
     0x1.2b6bd6p-114f, 0x1.8c5154p-124f, 0x1.ae3cb2p-27f, 0x1.439d0ep-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.712822p-43f, 0.0f, 0.0f, 0.0f, 0x1.f17926p-120f, 0.0f, 0.0f,
     0x1.3748fp-104f, 0x1.88750ap-93f, 0x1.31b5e8p-105f, 0.0f, 0x1.0997ecp-38f,
     0x1.680902p-16f, 0x1.ba1858p-122f, 0.0f, 0.0f, 0x1.dd80e4p-111f, 0.0f,
     0x1.8b631cp-116f, 0x1.4a7dd6p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.604026p-70f,
     0.0f, 0.0f, 0x1.f4b998p-44f, 0x1.8679d6p-70f, 0.0f, 0x1.c7a772p-40f, 0.0f, 0.0f,
     0.0f, 0x1.ec45c8p-65f, 0.0f, 0.0f, 0.0f, 0x1.2af94p-93f, 0x1.a460b6p-97f, 0.0f,
     0x1.63e694p-114f, 0x1.d37636p-114f, 0x1.06b39p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.97da84p-113f, 0x1.48f55cp-120f, 0.0f, 0x1.1df394p-44f, 0.0f,
     0x1.ff7242p-76f, 0x1.9eee32p-81f, 0x1.83407p-47f, 0.0f, 0x1.e6793p-106f,
     0x1.6736f2p-52f, 0.0f, 0x1.0eb1d4p-126f, 0.0f, 0x1.d7b258p-121f, 0x1.d2701cp-20f,
     0.0f, 0x1.e9aa7cp-14f, 0.0f, 0x1.725926p-110f, 0x1.a7c51ap-43f, 0.0f, 0.0f,
     0x1.997e48p-106f, 0.0f, 0x1.fcd56ap-90f, 0x1.3153d4p-98f, 0.0f, 0.0f,
     0x1.732b14p-32f, 0.0f, 0x1.c6ebaep-99f, 0x1.1cbb6p-3f, 0.0f, 0x1.e16a08p-31f,
     0.0f, 0x1.d84c48p-58f, 0.0f, 0x1.f6a7ccp-11f, 0x1.09c07ep-97f, 0x1.2c6074p-13f,
     0.0f, 0.0f, 0x1.76b58cp-106f, 0.0f, 0x1.6d6ca6p-64f, 0x1.969132p-80f,
     0x1.59ca3ap-59f, 0x1.494db8p-42f, 0x1.c4ae5ep-25f, 0.0f, 0.0f, 0.0f,
     0x1.75e8d2p-10f, 0x1.d531ep-5f, 0x1.ddb768p-54f, 0x1.5cf824p-53f, 0.0f,
     0x1.5cabp-101f, 0x1.963e74p-45f, 0x1.2e69bcp-93f, 0.0f, 0.0f, 0x1.c4d1fp-103f,
     0.0f, 0x1.5d69c2p-40f, 0.0f, 0.0f, 0x1.231916p-10f, 0.0f, 0x1.ab9992p-79f, 0.0f,
     0x1.3e2656p-16f, 0.0f, 0.0f, 0.0f, 0x1.6d7fecp-15f, 0.0f, 0.0f, 0x1.742026p-122f,
     0x1.f775f6p-44f, 0.0f, 0.0f, 0.0f, 0x1.9f03f2p-12f, 0x1.9111e4p-113f,
     0x1.d9e586p-11f, 0x1.5df078p-60f, 0x1.2348ecp-29f, 0.0f, 0.0f, 0x1.41457p-118f,
     0x1.71963ep-108f, 0x1.a084aap-73f, 0x1.7423a4p-32f, 0.0f, 0.0f, 0x1.0e61cp-114f,
     0x1.9329c6p-8f, 0.0f, 0x1.03e54p-108f, 0x1.35e7a8p-30f, 0x1.bddc84p-60f,
     0x1.a9587ep-12f, 0.0f, 0.0f, 0x1.f3ae6p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8791ap-4f, 0.0f, 0.0f, 0.0f, 0x1.d67ed8p-126f, 0x1.65309ap-92f, 0.0f, 0.0f,
     0.0f, 0x1.40effp-92f, 0.0f, 0x1.2325aep-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.989004p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d03652p-103f, 0.0f, 0x1.4a36c8p-72f,
     0.0f, 0.0f, 0.0f, 0x1.32b9fcp-72f, 0x1.d795aep-106f, 0x1.e12354p-73f, 0.0f,
     0x1.d6374p-10f, 0x1.1cb67ap-78f, 0x1.ddb9acp-35f, 0.0f, 0.0f, 0x1.953ca6p-44f,
     0x1.cc30cep-4f, 0.0f, 0.0f, 0.0f, 0x1.296cc8p-118f, 0x1.4ade9ep-22f, 0.0f, 0.0f,
     0x1.a7ff02p-113f, 0.0f, 0x1.663872p-40f, 0.0f, 0x1.13bc14p-95f, 0x1.c07fecp-20f,
     0x1.59fde6p-33f, 0.0f, 0x1.682a8ep-58f, 0x1.f9c6bap-58f, 0x1.c7961ep-3f, 0.0f,
     0.0f, 0.0f, 0x1.28ba62p-104f, 0x1.d74a9cp-53f, 0.0f, 0x1.53d0acp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1c768ep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae44fp-96f, 0.0f,
     0.0f, 0.0f, 0x1.dc1572p-94f, 0.0f, 0x1.5b6cb8p-30f, 0x1.98222ep-48f,
     0x1.413bdp-94f, 0x1.4473e8p-66f, 0.0f, 0x1.77f296p-110f, 0.0f, 0.0f,
     0x1.dd09c8p-106f, 0x1.cd2842p-64f, 0.0f, 0x1.58891ap-100f, 0.0f, 0.0f,
     0x1.3e7356p-103f, 0x1.12ddd8p-60f, 0x1.53087p-100f, 0.0f, 0.0f, 0x1.2fa59ep-43f,
     0.0f, 0x1.8290fcp-126f, 0.0f, 0.0f, 0.0f, 0x1.11ff36p-85f, 0.0f, 0.0f,
     0x1.a8d3dcp-50f, 0x1.d93b18p-45f, 0.0f, 0x1.5dc37cp-75f, 0x1.0b90acp-122f,
     0x1.7a7f96p-53f, 0x1.17b418p-47f, 0.0f, 0.0f, 0.0f, 0x1.1dab9cp-115f, 0.0f,
     0x1.de74fep-100f, 0.0f, 0x1.03665ap-9f, 0.0f, 0.0f, 0x1.f2847ep-120f,
     0x1.e5c548p-116f, 0.0f, 0x1.317efep-9f, 0x1.4e1012p-29f, 0.0f, 0x1.7c3e0cp-4f,
     0.0f, 0x1.5d3484p-9f, 0x1.b099c6p-6f, 0x1.5f9832p-3f, 0x1.6fd442p-125f, 0.0f,
     0x1.bbcep-86f, 0x1.12716p-126f, 0x1.0bf258p-100f, 0x1.f08dp-124f, 0.0f, 0.0f,
     0x1.4b9d66p-9f, 0x1.3dea7ap-34f, 0.0f, 0.0f, 0.0f, 0x1.16345ap-111f, 0.0f,
     0x1.f74a66p-96f, 0.0f, 0x1.6dede4p-118f, 0x1.f72d8p-69f, 0.0f, 0x1.6815e8p-40f,
     0x1.66e8cap-27f, 0x1.70474p-89f, 0.0f, 0x1.c2d082p-100f, 0x1.63eba2p-95f, 0.0f,
     0x1.491552p-104f, 0x1.47089cp-76f, 0x1.871822p-74f, 0x1.6d9342p-99f, 0.0f, 0.0f,
     0x1.768438p-124f, 0.0f, 0x1.4a32b6p-70f, 0.0f, 0x1.dc0e5p-87f, 0.0f, 0.0f,
     0x1.bf0fe4p-65f, 0.0f, 0x1.aade12p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c90ecp-121f, 0.0f, 0.0f, 0x1.d6e44ep-20f, 0x1.d2a6d6p-44f, 0.0f, 0.0f,
     0x1.4e3fp-110f, 0.0f, 0x1.98fdccp-48f, 0.0f, 0.0f, 0x1.ad92aap-10f,
     0x1.93f98ep-93f, 0.0f, 0x1.9338f2p-81f, 0x1.5f1aep-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af17c6p-27f, 0.0f, 0x1.2f7d4ep-29f, 0x1.971a6ap-110f, 0x1.7d0acap-10f, 0.0f,
     0.0f, 0x1.bcba54p-48f, 0x1.2f10dp-79f, 0x1.34b59p-116f, 0x1.7ae17ep-14f, 0.0f,
     0x1.48aac2p-3f, 0x1.da6046p-104f, 0x1.da525ep-59f, 0x1.5a9b1p-46f, 0.0f,
     0x1.d4e9f4p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f7164p-77f, 0.0f,
     0x1.fb429cp-7f, 0x1.fbf644p-18f, 0.0f, 0.0f, 0.0f, 0x1.3fc3b4p-126f,
     0x1.02f0acp-14f, 0x1.821d92p-62f, 0x1.bd7aa4p-61f, 0.0f, 0x1.38e58ep-61f, 0.0f,
     0.0f, 0x1.655d2ap-124f, 0x1.400248p-86f, 0.0f, 0.0f, 0x1.f7fb42p-118f, 0.0f,
     0.0f, 0x1.ab9e54p-86f, 0x1.877fdcp-74f, 0x1.45f1ecp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2b261cp-56f, 0.0f, 0.0f, 0x1.1e443ep-72f, 0.0f, 0.0f,
     0x1.5e328cp-65f, 0.0f, 0.0f, 0.0f, 0x1.c696fp-108f, 0x1.c2d52ap-54f,
     0x1.3f2468p-43f, 0x1.418854p-17f, 0x1.13f29p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8a587ap-71f, 0.0f, 0.0f, 0x1.776eccp-85f, 0x1.044bp-110f, 0.0f,
     0x1.58955p-66f, 0.0f, 0.0f, 0.0f, 0x1.8b44dap-3f, 0.0f, 0x1.d00ba6p-79f,
     0x1.42ceb6p-55f, 0.0f, 0.0f, 0x1.52b0f8p-23f, 0.0f, 0x1.cbe20cp-25f,
     0x1.940024p-17f, 0x1.966ae2p-117f, 0.0f, 0x1.4f8e34p-77f, 0x1.9cad7cp-31f, 0.0f,
     0.0f, 0x1.5f4f14p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.024e74p-91f,
     0x1.2fc766p-28f, 0x1.72ac7ap-89f, 0.0f, 0.0f, 0x1.29b3dp-100f, 0.0f, 0.0f,
     0x1.25682cp-91f, 0.0f, 0.0f, 0x1.6c8d16p-83f, 0.0f, 0x1.cfecd8p-106f,
     0x1.63d016p-111f, 0.0f, 0x1.7bde0cp-42f, 0x1.ea7b64p-99f, 0.0f, 0.0f, 0.0f,
     0x1.66f366p-63f, 0.0f, 0x1.a28de6p-74f, 0.0f, 0x1.5edb88p-29f, 0.0f,
     0x1.c8cd4ep-17f, 0.0f, 0x1.ced26cp-114f, 0x1.feae2ep-44f, 0x1.7c673ep-105f, 0.0f,
     0x1p0f, 0x1.02ab1ep-91f, 0x1.0a7ef8p-62f, 0.0f, 0x1.ccb798p-112f,
     0x1.aa5006p-14f, 0x1.ce39c4p-98f, 0.0f, 0.0f, 0.0f, 0x1.1b97a8p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0965acp-31f, 0x1.e7f048p-63f, 0.0f, 0.0f, 0x1.b0a5fep-68f, 0.0f,
     0x1.4df8f2p-62f, 0x1.c8dbe6p-42f, 0x1.cd3854p-34f, 0.0f, 0x1.71d696p-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ccd4dep-59f, 0.0f, 0.0f, 0x1.a4aeeap-66f, 0.0f, 0.0f,
     0x1.33b0a6p-117f, 0x1.ec776ap-53f, 0x1.800034p-89f, 0x1.d3af64p-30f,
     0x1.838134p-114f, 0.0f, 0x1.8de6e2p-75f, 0.0f, 0x1.22aea4p-68f, 0.0f, 0.0f, 0.0f,
     0x1.c137p-57f, 0x1.69bcap-90f, 0x1.77f1acp-5f, 0.0f, 0x1.552cf4p-12f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bcb74ep-74f, 0.0f, 0x1.9ee564p-43f, 0x1.d329b6p-70f,
     0x1.15618p-30f, 0x1.5ac286p-70f, 0.0f, 0.0f, 0.0f, 0x1.8713cep-10f, 0.0f, 0.0f,
     0x1.94ee16p-105f, 0x1.e263e8p-15f, 0.0f, 0x1.770a48p-49f, 0x1.e7b4ep-100f, 0.0f,
     0x1.3838c6p-80f, 0.0f, 0x1.21b494p-26f, 0x1.83be34p-43f, 0.0f, 0x1.961eb8p-77f,
     0.0f, 0x1.60d002p-4f, 0x1.440e2cp-53f, 0x1.e11024p-8f, 0x1.a660bap-1f,
     0x1.21adfap-110f, 0x1.650432p-78f, 0x1.b50e02p-44f, 0x1.1dffbap-16f,
     0x1.ce386p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.482722p-97f, 0x1.6f556cp-126f,
     0.0f, 0x1.9f276ep-104f, 0x1.985a5cp-69f, 0.0f, 0x1.287b8cp-49f, 0.0f,
     0x1.3d938p-27f, 0x1.1c40ep-112f, 0x1.f45762p-59f, 0.0f, 0.0f, 0.0f,
     0x1.42adf6p-8f, 0.0f, 0x1.419582p-120f, 0x1.d79d24p-99f, 0x1.dd7732p-114f, 0.0f,
     0x1.c19dc8p-24f, 0x1.b720dcp-31f, 0.0f, 0.0f, 0.0f, 0x1.263d9ap-25f,
     0x1.66a6e4p-123f, 0.0f, 0.0f, 0x1.6d9d2ap-114f, 0x1.b3a0c8p-1f, 0.0f,
     0x1.cbd3f4p-70f, 0x1.d3d0f4p-51f, 0.0f, 0.0f, 0x1.595196p-31f, 0x1.6d7e2cp-101f,
     0.0f, 0x1.d6bf8ep-32f, 0.0f, 0x1.af03bap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a3eef4p-16f, 0x1.a8eda4p-2f, 0x1.e2e4aep-73f, 0x1.3ef5bep-98f,
     0x1.15c0cep-2f, 0.0f, 0.0f, 0x1.3d8cdp-105f, 0x1.c023dcp-72f, 0x1.54c3a4p-39f,
     0.0f, 0.0f, 0x1.63f68ap-67f, 0.0f, 0.0f, 0x1.ff403cp-2f, 0.0f, 0.0f,
     0x1.c6eefap-73f, 0x1.02b436p-23f, 0.0f, 0x1.cc77eap-70f, 0x1.854292p-126f,
     0x1.f10932p-116f, 0.0f, 0x1.f8eb6p-68f, 0x1.a6260ep-47f, 0x1.056a98p-57f, 0.0f,
     0x1.14cc9ap-73f, 0.0f, 0x1.787c4ep-12f, 0.0f, 0.0f, 0.0f, 0x1.ad938cp-11f, 0.0f,
     0.0f, 0x1.bfb03p-61f, 0x1.9a66eap-59f, 0.0f, 0x1.f819b4p-1f, 0.0f, 0.0f,
     0x1.310e36p-68f, 0.0f, 0.0f, 0.0f, 0x1.f1b4eap-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0b2b8p-107f, 0.0f, 0.0f, 0.0f, 0x1.26a398p-80f, 0.0f, 0x1.a5eb16p-20f, 0.0f,
     0x1.8aab8ap-45f, 0x1.216cb2p-58f, 0.0f, 0x1.7809cap-95f, 0x1.fdd1f2p-72f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e3f02p-82f, 0x1.a97c1ap-115f, 0.0f, 0x1.b42aa2p-74f,
     0x1.b4245p-47f, 0x1.30c74cp-41f, 0x1.770e2p-101f, 0.0f, 0x1.15c4e8p-75f,
     0x1.463dfp-4f, 0.0f, 0.0f, 0x1.73109ap-96f, 0x1.58a514p-100f, 0.0f, 0.0f,
     0x1.8143fap-15f, 0x1.411778p-27f, 0x1.0eb76ap-25f, 0x1.75f7dep-12f, 0.0f, 0.0f,
     0x1.e66742p-2f, 0x1.e19d06p-98f, 0x1.659dbcp-90f, 0.0f, 0x1.aec514p-99f, 0.0f,
     0x1.266ea8p-1f, 0x1.e617eap-37f, 0x1.1a8976p-116f, 0.0f, 0x1.365bb4p-47f,
     0x1.4e19cap-11f, 0x1.5c7886p-28f, 0.0f, 0.0f, 0x1.b2c238p-106f, 0x1.aa4ed2p-44f,
     0.0f, 0x1.1bcd0ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fff08p-29f,
     0x1.dfa6c8p-72f, 0x1.f0f144p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c05632p-125f,
     0.0f, 0x1.ac9004p-44f, 0.0f, 0x1.2ce0b2p-79f, 0x1.98592p-34f, 0x1.1e4f44p-83f,
     0.0f, 0x1.4c2ddcp-88f
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
            tmp1 = Sleef_finz_ceilf1_purecfma(tmp0);
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
    printf("Sleef_finz_ceilf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ceilf1_purecfma bench acc %a\n", global_bench_acc);
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
