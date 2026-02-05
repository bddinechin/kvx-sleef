/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif4_u35kvx.c --function Sleef_sincospif4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.a655p-44f, 0x1.e16a0cp-34f, 0x1.88ce6cp-28f, 0x1.3511a6p-59f, 0.0f, 0.0f,
     0.0f, 0x1.5c9704p-40f, 0x1.dafdep-89f, 0.0f, 0x1.b2bbc2p-52f, 0.0f, 0.0f,
     0x1.a550eap-108f, 0.0f, 0.0f, 0x1.6e32a8p-37f, 0x1.d86548p-70f, 0.0f,
     0x1.735956p-91f, 0x1.0c2e34p-101f, 0x1.4ab886p-20f, 0x1.cac6e8p-35f, 0.0f, 0.0f,
     0x1.dc1d36p-23f, 0.0f, 0.0f, 0x1.33a406p-26f, 0.0f, 0x1.95982ep-93f,
     0x1.dd37dp-85f, 0x1.977788p-121f, 0.0f, 0.0f, 0.0f, 0x1.b3aeacp-10f,
     0x1.3718bap-44f, 0.0f, 0x1.54c568p-30f, 0.0f, 0x1.bdb64ep-58f, 0.0f,
     0x1.b0c78ep-82f, 0.0f, 0x1.293edep-44f, 0.0f, 0.0f, 0.0f, 0x1.ada656p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0e95cp-23f, 0x1.6e90aep-28f, 0.0f, 0.0f,
     0.0f, 0x1.35ae2p-45f, 0.0f, 0.0f, 0x1.6860ep-125f, 0.0f, 0x1.02489ep-77f, 0.0f,
     0x1.efc072p-90f, 0.0f, 0x1.fe07a4p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b119p-88f,
     0.0f, 0x1.ac3906p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7aab7cp-84f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.eba678p-73f, 0.0f,
     0x1.8d17f2p-121f, 0x1.c78efep-58f, 0x1.6d3172p-69f, 0x1.d292b8p-88f, 0.0f, 0.0f,
     0x1.648a14p-59f, 0x1.8229b4p-40f, 0.0f, 0x1.be5a72p-55f, 0x1.2846f6p-112f,
     0x1.949bdep-25f, 0.0f, 0.0f, 0.0f, 0x1.e37fecp-18f, 0x1.f167fep-19f,
     0x1.40c98ap-125f, 0.0f, 0x1.9b4a4p-109f, 0x1.168422p-66f, 0.0f, 0x1.efa982p-107f,
     0.0f, 0.0f, 0x1.e8254ep-95f, 0x1.e2a1aep-30f, 0.0f, 0.0f, 0x1.7c9c0ap-66f,
     0x1.c076b8p-116f, 0.0f, 0x1.46438ap-47f, 0x1.1fa8p-38f, 0x1.92b992p-123f,
     0x1.d2f726p-78f, 0x1.592e12p-78f, 0.0f, 0x1.4e9392p-1f, 0x1.b7c812p-13f, 0.0f,
     0x1.b22052p-26f, 0x1.5a9facp-75f, 0x1.35829ep-10f, 0x1.04788p-4f,
     0x1.f8b414p-52f, 0x1.9c1956p-102f, 0x1.4d3104p-81f, 0.0f, 0.0f, 0x1.90ab18p-21f,
     0x1.4f46p-15f, 0x1.c92132p-57f, 0x1.bb0e4p-75f, 0x1.0f0fa4p-46f, 0x1.e1f45cp-64f,
     0.0f, 0.0f, 0x1.bfca66p-48f, 0x1.b9a49cp-116f, 0x1.cc019ep-124f, 0.0f,
     0x1.490272p-36f, 0x1.89584ap-105f, 0x1.7b3a3p-33f, 0.0f, 0.0f, 0x1.3e8c58p-113f,
     0.0f, 0.0f, 0x1.1a1856p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0033ap-84f,
     0x1.0f1a1cp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c58ap-104f, 0.0f,
     0x1.dd854ap-7f, 0.0f, 0x1.ece5dap-62f, 0x1.9ce68p-48f, 0.0f, 0x1.574d14p-19f,
     0x1.5689e2p-119f, 0.0f, 0x1.472468p-114f, 0x1.19e77ap-105f, 0.0f,
     0x1.794d46p-110f, 0x1.7fef7cp-112f, 0x1.bf465p-27f, 0.0f, 0x1.a2f7fp-84f, 0.0f,
     0x1.319658p-120f, 0x1.0259a4p-78f, 0.0f, 0x1.cf851ep-9f, 0.0f, 0x1.b3c44cp-60f,
     0.0f, 0x1.369b6cp-115f, 0.0f, 0x1.c25cf4p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60282ap-19f, 0x1.cb7e34p-7f, 0x1.b08b86p-24f, 0.0f, 0.0f, 0x1.59b7e4p-108f,
     0.0f, 0.0f, 0x1.deb5cep-99f, 0x1.4fa418p-80f, 0.0f, 0x1.a4ddf6p-28f, 0.0f,
     0x1.1a32ecp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a19ba2p-46f, 0x1.e3c0c6p-86f, 0.0f,
     0x1.8e7096p-18f, 0x1.d9f2dcp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60f4a6p-3f, 0x1.3679ccp-80f, 0x1.0ba872p-31f, 0.0f, 0x1.d2faa4p-69f, 0.0f,
     0x1.f67696p-55f, 0.0f, 0.0f, 0x1.3f26a6p-87f, 0.0f, 0x1.4fe86p-12f,
     0x1.d31ba6p-86f, 0x1.90e178p-30f, 0.0f, 0.0f, 0x1.4d9ac8p-34f, 0.0f,
     0x1.ce8dbap-121f, 0x1.d64b5p-54f, 0x1.5f0d66p-85f, 0x1.2a45bp-73f,
     0x1.969d7ap-25f, 0.0f, 0x1.f1d6aap-8f, 0.0f, 0x1.35b7acp-45f, 0x1.d77c9cp-22f,
     0x1.56231ap-66f, 0.0f, 0x1.edf486p-86f, 0.0f, 0x1.a7e824p-82f, 0x1.733f1p-114f,
     0x1.c163fp-27f, 0x1.ad8d9p-24f, 0x1.ff9e4ep-52f, 0.0f, 0x1.95d61ep-4f,
     0x1.501be8p-106f, 0x1.868348p-98f, 0.0f, 0.0f, 0.0f, 0x1.0e47e6p-32f,
     0x1.c9d2dep-7f, 0.0f, 0x1.1182bep-70f, 0.0f, 0x1.5b8e5ep-74f, 0x1.4a504ap-39f,
     0x1.174b54p-43f, 0.0f, 0x1.4245aep-81f, 0x1.c7d268p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fd3d9cp-17f, 0.0f, 0x1.0690f2p-54f, 0.0f, 0x1.fbc1aep-66f,
     0x1.20bb5ep-49f, 0x1.c1bbe4p-36f, 0.0f, 0.0f, 0.0f, 0x1.5ece04p-51f, 0.0f,
     0x1.747236p-88f, 0x1.653c56p-56f, 0.0f, 0x1.d2c97cp-74f, 0x1.030c36p-54f, 0.0f,
     0x1.1e2b36p-97f, 0.0f, 0.0f, 0.0f, 0x1.8f213p-112f, 0.0f, 0x1.b3b35cp-43f, 0.0f,
     0x1.3909fp-8f, 0x1.f991cep-89f, 0x1.9d1cc6p-56f, 0.0f, 0x1.892c2ap-66f,
     0x1.74b752p-114f, 0x1.a01b46p-50f, 0x1.370c62p-98f, 0x1.c4f314p-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0f9f78p-45f, 0.0f, 0x1.0693a2p-2f, 0.0f, 0x1.2a8b98p-125f,
     0x1.13f832p-100f, 0.0f, 0x1.2bd1bp-108f, 0.0f, 0.0f, 0x1.77449p-65f,
     0x1.f47cccp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0eceep-113f, 0x1.9a0a54p-72f,
     0x1.549d9cp-67f, 0x1.67fe1ap-61f, 0x1.82326ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.da9c96p-8f, 0x1.a210fep-24f, 0x1.e78608p-58f, 0x1.d790ep-109f,
     0x1.4aaf6cp-13f, 0.0f, 0x1.28dp-108f, 0x1.11999ep-16f, 0.0f, 0.0f,
     0x1.38d66cp-10f, 0x1.136b96p-67f, 0.0f, 0x1.54fec2p-40f, 0x1.822a8cp-76f, 0.0f,
     0x1.bf1c08p-89f, 0.0f, 0.0f, 0.0f, 0x1.45cba6p-17f, 0.0f, 0x1.48bf78p-92f, 0.0f,
     0.0f, 0x1.0668a6p-28f, 0x1.0b5e5p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.374618p-76f,
     0.0f, 0x1.718394p-75f, 0x1.8d1f4ep-106f, 0.0f, 0x1.6ed5ecp-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d1f2e6p-52f, 0.0f, 0x1.92ac62p-105f, 0.0f, 0x1.55e428p-36f,
     0x1.d6088ep-70f, 0x1.319bfap-91f, 0x1.7625ap-95f, 0.0f, 0.0f, 0x1.095c2p-22f,
     0.0f, 0x1.9bf7e4p-84f, 0.0f, 0x1.aea608p-81f, 0.0f, 0.0f, 0.0f, 0x1.197d2cp-6f,
     0x1.6746d8p-51f, 0.0f, 0x1.d174f8p-71f, 0.0f, 0.0f, 0x1.69d566p-13f,
     0x1.832e5p-22f, 0x1.35eebap-37f, 0x1.599fe8p-30f, 0x1.ba9d1ep-125f,
     0x1.27d452p-111f, 0x1.a7e072p-15f, 0x1.9321ap-28f, 0.0f, 0.0f, 0x1.9276f4p-76f,
     0x1.7b6f0cp-120f, 0x1.2a1f2cp-51f, 0.0f, 0x1.7de4a4p-38f, 0.0f, 0.0f,
     0x1.9ac0e6p-63f, 0.0f, 0x1.a024e6p-81f, 0.0f, 0.0f, 0x1.e64052p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61cab2p-25f, 0.0f, 0x1.54824ap-107f, 0x1.bb0522p-89f, 0.0f,
     0x1.b996bp-28f, 0.0f, 0.0f, 0x1.8fcf12p-72f, 0.0f, 0x1.4dd1c6p-38f, 0.0f,
     0x1.1b6498p-82f, 0x1.31803ep-17f, 0x1.f2222ap-59f, 0.0f, 0x1.71b6fep-24f,
     0x1.422896p-3f, 0.0f, 0x1.44ee34p-116f, 0x1.ad054ap-108f, 0x1.aa268cp-14f, 0.0f,
     0x1.c66baep-96f, 0.0f, 0x1.0b7c0ap-102f, 0.0f, 0x1.2b78dp-26f, 0x1.33c8a4p-51f,
     0x1.0d7b64p-13f, 0.0f, 0x1.2c4374p-71f, 0.0f, 0.0f, 0x1.befd2p-43f,
     0x1.1ee788p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.175a9cp-67f, 0x1.fbbe5cp-79f,
     0x1.635454p-47f, 0.0f, 0.0f, 0.0f, 0x1.c98ef2p-8f, 0.0f, 0x1.47952ep-93f,
     0x1.170698p-77f, 0x1.a9efbcp-50f, 0.0f, 0x1.c8bea4p-12f, 0x1.e1f262p-105f, 0.0f,
     0.0f, 0.0f, 0x1.26d992p-45f, 0.0f, 0x1.8ee724p-113f, 0x1.ba51b2p-43f,
     0x1.f753dap-54f, 0.0f, 0x1.b85166p-18f, 0.0f, 0x1.834f12p-98f, 0.0f, 0.0f,
     0x1.16478ep-5f, 0.0f, 0.0f, 0x1.0a2b36p-90f, 0.0f, 0x1.e3d848p-36f,
     0x1.f8fd68p-91f, 0x1.fd571p-98f, 0.0f, 0x1.bfe3e2p-33f, 0.0f, 0.0f,
     0x1.290f44p-87f, 0x1.ea3becp-99f, 0x1.fbc36ep-121f, 0x1.f2f624p-30f,
     0x1.e3d384p-35f, 0.0f, 0x1.29819cp-47f, 0.0f, 0x1.24e232p-13f, 0x1.4f6c1ep-89f,
     0x1.499714p-40f, 0.0f, 0x1.78dfe4p-101f, 0x1.5bcedap-101f, 0x1.22a47cp-37f,
     0x1.b08b36p-104f, 0.0f, 0.0f, 0x1.346f0ep-110f, 0.0f, 0x1.02903ap-73f, 0.0f,
     0.0f, 0x1.53c9b8p-122f, 0.0f, 0.0f, 0.0f, 0x1.6e2066p-16f, 0x1.9b95a2p-105f,
     0.0f, 0x1.e59e8ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.21722cp-16f,
     0x1.4a3fp-59f, 0x1.d53458p-115f, 0.0f, 0x1.61a3b4p-44f, 0x1.80c746p-41f,
     0x1.4e9d7ep-4f, 0.0f, 0.0f, 0x1.bd31ccp-34f, 0x1.edf994p-32f, 0.0f,
     0x1.94bab2p-110f, 0x1.d5f4dap-84f, 0.0f, 0.0f, 0x1.6c59e6p-35f, 0x1.8d11a4p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8108d2p-40f, 0.0f, 0.0f,
     0.0f, 0x1.8e5102p-62f, 0x1.b26324p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77cccp-71f,
     0x1.3fc3dap-52f, 0x1.15b806p-30f, 0x1.5925f8p-12f, 0.0f, 0x1.5f61d8p-56f,
     0x1.8be526p-102f, 0x1.e336fep-7f, 0x1.dc3ac2p-15f, 0.0f, 0x1.f64d3ap-77f,
     0x1.78af16p-13f, 0.0f, 0.0f, 0.0f, 0x1.47338ep-27f, 0x1.003b0cp-105f, 0.0f, 0.0f,
     0x1.359d42p-25f, 0x1.77060cp-64f, 0.0f, 0.0f, 0x1.0f0a78p-126f, 0x1.77a33cp-30f,
     0.0f, 0.0f, 0x1.cff012p-112f, 0x1.ba10ap-17f, 0.0f, 0x1.7bcfccp-87f,
     0x1.048256p-112f, 0.0f, 0.0f, 0.0f, 0x1.a95b3ep-8f, 0.0f, 0x1.322ep-16f, 0.0f,
     0.0f, 0x1.9d473ep-50f, 0x1.d609a6p-44f, 0.0f, 0.0f, 0x1.216fdp-94f,
     0x1.532e96p-92f, 0x1.f65dbcp-21f, 0x1.435c2ap-75f, 0.0f, 0x1.4fe156p-68f,
     0x1.ce21a4p-75f, 0x1.89ad46p-45f, 0x1.8c35f2p-102f, 0.0f, 0.0f, 0x1.107b7ep-90f,
     0x1.7cc552p-60f, 0x1.988eacp-107f, 0.0f, 0.0f, 0x1.62e064p-117f,
     0x1.11503ep-105f, 0.0f, 0.0f, 0x1.acd3a4p-110f, 0x1.d627fap-100f, 0.0f,
     0x1.41ec5p-21f, 0x1.314b94p-4f, 0x1.ccebdcp-6f, 0x1.021582p-63f, 0.0f, 0.0f,
     0.0f, 0x1.13945cp-44f, 0.0f, 0x1.ed611cp-113f, 0x1.867adcp-124f, 0x1.f392aap-71f,
     0.0f, 0x1.120e18p-117f, 0x1.9d04a2p-33f, 0x1.ef831p-104f, 0.0f, 0x1.cd3278p-125f,
     0.0f, 0.0f, 0x1.4226dcp-98f, 0x1.91aeb2p-22f, 0x1.7cfb98p-59f, 0x1.aa2bb6p-106f,
     0.0f, 0.0f, 0.0f, 0x1.0b6578p-59f, 0.0f, 0x1.4e6deep-122f, 0.0f, 0x1.74d076p-30f,
     0x1.ad877p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf2dfap-74f, 0x1.c8d98ap-67f,
     0x1.4f38fep-20f, 0x1.7f82b4p-74f, 0.0f, 0.0f, 0x1.76ca1ap-38f, 0.0f,
     0x1.e607ap-46f, 0.0f, 0x1.43efe8p-114f, 0.0f, 0.0f, 0.0f, 0x1.8646cep-98f, 0.0f,
     0x1.6b2c5ap-69f, 0x1.6549b2p-94f, 0.0f, 0x1.cb3d18p-2f, 0.0f, 0x1.e359e2p-11f,
     0.0f, 0x1.247a9cp-43f, 0x1.4f6dc2p-15f, 0.0f, 0.0f, 0x1.ff8e1ap-37f,
     0x1.9adcb8p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85e214p-88f, 0.0f, 0x1.f2905ap-98f,
     0x1.0ffe76p-114f, 0.0f, 0.0f, 0.0f, 0x1.cbe334p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f115e4p-71f, 0.0f, 0x1.273cf6p-56f, 0x1.a322aep-49f, 0.0f, 0.0f,
     0x1.57351p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19687ep-45f, 0.0f,
     0x1.bbb964p-62f, 0.0f, 0x1.b4cf3cp-34f, 0.0f, 0x1.c1dad6p-26f, 0x1.6a3e14p-76f,
     0.0f, 0.0f, 0x1.4154f2p-70f, 0.0f, 0x1.84679ep-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68829p-38f, 0.0f, 0.0f, 0x1.3d2c58p-65f, 0.0f, 0.0f, 0x1.d782dp-91f, 0.0f,
     0x1.1593ap-74f, 0x1.43c9fap-12f, 0x1.95dcf2p-34f, 0x1.6a5c1cp-18f, 0.0f, 0.0f,
     0.0f, 0x1.4812e8p-24f, 0.0f, 0x1.226d2p-64f, 0.0f, 0x1.37f60ep-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fb72cp-50f, 0.0f, 0.0f, 0x1.d8aa86p-62f, 0x1.d629d6p-95f,
     0.0f, 0.0f, 0x1.5a3458p-107f, 0x1.d23fcep-98f, 0x1.bbd2d8p-17f, 0x1.71a8eap-84f,
     0.0f, 0.0f, 0x1.8e401cp-108f, 0x1.a55576p-122f, 0x1.838cfp-126f, 0x1.23e6f4p-39f,
     0.0f, 0.0f, 0.0f, 0x1.ca325ep-3f, 0x1.e32afp-117f, 0.0f, 0.0f, 0x1.21f11p-27f,
     0.0f, 0x1.7f58e8p-17f, 0x1.0d99ep-42f, 0x1.f1406cp-102f, 0x1.b86918p-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.71088ap-87f, 0.0f, 0x1.4833d6p-28f, 0x1.fe3ebcp-13f, 0.0f,
     0x1.befa86p-43f, 0x1.853876p-97f, 0.0f, 0x1.f1ccbcp-26f, 0.0f, 0x1.c95dfp-23f,
     0.0f, 0x1.6c3dc2p-20f, 0.0f, 0.0f, 0x1.2e2e3cp-43f, 0x1.a60836p-96f,
     0x1.2bb824p-49f, 0x1.5de4f2p-68f, 0x1.99ef38p-77f, 0x1.db62c2p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3f3dcap-59f, 0.0f, 0.0f, 0.0f, 0x1.2ed22cp-69f, 0x1.97226ap-108f,
     0.0f, 0x1.e2b566p-91f, 0.0f, 0x1.d6e98cp-39f, 0.0f, 0x1.b1a1b6p-14f,
     0x1.f70d1p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ff9f6p-67f, 0x1.a9f9ecp-95f, 0.0f,
     0.0f, 0x1.1818a4p-14f, 0.0f, 0x1.86272ep-59f, 0x1.4e6836p-22f, 0x1.5e9776p-89f,
     0.0f, 0.0f, 0x1.81ba6ep-67f, 0.0f, 0x1.2b0462p-92f, 0x1.ee1bc4p-8f, 0.0f,
     0x1.441156p-8f, 0.0f, 0.0f, 0x1.48db72p-112f, 0x1.857d5ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.7f34bcp-73f, 0x1.2d4582p-40f, 0.0f, 0x1.0dd47p-15f, 0x1.3544fp-14f,
     0x1.c33b64p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6962f6p-93f, 0.0f,
     0x1.e7c72p-48f, 0x1.8b6d8cp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d9d048p-79f,
     0x1.9e1f42p-56f, 0x1.780a54p-7f, 0x1.df8f02p-92f, 0.0f, 0x1.72c156p-85f, 0.0f,
     0.0f, 0x1.409e8p-101f, 0.0f, 0x1.75c598p-117f, 0.0f, 0x1.f290ccp-37f, 0.0f,
     0x1.b93386p-33f, 0.0f, 0x1.2c44c6p-10f, 0x1.db0ff2p-64f, 0.0f, 0.0f,
     0x1.8b78c8p-47f, 0x1.e93c06p-82f, 0.0f, 0x1.211968p-96f, 0.0f, 0x1.cc2c18p-112f,
     0.0f, 0x1.075c6ap-62f, 0.0f, 0.0f, 0.0f, 0x1.8df7f2p-111f, 0.0f, 0.0f, 0.0f,
     0x1.63bfbap-87f, 0.0f, 0x1.0e759p-102f, 0.0f, 0.0f, 0x1.2fc5fap-91f,
     0x1.8825f4p-91f, 0x1.3b9756p-106f, 0.0f, 0x1.79e884p-1f, 0.0f, 0x1.0f4a48p-63f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b074ap-123f,
     0x1.ff3924p-60f, 0.0f, 0.0f, 0.0f, 0x1.95c5acp-68f, 0x1.59c88cp-66f, 0.0f,
     0x1.463f5ep-62f, 0x1.5d1ea6p-27f, 0.0f, 0x1.90634ap-125f, 0.0f, 0x1.b997aep-49f,
     0x1.a100aep-62f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospif4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincospif4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincospif4_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
