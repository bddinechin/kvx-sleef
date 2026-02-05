/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_asinhf.c --function asinhf --headers math.h,ml_support_lib.h \
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
     0x1.d3c5c6p-95f, 0.0f, 0x1.950f02p-48f, 0x1.67518p-100f, 0x1.f9266cp-116f, 0.0f,
     0.0f, 0x1.df36aep-5f, 0.0f, 0.0f, 0x1.8bac22p-66f, 0x1.6c63a2p-112f,
     0x1.39fc12p-70f, 0x1.02e0f6p-49f, 0x1.205602p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4d0cep-45f, 0.0f, 0x1.9dec12p-114f, 0x1.aa19a8p-49f, 0x1.a3c5b6p-108f,
     0x1.d16742p-83f, 0x1.806e06p-61f, 0x1.97e97p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2b4652p-112f, 0.0f, 0.0f, 0.0f, 0x1.cd3beep-102f, 0.0f, 0.0f, 0.0f,
     0x1.4b6664p-107f, 0x1.d9c7e2p-111f, 0x1.eaf76ap-1f, 0.0f, 0x1.f3c1fp-69f, 0.0f,
     0.0f, 0.0f, 0x1.2eaa86p-68f, 0x1.d698cap-66f, 0.0f, 0.0f, 0.0f, 0x1.789a8ap-72f,
     0.0f, 0x1.445402p-81f, 0x1.43c9ap-99f, 0.0f, 0x1.c8c7a4p-108f, 0x1.708e8ep-30f,
     0x1.2886c4p-17f, 0.0f, 0.0f, 0x1.67f4b8p-62f, 0.0f, 0x1.d15206p-39f, 0.0f,
     0x1.4ed65p-66f, 0x1.0773ecp-75f, 0.0f, 0x1.3531e2p-78f, 0x1.10ec3cp-120f, 0.0f,
     0.0f, 0x1.66e43ep-98f, 0.0f, 0x1.f83ba6p-115f, 0.0f, 0x1p0f, 0.0f,
     0x1.58925p-103f, 0.0f, 0.0f, 0.0f, 0x1.5126acp-22f, 0.0f, 0.0f, 0.0f,
     0x1.c0392ep-100f, 0x1.2c0636p-72f, 0x1.53f73cp-98f, 0.0f, 0x1.d3b48ep-89f, 0.0f,
     0.0f, 0x1.fbe0fcp-26f, 0.0f, 0x1.0131p-108f, 0x1.20724ep-33f, 0.0f, 0.0f,
     0x1.9207cap-93f, 0x1.9ed10cp-123f, 0.0f, 0x1.9a7d88p-107f, 0.0f, 0.0f, 0.0f,
     0x1.4f515ap-28f, 0x1.378a5ap-79f, 0x1.578e4ep-104f, 0x1.1d31d2p-39f, 0.0f, 0.0f,
     0x1.f78b6p-6f, 0.0f, 0x1.6df1d2p-92f, 0.0f, 0x1.98e00ep-120f, 0x1.e4a226p-87f,
     0x1.8e0404p-23f, 0.0f, 0.0f, 0.0f, 0x1.537de2p-25f, 0x1.e2a664p-9f, 0.0f,
     0x1.44ec0cp-85f, 0x1.e461f6p-77f, 0.0f, 0x1.61a132p-52f, 0x1.5db11ap-126f,
     0x1.d93e48p-84f, 0x1.03d07p-78f, 0.0f, 0.0f, 0x1.4d9b9ap-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef7456p-59f, 0x1.e963bap-37f, 0x1.4a4bcap-73f, 0x1.5cc3p-93f,
     0x1.15b446p-94f, 0x1.a16bf6p-118f, 0x1.1445ecp-83f, 0.0f, 0x1.3a7992p-58f,
     0x1.b2d6f6p-36f, 0x1.edcd6ap-26f, 0.0f, 0x1.593efep-5f, 0.0f, 0x1.425bcap-93f,
     0.0f, 0.0f, 0.0f, 0x1.142f2p-98f, 0.0f, 0x1.bea928p-81f, 0.0f, 0x1.38793cp-64f,
     0.0f, 0x1.ece3bcp-34f, 0x1.9e4294p-79f, 0x1.fa76c6p-72f, 0.0f, 0x1.41d68cp-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56357cp-31f, 0.0f, 0x1.b678dep-60f, 0.0f,
     0x1.d243b4p-51f, 0.0f, 0.0f, 0x1.c1dc64p-83f, 0.0f, 0.0f, 0x1.f8f05ep-76f, 0.0f,
     0x1.c981cep-3f, 0.0f, 0x1.81ba8cp-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96a34ap-11f, 0.0f, 0.0f, 0x1.4ded1ap-52f, 0x1.94731ep-7f, 0.0f, 0.0f,
     0x1.4ac1b8p-20f, 0x1.9823e6p-71f, 0x1.d23abep-15f, 0.0f, 0.0f, 0x1.1e517cp-94f,
     0x1.0d78a4p-107f, 0x1.3d95eep-17f, 0x1.3c3e38p-61f, 0.0f, 0x1.82e634p-34f, 0.0f,
     0.0f, 0x1.fb9d34p-40f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.b82852p-56f, 0.0f,
     0x1.25de12p-97f, 0x1.e8d04ap-77f, 0.0f, 0.0f, 0x1.cd794p-58f, 0.0f,
     0x1.4cbcb8p-116f, 0.0f, 0x1.89969ap-18f, 0.0f, 0.0f, 0x1.a169fp-126f, 0.0f,
     0x1.6a29bap-105f, 0.0f, 0x1.9e2a1cp-21f, 0x1.b1ac7ep-114f, 0x1.dd9e7ep-64f, 0.0f,
     0.0f, 0x1.284aep-61f, 0x1.ed4d9ap-126f, 0x1.c1f4c4p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.136b9ap-61f, 0x1.4895e8p-80f, 0.0f, 0x1.88273ap-19f, 0x1.3d00ap-70f,
     0x1.17058cp-6f, 0x1.f7abbp-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaae24p-70f, 0.0f,
     0x1.6bddacp-113f, 0.0f, 0x1.ff1fap-8f, 0x1.45e138p-100f, 0.0f, 0x1.79ae3ep-107f,
     0.0f, 0x1.e2d74ep-105f, 0.0f, 0.0f, 0x1.6c512cp-72f, 0x1.dfc004p-3f, 0.0f, 0.0f,
     0.0f, 0x1.bd28a6p-11f, 0.0f, 0x1.9c4a2cp-126f, 0x1.d9930cp-84f, 0.0f,
     0x1.0c667ap-65f, 0.0f, 0x1.bf59p-11f, 0.0f, 0x1.4de004p-119f, 0.0f, 0.0f,
     0x1.287ce2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2a19ep-21f, 0.0f, 0.0f, 0.0f,
     0x1.692dap-49f, 0x1.cb0766p-91f, 0x1.fb286ep-25f, 0x1.8c5b8cp-43f, 0.0f, 0.0f,
     0x1.ff4a06p-53f, 0x1.05fb28p-56f, 0.0f, 0.0f, 0.0f, 0x1.44128cp-17f, 0.0f, 0.0f,
     0.0f, 0x1.1d7a8ap-79f, 0.0f, 0x1.8f428cp-26f, 0x1.c8458ep-25f, 0x1p0f, 0.0f,
     0x1.757b18p-125f, 0x1.130dcp-94f, 0.0f, 0x1.c33fd4p-117f, 0.0f, 0x1.d7b28p-36f,
     0x1.ed4adap-61f, 0.0f, 0.0f, 0.0f, 0x1.b6bbp-2f, 0.0f, 0.0f, 0x1.1ad2fap-46f,
     0.0f, 0x1.19b1c4p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10eb0cp-90f, 0.0f,
     0x1.1827eep-104f, 0x1.57a14cp-31f, 0x1.21a30cp-30f, 0x1.7ee2bep-23f,
     0x1.db1424p-74f, 0x1.4cce68p-35f, 0.0f, 0x1.0d2bd8p-25f, 0.0f, 0.0f, 0.0f,
     0x1.546ed2p-81f, 0.0f, 0x1.4da7d6p-104f, 0x1.c3283cp-79f, 0x1.10adc2p-67f,
     0x1.0aecc8p-67f, 0x1.995e2ep-45f, 0.0f, 0x1.bfb4dep-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46a6a8p-53f, 0x1.bd09b2p-38f, 0.0f, 0.0f, 0x1.909c8ap-65f, 0x1.74c46p-126f,
     0.0f, 0x1.625d64p-31f, 0x1.306898p-120f, 0x1.d2cfa8p-74f, 0x1.4cf37cp-119f,
     0x1.41803cp-62f, 0x1.4b122cp-115f, 0x1.414bc6p-110f, 0x1.66a4e6p-57f, 0.0f, 0.0f,
     0.0f, 0x1.9cb13ap-99f, 0x1.9acc8cp-14f, 0.0f, 0x1.c4c7ecp-118f, 0.0f,
     0x1.ffbb28p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d40714p-52f, 0.0f,
     0x1.a9db46p-36f, 0x1.47fc8p-71f, 0.0f, 0x1.53d306p-123f, 0.0f, 0x1.ca593ap-39f,
     0x1.352d4ap-71f, 0.0f, 0x1.daacdep-123f, 0x1.de76b2p-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.13541ap-65f, 0.0f, 0x1.4ca24cp-38f, 0.0f, 0x1.325d86p-96f, 0.0f,
     0x1.76b288p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b82e72p-86f,
     0x1.215236p-41f, 0x1.674116p-125f, 0x1.ce9a4p-84f, 0x1.ce980cp-94f, 0.0f, 0.0f,
     0x1.0210cap-122f, 0.0f, 0x1.2a74bap-115f, 0.0f, 0.0f, 0x1.2ec7b8p-40f, 0.0f,
     0x1.dd9e26p-121f, 0x1.75dc76p-38f, 0x1.6fc56cp-100f, 0.0f, 0x1.8004dp-48f,
     0x1.b2c688p-2f, 0x1.39358cp-93f, 0x1.69d6eap-101f, 0.0f, 0x1.12881ep-16f, 0.0f,
     0x1.b87a54p-38f, 0x1.98bb8ap-102f, 0x1.48058ap-69f, 0.0f, 0.0f, 0x1.8d977ap-8f,
     0x1.690fa6p-19f, 0x1.1b20f4p-15f, 0x1.b7bc12p-38f, 0x1.012f88p-118f, 0.0f, 0.0f,
     0.0f, 0x1.70ef74p-28f, 0.0f, 0.0f, 0.0f, 0x1.bb2b2ap-40f, 0.0f, 0x1.c9b63ep-70f,
     0.0f, 0x1.591f18p-37f, 0.0f, 0.0f, 0x1.8fe144p-11f, 0x1.fe456p-35f, 0.0f,
     0x1.453deap-115f, 0.0f, 0x1.610216p-100f, 0.0f, 0.0f, 0x1.85dc72p-111f,
     0x1.dca89ep-64f, 0.0f, 0.0f, 0x1.d67dd8p-4f, 0x1.fb418ap-108f, 0.0f, 0.0f, 0.0f,
     0x1.cb4cbp-24f, 0x1.87abe8p-55f, 0x1.a2ec96p-106f, 0.0f, 0x1.fb8e02p-94f,
     0x1.0ac1eep-52f, 0x1.595b36p-82f, 0x1.1346a6p-108f, 0x1.f9215ap-68f, 0.0f,
     0x1.f5c54p-46f, 0.0f, 0x1.7f7514p-4f, 0x1.53104ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.d8cd66p-57f, 0.0f, 0x1.2c302cp-58f, 0x1p0f, 0.0f, 0x1.0c3b38p-87f, 0.0f,
     0x1.b65ab8p-57f, 0.0f, 0.0f, 0x1.6af0dep-67f, 0x1.0366ap-108f, 0x1.3044f8p-16f,
     0.0f, 0x1.b17f88p-73f, 0.0f, 0.0f, 0x1.fdcb92p-126f, 0x1.f04a3p-57f, 0.0f, 0.0f,
     0x1.7ddd66p-90f, 0.0f, 0x1.a37d24p-22f, 0x1.ec9c14p-103f, 0x1.00237cp-10f,
     0x1.a85a38p-103f, 0x1.8e0574p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f77508p-14f,
     0.0f, 0.0f, 0x1.2a72aep-9f, 0.0f, 0x1.7d7fcep-53f, 0.0f, 0x1.80f1ccp-106f, 0.0f,
     0.0f, 0x1.54ee6cp-43f, 0x1.d518e2p-98f, 0.0f, 0x1.125a18p-51f, 0x1.2a4aeep-41f,
     0x1.063604p-97f, 0.0f, 0x1.38fb32p-118f, 0.0f, 0x1.1f54fep-53f, 0x1.89bf3cp-76f,
     0x1.6c785p-63f, 0x1.910fe8p-112f, 0.0f, 0.0f, 0x1.cb95a4p-106f, 0.0f,
     0x1.4bc97cp-120f, 0.0f, 0.0f, 0x1.675p-17f, 0.0f, 0x1.b934e2p-107f, 0.0f, 0.0f,
     0x1.1eb276p-113f, 0.0f, 0x1.1c9996p-125f, 0.0f, 0x1.82af7cp-21f,
     0x1.dc3bd4p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.368c6ap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03754p-21f, 0x1.21183ap-126f, 0x1.29d372p-80f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7710ap-123f, 0x1.5e85cep-1f,
     0x1.28f69ep-38f, 0x1.b4199ep-45f, 0.0f, 0x1.814d8cp-102f, 0.0f, 0.0f, 0.0f,
     0x1.c97c78p-42f, 0x1.2981ccp-25f, 0x1.ce54f2p-60f, 0x1.b8cc96p-59f, 0.0f, 0.0f,
     0x1.69f4f2p-67f, 0x1.b6b4fp-112f, 0x1.053426p-124f, 0.0f, 0x1.2f1e32p-77f,
     0x1.0dcc16p-45f, 0.0f, 0x1.260562p-106f, 0x1.e2a9c8p-55f, 0x1.5b1c7cp-1f,
     0x1.fe79d8p-22f, 0.0f, 0.0f, 0.0f, 0x1.f1e9d8p-75f, 0x1.41a2bp-85f, 0.0f,
     0x1.e2f5c8p-11f, 0.0f, 0x1.5fd718p-112f, 0.0f, 0.0f, 0x1.91375cp-11f, 0.0f, 0.0f,
     0x1.cedfaep-92f, 0.0f, 0x1.7610c4p-110f, 0x1.3d24aep-33f, 0.0f, 0x1.8a958ap-38f,
     0x1.1ca708p-61f, 0x1.0cfea4p-121f, 0.0f, 0.0f, 0x1.63131cp-60f, 0x1.4aca02p-65f,
     0x1.c6b3d2p-54f, 0x1.e5e77cp-39f, 0.0f, 0x1.04f3fep-121f, 0x1.27ffbep-34f,
     0x1.6146dp-49f, 0x1.f61834p-86f, 0.0f, 0.0f, 0x1.4c6466p-36f, 0x1.a452ap-18f,
     0.0f, 0x1.d9695ep-25f, 0x1.f5a74p-3f, 0.0f, 0x1.d29b78p-58f, 0.0f,
     0x1.d7f6dp-116f, 0.0f, 0.0f, 0x1.6a04ap-125f, 0.0f, 0.0f, 0x1.557fbcp-31f, 0.0f,
     0x1.6670fep-59f, 0x1.1a6fcp-63f, 0x1p0f, 0x1.8ba4c2p-32f, 0x1.3fcb86p-78f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.22ca48p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47067ep-73f,
     0x1.2d78fp-25f, 0.0f, 0.0f, 0x1.f95b54p-34f, 0x1.2d599p-46f, 0x1.0020dcp-57f,
     0x1.c68b04p-16f, 0.0f, 0.0f, 0x1.16f54ep-60f, 0.0f, 0x1.121cf2p-116f,
     0x1.63e374p-44f, 0x1.2000bep-71f, 0x1.7ed696p-76f, 0x1.d047c4p-77f, 0.0f,
     0x1.09c906p-115f, 0.0f, 0.0f, 0x1p0f, 0x1.a31734p-57f, 0x1.49fd78p-32f,
     0x1.37eedp-89f, 0.0f, 0.0f, 0.0f, 0x1.5656b8p-50f, 0.0f, 0.0f, 0x1.ae824p-112f,
     0x1.5439p-22f, 0.0f, 0x1.95cb48p-68f, 0x1.707f04p-71f, 0x1.20d64ap-89f, 0.0f,
     0x1.c8fcbap-45f, 0.0f, 0x1.3bab36p-60f, 0x1.5d90eep-107f, 0.0f, 0.0f,
     0x1.54b2b4p-48f, 0.0f, 0x1.14b6e8p-102f, 0x1.1c86dep-89f, 0x1.fcb19cp-112f, 0.0f,
     0x1.31c2fcp-15f, 0x1.4dda62p-79f, 0.0f, 0.0f, 0x1.e18f98p-91f, 0x1.1777cap-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bc1c2p-75f, 0.0f, 0.0f, 0x1.6d215ep-86f,
     0.0f, 0.0f, 0x1.fd5eeap-103f, 0x1.d07fdep-17f, 0.0f, 0x1.140052p-112f, 0.0f,
     0x1.8309ap-32f, 0.0f, 0.0f, 0.0f, 0x1.1ffb62p-124f, 0x1.ef611ap-12f, 0.0f,
     0x1.c20728p-39f, 0x1.e41da6p-87f, 0x1.f67dc4p-54f, 0.0f, 0.0f, 0x1.f85a6ap-79f,
     0.0f, 0x1.157c8cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.377604p-23f, 0.0f,
     0x1.1bcbf8p-18f, 0.0f, 0.0f, 0.0f, 0x1.057d4ep-30f, 0.0f, 0x1.2344a2p-93f,
     0x1.7ae2f8p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e8f68p-112f,
     0x1.8ab51ap-38f, 0x1.f13f34p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91f2dap-30f, 0.0f, 0x1.114be4p-11f, 0.0f, 0x1.5b4522p-13f, 0.0f,
     0x1.6d4756p-67f, 0.0f, 0x1.b7891ap-85f, 0x1.746f8ap-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.75a43ep-55f, 0.0f, 0.0f, 0.0f, 0x1.4a48a4p-104f, 0.0f,
     0x1.9e7d38p-43f, 0x1.10b606p-103f, 0.0f, 0x1.e3e1aep-92f, 0x1.a94692p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.353868p-33f, 0.0f, 0x1.67139ap-89f, 0.0f, 0x1.984aa6p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8865acp-90f, 0.0f, 0.0f, 0.0f, 0x1.58939ap-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.31f978p-6f, 0x1.dcb8fp-52f, 0x1.818358p-123f,
     0x1.a4d4ccp-2f, 0.0f, 0x1.76506p-19f, 0x1.5c6474p-87f, 0x1.224726p-70f, 0.0f,
     0.0f, 0x1.02f554p-24f, 0x1.f72ad6p-124f, 0x1.4e931ap-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bec9d4p-59f, 0.0f, 0x1.838366p-87f, 0.0f, 0x1.9f2cb4p-50f, 0x1.86bcbp-62f,
     0x1.583acap-62f, 0x1.fd632ep-72f, 0.0f, 0.0f, 0.0f, 0x1.d8d0d8p-111f,
     0x1.3e0a66p-11f, 0x1.4c3d16p-51f, 0x1.9144f2p-123f, 0x1.488e6ep-7f,
     0x1.91f6bcp-101f, 0x1.301f14p-72f, 0x1.597542p-109f, 0x1.dfb612p-116f,
     0x1.533726p-55f, 0x1.446444p-1f, 0x1.203148p-94f, 0.0f, 0x1.03a71ep-110f, 0.0f,
     0x1.357588p-122f, 0x1.010658p-59f, 0x1.949756p-73f, 0x1.085b9cp-72f, 0.0f,
     0x1.d61f9ep-99f, 0.0f, 0x1.264062p-77f, 0.0f, 0x1.d0347ep-124f, 0x1.f34edp-95f,
     0x1.13e1dap-67f, 0.0f, 0x1.271002p-106f, 0.0f, 0.0f, 0x1.6063a8p-9f,
     0x1.fb51dap-1f, 0.0f, 0x1.760392p-109f, 0.0f, 0.0f, 0.0f, 0x1.1308dcp-100f,
     0x1.b0675cp-44f, 0x1.22ab2p-104f, 0x1.67e678p-9f, 0x1.d1a67p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9539bp-23f, 0x1.82b1f2p-57f, 0.0f, 0x1.2d4a5cp-104f,
     0x1.c6b07p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f51a7ep-125f, 0x1.fa50ep-119f,
     0x1.1fe054p-107f, 0.0f, 0x1.58385p-97f, 0x1.f2e99ep-86f, 0x1.6a2198p-14f, 0.0f,
     0.0f, 0x1.20f0a6p-102f, 0.0f, 0x1.bed44ep-110f, 0.0f, 0.0f, 0x1.a80112p-114f,
     0.0f, 0x1.efc468p-62f, 0x1.4cbdp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86296cp-80f, 0x1.64a98cp-55f, 0.0f, 0x1.8c4454p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f51106p-12f, 0.0f, 0x1.d12bdep-108f, 0x1.75b66ap-102f, 0.0f,
     0x1.bb10f4p-53f, 0.0f, 0.0f, 0x1.b5cedap-45f, 0x1.ea0a84p-87f, 0.0f,
     0x1.09e384p-3f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = asinhf(tmp0);
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
    printf("asinhf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("asinhf bench acc %a\n", global_bench_acc);
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
