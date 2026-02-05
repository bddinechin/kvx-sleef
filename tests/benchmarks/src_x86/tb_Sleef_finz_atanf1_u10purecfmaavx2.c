/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf1_u10purecfma.c --function \
 *     Sleef_finz_atanf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.d1884ap-65f, 0x1.f6dc34p-122f, 0.0f, 0.0f, 0x1.e3613ap-122f,
     0.0f, 0x1.f50392p-75f, 0x1.94ec76p-99f, 0x1.7ddf0cp-85f, 0.0f, 0.0f,
     0x1.008498p-56f, 0.0f, 0.0f, 0x1.4ee2c4p-3f, 0.0f, 0x1.4657f6p-98f, 0.0f,
     0x1.7a6f86p-78f, 0.0f, 0x1.d00ep-55f, 0x1.3b767p-106f, 0x1.761656p-51f, 0.0f,
     0x1.77d21ap-18f, 0x1.5dc1ccp-41f, 0x1.f0b7acp-80f, 0.0f, 0x1.8c0136p-21f,
     0x1.ca7338p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5de4f6p-75f, 0x1.a61b68p-71f, 0.0f,
     0.0f, 0x1.87a7dep-96f, 0x1.fc2a76p-36f, 0.0f, 0.0f, 0x1.2dcafcp-18f, 0.0f,
     0x1.5bfbeap-87f, 0.0f, 0x1.02757ap-94f, 0x1.0b73dcp-112f, 0x1.1b7506p-29f,
     0x1.58613ep-39f, 0x1.38e1a6p-57f, 0.0f, 0x1.e61e7ap-90f, 0x1.31052ap-95f, 0.0f,
     0x1.cf5f7p-19f, 0x1.e71212p-34f, 0x1.eeafacp-116f, 0x1.a7b8fap-1f,
     0x1.2f1e94p-122f, 0.0f, 0x1.17d418p-49f, 0x1.bb44d8p-114f, 0x1.c05b0ep-33f, 0.0f,
     0x1.1590b8p-52f, 0.0f, 0x1.1c4b0ep-102f, 0.0f, 0.0f, 0.0f, 0x1.79c9f6p-34f,
     0x1.ad6c54p-82f, 0x1.ea746ap-75f, 0.0f, 0.0f, 0.0f, 0x1.f9b16ep-73f, 0.0f, 0.0f,
     0x1.4009p-10f, 0x1.0570e8p-63f, 0x1.d52fc8p-79f, 0x1.cc8864p-92f,
     0x1.9d55f2p-40f, 0x1.8b8e7ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9b5a2p-115f,
     0x1.1a26eep-63f, 0.0f, 0.0f, 0x1.9d9ebp-125f, 0x1.8fb1fep-101f, 0.0f,
     0x1.88e5ep-121f, 0x1.8c7c36p-125f, 0.0f, 0x1.3ceba4p-40f, 0x1.a3de62p-46f, 0.0f,
     0x1.314f7cp-32f, 0.0f, 0.0f, 0.0f, 0x1.5949fap-95f, 0.0f, 0x1.4ad7e2p-24f, 0.0f,
     0.0f, 0x1.80a6c8p-61f, 0x1.a52792p-6f, 0x1.ff1766p-2f, 0.0f, 0.0f, 0.0f,
     0x1.fbc61p-21f, 0.0f, 0.0f, 0x1.1ec308p-86f, 0.0f, 0x1.81252ep-6f,
     0x1.25731ep-25f, 0.0f, 0x1.2d6352p-42f, 0x1.56ea46p-38f, 0x1.948cap-62f, 0.0f,
     0.0f, 0x1.43172ap-119f, 0.0f, 0.0f, 0x1.1d7fccp-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.029c78p-68f, 0.0f, 0.0f, 0x1.c5ce9cp-14f, 0.0f, 0.0f, 0x1.4061cap-70f,
     0x1.1d7f04p-23f, 0x1.ce746ep-106f, 0x1.d5e90cp-36f, 0x1.984a4cp-103f,
     0x1.6ba7d8p-58f, 0.0f, 0.0f, 0x1.a833c2p-70f, 0x1.490c78p-57f, 0x1.28342ap-1f,
     0x1.cec4e6p-4f, 0x1.7c2c9cp-72f, 0x1.1bea06p-115f, 0x1.3811bep-125f, 0.0f, 0.0f,
     0.0f, 0x1.07db9ep-22f, 0.0f, 0.0f, 0x1.f8215cp-107f, 0.0f, 0x1.8888b6p-50f,
     0x1.3d019p-11f, 0x1.fe76e4p-123f, 0x1.6b02dcp-32f, 0x1.6a2beep-45f,
     0x1.0a2f7p-35f, 0.0f, 0x1.e2b74p-92f, 0x1.ad20e4p-5f, 0.0f, 0x1.abd8dcp-78f,
     0x1.98d1f6p-69f, 0.0f, 0x1.dcdd6ap-18f, 0x1.aca658p-67f, 0.0f, 0x1.8a4c9cp-62f,
     0.0f, 0x1.8ab3cp-120f, 0x1.15e9aap-99f, 0x1.0c8776p-48f, 0.0f, 0.0f, 0.0f,
     0x1.689302p-22f, 0.0f, 0x1.4092e4p-85f, 0x1.3b887ap-15f, 0x1.a8a842p-80f, 0.0f,
     0x1.8b6ee2p-13f, 0.0f, 0.0f, 0.0f, 0x1.57a02cp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ffabcp-97f, 0x1.ea72c6p-1f, 0x1.f1fe18p-25f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f3d508p-16f, 0.0f, 0x1.468018p-64f, 0.0f, 0.0f, 0x1.59d00cp-43f,
     0x1.b3a5fp-64f, 0.0f, 0x1.6257cap-30f, 0.0f, 0.0f, 0.0f, 0x1.4c2a3ep-88f, 0.0f,
     0x1.447b08p-83f, 0x1.5c051cp-59f, 0.0f, 0.0f, 0.0f, 0x1.bc1f16p-41f,
     0x1.4f318p-36f, 0x1.099d9p-1f, 0x1.9dba06p-88f, 0x1.3dd742p-126f, 0.0f, 0.0f,
     0x1.bd4492p-29f, 0x1.9d12dp-59f, 0x1.83300ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.7cb07p-29f, 0x1.91011cp-22f, 0x1.ff3b6ep-27f, 0.0f, 0.0f, 0x1.079a26p-102f,
     0.0f, 0x1.d19812p-44f, 0x1.76517ep-19f, 0.0f, 0x1.788cecp-8f, 0.0f,
     0x1.a0bfe8p-89f, 0x1.b684dp-25f, 0.0f, 0x1.9dc8cep-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08d916p-71f, 0.0f, 0x1.d13606p-121f, 0.0f, 0x1.d34b64p-103f,
     0x1.d1f2f6p-80f, 0x1.4c1c9ep-108f, 0.0f, 0x1.2bcf7p-68f, 0x1.76a548p-79f, 0.0f,
     0.0f, 0x1.0f282ep-85f, 0x1.9b8d9cp-125f, 0x1.4b776p-111f, 0.0f, 0x1.0d46dep-6f,
     0.0f, 0.0f, 0x1.fc50ep-101f, 0.0f, 0x1.fcee42p-48f, 0.0f, 0x1.164cfcp-105f, 0.0f,
     0.0f, 0.0f, 0x1.bbd9c2p-100f, 0.0f, 0x1.412c42p-122f, 0x1.c15888p-114f,
     0x1.bbf2e4p-60f, 0x1.a10a8cp-124f, 0.0f, 0x1.49143p-103f, 0x1.cd6a0cp-44f, 0.0f,
     0.0f, 0.0f, 0x1.f8e2e2p-35f, 0x1.8fca88p-71f, 0.0f, 0x1.6186ecp-93f,
     0x1.88e518p-8f, 0.0f, 0x1.9caba6p-45f, 0.0f, 0x1.16d8eap-77f, 0x1.d076cap-108f,
     0.0f, 0x1.b7a11cp-125f, 0.0f, 0x1.ab21b8p-56f, 0.0f, 0.0f, 0x1.bfe71p-95f, 0.0f,
     0x1.73fb1ep-22f, 0.0f, 0x1.85d9aap-24f, 0.0f, 0x1.60bdf6p-78f, 0x1.d7a87ap-48f,
     0.0f, 0.0f, 0.0f, 0x1.a2795cp-47f, 0x1.9b1874p-122f, 0.0f, 0x1.2dcda8p-83f, 0.0f,
     0.0f, 0.0f, 0x1.991178p-29f, 0.0f, 0x1.48be3cp-1f, 0x1.7fd342p-29f, 0.0f,
     0x1.c2d2b8p-90f, 0.0f, 0x1.8b872ap-75f, 0x1.5b4c2p-88f, 0x1.364136p-15f, 0.0f,
     0x1.7d81eep-79f, 0x1.caa23ep-52f, 0.0f, 0x1.2d068ap-116f, 0.0f, 0.0f, 0.0f,
     0x1.6cdba8p-68f, 0x1.20c87ep-74f, 0x1.7f0c4p-116f, 0.0f, 0x1.e631ep-29f,
     0x1.82ac46p-110f, 0.0f, 0x1.4fcb2p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.910824p-12f, 0.0f, 0x1.bf6274p-37f, 0x1.8ac5d8p-63f,
     0x1.caf47ap-69f, 0.0f, 0x1.4b776ep-100f, 0x1.4f95ecp-37f, 0.0f, 0x1.017886p-34f,
     0x1.077458p-42f, 0x1.9767d6p-110f, 0.0f, 0x1.cb1d8ap-37f, 0x1.1a6dbep-119f,
     0x1.519b8ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3711a6p-42f, 0.0f, 0.0f,
     0x1.4eec3ep-126f, 0x1.39ecf8p-103f, 0.0f, 0x1.9868f4p-2f, 0.0f, 0x1.ad409cp-70f,
     0x1.ef80a2p-33f, 0.0f, 0x1.ad7ba4p-6f, 0.0f, 0x1.56e0ccp-3f, 0.0f,
     0x1.058858p-2f, 0x1.a21ab4p-64f, 0x1.0d4e04p-32f, 0x1.cd41aep-40f,
     0x1.ac547ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bfcbep-12f, 0.0f, 0.0f, 0x1.a3592cp-117f, 0.0f, 0x1.6bfe4cp-31f,
     0x1.dc2a36p-42f, 0x1.cba874p-65f, 0.0f, 0.0f, 0.0f, 0x1.6805a2p-17f, 0.0f, 0.0f,
     0x1.4d41dap-28f, 0x1.d3e49p-22f, 0.0f, 0.0f, 0.0f, 0x1.e96abep-105f,
     0x1.92c738p-21f, 0x1.624b0ep-74f, 0x1.7c1278p-13f, 0x1.480bdcp-82f, 0.0f, 0.0f,
     0x1.6c683p-87f, 0x1.f324f4p-103f, 0x1.5ff5c4p-103f, 0.0f, 0x1.df0efcp-33f, 0.0f,
     0x1.69d6fap-117f, 0x1.17f83ap-48f, 0.0f, 0.0f, 0x1.71b6c6p-68f, 0.0f, 0.0f, 0.0f,
     0x1.5e5eb2p-13f, 0.0f, 0.0f, 0x1.9c4fd6p-51f, 0x1.798ceep-58f, 0x1.eb20fcp-43f,
     0x1.df982p-56f, 0x1.5089acp-42f, 0.0f, 0.0f, 0x1.929cdap-47f, 0.0f, 0.0f,
     0x1.31b6bcp-30f, 0.0f, 0.0f, 0x1.9f3b36p-35f, 0x1.dc37bap-42f, 0x1.4a346p-121f,
     0x1.a3382ep-21f, 0x1.eca222p-20f, 0.0f, 0x1.c2285p-4f, 0x1.036672p-76f,
     0x1.1737bap-125f, 0.0f, 0x1.3ac926p-122f, 0.0f, 0x1.6ebc8ep-77f, 0.0f, 0.0f,
     0.0f, 0x1.c88f7cp-99f, 0.0f, 0.0f, 0x1.e82126p-86f, 0x1.8052d6p-89f, 0.0f,
     0x1.97a972p-12f, 0.0f, 0x1.db3968p-110f, 0.0f, 0.0f, 0x1.fe896ap-112f, 0.0f,
     0.0f, 0.0f, 0x1.4cce0ap-45f, 0.0f, 0x1.c46dbep-69f, 0x1.9d31b4p-101f,
     0x1.28ee6p-90f, 0x1.73129cp-75f, 0x1.ee7154p-35f, 0x1.b6b88p-35f, 0.0f,
     0x1.0e9836p-61f, 0.0f, 0.0f, 0x1.8becc4p-65f, 0x1.0cdf1p-95f, 0.0f, 0.0f,
     0x1.5aa558p-87f, 0.0f, 0x1.8e92a2p-23f, 0.0f, 0x1.a3d738p-12f, 0.0f,
     0x1.0a5a14p-10f, 0.0f, 0x1.98ddd4p-21f, 0.0f, 0.0f, 0x1.20551p-117f,
     0x1.f986f8p-121f, 0.0f, 0x1.321f5ep-94f, 0x1.88a45ap-115f, 0.0f, 0x1.a4b47p-33f,
     0.0f, 0.0f, 0.0f, 0x1.641ccep-97f, 0.0f, 0.0f, 0x1.808496p-55f, 0x1.e99f5cp-96f,
     0x1.97acdp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b4cfcp-71f, 0.0f,
     0x1.db54d8p-1f, 0.0f, 0x1.f022b8p-113f, 0x1.7c83d6p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.59da7p-18f, 0x1.14af48p-74f, 0x1.d27e72p-115f, 0x1.025f0ep-115f, 0.0f,
     0x1.7fd46p-77f, 0.0f, 0.0f, 0x1.facda2p-55f, 0.0f, 0x1.2fbbd2p-126f,
     0x1.68d934p-10f, 0x1.582422p-109f, 0x1.2c62bp-125f, 0x1.3b800cp-69f, 0.0f, 0.0f,
     0x1.5797bp-62f, 0x1.59e764p-28f, 0x1.50030cp-120f, 0.0f, 0.0f, 0x1.bbc952p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.db7d34p-17f, 0.0f, 0.0f, 0x1.bc50b4p-106f, 0.0f,
     0x1.a05a04p-84f, 0.0f, 0x1.eba48cp-118f, 0x1.d69da4p-2f, 0.0f, 0x1.3480d6p-98f,
     0x1.171e04p-22f, 0x1p0f, 0x1.5fb58p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.662accp-9f, 0.0f, 0.0f, 0.0f, 0x1.6b8858p-32f, 0.0f, 0.0f, 0x1.42e3bap-100f,
     0.0f, 0.0f, 0x1.c019e6p-110f, 0.0f, 0x1.16ae0ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.098966p-66f, 0.0f, 0.0f, 0x1.27da0cp-62f, 0.0f, 0x1.7be39cp-97f, 0.0f,
     0x1.330e3p-23f, 0x1.0f8948p-94f, 0.0f, 0.0f, 0x1.2a9974p-19f, 0x1.23ea18p-77f,
     0.0f, 0.0f, 0.0f, 0x1.10e8fap-29f, 0.0f, 0x1.513d0ap-67f, 0.0f, 0x1.1a987cp-1f,
     0x1.244db8p-27f, 0.0f, 0.0f, 0x1.90dd9ap-100f, 0x1.593ffcp-62f, 0.0f,
     0x1.fffc64p-31f, 0.0f, 0x1.31966cp-79f, 0.0f, 0x1.b5a25ap-27f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.697c3ap-81f, 0x1.7d510ap-7f, 0x1.b06a96p-115f, 0.0f, 0x1.a1d278p-3f,
     0x1.814f6cp-13f, 0x1.a230fcp-122f, 0x1.a3021cp-118f, 0x1.c040cp-53f, 0.0f,
     0x1.d2e30ep-32f, 0.0f, 0x1.9cbf82p-82f, 0x1.396d66p-65f, 0x1.feb56cp-125f,
     0x1.b87e06p-25f, 0x1.ff315ep-104f, 0x1.43d576p-81f, 0.0f, 0.0f, 0x1.bac7p-54f,
     0.0f, 0x1.038beap-108f, 0.0f, 0x1.45da1cp-105f, 0.0f, 0x1.afe0bp-49f, 0.0f, 0.0f,
     0x1.c4baf8p-56f, 0.0f, 0.0f, 0x1.a69908p-67f, 0x1.2a5998p-121f, 0x1.34447ep-10f,
     0x1.f3c2c6p-29f, 0.0f, 0x1.4b5968p-122f, 0.0f, 0.0f, 0x1.c7d46cp-19f,
     0x1.fe4262p-75f, 0.0f, 0x1.b1ff9ap-6f, 0x1.47a5dp-78f, 0x1.0bc5dp-81f,
     0x1.ea9774p-67f, 0.0f, 0x1.695d6ep-59f, 0.0f, 0x1.4081cp-6f, 0.0f,
     0x1.34fb34p-31f, 0.0f, 0.0f, 0x1.76f118p-7f, 0.0f, 0.0f, 0x1.c36924p-47f, 0.0f,
     0.0f, 0x1.19e8b2p-100f, 0.0f, 0.0f, 0x1.1a14dep-82f, 0.0f, 0.0f, 0x1.740224p-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91bbe6p-71f, 0.0f, 0.0f, 0.0f, 0x1.abb59ap-65f,
     0x1.e14e9p-126f, 0x1.9f24b6p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0022p-75f, 0x1.051c52p-104f, 0x1.f989dap-62f, 0.0f, 0x1.a7d152p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a838eep-112f, 0x1.e5be0cp-116f, 0x1.e4679cp-126f,
     0x1.86988cp-21f, 0x1.6174b2p-108f, 0x1.516522p-69f, 0x1.8e81p-54f, 0.0f, 0.0f,
     0x1.d2cf1cp-82f, 0.0f, 0.0f, 0x1.4926d4p-121f, 0x1.e059bap-64f, 0.0f, 0.0f,
     0x1.040376p-30f, 0.0f, 0.0f, 0x1.812fcp-29f, 0.0f, 0.0f, 0.0f, 0x1.db78e6p-46f,
     0.0f, 0.0f, 0.0f, 0x1.dfbf04p-45f, 0.0f, 0.0f, 0.0f, 0x1.6779b4p-73f, 0x1p0f,
     0x1.602b72p-87f, 0x1.253656p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0dfb88p-15f,
     0x1.8db16ep-51f, 0.0f, 0x1.33ae5cp-3f, 0x1.21ed1ap-35f, 0.0f, 0x1.9d8cp-23f,
     0.0f, 0.0f, 0x1.566ca8p-122f, 0.0f, 0.0f, 0x1.f543dep-17f, 0x1.f9d58ep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0c05ep-117f, 0x1.e6db24p-36f,
     0.0f, 0x1.711a6p-26f, 0.0f, 0.0f, 0x1.c64e76p-65f, 0x1.76bbdep-79f, 0.0f,
     0x1.c42e5cp-2f, 0x1.010856p-31f, 0.0f, 0x1.2c450ap-5f, 0x1.d62d4cp-27f, 0.0f,
     0.0f, 0.0f, 0x1.ec5958p-76f, 0.0f, 0x1.9f1148p-99f, 0x1.dc33cap-23f, 0.0f,
     0x1.0aa1fap-56f, 0.0f, 0x1.9af27cp-57f, 0.0f, 0x1.f3c7bap-28f, 0x1.b2ecc8p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfddacp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bcf3e2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea68dep-27f, 0x1.f2671p-109f,
     0x1.c41c72p-44f, 0x1.5b8542p-118f, 0x1.28565cp-93f, 0.0f, 0x1.cc478p-105f, 0.0f,
     0x1.ce722cp-95f, 0x1.1a8812p-4f, 0x1.b5431p-38f, 0x1.0b495cp-64f,
     0x1.4a57c8p-60f, 0.0f, 0x1.16938cp-97f, 0.0f, 0x1.a02482p-38f, 0.0f, 0.0f,
     0x1.1e617p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b30f02p-30f,
     0x1.566b62p-3f, 0x1.a192bep-42f, 0.0f, 0.0f, 0.0f, 0x1.3a455ep-63f, 0.0f, 0.0f,
     0x1.554b2ep-48f, 0.0f, 0x1.aff33ap-17f, 0.0f, 0.0f, 0.0f, 0x1.432c38p-116f,
     0x1.3bd2aap-72f, 0x1.c4a28ap-42f, 0x1.b69b54p-120f, 0x1.2811fp-84f, 0.0f, 0.0f,
     0x1.f89ac8p-125f, 0x1.96b00ep-4f, 0x1.eed666p-49f, 0x1.4a31a6p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a88816p-21f, 0x1.b8f242p-85f, 0.0f, 0.0f, 0x1.0b41c4p-87f,
     0x1.c46a62p-11f, 0x1.e589ep-42f, 0.0f, 0.0f, 0x1.300ec2p-54f, 0.0f, 0.0f,
     0x1.69e17ap-65f, 0.0f, 0x1.419ce2p-38f, 0x1.34719ap-71f, 0x1.4521bcp-107f,
     0x1.828fdcp-60f, 0.0f, 0.0f, 0x1.f942d2p-86f, 0x1.abe74ep-54f, 0x1.fa277ep-45f,
     0x1.af2f44p-1f, 0x1.020692p-67f, 0x1.713b4p-51f, 0x1.5a19b2p-93f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6cd18cp-6f, 0.0f, 0x1.1de336p-8f, 0.0f, 0.0f,
     0x1.1d6246p-6f, 0.0f, 0.0f, 0.0f, 0x1.ac84b6p-95f, 0.0f, 0x1.fe1fdp-13f, 0.0f,
     0x1.44ab5ap-115f, 0.0f, 0.0f, 0.0f, 0x1.56e02cp-15f, 0.0f, 0.0f,
     0x1.69654ep-126f, 0x1.8d335ap-3f, 0x1.a09a7ep-118f, 0x1.7a0fa4p-37f, 0.0f,
     0x1.20b796p-107f, 0x1.186ca8p-98f, 0x1.ecad56p-96f, 0x1.eb340cp-124f,
     0x1.c2edb8p-5f, 0x1.2862c2p-66f, 0x1.45aa68p-57f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_atanf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atanf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
