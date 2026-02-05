/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fminf4_avx2128.c --function Sleef_finz_fminf4_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.ccdca6p-40f, 0.0f, 0x1.cfa184p-96f, 0x1.7987a6p-98f, 0x1.657722p-102f,
     0.0f, 0.0f, 0x1.edb4b6p-24f, 0.0f, 0x1.3a7p-2f, 0x1.9c6edcp-89f, 0.0f, 0.0f,
     0x1.534a56p-25f, 0.0f, 0.0f, 0x1.256f74p-78f, 0x1.0237a2p-107f, 0x1.bbc432p-7f,
     0x1.75e042p-110f, 0.0f, 0.0f, 0x1.0545cp-29f, 0x1.7bacdcp-21f, 0.0f,
     0x1.4fbf6p-14f, 0.0f, 0.0f, 0.0f, 0x1.c013e8p-116f, 0.0f, 0.0f, 0.0f,
     0x1.4eeefcp-45f, 0.0f, 0.0f, 0x1.7c5f06p-31f, 0x1.603b06p-1f, 0.0f, 0.0f, 0.0f,
     0x1.bb88f2p-52f, 0x1.6bfcb4p-3f, 0.0f, 0x1.a4b4c6p-106f, 0x1.5fb956p-80f,
     0x1.607562p-11f, 0.0f, 0.0f, 0x1.7a52bep-118f, 0.0f, 0.0f, 0x1.0fa23p-120f,
     0x1.76c05ap-80f, 0x1.95f048p-82f, 0x1.9f7aaap-100f, 0.0f, 0.0f, 0x1.06ff86p-11f,
     0x1.29b8c8p-60f, 0x1.791b24p-83f, 0x1.950462p-121f, 0.0f, 0x1.4bcfbep-123f,
     0x1.f93d74p-95f, 0x1.852b62p-13f, 0.0f, 0x1.083bdcp-4f, 0x1.e325bap-27f,
     0x1.d3081ap-69f, 0.0f, 0x1.7b230ep-11f, 0x1.3ee76p-6f, 0x1.1acbf2p-39f, 0.0f,
     0x1.801ef8p-30f, 0x1.4ce4dp-28f, 0.0f, 0x1.89e1ccp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.51e832p-118f, 0x1.c88c28p-61f, 0x1.ba58a8p-61f, 0x1.f21af6p-91f,
     0.0f, 0x1.087f7ap-37f, 0x1.5cea2p-81f, 0x1.53d836p-34f, 0.0f, 0x1.46562p-101f,
     0.0f, 0.0f, 0.0f, 0x1.2185d2p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e92e14p-126f,
     0.0f, 0x1.63306ap-96f, 0.0f, 0x1.c3bf76p-39f, 0.0f, 0.0f, 0x1.6e6b96p-87f,
     0x1.aeadcep-28f, 0.0f, 0x1.67c67p-122f, 0x1.87555ep-26f, 0x1.ac3bp-37f,
     0x1.aca674p-31f, 0x1.d6236p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a81fe2p-119f,
     0.0f, 0x1.24a24p-89f, 0x1.9f562ap-32f, 0x1.54ac26p-115f, 0.0f, 0x1.7792d4p-93f,
     0x1.cac2e2p-52f, 0.0f, 0x1.a59982p-47f, 0.0f, 0x1.5ceb5cp-111f, 0.0f, 0.0f,
     0x1.8cb3bcp-69f, 0x1.2d0d9cp-104f, 0.0f, 0.0f, 0x1.e0a33ep-106f, 0x1.f483aap-54f,
     0x1.373c9p-39f, 0x1.6bdcdep-113f, 0x1.2ad44p-50f, 0x1.fe30ep-13f,
     0x1.119accp-34f, 0x1.7af2fap-66f, 0x1.8f40e4p-51f, 0.0f, 0x1.9c5976p-31f, 0.0f,
     0x1.026daap-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96f086p-102f, 0.0f,
     0x1.3c24e6p-100f, 0x1.097466p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f83fcp-112f,
     0x1.e7e6bcp-46f, 0x1.e2475cp-77f, 0x1.4478c2p-50f, 0.0f, 0x1.a2f664p-25f, 0.0f,
     0.0f, 0x1.c04ffp-60f, 0x1.e6869ap-1f, 0.0f, 0x1.14daf8p-116f, 0x1.a108d8p-45f,
     0x1.c68798p-1f, 0.0f, 0.0f, 0.0f, 0x1.e81686p-84f, 0x1.7d8c84p-83f,
     0x1.3e0f92p-83f, 0.0f, 0x1.6f8feap-7f, 0.0f, 0x1.3a94cap-36f, 0.0f,
     0x1.391ff4p-35f, 0x1.cf2c02p-45f, 0x1.7faf4p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d2f5cep-85f, 0.0f, 0x1.e9586p-13f, 0.0f, 0x1.1cfa92p-34f, 0x1.7c5736p-16f,
     0.0f, 0x1.b44d1ep-89f, 0.0f, 0.0f, 0x1.cf0a4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9e649p-92f, 0x1.b30988p-116f, 0x1.03028ap-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0336a8p-39f, 0x1.f88d3ep-117f, 0x1.cc67dap-118f, 0x1.f91816p-95f,
     0x1.2b38dep-47f, 0.0f, 0x1.d0e05p-104f, 0x1.1029b6p-33f, 0x1.86a062p-44f,
     0x1.45ae9cp-108f, 0.0f, 0.0f, 0x1.7378ccp-38f, 0x1.b6603ap-14f, 0x1.62ceacp-11f,
     0x1.c53d42p-84f, 0.0f, 0x1.25c048p-4f, 0.0f, 0.0f, 0x1.bec692p-98f,
     0x1.50b44ap-47f, 0.0f, 0.0f, 0x1.c2fde2p-72f, 0.0f, 0.0f, 0x1.ecc846p-27f,
     0x1.a22d38p-4f, 0x1.e2e11p-84f, 0.0f, 0x1.f01caap-120f, 0x1.77a3e6p-54f, 0.0f,
     0.0f, 0x1.6242a2p-25f, 0x1.0703a2p-18f, 0x1.77b9dp-82f, 0x1.d9d2d8p-2f, 0.0f,
     0x1.b2a184p-124f, 0x1.1d50bep-98f, 0.0f, 0x1.b68332p-26f, 0.0f, 0x1.6a0c32p-16f,
     0.0f, 0x1.e3a406p-100f, 0x1.47c1cp-53f, 0x1.f44af4p-91f, 0x1.0d2e3ap-14f, 0.0f,
     0x1.2e4ad4p-25f, 0x1.15d0a4p-33f, 0.0f, 0.0f, 0x1.038e06p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3a4808p-39f, 0x1.60e208p-93f, 0.0f, 0.0f, 0x1.899612p-125f,
     0.0f, 0x1.6debc4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.304a82p-121f, 0x1.124f98p-4f,
     0.0f, 0.0f, 0.0f, 0x1.7ef55cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ff514p-77f,
     0x1.305e18p-111f, 0x1.9ea81ap-114f, 0x1.613622p-58f, 0.0f, 0.0f, 0x1.992cep-53f,
     0.0f, 0.0f, 0.0f, 0x1.ce3ff4p-35f, 0x1.3dd4bap-42f, 0x1.883704p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a61628p-48f, 0x1.8ebc64p-122f, 0x1.5e7e54p-50f,
     0x1.072d08p-57f, 0x1.a62cep-60f, 0x1.08f806p-17f, 0x1.94574p-107f,
     0x1.7a1ad8p-25f, 0x1.baa15ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.095714p-105f, 0.0f, 0x1.a5c2fep-117f, 0.0f, 0x1.e82322p-94f,
     0x1.c9a914p-109f, 0.0f, 0x1.ab9e5p-20f, 0x1.f19528p-108f, 0x1.d062b4p-43f, 0.0f,
     0x1.df965ep-101f, 0x1.68445cp-97f, 0.0f, 0.0f, 0x1.565b52p-82f, 0x1.fd3daep-30f,
     0.0f, 0.0f, 0x1.618ccep-55f, 0x1.5c0df4p-55f, 0.0f, 0x1.211884p-80f, 0.0f,
     0x1.f9fb72p-22f, 0.0f, 0.0f, 0.0f, 0x1.54714ep-115f, 0x1.ada12cp-47f, 0.0f,
     0x1.247476p-29f, 0.0f, 0x1.925efep-90f, 0.0f, 0x1.3a299ap-36f, 0.0f,
     0x1.c31f82p-67f, 0x1.9adcd4p-75f, 0x1.0612e4p-120f, 0.0f, 0.0f, 0x1.e7f6c6p-33f,
     0x1.ea83ap-106f, 0x1.812426p-65f, 0.0f, 0.0f, 0x1.60fb96p-66f, 0x1.c4e894p-95f,
     0.0f, 0x1.8dcf84p-32f, 0x1.005076p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.443a02p-119f, 0.0f, 0.0f, 0.0f, 0x1.5f6024p-111f, 0.0f, 0.0f, 0.0f,
     0x1.5db1fep-72f, 0x1.413f16p-19f, 0x1.a77cc4p-10f, 0x1.5881fp-59f, 0.0f, 0.0f,
     0.0f, 0x1.267b98p-38f, 0.0f, 0x1.193654p-62f, 0.0f, 0.0f, 0.0f, 0x1.2a5e7ep-126f,
     0x1.4071bp-111f, 0.0f, 0x1.2fb7dcp-119f, 0.0f, 0x1.1ecac2p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c63ef4p-104f, 0.0f,
     0x1.a551e8p-32f, 0.0f, 0.0f, 0x1.f762b4p-12f, 0x1.e6d06ep-82f, 0.0f,
     0x1.ab4f42p-24f, 0.0f, 0.0f, 0x1.598254p-9f, 0.0f, 0x1.f83412p-77f, 0.0f, 0.0f,
     0x1.8bc89p-118f, 0.0f, 0x1.331df2p-59f, 0x1.231838p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24f3acp-50f, 0.0f, 0.0f, 0x1.aebeaap-102f, 0.0f, 0.0f, 0x1.9ec4fep-80f,
     0x1.6b5ae4p-52f, 0x1.e309a6p-59f, 0x1.4438aep-114f, 0.0f, 0.0f, 0x1.bb47e6p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3aa5e2p-52f, 0.0f, 0x1.a1ffe8p-75f, 0.0f, 0.0f, 0.0f,
     0x1.8d61cep-93f, 0.0f, 0x1.8e8b0ap-48f, 0.0f, 0x1.3e142cp-124f, 0x1.4cc25ap-43f,
     0.0f, 0.0f, 0.0f, 0x1.64e87cp-40f, 0.0f, 0x1.ec8edcp-81f, 0.0f, 0x1.c1b132p-114f,
     0x1.c05a9ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3d1eap-1f, 0x1.bdaaa8p-27f,
     0.0f, 0.0f, 0.0f, 0x1.9b363ap-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b36dcp-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2438d2p-67f, 0x1.b729dep-14f, 0.0f,
     0x1.c83004p-16f, 0.0f, 0.0f, 0.0f, 0x1.bfc5a6p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.903de2p-74f, 0.0f, 0.0f, 0.0f, 0x1.3efdap-25f, 0x1.b5a5fap-73f, 0.0f, 0.0f,
     0x1.802902p-78f, 0.0f, 0.0f, 0.0f, 0x1.2af174p-24f, 0x1.f65cb8p-56f, 0.0f,
     0x1.97ece4p-5f, 0.0f, 0.0f, 0x1.927754p-32f, 0.0f, 0x1.e36f76p-75f, 0.0f,
     0x1.d78acp-67f, 0.0f, 0.0f, 0x1.703bd6p-18f, 0x1.a559eap-48f, 0x1.a83de4p-85f,
     0.0f, 0x1.f9da5ep-124f, 0x1.ac2faep-106f, 0.0f, 0x1.318464p-21f, 0x1.881a1ap-44f,
     0x1.9d782p-90f, 0x1.d7393cp-13f, 0.0f, 0x1.d6adf4p-65f, 0.0f, 0x1.717642p-4f,
     0x1.ae8cd4p-107f, 0.0f, 0.0f, 0x1.b31c94p-99f, 0x1.75c84cp-113f, 0.0f, 0.0f,
     0x1.431acep-35f, 0x1.08d014p-94f, 0x1.8e1d3ep-37f, 0x1.ed1566p-48f, 0.0f, 0.0f,
     0x1.db78eep-108f, 0x1.438524p-57f, 0x1.17f108p-116f, 0x1.f2af42p-74f,
     0x1.dab5b8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2727ap-94f, 0.0f,
     0x1.4c749ap-11f, 0x1.129b28p-47f, 0.0f, 0.0f, 0.0f, 0x1.d01126p-69f,
     0x1.1db5b4p-4f, 0.0f, 0.0f, 0x1.ddcc2cp-27f, 0.0f, 0x1.411a22p-20f, 0x1p0f,
     0x1.e479aep-20f, 0x1.a3c342p-118f, 0.0f, 0x1.4101ecp-114f, 0x1.438aa6p-26f,
     0x1.16b61ap-9f, 0.0f, 0x1.fe00c2p-77f, 0x1.1c243cp-14f, 0.0f, 0.0f,
     0x1.246992p-29f, 0x1.013ab4p-34f, 0x1.35c4bep-57f, 0x1.fca3a6p-96f, 0.0f,
     0x1.bdb2dep-75f, 0.0f, 0.0f, 0.0f, 0x1.47eb1ap-44f, 0x1.906c46p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a57726p-86f, 0.0f, 0x1.d32762p-97f, 0.0f, 0x1.dc572cp-33f,
     0x1.dc51bep-9f, 0.0f, 0x1.9fd566p-90f, 0.0f, 0.0f, 0.0f, 0x1.8ca6dcp-100f, 0.0f,
     0x1.2561f8p-123f, 0x1.7232cp-33f, 0x1.6d7d3cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.92b728p-13f, 0.0f, 0.0f, 0x1.0c3016p-54f, 0.0f, 0x1.065484p-111f, 0.0f, 0.0f,
     0.0f, 0x1.a7429ep-69f, 0x1.9aceap-18f, 0.0f, 0x1.131eb2p-44f, 0x1.02ba9cp-52f,
     0x1.8c7ae6p-15f, 0.0f, 0.0f, 0x1.992cccp-111f, 0x1.9d49f8p-38f, 0x1.3400ap-95f,
     0.0f, 0x1.79630ap-108f, 0x1.e1a354p-55f, 0.0f, 0x1.10e66p-70f, 0.0f, 0.0f, 0.0f,
     0x1.57f836p-1f, 0.0f, 0.0f, 0x1.2f9d7ap-73f, 0x1.35a796p-1f, 0x1.3ab6e6p-71f,
     0x1.d4f75cp-99f, 0.0f, 0.0f, 0.0f, 0x1.c87568p-22f, 0x1.f7f22ep-27f,
     0x1.2e2436p-88f, 0.0f, 0x1.43c0a6p-14f, 0.0f, 0x1.a0164ap-63f, 0x1.456e32p-49f,
     0.0f, 0.0f, 0x1.a5a9dep-84f, 0.0f, 0x1.67b33cp-34f, 0x1.2c27c6p-12f, 0.0f,
     0x1.224154p-77f, 0x1.99312cp-3f, 0.0f, 0x1.ade088p-49f, 0x1.e3e3fp-109f,
     0x1.cc49cep-7f, 0.0f, 0.0f, 0x1.d35206p-6f, 0.0f, 0.0f, 0x1.0a482ep-105f,
     0x1.a144bp-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e886eap-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6de9eap-96f, 0.0f, 0x1.c26458p-15f, 0.0f, 0x1.c9f41p-28f, 0.0f,
     0x1.db891cp-50f, 0x1.1c7e72p-66f, 0x1.48f8fep-115f, 0x1.abc996p-6f,
     0x1.f2aa1cp-25f, 0.0f, 0.0f, 0.0f, 0x1.05fd3p-87f, 0x1.7e8b2cp-101f, 0.0f, 0.0f,
     0x1.2f9368p-43f, 0.0f, 0.0f, 0x1.3f26dcp-72f, 0x1.b634acp-122f, 0.0f,
     0x1.d143bep-102f, 0x1.994d6ap-108f, 0x1.aff538p-41f, 0.0f, 0.0f, 0.0f,
     0x1.5bcc0cp-110f, 0.0f, 0x1.b56aaep-85f, 0x1.e039c6p-118f, 0x1.6d6e1ep-35f, 0.0f,
     0x1.5ecf96p-90f, 0x1.4df39ep-42f, 0x1.904644p-74f, 0x1.5da7f2p-79f,
     0x1.f375c2p-95f, 0.0f, 0.0f, 0.0f, 0x1.345ce8p-8f, 0.0f, 0x1.9592d6p-20f, 0.0f,
     0.0f, 0x1.74f57p-39f, 0x1.8dc746p-43f, 0.0f, 0x1.dbc812p-91f, 0x1.a9660ap-2f,
     0.0f, 0.0f, 0x1.71acb2p-47f, 0.0f, 0.0f, 0x1.998408p-66f, 0x1.29fcdcp-25f,
     0x1.051094p-68f, 0.0f, 0x1.725d72p-80f, 0x1.3037e2p-125f, 0.0f, 0x1.d2f554p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e68daep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.759d4ap-59f, 0.0f, 0.0f, 0x1.3f18p-39f, 0.0f, 0.0f, 0x1.39ac6cp-38f,
     0x1.2a761p-96f, 0.0f, 0x1.50235cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2425c8p-64f, 0.0f, 0x1.e6b94cp-104f, 0.0f, 0x1.b6f1d4p-46f, 0x1.10ef72p-69f,
     0x1.ca52d6p-16f, 0.0f, 0.0f, 0x1.c83c24p-24f, 0.0f, 0.0f, 0x1.2346eep-68f,
     0x1.178c72p-84f, 0.0f, 0x1.d7f4dep-44f, 0.0f, 0x1.9e7e48p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.212d36p-13f, 0x1.be720ap-61f, 0.0f,
     0x1.ae3eccp-56f, 0.0f, 0x1.d9ed88p-56f, 0.0f, 0x1.8d0c38p-91f, 0x1.2c217ep-22f,
     0.0f, 0.0f, 0x1.b0d1c6p-70f, 0.0f, 0.0f, 0x1.ca5d8ep-70f, 0.0f, 0.0f,
     0x1.e15132p-88f, 0x1.e3b6e2p-87f, 0x1.5fd292p-99f, 0.0f, 0x1.b6c2d2p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5438f8p-125f, 0.0f, 0x1.31085ap-54f, 0x1.0863eep-44f,
     0x1.6c5402p-47f, 0x1.f06e52p-83f, 0.0f, 0x1.3c6502p-61f, 0.0f, 0.0f, 0.0f,
     0x1.dbac32p-24f, 0x1.0756fcp-55f, 0x1.828e32p-126f, 0.0f, 0x1.313e2cp-88f,
     0x1.17d6ap-112f, 0x1.2baa14p-50f, 0x1.a87346p-61f, 0x1.1adb6cp-104f,
     0x1.4e3256p-22f, 0x1.229a5p-4f, 0.0f, 0x1.fe0a7ep-33f, 0x1.67090ap-38f,
     0x1.458312p-67f, 0x1.63fc1ep-112f, 0.0f, 0.0f, 0.0f, 0x1.99a62ap-108f, 0.0f,
     0x1.287b32p-50f, 0x1.16f94ep-49f, 0x1.4429b2p-86f, 0.0f, 0x1.1f2a8p-96f, 0.0f,
     0x1.a44b1cp-34f, 0.0f, 0x1.54cep-20f, 0x1.236de4p-115f, 0.0f, 0.0f,
     0x1.303a5cp-89f, 0.0f, 0.0f, 0x1.7b0794p-26f, 0x1.287d4cp-5f, 0x1.af3b5ep-20f,
     0x1.16eb58p-33f, 0x1.3be178p-101f, 0x1.297098p-34f, 0x1.2aa604p-45f, 0.0f,
     0x1.c6d09p-41f, 0x1.449eb6p-123f, 0.0f, 0.0f, 0.0f, 0x1.53d4fep-75f,
     0x1.e502bap-60f, 0x1.095afp-46f, 0x1.4d03e6p-85f, 0.0f, 0.0f, 0x1.f97568p-16f,
     0x1.3b87fep-34f, 0.0f, 0.0f, 0.0f, 0x1.8e8abp-14f, 0x1.493c7p-31f, 0.0f,
     0x1.e9d2aep-79f, 0.0f, 0.0f, 0.0f, 0x1.16a76ep-43f, 0.0f, 0.0f, 0x1.996b0cp-43f,
     0.0f, 0.0f, 0x1.2f5934p-119f, 0.0f, 0.0f, 0.0f, 0x1.488c6cp-18f, 0.0f, 0.0f,
     0.0f, 0x1.e52462p-87f, 0x1.05d1e6p-60f, 0x1.e42e9ep-23f, 0.0f, 0.0f, 0.0f,
     0x1.da9cd4p-115f, 0.0f, 0x1.d9ab96p-73f, 0x1.e6603ep-16f, 0x1.2907cap-88f,
     0x1.30785ep-99f, 0x1.c694f6p-101f, 0x1.628ffep-121f, 0.0f, 0.0f, 0x1.60852p-121f,
     0.0f, 0x1.6025cap-31f, 0x1.87e98p-61f, 0x1.939472p-7f, 0.0f, 0x1.c6889cp-34f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.d57196p-114f, 0.0f, 0.0f, 0x1.88ca04p-29f, 0x1.efc11p-109f,
     0x1.c7d616p-115f, 0x1.73510ep-114f, 0x1.3ab5e4p-65f, 0.0f, 0x1.60d7f6p-45f, 0.0f,
     0x1.663c76p-49f, 0.0f, 0x1.a54bc8p-54f, 0.0f, 0.0f, 0x1.a926ecp-101f, 0.0f,
     0x1.8fdcep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7297a6p-115f,
     0.0f, 0x1.4bd6d8p-121f, 0x1.10df68p-110f, 0x1.0e638p-65f, 0.0f, 0.0f,
     0x1.e26492p-105f, 0.0f, 0x1.a8b4p-89f, 0.0f, 0.0f, 0.0f, 0x1.f7839cp-50f, 0.0f,
     0x1.2835dcp-32f, 0x1.c6026ap-7f, 0.0f, 0x1.a20a92p-105f, 0x1.c8762cp-26f, 0.0f,
     0.0f, 0x1.e2e9d4p-25f, 0.0f, 0x1.08cf76p-60f, 0x1.abf9eep-8f, 0x1.9c7afcp-54f,
     0.0f, 0.0f, 0x1.14ac72p-34f, 0x1.f509e6p-2f, 0x1.36af1ap-121f, 0x1.1399e8p-31f,
     0x1.4bb652p-114f, 0.0f, 0.0f, 0.0f, 0x1.4ee07ep-15f, 0.0f, 0.0f, 0.0f,
     0x1.ef8c3cp-13f, 0.0f, 0.0f, 0x1.5d0cecp-17f, 0.0f, 0.0f, 0x1.b1994cp-103f,
     0x1.9fb0aap-13f, 0x1.1444acp-12f, 0.0f, 0x1.09f052p-123f, 0x1.14008ep-125f,
     0x1.e6d9b4p-120f, 0.0f, 0.0f, 0x1.b2be5ep-64f, 0x1.0a187ap-50f, 0x1.08ee16p-51f,
     0x1.c4d72cp-57f, 0.0f, 0.0f, 0.0f, 0x1.56a5bap-122f, 0.0f, 0x1.959a08p-22f,
     0x1.4e604cp-100f, 0.0f, 0x1.210c9ap-66f, 0x1.5ed5fcp-120f, 0x1.810568p-54f, 0.0f,
     0x1.d82caap-88f, 0.0f, 0x1.9e6f3ap-75f, 0.0f, 0x1.e1de48p-62f, 0x1.42ffdep-50f,
     0.0f, 0x1.db004ep-27f, 0x1.efbc8ap-88f, 0.0f, 0.0f, 0.0f, 0x1.8458dp-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.54be64p-78f, 0.0f, 0.0f, 0x1.f27e02p-9f,
     0x1.6e1958p-103f, 0x1.230cc4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21fb6cp-119f, 0.0f, 0.0f, 0.0f, 0x1.96f12cp-94f, 0x1.c4b78cp-39f,
     0x1.79ccc4p-1f, 0x1.eec1b2p-55f, 0x1.b41336p-50f, 0.0f, 0.0f, 0.0f,
     0x1.e9dc26p-87f, 0.0f, 0x1.495c1ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64c9c2p-92f,
     0.0f, 0.0f, 0.0f, 0x1.ef9f8ap-43f, 0x1.6e0be2p-50f, 0x1.942124p-60f, 0.0f,
     0x1.825862p-45f, 0.0f, 0x1.3e330cp-3f, 0x1.55a16cp-9f, 0x1.5beb28p-20f,
     0x1.a420eep-98f, 0.0f, 0x1.ef0c0ap-47f, 0.0f, 0x1.86dcdp-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4dd7c4p-89f, 0x1.b6bf18p-108f, 0x1.5b9844p-47f, 0x1.618ecp-40f,
     0x1.5ecba8p-120f, 0.0f, 0.0f, 0x1.39744p-116f, 0x1.3c9d06p-52f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fd3e22p-4f, 0.0f, 0x1.2de2d6p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90dd86p-105f, 0x1.3b1034p-58f, 0.0f, 0x1.c3def8p-105f, 0x1.b3f96p-31f, 0.0f,
     0x1.0ca9eep-13f, 0.0f, 0x1.1f684ep-52f, 0x1.a1e7d4p-1f, 0.0f, 0.0f, 0.0f,
     0x1.7b60cp-70f, 0.0f, 0.0f, 0x1.e7d62p-83f, 0x1.d2155cp-118f, 0.0f,
     0x1.9914bep-101f, 0.0f, 0.0f, 0.0f, 0x1.499cfcp-51f, 0.0f, 0x1.8a01dap-16f,
     0x1.e69cdp-31f, 0.0f, 0.0f, 0.0f, 0x1.e1d6a2p-115f, 0x1.4166a4p-99f,
     0x1.72f386p-78f, 0.0f, 0.0f, 0x1p0f, 0x1.f6d3cap-63f, 0x1.f6e04ep-2f,
     0x1.0cb6d2p-116f, 0.0f, 0.0f, 0x1.fabc82p-111f, 0.0f, 0.0f, 0x1.146c9cp-46f,
     0x1.a6ee56p-36f, 0.0f, 0x1.b1028ap-67f, 0.0f, 0.0f, 0x1.c828d4p-70f, 0.0f, 0.0f,
     0.0f, 0x1.ad0ebcp-91f, 0x1.e37b28p-102f, 0.0f, 0.0f, 0.0f, 0x1.d587bcp-30f,
     0x1.e937ap-122f, 0x1.c63e4ap-21f, 0.0f, 0x1.082938p-8f, 0x1.8a3b3cp-67f,
     0x1.71146ep-102f, 0.0f, 0x1.acb4fep-20f, 0x1.2fe436p-87f, 0.0f, 0x1.bf2fdcp-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.14879ap-84f, 0x1.19887p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc169p-59f, 0.0f, 0x1.7ca00cp-81f, 0.0f, 0x1.fc8434p-80f,
     0x1.a7ba04p-69f, 0x1.139f4ep-4f, 0.0f, 0x1.bd3db6p-90f, 0.0f, 0x1.b468d4p-9f,
     0x1.60dbdcp-37f, 0.0f, 0x1.930b8ap-14f, 0.0f, 0x1.a9f1cp-117f, 0.0f, 0.0f, 0.0f,
     0x1.79309cp-92f, 0.0f, 0x1.3a50eap-126f, 0x1.b1264ep-69f, 0.0f, 0.0f, 0x1p0f,
     0x1.5d11p-70f, 0x1.2dad84p-109f, 0x1.e52e2ap-67f, 0.0f, 0x1.5a9f34p-103f,
     0x1.9d19f8p-50f, 0x1.49355ap-97f, 0.0f, 0x1.b4723ep-111f, 0x1.01f9dp-78f, 0.0f,
     0x1.4c18d8p-62f, 0.0f, 0x1.559a1ep-90f, 0.0f, 0x1.262cc4p-74f, 0x1.2a0a46p-72f,
     0.0f, 0.0f, 0.0f, 0x1.60bfbep-43f, 0x1.441c9ap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f261p-20f, 0.0f, 0x1.0672ecp-76f,
     0x1.67fcc6p-24f, 0.0f, 0x1.ac53e2p-118f, 0.0f, 0x1.011428p-27f, 0.0f, 0.0f, 0.0f,
     0x1.0ccfbap-106f, 0x1.1048f8p-111f, 0x1.d64b44p-45f, 0.0f, 0x1.5dc928p-58f, 0.0f,
     0x1.239a0ep-18f, 0.0f, 0x1.09a7ep-117f, 0x1.f930bep-109f, 0x1.92c888p-122f,
     0x1.1189d2p-32f, 0x1.0ebe6p-108f, 0x1.67f6e4p-75f, 0x1.6c389p-13f, 0.0f,
     0x1.7bcdbp-56f, 0x1.32d7ecp-101f, 0x1.152272p-48f, 0.0f, 0x1.397d0ep-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5a12ep-55f, 0x1.6a9f84p-70f, 0.0f,
     0x1.bcac04p-41f, 0x1.956066p-60f, 0.0f, 0x1.739cc8p-117f, 0.0f, 0.0f,
     0x1.63234cp-21f, 0x1.2d1e92p-100f, 0x1.5c7714p-36f, 0.0f, 0x1.f05f9ap-20f,
     0x1.fc9236p-45f, 0.0f, 0.0f, 0x1.1a309cp-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b48a36p-48f, 0x1.a324dcp-43f, 0.0f, 0x1.5ac57p-73f, 0.0f, 0.0f,
     0x1.ab67b6p-26f, 0x1.fec2ap-102f, 0x1.87ebc4p-52f, 0.0f, 0x1.8d7854p-35f,
     0x1.174946p-116f, 0x1.c34d14p-3f, 0.0f, 0.0f, 0.0f, 0x1.555a38p-10f, 0.0f,
     0x1.e0010ep-100f, 0.0f, 0.0f, 0x1.53e5ap-113f, 0.0f, 0x1.636ac2p-27f,
     0x1.66386ep-11f, 0x1.92a47cp-68f, 0.0f, 0x1.339f98p-49f, 0.0f, 0x1.a45e6ap-64f,
     0.0f, 0.0f, 0x1.1745d2p-52f, 0.0f, 0x1.17f724p-22f, 0x1.a6962p-22f, 0.0f, 0.0f,
     0x1.53614ap-31f, 0x1.d6c932p-69f, 0x1.ecfac2p-58f, 0.0f, 0x1.ae71e2p-28f, 0.0f,
     0x1.f232d4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d87ef6p-92f,
     0x1.07e344p-39f, 0.0f, 0x1.3b695ep-112f, 0.0f, 0.0f, 0x1.60c7c8p-122f, 0.0f,
     0.0f, 0x1.8e77c2p-28f, 0x1.e79e56p-62f, 0x1.d3c876p-40f, 0x1.28abfep-112f, 0.0f,
     0x1.3eb066p-96f, 0.0f, 0.0f, 0.0f, 0x1.e2ca4p-31f, 0x1.b0aba2p-9f, 0.0f, 0.0f,
     0.0f, 0x1.a85d78p-63f, 0x1.9bb64ep-124f, 0x1.c1bf84p-54f, 0.0f, 0x1.b78646p-92f,
     0x1.5fada2p-32f, 0x1.6de26cp-12f, 0.0f, 0.0f, 0x1.703c44p-67f, 0x1.73d7f4p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a1bc8p-115f, 0x1.f446bap-106f, 0.0f,
     0x1.0a83fap-75f, 0x1.81a53cp-96f, 0.0f, 0.0f, 0x1.4451dp-11f, 0.0f,
     0x1.0a382ap-94f, 0x1.e35e4p-13f, 0.0f, 0.0f, 0x1.1ec018p-45f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.813468p-94f, 0x1.9404c8p-3f, 0.0f, 0.0f, 0x1.933a24p-14f, 0.0f,
     0x1.230d62p-12f, 0.0f, 0x1.d6d00cp-94f, 0x1.614136p-22f, 0.0f, 0x1.1d1e2ep-93f,
     0x1.85b39cp-81f, 0x1.a53bb2p-82f, 0x1.eb53ep-34f, 0x1.4f5bdep-33f,
     0x1.76ccbap-89f, 0.0f, 0.0f, 0.0f, 0x1.357956p-98f, 0.0f, 0.0f, 0.0f,
     0x1.bb4c98p-11f, 0.0f, 0x1.77cc2cp-58f, 0x1.26aadep-26f, 0.0f, 0x1.85643cp-118f,
     0x1.d71f92p-70f, 0x1.295deep-47f, 0x1.99cec6p-36f, 0x1.532f64p-88f,
     0x1.cd93eep-22f, 0.0f, 0x1.089f88p-11f, 0.0f, 0.0f, 0x1.ffea88p-46f, 0.0f, 0.0f,
     0x1.840588p-15f, 0.0f, 0x1.fb63fcp-117f, 0x1.90a3a2p-92f, 0x1.45e484p-45f,
     0x1.60c49p-20f, 0x1.7e5ee6p-74f, 0x1.db47acp-32f, 0.0f, 0x1.4138c8p-35f, 0.0f,
     0x1.18178ep-40f, 0x1.58ee96p-86f, 0.0f, 0.0f, 0.0f, 0x1.5d96fep-43f,
     0x1.2ebc34p-120f, 0x1.2c61a4p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.034e32p-11f,
     0x1.71bap-103f, 0.0f, 0.0f, 0.0f, 0x1.f5e8b6p-101f, 0x1.d25196p-103f, 0.0f,
     0x1.29f84cp-36f, 0.0f, 0x1.712872p-93f, 0x1.a95c58p-92f, 0.0f, 0.0f,
     0x1.e188ap-94f, 0x1.2375fep-113f, 0x1.64a888p-112f, 0x1.218fb2p-24f, 0.0f, 0.0f,
     0.0f, 0x1.62dcbap-35f, 0x1.cba71cp-25f, 0.0f, 0.0f, 0x1.b22e12p-69f,
     0x1.6839d6p-70f, 0.0f, 0x1.7a8eeep-93f, 0x1.eab014p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.035ac6p-38f, 0x1.724128p-94f, 0x1.b278fp-36f, 0x1.c86b0ap-38f, 0.0f,
     0x1.4b67b6p-27f, 0.0f, 0x1.2f65f4p-30f, 0x1.42a74ap-12f, 0.0f, 0.0f, 0.0f,
     0x1.d81f76p-79f, 0.0f, 0.0f, 0x1.1aa1aap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5a9a14p-27f, 0.0f, 0x1.c4b8a8p-17f, 0.0f, 0x1.633912p-55f, 0.0f, 0.0f,
     0.0f, 0x1.a7d076p-6f, 0x1.61b386p-41f, 0x1.3b1b7p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c152fp-89f, 0.0f, 0.0f, 0x1.a8aba4p-88f, 0x1.0d225cp-44f, 0x1.4e7ca6p-105f,
     0x1.dd8f8ap-30f, 0x1.44a41ap-24f, 0x1.2cc29cp-58f, 0x1.766908p-50f,
     0x1.c77f46p-28f, 0.0f, 0x1.20dffp-69f, 0.0f, 0.0f, 0x1.76b0ecp-5f,
     0x1.940162p-99f, 0.0f, 0.0f, 0.0f, 0x1.b54fa2p-83f, 0.0f, 0x1.2bec7p-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a067d4p-21f, 0.0f, 0x1.103a26p-122f, 0.0f,
     0x1.d2d806p-46f, 0.0f, 0.0f, 0x1.9e0212p-65f, 0x1.1d1738p-58f, 0x1.3489b8p-37f,
     0.0f, 0x1.a08a4cp-79f, 0.0f, 0.0f, 0x1.1b173ap-5f, 0x1.3726f2p-48f,
     0x1.7e1dcp-51f, 0x1.e7b392p-76f, 0.0f, 0.0f, 0x1.7bad8cp-54f, 0x1.de5c86p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5bc88p-67f,
     0x1.0274a4p-7f, 0x1.9b4dcp-68f, 0.0f, 0x1.b9ea58p-20f, 0x1.0484e8p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c25bdep-47f, 0.0f, 0.0f, 0.0f,
     0x1.cd24cap-79f, 0.0f, 0x1.ce9a3p-50f, 0.0f, 0x1.66fd0ap-84f, 0.0f, 0.0f,
     0x1.1cbf6ep-64f, 0.0f, 0x1.2428ccp-26f, 0x1.862d5cp-37f, 0x1.adf258p-16f, 0.0f,
     0.0f, 0.0f, 0x1.c59fa8p-23f, 0x1.2562cp-90f, 0.0f, 0x1.a0112cp-39f,
     0x1.bff6dap-23f, 0.0f, 0.0f, 0.0f, 0x1.362ffcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3ee5ecp-61f, 0.0f, 0.0f, 0x1.e270b6p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f6116p-51f, 0.0f, 0.0f, 0.0f, 0x1.23d102p-72f, 0x1.b9f4fp-84f, 0.0f,
     0x1.b43168p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64305p-22f, 0x1.ab63acp-42f,
     0x1.7d49e8p-102f, 0x1.f6f646p-58f, 0x1.1d1a12p-20f, 0.0f, 0.0f, 0.0f,
     0x1.dd90e4p-48f, 0.0f, 0x1.158576p-60f, 0x1.efee1p-109f, 0.0f, 0x1.f5d5ap-125f,
     0x1.5a88a6p-87f, 0x1.9cece2p-51f, 0.0f, 0.0f, 0x1.a249e2p-38f, 0.0f, 0.0f,
     0x1.2ff1eap-12f, 0.0f, 0x1.a5c554p-43f, 0.0f, 0.0f, 0.0f, 0x1.93f33p-16f, 0.0f,
     0x1.4174f8p-14f, 0x1.30f36ap-17f, 0.0f, 0.0f, 0.0f, 0x1.3e698ap-17f,
     0x1.6a8acap-126f, 0x1.076e52p-35f, 0.0f, 0x1.1b189cp-103f, 0.0f, 0.0f, 0.0f,
     0x1.c2b77ap-95f, 0.0f, 0.0f, 0x1.4978cap-92f, 0x1.4a589p-71f, 0x1.f4ac2ep-14f,
     0.0f, 0.0f, 0x1.8d8eaap-18f, 0x1.c9ee3cp-113f, 0.0f, 0.0f, 0x1.c8597p-72f, 0.0f,
     0.0f, 0.0f, 0x1.358ff8p-99f, 0x1.a471c2p-60f, 0x1.8347e8p-66f, 0x1.277902p-22f,
     0x1.bbc3fp-22f, 0.0f, 0.0f, 0x1.5f4a8p-74f, 0.0f, 0x1.2ceaacp-71f,
     0x1.071836p-21f, 0.0f, 0.0f, 0x1.38b8b8p-49f, 0x1.b52e38p-112f, 0x1.849804p-6f,
     0x1.ba757p-17f, 0.0f, 0x1.150562p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ecaa6p-103f, 0x1.2c48d8p-56f, 0.0f, 0x1.7077a4p-119f, 0.0f, 0x1.907d4p-108f,
     0x1.43d69cp-124f, 0.0f, 0x1.558e9cp-12f, 0x1.9e55eep-83f, 0x1.c1952ap-126f, 0.0f,
     0x1.1b47c2p-65f, 0.0f, 0x1.2ca316p-3f, 0.0f, 0.0f, 0x1.aab62ap-113f, 0.0f, 0.0f,
     0x1.ddbe4p-87f, 0x1.cf323cp-40f, 0.0f, 0x1.6d865ap-92f, 0.0f, 0x1.ed7b2p-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee8f06p-97f, 0x1.9e7408p-30f, 0x1.b77e9p-104f, 0x1.dfd934p-121f,
     0x1.79e2cep-118f, 0x1.96b7d8p-36f, 0.0f, 0x1.a25eb2p-123f, 0x1.38fb28p-62f, 0.0f,
     0.0f, 0x1.c0c3f2p-97f, 0x1.478b7p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0915cp-34f, 0.0f, 0x1.748486p-34f, 0x1.67507p-71f, 0.0f, 0x1.a36638p-98f,
     0x1.d971d6p-53f, 0x1.1ff692p-17f, 0.0f, 0.0f, 0x1.bc90bap-121f, 0x1.3fa338p-82f,
     0.0f, 0.0f, 0.0f, 0x1.681ca2p-75f, 0.0f, 0x1.14a6b4p-62f, 0x1.21affap-43f,
     0x1.892bfap-106f, 0x1.808366p-83f, 0.0f, 0.0f, 0x1.9055acp-11f, 0.0f,
     0x1.53cec4p-5f, 0x1.53deccp-33f, 0x1.cf84c6p-19f, 0x1.cfa5ep-100f,
     0x1.d20d86p-92f, 0.0f, 0x1.660162p-23f, 0x1.1235bcp-40f, 0x1p0f, 0x1.27234ep-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1bf732p-70f, 0x1.d7d4a6p-21f, 0x1.43944ep-89f,
     0x1.6830aep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20943cp-46f, 0x1.e9a492p-66f,
     0x1.12bf72p-79f, 0.0f, 0.0f, 0x1.49b826p-91f, 0.0f, 0x1.73ed36p-121f, 0.0f,
     0x1.17a4dep-52f, 0.0f, 0x1.f8cacp-88f, 0x1.b993cap-1f, 0x1.378986p-125f, 0.0f,
     0x1p0f, 0.0f, 0x1.29ddb2p-51f, 0x1.257e9ap-73f, 0x1.6ef206p-19f, 0x1.49968cp-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.67cfa8p-91f, 0x1.d24d5ep-93f, 0x1.f4c934p-54f,
     0x1.6d0cacp-35f, 0.0f, 0.0f, 0.0f, 0x1.7c8b02p-70f, 0x1.6ed4fcp-10f,
     0x1.196e18p-15f, 0.0f, 0x1.5dd5c8p-27f, 0x1.33d04p-91f, 0.0f, 0x1.1a65cp-98f,
     0x1.236b0cp-113f, 0.0f, 0x1.0d3cc6p-102f, 0.0f, 0.0f, 0.0f, 0x1.9a7bbap-98f,
     0x1.b0f184p-85f, 0x1.76b0cep-51f, 0x1.c9f59ep-63f, 0.0f, 0x1.8e504p-38f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp2 = Sleef_finz_fminf4_avx2128(tmp0, tmp1);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_fminf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fminf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
