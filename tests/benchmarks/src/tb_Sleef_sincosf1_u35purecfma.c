/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf1_u35purecfma.c --function \
 *     Sleef_sincosf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.ac477ap-87f, 0x1.bac218p-19f, 0x1.b4e072p-48f, 0.0f, 0x1.bb2e32p-99f,
     0x1.d80764p-68f, 0x1.93a1dcp-115f, 0x1.ad6584p-9f, 0x1.b1e916p-47f, 0.0f,
     0x1.88ecf4p-108f, 0.0f, 0x1.672e0ap-96f, 0x1.2dd42ep-24f, 0x1.dd883ep-44f,
     0x1.592fdap-70f, 0x1.d7ecc6p-41f, 0x1.73bb52p-46f, 0.0f, 0.0f, 0.0f,
     0x1.09bb94p-102f, 0.0f, 0.0f, 0x1.465708p-120f, 0.0f, 0x1.31e79cp-125f, 0.0f,
     0.0f, 0.0f, 0x1.c4e7bep-93f, 0.0f, 0.0f, 0.0f, 0x1.daa5fap-69f, 0.0f,
     0x1.7f2ab8p-64f, 0.0f, 0x1.201da8p-95f, 0x1.91cfa6p-89f, 0.0f, 0.0f,
     0x1.81a436p-28f, 0.0f, 0x1.b770dcp-58f, 0.0f, 0.0f, 0x1.4e602cp-1f, 0.0f, 0.0f,
     0x1.dd2dbap-119f, 0x1.45daaap-35f, 0.0f, 0x1.a84142p-47f, 0x1.195f48p-58f,
     0x1.7da57ap-49f, 0.0f, 0x1.c3010ep-92f, 0.0f, 0.0f, 0x1.41b0fap-107f,
     0x1.eb8abap-70f, 0x1.20f7e2p-75f, 0x1.783e1cp-76f, 0.0f, 0x1.d36f04p-102f, 0.0f,
     0x1.a0e5a4p-47f, 0x1.ec0b6cp-83f, 0x1.2bffecp-74f, 0x1.cc1ef6p-121f, 0.0f,
     0x1.3548b6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bf482p-69f, 0x1.02a4p-48f,
     0.0f, 0x1.f41734p-102f, 0x1.dc87f2p-43f, 0.0f, 0x1.31cb12p-67f, 0.0f,
     0x1.72d132p-48f, 0x1.aea808p-42f, 0x1.40855p-96f, 0.0f, 0.0f, 0x1.c65e52p-87f,
     0.0f, 0.0f, 0.0f, 0x1.8a6f56p-11f, 0x1.be0066p-10f, 0x1.7b459ap-95f,
     0x1.3df8fcp-22f, 0x1.2b9b4p-92f, 0.0f, 0.0f, 0.0f, 0x1.f8315ap-66f,
     0x1.e5becep-32f, 0.0f, 0x1.ac6fcap-74f, 0x1.9902fep-9f, 0x1.240822p-116f, 0.0f,
     0x1.baa69ap-59f, 0x1.44456ep-39f, 0.0f, 0x1.2fcc7cp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2de43ep-71f, 0x1.4eff26p-50f, 0x1.bf38c2p-122f, 0.0f, 0.0f, 0x1.bdd7cap-59f,
     0x1.299f1cp-20f, 0.0f, 0.0f, 0x1.20c36ep-27f, 0x1.4fe896p-84f, 0x1.39b82ap-96f,
     0x1.1bef36p-12f, 0x1.e5c66ap-112f, 0x1.4796c2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b92c2ap-123f, 0.0f, 0.0f, 0x1.7c12a6p-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5b544ep-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.122e9ap-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a0146p-12f, 0.0f, 0x1.fc87b8p-60f, 0.0f, 0x1.dbc644p-15f,
     0x1.3e5272p-60f, 0.0f, 0.0f, 0x1.a5bf84p-107f, 0x1.b65ae6p-32f, 0x1.8f3e8ep-82f,
     0x1.6e29fcp-34f, 0x1.bd8dfep-54f, 0x1.98e42ap-5f, 0.0f, 0.0f, 0x1.a30dd2p-73f,
     0x1.e3bba8p-41f, 0x1.c2d5bp-77f, 0.0f, 0x1.4a6356p-54f, 0x1.b40d7p-44f,
     0x1.2d4926p-62f, 0x1.fcc9b6p-29f, 0x1.ac1f88p-79f, 0x1.1f3fb4p-111f, 0.0f, 0.0f,
     0x1.827598p-91f, 0.0f, 0x1.9861fap-112f, 0.0f, 0x1.080588p-45f, 0.0f, 0.0f, 0.0f,
     0x1.65bfecp-61f, 0x1.539264p-58f, 0.0f, 0x1.46555cp-35f, 0.0f, 0.0f,
     0x1.b424cep-10f, 0x1.daa96p-101f, 0x1.c25b8ep-72f, 0.0f, 0x1.dc60a6p-102f,
     0x1.34466cp-23f, 0.0f, 0.0f, 0.0f, 0x1.bee6fep-77f, 0x1.369438p-13f, 0.0f,
     0x1.8db0f6p-101f, 0.0f, 0x1.3b9f36p-5f, 0.0f, 0.0f, 0x1.471398p-2f, 0.0f,
     0x1.bf4ef4p-9f, 0.0f, 0x1.5996e6p-36f, 0x1.ab316p-7f, 0.0f, 0x1.a3c996p-91f,
     0x1.f11c88p-69f, 0.0f, 0.0f, 0.0f, 0x1.bf12a8p-22f, 0.0f, 0.0f, 0x1.402ec2p-51f,
     0.0f, 0.0f, 0x1.b9571cp-84f, 0.0f, 0x1.a634f4p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff79fcp-124f, 0.0f, 0.0f, 0x1.f5c7f2p-72f, 0x1.91df26p-109f, 0.0f, 0.0f,
     0.0f, 0x1.0c4e0cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e62386p-124f, 0.0f, 0x1.ad006ep-123f, 0x1.384684p-124f, 0.0f, 0.0f,
     0x1.09658p-78f, 0x1.83f828p-117f, 0x1.b7f3b2p-103f, 0.0f, 0.0f, 0.0f,
     0x1.7917p-85f, 0x1.283e6ep-122f, 0.0f, 0.0f, 0x1.81ca6ep-22f, 0x1.37cf1p-24f,
     0x1.b3cb3cp-73f, 0.0f, 0x1.989814p-99f, 0.0f, 0.0f, 0.0f, 0x1.82919p-59f,
     0x1.b64cc6p-7f, 0x1.6c7ebp-52f, 0x1.d0243ap-80f, 0.0f, 0.0f, 0x1.4b10e4p-30f,
     0.0f, 0.0f, 0.0f, 0x1.9a2dd6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1fa994p-99f, 0.0f,
     0.0f, 0.0f, 0x1.4dd432p-8f, 0.0f, 0.0f, 0x1.90eb94p-31f, 0x1.1d5f08p-72f, 0.0f,
     0x1.51b29p-46f, 0.0f, 0.0f, 0x1.912e92p-114f, 0.0f, 0x1.4e05aep-83f, 0.0f,
     0x1.b3568ap-34f, 0x1.bb0ef4p-80f, 0x1.4e629ap-25f, 0x1.c8c6c6p-47f,
     0x1.bf77eep-14f, 0x1.9b7868p-16f, 0x1.fa5e88p-101f, 0.0f, 0.0f, 0x1.c137f8p-115f,
     0.0f, 0x1.81c13cp-98f, 0.0f, 0.0f, 0.0f, 0x1.e4fafap-8f, 0.0f, 0x1.d631d6p-47f,
     0.0f, 0.0f, 0x1.7c5afep-47f, 0x1.e1c802p-87f, 0.0f, 0x1.715574p-63f, 0.0f,
     0x1.c0cb86p-87f, 0.0f, 0x1.42abe6p-105f, 0x1.a40bccp-111f, 0x1.3ed6b8p-27f, 0.0f,
     0x1.4e7904p-77f, 0x1.10e7d6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b4e7ap-89f, 0.0f,
     0.0f, 0.0f, 0x1.90a4bap-83f, 0.0f, 0x1.88a63p-12f, 0x1.dda2eep-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.40df8ep-19f, 0.0f, 0x1.508d52p-79f, 0x1.cab02ap-32f,
     0x1.a0931cp-77f, 0.0f, 0x1.ae2e3ep-44f, 0x1.a38278p-12f, 0x1.9897e2p-69f, 0.0f,
     0.0f, 0.0f, 0x1.793b9ap-9f, 0x1.e3142cp-13f, 0.0f, 0x1.aa13ep-115f, 0.0f, 0.0f,
     0.0f, 0x1.4fbc58p-58f, 0x1.aa7662p-15f, 0x1.be940cp-120f, 0x1.a49694p-51f,
     0x1.9577aep-26f, 0.0f, 0.0f, 0.0f, 0x1.6973cp-118f, 0.0f, 0x1.5c2f9cp-108f,
     0x1.3c9756p-12f, 0x1.a26214p-119f, 0.0f, 0.0f, 0x1.173caap-31f, 0x1.53f76cp-121f,
     0x1.8128cap-57f, 0x1.a2e8ccp-33f, 0x1.05a0e6p-75f, 0x1.d77048p-50f, 0.0f,
     0x1.d6a77ep-116f, 0x1.b0790ep-59f, 0x1.441b36p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.941ffep-32f, 0.0f, 0.0f, 0x1.40e31p-33f, 0.0f, 0x1.04ab2ep-79f, 0.0f,
     0x1.37219cp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2016ep-59f, 0.0f, 0.0f,
     0x1.ca5186p-61f, 0.0f, 0x1.077058p-12f, 0x1.ba6d48p-125f, 0x1.da8332p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c74bc2p-40f,
     0x1.266eap-33f, 0x1.0cd33ap-42f, 0x1.f6e154p-35f, 0.0f, 0x1.bfeaeep-29f,
     0x1.8ab8eap-118f, 0x1.e1c3ecp-48f, 0x1.02fb64p-99f, 0x1.ab294p-116f,
     0x1.58e642p-21f, 0.0f, 0x1.199ebcp-94f, 0x1.af8a6p-59f, 0.0f, 0.0f, 0.0f,
     0x1.b03df6p-118f, 0x1.3ed552p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.abbdf6p-54f, 0.0f, 0x1.42a01ap-34f, 0x1.b92c68p-5f, 0.0f, 0.0f,
     0x1.6d1176p-116f, 0x1.2bd52ap-26f, 0x1.815c4ep-34f, 0.0f, 0x1.a1a412p-37f,
     0x1.633c1cp-111f, 0.0f, 0x1.5ede16p-101f, 0.0f, 0.0f, 0x1.4800b4p-64f, 0.0f,
     0.0f, 0.0f, 0x1.8a5224p-87f, 0x1.026c7cp-1f, 0x1.e6ec6ap-22f, 0x1.f2e77ep-95f,
     0.0f, 0x1.422a3cp-9f, 0.0f, 0.0f, 0x1.95652ap-50f, 0x1.6084dp-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29f254p-67f, 0x1.95b3cep-25f, 0x1.a35ce6p-125f,
     0x1.d14804p-15f, 0x1.1c60cep-34f, 0x1.6d078ep-109f, 0.0f, 0x1.df57b6p-6f, 0.0f,
     0x1.0afe0ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ae67d8p-112f, 0x1.ed788cp-5f,
     0x1.c0906ep-13f, 0x1.c027cep-102f, 0.0f, 0x1.276496p-78f, 0.0f, 0x1.b9964cp-103f,
     0.0f, 0x1.a734d4p-89f, 0.0f, 0x1.9e0318p-33f, 0.0f, 0x1.1839cep-96f, 0.0f,
     0x1.eab1fap-18f, 0.0f, 0x1.30a144p-70f, 0.0f, 0.0f, 0x1.8cef76p-18f,
     0x1.9874d6p-55f, 0.0f, 0.0f, 0.0f, 0x1.84fac6p-13f, 0.0f, 0x1.b26e8cp-81f, 0.0f,
     0.0f, 0.0f, 0x1.11ba28p-70f, 0x1.769a52p-25f, 0x1.eab5ap-45f, 0x1.1e9cp-97f,
     0x1.83584ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cb9b8p-62f, 0.0f,
     0x1.9c44ecp-58f, 0x1.39a07p-38f, 0x1.03f166p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5097e2p-79f, 0.0f, 0.0f, 0x1.1e8892p-65f,
     0x1.f2153p-64f, 0.0f, 0x1.696a74p-86f, 0.0f, 0.0f, 0.0f, 0x1.4db67ap-118f, 0.0f,
     0x1.b4d3fcp-1f, 0x1.625a5cp-24f, 0.0f, 0x1.ba605p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12a1fap-94f, 0.0f, 0.0f, 0x1.f5499cp-62f, 0.0f, 0x1.968568p-123f, 0.0f, 0.0f,
     0x1.c41d6p-87f, 0x1.27fcap-10f, 0x1.853f7p-38f, 0x1.7f1e9p-97f, 0x1.d82bccp-44f,
     0x1.1aee5p-13f, 0.0f, 0x1.009c9ap-124f, 0.0f, 0x1.225bcap-113f, 0.0f, 0.0f,
     0x1.fb9744p-100f, 0.0f, 0x1.42b21ep-86f, 0.0f, 0x1.104964p-126f,
     0x1.b55fbep-115f, 0.0f, 0x1.258f1ap-115f, 0.0f, 0x1.7d4bb8p-74f, 0.0f,
     0x1.01b232p-41f, 0.0f, 0.0f, 0x1.94fd66p-88f, 0.0f, 0x1.148898p-119f,
     0x1.c22458p-30f, 0x1.bb9376p-119f, 0x1.0ea7fep-113f, 0.0f, 0x1.8b861p-107f, 0.0f,
     0.0f, 0.0f, 0x1.b2e7fcp-19f, 0x1.a6faeep-117f, 0x1.8dbdbcp-29f, 0x1.c7276ap-43f,
     0x1.c9d1a4p-46f, 0.0f, 0x1.8c81ap-121f, 0x1.a0c4b6p-1f, 0x1.befa48p-105f,
     0x1.27228ap-36f, 0.0f, 0x1.c3111p-81f, 0.0f, 0.0f, 0.0f, 0x1.4c290ap-84f, 0.0f,
     0x1.c6ea06p-25f, 0x1.82c546p-118f, 0x1.36ae8ep-111f, 0.0f, 0.0f, 0.0f,
     0x1.57ae76p-34f, 0x1.92ebep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8cb458p-51f, 0.0f,
     0x1.246a2p-90f, 0x1.76f23p-15f, 0x1.a3b2e2p-50f, 0x1.40fe24p-51f,
     0x1.733f26p-41f, 0.0f, 0.0f, 0.0f, 0x1.7e2c1cp-49f, 0x1.05fa4p-34f,
     0x1.33695cp-2f, 0x1p0f, 0x1.5140ep-54f, 0.0f, 0x1.17770ep-91f, 0.0f,
     0x1.08bfc4p-106f, 0x1.9593bep-44f, 0.0f, 0x1.ce5148p-26f, 0x1.9f6e7p-10f,
     0x1.093dfcp-27f, 0.0f, 0x1.9e1e92p-25f, 0x1.e27254p-117f, 0x1.637b08p-6f,
     0x1.71caep-119f, 0.0f, 0.0f, 0x1.57629p-45f, 0.0f, 0.0f, 0.0f, 0x1.37e2e2p-57f,
     0x1.d249eap-89f, 0.0f, 0x1.500406p-43f, 0.0f, 0x1.217212p-102f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.872b5p-124f, 0x1.f9cc38p-123f, 0x1.108aa2p-33f, 0x1.190fc8p-15f,
     0.0f, 0x1.0786a2p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6811p-27f, 0x1.6594d6p-126f,
     0.0f, 0.0f, 0x1.4c3dc8p-78f, 0.0f, 0x1.7282a2p-107f, 0x1.fac4dp-75f, 0.0f, 0.0f,
     0x1.75514ep-22f, 0x1.41d9bcp-98f, 0.0f, 0.0f, 0.0f, 0x1.fc5452p-38f,
     0x1.70195ap-30f, 0x1.43c022p-51f, 0.0f, 0.0f, 0.0f, 0x1.147baep-86f,
     0x1.3c31fep-98f, 0x1.0a10d4p-54f, 0x1.97d8fp-122f, 0x1.efc002p-10f, 0.0f,
     0x1.88d3e2p-24f, 0.0f, 0x1.523afcp-2f, 0x1.e0aef8p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.288098p-65f, 0x1.544f96p-112f, 0.0f, 0x1.c7acaap-24f, 0.0f, 0.0f,
     0x1.2f7482p-17f, 0.0f, 0x1.d8f1bap-5f, 0.0f, 0.0f, 0x1.914334p-8f, 0.0f, 0.0f,
     0x1.33d1bcp-83f, 0x1.9b1ea4p-10f, 0.0f, 0x1.db54cep-120f, 0x1.0f1eaap-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.efcebp-44f, 0.0f, 0.0f, 0x1.6d3f94p-44f, 0x1.bc857ap-54f,
     0.0f, 0x1.1a590cp-20f, 0.0f, 0x1.136a7p-9f, 0x1.4b3a2ep-117f, 0x1.ac8346p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00a00ep-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d1b9p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df51dap-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0a11ep-66f, 0.0f, 0x1.24e0a2p-28f, 0x1.9cc7fap-52f, 0x1.003614p-14f,
     0x1.78e5e6p-107f, 0x1.734366p-36f, 0x1.c41b7ap-3f, 0.0f, 0.0f, 0x1.a9841cp-117f,
     0.0f, 0x1.d826f4p-8f, 0.0f, 0x1.de4828p-104f, 0.0f, 0.0f, 0.0f, 0x1.3065eap-111f,
     0.0f, 0.0f, 0.0f, 0x1.6bd294p-97f, 0.0f, 0x1.adab92p-42f, 0x1.1c5a54p-47f, 0.0f,
     0.0f, 0.0f, 0x1.68dcbp-18f, 0.0f, 0x1.b85068p-120f, 0x1.84ca6p-45f,
     0x1.2877d8p-43f, 0.0f, 0x1.d6da8p-85f, 0.0f, 0x1.6d3368p-50f, 0x1.ead656p-103f,
     0x1.b66a2ep-116f, 0x1.04c784p-63f, 0x1.0ccdc8p-28f, 0x1.6106dcp-44f, 0.0f,
     0x1.fdf43ep-67f, 0x1.7106bap-116f, 0.0f, 0x1.cdce68p-109f, 0.0f, 0x1.6ff71p-15f,
     0x1.8a6d58p-68f, 0.0f, 0.0f, 0x1.24db2p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4882dap-64f, 0x1.c67cbcp-119f, 0x1.e3e8c8p-51f, 0x1.3766cap-47f, 0.0f, 0.0f,
     0x1.e62438p-115f, 0.0f, 0.0f, 0.0f, 0x1.1e8928p-39f, 0x1.f35b8ap-101f,
     0x1.23676ep-30f, 0x1.3509a2p-86f, 0.0f, 0.0f, 0.0f, 0x1.b03958p-111f,
     0x1.89e2c4p-99f, 0.0f, 0.0f, 0x1.2f6fbcp-36f, 0.0f, 0.0f, 0.0f, 0x1.14ca0ap-27f,
     0.0f, 0x1.35949ap-79f, 0x1.5aeb1cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bfb9ep-10f, 0x1.3bafe8p-88f, 0x1.00179p-48f, 0.0f, 0.0f, 0x1.72ffe8p-119f,
     0.0f, 0.0f, 0x1.cd2302p-28f, 0.0f, 0.0f, 0x1.dcfff4p-126f, 0x1.c02cp-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f777c2p-119f, 0x1.493a48p-49f, 0x1.fde59p-81f,
     0x1.b9445ap-21f, 0x1.f52682p-90f, 0x1.f71804p-105f, 0.0f, 0.0f, 0.0f,
     0x1.06d82ep-83f, 0.0f, 0.0f, 0x1.14070cp-125f, 0.0f, 0.0f, 0x1.1c3166p-39f,
     0x1.bfc028p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4781bep-51f, 0.0f, 0x1.2de31ap-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7def8ep-17f, 0.0f, 0x1.079c64p-36f,
     0x1.e25eecp-8f, 0.0f, 0.0f, 0.0f, 0x1.d4587cp-12f, 0.0f, 0x1.19cd5cp-53f,
     0x1.e54cacp-32f, 0x1.f57ae4p-84f, 0.0f, 0.0f, 0x1.aeebbap-112f, 0.0f,
     0x1.9adba2p-15f, 0.0f, 0x1.fc65c6p-21f, 0.0f, 0.0f, 0.0f, 0x1.d123c6p-39f,
     0x1.7ff95ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e58c76p-23f, 0x1.ac3722p-125f,
     0.0f, 0x1.2103e4p-74f, 0x1.17c11p-15f, 0x1.b20dfp-3f, 0.0f, 0.0f, 0x1.55b01p-68f,
     0.0f, 0.0f, 0.0f, 0x1.b538c6p-56f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincosf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosf1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
