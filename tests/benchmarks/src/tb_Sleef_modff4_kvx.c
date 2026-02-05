/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modff4_kvx.c --function Sleef_modff4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.181ab4p-24f, 0x1.1f5234p-3f, 0x1.3e3d2p-84f, 0.0f, 0.0f,
     0x1.f26d8ep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.747326p-117f, 0.0f,
     0x1.66df6cp-74f, 0x1.b73596p-117f, 0x1.e404c6p-105f, 0x1.72bfbp-46f, 0.0f, 0.0f,
     0.0f, 0x1.d14836p-72f, 0x1.a7182cp-17f, 0x1.0c51cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.f5dc9ep-20f, 0.0f, 0.0f, 0x1.82f7e2p-35f, 0.0f, 0.0f, 0x1.5e3162p-118f, 0.0f,
     0.0f, 0x1.ac49aap-82f, 0.0f, 0.0f, 0x1.015c26p-37f, 0x1.51336ep-73f,
     0x1.813502p-108f, 0x1.dd579ep-32f, 0x1.7e3b0cp-48f, 0x1.c74b4cp-114f,
     0x1.1d5d2cp-61f, 0.0f, 0x1.d5f198p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a42b4p-1f,
     0x1.0bb58ap-57f, 0x1p0f, 0x1.b7808ap-123f, 0x1.46ccbep-81f, 0x1.0df48ap-108f,
     0.0f, 0x1.b6b142p-5f, 0.0f, 0x1.35eac6p-14f, 0x1.2d5708p-92f, 0.0f,
     0x1.38ce38p-39f, 0.0f, 0x1.01bba4p-109f, 0x1.77500ap-95f, 0x1.b490bcp-100f,
     0x1.bdca02p-125f, 0.0f, 0.0f, 0x1.53847ep-94f, 0x1.45b9ecp-65f, 0x1.db4858p-81f,
     0x1.11644ep-110f, 0.0f, 0x1.04c22ep-121f, 0.0f, 0.0f, 0.0f, 0x1.748b66p-91f,
     0x1.b94df8p-103f, 0.0f, 0x1.d586f8p-50f, 0.0f, 0x1.5b4b64p-116f, 0x1.84ca8ep-5f,
     0.0f, 0x1.72ec54p-120f, 0x1.94fbf6p-97f, 0.0f, 0.0f, 0.0f, 0x1.af776p-21f,
     0x1.fd45cap-57f, 0x1.ca221p-16f, 0.0f, 0.0f, 0.0f, 0x1.89e12ap-46f,
     0x1.459f6ap-42f, 0x1.995c8p-18f, 0x1.4b9632p-95f, 0x1.28b1c6p-47f,
     0x1.0f304ap-112f, 0x1.d26d94p-22f, 0x1.15f38p-80f, 0x1.4ce492p-62f,
     0x1.9608ccp-26f, 0x1.9db36ap-58f, 0x1.2159b6p-78f, 0.0f, 0x1.a3f3e4p-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b3669p-15f, 0.0f, 0x1.d7e7fep-18f, 0x1.28940cp-121f,
     0x1.0c8516p-91f, 0x1.b3731ep-13f, 0.0f, 0.0f, 0x1.fef36p-30f, 0.0f,
     0x1.e7558ap-5f, 0x1.f8a676p-1f, 0.0f, 0.0f, 0.0f, 0x1.3a4ec4p-19f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4c4db8p-21f, 0x1.3687eep-113f, 0x1.79fa96p-31f, 0.0f,
     0x1.4adaeap-65f, 0x1.f184fp-123f, 0.0f, 0.0f, 0x1.b922aap-25f, 0.0f,
     0x1.088da6p-12f, 0.0f, 0x1.823ca2p-36f, 0.0f, 0x1.bbbd7p-115f, 0x1.0b8d66p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b950cp-42f, 0.0f, 0.0f, 0x1.f271dep-19f, 0.0f,
     0x1.485d0cp-27f, 0.0f, 0.0f, 0x1.c98e64p-32f, 0.0f, 0x1.2f688cp-61f,
     0x1.f7a8dep-53f, 0.0f, 0x1.9c7a48p-32f, 0x1.74677p-117f, 0.0f, 0x1.846fc2p-45f,
     0x1.a975c8p-24f, 0.0f, 0.0f, 0x1.fb07cep-69f, 0x1.548274p-70f, 0x1.2e0136p-61f,
     0.0f, 0x1.4fd5d2p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.773bp-40f, 0x1.344264p-115f,
     0.0f, 0x1.733176p-24f, 0x1.942606p-73f, 0x1.0799bep-32f, 0.0f, 0.0f,
     0x1.bc86eap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67d81ep-34f,
     0x1.1f86a4p-91f, 0x1.b78212p-6f, 0.0f, 0x1.09980ap-32f, 0x1.b738dp-85f, 0.0f,
     0.0f, 0x1.cd668cp-11f, 0x1.283ec2p-34f, 0.0f, 0.0f, 0.0f, 0x1.6faeaep-62f,
     0x1.fda892p-53f, 0x1.ac62cap-84f, 0x1.28b46ap-52f, 0x1.accf62p-109f,
     0x1.a3698cp-46f, 0.0f, 0.0f, 0x1.8aa366p-118f, 0x1.288bbep-27f, 0x1.150318p-96f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b0aecp-11f, 0x1.0f9c84p-44f, 0.0f, 0.0f,
     0x1.be5228p-82f, 0.0f, 0.0f, 0.0f, 0x1.bc667ap-79f, 0x1.f115a4p-59f, 0.0f,
     0x1.539d96p-3f, 0.0f, 0x1.5cb62ap-27f, 0.0f, 0.0f, 0x1.cc78d2p-95f,
     0x1.53435cp-111f, 0x1.008d4ap-16f, 0x1.3c84bep-50f, 0.0f, 0x1.79c652p-83f,
     0x1.e46778p-37f, 0x1.5d02b8p-3f, 0x1.619ab2p-46f, 0.0f, 0x1.3c0ee4p-84f,
     0x1.ce7bdep-77f, 0x1.0144bep-64f, 0.0f, 0x1.5a2634p-72f, 0.0f, 0.0f,
     0x1.25197p-48f, 0x1.e7e90ap-28f, 0.0f, 0x1.4e4574p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60a2a4p-113f, 0x1.7c9dbcp-70f, 0x1.84c282p-42f, 0.0f, 0.0f, 0x1.685d88p-62f,
     0x1.2b5092p-119f, 0x1.90802cp-87f, 0x1.4a1822p-66f, 0x1.728e3ep-124f,
     0x1.92d40ap-94f, 0.0f, 0x1.c858a8p-8f, 0.0f, 0.0f, 0.0f, 0x1.4243f2p-115f,
     0x1.699614p-92f, 0.0f, 0x1.7e981ep-30f, 0.0f, 0x1.ec2d28p-40f, 0x1.04035ep-83f,
     0.0f, 0x1.eb7f7cp-83f, 0x1.6c9296p-73f, 0x1.952bf8p-10f, 0x1.2ca216p-72f,
     0x1.2ea3a8p-105f, 0x1.286612p-62f, 0.0f, 0.0f, 0.0f, 0x1.30b902p-71f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dd444ap-9f, 0x1.6dcb64p-20f, 0x1.154018p-26f, 0x1.75f7a4p-6f,
     0.0f, 0x1.915386p-88f, 0x1.2b6c82p-52f, 0x1.9cea66p-53f, 0x1.29e87cp-23f,
     0x1.7998e2p-90f, 0x1.36ca04p-98f, 0x1.8f7bcap-31f, 0x1.046b54p-57f, 0.0f,
     0x1.eaf14cp-59f, 0.0f, 0x1.285456p-107f, 0x1.d6d92cp-62f, 0.0f, 0.0f,
     0x1.bd622ap-32f, 0x1.eb4cb4p-66f, 0.0f, 0x1.ddeeaap-75f, 0x1.1e9e5cp-24f,
     0x1.e9ecp-93f, 0x1.4b6a7ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7403p-97f,
     0x1.944b8ep-51f, 0.0f, 0x1.0c33e8p-26f, 0.0f, 0x1.7417eep-113f, 0.0f, 0.0f,
     0x1.d94436p-68f, 0x1.d5016cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa438cp-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c9376p-17f, 0.0f, 0x1.6ee6bep-32f, 0x1.156568p-76f,
     0x1.9366b4p-119f, 0.0f, 0.0f, 0x1.03cdf8p-33f, 0x1.1d7ed2p-110f, 0x1.464a7ep-6f,
     0.0f, 0x1.92c566p-121f, 0.0f, 0x1.291e9p-116f, 0.0f, 0x1.b0908ep-92f, 0.0f,
     0x1.bd58e8p-106f, 0x1.3ce048p-93f, 0x1.bdb102p-108f, 0x1.84e93ep-4f, 0.0f,
     0x1.727dfcp-87f, 0x1.640648p-101f, 0.0f, 0.0f, 0x1.737184p-89f, 0.0f,
     0x1.76a404p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5711ep-7f, 0.0f, 0.0f,
     0x1.f47646p-18f, 0x1.61b028p-110f, 0x1.5bf99cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.b4a0e4p-63f, 0.0f, 0.0f, 0x1.2ef3ep-67f, 0.0f, 0x1.6b53cap-48f, 0.0f, 0.0f,
     0x1.f6cf7p-42f, 0x1.ef2afcp-118f, 0x1.c40c42p-125f, 0x1.31529ep-34f, 0.0f,
     0x1.0fe5ap-9f, 0x1.48555cp-77f, 0.0f, 0.0f, 0x1.cf07f8p-22f, 0x1.bcabfp-52f,
     0x1.da42eep-76f, 0.0f, 0.0f, 0.0f, 0x1.ce71ep-80f, 0x1.a15148p-53f, 0.0f,
     0x1.023146p-3f, 0x1.4ecap-114f, 0.0f, 0x1.7e0adp-80f, 0x1.e41edap-67f, 0.0f,
     0x1.ff8dcap-10f, 0x1.f5029ep-1f, 0x1.c55e66p-80f, 0x1.62a436p-84f, 0.0f, 0.0f,
     0.0f, 0x1.cf9baap-78f, 0x1.d2477p-97f, 0x1.c6cecap-28f, 0.0f, 0.0f,
     0x1.b1e77p-22f, 0.0f, 0x1.8a6546p-98f, 0.0f, 0.0f, 0.0f, 0x1.8b3114p-3f, 0.0f,
     0x1.1284bap-99f, 0.0f, 0.0f, 0.0f, 0x1.5506e4p-10f, 0.0f, 0.0f, 0x1.a4d508p-71f,
     0x1.2aee54p-45f, 0x1.83a6eep-77f, 0.0f, 0.0f, 0.0f, 0x1.87a754p-55f, 0.0f,
     0x1.74b97p-63f, 0.0f, 0.0f, 0x1.5c4942p-87f, 0.0f, 0x1.4b78aap-52f,
     0x1.ee05fep-94f, 0.0f, 0.0f, 0x1.0b550ep-110f, 0.0f, 0.0f, 0x1.46aec8p-12f, 0.0f,
     0x1.2f802ep-102f, 0x1.729cbp-101f, 0.0f, 0x1.d1b236p-21f, 0.0f, 0.0f,
     0x1.d3bb4cp-7f, 0x1.084d6cp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.638f5ap-5f, 0.0f,
     0.0f, 0x1.d3ecf8p-45f, 0.0f, 0.0f, 0.0f, 0x1.720b46p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b8cc6ep-27f, 0x1.4f4c5p-91f, 0x1.240b24p-13f, 0x1.8ad6d8p-72f, 0.0f,
     0.0f, 0x1.9b592cp-34f, 0.0f, 0.0f, 0x1.38b04ap-9f, 0x1.d6ef8p-123f,
     0x1.359dcep-29f, 0x1.69e08ap-64f, 0.0f, 0.0f, 0.0f, 0x1.250be2p-107f, 0.0f,
     0x1.13f38ap-112f, 0.0f, 0.0f, 0x1.f2db26p-38f, 0.0f, 0.0f, 0.0f,
     0x1.fc635cp-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48bfccp-87f, 0.0f, 0.0f, 0.0f,
     0x1.ea8e08p-77f, 0.0f, 0.0f, 0.0f, 0x1.a8c8ccp-103f, 0.0f, 0x1.423f08p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68bc8cp-118f, 0x1.5e8208p-26f,
     0x1.5b036p-73f, 0x1.ff2ab8p-72f, 0x1.ae8efp-40f, 0.0f, 0x1.eb33p-111f,
     0x1.995ba2p-20f, 0.0f, 0x1.4aa71ep-10f, 0.0f, 0.0f, 0x1.cc7a4p-20f,
     0x1.6f9f04p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4a662p-3f, 0x1.46b3acp-87f, 0.0f,
     0x1.941948p-122f, 0x1.00d3aep-10f, 0.0f, 0x1.61894p-126f, 0x1.43e55ep-70f,
     0x1.17480ap-96f, 0x1.2014cep-50f, 0.0f, 0x1.10dc9ep-122f, 0.0f, 0x1.c94958p-111f,
     0.0f, 0.0f, 0x1.3175bp-30f, 0.0f, 0.0f, 0x1.7f1a78p-49f, 0.0f, 0x1.6b238ep-7f,
     0x1.c8232ep-106f, 0x1.e1f846p-94f, 0.0f, 0x1.698c04p-118f, 0x1.96dffap-1f,
     0x1.9a9becp-22f, 0.0f, 0.0f, 0x1.b93ddep-22f, 0.0f, 0x1.dd479ep-27f, 0.0f,
     0x1.c7a722p-38f, 0.0f, 0.0f, 0.0f, 0x1.0826b4p-51f, 0x1.e79ebp-109f, 0.0f,
     0x1.84fc82p-71f, 0x1.c1ad24p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52351ep-91f, 0.0f, 0.0f, 0x1.e27f12p-95f, 0x1.77b5cep-23f, 0x1.76cp-47f,
     0.0f, 0x1.77ab8ap-32f, 0x1.713772p-59f, 0.0f, 0x1.bd87bcp-7f, 0x1.381a84p-122f,
     0.0f, 0x1.df7812p-103f, 0.0f, 0x1.53d426p-32f, 0.0f, 0.0f, 0.0f, 0x1.37de7ep-91f,
     0x1.03b3e6p-61f, 0x1.6485bep-77f, 0.0f, 0x1.cfbc32p-51f, 0x1.4e5eacp-124f,
     0x1.19d88p-58f, 0.0f, 0.0f, 0x1.a6e59p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.328576p-92f, 0.0f, 0.0f, 0.0f, 0x1.63387ep-47f, 0x1.09794ep-83f,
     0x1.b159bcp-77f, 0.0f, 0.0f, 0x1.96a638p-125f, 0.0f, 0.0f, 0x1.f3beaep-45f,
     0x1.06cb9p-117f, 0x1.49f6f8p-38f, 0.0f, 0x1.759524p-109f, 0x1.d54bb4p-8f, 0.0f,
     0.0f, 0.0f, 0x1.67b998p-20f, 0x1.48f8f4p-50f, 0x1.a29428p-83f, 0.0f,
     0x1.77c4a2p-12f, 0x1.edf74ap-38f, 0x1.a67618p-5f, 0x1.1a2a4ep-122f,
     0x1.14a4e4p-75f, 0x1.e5964p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7af79p-37f, 0.0f,
     0x1.febf8ep-112f, 0x1.e95034p-117f, 0x1.f43a56p-62f, 0x1.c4b482p-112f, 0.0f,
     0.0f, 0.0f, 0x1.6d557ep-38f, 0x1.bb353cp-13f, 0x1.65859cp-105f, 0x1.19105ep-63f,
     0x1.2a39b8p-2f, 0x1.7b76f6p-39f, 0x1.571f9cp-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8c12cp-79f, 0.0f, 0.0f, 0x1.60b614p-54f, 0.0f, 0.0f, 0x1.df124ap-53f, 0.0f,
     0.0f, 0x1.5fd084p-27f, 0x1.c5fdbep-5f, 0.0f, 0.0f, 0x1.f3872p-95f,
     0x1.cf6248p-2f, 0x1.ffb62ep-122f, 0x1.fa6924p-119f, 0.0f, 0x1.ac7cc6p-79f,
     0x1.1215cap-44f, 0x1.5c03bcp-93f, 0.0f, 0x1.a1d76p-13f, 0x1.8c91f6p-67f,
     0x1.64ebaap-2f, 0.0f, 0x1.fe52eep-44f, 0x1.39b1ccp-42f, 0x1.15d71p-103f,
     0x1.5c2aeap-21f, 0.0f, 0x1.8211cap-68f, 0.0f, 0x1.86b4ecp-117f, 0.0f, 0.0f, 0.0f,
     0x1.4eaac2p-121f, 0.0f, 0x1.d67eeep-64f, 0.0f, 0x1.7cb1ep-115f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2fe7dap-49f, 0x1.81009p-74f, 0.0f, 0x1.88ff28p-98f,
     0x1.db84p-64f, 0.0f, 0.0f, 0x1.008872p-122f, 0x1.565b6cp-111f, 0.0f, 0.0f,
     0x1.2e0f2p-89f, 0x1.39bcaap-114f, 0.0f, 0.0f, 0.0f, 0x1.1139d4p-74f, 0.0f,
     0x1.f295dcp-81f, 0.0f, 0x1.580788p-47f, 0x1.f736e2p-98f, 0x1.05a2p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.580bdap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5edeaep-46f,
     0x1.ca2d44p-42f, 0.0f, 0x1.a9aeeep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8e0242p-106f, 0.0f, 0x1.331094p-106f, 0x1.5c12dap-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84b41ap-110f, 0x1.a7fcc8p-3f, 0.0f,
     0x1.9fc484p-91f, 0.0f, 0x1.6c2652p-79f, 0x1.1e823ep-6f, 0x1.40c176p-31f,
     0x1.853a34p-47f, 0x1.790b8p-67f, 0.0f, 0.0f, 0.0f, 0x1.2a132ep-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3289ccp-59f, 0x1.048b1ap-36f, 0x1.3e1a4p-55f,
     0x1.75ddfp-69f, 0x1.9df9e4p-33f, 0.0f, 0x1.bf7466p-12f, 0.0f, 0x1.3efa0ep-125f,
     0x1.270508p-114f, 0x1.73511cp-24f, 0x1.a9df76p-81f, 0.0f, 0x1.28e2ecp-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.162414p-112f, 0x1.46866ep-51f,
     0.0f, 0x1.611d48p-119f, 0.0f, 0.0f, 0x1.c21b2ep-76f, 0.0f, 0x1.341308p-70f,
     0x1.12abfcp-69f, 0x1.a100f8p-102f, 0x1.36d95ap-50f, 0.0f, 0x1.ebf8c8p-66f, 0.0f,
     0x1.ae4e8ep-40f, 0.0f, 0.0f, 0x1.f0d5bp-15f, 0x1.27d17ep-121f, 0.0f, 0.0f,
     0x1.d301dcp-15f, 0.0f, 0x1.659dd8p-41f, 0x1.51403cp-50f, 0x1.313dap-25f,
     0x1.e93fdep-112f, 0x1.d24dfcp-36f, 0x1.c3e626p-14f, 0x1.6c343ep-80f, 0.0f, 0.0f,
     0x1.a76fd4p-96f, 0.0f, 0x1.25aa6cp-5f, 0.0f, 0x1.e90b1p-12f, 0x1.5230b6p-117f,
     0x1.353b48p-22f, 0.0f, 0x1.30e00cp-21f, 0x1.3875d6p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61fa1p-126f, 0x1.e2407p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99a3aep-67f, 0x1.4a4dc8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c2cfp-2f,
     0x1.ff61fep-103f, 0.0f, 0x1.80e4fap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5dd83cp-87f, 0x1.29a222p-2f, 0x1.3004p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.100c9ep-41f, 0.0f, 0.0f, 0x1.057056p-21f, 0.0f, 0x1.db8becp-104f, 0.0f,
     0x1.cd4c16p-103f, 0.0f, 0x1.00e5fep-25f, 0x1.c20db8p-106f, 0.0f, 0x1.048c58p-44f,
     0x1.e27e1ap-8f, 0x1.72a40ep-4f, 0.0f, 0x1.a9927cp-38f, 0x1.10b268p-61f, 0.0f,
     0.0f, 0x1.1221c2p-34f, 0x1.b1ff48p-24f, 0.0f, 0.0f, 0x1.7e3f28p-113f, 0.0f, 0.0f,
     0x1.17e9cep-101f, 0.0f, 0.0f, 0x1.1de386p-8f, 0.0f, 0x1.be8d44p-125f, 0.0f,
     0x1.0036eap-21f, 0.0f, 0x1.d2397cp-52f, 0.0f, 0x1.cb9244p-104f, 0x1.ec1642p-59f,
     0x1.8064fcp-1f, 0x1.50747ep-104f, 0x1.c6ccaep-22f, 0.0f, 0.0f, 0x1.47044cp-10f,
     0x1.bca288p-61f, 0x1.e0d70ep-96f, 0x1.79a232p-13f, 0x1.700a4ep-12f, 0.0f,
     0x1.6bb9bp-22f, 0.0f, 0.0f, 0.0f, 0x1.3e4c2cp-2f, 0x1.c2ba72p-54f, 0.0f, 0.0f,
     0x1.8489bep-117f, 0x1.46eea2p-81f, 0.0f, 0.0f, 0x1.55e56p-62f, 0.0f, 0.0f
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
            tmp1 = Sleef_modff4_kvx(tmp0);
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
    printf("Sleef_modff4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_modff4_kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
