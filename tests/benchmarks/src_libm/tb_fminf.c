/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fminf.c --function fminf --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.d09026p-113f, 0x1.3fdc8ep-121f, 0.0f, 0x1.1b5244p-62f, 0.0f, 0.0f,
     0.0f, 0x1.3fbd34p-26f, 0x1.cbff16p-38f, 0.0f, 0x1.22ddc2p-105f, 0.0f, 0.0f,
     0x1.9e81bp-95f, 0.0f, 0.0f, 0x1.7b12f8p-63f, 0.0f, 0x1.1afda6p-28f,
     0x1.24d172p-31f, 0x1.8d993ap-101f, 0.0f, 0x1.bbac96p-44f, 0.0f, 0x1.c002eep-81f,
     0.0f, 0.0f, 0x1.6e21cap-19f, 0.0f, 0.0f, 0x1.ee73acp-71f, 0.0f, 0.0f,
     0x1.74529ep-33f, 0x1.aa6416p-1f, 0.0f, 0x1.5a85c4p-20f, 0x1.aca5fcp-65f, 0.0f,
     0x1.491ea4p-122f, 0.0f, 0.0f, 0.0f, 0x1.48f1b8p-104f, 0.0f, 0x1.15b69p-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.55dd9p-115f, 0x1.4fa61ep-66f, 0x1.5c0784p-115f,
     0.0f, 0x1.e4c93p-51f, 0.0f, 0x1.416466p-116f, 0.0f, 0x1.82072cp-34f, 0.0f, 0.0f,
     0x1.35a3aep-9f, 0.0f, 0x1.96f1b2p-93f, 0x1.bf1e4cp-124f, 0x1.2e3c7p-104f,
     0x1.a13db6p-92f, 0x1.c171f8p-125f, 0.0f, 0.0f, 0x1.3bdf5cp-21f, 0x1.040804p-108f,
     0x1.8727fcp-57f, 0x1.4afe7cp-31f, 0x1.f931aap-20f, 0x1.783fa6p-81f,
     0x1.574ff2p-116f, 0.0f, 0x1.fdf11ep-48f, 0x1.89a822p-44f, 0x1.6f0fc8p-30f, 0.0f,
     0x1.81f964p-11f, 0x1.1b945p-79f, 0x1.d7538cp-81f, 0x1.6c058ep-94f,
     0x1.3f82b4p-41f, 0.0f, 0x1.d4abe4p-74f, 0.0f, 0.0f, 0x1.a7744p-85f,
     0x1.75172cp-60f, 0x1.1bdbd2p-104f, 0x1.63929p-3f, 0x1.8f0be4p-93f,
     0x1.b8ed2ap-103f, 0x1.a547e4p-5f, 0x1.422c5cp-75f, 0.0f, 0x1.9b44ccp-49f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.e51ec8p-64f, 0.0f, 0x1.d6b0b2p-49f, 0x1.0c0942p-15f,
     0.0f, 0x1.12d27p-72f, 0x1.e29deap-35f, 0.0f, 0.0f, 0x1.0b44bep-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a5b7ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfced2p-106f,
     0x1.b21b04p-3f, 0x1.54fbb6p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6297acp-19f, 0.0f, 0.0f, 0x1.d2946ep-37f, 0.0f, 0x1.117a8cp-11f, 0.0f,
     0x1.80c86p-97f, 0.0f, 0x1.9273acp-103f, 0x1.1394f2p-36f, 0.0f, 0.0f,
     0x1.6fdfeap-40f, 0x1.4f7356p-45f, 0x1.16bbecp-12f, 0.0f, 0x1.0bdf9p-72f,
     0x1.a8590ap-70f, 0.0f, 0x1.d05d62p-13f, 0.0f, 0x1.eeb636p-12f, 0x1.b70276p-97f,
     0x1.5f68eep-41f, 0x1.52277ap-83f, 0.0f, 0x1.14ff8ep-31f, 0.0f, 0x1.14891ep-15f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bedfap-121f, 0x1.63173cp-67f, 0.0f, 0x1.8df556p-62f,
     0.0f, 0.0f, 0.0f, 0x1.ca0efp-31f, 0x1.fb1e9ep-120f, 0x1.29c5f8p-92f,
     0x1.b7bf0ep-18f, 0x1.e619cp-70f, 0x1.572d28p-18f, 0x1.2b6268p-119f, 0.0f, 0.0f,
     0x1.fa124ap-19f, 0x1.ddd2dep-36f, 0x1.b7400ep-9f, 0.0f, 0.0f, 0x1.95c22p-35f,
     0.0f, 0x1.f2dd72p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4be676p-122f, 0.0f,
     0x1.732776p-41f, 0x1.d28e0ap-72f, 0.0f, 0.0f, 0x1.ba81e4p-2f, 0.0f, 0.0f,
     0x1.9c1966p-50f, 0x1.c8c682p-16f, 0x1.28e7a4p-10f, 0x1.cb8f98p-33f,
     0x1.c0ef02p-76f, 0x1.354f86p-79f, 0.0f, 0x1.ec719ap-56f, 0.0f, 0.0f,
     0x1.127f48p-61f, 0x1.45c61ep-79f, 0x1.2292aep-24f, 0.0f, 0x1.4a96bp-72f,
     0x1.5de9b8p-40f, 0x1.b45526p-108f, 0.0f, 0.0f, 0x1.bc99c8p-75f, 0x1.bc53dcp-126f,
     0x1.404e0cp-106f, 0x1.5d1e06p-57f, 0.0f, 0.0f, 0x1.9d65b2p-92f, 0.0f, 0.0f, 0.0f,
     0x1.6a5faap-124f, 0x1.2a80ep-49f, 0x1.d4975ap-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a34d8p-43f, 0x1.e903cap-49f, 0x1.8eabc6p-21f, 0.0f, 0x1.0761fep-40f, 0.0f,
     0.0f, 0x1.0292d2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.785692p-62f,
     0.0f, 0x1.3fa69ap-78f, 0.0f, 0x1.21f3f4p-29f, 0x1.f5b36ep-64f, 0x1.450dbap-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87c626p-85f, 0.0f, 0x1.bc5fd8p-80f, 0.0f,
     0x1.ad8b94p-52f, 0.0f, 0x1.7cf4cap-28f, 0x1.7866bcp-95f, 0.0f, 0x1.69edp-121f,
     0x1.9766b4p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f44864p-98f, 0x1.424182p-64f, 0.0f,
     0x1.a5ea0ap-87f, 0.0f, 0x1.b6579ap-63f, 0.0f, 0x1.37f0a8p-58f, 0.0f,
     0x1.d20982p-19f, 0x1.46a4a8p-110f, 0.0f, 0.0f, 0x1.142da4p-81f, 0.0f, 0.0f, 0.0f,
     0x1.41e5bp-34f, 0.0f, 0x1.52aef8p-82f, 0.0f, 0x1.fadc5ep-7f, 0x1.422252p-30f,
     0.0f, 0.0f, 0x1.598396p-44f, 0x1.103b02p-79f, 0x1.633b9ep-41f, 0.0f, 0.0f, 0.0f,
     0x1.62a8fcp-7f, 0.0f, 0.0f, 0.0f, 0x1.17373cp-45f, 0.0f, 0x1.7e3e86p-1f,
     0x1.bf335ep-85f, 0x1.caeb3cp-87f, 0x1.17525cp-70f, 0x1.2084f6p-24f,
     0x1.4a6c42p-14f, 0x1.b6a5a2p-116f, 0x1.2d592cp-72f, 0x1.7ce52ep-99f,
     0x1.56fabcp-117f, 0x1.19216ep-96f, 0.0f, 0x1.0919acp-109f, 0.0f, 0.0f,
     0x1.5823e8p-9f, 0x1.0dcaa4p-74f, 0.0f, 0.0f, 0x1.c9623ep-4f, 0x1.b9ce3cp-26f,
     0.0f, 0x1.3b8404p-91f, 0x1.93015ap-89f, 0x1.353a04p-97f, 0.0f, 0x1.85520ap-63f,
     0x1.85c0f6p-63f, 0.0f, 0x1.4a29cep-112f, 0x1.b0d488p-16f, 0x1.9cccd6p-111f,
     0x1.4e5f2p-51f, 0.0f, 0.0f, 0x1.22d8e8p-25f, 0x1.3f2688p-2f, 0x1.d35c12p-78f,
     0x1.755238p-123f, 0.0f, 0.0f, 0x1.463b2p-92f, 0.0f, 0x1.f7a69ep-87f,
     0x1.c3f0c2p-38f, 0x1.9be3cap-32f, 0x1.9e2574p-14f, 0x1.bcb43ap-41f,
     0x1.5e8eep-17f, 0x1.317b0cp-10f, 0.0f, 0.0f, 0.0f, 0x1.ff7b32p-18f, 0.0f, 0.0f,
     0.0f, 0x1.338204p-40f, 0.0f, 0.0f, 0.0f, 0x1.89cf4cp-38f, 0.0f, 0.0f,
     0x1.6ce40cp-52f, 0.0f, 0x1.802e94p-126f, 0.0f, 0.0f, 0.0f, 0x1.82a9a8p-70f, 0.0f,
     0x1.78878ep-51f, 0x1.4022bcp-79f, 0x1.77252cp-28f, 0x1.f91546p-116f,
     0x1.4236f8p-14f, 0x1.123998p-123f, 0.0f, 0x1.71356ap-64f, 0x1.4f141cp-30f, 0.0f,
     0x1.c13dc4p-106f, 0x1.b4e5d4p-85f, 0x1.8ef066p-120f, 0.0f, 0x1.4e05b2p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f9466cp-15f, 0.0f, 0.0f, 0.0f, 0x1.f099ep-29f, 0.0f, 0.0f,
     0x1.86fd3p-23f, 0.0f, 0x1.f0341p-104f, 0x1.fe1808p-79f, 0.0f, 0.0f,
     0x1.29bf92p-90f, 0.0f, 0x1.2b8d1cp-63f, 0.0f, 0x1.c0d45ap-24f, 0.0f,
     0x1.d0e186p-105f, 0x1.b63b14p-49f, 0.0f, 0.0f, 0.0f, 0x1.7e6aap-92f, 0.0f,
     0x1.f4b486p-69f, 0.0f, 0x1.7610b4p-90f, 0x1.1a0fd2p-18f, 0x1.7f6362p-17f,
     0x1.c6605ep-72f, 0.0f, 0.0f, 0x1.8bb668p-100f, 0.0f, 0x1.7bf482p-26f, 0.0f, 0.0f,
     0x1.e56f38p-42f, 0x1.88995cp-53f, 0.0f, 0x1.e0ab7p-38f, 0.0f, 0x1.394ca8p-126f,
     0x1.f192e2p-63f, 0x1.3638e6p-60f, 0x1.8620c8p-14f, 0x1.22928p-104f,
     0x1.8ac614p-68f, 0x1.973afp-117f, 0.0f, 0x1.906824p-50f, 0.0f, 0x1.b315bap-113f,
     0.0f, 0.0f, 0x1.523c56p-10f, 0x1.770f38p-115f, 0.0f, 0.0f, 0.0f, 0x1.31a9f8p-92f,
     0x1.49aa5ep-26f, 0x1.cc58f6p-98f, 0x1.5b2974p-83f, 0x1.b47c08p-105f, 0.0f, 0.0f,
     0x1.6d91acp-16f, 0x1.7f33dp-118f, 0x1.708a68p-88f, 0x1.7fe2cp-84f,
     0x1.7e1846p-100f, 0x1.ae93eap-77f, 0x1.62d508p-92f, 0x1.0ba384p-12f,
     0x1.0b3aep-116f, 0x1.ceb39p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.924076p-126f, 0x1.c32aecp-83f, 0.0f, 0.0f, 0x1.682922p-63f, 0.0f, 0.0f, 0.0f,
     0x1.6ca64p-39f, 0x1.ab633ap-114f, 0.0f, 0x1.49b31ep-7f, 0.0f, 0x1.00e008p-118f,
     0x1.4f51e4p-66f, 0.0f, 0x1.b91784p-90f, 0.0f, 0x1.4a91b8p-125f, 0x1.63373ap-52f,
     0x1.8d493p-94f, 0.0f, 0x1.c9a868p-57f, 0.0f, 0.0f, 0.0f, 0x1.5d3c76p-102f, 0.0f,
     0x1.c56716p-72f, 0.0f, 0.0f, 0x1.aea404p-103f, 0.0f, 0.0f, 0x1.02263p-56f, 0.0f,
     0.0f, 0.0f, 0x1.05d15cp-95f, 0x1.a66f6cp-86f, 0.0f, 0.0f, 0.0f, 0x1.a2dcp-49f,
     0.0f, 0x1.0ec14ep-46f, 0x1.2600b8p-15f, 0x1.41af0ap-4f, 0.0f, 0.0f,
     0x1.8ad03ap-14f, 0x1.730f78p-104f, 0x1.c10ddap-100f, 0x1.67f314p-56f,
     0x1.c38c28p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ab48p-43f,
     0x1.3fd61ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.969ad2p-14f, 0.0f, 0x1.d479e6p-14f,
     0x1.d1ea88p-111f, 0x1.2a685ap-58f, 0.0f, 0x1.a1c988p-59f, 0.0f, 0.0f, 0.0f,
     0x1.abc706p-58f, 0.0f, 0.0f, 0.0f, 0x1.fe6a7ep-4f, 0x1.a718b6p-100f, 0.0f,
     0x1.91d992p-43f, 0x1.83ebeap-3f, 0x1.a576eap-84f, 0x1.219decp-58f, 0.0f,
     0x1.b63bc8p-41f, 0.0f, 0.0f, 0x1.53906p-34f, 0.0f, 0.0f, 0x1.66614ap-25f, 0.0f,
     0x1.2f8346p-107f, 0x1.8d295cp-107f, 0.0f, 0x1.8dbb22p-112f, 0.0f,
     0x1.956aa6p-92f, 0x1.2541b2p-63f, 0x1.f13542p-1f, 0x1.86bd3p-58f,
     0x1.c571fep-114f, 0.0f, 0x1.0d2f0ep-67f, 0.0f, 0.0f, 0x1.f9caacp-77f,
     0x1.8da924p-56f, 0x1.6cd9fap-55f, 0x1.c64e9p-103f, 0.0f, 0x1.cae96cp-47f,
     0x1.4ade2ep-123f, 0.0f, 0x1.134552p-17f, 0x1.6893e2p-38f, 0.0f, 0.0f,
     0x1.618564p-126f, 0.0f, 0.0f, 0x1.baba16p-8f, 0.0f, 0x1.6c7aaap-22f, 0.0f, 0.0f,
     0.0f, 0x1.bdae06p-57f, 0x1.a0193ap-20f, 0.0f, 0.0f, 0.0f, 0x1.ff2626p-95f,
     0x1.3449e6p-53f, 0x1.36e408p-39f, 0x1.bcf9acp-95f, 0.0f, 0x1.125e86p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.76e032p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b60b32p-35f, 0.0f,
     0x1.bdafeap-104f, 0.0f, 0.0f, 0.0f, 0x1.e32e72p-112f, 0.0f, 0x1.b97b38p-95f,
     0.0f, 0.0f, 0.0f, 0x1.ca09fp-24f, 0.0f, 0.0f, 0x1.082508p-30f, 0.0f,
     0x1.19b66ap-64f, 0x1.07efcp-84f, 0x1.e0f5b4p-34f, 0.0f, 0x1.a6b744p-4f,
     0x1.fde76p-109f, 0x1.7598dcp-70f, 0x1.e09be2p-23f, 0x1.06ba6ap-120f,
     0x1.44d0aep-46f, 0.0f, 0x1.972442p-76f, 0x1.4176c8p-3f, 0.0f, 0x1.db6a18p-83f,
     0x1.8f52e8p-112f, 0x1.7d1e0ap-61f, 0.0f, 0.0f, 0.0f, 0x1.4696cap-27f, 0.0f,
     0x1.7dbb3ep-36f, 0.0f, 0.0f, 0x1.63f804p-20f, 0x1.4bc0cep-23f, 0x1p0f,
     0x1.273dp-33f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.c5b14ep-43f, 0x1.939deep-122f, 0.0f,
     0x1.b7ed36p-18f, 0.0f, 0x1.19b2f6p-5f, 0.0f, 0.0f, 0x1.6e29cap-11f, 0.0f,
     0x1.e93c62p-80f, 0.0f, 0.0f, 0x1.372fb6p-94f, 0.0f, 0x1.db6da2p-24f,
     0x1.3921ap-62f, 0x1.b8c7eep-14f, 0x1.ab28acp-116f, 0x1.aaf84p-9f,
     0x1.5dcf2cp-122f, 0x1.371f1p-89f, 0x1.c9ceccp-74f, 0.0f, 0.0f, 0.0f,
     0x1.41e822p-56f, 0.0f, 0x1.0316e6p-114f, 0.0f, 0x1.79de2cp-74f, 0x1.46fa8ap-83f,
     0x1.70f3p-44f, 0.0f, 0x1.448d5ap-69f, 0x1.c77d3ep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.27f104p-81f, 0.0f, 0.0f, 0x1.ac18bp-104f, 0.0f,
     0x1.ee0ddp-21f, 0x1.74ef4p-43f, 0x1.9b1d22p-59f, 0x1.cce688p-63f, 0.0f,
     0x1.67f87ap-110f, 0x1.e4e742p-14f, 0.0f, 0x1.e2a798p-61f, 0x1.97ff6cp-92f,
     0x1.90855p-111f, 0x1.ff5d3cp-80f, 0x1.c9a3d8p-112f, 0x1.3f037cp-31f,
     0x1.43906cp-118f, 0x1.af7b94p-49f, 0x1.3ce388p-23f, 0.0f, 0x1.55b604p-44f, 0.0f,
     0x1.cf15ep-58f, 0.0f, 0x1.47b08ep-102f, 0x1.2d624p-13f, 0x1.25ae94p-88f,
     0x1.04936ap-53f, 0.0f, 0x1.2724d4p-6f, 0.0f, 0x1.de5b8p-38f, 0x1.bf787ep-39f,
     0x1.b75364p-3f, 0.0f, 0x1.9094c2p-83f, 0.0f, 0x1.bd9486p-104f, 0x1.421022p-37f,
     0.0f, 0x1.4a6ce6p-39f, 0.0f, 0x1.051ba6p-116f, 0x1.adff88p-30f, 0x1.3ea962p-55f,
     0.0f, 0.0f, 0x1.e4a20cp-126f, 0x1.f3c262p-1f, 0x1.faa544p-94f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a14e2p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b643ap-102f, 0.0f, 0x1.5a9ec4p-40f, 0.0f, 0x1.816e5ep-79f, 0.0f, 0.0f,
     0x1.3cfba8p-105f, 0.0f, 0x1.d75d22p-106f, 0x1.301b5ep-121f, 0x1.f215f8p-31f,
     0.0f, 0x1.cb7a42p-19f, 0.0f, 0x1.97026p-30f, 0.0f, 0x1.2c20c6p-52f,
     0x1.17cce6p-3f, 0x1.8a5b2ep-74f, 0.0f, 0.0f, 0x1.7a2f24p-11f, 0x1.a57fcp-83f,
     0.0f, 0.0f, 0x1.c9cd72p-93f, 0x1.b07416p-125f, 0x1.a9581ap-125f, 0x1.26a9ep-26f,
     0.0f, 0x1.e83ee8p-15f, 0x1.6b1922p-113f, 0x1.d26f46p-53f, 0.0f, 0.0f,
     0x1.32a57cp-66f, 0x1.91cbe6p-24f, 0.0f, 0x1.3b54fep-57f, 0x1.771882p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d28c18p-32f, 0.0f, 0.0f, 0x1.d7ffe6p-81f, 0.0f,
     0.0f, 0x1.488b5ep-91f, 0x1.5c65ap-97f, 0x1.4ba3b6p-15f, 0x1.0d8324p-20f,
     0x1.920b8ap-14f, 0x1.9a55dap-24f, 0.0f, 0.0f, 0x1.94d4c8p-25f, 0x1.4b729cp-58f,
     0x1.5c949ap-45f, 0.0f, 0x1.759054p-32f, 0.0f, 0x1.67787cp-125f, 0x1.69d24ap-117f,
     0x1.6ccedap-49f, 0x1.065594p-113f, 0.0f, 0x1.894c8ep-123f, 0.0f, 0.0f,
     0x1.c2e04ap-84f, 0x1.69047cp-117f, 0.0f, 0x1.716d3cp-100f, 0.0f, 0x1.7c2342p-83f,
     0.0f, 0.0f, 0.0f, 0x1.19843p-86f, 0x1.383e12p-78f, 0.0f, 0.0f, 0x1.32ffa8p-48f,
     0x1.db92eep-1f, 0x1.e52938p-28f, 0x1.c8fa76p-19f, 0x1.afa3a4p-15f, 0.0f,
     0x1.a8087ap-57f, 0x1.c2442p-114f, 0.0f, 0x1.30f2dap-126f, 0x1.b77482p-1f,
     0x1.d57238p-125f, 0.0f, 0.0f, 0x1.5b16cep-86f, 0x1.25c47p-66f, 0.0f,
     0x1.2d48e6p-46f, 0x1.bebde2p-22f, 0x1.2fc116p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dbcc38p-98f, 0.0f, 0.0f, 0x1.36b342p-48f, 0.0f, 0x1.72228cp-8f, 0.0f,
     0.0f, 0x1.b09536p-24f, 0.0f, 0x1.42fb92p-91f, 0x1.e55016p-126f, 0.0f,
     0x1.3d3094p-49f, 0.0f, 0x1.223bf8p-57f, 0x1.ba2c68p-50f, 0x1.3a2658p-103f, 0.0f,
     0x1.1e58cep-59f, 0x1.23f9dcp-64f, 0.0f, 0x1.99c7d2p-88f, 0.0f, 0x1.ac45b2p-86f,
     0.0f, 0x1.92e294p-26f, 0x1.5ea032p-20f, 0.0f, 0x1.c77f1cp-104f, 0x1.e4cea6p-31f,
     0.0f, 0x1.a04586p-125f, 0x1.aa7206p-45f, 0.0f, 0.0f, 0x1.101df2p-71f,
     0x1.a3231ap-125f, 0x1.48911p-62f, 0.0f, 0x1.65239cp-40f, 0x1.b5884ap-107f,
     0x1.9855a8p-52f, 0.0f, 0.0f, 0x1.71261ep-88f, 0x1.763e52p-10f, 0.0f,
     0x1.251264p-28f, 0x1.542ce4p-30f, 0x1.624edcp-26f, 0x1.f2955p-8f,
     0x1.130e5cp-55f, 0x1.7ceabep-22f, 0x1.70e214p-34f, 0.0f, 0x1.caf90ep-41f, 0.0f,
     0.0f, 0x1.5a15bap-36f, 0x1.875b76p-30f, 0x1.1cdf32p-24f, 0.0f, 0.0f,
     0x1.1ab092p-59f, 0x1.9fb874p-8f, 0x1.31c63p-45f, 0.0f, 0x1.442f6ap-32f, 0.0f,
     0x1.9cf31cp-1f, 0x1.a9972cp-69f, 0x1.9f81dap-102f, 0.0f, 0.0f, 0x1.8914e8p-116f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.a5eb18p-112f, 0.0f, 0.0f, 0x1.79d78ap-100f, 0x1.5f19bep-13f,
     0x1.cdc752p-69f, 0.0f, 0x1.6bd02p-31f, 0.0f, 0x1.e691c2p-16f, 0.0f,
     0x1.3b19ep-83f, 0x1.e0538ap-100f, 0x1.16db06p-124f, 0.0f, 0x1.fbccap-63f,
     0x1.8ee748p-78f, 0x1.68c972p-48f, 0.0f, 0.0f, 0x1.5b53eep-37f, 0x1.956734p-14f,
     0.0f, 0.0f, 0x1.2efbc4p-114f, 0x1.1b49bap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a41794p-14f, 0.0f, 0x1.aa299cp-23f, 0x1.a85b26p-94f, 0x1.bb6ff2p-45f, 0x1p0f,
     0.0f, 0.0f, 0x1.8a6854p-126f, 0x1.184112p-33f, 0x1.203698p-27f, 0.0f, 0.0f, 0.0f,
     0x1.6e1348p-106f, 0.0f, 0x1.347a5cp-125f, 0.0f, 0x1.4ad4c4p-53f, 0.0f, 0.0f,
     0.0f, 0x1.57cea6p-42f, 0x1.0b1196p-33f, 0.0f, 0x1.a1e21ep-104f, 0.0f,
     0x1.a2d642p-81f, 0x1.b09288p-110f, 0.0f, 0.0f, 0x1.bbd256p-117f, 0x1.55c25p-82f,
     0.0f, 0x1.2e14ep-116f, 0x1.5f1c2ap-27f, 0.0f, 0.0f, 0x1.5a23bep-49f,
     0x1.2660ap-104f, 0x1.2b892cp-123f, 0x1.717f6cp-121f, 0x1.6c9fdp-27f,
     0x1.58d586p-60f, 0.0f, 0.0f, 0x1.43d4fap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99c08p-7f, 0.0f, 0.0f, 0x1.f30d8ap-53f,
     0x1.253676p-74f, 0x1.8a49b4p-120f, 0.0f, 0x1.46cf96p-55f, 0x1.c95a96p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ac2fp-60f, 0.0f, 0x1.a79cf6p-28f,
     0x1.bbf7d8p-2f, 0x1.8419cp-102f, 0x1.d3be26p-85f, 0x1.0347ccp-78f, 0.0f, 0.0f,
     0.0f, 0x1.9eca56p-104f, 0.0f, 0.0f, 0x1.bf7438p-77f, 0.0f, 0x1.d98392p-73f, 0.0f,
     0x1.4378eap-71f, 0.0f, 0.0f, 0.0f, 0x1.49adfep-86f, 0x1.0e67e8p-98f,
     0x1.ac4b8p-60f, 0.0f, 0x1.26455ep-70f, 0x1.c964d8p-2f, 0x1.dddecap-122f,
     0x1.c45b96p-36f, 0.0f, 0x1.01840ep-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69884cp-47f, 0x1.2ce678p-84f, 0.0f, 0x1.c5265p-80f, 0.0f, 0x1.e79656p-12f,
     0x1.821f5cp-53f, 0x1.85dde6p-122f, 0x1.f7db3ap-101f, 0x1.d86884p-98f,
     0x1.9ac396p-101f, 0x1.64edfep-72f, 0x1.cd71c2p-15f, 0.0f, 0x1.2e7b6ep-77f,
     0x1.010f9ep-23f, 0x1.d917e8p-116f, 0x1.de81f2p-84f, 0x1.bd6132p-48f,
     0x1.9505cap-120f, 0x1.e33a6ap-16f, 0x1.55da5p-61f, 0.0f, 0x1.11aceep-116f,
     0x1.6c2108p-66f, 0x1.c1dbcep-7f, 0.0f, 0.0f, 0x1.09941p-124f, 0x1.caa112p-72f,
     0.0f, 0x1.a21fe2p-101f, 0x1.19ab68p-25f, 0x1.b98516p-29f, 0.0f, 0.0f,
     0x1.c6fe88p-62f, 0.0f, 0.0f, 0.0f, 0x1.a87a1cp-43f, 0.0f, 0.0f, 0.0f,
     0x1.bb6dfp-26f, 0.0f, 0x1.d43d8cp-59f, 0.0f, 0.0f, 0.0f, 0x1.ee4102p-84f,
     0x1.28d602p-9f, 0x1.149826p-17f, 0.0f, 0x1.ea09f6p-102f, 0x1.d5b954p-98f, 0.0f,
     0.0f, 0.0f, 0x1.f333eep-77f, 0.0f, 0x1.763fa4p-51f, 0x1.528938p-91f, 0.0f,
     0x1.d30482p-113f, 0x1.754f44p-16f, 0x1.f30b8p-109f, 0x1.b8266p-94f,
     0x1.560962p-2f, 0.0f, 0x1.181ed6p-112f, 0.0f, 0x1.ce13bp-58f, 0.0f, 0.0f,
     0x1.cd374ep-65f, 0x1.f9a374p-7f, 0.0f, 0x1.ab8b5cp-19f, 0x1.4a554ap-10f, 0.0f,
     0.0f, 0.0f, 0x1.279e2cp-47f, 0.0f, 0.0f, 0.0f, 0x1.9123d8p-65f, 0x1.034666p-39f,
     0x1p0f, 0x1.bd285ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a70e58p-33f, 0.0f,
     0x1.3c9fb4p-55f, 0.0f, 0x1.200d72p-114f, 0x1.31ed8ep-53f, 0x1.62d912p-19f,
     0x1.67b36ap-124f, 0.0f, 0x1.4d2a72p-12f, 0x1.252ed2p-46f, 0x1.2ca1f8p-30f,
     0x1.2a3a92p-62f, 0.0f, 0x1.8746dcp-100f, 0.0f, 0.0f, 0x1.f6a48ap-123f,
     0x1.5e5968p-116f, 0x1.e3853ap-105f, 0x1.772ae2p-84f, 0.0f, 0x1.c6ae4p-35f, 0.0f,
     0.0f, 0x1.2d9136p-126f, 0x1.b477a2p-62f, 0x1.ec8a1cp-123f, 0.0f, 0.0f,
     0x1.69219ep-35f, 0x1.9af822p-107f, 0.0f, 0.0f, 0x1.8bc202p-52f, 0.0f,
     0x1.d7b22p-26f, 0.0f, 0x1.637e34p-100f, 0.0f, 0.0f, 0x1.c595ep-42f, 0.0f, 0.0f,
     0.0f, 0x1.e3966ep-9f, 0x1.b078bp-101f, 0.0f, 0x1.3e6dacp-87f, 0x1.19a786p-35f,
     0.0f, 0x1.e0e1ccp-47f, 0.0f, 0x1.9ea064p-81f, 0x1.f677ap-97f, 0.0f,
     0x1.b6861ep-18f, 0x1.21db1ap-86f, 0x1.57c3d6p-1f, 0x1.18c17p-2f, 0.0f, 0.0f,
     0.0f, 0x1.85e01ep-61f, 0.0f, 0x1.8e89cp-77f, 0.0f, 0.0f, 0x1.d5ff7cp-47f,
     0x1.a027dap-95f, 0.0f, 0.0f, 0x1.64213ep-7f, 0.0f, 0.0f, 0x1.cd479ap-76f,
     0x1.321e26p-83f, 0.0f, 0x1.0ae8a2p-22f, 0.0f, 0.0f, 0x1.4141acp-26f,
     0x1.c7a656p-96f, 0x1.7f8c1ep-74f, 0.0f, 0x1.6489f8p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef689ep-64f, 0x1.a96b74p-122f, 0x1.949ad8p-101f, 0.0f, 0x1.30ef34p-77f, 0.0f,
     0.0f, 0x1.c32cp-21f, 0.0f, 0.0f, 0x1.9d9e66p-76f, 0x1.dc6b6ap-96f,
     0x1.9c07b2p-124f, 0x1.7b4c9cp-80f, 0.0f, 0x1.ed130cp-76f, 0.0f, 0.0f, 0.0f,
     0x1.4c33aap-93f, 0.0f, 0.0f, 0.0f, 0x1.45830cp-78f, 0.0f, 0x1.5a529ap-81f,
     0x1.3fd0ecp-21f, 0x1.243642p-20f, 0x1.36af6cp-91f, 0x1.8730c2p-37f, 0.0f, 0.0f,
     0x1.54f2c6p-76f, 0x1.9cf0f4p-73f, 0.0f, 0x1.dbe908p-52f, 0.0f, 0x1.d697e4p-84f,
     0x1.192d22p-108f, 0x1.28381p-2f, 0x1.9fdfdp-6f, 0x1.57defap-101f, 0.0f,
     0x1.eea406p-59f, 0.0f, 0.0f, 0x1.c904c2p-41f, 0x1.3c89c2p-22f, 0x1.2ae0f8p-21f,
     0.0f, 0x1.75b552p-98f, 0x1.31321ap-44f, 0.0f, 0x1.aaa0bcp-93f, 0.0f,
     0x1.bad234p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d948c6p-35f, 0.0f, 0.0f, 0.0f,
     0x1.1ea83cp-31f, 0x1.ea9794p-114f, 0.0f, 0x1.794ddap-121f, 0x1.047352p-24f, 0.0f,
     0x1.bd3c86p-95f, 0.0f, 0.0f, 0x1.211b8p-104f, 0.0f, 0x1.e8b206p-111f,
     0x1.b57a34p-106f, 0.0f, 0x1.f09c92p-116f, 0.0f, 0x1.c7a00ap-18f, 0x1.011bdep-21f,
     0.0f, 0x1.f1ee06p-96f, 0x1.41bf3ap-30f, 0.0f, 0x1.31680cp-39f, 0.0f,
     0x1.0485eep-97f, 0x1.c256d4p-86f, 0x1.8bff54p-9f, 0x1.265714p-47f,
     0x1.f36b02p-42f, 0.0f, 0x1.bfdeecp-51f, 0x1.420be8p-18f, 0x1.a99f56p-109f, 0.0f,
     0.0f, 0x1.dd9132p-23f, 0x1.9282acp-5f, 0x1.f7808ep-4f, 0.0f, 0.0f,
     0x1.8f14c6p-3f, 0x1.7ec872p-10f, 0.0f, 0.0f, 0.0f, 0x1.500c16p-117f,
     0x1.b4cffcp-34f, 0.0f, 0.0f, 0x1.ede588p-67f, 0.0f, 0x1.65852p-71f,
     0x1.27fa8p-36f, 0x1.77449cp-16f, 0.0f, 0.0f, 0.0f, 0x1.2e2ca8p-68f,
     0x1.5fff4ap-13f, 0x1.996a82p-32f, 0.0f, 0.0f, 0.0f, 0x1.ff4f5p-12f,
     0x1.33ae56p-102f, 0.0f, 0x1.529a26p-100f, 0.0f, 0.0f, 0x1.b5f95p-58f,
     0x1.93d65ap-17f, 0x1.cc369ap-84f, 0x1p0f, 0x1.dc29p-5f, 0.0f, 0.0f,
     0x1.88e102p-35f, 0.0f, 0x1.e9a41ep-81f, 0x1.44c9aap-96f, 0x1.d328dap-10f,
     0x1.b56af2p-126f, 0.0f, 0.0f, 0.0f, 0x1.ad4f8cp-37f, 0x1.d7901ep-44f,
     0x1.d97a7ep-46f, 0.0f, 0x1.99bfp-86f, 0x1.f9dd18p-86f, 0.0f, 0x1.c4b526p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0d35p-18f, 0.0f, 0x1.07d72ep-49f, 0.0f,
     0x1.b6dfe2p-97f, 0x1.efa132p-32f, 0x1.5b235ep-75f, 0x1.f24096p-47f,
     0x1.c20e9ap-39f, 0.0f, 0x1.50bc6p-56f, 0.0f, 0.0f, 0x1.3a2cf8p-44f,
     0x1.ea0e7ap-91f, 0.0f, 0.0f, 0x1.6fea64p-80f, 0x1.61f13ep-15f, 0.0f, 0.0f,
     0x1.e879e4p-6f, 0x1.6640cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f59134p-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.29df64p-108f, 0.0f, 0x1.40225p-55f, 0.0f,
     0x1.6528ep-69f, 0x1.6dcc9ep-46f, 0.0f, 0x1.153c3cp-76f, 0.0f, 0.0f,
     0x1.1deb18p-101f, 0x1.318aecp-122f, 0x1.0b981ep-53f, 0.0f, 0.0f, 0.0f,
     0x1.5f4a94p-67f, 0.0f, 0x1.9ee68cp-22f, 0.0f, 0x1.812b7ep-89f, 0.0f, 0.0f, 0.0f,
     0x1.aabefp-61f, 0x1.7aa404p-54f, 0x1.b44596p-47f, 0x1.ae9a3cp-89f,
     0x1.1bb5fap-38f, 0.0f, 0.0f, 0x1.685056p-28f, 0.0f, 0x1.7d49dcp-61f, 0.0f,
     0x1.72ad7ep-102f, 0.0f, 0.0f, 0x1.1dd6d4p-53f, 0x1.421e3p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a24f4p-23f, 0x1.a1ab56p-14f, 0x1.7ecf2ap-29f,
     0x1.f08478p-17f, 0.0f, 0.0f, 0.0f, 0x1.912186p-89f, 0x1.e512ecp-15f,
     0x1.d2106cp-15f, 0.0f, 0.0f, 0x1.baafdcp-35f, 0x1.76ca4ep-76f, 0x1.c1cd48p-8f,
     0x1.bf23cp-71f, 0.0f, 0.0f, 0x1.f69c7ap-55f, 0x1.5cfabp-76f, 0.0f,
     0x1.4d698ap-119f, 0.0f, 0.0f, 0x1.2ce964p-1f, 0.0f, 0.0f, 0.0f, 0x1.4d7ef2p-77f,
     0x1.1086bep-60f, 0.0f, 0x1.e5aff6p-110f, 0x1.533c48p-108f, 0.0f, 0.0f, 0.0f,
     0x1.aa1ba8p-79f, 0x1.1889ecp-122f, 0.0f, 0x1.37ad8cp-50f, 0x1.75d904p-126f, 0.0f,
     0.0f, 0.0f, 0x1.fd885ep-10f, 0.0f, 0x1.66dcfap-58f, 0x1.2df594p-68f, 0.0f,
     0x1.c0e80ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a40352p-77f, 0.0f, 0x1.1b8c46p-95f,
     0.0f, 0.0f, 0x1.76755ep-117f, 0.0f, 0.0f, 0x1.1f7b2p-93f, 0.0f, 0x1.85880ap-32f,
     0.0f, 0x1.4f8cc6p-88f, 0.0f, 0x1.108bfcp-59f, 0x1.391a78p-53f, 0x1.817bc6p-15f,
     0x1.b9f2eap-29f, 0.0f, 0.0f, 0x1.4c19a4p-47f, 0x1.a4c118p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f599f8p-73f, 0.0f, 0.0f, 0x1.fb5aaep-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42e5ecp-58f, 0x1.85bc54p-27f, 0.0f, 0x1.d24baap-121f, 0x1.186bd2p-4f,
     0x1.579d1ap-95f, 0x1.1a969ep-20f, 0.0f, 0x1.19efap-11f, 0.0f, 0x1.97e0d4p-66f,
     0x1.776d96p-35f, 0x1.fb0d98p-106f, 0x1.1d9b0ep-41f, 0x1.471cfep-107f, 0.0f,
     0x1.745116p-83f, 0.0f, 0.0f, 0.0f, 0x1.4a3f44p-73f, 0.0f, 0.0f, 0x1.2b8de8p-81f,
     0x1.45a45cp-55f, 0x1.1d3c5ap-79f, 0x1.af2eeap-101f, 0.0f, 0x1.045814p-120f, 0.0f,
     0x1.711752p-81f, 0.0f, 0.0f, 0x1.e780b8p-104f, 0x1.3e46f6p-42f, 0x1.bb1492p-40f,
     0x1.ece46p-48f, 0.0f, 0x1.e1fdaap-89f, 0x1.90f694p-44f, 0x1.9dd2e2p-16f,
     0x1.b22daap-99f, 0.0f, 0x1.d27cb2p-37f, 0.0f, 0x1.4487c2p-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1b5f46p-36f, 0x1.b8a578p-126f, 0.0f, 0x1.37fbfp-60f, 0.0f, 0.0f,
     0x1.f9745ep-22f, 0x1.f6569cp-1f, 0.0f, 0x1.f1a5d8p-9f, 0.0f, 0.0f,
     0x1.675618p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b5292p-37f,
     0x1.7bda72p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3b4bap-102f, 0.0f,
     0x1.b5e768p-50f, 0.0f, 0.0f, 0x1.3b03b4p-25f, 0x1.db4b4p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.066c8cp-73f, 0.0f, 0x1.1e425ap-88f, 0.0f, 0x1.671874p-45f, 0.0f,
     0x1.f5d196p-82f, 0.0f, 0x1.8f63bep-2f, 0x1.a2033ap-36f, 0x1.6c3b86p-65f, 0.0f,
     0.0f, 0x1.40f7cep-108f, 0.0f, 0.0f, 0.0f, 0x1.7d3314p-50f, 0x1.88d07ep-31f,
     0x1.a84624p-76f, 0x1.252aa8p-87f, 0x1.d1e654p-49f, 0x1.f79d2ep-23f,
     0x1.a1369ep-37f, 0.0f, 0x1.c5ec4cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.153ca4p-80f, 0x1.6a8dd8p-22f, 0x1.0d35eep-31f, 0.0f, 0.0f,
     0x1.4d8094p-89f, 0x1.9a67acp-22f, 0x1.0b6964p-64f, 0.0f, 0x1.fe258cp-4f,
     0x1.63a47ap-37f, 0x1.5b6e56p-12f, 0x1.89dbb4p-70f, 0.0f, 0x1.6b168p-19f,
     0x1.767322p-32f, 0x1.ab88c8p-117f, 0.0f, 0x1.bb9ac6p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edcc96p-68f, 0x1.a86b22p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8de548p-126f, 0x1.eae244p-80f, 0x1.ce1658p-46f, 0.0f, 0x1.437d42p-73f, 0.0f,
     0x1.7a564p-76f, 0x1.5f40a2p-49f, 0x1.7cc2ecp-120f, 0.0f, 0x1.42d8f6p-85f, 0.0f,
     0x1.d7128cp-124f, 0x1.397748p-14f, 0x1.24a9c2p-105f, 0.0f, 0.0f, 0x1.e3842p-46f,
     0x1.c10fdap-89f, 0x1.f7852p-63f, 0x1.47b296p-52f, 0.0f, 0x1.76abf6p-82f,
     0x1.a7f1a2p-89f, 0x1.604bccp-54f, 0x1.66f41cp-49f, 0x1.7c16f4p-14f,
     0x1.9eb12ap-114f, 0x1.ac9e2ep-121f, 0x1.049842p-71f, 0x1.d858a6p-33f, 0.0f,
     0x1.b1f334p-89f, 0.0f, 0.0f, 0.0f, 0x1.ae6412p-43f, 0x1.4bcbf2p-90f,
     0x1.e34aaap-123f, 0.0f, 0.0f, 0.0f, 0x1.54af6cp-101f, 0x1.e3711cp-101f, 0.0f,
     0.0f, 0x1.bd632cp-6f, 0.0f, 0x1.853f86p-95f, 0.0f, 0.0f, 0.0f, 0x1.17325p-122f,
     0x1.a41d5ep-91f, 0.0f, 0x1.4dfa22p-120f, 0x1.cf078cp-55f, 0.0f, 0.0f,
     0x1.44aec4p-37f, 0.0f, 0x1.6b633cp-24f, 0x1.fd6c22p-4f, 0.0f, 0x1.5c47a2p-86f,
     0x1.790986p-97f, 0.0f, 0.0f, 0x1.344826p-112f, 0.0f, 0.0f, 0x1.92df3ep-64f,
     0x1.46abb6p-72f, 0.0f, 0x1.043e66p-20f, 0x1.2de5b4p-59f, 0x1.121102p-31f,
     0x1.4de05ap-114f, 0x1.066e64p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.754e32p-31f,
     0x1.463494p-54f, 0.0f, 0.0f, 0x1.8a4bc6p-43f, 0x1.46b0aep-113f, 0.0f,
     0x1.da7d4p-108f, 0.0f, 0x1.988156p-75f, 0x1.562d54p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e4746p-20f, 0.0f, 0x1.7c5524p-110f, 0x1.fbd0b6p-42f, 0x1.e1ec5cp-25f,
     0x1.1c23bap-103f, 0.0f, 0x1.e63542p-119f, 0.0f, 0x1.95719ep-94f,
     0x1.6f623ep-116f, 0.0f, 0x1.539dp-26f, 0x1.0b186p-89f, 0x1.a6cfc6p-103f, 0.0f,
     0x1.7003c6p-120f, 0x1.7463eap-81f, 0.0f, 0x1.5ffb42p-101f, 0.0f,
     0x1.5fdae6p-125f, 0.0f, 0.0f, 0x1.142f1cp-28f, 0x1.b6437ep-13f, 0x1.87b342p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a98708p-110f, 0.0f, 0.0f, 0.0f,
     0x1.a40ec8p-18f, 0.0f, 0.0f, 0x1.7e5106p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e5222p-33f, 0x1.87cb16p-49f, 0x1.0a70b6p-114f, 0.0f, 0.0f, 0x1.faa938p-45f,
     0.0f, 0x1.0ea524p-126f, 0.0f, 0x1.204f84p-3f, 0.0f, 0x1.8b3d96p-95f,
     0x1.566b14p-41f, 0x1.c9b0a4p-5f, 0x1.d85192p-117f, 0x1.26cadcp-115f, 0.0f,
     0x1.8f7b7ap-3f, 0x1.1a3cfp-12f, 0.0f, 0x1.773a56p-75f, 0.0f, 0x1.a1ac84p-42f,
     0x1.ebc1a6p-54f, 0.0f, 0x1.324548p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c7ca6p-64f,
     0x1.8310e6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad4272p-2f, 0.0f, 0x1.4c24fap-85f,
     0.0f, 0x1.915bbap-57f, 0.0f, 0x1.62d032p-49f, 0x1.8c3374p-110f, 0x1.6cb56p-101f,
     0x1.dd102cp-86f, 0.0f, 0x1.cb2eb6p-112f, 0.0f, 0x1.adb9dap-70f
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
            tmp2 = fminf(tmp0, tmp1);
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
    printf("fminf %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fminf bench acc %a\n", global_bench_acc);
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
