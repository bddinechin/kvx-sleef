/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f1_u10purecfma.c --function \
 *     Sleef_finz_atan2f1_u10purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.ba53p-89f, 0.0f, 0x1.66f8d6p-103f, 0x1.38bb12p-54f, 0x1.1c3a14p-64f,
     0x1.4a3cb4p-61f, 0x1.b72a2ep-26f, 0.0f, 0x1.f1f528p-48f, 0x1.3bf2e4p-97f,
     0x1.57b252p-59f, 0x1.ec5394p-6f, 0x1.96976p-30f, 0.0f, 0x1.ba7aap-81f,
     0x1.d7b4c6p-15f, 0.0f, 0.0f, 0x1.d0f25ap-100f, 0.0f, 0x1.98fcfap-27f, 0.0f, 0.0f,
     0x1.4797c6p-10f, 0x1.f1feeep-39f, 0x1.7a1c72p-11f, 0x1.b6a5ccp-3f,
     0x1.f4eebp-46f, 0x1.fa3056p-56f, 0x1.e1c422p-73f, 0.0f, 0.0f, 0.0f,
     0x1.fb7442p-34f, 0x1.f57186p-74f, 0x1.949b04p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6660acp-81f, 0x1.8d8c54p-74f, 0x1.22ca5p-92f, 0x1.224db2p-22f,
     0x1.f9809cp-98f, 0.0f, 0x1.820698p-98f, 0x1.2ddcd4p-107f, 0.0f, 0x1.cdfc6ep-76f,
     0x1.c80312p-79f, 0.0f, 0x1.2ae2dap-2f, 0.0f, 0x1.b0277ap-124f, 0.0f,
     0x1.7a51e8p-47f, 0.0f, 0.0f, 0.0f, 0x1.e19e5cp-124f, 0x1.cb52a2p-118f, 0.0f,
     0x1.34a04ep-125f, 0x1.f1481ap-27f, 0.0f, 0x1.0c449ep-73f, 0.0f, 0.0f, 0.0f,
     0x1.339328p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30e16p-48f, 0.0f, 0.0f,
     0x1.a3ab94p-46f, 0x1.84f90ep-65f, 0x1.b34fb4p-50f, 0x1.0885d4p-55f, 0.0f, 0.0f,
     0x1.61078p-2f, 0x1.53bcfep-103f, 0x1.5506acp-77f, 0x1.01d624p-97f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0bf36p-7f, 0.0f, 0x1.fc276ap-85f,
     0x1.f7b19p-28f, 0.0f, 0.0f, 0x1.6e69cp-118f, 0x1.a5a7fep-82f, 0.0f, 0.0f,
     0x1.ad9b24p-114f, 0x1.8afc6ep-14f, 0x1.9060f2p-18f, 0x1.74f0c2p-98f,
     0x1.e24396p-28f, 0x1.728fbp-11f, 0x1.704416p-18f, 0x1.50f1b4p-86f,
     0x1.2fe2dep-28f, 0.0f, 0.0f, 0x1.6c11c2p-4f, 0.0f, 0x1.f5dd58p-122f, 0.0f,
     0x1.159f22p-102f, 0.0f, 0x1.c8a83ep-37f, 0.0f, 0x1.1e5c1ep-92f, 0x1.6f228ep-38f,
     0x1.fb318p-38f, 0x1.6b72aap-51f, 0.0f, 0.0f, 0x1.6f6984p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e59468p-79f, 0.0f, 0x1.48dc2ap-43f, 0.0f, 0x1.b5c204p-122f, 0.0f, 0.0f,
     0.0f, 0x1.e073acp-71f, 0x1.4cb14p-105f, 0x1.9c2d1cp-5f, 0.0f, 0x1.cd5082p-17f,
     0.0f, 0x1.0f8de4p-98f, 0.0f, 0.0f, 0x1.d3a186p-124f, 0x1.9f58f4p-90f, 0.0f,
     0x1.206468p-1f, 0x1.617adp-21f, 0.0f, 0x1.dfb986p-99f, 0x1.ed049p-15f,
     0x1.32a3bcp-9f, 0.0f, 0x1.5113bap-102f, 0.0f, 0.0f, 0x1.4e495ep-65f,
     0x1.48c0b6p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea4512p-121f,
     0x1.f0f592p-123f, 0x1.ecaf4p-120f, 0x1.916e5ep-91f, 0.0f, 0.0f, 0x1.6aa536p-50f,
     0.0f, 0.0f, 0x1.c5349cp-59f, 0x1.746e2cp-48f, 0.0f, 0x1.c3f828p-80f, 0.0f, 0.0f,
     0x1.f707f8p-18f, 0x1.1a2796p-57f, 0x1.cbc69p-122f, 0.0f, 0x1.c00242p-75f, 0.0f,
     0x1.48fdf6p-70f, 0x1.926c5cp-111f, 0.0f, 0x1.6f273p-119f, 0.0f, 0x1.60d1d2p-58f,
     0x1.899596p-12f, 0x1.593c54p-121f, 0x1.510528p-81f, 0x1.9b7ff2p-83f,
     0x1.e71e24p-60f, 0x1.05f376p-59f, 0.0f, 0.0f, 0.0f, 0x1.4c566ep-39f, 0.0f, 0.0f,
     0.0f, 0x1.9cadecp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a93a48p-103f,
     0x1.ce345ap-107f, 0.0f, 0x1.a19e74p-67f, 0.0f, 0x1.a8b6fcp-124f, 0x1.335db8p-27f,
     0x1.dfa49cp-91f, 0.0f, 0x1.a3133ap-30f, 0.0f, 0.0f, 0x1.1f53dp-1f,
     0x1.335562p-66f, 0.0f, 0.0f, 0.0f, 0x1.9b9c3ap-57f, 0.0f, 0.0f, 0x1.809618p-72f,
     0x1.e947acp-25f, 0.0f, 0.0f, 0x1.8cfbap-30f, 0x1.d5f748p-60f, 0x1.077bfap-95f,
     0.0f, 0x1.4a3d18p-1f, 0x1.abab48p-47f, 0x1.e2e44ap-7f, 0.0f, 0x1.baa05cp-19f,
     0.0f, 0.0f, 0.0f, 0x1.41f2a4p-85f, 0x1.01d752p-62f, 0x1.c13792p-90f, 0.0f, 0.0f,
     0.0f, 0x1.fd6e3cp-55f, 0x1.b8b8c6p-23f, 0x1.81c81cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2fa3cap-6f, 0x1.7dc4dp-124f, 0x1.d33154p-2f, 0.0f, 0.0f, 0x1.d040dep-16f,
     0.0f, 0.0f, 0x1.3c964cp-123f, 0x1.3dc236p-69f, 0x1.4148b4p-102f, 0x1.242082p-99f,
     0.0f, 0.0f, 0x1.ae9deap-73f, 0x1.e1d234p-88f, 0.0f, 0x1.ccdf7p-91f,
     0x1.721706p-14f, 0x1.de551cp-99f, 0.0f, 0x1.dad988p-58f, 0.0f, 0.0f, 0.0f,
     0x1.7afaacp-112f, 0x1.af96b4p-109f, 0x1.c9491cp-30f, 0x1.72b98ep-110f, 0.0f,
     0x1.7b1314p-12f, 0.0f, 0x1.f5c7cap-87f, 0.0f, 0x1.2a6964p-24f, 0x1.880d7ap-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.73aeb2p-31f, 0.0f, 0x1.6b8e38p-114f, 0x1.e6348cp-65f,
     0x1.bfb994p-105f, 0.0f, 0x1.ec3da2p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ea3bfep-50f, 0.0f, 0.0f, 0x1.73436cp-10f, 0.0f, 0.0f, 0.0f, 0x1.dd598ep-12f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cafd9ap-98f, 0x1.eb0988p-14f,
     0.0f, 0x1.32c8d8p-50f, 0.0f, 0x1.27fa86p-120f, 0.0f, 0x1.41968cp-99f, 0.0f,
     0x1.09b12p-16f, 0.0f, 0x1.4a9e3p-30f, 0x1.aef976p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eff0a4p-54f, 0x1.261d1ep-124f, 0x1.4c5c16p-46f, 0.0f, 0x1.9a41eep-51f,
     0.0f, 0x1.0b9fecp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1103d6p-118f,
     0x1.a7eb92p-114f, 0.0f, 0x1.1b9e4cp-13f, 0x1.94147cp-102f, 0.0f, 0x1.779f7ep-92f,
     0x1.d45d84p-63f, 0.0f, 0.0f, 0.0f, 0x1.07bf9ap-2f, 0.0f, 0.0f, 0.0f,
     0x1.e263b8p-80f, 0.0f, 0x1.b2bd6p-38f, 0.0f, 0.0f, 0.0f, 0x1.7f709p-72f,
     0x1.6f687p-27f, 0x1.306f4p-72f, 0x1.99a066p-5f, 0.0f, 0x1.cdb524p-37f,
     0x1.a34548p-111f, 0x1.f42642p-125f, 0x1.ee3b08p-32f, 0.0f, 0x1.a87248p-100f,
     0.0f, 0x1.2146ep-99f, 0x1.3431a6p-27f, 0.0f, 0x1.dc218p-118f, 0x1.03462p-118f,
     0x1.8c644cp-84f, 0.0f, 0x1.cc2dap-85f, 0x1.af24acp-1f, 0x1.20cd74p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a956p-17f, 0x1.ae0336p-37f, 0x1.00951ep-82f,
     0x1.e4db64p-62f, 0.0f, 0.0f, 0.0f, 0x1.a2bd1ap-59f, 0x1.9c3d98p-98f, 0.0f,
     0x1.7c476p-25f, 0.0f, 0.0f, 0x1.e8cb16p-59f, 0.0f, 0.0f, 0.0f, 0x1.557f6p-27f,
     0x1.4a2b7p-34f, 0x1.32610cp-69f, 0.0f, 0x1.8e4d7ep-121f, 0.0f, 0x1.d346ep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c865e8p-60f, 0x1.4e1318p-125f,
     0x1.3fe078p-125f, 0.0f, 0.0f, 0x1.0c1f48p-89f, 0x1.50a022p-108f, 0x1.fe7e48p-71f,
     0.0f, 0x1.a7e662p-47f, 0.0f, 0.0f, 0.0f, 0x1.94e30ep-64f, 0x1.e2d66ep-81f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eabddcp-17f, 0.0f, 0x1.c2e916p-22f,
     0x1.f8fe46p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33250ap-97f, 0.0f, 0x1.511788p-11f,
     0x1.ec78d8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.080ec2p-73f,
     0x1.f5cc7ep-14f, 0.0f, 0x1.0a9a54p-70f, 0x1.85b362p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c99ep-109f, 0x1.709beep-39f, 0x1.53ca94p-122f, 0.0f, 0.0f, 0x1.0ce3f4p-109f,
     0x1.3c12d8p-5f, 0x1.62f8acp-20f, 0.0f, 0.0f, 0.0f, 0x1.15594cp-89f,
     0x1.2b0c5ep-12f, 0x1.282e62p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45536ap-29f,
     0.0f, 0.0f, 0x1.fc6436p-42f, 0x1.9d7daap-84f, 0x1.412c22p-6f, 0x1.706888p-69f,
     0.0f, 0.0f, 0x1.e6ee72p-13f, 0.0f, 0.0f, 0x1.374c8ep-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.46ede6p-85f, 0x1.c4751p-50f, 0.0f, 0x1.e42c0ep-86f,
     0x1.b847b2p-49f, 0x1.5ba142p-56f, 0.0f, 0.0f, 0x1.7cc0f2p-29f, 0x1.6c3038p-95f,
     0x1.71d628p-94f, 0.0f, 0.0f, 0.0f, 0x1.d1e316p-72f, 0x1.284e06p-1f,
     0x1.d2fabap-8f, 0.0f, 0x1.7df77cp-39f, 0x1.0d10aep-75f, 0.0f, 0x1.c5b122p-17f,
     0.0f, 0.0f, 0x1.bda7d4p-70f, 0x1.69b304p-62f, 0x1.fe6172p-91f, 0.0f, 0.0f,
     0x1.0575dcp-106f, 0.0f, 0x1.fc293cp-5f, 0x1.6482dep-101f, 0x1.848e48p-51f, 0.0f,
     0x1.575d9p-55f, 0.0f, 0x1.c42dc8p-26f, 0x1.84bd66p-1f, 0x1.b98c38p-77f,
     0x1.3ab786p-32f, 0.0f, 0.0f, 0x1.e16012p-30f, 0.0f, 0.0f, 0x1.4118f6p-117f,
     0x1.05a378p-65f, 0.0f, 0x1.7eb67ep-7f, 0x1.53b104p-104f, 0x1.ed035cp-58f, 0.0f,
     0.0f, 0x1.a4b5e8p-83f, 0.0f, 0x1.744facp-21f, 0x1.4aa4f4p-1f, 0.0f,
     0x1.68ff96p-28f, 0x1.395bc2p-84f, 0x1.13489cp-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9c923p-69f, 0x1.a36de4p-80f, 0.0f, 0x1.206008p-56f, 0.0f,
     0.0f, 0x1.087a48p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15f90ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7e77cp-65f, 0x1.53f554p-111f, 0.0f,
     0x1.06e4ccp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2739b8p-22f, 0x1.da75f8p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.120032p-121f, 0x1.12878ap-87f, 0x1.483b12p-80f, 0.0f, 0.0f,
     0x1.c0e464p-77f, 0.0f, 0.0f, 0x1.c6fad2p-17f, 0x1.931eccp-67f, 0x1.84f39p-60f,
     0x1.69d74cp-28f, 0x1.238dbap-119f, 0x1.aa28d8p-113f, 0.0f, 0.0f, 0.0f,
     0x1.b74d16p-69f, 0x1.dfa0bp-105f, 0.0f, 0.0f, 0x1.7b671p-120f, 0.0f, 0.0f, 0.0f,
     0x1.933b8cp-70f, 0.0f, 0.0f, 0.0f, 0x1.78306ap-66f, 0.0f, 0.0f, 0.0f,
     0x1.d07284p-79f, 0.0f, 0.0f, 0.0f, 0x1.dbcf7ap-22f, 0x1.a27d44p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.59c5eep-108f, 0.0f, 0x1.23770ap-45f,
     0x1.37b55ap-118f, 0x1.ba6316p-111f, 0.0f, 0x1.9f0b56p-11f, 0x1.9125c6p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1dfa6ap-63f, 0.0f, 0x1.46272ep-17f, 0x1.34ccb6p-77f,
     0x1.d9ea4ap-23f, 0.0f, 0x1.18b1c4p-67f, 0.0f, 0.0f, 0x1.e395fp-105f, 0.0f,
     0x1.211d32p-2f, 0x1.36d608p-21f, 0x1.fcb5e2p-126f, 0x1.ad81bep-11f, 0.0f,
     0x1.549b6ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f04cap-44f, 0.0f,
     0.0f, 0x1.b62a2p-102f, 0x1.6ae5b4p-44f, 0x1.e65de8p-45f, 0x1.dd8c6ap-67f, 0.0f,
     0x1.d6afdap-52f, 0.0f, 0x1.3e8624p-82f, 0.0f, 0.0f, 0x1.eb7a6ep-40f, 0.0f, 0.0f,
     0x1.de8d5p-15f, 0x1.d009b2p-72f, 0.0f, 0x1.c9fdb4p-94f, 0x1.f8d4fp-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d393dep-5f, 0.0f, 0x1.342a2ep-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de9aa4p-14f, 0.0f, 0.0f, 0.0f,
     0x1.3d0c5ap-104f, 0.0f, 0.0f, 0x1.bc2dc4p-110f, 0x1.d87df8p-72f, 0x1.ba4de8p-71f,
     0.0f, 0.0f, 0.0f, 0x1.8e8c02p-106f, 0x1.b2ad68p-21f, 0.0f, 0.0f, 0x1.1433c2p-48f,
     0.0f, 0.0f, 0x1.ee6698p-54f, 0x1.6c7cf6p-25f, 0x1.bb882p-24f, 0x1.0352aep-22f,
     0.0f, 0x1.6af384p-69f, 0x1.b18a5ap-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0eb0ap-18f,
     0x1.6e41bcp-96f, 0.0f, 0x1.6674bp-111f, 0x1.c0a66cp-72f, 0.0f, 0x1.53ce7p-98f,
     0x1.2cf364p-35f, 0x1.447c2ap-41f, 0.0f, 0x1.3291bcp-36f, 0.0f, 0x1.1550b8p-41f,
     0.0f, 0x1.2926e2p-12f, 0.0f, 0.0f, 0x1.154ea6p-35f, 0x1.9f697ep-61f,
     0x1.32c828p-75f, 0x1.0a2618p-52f, 0x1.5b1fb2p-68f, 0.0f, 0x1.850042p-44f,
     0x1.11632ap-54f, 0.0f, 0.0f, 0x1.44f4dcp-118f, 0x1.d8ce46p-96f, 0.0f, 0.0f, 0.0f,
     0x1.7bc67ap-23f, 0x1.a1de62p-98f, 0x1.3f770ap-115f, 0x1.6cd76ap-55f, 0.0f, 0.0f,
     0.0f, 0x1.2983d2p-112f, 0.0f, 0x1.15f3p-44f, 0.0f, 0.0f, 0x1.7bf22ap-55f, 0.0f,
     0.0f, 0x1.8062bap-76f, 0x1.8c381cp-47f, 0.0f, 0.0f, 0x1.fc9d5ep-33f,
     0x1.7efc9ep-12f, 0.0f, 0x1.f6784p-19f, 0.0f, 0.0f, 0x1.13faacp-51f, 0.0f,
     0x1.06acb8p-30f, 0.0f, 0x1.f3b3b8p-78f, 0x1.13aa4cp-36f, 0x1.9eccdp-64f, 0.0f,
     0.0f, 0.0f, 0x1.5709fp-20f, 0.0f, 0x1.80e3p-17f, 0.0f, 0x1.48afa8p-110f,
     0x1.1e91d8p-39f, 0.0f, 0.0f, 0x1.fbe5bcp-124f, 0.0f, 0.0f, 0x1.35e112p-107f,
     0.0f, 0x1.68052ap-85f, 0.0f, 0x1.e17a68p-75f, 0x1.4e7a3p-64f, 0.0f,
     0x1.2e5d8ep-28f, 0.0f, 0.0f, 0x1.263568p-33f, 0x1.94762p-122f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.211b0ap-11f, 0x1.2873d6p-16f, 0.0f, 0.0f, 0x1.e7576p-41f,
     0x1.ea19e8p-40f, 0.0f, 0x1.c3bdcap-88f, 0x1.e73006p-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b5ad56p-94f, 0x1.f43c9ap-13f, 0x1.31171p-45f, 0.0f, 0.0f,
     0x1.53194ap-97f, 0.0f, 0.0f, 0.0f, 0x1.610638p-39f, 0x1.7c6508p-30f, 0.0f, 0.0f,
     0.0f, 0x1.b98938p-17f, 0.0f, 0.0f, 0x1.9ff7dep-33f, 0x1.e2bd2ap-60f,
     0x1.7d56d6p-47f, 0.0f, 0x1.ae5a88p-109f, 0x1.f3586ap-6f, 0x1.491b36p-92f, 0.0f,
     0x1.65d964p-45f, 0.0f, 0.0f, 0.0f, 0x1.0b6fdap-3f, 0.0f, 0.0f, 0.0f,
     0x1.7b8cf8p-5f, 0x1.7da454p-10f, 0x1.bcfeeap-79f, 0.0f, 0x1.0a451cp-26f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac2bc4p-15f, 0.0f, 0.0f, 0.0f, 0x1.51d34ep-23f, 0.0f, 0.0f,
     0x1.acb6e8p-95f, 0.0f, 0x1.6902f6p-44f, 0.0f, 0x1.14e4d2p-107f, 0.0f,
     0x1.f05b22p-73f, 0.0f, 0.0f, 0x1.d8d292p-39f, 0x1.74f806p-104f, 0.0f, 0.0f,
     0x1.15bfe8p-46f, 0x1.8355b4p-34f, 0.0f, 0x1.3cc92ap-112f, 0.0f, 0.0f,
     0x1.b0f72ep-60f, 0x1.e1e1cap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d2608p-17f,
     0x1.b98f9ap-56f, 0x1.a47b06p-42f, 0.0f, 0.0f, 0.0f, 0x1.3ed5e2p-95f,
     0x1.81ec8cp-96f, 0x1.31fce4p-67f, 0x1.0dd8bap-109f, 0x1.7b7f4cp-5f,
     0x1.81193ap-6f, 0x1p0f, 0x1.6245bap-6f, 0.0f, 0x1.57c82cp-93f, 0x1.790d5p-63f,
     0x1.ba227ep-89f, 0.0f, 0.0f, 0.0f, 0x1.077f92p-59f, 0x1.babf4cp-121f, 0.0f, 0.0f,
     0.0f, 0x1.f85184p-57f, 0x1.d47664p-1f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.5c361p-20f, 0x1.ac3f48p-61f, 0.0f, 0.0f, 0.0f, 0x1.aa714p-24f, 0.0f, 0.0f,
     0.0f, 0x1.2e412cp-101f, 0.0f, 0.0f, 0x1.f92392p-84f, 0.0f, 0.0f, 0.0f,
     0x1.df59bap-20f, 0.0f, 0.0f, 0.0f, 0x1.7c90a4p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aaeafap-88f, 0.0f, 0.0f, 0x1.bc370cp-81f, 0.0f, 0.0f, 0x1.8d4a72p-56f, 0.0f,
     0x1.41131ap-38f, 0.0f, 0.0f, 0x1.61d604p-103f, 0x1.f63e0ap-43f, 0.0f,
     0x1.3ccf8cp-59f, 0x1.a8b394p-12f, 0.0f, 0x1.db664ep-17f, 0.0f, 0x1.607ae6p-101f,
     0.0f, 0x1.fe1332p-103f, 0.0f, 0x1.36158ap-110f, 0.0f, 0x1.01426cp-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6e7bap-125f, 0x1.b79a34p-88f, 0.0f, 0x1.565cfcp-15f,
     0.0f, 0.0f, 0x1.52aa4cp-87f, 0.0f, 0x1.5ef868p-86f, 0.0f, 0.0f, 0x1.0d0d72p-6f,
     0.0f, 0x1.d0b0f6p-32f, 0x1.2f5f96p-27f, 0.0f, 0.0f, 0.0f, 0x1.4d1c0ep-3f,
     0x1.0bd6eep-42f, 0x1.73a2d8p-67f, 0x1.80886ep-3f, 0.0f, 0x1.fec268p-79f,
     0x1.53e6cap-16f, 0x1.95511p-19f, 0x1.8955c2p-20f, 0x1.7e4958p-58f,
     0x1.12e10ap-82f, 0x1.d807e6p-6f, 0x1.bfb8dcp-79f, 0x1.f942d4p-111f, 0.0f, 0.0f,
     0.0f, 0x1.1adc2p-20f, 0x1.1fdf1ep-19f, 0.0f, 0.0f, 0x1.c2d5e6p-78f,
     0x1.2ab3bap-23f, 0x1.b939ep-59f, 0x1.2e627p-68f, 0.0f, 0.0f, 0x1.baeb1cp-64f,
     0x1.1bf6eep-14f, 0x1.b92132p-12f, 0x1.34bd6ep-12f, 0x1.0ad18p-55f,
     0x1.52912p-17f, 0.0f, 0.0f, 0.0f, 0x1.98d806p-55f, 0x1.07e81p-70f,
     0x1.7b9f3ep-97f, 0.0f, 0x1.fd7fcep-94f, 0x1.15fbd2p-124f, 0.0f, 0x1.9000acp-7f,
     0x1.15268ap-24f, 0x1.1f9db4p-96f, 0x1.3eabdp-107f, 0.0f, 0x1.8e5a94p-57f,
     0x1.999c02p-30f, 0x1.a8410cp-104f, 0.0f, 0x1.afd5e6p-26f, 0.0f, 0x1.267f56p-85f,
     0x1.6b6492p-118f, 0x1.16c094p-60f, 0x1.85c19ap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.26d392p-120f, 0.0f, 0x1.10170ep-58f, 0.0f, 0x1.e2859ap-3f, 0.0f,
     0x1.25fd56p-100f, 0x1.011f44p-78f, 0.0f, 0x1.91eecp-46f, 0.0f, 0x1.2d67b8p-2f,
     0.0f, 0x1.5a3692p-118f, 0x1.597c14p-31f, 0x1.e13c98p-98f, 0x1p0f, 0.0f,
     0x1.3cb8d2p-22f, 0.0f, 0.0f, 0x1.e78fccp-116f, 0x1.ea23fp-58f, 0.0f, 0.0f,
     0x1.39e0ep-40f, 0.0f, 0.0f, 0x1.64264ep-119f, 0x1.c3d16cp-82f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b0456p-12f, 0x1.c822fap-109f, 0.0f, 0.0f, 0.0f, 0x1.5bf28cp-49f, 0.0f,
     0x1.ecbea6p-68f, 0x1.dbadfep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.039abap-58f,
     0x1.e404eap-119f, 0.0f, 0x1.d7d776p-102f, 0.0f, 0.0f, 0x1.8fce66p-113f,
     0x1.e20edep-123f, 0x1.1eadd6p-114f, 0.0f, 0x1.f18916p-16f, 0x1.5f5668p-78f,
     0x1.c697p-11f, 0x1.ce6988p-72f, 0.0f, 0.0f, 0x1.a67fp-79f, 0x1.e8851ep-89f,
     0x1.5f4a5cp-100f, 0.0f, 0x1.cc03acp-112f, 0.0f, 0.0f, 0x1.3f87b8p-102f,
     0x1.3f4ee8p-21f, 0x1.37bdf8p-8f, 0x1.2a3684p-75f, 0.0f, 0x1.b589d4p-95f, 0.0f,
     0x1.e628e6p-26f, 0x1.b968ap-12f, 0.0f, 0.0f, 0.0f, 0x1.d6cd6ep-32f,
     0x1.5b11dap-69f, 0x1.64692ep-62f, 0x1.ac1eb6p-58f, 0x1.156a4ap-77f, 0.0f,
     0x1.be2f3cp-65f, 0.0f, 0x1.9c7f38p-65f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.c30994p-5f, 0x1.011048p-46f, 0x1.6aceb6p-30f, 0x1.c2cd04p-21f, 0.0f, 0.0f,
     0.0f, 0x1.9571ecp-72f, 0x1.598bbcp-101f, 0.0f, 0x1.9199c6p-80f, 0x1.c7c8b4p-88f,
     0x1.72a8acp-76f, 0.0f, 0.0f, 0x1.35e1bp-14f, 0x1.1df694p-89f, 0x1.827e04p-101f,
     0.0f, 0.0f, 0.0f, 0x1.2d6e4p-59f, 0x1.b0721p-79f, 0x1.acae5cp-79f,
     0x1.dc7aacp-92f, 0x1.121aaep-33f, 0.0f, 0x1.8d0a36p-21f, 0x1.c82726p-103f, 0.0f,
     0.0f, 0.0f, 0x1.a6be1cp-29f, 0.0f, 0.0f, 0.0f, 0x1.2059f8p-27f, 0.0f,
     0x1.2f83p-66f, 0x1p0f, 0x1.830c46p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c2682p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c52796p-61f, 0.0f, 0x1.107abcp-118f,
     0x1.5eae72p-102f, 0x1.24dabcp-72f, 0.0f, 0x1.a0f1aap-67f, 0x1.42835ep-17f,
     0x1.d94e1p-64f, 0.0f, 0x1.fdc39p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f01a44p-59f,
     0x1.553cd2p-69f, 0x1.d35e04p-57f, 0.0f, 0x1.5197eep-57f, 0x1.28c3e8p-92f, 0.0f,
     0.0f, 0x1.cfec9cp-20f, 0.0f, 0x1.ecbb7ep-126f, 0x1.c951c4p-121f,
     0x1.df4cfep-120f, 0x1.290c5ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2efefcp-93f,
     0x1.369224p-104f, 0.0f, 0x1.e771p-32f, 0x1.398824p-34f, 0.0f, 0x1.2bae96p-74f,
     0.0f, 0.0f, 0.0f, 0x1.d590f4p-28f, 0x1.4413dap-6f, 0x1.4a0d5cp-14f,
     0x1.d8c992p-48f, 0x1.b50b3ap-51f, 0.0f, 0x1.be9c6ep-74f, 0x1.864862p-121f,
     0x1.eae4dp-76f, 0x1.d52f64p-67f, 0x1.43f9ccp-24f, 0.0f, 0.0f, 0x1.bbebc8p-102f,
     0x1.af965ep-50f, 0.0f, 0x1.b84094p-112f, 0.0f, 0x1.90a92ap-104f,
     0x1.9d0704p-106f, 0x1.f95204p-25f, 0x1.42df0cp-126f, 0x1.391d9ep-61f, 0.0f,
     0x1.3036bep-120f, 0.0f, 0x1.83c972p-16f, 0.0f, 0x1.2c2c14p-41f, 0x1.e5f1e6p-118f,
     0.0f, 0x1.2194bp-23f, 0x1.29164ep-24f, 0.0f, 0x1.92affcp-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5649dap-1f, 0x1.f6e2b2p-82f, 0x1p0f, 0.0f, 0x1.2a875ep-87f,
     0x1.92155p-75f, 0x1.c5bee6p-122f, 0.0f, 0.0f, 0x1.89cc7ep-113f, 0x1.4c053ep-66f,
     0.0f, 0x1.b22ae8p-18f, 0.0f, 0.0f, 0x1.cfad8ep-9f, 0x1.4e46a6p-87f, 0.0f, 0.0f,
     0x1.8a3048p-31f, 0.0f, 0.0f, 0.0f, 0x1.558ec2p-19f, 0x1.be904ep-37f,
     0x1.6f65fep-119f, 0.0f, 0x1.0f0fccp-42f, 0x1.6272b2p-84f, 0.0f, 0x1.ec5b14p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.efcfbap-82f, 0x1.8dd0f2p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fc06ep-107f, 0x1.416c98p-94f, 0x1.33238ap-66f, 0.0f,
     0x1.b84e56p-40f, 0.0f, 0x1.4622dcp-39f, 0x1.25cf34p-125f, 0.0f, 0.0f,
     0x1.9392ccp-100f, 0.0f, 0x1.5ea3bep-76f, 0x1.e1fa6ap-82f, 0.0f, 0x1.1eaa02p-24f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.9ce186p-27f, 0x1.3e501p-10f, 0.0f, 0x1p0f,
     0.0f, 0x1.f38272p-122f, 0x1.3539fp-113f, 0.0f, 0.0f, 0x1.3a7c64p-123f, 0.0f,
     0.0f, 0x1.1db742p-93f, 0x1.438272p-32f, 0.0f, 0x1.24e5bcp-28f, 0.0f,
     0x1.5c23eep-41f, 0.0f, 0x1.a47fb8p-70f, 0.0f, 0.0f, 0x1.5ba55ep-90f,
     0x1.ba851ep-108f, 0x1.c59d1p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00fefcp-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0f1586p-34f, 0x1.41e244p-81f, 0x1.edbfbap-73f,
     0x1.5572e8p-88f, 0.0f, 0.0f, 0x1.1e2508p-77f, 0x1.5bc46ep-83f, 0x1.1ee944p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.502638p-26f, 0.0f, 0.0f, 0x1.3e25bcp-51f,
     0x1.ee5a5ep-123f, 0.0f, 0.0f, 0x1.ab7efp-82f, 0x1.ee206ap-124f, 0x1.2f8c92p-88f,
     0.0f, 0.0f, 0x1.d08edp-49f, 0x1.2c5a36p-48f, 0.0f, 0.0f, 0.0f, 0x1.89caa2p-40f,
     0x1.fe16dap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f6888p-87f, 0x1.7b412ep-65f, 0.0f,
     0x1.7e4ba6p-71f, 0x1.974b7ap-94f, 0.0f, 0x1.7dfc04p-88f, 0x1.73bd9cp-1f, 0.0f,
     0x1.299814p-93f, 0x1.d6b46ep-17f, 0.0f, 0.0f, 0x1.debd6cp-99f, 0.0f,
     0x1.f64c26p-51f, 0x1.2c532ap-110f, 0.0f, 0x1.493f9cp-114f, 0x1.2e02e4p-38f,
     0x1.17e88ap-52f, 0.0f, 0.0f, 0x1.1a4108p-79f, 0x1.7a1f5ap-26f, 0.0f,
     0x1.1ccefep-126f, 0.0f, 0.0f, 0.0f, 0x1.9cabfcp-90f, 0x1.19c0acp-25f, 0.0f,
     0x1.d37048p-104f, 0x1.7a349cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a7cfcp-89f, 0.0f,
     0x1.fee5cep-108f, 0.0f, 0.0f, 0.0f, 0x1.73223ap-42f, 0.0f, 0.0f, 0x1.5f492cp-45f,
     0.0f, 0.0f, 0.0f, 0x1.05a81ep-121f, 0x1.d7386ep-65f, 0x1.3bf29p-2f, 0.0f,
     0x1.16673ap-30f, 0x1.63df1ep-35f, 0x1.8c5bf6p-34f, 0.0f, 0x1.1ad6a8p-103f, 0.0f,
     0.0f, 0.0f, 0x1.784f5cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bbb48ep-116f,
     0.0f, 0x1.02d32ap-70f, 0x1.71d77ep-63f, 0.0f, 0.0f, 0.0f, 0x1.29fcc8p-46f,
     0x1.5e846p-110f, 0.0f, 0x1.9f836cp-33f, 0x1.16fc44p-45f, 0.0f, 0.0f,
     0x1.99b4d6p-26f, 0.0f, 0x1.761868p-36f, 0x1.4c9c18p-119f, 0x1.60cb52p-33f,
     0x1.b77d4ap-25f, 0x1.642978p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bb078p-102f,
     0x1p0f, 0x1.b6308p-111f, 0.0f, 0x1.60ef9p-29f, 0.0f, 0x1.2f454ep-106f, 0.0f,
     0.0f, 0x1.1d3586p-104f, 0.0f, 0.0f, 0x1.34e5ap-42f, 0x1.98dc36p-73f, 0.0f, 0.0f,
     0.0f, 0x1.75da8ap-24f, 0x1.0c1058p-55f, 0x1.a20388p-121f, 0.0f, 0x1.a4b0a8p-115f,
     0.0f, 0.0f, 0.0f, 0x1.b66bc2p-123f, 0x1.92a506p-37f, 0x1.23aa4p-56f,
     0x1.71bb3ap-76f, 0.0f, 0.0f, 0.0f, 0x1.53d992p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9a9b54p-113f, 0x1.d7c88ap-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b186ep-101f, 0.0f, 0x1.10d834p-40f, 0x1.0b9f38p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.646ca2p-5f, 0.0f, 0.0f, 0x1.11ffa8p-95f, 0.0f, 0.0f,
     0x1.f70adp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92ffap-119f, 0.0f, 0x1.8c9adap-106f,
     0.0f, 0.0f, 0x1.61b198p-48f, 0.0f, 0x1.21cp-14f, 0x1.b86a1ap-6f, 0x1.8e3ac4p-5f,
     0x1.bd4868p-13f, 0.0f, 0.0f, 0x1.2da50ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c4edp-106f, 0x1.ac0bf6p-90f, 0x1.d84728p-110f, 0x1.c450dep-53f, 0.0f, 0.0f,
     0x1.eb74d8p-123f, 0.0f, 0.0f, 0x1.40f57p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc70dap-112f, 0x1.8fe86cp-63f, 0x1.c779ap-120f, 0x1.c97ba8p-122f, 0.0f, 0.0f,
     0.0f, 0x1.7ec7eap-79f, 0.0f, 0.0f, 0x1.657994p-61f, 0.0f, 0x1.bbbfcp-30f, 0.0f,
     0x1.6aa016p-76f, 0.0f, 0.0f, 0.0f, 0x1.61094ap-124f, 0x1.89288ep-23f, 0.0f, 0.0f,
     0x1.e4f9bp-31f, 0x1.e0f9c8p-36f, 0.0f, 0x1.6ba7dep-125f, 0x1.46e88ep-12f, 0.0f,
     0.0f, 0x1.143514p-62f, 0x1.40afd2p-72f, 0x1.8a37a4p-83f, 0.0f, 0x1.7f5216p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e4d68p-91f, 0x1.7142e6p-86f, 0.0f,
     0x1.53465cp-64f, 0.0f, 0.0f, 0x1.8ee012p-19f, 0x1.4e2356p-88f, 0x1.b9a446p-20f,
     0.0f, 0x1.194b5ep-23f, 0x1.7b4dep-59f, 0.0f, 0.0f, 0x1.b9704ap-83f, 0.0f, 0.0f,
     0x1.66e62ep-118f, 0x1.afcap-120f, 0.0f, 0x1.9038eep-79f, 0.0f, 0x1.0924b2p-18f,
     0.0f, 0.0f, 0x1.7dbb7ap-18f, 0.0f, 0.0f, 0x1.8c5436p-100f, 0.0f, 0.0f,
     0x1.e440a4p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.39af68p-111f, 0.0f,
     0x1.469f38p-12f, 0.0f, 0x1.15ab8p-25f, 0x1.f000fap-69f, 0x1.aab87p-3f, 0.0f,
     0x1.c04ddep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bba27cp-27f,
     0x1.81bc7cp-29f, 0x1.7ca5b2p-24f, 0.0f, 0x1.80af1ap-16f, 0.0f, 0x1.404ecep-75f,
     0x1.44addp-96f, 0x1.839984p-85f, 0x1.fcabdcp-29f, 0x1.c8a7ap-44f, 0.0f,
     0x1.84238ep-77f, 0.0f, 0.0f, 0x1.0fc948p-51f, 0.0f, 0x1.3f00b4p-59f, 0.0f,
     0x1.14e958p-15f, 0.0f, 0.0f, 0x1.5f2dd2p-106f, 0x1.860ffep-52f, 0.0f,
     0x1.c54f3ap-78f, 0x1.e3ff16p-58f, 0x1.772288p-76f, 0x1.8b2c9ap-65f,
     0x1.19f808p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32b4e2p-57f, 0x1.9cb48ep-120f, 0.0f,
     0x1.1a363p-108f, 0x1.b90288p-113f, 0x1.1207f6p-107f, 0x1.c4c414p-36f,
     0x1.160516p-84f, 0.0f, 0x1.043716p-124f, 0.0f, 0.0f, 0x1.279e28p-69f,
     0x1.fd7ec6p-102f, 0x1.52ef1ep-21f, 0x1.70cbbep-4f, 0x1.353f9ep-24f, 0.0f,
     0x1.f322e4p-83f, 0.0f, 0x1.4f39a6p-39f, 0.0f, 0.0f, 0x1.ed4bcp-120f,
     0x1.0528dp-35f, 0.0f, 0.0f, 0x1.967642p-45f, 0.0f, 0.0f, 0x1.bb2c88p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c7874cp-119f, 0x1.cbc5e8p-33f, 0.0f, 0x1.e2d67p-62f, 0.0f,
     0x1.8e6ed2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dff282p-47f, 0x1.f3e8ep-12f,
     0.0f, 0.0f, 0x1.29134ep-112f, 0.0f, 0x1.3d4a26p-104f, 0x1.b1df92p-25f, 0.0f,
     0x1.2a0bd2p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca5d28p-45f, 0x1.3319a4p-114f,
     0x1.f834e2p-20f, 0.0f, 0.0f, 0x1.d416ccp-30f, 0x1.5de214p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4bbd6cp-60f, 0x1.dc9098p-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8597ecp-88f, 0.0f, 0.0f, 0.0f, 0x1.59f53ep-5f, 0x1.d7334cp-18f,
     0x1.2bff6cp-69f, 0x1.f17e52p-23f, 0x1.17fd1cp-12f, 0.0f, 0x1.b5675ap-16f, 0.0f,
     0.0f, 0x1.7e0cfp-38f, 0.0f, 0x1.30282ep-20f, 0x1.9cb84ep-98f, 0x1.aa0f32p-40f,
     0.0f, 0x1.1ca042p-96f, 0.0f, 0x1.5894b2p-16f, 0x1.531662p-70f, 0x1.a4902cp-84f,
     0x1.3a11a8p-32f, 0x1.683a56p-46f, 0.0f, 0x1.34c406p-13f, 0.0f, 0x1.39facp-28f,
     0.0f, 0x1.c33e62p-119f, 0.0f, 0.0f, 0x1.f00646p-64f, 0.0f, 0x1.b6eedep-4f, 0.0f,
     0x1.18630cp-88f, 0.0f, 0.0f, 0x1.eb4508p-36f, 0x1.09c7dap-4f, 0x1.3f7cfcp-108f,
     0.0f, 0x1.2d90dp-112f, 0x1.6df7bcp-39f, 0x1.70d568p-50f, 0.0f, 0x1.497c72p-74f,
     0.0f, 0.0f, 0x1.017972p-28f, 0.0f, 0.0f, 0x1.99adf6p-99f, 0.0f, 0x1.23b93ap-58f,
     0.0f, 0x1.a97cd6p-87f, 0x1.4a2604p-74f, 0x1.24e00ep-59f, 0x1.853a0cp-47f, 0.0f,
     0x1.39c23ap-20f, 0.0f, 0.0f, 0x1.07e3fap-6f, 0.0f, 0x1.3ca4bap-29f,
     0x1.353e18p-106f, 0x1.7e7a24p-27f, 0x1.21eb74p-45f, 0.0f, 0.0f, 0x1.efdacep-85f,
     0x1.4c0bcap-8f, 0.0f, 0.0f, 0x1.9fd6bcp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.214e1ep-103f, 0.0f, 0.0f, 0x1.511c12p-125f, 0.0f, 0x1.2cb6b4p-86f, 0.0f,
     0.0f, 0x1.2c8b78p-62f, 0x1.174cap-3f, 0x1.6f093cp-31f, 0x1.d8ca34p-88f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_atan2f1_u10purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_atan2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atan2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
