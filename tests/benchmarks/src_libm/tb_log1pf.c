/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log1pf.c --function log1pf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
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
     0x1.6f44f6p-8f, 0.0f, 0x1.602b84p-120f, 0x1.2ea392p-42f, 0x1.cf008ap-39f,
     0x1.bbb5b4p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.572d26p-68f, 0x1.6ab808p-70f,
     0x1.d0000ap-109f, 0x1.6a93dap-80f, 0x1.af0feep-38f, 0.0f, 0.0f, 0.0f,
     0x1.7a55ap-16f, 0.0f, 0x1.5e978p-69f, 0x1.7722c2p-117f, 0.0f, 0x1.b39fa8p-47f,
     0.0f, 0.0f, 0.0f, 0x1.e6bd8ap-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9d44p-88f, 0.0f,
     0x1.94f1b6p-29f, 0.0f, 0x1.be9a12p-64f, 0x1.0ff166p-49f, 0x1.2acc08p-16f, 0.0f,
     0.0f, 0x1.837724p-42f, 0.0f, 0x1.d7fd38p-44f, 0x1.9d073p-68f, 0x1.92fab4p-41f,
     0x1.03fdc8p-100f, 0.0f, 0.0f, 0.0f, 0x1.87c788p-31f, 0x1.76b58ap-32f,
     0x1.2de8e8p-107f, 0.0f, 0x1.7cca7p-25f, 0.0f, 0.0f, 0x1.959b74p-23f,
     0x1.09b64ep-16f, 0.0f, 0.0f, 0x1.03e158p-23f, 0x1.ff00b6p-87f, 0x1.4f51c8p-54f,
     0x1.e3f598p-104f, 0x1.00dadp-120f, 0x1.c1d0e6p-65f, 0.0f, 0x1.187492p-62f,
     0x1.a818ccp-82f, 0x1.dff686p-98f, 0x1.5d070cp-87f, 0x1.f0d17ap-100f,
     0x1.6758f6p-26f, 0.0f, 0.0f, 0x1.ca16e8p-67f, 0.0f, 0x1.f598ap-109f, 0.0f,
     0x1.c95bf6p-81f, 0.0f, 0.0f, 0.0f, 0x1.57f4aap-28f, 0.0f, 0x1.0cfc0ap-19f,
     0x1.db4806p-9f, 0x1.857298p-90f, 0x1.aca93ap-10f, 0x1.603504p-87f,
     0x1.d76078p-42f, 0.0f, 0.0f, 0.0f, 0x1.32999cp-37f, 0x1.d15956p-108f, 0.0f, 0.0f,
     0x1.b64a02p-125f, 0x1.c6bf1ap-87f, 0x1.a4e29ap-8f, 0.0f, 0.0f, 0x1.9f3fe6p-18f,
     0.0f, 0.0f, 0x1.12a5d8p-21f, 0.0f, 0x1.632ec8p-72f, 0x1.c169e4p-95f, 0.0f, 0.0f,
     0x1.9291bep-73f, 0x1.2359e6p-94f, 0x1.e1bc86p-71f, 0.0f, 0x1.7052c8p-78f,
     0x1.90ea8ep-49f, 0.0f, 0x1.425548p-2f, 0.0f, 0x1.7fac08p-98f, 0x1.1ec732p-7f,
     0x1.fe209cp-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3f899ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e286ap-82f, 0.0f, 0x1.a433dep-60f,
     0x1.7bce7ep-117f, 0x1.505c6cp-26f, 0.0f, 0.0f, 0x1.2e503ep-54f, 0.0f, 0.0f,
     0x1.30eea6p-105f, 0x1.22498p-18f, 0x1.b709b6p-89f, 0x1.e5af6ap-114f,
     0x1.cc93cep-56f, 0x1.fc451p-56f, 0.0f, 0x1.b5d36p-32f, 0.0f, 0.0f,
     0x1.0d4426p-87f, 0x1.6b204p-86f, 0x1.bcc6d2p-16f, 0.0f, 0x1.763b5p-94f, 0.0f,
     0.0f, 0x1.3681e6p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31a768p-23f, 0x1.f6e478p-96f,
     0x1.4a225cp-77f, 0.0f, 0x1.f31b64p-117f, 0.0f, 0.0f, 0x1.4a50dep-113f,
     0x1.e14148p-84f, 0.0f, 0x1.1cb5cep-29f, 0.0f, 0x1.01565ap-10f, 0x1.1dec04p-14f,
     0.0f, 0x1.f23b2ep-29f, 0x1.539f08p-22f, 0.0f, 0.0f, 0x1.3435fap-97f, 0.0f, 0.0f,
     0.0f, 0x1.d960fep-96f, 0.0f, 0x1.488cfep-124f, 0x1.8ba46ep-121f,
     0x1.21b3fap-114f, 0x1.59878p-98f, 0x1.ea099ep-31f, 0x1.ede12p-72f,
     0x1.97ea28p-101f, 0x1.58b05ep-80f, 0x1.2678cap-84f, 0x1.99d9cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.cf6eaap-41f, 0.0f, 0.0f, 0x1.1886d2p-92f, 0x1.fd248cp-53f, 0.0f, 0.0f,
     0x1.3519b8p-32f, 0.0f, 0x1.7df4e8p-8f, 0x1.605c0cp-77f, 0x1.88d268p-18f, 0.0f,
     0x1.58667p-93f, 0.0f, 0x1.e17c7ap-50f, 0x1.9b874ep-52f, 0x1.aafd32p-113f,
     0x1.711deep-44f, 0x1.f676b8p-33f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.e5d83p-118f,
     0.0f, 0x1.196f42p-78f, 0.0f, 0.0f, 0x1.09d37ap-7f, 0x1.ee5764p-69f,
     0x1.341f3cp-110f, 0.0f, 0.0f, 0x1.b80c58p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f0f022p-124f, 0.0f, 0x1.b6ba94p-25f, 0x1.89e556p-110f, 0.0f, 0x1.dc6a9ap-27f,
     0.0f, 0.0f, 0x1.66b778p-83f, 0.0f, 0.0f, 0x1.59dc56p-73f, 0x1.5c350ap-60f, 0.0f,
     0.0f, 0.0f, 0x1.131552p-102f, 0.0f, 0x1.639336p-42f, 0x1.9ab9c2p-86f, 0.0f,
     0x1.5e3a44p-105f, 0.0f, 0.0f, 0x1.6e4afap-30f, 0.0f, 0x1.3e86cap-2f,
     0x1.6690cep-61f, 0.0f, 0x1.c1d702p-105f, 0x1.287434p-32f, 0x1.c65f68p-10f,
     0x1.dc5b1ap-88f, 0.0f, 0.0f, 0x1.ea0622p-114f, 0x1.f8df92p-82f, 0x1.a15496p-122f,
     0x1.6e308ap-97f, 0.0f, 0.0f, 0.0f, 0x1.93c0f4p-63f, 0x1.21b3f2p-82f, 0.0f, 0.0f,
     0x1.5c6c9cp-116f, 0.0f, 0x1.58bf0ep-41f, 0x1.7732bap-92f, 0.0f, 0.0f, 0.0f,
     0x1.29f5dep-66f, 0x1.bffa3ep-76f, 0.0f, 0.0f, 0x1.f54e0ap-96f, 0x1.d35f3ap-76f,
     0.0f, 0.0f, 0.0f, 0x1.08743ep-118f, 0.0f, 0x1.59d746p-24f, 0x1.517608p-62f,
     0x1.dcec5ap-23f, 0x1.83405ap-109f, 0x1.a85004p-14f, 0.0f, 0.0f, 0x1.913a0ep-37f,
     0.0f, 0.0f, 0x1.3bb22ep-122f, 0.0f, 0x1.630c2cp-41f, 0.0f, 0x1.17a062p-86f,
     0x1.163c2p-54f, 0.0f, 0x1.83797p-123f, 0x1.d32918p-38f, 0x1.0a7016p-96f,
     0x1.35027ep-119f, 0.0f, 0.0f, 0.0f, 0x1.e13bb4p-17f, 0.0f, 0.0f, 0x1p0f,
     0x1.2483a2p-12f, 0x1.1bfe16p-82f, 0.0f, 0x1.c737a4p-13f, 0.0f, 0x1.df2a6ep-112f,
     0.0f, 0x1.e0ae92p-75f, 0x1.a43d48p-76f, 0x1.a5709cp-87f, 0x1.05067cp-3f, 0.0f,
     0x1.342b7p-20f, 0x1.6224ap-15f, 0x1.3e1466p-2f, 0.0f, 0.0f, 0x1.190b3cp-111f,
     0.0f, 0x1.ab8e12p-18f, 0.0f, 0.0f, 0.0f, 0x1.1f6dfap-120f, 0.0f, 0x1.932aap-32f,
     0.0f, 0x1.71252cp-100f, 0.0f, 0.0f, 0x1.6ee5cp-17f, 0.0f, 0x1.5b6952p-32f, 0.0f,
     0x1.22d024p-34f, 0x1.3a5012p-79f, 0x1.d21844p-81f, 0x1.e0230ap-6f, 0.0f, 0.0f,
     0x1.9c19b4p-39f, 0.0f, 0x1.b52e36p-123f, 0x1.ece8eep-100f, 0.0f, 0.0f, 0.0f,
     0x1.a2b156p-62f, 0x1.a9a9aep-92f, 0x1.615008p-96f, 0.0f, 0.0f, 0x1.4a81d6p-36f,
     0x1.f3d7ep-45f, 0x1.b9e378p-8f, 0.0f, 0x1.7e5b78p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.516f58p-42f, 0.0f, 0x1.65f118p-13f, 0x1p0f, 0x1.38f97cp-19f,
     0x1.3e4998p-6f, 0x1.9efa28p-44f, 0x1.0283f8p-21f, 0.0f, 0.0f, 0x1.843492p-11f,
     0x1.19846cp-2f, 0.0f, 0x1.dfbd5p-105f, 0.0f, 0.0f, 0.0f, 0x1.ed7806p-47f, 0.0f,
     0.0f, 0x1.9c124ap-53f, 0.0f, 0x1.e94884p-6f, 0.0f, 0x1.5a968ap-60f,
     0x1.0d7a46p-9f, 0.0f, 0x1.895d4cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d474fcp-66f,
     0.0f, 0x1.b7179ep-93f, 0x1.2827bap-102f, 0.0f, 0x1.6094dap-31f, 0.0f,
     0x1.d06492p-22f, 0x1.ab8c9p-21f, 0.0f, 0x1.e1f4bep-102f, 0.0f, 0x1.505cd6p-45f,
     0x1.dc5c92p-30f, 0x1.9d6dd4p-126f, 0.0f, 0.0f, 0.0f, 0x1.320b82p-52f,
     0x1.3ed17p-7f, 0x1.6a1b2p-55f, 0x1.b3aff2p-102f, 0x1.e38e52p-60f, 0.0f, 0.0f,
     0x1.9fe9d8p-43f, 0.0f, 0.0f, 0x1.d4d32ep-11f, 0.0f, 0x1.3917cep-43f,
     0x1.ba9438p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2218fcp-18f, 0.0f, 0x1.d83428p-58f,
     0.0f, 0x1.8b441ep-120f, 0x1.ce25c4p-7f, 0.0f, 0x1.1c93b4p-86f, 0.0f,
     0x1.804868p-90f, 0x1.34606cp-110f, 0x1.08bea8p-30f, 0.0f, 0.0f, 0x1.e067fep-59f,
     0.0f, 0.0f, 0.0f, 0x1.49da96p-79f, 0.0f, 0x1.fccd18p-63f, 0.0f, 0.0f, 0.0f,
     0x1.91b95ep-33f, 0x1.7dabacp-76f, 0x1.2b6b06p-54f, 0x1.4834a6p-41f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0c5bap-85f,
     0x1.699236p-119f, 0.0f, 0.0f, 0.0f, 0x1.be61fap-24f, 0x1.675802p-77f, 0.0f,
     0x1.8c00bep-85f, 0.0f, 0x1.47eep-65f, 0x1.639762p-14f, 0x1.ac8e88p-85f, 0.0f,
     0.0f, 0.0f, 0x1.51f13cp-26f, 0x1.ac3518p-93f, 0.0f, 0x1.c00392p-115f,
     0x1.19bb96p-4f, 0.0f, 0.0f, 0x1.2605aap-51f, 0.0f, 0.0f, 0.0f, 0x1.85b694p-101f,
     0.0f, 0.0f, 0x1.ea2aacp-117f, 0x1.c759cap-24f, 0.0f, 0.0f, 0x1.4eb6e6p-109f,
     0.0f, 0x1.b8fc3cp-16f, 0x1.8dca4ep-59f, 0.0f, 0.0f, 0x1.0acb84p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eee46p-91f, 0.0f, 0x1.97b26ap-65f, 0x1.0a62ecp-69f,
     0x1.eea178p-20f, 0.0f, 0x1.b80b28p-7f, 0x1.4f10dcp-99f, 0.0f, 0.0f,
     0x1.7ed0bcp-96f, 0.0f, 0x1.6a9006p-32f, 0x1.c2def6p-49f, 0.0f, 0x1.416846p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03d46cp-60f, 0x1.077c58p-2f,
     0x1.3c4e2cp-96f, 0.0f, 0x1.4bebccp-73f, 0x1.83a626p-34f, 0.0f, 0x1.5a5baep-18f,
     0.0f, 0x1.1397e4p-115f, 0x1.68cc18p-75f, 0x1.eb6a22p-10f, 0x1.459094p-42f,
     0x1.2858d6p-54f, 0.0f, 0.0f, 0x1.e1b702p-106f, 0.0f, 0.0f, 0x1.b34ff4p-63f,
     0x1.5e4b88p-65f, 0.0f, 0.0f, 0.0f, 0x1.0fffb2p-11f, 0.0f, 0.0f, 0x1.4c92f8p-86f,
     0.0f, 0x1.db4bap-111f, 0.0f, 0.0f, 0x1.ed7c0ap-20f, 0.0f, 0x1.4dde16p-44f, 0.0f,
     0x1.774754p-58f, 0.0f, 0.0f, 0x1.3d25e6p-41f, 0.0f, 0.0f, 0.0f, 0x1.1af81ap-102f,
     0x1.bb38a2p-81f, 0.0f, 0x1.54d27ap-121f, 0.0f, 0x1.ca996cp-6f, 0.0f, 0.0f,
     0x1.665c48p-55f, 0.0f, 0.0f, 0.0f, 0x1.664926p-86f, 0.0f, 0.0f, 0x1.1c11a8p-26f,
     0x1.48fa9ep-83f, 0.0f, 0.0f, 0x1.59ffcp-73f, 0.0f, 0x1.e53a6ep-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3e92e6p-36f, 0x1.e182ep-3f, 0.0f, 0.0f, 0x1.a13502p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5e4466p-23f, 0.0f, 0x1.4baba4p-36f, 0.0f, 0.0f,
     0x1.1dfdb2p-102f, 0.0f, 0x1.9659eep-122f, 0x1.9539d4p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.72b79ap-6f, 0x1.2f2c6ep-83f, 0x1.84eda2p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55aad4p-64f, 0x1.3ece5ap-69f, 0.0f, 0x1.fd33c4p-27f, 0x1.ab2d76p-35f, 0.0f,
     0x1.decd54p-31f, 0.0f, 0x1.a80626p-4f, 0x1.5683e2p-78f, 0x1.59bf6p-93f, 0.0f,
     0.0f, 0.0f, 0x1.ee378cp-76f, 0x1.2c282cp-22f, 0x1.4df31ep-76f, 0.0f,
     0x1.d5a474p-62f, 0.0f, 0x1.44419ap-94f, 0.0f, 0x1.e139dcp-97f, 0.0f,
     0x1.0535bcp-103f, 0.0f, 0x1.a002eap-41f, 0x1.bdadep-96f, 0.0f, 0x1.b639p-34f,
     0x1.7e68eep-116f, 0x1.062a5p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ed1ap-14f,
     0.0f, 0x1.ffd992p-15f, 0.0f, 0x1.733c08p-8f, 0.0f, 0.0f, 0.0f, 0x1.94f548p-80f,
     0.0f, 0.0f, 0x1.711bap-57f, 0.0f, 0x1.2fc47ep-110f, 0x1.1ca0e6p-2f,
     0x1.921fdap-69f, 0.0f, 0x1.e50dc2p-13f, 0.0f, 0.0f, 0.0f, 0x1.fc3674p-2f,
     0x1.2188ap-95f, 0x1.5701fap-106f, 0.0f, 0x1.b76ffep-125f, 0.0f, 0x1.91a4ecp-103f,
     0x1.969c9ep-16f, 0x1.ff9dd6p-51f, 0x1.85b5e6p-115f, 0x1.037062p-111f,
     0x1.4d366p-5f, 0.0f, 0x1.e012dp-59f, 0x1.3854a2p-29f, 0x1.cfdf16p-34f, 0.0f,
     0x1.c3a97ap-111f, 0.0f, 0x1.dfa706p-78f, 0x1.8d56d8p-44f, 0x1.91b348p-63f, 0.0f,
     0.0f, 0x1.eb3c68p-31f, 0x1.d21218p-58f, 0.0f, 0x1.6b75e6p-105f, 0.0f,
     0x1.88fa8ep-42f, 0x1.cb21dep-13f, 0.0f, 0.0f, 0.0f, 0x1.06346ap-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0740cp-85f,
     0x1.f604fp-74f, 0x1.394558p-33f, 0x1.1e20bcp-85f, 0.0f, 0.0f, 0x1.005286p-84f,
     0x1.48e938p-115f, 0x1.5d296p-7f, 0x1.6b1eep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.be29b4p-75f, 0.0f, 0.0f, 0x1.00144cp-8f, 0.0f, 0.0f, 0x1.d8bb2p-121f, 0.0f,
     0x1.726248p-65f, 0.0f, 0.0f, 0.0f, 0x1.7277p-110f, 0x1.88277ep-46f, 0.0f,
     0x1.18e1bcp-39f, 0x1.2c2a5cp-23f, 0x1.8eba1cp-123f, 0x1.58e996p-119f, 0.0f,
     0x1.1b3e1cp-31f, 0.0f, 0x1.740bbcp-37f, 0x1.511da6p-12f, 0.0f, 0x1.c20d6p-100f,
     0.0f, 0x1.123abep-108f, 0.0f, 0x1.59650ap-48f, 0.0f, 0x1.61a932p-72f,
     0x1.1b0faap-75f, 0x1.48573cp-95f, 0.0f, 0.0f, 0.0f, 0x1.f7d3acp-63f,
     0x1.d8371p-67f, 0x1.20b158p-37f, 0x1.cd744ap-77f, 0x1.eefc96p-120f,
     0x1.5aa0aep-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f84d24p-46f, 0.0f, 0x1.44d488p-29f,
     0x1.6566b8p-102f, 0x1.2cc396p-119f, 0x1.7b8b62p-1f, 0x1.af6ce8p-30f,
     0x1.9f268ep-34f, 0x1.18646ap-80f, 0x1.9d50d4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f0560cp-90f, 0x1.dbe44ap-68f, 0.0f, 0.0f, 0x1.02bc1ep-8f,
     0x1.f896fep-106f, 0.0f, 0.0f, 0x1.0d25aep-51f, 0.0f, 0x1.26f9b4p-101f,
     0x1.5caac2p-121f, 0.0f, 0x1.6a17cp-15f, 0x1.ca1f04p-12f, 0x1.ee52d6p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c207f6p-121f, 0x1.eda3f4p-20f, 0.0f, 0.0f, 0x1.07c4f8p-82f,
     0.0f, 0x1.26c39ap-89f, 0x1.1ccbep-118f, 0x1.8653c4p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.99997ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05e504p-32f, 0.0f,
     0x1.1ac4a6p-25f, 0.0f, 0.0f, 0x1.c9378ap-45f, 0.0f, 0.0f, 0.0f, 0x1.d8f406p-87f,
     0x1.a8392ep-31f, 0.0f, 0.0f, 0x1.92eaecp-42f, 0x1.fc4576p-112f, 0x1.1a98f4p-6f,
     0.0f, 0x1.d90f96p-33f, 0x1.673956p-103f, 0x1.a73ad2p-15f, 0.0f, 0x1.750e0ep-114f,
     0x1.2ae468p-78f, 0.0f, 0x1.1aefep-115f, 0x1.10775cp-82f, 0.0f, 0x1.a08b6ep-16f,
     0x1.344172p-100f, 0x1.0ed7c6p-90f, 0x1.63892p-92f, 0.0f, 0x1.e0371p-106f,
     0x1.52766cp-118f, 0x1.84a2c6p-55f, 0.0f, 0x1.ea9a06p-83f, 0x1.9d5afap-57f, 0.0f,
     0x1.e2dd2cp-62f, 0.0f, 0.0f, 0x1.28e2f6p-18f, 0x1.e212b6p-27f, 0.0f,
     0x1.15a9f6p-33f, 0.0f, 0.0f, 0.0f, 0x1.c81914p-110f, 0.0f, 0x1.4a373p-94f,
     0x1.95d41p-90f, 0x1.2b468cp-37f, 0.0f, 0.0f, 0.0f, 0x1.883676p-25f, 0.0f,
     0x1.7ec488p-20f, 0.0f, 0x1.86dc86p-91f, 0x1.6e08eep-48f, 0.0f, 0.0f, 0.0f,
     0x1.383d46p-7f, 0x1.e5881ap-63f, 0.0f, 0x1.d021a4p-7f, 0.0f, 0.0f,
     0x1.747a04p-38f, 0x1.a23968p-106f, 0.0f, 0x1.ee3998p-2f, 0.0f, 0.0f, 0.0f,
     0x1.f1f43ep-105f, 0.0f, 0x1.5f1ae6p-42f, 0x1.8aa5a6p-90f, 0x1p0f, 0.0f, 0.0f,
     0x1.990bdp-62f, 0x1.6b1242p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.8ce59p-101f, 0.0f, 0x1.b021fap-43f, 0x1.446aeep-96f, 0.0f, 0.0f, 0.0f
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
            tmp1 = log1pf(tmp0);
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
    printf("log1pf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log1pf bench acc %a\n", global_bench_acc);
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
