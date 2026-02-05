/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2f1_u35purecfma.c --function \
 *     Sleef_finz_log2f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.ceed94p-10f, 0.0f, 0x1.fe9e7ap-3f, 0.0f, 0.0f, 0.0f, 0x1.a813acp-121f,
     0x1.b93752p-104f, 0x1.e94fbp-69f, 0x1.2d9064p-58f, 0x1.e5e06cp-57f, 0.0f,
     0x1.1f8624p-7f, 0x1.467daap-19f, 0.0f, 0x1.e0c24cp-28f, 0.0f, 0x1.fe420cp-59f,
     0x1.dddca4p-11f, 0x1.880fp-10f, 0.0f, 0x1.6a59dap-124f, 0x1.288828p-118f, 0.0f,
     0x1.b053b2p-67f, 0x1.7b467ap-70f, 0.0f, 0x1.d723fcp-45f, 0x1.c4ad5ep-95f,
     0x1.ecb1a4p-94f, 0.0f, 0.0f, 0x1.900f24p-55f, 0.0f, 0.0f, 0.0f, 0x1.a1b492p-80f,
     0.0f, 0x1.5e6494p-20f, 0x1.aa7eb8p-101f, 0x1.e4e316p-98f, 0.0f, 0x1.3f4194p-119f,
     0x1.da1e4ep-55f, 0x1.90a65ep-111f, 0.0f, 0x1.72e676p-8f, 0.0f, 0x1.e08966p-75f,
     0.0f, 0x1.75c4f4p-70f, 0.0f, 0x1.2476dep-29f, 0x1p0f, 0.0f, 0x1.3a7a02p-97f,
     0.0f, 0x1.18d8fap-38f, 0.0f, 0.0f, 0.0f, 0x1.171c58p-111f, 0.0f, 0.0f,
     0x1.089eb8p-115f, 0.0f, 0x1.3003cp-14f, 0x1.79f752p-25f, 0x1.edd82ep-37f,
     0x1.bdf102p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ef4eap-49f, 0x1.24c05ep-102f, 0.0f,
     0x1.2b8d18p-64f, 0x1.b13d9ap-100f, 0x1.3edf22p-92f, 0.0f, 0x1.accad8p-28f, 0.0f,
     0.0f, 0.0f, 0x1.60f66ap-23f, 0x1.75777p-118f, 0.0f, 0x1.9aa0c2p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.724bacp-47f, 0x1.2d977cp-55f, 0x1.447aaap-51f, 0.0f,
     0x1.6c7b36p-122f, 0x1.1d38ecp-45f, 0x1.fa41bp-41f, 0x1.d8fe16p-93f,
     0x1.bc1b38p-58f, 0x1.35eb6cp-10f, 0x1.fda774p-43f, 0x1.8913e6p-105f, 0.0f,
     0x1.90744cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a7b5ep-14f, 0x1.cde358p-51f,
     0x1.eb7f76p-15f, 0.0f, 0x1.801b0ep-29f, 0x1.154a76p-62f, 0.0f, 0x1.3289ap-108f,
     0x1.88699p-56f, 0x1.3b1538p-52f, 0x1.9a85fp-95f, 0x1.571a84p-86f, 0.0f,
     0x1.1f6972p-87f, 0.0f, 0x1.8c03a4p-83f, 0x1.bf2e62p-23f, 0.0f, 0x1.a5b99p-114f,
     0x1.d7aee6p-122f, 0.0f, 0x1.27d1d8p-62f, 0.0f, 0x1.8e07dp-32f, 0x1.28f178p-67f,
     0x1.be8928p-46f, 0x1.4155eep-126f, 0x1.8e11fap-51f, 0x1.e26504p-19f, 0.0f,
     0x1.0c776p-44f, 0x1.9a394ep-5f, 0x1.239a5p-7f, 0.0f, 0x1.1e7888p-9f,
     0x1.6423f4p-105f, 0.0f, 0x1.469caap-14f, 0x1.41669ep-60f, 0.0f, 0x1.4070fp-22f,
     0x1.73cf4cp-19f, 0.0f, 0x1.73d4b4p-93f, 0x1.04764ap-78f, 0x1.96326ep-74f,
     0x1.2d3bd8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a3238p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c7fd8p-72f, 0x1.6fe37p-83f, 0x1.0569a2p-6f, 0x1.4def58p-11f, 0.0f,
     0x1.5e17acp-64f, 0x1.de4ec6p-39f, 0x1.a2dbbp-91f, 0x1.9c4e74p-12f, 0.0f,
     0x1.20cdc6p-23f, 0x1.da35acp-46f, 0x1.f4f9a4p-74f, 0x1.816eacp-10f, 0.0f,
     0x1.5e0858p-33f, 0.0f, 0x1.501204p-114f, 0x1.c7f8c8p-87f, 0.0f, 0.0f,
     0x1.53884p-77f, 0.0f, 0.0f, 0x1.eeb72cp-89f, 0.0f, 0x1.f5d256p-75f, 0.0f, 0.0f,
     0x1.2992cap-58f, 0x1.b8daa2p-23f, 0.0f, 0x1.8865fep-28f, 0x1p0f, 0.0f,
     0x1.d3b66p-24f, 0x1.c0e136p-115f, 0.0f, 0.0f, 0x1.179e86p-98f, 0.0f, 0.0f,
     0x1.fa32acp-51f, 0.0f, 0x1.4fad0ap-111f, 0x1.2b1de6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4156a8p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39bc12p-63f, 0.0f,
     0x1.42b35ap-75f, 0x1.aba2b2p-103f, 0.0f, 0x1.d302d2p-122f, 0.0f, 0x1.4c7de8p-23f,
     0x1.97121ap-47f, 0x1.14e86p-37f, 0x1.83f9c2p-116f, 0x1.102dcap-49f,
     0x1.6771p-60f, 0.0f, 0x1.b8b502p-79f, 0x1.f7c66cp-17f, 0x1.510c58p-30f,
     0x1.bbcea2p-49f, 0.0f, 0x1.dc7582p-99f, 0x1.27cc5p-54f, 0.0f, 0.0f,
     0x1.e28a8ap-112f, 0.0f, 0x1.9b641p-87f, 0x1.db0feap-106f, 0x1.debe6p-24f,
     0x1.808ae4p-83f, 0x1.f6b02ep-69f, 0.0f, 0.0f, 0x1.c7b84p-24f, 0x1.e7da96p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.4b1098p-101f, 0.0f, 0.0f,
     0x1.2581a6p-7f, 0x1.3943ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4240ap-69f, 0.0f,
     0x1.8fc352p-1f, 0.0f, 0x1.91d4d2p-52f, 0x1.95480ep-107f, 0x1.e991cp-88f,
     0x1.b90dbep-105f, 0.0f, 0.0f, 0.0f, 0x1.610c24p-83f, 0x1.475b4p-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.698d34p-108f, 0x1.1bdfdep-50f, 0x1.0adc1cp-72f, 0.0f,
     0x1.fc1206p-42f, 0x1.bdc17cp-54f, 0.0f, 0x1.10a9cep-106f, 0x1.62dedap-8f, 0.0f,
     0x1.c8c234p-25f, 0.0f, 0x1.4553ccp-61f, 0x1.bf955ep-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fd3d4p-20f, 0.0f, 0x1.25d714p-18f, 0.0f, 0x1.44cb6cp-43f, 0x1.93d374p-35f,
     0.0f, 0x1.04c148p-72f, 0x1.8e92f6p-113f, 0x1.ae020ep-36f, 0.0f, 0x1.ad7084p-123f,
     0x1.a16d22p-1f, 0x1.dab766p-65f, 0.0f, 0.0f, 0.0f, 0x1.34cd12p-22f,
     0x1.429e4p-84f, 0x1.255022p-98f, 0.0f, 0.0f, 0x1.18c8ccp-44f, 0.0f,
     0x1.cc43fep-33f, 0x1.30f83p-95f, 0.0f, 0.0f, 0x1.a68bdp-74f, 0.0f, 0.0f, 0.0f,
     0x1.9c9df6p-60f, 0x1.a103b6p-105f, 0x1.8c3f88p-15f, 0.0f, 0x1.3cea38p-126f,
     0x1.4e44aap-73f, 0.0f, 0x1.c26cp-48f, 0x1.bc25f6p-3f, 0.0f, 0x1.14229ap-92f,
     0.0f, 0.0f, 0x1.239a2ep-23f, 0x1.4a8cd6p-50f, 0x1.1cf31ep-48f, 0x1.3ccbcep-117f,
     0.0f, 0x1.550724p-116f, 0.0f, 0.0f, 0x1.5ad7a6p-25f, 0.0f, 0x1.ef9274p-30f, 0.0f,
     0x1.30ef3ap-72f, 0.0f, 0.0f, 0x1.ec0f06p-52f, 0.0f, 0x1.ef39fcp-26f, 0.0f, 0.0f,
     0x1.ca9f1p-80f, 0x1.19172ep-10f, 0x1.eda4f2p-48f, 0x1.a940fp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10f1a4p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a2126p-105f, 0.0f, 0x1.3d3c24p-104f, 0x1.812c44p-126f, 0.0f,
     0.0f, 0.0f, 0x1.9700cep-4f, 0x1.225b8cp-49f, 0x1.c72514p-18f, 0x1.de86f2p-104f,
     0x1.028be2p-99f, 0x1.91f62cp-102f, 0x1.e2a66ap-98f, 0x1.307e2cp-78f, 0.0f, 0.0f,
     0x1.26bb4cp-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c46056p-102f,
     0x1.5368bp-96f, 0.0f, 0x1.aa607cp-49f, 0.0f, 0x1.8853c4p-59f, 0.0f, 0.0f,
     0x1.36e6f2p-74f, 0.0f, 0x1.04ecbp-82f, 0x1.c20e38p-123f, 0x1.e81066p-30f,
     0x1.89b2b8p-80f, 0.0f, 0x1.da22d4p-39f, 0x1.84a762p-122f, 0.0f, 0x1.f81f7p-77f,
     0x1.83319cp-74f, 0.0f, 0x1.73c5dcp-66f, 0.0f, 0x1.f0924p-78f, 0.0f, 0.0f,
     0x1.179cp-101f, 0x1.b2d466p-124f, 0x1.d929a6p-45f, 0.0f, 0x1.2606ap-54f,
     0x1.ed7764p-90f, 0.0f, 0x1.36555ap-77f, 0x1.1968b4p-29f, 0.0f, 0x1.c35a3p-35f,
     0.0f, 0.0f, 0x1.737862p-63f, 0.0f, 0x1.596cf2p-48f, 0.0f, 0x1.2e9b04p-57f,
     0x1.c0fd1ep-91f, 0x1.72d59ep-2f, 0x1.0d098ep-125f, 0x1.d4c414p-46f, 0.0f, 0.0f,
     0x1.904282p-117f, 0x1.83c7cp-62f, 0x1.4db766p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.59188ap-30f, 0x1.9c8a12p-78f, 0x1.3f7b7ep-39f, 0x1.c8635cp-68f,
     0x1.f9c09cp-64f, 0x1.ce0f1cp-124f, 0.0f, 0.0f, 0x1.876fbp-33f, 0.0f, 0.0f,
     0x1.916a88p-50f, 0x1.926666p-97f, 0.0f, 0x1.4da15ap-9f, 0x1.2a21ep-111f,
     0x1.15b266p-7f, 0.0f, 0x1.209c04p-35f, 0.0f, 0.0f, 0.0f, 0x1.42a92cp-73f, 0.0f,
     0x1.c6ba74p-45f, 0x1.951306p-48f, 0.0f, 0.0f, 0x1.572c44p-70f, 0x1.0c93d8p-18f,
     0.0f, 0x1.1de672p-96f, 0.0f, 0.0f, 0.0f, 0x1.1a2576p-103f, 0x1.8c16aep-123f,
     0x1.928224p-38f, 0.0f, 0.0f, 0x1.3b885cp-91f, 0x1.c9ea4cp-46f, 0.0f, 0.0f,
     0x1.938424p-1f, 0x1.5acd9ap-75f, 0.0f, 0x1.33ff9ap-75f, 0x1.e0ee72p-69f,
     0x1.e20f4p-118f, 0.0f, 0x1.1cbc76p-17f, 0x1.2d9854p-102f, 0x1.a96a06p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e14bcp-56f, 0x1.934e6ap-56f, 0x1.63ee4p-77f, 0.0f,
     0x1.444ce6p-126f, 0x1.d2555p-70f, 0x1.94686ap-63f, 0x1.98f9e2p-60f,
     0x1.93ada8p-98f, 0x1.3f963cp-40f, 0x1.d7381cp-83f, 0.0f, 0.0f, 0.0f,
     0x1.7a9c96p-114f, 0.0f, 0x1.2ee6f4p-19f, 0.0f, 0x1.36b13ep-116f,
     0x1.899cd2p-121f, 0.0f, 0.0f, 0x1.469de6p-94f, 0.0f, 0.0f, 0x1.668b62p-104f,
     0.0f, 0.0f, 0x1.2cbce2p-27f, 0.0f, 0x1.dba018p-20f, 0.0f, 0.0f, 0.0f,
     0x1.291e38p-48f, 0x1.218e78p-3f, 0x1.94093p-125f, 0.0f, 0x1.7b87eep-123f,
     0x1.c5db3ap-42f, 0x1.a34a52p-40f, 0.0f, 0x1.480278p-13f, 0x1.206dd4p-30f, 0.0f,
     0x1.458a9ep-40f, 0x1.a925bp-88f, 0x1.0911bcp-70f, 0x1.9d8d6p-19f,
     0x1.7768fap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4604bep-66f, 0.0f, 0.0f,
     0x1.d3b076p-105f, 0.0f, 0.0f, 0x1.a6f736p-24f, 0.0f, 0x1.b953fap-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22714ep-8f, 0.0f, 0x1.81ec72p-49f,
     0x1.9f30bap-49f, 0.0f, 0.0f, 0x1.a0e3f4p-27f, 0x1.9b91ap-73f, 0.0f,
     0x1.8fe1dp-60f, 0x1.3425fep-9f, 0.0f, 0x1.10d06cp-76f, 0.0f, 0x1.eb1c86p-9f,
     0.0f, 0.0f, 0x1.249c02p-91f, 0.0f, 0.0f, 0x1.07ee3ap-118f, 0x1.6116acp-58f, 0.0f,
     0x1.c73f0cp-49f, 0.0f, 0.0f, 0.0f, 0x1.0303dap-51f, 0.0f, 0x1.0d30fp-73f,
     0x1.a15e1cp-13f, 0.0f, 0x1.6ef528p-21f, 0.0f, 0x1.a36d1ep-20f, 0x1.769018p-44f,
     0x1.f85e5ap-17f, 0.0f, 0.0f, 0x1.25e27p-51f, 0.0f, 0x1.76d1e6p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.15470ep-75f, 0x1.5f9c24p-103f, 0.0f, 0x1.eb1998p-67f, 0.0f, 0.0f,
     0x1.7cc90cp-25f, 0.0f, 0.0f, 0.0f, 0x1.300546p-86f, 0x1.6e368ep-7f,
     0x1.b86d22p-56f, 0x1.63e6a4p-95f, 0x1.070c88p-121f, 0.0f, 0x1.97d586p-104f, 0.0f,
     0.0f, 0x1.b078c8p-4f, 0.0f, 0.0f, 0x1.a7a7ap-25f, 0.0f, 0x1.3eecf2p-117f, 0.0f,
     0x1.7b2ec2p-59f, 0.0f, 0x1.a9c7a4p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da6c86p-1f,
     0x1.1024dap-14f, 0x1.d0970cp-119f, 0.0f, 0.0f, 0x1.14265ap-42f, 0.0f, 0.0f, 0.0f,
     0x1.ba862p-98f, 0.0f, 0x1.9db348p-31f, 0.0f, 0.0f, 0.0f, 0x1.73c806p-22f,
     0x1.d17612p-115f, 0.0f, 0x1.e2828ep-106f, 0.0f, 0x1.41c14ap-33f, 0x1.45c8ecp-70f,
     0x1.fd81b6p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de3bbap-112f,
     0x1.b37126p-104f, 0.0f, 0x1.6c8d6p-52f, 0x1.de3226p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94767ep-34f, 0.0f, 0.0f, 0x1.290ca2p-23f, 0.0f, 0x1.2b2p-98f,
     0x1.778086p-12f, 0x1.e46848p-98f, 0.0f, 0.0f, 0x1.323692p-41f, 0.0f,
     0x1.ce392p-27f, 0.0f, 0.0f, 0x1.74ea94p-58f, 0x1.b391bep-45f, 0x1.b7a5f2p-71f,
     0.0f, 0x1.d79246p-125f, 0.0f, 0x1.e5bb14p-22f, 0x1.febc14p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f1a146p-43f, 0x1.1772a2p-49f, 0x1.01fd06p-74f, 0.0f,
     0x1.b28172p-94f, 0x1.d18626p-90f, 0x1.9e951ap-37f, 0.0f, 0x1.1ae866p-56f, 0.0f,
     0.0f, 0x1.fb1754p-75f, 0x1.d823bap-12f, 0x1.f9b0fcp-87f, 0x1.0b821cp-98f, 0.0f,
     0x1.82a924p-7f, 0.0f, 0x1.838464p-34f, 0x1.aa1fdep-100f, 0.0f, 0x1.c1c37cp-62f,
     0x1.8e8924p-70f, 0x1.d5a376p-118f, 0.0f, 0x1.b094ecp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff0806p-34f, 0x1p0f, 0x1.492a42p-11f, 0x1.8bd3acp-122f,
     0x1.8684eap-48f, 0.0f, 0x1.d4f4a2p-4f, 0x1.281004p-78f, 0x1.07e5e6p-1f, 0.0f,
     0x1.ef9eb2p-126f, 0.0f, 0.0f, 0x1.85a5dcp-122f, 0.0f, 0x1.400ce4p-33f,
     0x1.e93658p-56f, 0.0f, 0.0f, 0.0f, 0x1.cff428p-95f, 0.0f, 0x1.63cdf8p-107f,
     0x1.b55728p-21f, 0.0f, 0x1.c0735ep-36f, 0x1.f8fcfcp-108f, 0.0f, 0.0f,
     0x1.7d7c86p-73f, 0x1.4fcec8p-39f, 0x1.a0ad2ap-54f, 0x1.0a75dcp-91f, 0.0f,
     0x1.778b66p-54f, 0x1.47cffep-102f, 0.0f, 0x1.efad52p-47f, 0x1.22c6cp-112f, 0.0f,
     0.0f, 0x1.c7a3dap-86f, 0x1.bc41fcp-18f, 0.0f, 0x1.6e56dcp-1f, 0.0f, 0.0f, 0.0f,
     0x1.931cdp-38f, 0x1.d4f5d8p-54f, 0.0f, 0.0f, 0x1.aaa6cap-57f, 0x1.0578c8p-39f,
     0x1.02fe4ap-72f, 0.0f, 0.0f, 0.0f, 0x1.ce741cp-67f, 0x1.f9b7e6p-25f, 0.0f, 0.0f,
     0x1.c18e6cp-75f, 0.0f, 0.0f, 0x1.85b4aep-86f, 0x1.19e28p-38f, 0x1.bad9dep-58f,
     0.0f, 0x1.d0027cp-2f, 0x1.45c92ap-113f, 0x1.c2858p-68f, 0.0f, 0x1.8bba68p-42f,
     0.0f, 0.0f, 0x1.9ac97ap-36f, 0x1.5c542cp-51f, 0.0f, 0.0f, 0.0f, 0x1.66a74cp-50f,
     0x1.167696p-45f, 0.0f, 0.0f, 0x1.06436p-33f, 0.0f, 0x1.3b6f2ep-57f, 0.0f,
     0x1.273638p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3e2bccp-90f, 0.0f, 0.0f, 0x1.70971ep-78f, 0x1.7ea3c4p-15f, 0x1.df1792p-44f,
     0.0f, 0.0f, 0.0f, 0x1.405388p-73f, 0x1.565c04p-16f, 0x1.0e60c8p-14f,
     0x1.16375ap-5f, 0x1.50fb86p-98f, 0.0f, 0x1.0f23cp-18f, 0x1.adbe94p-117f, 0.0f,
     0x1.2dafc8p-95f, 0x1.30f914p-95f, 0x1.42d3aep-56f, 0.0f, 0x1.99e6fep-23f, 0.0f,
     0.0f, 0.0f, 0x1.2a4662p-36f, 0.0f, 0.0f, 0.0f, 0x1.34511ap-7f, 0x1.9336b4p-102f,
     0.0f, 0x1.3a1a72p-50f, 0.0f, 0.0f, 0x1.6d289p-28f, 0x1.8c8506p-83f, 0.0f,
     0x1.83c942p-41f, 0.0f, 0x1.826d2cp-24f, 0x1.6c8e68p-46f, 0.0f, 0.0f,
     0x1.71d5f2p-50f, 0.0f, 0x1.b16ad4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ede3p-84f, 0x1.513564p-6f, 0x1.f0e5c4p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.662ed2p-67f, 0.0f,
     0x1.13761ap-126f, 0.0f, 0x1.136fb6p-78f, 0.0f, 0x1.68ef36p-61f, 0x1.5547d8p-75f,
     0.0f, 0x1.598f5ap-54f, 0.0f, 0x1.5dc45cp-116f, 0x1.e93eeap-37f, 0x1.36c058p-123f,
     0x1.40b96ep-100f, 0.0f, 0x1.ae402p-125f, 0.0f, 0x1.be845cp-119f, 0x1.39836p-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17516ep-111f, 0.0f,
     0x1.b2c21cp-118f, 0x1.3ec6p-52f, 0x1.e340f2p-105f, 0x1.bd72bp-60f,
     0x1.84c5ap-82f, 0x1.f81526p-38f, 0x1.2bf59ep-3f, 0.0f, 0.0f, 0x1.d68a3p-54f,
     0.0f, 0.0f, 0x1.66dccap-45f, 0.0f, 0x1.bc799ap-20f, 0x1.834b8ap-18f, 0.0f,
     0x1.29732ap-104f, 0x1.2fa4a8p-94f, 0.0f, 0x1.82e444p-70f, 0x1.347e1p-16f, 0.0f,
     0x1.b6aac2p-42f, 0.0f
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
            tmp1 = Sleef_finz_log2f1_u35purecfma(tmp0);
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
    printf("Sleef_finz_log2f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2f1_u35purecfma bench acc %a\n", global_bench_acc);
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
