/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanf1_u10purecfma.c --function \
 *     Sleef_finz_tanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.749512p-80f, 0.0f, 0.0f, 0x1.9d41c2p-16f, 0.0f, 0.0f, 0x1.63aff8p-79f,
     0x1.8b7e42p-110f, 0.0f, 0x1.4ad296p-90f, 0.0f, 0x1.de495ep-20f, 0x1.19260ep-40f,
     0.0f, 0.0f, 0.0f, 0x1.e88f9ep-83f, 0x1.7074cep-43f, 0.0f, 0x1.b2742cp-126f,
     0x1.d1c7d8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7bf4fap-126f, 0.0f, 0.0f,
     0.0f, 0x1.8f7e7ep-109f, 0.0f, 0x1.3d2af4p-52f, 0x1.214c48p-126f, 0x1.a1c72cp-78f,
     0x1.33d782p-62f, 0x1.0d3962p-32f, 0.0f, 0x1.6bcf9ap-9f, 0.0f, 0x1.1e7892p-97f,
     0x1.42541ep-46f, 0.0f, 0.0f, 0x1.473d52p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52c1f8p-29f, 0.0f, 0x1.cdf83p-99f, 0.0f, 0x1.1ada5ap-103f, 0x1.d79402p-16f,
     0.0f, 0.0f, 0x1.85ce9ap-102f, 0x1.dcaceap-108f, 0.0f, 0x1.a398fp-21f,
     0x1.ba2bdap-101f, 0x1.490ee6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.316e1ep-20f, 0.0f,
     0.0f, 0x1.135b2cp-14f, 0.0f, 0x1.86fa68p-115f, 0.0f, 0x1.67d668p-123f, 0.0f,
     0.0f, 0x1.a5ddfap-81f, 0x1.0acf4p-9f, 0.0f, 0.0f, 0.0f, 0x1.d9ece6p-38f, 0.0f,
     0x1.91a8fap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f82c6cp-110f, 0.0f, 0x1.db4adcp-98f,
     0x1.411c6ap-18f, 0x1.adb012p-100f, 0x1.a14012p-78f, 0x1.c374ap-51f,
     0x1.3b8cb2p-79f, 0.0f, 0.0f, 0x1.dac61ep-87f, 0.0f, 0x1.31ffb4p-1f, 0.0f,
     0x1.74cf0cp-79f, 0.0f, 0x1.a66578p-64f, 0x1.03b836p-24f, 0x1.b3c406p-81f, 0.0f,
     0x1.49fff2p-22f, 0x1.9602cep-27f, 0x1.a65876p-21f, 0x1.63f45p-45f,
     0x1.c1e0f4p-80f, 0x1.53a35cp-88f, 0.0f, 0x1.2b7a62p-66f, 0x1.4fcc68p-6f, 0.0f,
     0.0f, 0x1.0e22fcp-123f, 0x1.acb4acp-98f, 0.0f, 0x1.53d546p-37f, 0.0f,
     0x1.58da4p-49f, 0.0f, 0.0f, 0x1.8ca47p-94f, 0.0f, 0x1.ff499ep-48f,
     0x1.dbdd2ap-104f, 0.0f, 0x1.a963cp-60f, 0.0f, 0.0f, 0.0f, 0x1.3abe18p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56f3eep-3f, 0x1.fa51eep-69f, 0x1.b2bafcp-89f,
     0.0f, 0.0f, 0.0f, 0x1.ec6d08p-97f, 0x1.c0de6cp-109f, 0x1.28169p-101f, 0.0f,
     0x1.a580e6p-118f, 0x1.8523f2p-74f, 0x1.d5208ep-2f, 0x1.58dc7p-1f, 0.0f,
     0x1.d7548ep-78f, 0x1.341e54p-64f, 0.0f, 0x1.0a0b0cp-4f, 0.0f, 0x1.556efp-79f,
     0x1.1b32c2p-102f, 0x1.d85752p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f24b2p-92f,
     0x1.818dbap-17f, 0.0f, 0x1.c6158ep-70f, 0.0f, 0.0f, 0x1.b69c02p-86f,
     0x1.a89a64p-40f, 0x1.c55182p-50f, 0.0f, 0x1.edd818p-5f, 0x1.870b48p-71f,
     0x1.48b142p-87f, 0.0f, 0.0f, 0.0f, 0x1.d67d16p-21f, 0x1.e33752p-103f,
     0x1.ce0f54p-16f, 0.0f, 0x1.10e08ep-50f, 0x1.e1e7aep-10f, 0.0f, 0x1.4ea27ap-66f,
     0.0f, 0x1.b91e6ap-47f, 0x1.f9951ap-106f, 0.0f, 0x1.e25404p-91f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f5142p-103f, 0.0f, 0x1.a0a418p-115f, 0.0f, 0.0f, 0.0f, 0x1.d51b2ap-4f,
     0.0f, 0.0f, 0x1.9d1fe2p-17f, 0.0f, 0x1.9c2f34p-115f, 0x1.a0fb8cp-103f, 0.0f,
     0x1.ae561ap-79f, 0.0f, 0x1.d6f596p-45f, 0.0f, 0x1.ba4336p-6f, 0.0f, 0.0f,
     0x1.b87de6p-122f, 0x1.16864p-102f, 0.0f, 0.0f, 0x1.e49728p-33f, 0x1.a5bc24p-72f,
     0.0f, 0.0f, 0x1.42170cp-51f, 0.0f, 0x1.cee9cap-92f, 0x1.13708cp-24f, 0.0f, 0.0f,
     0x1.eed5acp-65f, 0x1.7af886p-12f, 0.0f, 0x1.65c8c2p-35f, 0x1.68660ap-68f, 0.0f,
     0x1.f3126p-12f, 0.0f, 0.0f, 0.0f, 0x1.563822p-124f, 0x1.60254p-27f, 0.0f, 0.0f,
     0.0f, 0x1.96a8acp-83f, 0x1.bc20eep-29f, 0.0f, 0x1.dd51a2p-50f, 0.0f, 0.0f, 0.0f,
     0x1.f39c82p-50f, 0x1p0f, 0x1.59a822p-119f, 0.0f, 0.0f, 0x1.3fa0c6p-18f,
     0x1.44c9a4p-91f, 0.0f, 0x1.56c1f8p-98f, 0.0f, 0x1.7e156p-78f, 0x1.2f2852p-86f,
     0.0f, 0.0f, 0.0f, 0x1.c2d2ep-73f, 0x1.a38464p-5f, 0x1.8ac1f4p-81f,
     0x1.830676p-49f, 0.0f, 0x1.d64ab4p-109f, 0x1.b1473cp-120f, 0.0f, 0.0f,
     0x1.6e489cp-30f, 0.0f, 0.0f, 0.0f, 0x1.bdea72p-9f, 0x1.57fdc4p-47f, 0.0f,
     0x1.314b14p-115f, 0x1.c4fb7cp-118f, 0.0f, 0.0f, 0x1.446d1ap-77f, 0.0f, 0.0f,
     0x1.ff0f32p-124f, 0.0f, 0.0f, 0x1.22c276p-74f, 0.0f, 0x1.4b7d78p-94f, 0.0f, 0.0f,
     0x1.284722p-36f, 0x1.81db7cp-31f, 0x1.ebb114p-72f, 0x1.0b9b0ep-64f,
     0x1.83c3bep-3f, 0x1.9c7b3cp-121f, 0.0f, 0x1.358228p-91f, 0.0f, 0x1.4c5a58p-72f,
     0.0f, 0.0f, 0x1.0ff5aep-103f, 0x1.7d22d8p-104f, 0.0f, 0.0f, 0x1.fa901ap-94f,
     0x1.f68adep-2f, 0x1.b9247cp-11f, 0x1.041748p-100f, 0x1.d1b4d8p-84f,
     0x1.3b3a38p-46f, 0x1.86fca4p-119f, 0x1.89955ep-114f, 0x1.7acbd6p-31f,
     0x1.68ba88p-67f, 0.0f, 0x1.a179cp-20f, 0.0f, 0x1.f8f0ecp-67f, 0x1.1464aep-1f,
     0x1.245b44p-56f, 0x1.891b5ep-38f, 0x1.052abcp-83f, 0x1.5e1f9ap-95f,
     0x1.3ddd46p-67f, 0.0f, 0x1.0a6604p-22f, 0x1.4fb266p-12f, 0.0f, 0.0f,
     0x1.b45cecp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dfbe4p-64f, 0x1.458324p-38f,
     0x1.3378cep-28f, 0.0f, 0.0f, 0x1.944afp-118f, 0x1.3c2118p-49f, 0.0f,
     0x1.8ee6d8p-45f, 0x1.fb3ecp-59f, 0x1.8f7a02p-60f, 0.0f, 0x1.bf9862p-63f, 0.0f,
     0x1.56f5a4p-3f, 0x1.26c5fcp-65f, 0x1.fe6118p-118f, 0x1.46087ap-60f,
     0x1.cc894p-53f, 0x1.6e0842p-37f, 0.0f, 0x1.894c52p-28f, 0.0f, 0x1.202feep-90f,
     0x1.acdb6p-59f, 0x1.5cb788p-12f, 0x1.8f01dap-26f, 0.0f, 0x1.dccf96p-21f, 0.0f,
     0x1.426e68p-6f, 0x1.740c7ap-93f, 0x1.036188p-105f, 0.0f, 0.0f, 0x1.24854cp-68f,
     0.0f, 0x1.41401ap-17f, 0.0f, 0.0f, 0x1.32fa3ep-69f, 0x1.7b3c64p-107f, 0.0f,
     0x1.14cb04p-93f, 0x1.965afp-43f, 0.0f, 0x1.64db8p-46f, 0x1.4de0dep-105f,
     0x1.c24648p-74f, 0.0f, 0x1.344b2ep-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.14648p-19f, 0x1.827e76p-7f, 0.0f, 0.0f, 0x1.c9fa3p-45f, 0.0f, 0.0f,
     0x1.b71efp-105f, 0.0f, 0.0f, 0x1.37690cp-78f, 0.0f, 0.0f, 0x1.c49bp-31f,
     0x1.5fb83ep-114f, 0x1.aebcbep-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d8abap-126f, 0.0f, 0x1.b664c2p-73f, 0x1.797094p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b7e24ap-13f, 0x1.c221fap-62f, 0x1.762c32p-105f, 0.0f,
     0x1.f2e996p-106f, 0.0f, 0.0f, 0.0f, 0x1.7d26e8p-13f, 0x1.f3ec3ap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fde92cp-119f, 0x1.a392acp-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7d41a2p-123f, 0.0f, 0x1.2f7fc6p-29f, 0.0f, 0.0f, 0x1.560748p-117f,
     0.0f, 0.0f, 0.0f, 0x1.8d6a8ep-57f, 0.0f, 0x1.318992p-78f, 0x1.2d4c5p-81f, 0.0f,
     0x1.83641p-121f, 0.0f, 0x1.cc3626p-59f, 0x1.667acp-9f, 0x1.deee5ep-52f,
     0x1.ce08f2p-94f, 0.0f, 0x1.15ceaep-10f, 0x1.1d797ap-111f, 0.0f, 0x1.d290ccp-68f,
     0x1.44bc66p-86f, 0x1.2863eap-34f, 0x1.d66c82p-70f, 0x1.d07ap-18f,
     0x1.cfbb66p-39f, 0.0f, 0x1.0d810cp-33f, 0.0f, 0x1.d8901ep-82f, 0x1.5372d6p-89f,
     0x1.325b68p-8f, 0x1.c108e2p-8f, 0x1.5fce18p-80f, 0x1.982afp-74f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6aaaep-26f, 0.0f, 0x1.b4de42p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1296cep-32f, 0x1.f41b6p-73f, 0.0f, 0x1.949f1ap-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d5d16cp-89f, 0x1.dddd9ap-15f, 0x1.a9533ap-91f, 0.0f, 0.0f,
     0x1.14b02ep-106f, 0x1.c9c768p-55f, 0.0f, 0.0f, 0x1.dffffp-78f, 0x1.760db8p-57f,
     0.0f, 0x1.5d1aecp-106f, 0.0f, 0.0f, 0x1.722704p-44f, 0x1.e56e7ep-33f,
     0x1.546cd8p-120f, 0.0f, 0x1.c5346ep-51f, 0.0f, 0x1.35d6f2p-102f, 0.0f, 0.0f,
     0.0f, 0x1.541968p-63f, 0x1.7305fep-29f, 0.0f, 0x1.f059eap-27f, 0x1.e48c04p-14f,
     0x1.19d62ep-14f, 0x1.2ca3cp-97f, 0.0f, 0x1.a7b7p-78f, 0x1.6c058cp-99f, 0.0f,
     0.0f, 0x1.61d98ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fabdp-10f, 0x1.f44be8p-102f,
     0x1.312548p-71f, 0.0f, 0x1.d8887ep-7f, 0.0f, 0.0f, 0.0f, 0x1.fcbeb8p-55f,
     0x1.656ccep-96f, 0.0f, 0x1.70c66ap-60f, 0x1.59a1fcp-15f, 0.0f, 0x1.f5b1f8p-111f,
     0x1.6258dcp-16f, 0x1.5218aap-50f, 0x1.2db79cp-65f, 0.0f, 0x1.7b48d8p-16f,
     0x1.496366p-114f, 0x1.a4e05ap-10f, 0.0f, 0.0f, 0.0f, 0x1.3a7c1ap-104f,
     0x1.b84c44p-122f, 0x1.126e58p-78f, 0x1.9b7fap-89f, 0.0f, 0.0f, 0x1.dbe9b4p-109f,
     0x1.515ce2p-29f, 0.0f, 0x1.f7c4fp-82f, 0x1.172824p-99f, 0x1.b6f52ap-57f, 0.0f,
     0.0f, 0x1.bcba2p-91f, 0x1.b6ef06p-33f, 0x1.7d7f1p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.186eb6p-53f, 0x1.307512p-47f, 0x1.5866eep-31f, 0x1.ca2cb4p-27f,
     0x1.5f245p-36f, 0x1.61f0f8p-99f, 0.0f, 0x1.29c82cp-15f, 0x1.6e79e6p-99f,
     0x1.c9c57p-87f, 0x1.5c999ep-96f, 0.0f, 0.0f, 0x1.83f776p-73f, 0.0f,
     0x1.134feap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7edfp-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a95d8ep-92f, 0.0f, 0.0f, 0.0f, 0x1.053816p-48f, 0x1.998924p-2f,
     0x1.11922cp-106f, 0.0f, 0x1.610fc2p-66f, 0.0f, 0x1.abdc9p-59f, 0.0f,
     0x1.6d427ap-81f, 0.0f, 0x1.af399p-7f, 0x1p0f, 0.0f, 0.0f, 0x1.f0aacep-38f, 0.0f,
     0x1.934c5ap-45f, 0x1.a1a422p-60f, 0.0f, 0x1.6276d4p-123f, 0x1.f5623ep-83f,
     0x1.10c7d4p-42f, 0.0f, 0x1.58310ap-107f, 0.0f, 0.0f, 0.0f, 0x1.65397cp-41f,
     0x1.8ef63cp-81f, 0.0f, 0x1.b124ap-80f, 0.0f, 0x1.491a78p-108f, 0.0f, 0.0f,
     0x1.6c1818p-97f, 0x1.c5cd96p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3ad3p-65f,
     0.0f, 0.0f, 0x1.ba49a4p-52f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d9d8ap-84f, 0.0f, 0.0f, 0.0f, 0x1.5359e2p-78f, 0x1.1e2092p-55f, 0.0f, 0.0f,
     0x1.892994p-125f, 0.0f, 0x1.360a06p-51f, 0.0f, 0.0f, 0x1.69de9cp-104f, 0.0f,
     0.0f, 0x1.86d4f8p-114f, 0.0f, 0.0f, 0.0f, 0x1.001bb8p-51f, 0x1.852ae6p-52f,
     0x1.92974cp-2f, 0x1.4b6ef8p-30f, 0x1.40557ap-42f, 0x1.b64968p-28f, 0.0f, 0.0f,
     0x1.43d4b4p-75f, 0x1.13c022p-88f, 0x1.7deb8ep-97f, 0.0f, 0x1.e2543ap-106f, 0.0f,
     0x1.9ca984p-126f, 0x1.aa2074p-74f, 0.0f, 0x1.5b2c5cp-58f, 0.0f, 0.0f, 0.0f,
     0x1.5980e6p-100f, 0x1.9d58b8p-97f, 0.0f, 0x1.eb16fcp-62f, 0x1.ea436ep-33f, 0.0f,
     0x1.8a560cp-37f, 0.0f, 0x1.d27ec8p-34f, 0.0f, 0.0f, 0x1.5ce254p-34f, 0.0f,
     0x1.f36cc4p-77f, 0x1.5b0e02p-101f, 0.0f, 0.0f, 0x1.7f1998p-126f, 0.0f,
     0x1.415d0cp-43f, 0.0f, 0.0f, 0x1.8bc7fap-85f, 0x1.2c2506p-29f, 0.0f, 0.0f,
     0x1.05e12p-95f, 0x1.7ecf26p-117f, 0x1.a30b6ep-86f, 0.0f, 0x1.d06b8ep-33f,
     0x1.d5633p-39f, 0.0f, 0x1.f3143ep-9f, 0.0f, 0x1.6b9892p-98f, 0x1.0d8eaep-58f,
     0.0f, 0.0f, 0x1.847c8ep-5f, 0.0f, 0.0f, 0x1.3087fcp-23f, 0x1.18753ep-28f,
     0x1.82cf26p-68f, 0x1.154976p-39f, 0.0f, 0x1.ee5084p-116f, 0.0f, 0x1.9742ccp-11f,
     0.0f, 0.0f, 0x1.c9cb52p-124f, 0.0f, 0x1.04e82ap-53f, 0x1.f6e7ccp-89f, 0.0f, 0.0f,
     0x1.0a168cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af708p-86f, 0.0f, 0.0f,
     0x1.14e67p-47f, 0.0f, 0x1.72a0aep-13f, 0x1.eb364ap-114f, 0.0f, 0x1.e50a4cp-65f,
     0x1.d3cc38p-20f, 0x1.b457cap-84f, 0.0f, 0.0f, 0x1.dfb494p-61f, 0.0f,
     0x1.192d9ep-120f, 0x1.2774p-79f, 0.0f, 0x1.6573a8p-125f, 0.0f, 0x1.39ed4ep-35f,
     0x1.80cb6cp-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05462p-29f, 0.0f, 0x1.f4791p-120f,
     0x1.58d8ccp-93f, 0x1.6029b6p-75f, 0x1.ff876cp-118f, 0.0f, 0x1.66fa1cp-75f,
     0x1.477e7p-44f, 0x1.e106d6p-111f, 0x1.7be652p-88f, 0x1.e1ee88p-122f,
     0x1.6e65dp-60f, 0.0f, 0.0f, 0x1.ef3ef8p-83f, 0.0f, 0.0f, 0x1.3f3f5ep-71f,
     0x1.87efb6p-91f, 0.0f, 0.0f, 0x1.99b8cp-117f, 0x1.6dcaeap-112f, 0x1.533d16p-73f,
     0x1.1bbf4cp-25f, 0x1.c3a466p-45f, 0x1.c23d42p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9bb43ep-18f, 0.0f, 0x1.9e6174p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae5afap-69f, 0x1.3a8606p-22f, 0.0f, 0.0f, 0.0f, 0x1.5e753cp-22f,
     0.0f, 0.0f, 0x1.274398p-67f, 0x1.ebf9e8p-121f, 0.0f, 0x1.3dd5cp-111f,
     0x1.a7d5cp-35f, 0.0f, 0x1.ea06c2p-123f, 0x1.4ea80cp-53f, 0x1.c53a02p-24f, 0.0f,
     0x1.8149ccp-83f, 0.0f, 0.0f, 0x1.cd7bdcp-90f, 0.0f, 0x1.6e1844p-121f,
     0x1.efc35p-76f, 0.0f, 0x1.ae8ea6p-119f, 0x1.137c9cp-68f, 0.0f, 0.0f, 0.0f,
     0x1.8cee24p-35f, 0x1.b1abb2p-95f, 0.0f, 0.0f, 0x1.621a34p-66f, 0.0f, 0.0f, 0.0f,
     0x1.0fb97ap-42f, 0x1.08967ap-57f, 0.0f, 0x1.11b57ep-68f, 0.0f, 0x1.c4fffap-21f,
     0x1.83bccap-102f, 0.0f, 0.0f, 0x1.b4d452p-15f, 0x1.7529e4p-31f, 0.0f, 0.0f,
     0x1.427cd6p-52f, 0.0f, 0x1.48358ap-83f, 0.0f, 0x1.5584fcp-20f, 0.0f, 0.0f,
     0x1.80c36cp-65f, 0x1.a5acbp-6f, 0x1.7b421p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa25bp-77f, 0.0f, 0.0f, 0x1.75d7aap-32f, 0.0f, 0x1.62ec12p-14f, 0.0f, 0.0f,
     0x1.c1969ep-33f, 0.0f, 0.0f, 0.0f, 0x1.f3bf3p-104f, 0.0f, 0.0f, 0x1.3f9f36p-85f,
     0x1.5a9418p-6f, 0x1.db6394p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d84dcp-126f, 0.0f, 0x1.b9b702p-57f, 0x1.5a8282p-101f, 0.0f, 0.0f,
     0x1.f28fp-75f, 0.0f, 0.0f, 0x1.48531ap-65f, 0.0f, 0.0f, 0x1.ed8e76p-9f,
     0x1.f51536p-120f, 0.0f, 0x1.aa516ep-45f, 0.0f, 0x1.f5a638p-121f, 0.0f,
     0x1.da59dap-123f, 0.0f, 0x1.8cd126p-38f, 0.0f, 0.0f, 0x1.b9cc28p-15f, 0.0f, 0.0f,
     0.0f, 0x1.609232p-53f, 0.0f, 0.0f, 0.0f, 0x1.60e5e8p-90f, 0.0f, 0.0f,
     0x1.7afe6ep-46f, 0.0f, 0x1.667d72p-71f
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
            tmp1 = Sleef_finz_tanf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
