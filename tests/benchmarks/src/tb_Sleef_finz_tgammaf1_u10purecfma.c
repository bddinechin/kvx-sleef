/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammaf1_u10purecfma.c --function \
 *     Sleef_finz_tgammaf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.530bfcp-7f, 0.0f, 0.0f, 0x1.9e3826p-89f,
     0x1.3bcc22p-122f, 0.0f, 0x1.5a2022p-98f, 0.0f, 0x1.35511ep-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e48c8cp-33f, 0.0f, 0.0f, 0.0f, 0x1.94fe7ap-76f, 0x1.6dd7a2p-54f,
     0.0f, 0.0f, 0x1.04063ap-92f, 0.0f, 0x1.d7fc5p-116f, 0.0f, 0x1.b04014p-48f, 0.0f,
     0.0f, 0.0f, 0x1.20375ap-115f, 0.0f, 0x1.6c332ap-61f, 0x1.7f502ep-37f,
     0x1.21d0d4p-2f, 0x1.f6b0b6p-48f, 0x1.e780a4p-53f, 0x1.822254p-60f,
     0x1.d31024p-102f, 0x1.39c20ep-84f, 0x1.f182dep-49f, 0x1.556106p-54f, 0.0f,
     0x1.bfc14p-36f, 0.0f, 0x1.10805ap-110f, 0x1.b6e2f8p-124f, 0x1.eb7252p-66f,
     0x1.bbfa5ep-114f, 0x1.c0b6eep-26f, 0.0f, 0.0f, 0.0f, 0x1.2a9b92p-4f, 0.0f, 0.0f,
     0.0f, 0x1.f8a034p-88f, 0.0f, 0.0f, 0.0f, 0x1.bee81p-8f, 0.0f, 0.0f,
     0x1.4bfa06p-17f, 0x1.8937e8p-3f, 0.0f, 0x1.e2c726p-2f, 0x1.a42cb2p-100f,
     0x1.8510d6p-115f, 0x1.999898p-120f, 0x1.5fb39p-38f, 0.0f, 0.0f, 0x1.932008p-81f,
     0.0f, 0x1.29cabep-125f, 0x1.66b87ep-77f, 0x1.b5f262p-111f, 0.0f, 0.0f, 0.0f,
     0x1.877ce8p-93f, 0x1.8a2838p-109f, 0x1.27d8f2p-37f, 0.0f, 0x1.e3c306p-91f,
     0x1.c636f6p-26f, 0x1.a2ca92p-72f, 0.0f, 0.0f, 0x1.a85c98p-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ceb4bcp-30f, 0x1.00b998p-107f, 0x1.493d22p-3f, 0x1.5cbcaep-121f,
     0x1.ae0314p-9f, 0.0f, 0.0f, 0x1.cf3636p-29f, 0x1.650d3ep-10f, 0x1.3a608ap-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.573b7cp-91f, 0.0f, 0.0f, 0x1.46e7bap-72f,
     0x1.9b716cp-65f, 0x1.648b04p-1f, 0.0f, 0x1.aac81cp-98f, 0.0f, 0x1.9004cep-102f,
     0x1.0f00f2p-34f, 0x1.c3a24ap-22f, 0.0f, 0.0f, 0x1.6fcaep-11f, 0.0f,
     0x1.3f2be8p-61f, 0x1.a5799ap-47f, 0x1.e95d76p-38f, 0x1.75a48ep-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.98912ep-90f, 0x1.cd3288p-11f, 0.0f, 0x1.1068d8p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3984fap-61f, 0.0f, 0x1.340198p-95f, 0x1.db8e6cp-37f,
     0x1.3cb07p-61f, 0.0f, 0.0f, 0x1.5cd8d8p-44f, 0.0f, 0.0f, 0x1p0f, 0x1.3553ep-9f,
     0x1.1b68b2p-103f, 0x1.33e92p-17f, 0.0f, 0.0f, 0x1.cd72eap-23f, 0.0f, 0.0f, 0.0f,
     0x1.c7eaf6p-18f, 0x1.50ea6ap-8f, 0.0f, 0.0f, 0x1.a2d8fcp-73f, 0.0f,
     0x1.74a91ap-45f, 0x1.71d406p-38f, 0.0f, 0.0f, 0.0f, 0x1.dbb0d6p-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a33276p-21f, 0x1.7702e6p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91b4eep-55f, 0x1.201756p-29f, 0.0f, 0.0f, 0x1.d8d0acp-105f, 0x1.926d22p-126f,
     0x1.3b3a9ep-75f, 0x1.0ce334p-109f, 0x1.88d564p-112f, 0x1.22c776p-13f,
     0x1.5856eep-70f, 0.0f, 0.0f, 0x1.c3afc4p-80f, 0x1.7b4ad2p-107f, 0.0f, 0.0f,
     0x1.11de9ap-98f, 0x1.a604bp-103f, 0.0f, 0x1.5992ccp-95f, 0.0f, 0x1.d45e46p-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d11622p-40f, 0.0f, 0x1.1da85ep-110f, 0.0f, 0.0f,
     0.0f, 0x1.7c7b28p-111f, 0.0f, 0.0f, 0.0f, 0x1.21f91p-50f, 0.0f, 0.0f,
     0x1.1ea424p-89f, 0x1.b73c74p-97f, 0x1.ed64e6p-20f, 0x1.feb39ap-36f,
     0x1.7c30ecp-56f, 0x1.9f5632p-16f, 0x1.a052aep-12f, 0x1.d94884p-43f, 0.0f,
     0x1.23c226p-62f, 0x1.5f69cap-33f, 0x1.c0cac8p-48f, 0x1.0c48b8p-70f,
     0x1.0b3cbcp-59f, 0x1.a51e9p-51f, 0x1.06d13ep-77f, 0x1.22f614p-12f,
     0x1.37290ep-66f, 0.0f, 0.0f, 0x1.00dd8ap-42f, 0x1.dcf95cp-35f, 0.0f,
     0x1.bc87aap-32f, 0.0f, 0x1.ea8d08p-17f, 0x1.d48bdp-52f, 0x1.4c2deap-110f,
     0x1.1ba008p-110f, 0x1.f985ecp-101f, 0x1.bf19b2p-125f, 0x1.1d535p-19f,
     0x1.fd7e02p-5f, 0x1.3acb0cp-21f, 0.0f, 0x1.7e0f14p-113f, 0x1.c628c4p-28f, 0.0f,
     0x1.ef0d1ep-5f, 0x1.32b96cp-74f, 0.0f, 0.0f, 0x1.8167cep-69f, 0.0f, 0.0f, 0.0f,
     0x1.adfb06p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75a3cap-14f, 0.0f,
     0.0f, 0.0f, 0x1.b592ap-37f, 0x1.444854p-3f, 0x1.8bf8e4p-42f, 0x1.fb38ep-22f,
     0x1.9ed8a8p-24f, 0x1.49c6d4p-60f, 0x1.8b0efcp-95f, 0.0f, 0.0f, 0.0f,
     0x1.9cdddap-22f, 0.0f, 0.0f, 0.0f, 0x1.aebdd4p-25f, 0.0f, 0x1.aef7f8p-115f,
     0x1.d350fp-59f, 0.0f, 0x1.579664p-26f, 0x1.716cfap-21f, 0.0f, 0x1.840526p-114f,
     0x1.3883aep-6f, 0.0f, 0.0f, 0x1.9e346cp-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa8a8ep-16f, 0x1.eec756p-66f, 0x1.21f43ap-37f, 0x1.199274p-8f, 0.0f, 0.0f,
     0.0f, 0x1.a16c4ap-116f, 0.0f, 0x1.a6dfd6p-40f, 0.0f, 0x1.ce4eeap-11f, 0.0f,
     0x1.4c1a8cp-14f, 0x1.0be412p-35f, 0.0f, 0x1.73c098p-58f, 0x1.cd3092p-43f,
     0x1.98bec2p-15f, 0x1.ea0212p-15f, 0x1.1a6cf8p-35f, 0.0f, 0.0f, 0.0f,
     0x1.c0afd4p-1f, 0.0f, 0x1.3cc9e2p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77b4b4p-97f, 0x1.ca43d2p-85f, 0x1.87d5aap-49f, 0.0f, 0x1.58ad5ep-62f,
     0x1.b2b19ep-63f, 0.0f, 0.0f, 0.0f, 0x1.0ddf38p-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3240eap-81f, 0x1.6fdb5p-42f, 0.0f, 0.0f, 0x1.ca5c3ap-37f, 0x1.98eb54p-90f,
     0x1.ceb11cp-66f, 0x1.4617c8p-59f, 0x1.10a186p-23f, 0.0f, 0x1.91dd7cp-88f,
     0x1.ef4ed6p-62f, 0x1.1fff38p-114f, 0x1.d28212p-33f, 0x1.0a877p-11f, 0.0f,
     0x1.e19d1ep-77f, 0x1.40541p-34f, 0x1.98113ep-32f, 0x1.d62d0ap-6f, 0.0f,
     0x1.ba97f6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d5524p-43f, 0.0f, 0.0f,
     0x1.31cef4p-49f, 0x1.b13d86p-78f, 0x1.d196ep-57f, 0.0f, 0x1.4a6a9ap-60f, 0.0f,
     0x1.b269fep-70f, 0.0f, 0.0f, 0x1.c13514p-96f, 0.0f, 0x1.69e068p-126f,
     0x1.845e78p-4f, 0.0f, 0.0f, 0.0f, 0x1.302b0ep-68f, 0x1.d3f28p-75f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.12a2dp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a9d8p-5f,
     0.0f, 0.0f, 0x1.f8e7c4p-86f, 0x1.03f934p-93f, 0x1p0f, 0x1.58cffep-117f, 0.0f,
     0x1.e3661p-24f, 0x1.8d5c2ap-4f, 0x1.755d1p-36f, 0.0f, 0x1.493dccp-34f, 0.0f,
     0x1.542dbp-62f, 0.0f, 0.0f, 0.0f, 0x1.4239e8p-2f, 0x1.e95298p-18f, 0.0f, 0.0f,
     0x1.b1d2aep-57f, 0x1.a69394p-105f, 0x1.1a8472p-86f, 0x1.a78ffep-69f,
     0x1.d6ee2ap-86f, 0x1.7b6828p-47f, 0.0f, 0.0f, 0.0f, 0x1.c2cf42p-30f,
     0x1.dfd4b6p-12f, 0x1.6a2dd8p-42f, 0.0f, 0.0f, 0x1.4b7c92p-65f, 0.0f, 0.0f,
     0x1.45def2p-77f, 0.0f, 0x1.8b1b72p-31f, 0.0f, 0.0f, 0x1.c603eap-23f,
     0x1.0b59c8p-100f, 0x1.8a5d2ep-40f, 0x1.714198p-69f, 0x1.be6102p-21f, 0.0f, 0.0f,
     0x1.68844p-118f, 0.0f, 0x1.c88e96p-19f, 0x1.905b5p-90f, 0x1.313e6cp-53f, 0.0f,
     0.0f, 0x1.6026fp-100f, 0x1.4b7734p-62f, 0x1.704cb6p-12f, 0.0f, 0.0f,
     0x1.19b9ecp-83f, 0.0f, 0x1.d3357ap-120f, 0x1.001a66p-121f, 0.0f, 0.0f,
     0x1.4c5466p-21f, 0.0f, 0x1.d1f4cp-77f, 0.0f, 0.0f, 0.0f, 0x1.be3e26p-29f,
     0x1.00e4ap-105f, 0.0f, 0x1.cf90f2p-111f, 0.0f, 0x1.3f01e6p-30f, 0.0f,
     0x1.f00ca6p-65f, 0.0f, 0.0f, 0.0f, 0x1.5ca9b2p-69f, 0x1.ecd47cp-80f,
     0x1.af2974p-39f, 0x1.a8632cp-43f, 0.0f, 0.0f, 0.0f, 0x1.3fa99p-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5de464p-27f, 0x1.6ae23ep-122f, 0x1.b5dcdap-60f, 0x1.5586p-50f,
     0.0f, 0.0f, 0x1.38599p-84f, 0.0f, 0.0f, 0x1.7d6aep-7f, 0x1.54cfc8p-72f, 0.0f,
     0x1.0574b4p-14f, 0x1.14b922p-99f, 0x1.91a462p-109f, 0x1.1e655ap-88f,
     0x1.f5da4p-115f, 0.0f, 0x1.e9349ap-125f, 0x1.049d8p-120f, 0x1.6cba52p-37f,
     0x1.2be37cp-109f, 0x1.6990eep-21f, 0x1.04c74ap-65f, 0.0f, 0x1.380b28p-103f,
     0x1.40c0c2p-54f, 0.0f, 0.0f, 0.0f, 0x1.cb59a2p-20f, 0x1p0f, 0x1.b63aeep-74f,
     0.0f, 0.0f, 0.0f, 0x1.5bf3d4p-64f, 0.0f, 0x1.54ee2p-24f, 0.0f, 0.0f,
     0x1.a73b3p-114f, 0x1.4f36fap-70f, 0x1.a25e8p-123f, 0x1.cc9dcp-124f, 0.0f,
     0x1.21a952p-120f, 0x1.db327p-90f, 0x1.68f50ap-43f, 0.0f, 0x1.ba1cf4p-97f,
     0x1.244f1p-72f, 0.0f, 0x1.ea8434p-56f, 0.0f, 0.0f, 0x1.6e389ap-30f, 0.0f, 0.0f,
     0.0f, 0x1.45e184p-11f, 0x1.303306p-25f, 0.0f, 0.0f, 0x1.b4bdc6p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a1164p-121f, 0x1.d78f6p-45f, 0.0f, 0.0f, 0.0f, 0x1.a99d2cp-55f,
     0.0f, 0x1.eb5d36p-69f, 0.0f, 0x1.2ac0b8p-88f, 0.0f, 0x1.80aac4p-11f,
     0x1.348aa6p-96f, 0x1.7a2f7ap-33f, 0x1.26d2acp-28f, 0x1.48ef48p-31f,
     0x1.245c66p-16f, 0.0f, 0x1.9321dep-14f, 0.0f, 0.0f, 0.0f, 0x1.dd70ccp-74f, 0.0f,
     0x1.12bebcp-21f, 0.0f, 0.0f, 0.0f, 0x1.4d9e44p-84f, 0.0f, 0x1.1f7e6cp-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f707p-20f, 0.0f, 0x1.91f032p-34f, 0.0f, 0.0f,
     0x1.a95506p-89f, 0x1.5d7bcap-36f, 0x1.efcda2p-13f, 0x1.a007b8p-5f,
     0x1.12443p-90f, 0x1.cb4a66p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b81696p-64f, 0.0f,
     0x1.562ccp-21f, 0.0f, 0x1.fee226p-73f, 0.0f, 0.0f, 0.0f, 0x1.9d945cp-88f, 0.0f,
     0.0f, 0.0f, 0x1.7ab3a8p-108f, 0x1.05baa8p-99f, 0x1.bd837cp-9f, 0x1.929c8ep-4f,
     0x1.39d984p-3f, 0.0f, 0.0f, 0x1.6dfeb8p-62f, 0x1.89b90ap-63f, 0x1.bc614cp-33f,
     0x1.113cfcp-54f, 0.0f, 0.0f, 0x1.aa3a3cp-59f, 0x1.885c44p-105f, 0.0f, 0.0f,
     0x1.eee142p-35f, 0x1.ef07p-41f, 0x1.9653bap-68f, 0x1.5121p-84f, 0x1.9c71c4p-100f,
     0x1.eb647cp-65f, 0.0f, 0.0f, 0x1.896732p-50f, 0.0f, 0x1.1476aap-66f,
     0x1.660d1ep-103f, 0x1.bc308p-18f, 0x1.b46c92p-56f, 0x1.c120f4p-47f,
     0x1.af1f4p-41f, 0.0f, 0.0f, 0x1.542998p-36f, 0.0f, 0.0f, 0.0f, 0x1.e301f8p-41f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9a1c5ap-121f, 0.0f,
     0.0f, 0x1.654bbap-22f, 0.0f, 0.0f, 0x1.c5d57cp-25f, 0.0f, 0x1.cf86e8p-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7f422p-114f, 0.0f, 0x1.798c74p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0cc1b4p-40f, 0.0f, 0.0f, 0x1.a0e5eep-112f, 0.0f, 0.0f,
     0x1.281a26p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78653p-17f, 0x1.4505b2p-26f,
     0x1.6a1594p-66f, 0.0f, 0.0f, 0x1.e489e6p-115f, 0x1.24d076p-85f, 0x1.bd2782p-48f,
     0.0f, 0x1.538504p-12f, 0.0f, 0x1.5f1c3ap-74f, 0x1.a7f64ep-35f, 0x1.52574ap-111f,
     0x1.6e6cd2p-44f, 0x1.ce0b6cp-110f, 0x1.f518fep-117f, 0x1.fb2688p-64f,
     0x1.9a7736p-89f, 0.0f, 0.0f, 0.0f, 0x1.38a14cp-117f, 0.0f, 0x1.174428p-71f, 0.0f,
     0x1.a78bp-72f, 0x1.6b8736p-4f, 0.0f, 0x1.970c2cp-95f, 0x1.0f7ba4p-85f, 0.0f,
     0.0f, 0.0f, 0x1.956aacp-89f, 0.0f, 0x1.311a28p-34f, 0x1.bb0ecep-47f, 0.0f,
     0x1.f00366p-125f, 0x1.d5465ap-101f, 0x1.f1c8cap-126f, 0.0f, 0x1.12a738p-102f,
     0.0f, 0.0f, 0x1.b0b42ep-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83b9ecp-67f,
     0x1.8a4474p-77f, 0x1.82108p-19f, 0x1.9163c4p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3dea72p-93f, 0.0f, 0x1.506d3ep-36f, 0.0f,
     0x1.96a7bp-98f, 0.0f, 0.0f, 0x1.95e8dep-26f, 0.0f, 0x1.b1ed72p-59f,
     0x1.885c3p-71f, 0x1.e11b48p-21f, 0x1.3018ep-111f, 0x1.1273a4p-92f,
     0x1.9547fp-27f, 0x1.f1cbaap-105f, 0x1.0f6056p-124f, 0.0f, 0x1.a62b6cp-40f, 0.0f,
     0x1.0081a2p-113f, 0x1.a07458p-88f, 0x1.1717cep-97f, 0x1.01605ep-77f, 0.0f,
     0x1.de8448p-59f, 0x1.31a3ap-32f, 0.0f, 0x1.704c8p-88f, 0x1.055ac4p-104f,
     0x1.dd757ap-19f, 0.0f, 0x1.ccfe9ep-1f, 0x1.c65f64p-41f, 0x1.43fddep-47f, 0.0f,
     0.0f, 0x1.093eacp-43f, 0.0f, 0x1.a70e18p-16f, 0.0f, 0x1.1fada2p-1f, 0.0f,
     0x1.680af6p-69f, 0.0f, 0.0f, 0x1.f05cacp-106f, 0.0f, 0.0f, 0x1.1d1f22p-115f,
     0x1.580f0ap-30f, 0.0f, 0x1.27c366p-111f, 0.0f, 0x1.46ecbp-41f, 0x1.2f1386p-104f,
     0.0f, 0x1p0f, 0.0f, 0x1.99ae0cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db2f14p-109f, 0x1.103714p-34f, 0.0f, 0.0f, 0x1.447c12p-81f, 0x1.e71d34p-71f,
     0.0f, 0.0f, 0x1.2758e4p-94f, 0.0f, 0x1.444c94p-96f, 0x1.3e5652p-93f, 0.0f, 0.0f,
     0.0f, 0x1.9cb8fep-58f, 0x1.836fccp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.691fd4p-17f, 0x1.77e7cep-22f, 0.0f, 0x1.678a28p-47f, 0x1.119204p-16f, 0.0f,
     0.0f, 0x1.22b76ap-112f, 0.0f, 0x1.e3f7a4p-8f, 0x1.5f504p-32f, 0x1.40b038p-109f,
     0x1.3b2d3ap-12f, 0x1.379d7p-10f, 0x1.b6b6d4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4230a2p-110f, 0x1.062ac6p-83f, 0.0f, 0.0f, 0.0f, 0x1.2724ccp-75f,
     0x1.60582ep-60f, 0x1.2a5e0cp-15f, 0x1.b50b66p-2f, 0.0f, 0.0f, 0x1.dfbe8ap-24f,
     0.0f, 0.0f, 0.0f, 0x1.970142p-68f, 0x1.397296p-97f, 0.0f, 0x1.d796a2p-26f, 0.0f,
     0.0f, 0.0f, 0x1.a0fbd8p-42f, 0.0f, 0.0f, 0.0f, 0x1.aa4e1ap-71f, 0x1.3ec98p-37f,
     0.0f, 0.0f, 0x1.cd7d5ep-44f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.8e4702p-7f, 0.0f,
     0.0f, 0x1.da8cc2p-116f, 0x1.ddd584p-92f, 0x1.936316p-33f, 0x1.6c06aep-115f, 0.0f,
     0.0f, 0x1.48febap-1f, 0.0f, 0.0f, 0.0f, 0x1.1201b8p-98f, 0x1.038fd8p-126f,
     0x1.e764a8p-46f, 0x1.891836p-84f, 0x1.ccac3p-108f, 0x1.57d2dep-101f,
     0x1.a0af34p-54f, 0.0f, 0.0f, 0x1.7f3616p-64f, 0x1.d103bep-62f, 0x1.2a4442p-54f,
     0.0f, 0.0f, 0x1.32a39ep-103f, 0.0f, 0x1.41097cp-58f, 0x1.145114p-113f,
     0x1.ed3ecp-90f, 0.0f, 0x1.547a24p-117f, 0.0f, 0x1.47a436p-111f, 0.0f, 0.0f,
     0x1.557b12p-36f, 0x1.47c7bep-98f, 0x1.441beap-102f, 0.0f, 0.0f, 0.0f,
     0x1.1bddfp-23f, 0x1.43b4b4p-61f, 0x1.41ee7cp-12f, 0x1.ec8c46p-73f,
     0x1.b431aep-44f, 0.0f, 0.0f, 0x1.d723fep-109f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_tgammaf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tgammaf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tgammaf1_u10purecfma bench acc %a\n", global_bench_acc);
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
