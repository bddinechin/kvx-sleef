/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_cbrtf.c --function cbrtf --headers math.h,ml_support_lib.h \
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
     0.0f, 0x1.fde8ccp-115f, 0.0f, 0x1.cee92p-85f, 0x1.b5a06ep-38f, 0.0f, 0.0f,
     0x1.076b72p-69f, 0.0f, 0x1.566e28p-116f, 0x1.7184bap-54f, 0.0f, 0x1.6f9418p-103f,
     0x1.bb33a2p-126f, 0x1.720672p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.605c2ep-33f, 0.0f,
     0.0f, 0x1.04c5e8p-96f, 0x1.a78afcp-98f, 0x1.41a2cp-37f, 0x1.89c28ep-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.838c3cp-100f, 0.0f, 0x1.785a0ap-57f, 0x1.25c9c6p-91f,
     0x1.0159d6p-81f, 0x1.8d9e06p-93f, 0.0f, 0x1.04782cp-109f, 0.0f, 0.0f,
     0x1.42136p-7f, 0x1.35d934p-120f, 0.0f, 0x1.5df13ep-5f, 0.0f, 0x1.cf2de4p-2f,
     0x1.2f80acp-57f, 0.0f, 0.0f, 0x1.4aa136p-41f, 0x1.bb5d0ap-52f, 0.0f, 0.0f, 0.0f,
     0x1.fb6c74p-116f, 0x1.5abc66p-62f, 0x1.43caep-100f, 0.0f, 0x1.cfbf1ep-88f, 0.0f,
     0x1.7b894p-106f, 0x1.6ee908p-50f, 0.0f, 0.0f, 0x1.ea2508p-54f, 0x1.9ad71ep-45f,
     0x1.402342p-68f, 0x1.c7c47ap-103f, 0x1.f64f16p-95f, 0.0f, 0.0f, 0x1.8411ep-57f,
     0x1.d3d952p-70f, 0.0f, 0.0f, 0x1.44d2c6p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebe3eap-84f, 0.0f, 0x1.d3c59ep-58f, 0.0f, 0x1.602034p-45f, 0x1.6bc188p-85f,
     0.0f, 0x1.1cc162p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90eebcp-101f, 0.0f,
     0.0f, 0x1.a7d942p-125f, 0.0f, 0x1.d0623ap-26f, 0x1.72144ep-50f, 0x1.f27312p-82f,
     0x1.300fd2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c54c94p-90f, 0x1.2a2932p-81f,
     0.0f, 0.0f, 0x1.bde43ep-90f, 0.0f, 0x1.8f025cp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ee8a54p-24f, 0.0f, 0.0f, 0.0f, 0x1.c94a5ep-121f, 0.0f, 0.0f,
     0x1.7cbaep-103f, 0.0f, 0.0f, 0x1.50e916p-71f, 0x1.407e9ep-87f, 0x1.b85d32p-89f,
     0x1.2562a2p-3f, 0.0f, 0.0f, 0x1.12387p-71f, 0x1.b4354ap-37f, 0.0f, 0.0f,
     0x1.ee37f4p-8f, 0x1.3f10b8p-99f, 0x1.58e5dp-122f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0x1.71d49p-57f, 0x1.473e8p-52f, 0.0f, 0x1.fce6ccp-63f, 0x1.7c8048p-59f,
     0x1.e883ap-118f, 0x1.3e3b32p-5f, 0.0f, 0.0f, 0.0f, 0x1.0eceeep-32f,
     0x1.b7075ap-18f, 0.0f, 0x1.d701eap-121f, 0x1.88f486p-51f, 0.0f, 0.0f,
     0x1.49548p-109f, 0x1.ae37dep-88f, 0.0f, 0.0f, 0x1.f50508p-108f, 0.0f,
     0x1.6ce2e2p-54f, 0.0f, 0x1.d322bep-13f, 0.0f, 0.0f, 0x1.00cd68p-84f,
     0x1.1b4026p-16f, 0x1.765e0cp-78f, 0.0f, 0x1.4c64acp-104f, 0x1.232ac2p-62f,
     0x1.79ec9ap-114f, 0x1.b90ac6p-80f, 0x1.aa56b4p-95f, 0x1.a708b6p-126f,
     0x1.d7d356p-26f, 0x1.d2329ep-95f, 0x1.a9b026p-66f, 0.0f, 0.0f, 0.0f,
     0x1.0665f4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c33dp-122f, 0x1.23531p-73f,
     0x1.d3d03cp-89f, 0x1.1ec492p-76f, 0.0f, 0x1.3f9126p-106f, 0x1.aed89p-31f, 0.0f,
     0.0f, 0x1.78ebaep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0159e4p-23f, 0x1.543ep-117f,
     0.0f, 0.0f, 0x1.ac6a4cp-48f, 0x1.f5c14ap-62f, 0.0f, 0x1.dcf208p-37f, 0.0f,
     0x1.52a004p-59f, 0x1.20a9c6p-74f, 0x1.b74ae8p-46f, 0.0f, 0.0f, 0x1.083e0ep-95f,
     0x1.72f2bap-78f, 0.0f, 0x1.38c31ap-111f, 0x1.a794cep-74f, 0x1.ae8216p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f38f9p-72f, 0.0f, 0.0f, 0x1.b2fa6cp-102f,
     0x1.d71c78p-88f, 0x1.30e5e4p-95f, 0.0f, 0x1.d40eb8p-19f, 0x1.fb3288p-23f, 0.0f,
     0.0f, 0x1.9701bap-61f, 0.0f, 0x1.736d1cp-102f, 0.0f, 0.0f, 0.0f, 0x1.0e458ep-1f,
     0x1.7af586p-119f, 0.0f, 0x1.b0ee96p-77f, 0.0f, 0.0f, 0x1.1082a8p-55f,
     0x1.c67a0ap-112f, 0x1.fa2482p-22f, 0x1.66c158p-95f, 0x1.92d47ap-59f, 0.0f,
     0x1.4df53ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0873f4p-91f, 0x1.662386p-70f, 0.0f,
     0.0f, 0x1.bfda3ep-57f, 0x1.4eaacp-52f, 0x1.390894p-95f, 0x1.e57578p-6f, 0.0f,
     0x1.d9a88ap-65f, 0.0f, 0x1.ae142ep-39f, 0.0f, 0x1.8d6542p-13f, 0.0f,
     0x1.51efdep-39f, 0.0f, 0.0f, 0.0f, 0x1.054f58p-17f, 0.0f, 0.0f, 0x1.59d8f4p-44f,
     0.0f, 0x1.613fdcp-76f, 0x1.541636p-70f, 0x1.51f926p-122f, 0.0f, 0x1.3dceaep-107f,
     0x1.f23446p-22f, 0x1.538fp-30f, 0.0f, 0.0f, 0x1.6802e6p-59f, 0x1.800d6cp-76f,
     0.0f, 0x1.cb78c8p-56f, 0.0f, 0x1.e61c76p-13f, 0x1.3049e4p-40f, 0x1.6e27b6p-4f,
     0.0f, 0x1.d92926p-4f, 0x1.2fc382p-23f, 0x1.705af6p-83f, 0.0f, 0.0f,
     0x1.5b4d2ap-4f, 0.0f, 0.0f, 0.0f, 0x1.c62bd4p-16f, 0.0f, 0.0f, 0x1.baf648p-22f,
     0x1.d845bap-100f, 0x1.86899ap-34f, 0x1.030b62p-80f, 0x1.2e1f62p-61f,
     0x1.3c820cp-125f, 0x1.ac3abp-95f, 0.0f, 0.0f, 0x1.36c2p-123f, 0.0f,
     0x1.c216d2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30b14cp-59f, 0x1.e08de4p-116f, 0.0f, 0.0f, 0x1.5244bap-28f, 0x1.19e614p-43f,
     0x1.22fcd4p-98f, 0x1.a97d18p-33f, 0.0f, 0.0f, 0x1.8f0e0cp-83f, 0x1.951db8p-107f,
     0x1.faf93ep-21f, 0x1.081b3ap-21f, 0.0f, 0.0f, 0x1.ee5f4p-55f, 0x1.48e8fp-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ca932p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c878ep-59f,
     0.0f, 0x1.7296b4p-68f, 0.0f, 0x1.03909ep-102f, 0x1.3390ccp-11f, 0.0f,
     0x1.be261cp-15f, 0.0f, 0x1.9c294ap-47f, 0.0f, 0x1.125b3p-43f, 0.0f, 0.0f,
     0x1.41ba38p-125f, 0x1.9e4e6p-15f, 0x1.b382b4p-65f, 0.0f, 0.0f, 0x1.c79d88p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0cba74p-109f, 0x1.d51612p-45f, 0x1.b7ce08p-123f,
     0x1.a1f434p-121f, 0x1.ee360cp-24f, 0.0f, 0x1.5969bcp-26f, 0x1.5f978p-14f,
     0x1.c5f9fap-113f, 0.0f, 0x1.aa5748p-31f, 0.0f, 0x1.c2a838p-117f, 0x1.749b5p-85f,
     0.0f, 0x1.a76cdp-118f, 0.0f, 0x1.ed8bb2p-21f, 0.0f, 0x1.ee70e2p-110f,
     0x1.f1adc6p-101f, 0x1.68c0cap-90f, 0x1.0b4f54p-10f, 0x1.ec8b4ep-27f,
     0x1.4b7a66p-7f, 0.0f, 0.0f, 0.0f, 0x1.1abb1ep-15f, 0x1.8543p-33f, 0x1.9aefdp-27f,
     0x1.2320eap-109f, 0.0f, 0x1.2cb91ep-41f, 0x1.8c6f5p-59f, 0x1.b2404cp-5f,
     0x1.0f52p-97f, 0x1.afa522p-6f, 0.0f, 0x1.b1ca54p-100f, 0.0f, 0x1.3fe21cp-117f,
     0.0f, 0x1.e84a34p-43f, 0.0f, 0.0f, 0.0f, 0x1.25703ap-38f, 0x1.8efab6p-28f,
     0x1.21f70ap-10f, 0x1.ce3be4p-60f, 0x1.3bce7p-92f, 0x1.83b99p-44f, 0.0f,
     0x1.3a97fp-5f, 0.0f, 0.0f, 0.0f, 0x1.47e92ep-111f, 0.0f, 0x1.6726b2p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c377bp-125f, 0x1.91a138p-26f,
     0.0f, 0.0f, 0x1.24dcd8p-60f, 0.0f, 0.0f, 0x1.dcea7p-93f, 0.0f, 0.0f,
     0x1.8954b6p-108f, 0.0f, 0.0f, 0x1.47b1bp-30f, 0.0f, 0x1.4db018p-74f,
     0x1.a3af3cp-55f, 0.0f, 0.0f, 0x1.4021a8p-30f, 0x1.7e1a4ap-101f, 0x1.3084d2p-17f,
     0.0f, 0.0f, 0x1.1527c2p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c9d6ap-69f, 0.0f,
     0x1.e58f9cp-125f, 0.0f, 0x1.29b938p-34f, 0.0f, 0.0f, 0.0f, 0x1.8c3bbep-70f, 0.0f,
     0x1.cb18bap-105f, 0.0f, 0.0f, 0.0f, 0x1.5ac5cp-116f, 0x1.c82ac6p-15f,
     0x1.8a05eap-26f, 0.0f, 0x1.92b9eep-108f, 0x1.76278ap-81f, 0.0f, 0.0f,
     0x1.1ccc6cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ffdp-113f,
     0x1.bd5e0cp-88f, 0x1.afde22p-97f, 0x1.1f2f5p-94f, 0x1.9a55ccp-55f, 0.0f, 0.0f,
     0x1.2fd20ep-23f, 0x1.b6c65cp-101f, 0.0f, 0.0f, 0.0f, 0x1.d3638p-20f,
     0x1.41d162p-43f, 0x1.586d0cp-47f, 0x1.69aa0ap-11f, 0x1.721e8ep-85f, 0.0f, 0.0f,
     0x1.03befap-55f, 0x1.46c626p-96f, 0x1.ea2d84p-67f, 0.0f, 0x1.11344ap-78f,
     0x1.38da02p-63f, 0x1.e1ba86p-121f, 0.0f, 0.0f, 0x1.52019ep-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7b23f8p-26f, 0x1.38d3a6p-40f, 0.0f, 0x1.6b8ba2p-84f,
     0x1.8b9c7cp-94f, 0.0f, 0x1.794956p-73f, 0x1.8d039cp-69f, 0.0f, 0x1.fb7032p-86f,
     0.0f, 0.0f, 0.0f, 0x1.15d20ap-14f, 0.0f, 0.0f, 0.0f, 0x1.8c3144p-100f,
     0x1.e22e64p-101f, 0x1.f5c1f2p-86f, 0x1.737e18p-82f, 0x1.ee7822p-16f,
     0x1.a94984p-73f, 0x1.f17162p-102f, 0.0f, 0.0f, 0.0f, 0x1.2d70b6p-41f, 0.0f,
     0x1.f0c6cp-79f, 0.0f, 0x1.9461e8p-36f, 0x1.77f138p-39f, 0x1.b16604p-120f,
     0x1.d8531p-35f, 0x1.0c717ap-50f, 0.0f, 0.0f, 0x1.65c6d6p-115f, 0x1.950fd2p-108f,
     0.0f, 0x1.97e402p-20f, 0.0f, 0.0f, 0x1.9a47fp-53f, 0.0f, 0.0f, 0x1.97a0eap-77f,
     0x1.c3e12ep-31f, 0.0f, 0x1.227e2ap-16f, 0x1.ddc2b6p-17f, 0.0f, 0x1.5c8db6p-22f,
     0.0f, 0x1.095928p-51f, 0x1.63ef06p-5f, 0x1p0f, 0x1.21195p-63f, 0x1.e9ad3ap-3f,
     0.0f, 0x1.de9574p-106f, 0x1.f8275ap-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6161a6p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7582cep-125f,
     0x1.574cc2p-90f, 0.0f, 0.0f, 0x1.46a586p-22f, 0.0f, 0x1.6474a8p-44f, 0.0f, 0.0f,
     0.0f, 0x1.f70d0cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af8706p-113f,
     0x1.92e8d4p-2f, 0.0f, 0x1.23ad9ap-109f, 0.0f, 0.0f, 0x1.944c3p-1f, 0.0f,
     0x1.719e3ap-43f, 0x1.9c7454p-43f, 0x1.81e16ap-49f, 0.0f, 0.0f, 0.0f,
     0x1.70726p-18f, 0x1.866dc8p-44f, 0.0f, 0.0f, 0x1.876c14p-16f, 0x1.527abep-53f,
     0.0f, 0.0f, 0.0f, 0x1.37dd48p-44f, 0.0f, 0.0f, 0x1.6b0458p-83f, 0.0f, 0.0f,
     0x1.2de2c4p-68f, 0.0f, 0x1.3bc944p-44f, 0.0f, 0.0f, 0.0f, 0x1.38cef6p-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ba4c46p-27f, 0x1.a2b98p-68f, 0x1.b8feaap-82f,
     0x1.d4ef3cp-81f, 0x1.f07bep-70f, 0.0f, 0x1.ef2ebp-14f, 0x1.d36898p-65f,
     0x1.12d19p-102f, 0x1.5427ep-100f, 0x1.c356bp-80f, 0.0f, 0x1.67194cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.de7734p-4f, 0x1.15e432p-97f, 0.0f, 0x1.cc3708p-12f,
     0x1.95b204p-108f, 0.0f, 0x1.323934p-121f, 0x1.680bc4p-80f, 0x1.83d6e6p-19f,
     0x1.ec5cc6p-97f, 0.0f, 0.0f, 0.0f, 0x1.19ba5ep-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.811548p-89f, 0x1.4e6764p-111f, 0.0f, 0.0f, 0.0f, 0x1.dc6f94p-106f,
     0x1.345edp-92f, 0x1.9e92cp-72f, 0.0f, 0.0f, 0x1.0f002p-84f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.285fbcp-54f, 0.0f, 0x1.46ad16p-88f, 0x1.c24094p-8f,
     0x1.bfc538p-55f, 0.0f, 0x1.4230d2p-121f, 0x1.dfdea4p-43f, 0.0f, 0.0f, 0.0f,
     0x1.0f8d7p-57f, 0.0f, 0x1.b15c6p-85f, 0.0f, 0x1.7aa49cp-68f, 0.0f,
     0x1.d2a134p-92f, 0x1.a2403ap-82f, 0.0f, 0.0f, 0.0f, 0x1.c851cp-23f, 0.0f, 0.0f,
     0x1.28131cp-42f, 0x1.db625ep-50f, 0x1.044142p-92f, 0x1.6e1742p-18f, 0.0f, 0.0f,
     0x1.73b6aep-117f, 0.0f, 0.0f, 0x1.b8b5dp-3f, 0.0f, 0.0f, 0x1.ee94fap-78f, 0.0f,
     0x1.8920d8p-7f, 0x1.52538p-77f, 0x1.a07986p-11f, 0.0f, 0x1.d2c876p-16f, 0.0f,
     0x1.d781dap-75f, 0.0f, 0x1.8f6914p-50f, 0x1.5fa1dap-81f, 0.0f, 0x1.606a8cp-101f,
     0.0f, 0.0f, 0x1.a84af6p-67f, 0.0f, 0x1.82fc8p-44f, 0x1.2da0cp-111f,
     0x1.796888p-75f, 0.0f, 0.0f, 0x1.dbd0ap-51f, 0x1.d829d2p-87f, 0.0f,
     0x1.a91966p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3bce4p-21f, 0.0f, 0x1.4de66ap-124f,
     0.0f, 0.0f, 0.0f, 0x1.257226p-14f, 0x1.d5d3d6p-85f, 0x1.f26212p-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8e874p-25f, 0.0f, 0x1.c51614p-119f, 0x1.4dd73cp-75f, 0.0f,
     0.0f, 0x1.12c6bcp-97f, 0.0f, 0x1.5f1398p-123f, 0x1.044bbp-56f, 0x1.f2563cp-56f,
     0x1.732758p-88f, 0x1.100286p-24f, 0.0f, 0x1.00e2b2p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13586ep-18f, 0x1.f67634p-14f, 0x1.290f0ep-15f, 0.0f, 0x1.07cca8p-20f, 0.0f,
     0x1.2a2a1ep-35f, 0.0f, 0x1.d90004p-121f, 0.0f, 0x1.6b6324p-111f,
     0x1.27ac98p-117f, 0.0f, 0.0f, 0x1.6b887p-124f, 0x1.0e7b3p-120f, 0x1.58f9f4p-125f,
     0x1.401746p-93f, 0.0f, 0x1.0210c4p-44f, 0.0f, 0x1.e1d8d8p-45f, 0.0f, 0.0f, 0.0f,
     0x1.3ca5ep-79f, 0.0f, 0.0f, 0x1.c52b56p-123f, 0x1.fb00d8p-121f, 0x1.131e04p-72f,
     0.0f, 0x1.5ffc6p-82f, 0x1.fa548ap-20f, 0.0f, 0.0f, 0.0f, 0x1.1dc5ecp-55f,
     0x1.113a3p-76f, 0.0f, 0x1.ffe22cp-88f, 0.0f, 0x1.8bac8ep-120f, 0.0f, 0.0f,
     0x1.4a3fb4p-98f, 0.0f, 0x1.30ad74p-120f, 0x1.167804p-40f, 0x1.dd9754p-58f, 0.0f,
     0x1.42f258p-73f, 0x1.23abf2p-59f, 0x1.3a159ep-15f, 0x1.319516p-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.85612ap-82f, 0x1.0574f8p-67f, 0x1.d07566p-11f,
     0x1.cce928p-80f, 0.0f, 0x1.f3ad3p-17f, 0x1.e315bp-33f, 0.0f, 0x1.02532ap-83f,
     0x1.9c10fep-10f, 0x1.0b9286p-99f, 0.0f, 0.0f, 0x1.f9a598p-9f, 0x1.718248p-14f,
     0x1.00c3d2p-72f, 0x1.e7f8fp-49f, 0.0f, 0.0f, 0x1.38937ap-102f, 0x1.0b88bp-56f,
     0x1.1bf81ap-18f, 0x1.e55b4ep-83f, 0.0f, 0x1.8df6f4p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db1dc4p-106f, 0x1.c225acp-55f, 0x1.48226ep-96f,
     0x1.4e179cp-72f, 0.0f, 0.0f, 0.0f, 0x1.48662cp-94f, 0.0f, 0x1.43088ep-1f, 0.0f,
     0x1.f504a8p-33f, 0.0f, 0x1.ed6062p-47f, 0x1.d54becp-31f, 0x1.e603acp-34f, 0.0f,
     0x1.21602ep-34f, 0.0f, 0.0f, 0.0f, 0x1.711daep-5f, 0x1.7dec1cp-43f,
     0x1.fe99dap-47f, 0.0f, 0.0f, 0.0f, 0x1.8d788p-112f, 0x1.3b3bb2p-34f, 0.0f, 0.0f,
     0x1.5d9cd4p-87f, 0x1.dcc596p-45f, 0x1.c238d4p-42f, 0x1.e5498p-58f, 0.0f, 0.0f,
     0.0f, 0x1.fb671ep-93f, 0.0f, 0x1.9144d8p-15f, 0x1.a89eeep-88f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8d323ep-79f, 0x1.e63116p-77f, 0.0f, 0.0f, 0x1.c6a1a4p-88f,
     0x1.e7ac46p-21f, 0x1.baacfap-85f, 0.0f, 0.0f, 0.0f, 0x1.1cf0fp-19f, 0.0f,
     0x1.96f5a4p-87f, 0.0f, 0.0f, 0x1.c2dacap-50f, 0.0f, 0x1.5a497cp-121f,
     0x1.397654p-81f
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
            tmp1 = cbrtf(tmp0);
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
    printf("cbrtf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("cbrtf bench acc %a\n", global_bench_acc);
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
