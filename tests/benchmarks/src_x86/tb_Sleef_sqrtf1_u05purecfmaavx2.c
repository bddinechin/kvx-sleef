/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_u05purecfma.c --function \
 *     Sleef_sqrtf1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.1a2a04p-61f, 0x1.296896p-67f, 0x1.9a280ep-16f, 0x1.82e7ep-126f, 0.0f,
     0x1.10a0b4p-114f, 0x1.447d0ep-30f, 0x1.0941c6p-42f, 0x1.ea10f4p-78f,
     0x1.711e6ap-126f, 0.0f, 0.0f, 0x1.b77204p-77f, 0x1.67399ap-65f, 0.0f,
     0x1.33992ep-87f, 0x1.af2c4p-31f, 0x1.da9796p-79f, 0x1.c3bbecp-116f,
     0x1.d80162p-17f, 0x1.7678cp-81f, 0.0f, 0x1.64b16ap-6f, 0x1.23f364p-18f, 0.0f,
     0x1.0276e2p-25f, 0.0f, 0x1.9671c6p-117f, 0.0f, 0x1.45d3ecp-121f, 0.0f,
     0x1.d98f88p-85f, 0x1.7703ccp-87f, 0x1.678f4ap-70f, 0.0f, 0x1.2ee836p-80f,
     0x1.d1da3cp-69f, 0x1.515ccp-91f, 0x1.e52284p-58f, 0x1.cfee7p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.89f64ap-36f, 0x1.2982eep-99f, 0x1.8f144ep-47f, 0.0f,
     0x1.ff6496p-14f, 0x1p0f, 0.0f, 0.0f, 0x1.a1e52p-106f, 0x1.33312p-22f,
     0x1.91ef8cp-71f, 0.0f, 0x1.c72e5ap-62f, 0.0f, 0x1.1c3b74p-16f, 0x1.f6f5dp-10f,
     0x1.b9cc5ep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d8be88p-42f, 0.0f, 0.0f, 0x1.2ce5b6p-17f, 0x1.3a9096p-66f,
     0x1.500aaep-77f, 0x1.415e5ep-8f, 0x1.ca70f2p-3f, 0.0f, 0x1.409238p-110f, 0.0f,
     0x1.61730ep-61f, 0x1.c1c172p-102f, 0x1.aa0ff2p-108f, 0.0f, 0x1.18e362p-78f, 0.0f,
     0x1.12679p-63f, 0x1.99dcaap-18f, 0.0f, 0.0f, 0x1.1c3afcp-62f, 0x1.da3cecp-81f,
     0.0f, 0.0f, 0x1.614408p-117f, 0x1.d1e8b6p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22f33ep-46f, 0.0f, 0.0f, 0x1.c6568ap-69f, 0.0f, 0x1.d5c2e6p-90f, 0.0f, 0.0f,
     0.0f, 0x1.0bed26p-72f, 0.0f, 0x1.cfb1d8p-89f, 0x1.9284c4p-89f, 0x1.3703eap-90f,
     0x1.5db1bap-89f, 0.0f, 0.0f, 0x1.4f048ap-38f, 0.0f, 0x1.220a12p-90f, 0.0f,
     0x1.ea5a28p-78f, 0.0f, 0.0f, 0x1.ec37b2p-18f, 0.0f, 0.0f, 0x1.212008p-37f, 0.0f,
     0x1.318a6ap-106f, 0x1.c65ef2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79788p-41f,
     0.0f, 0.0f, 0x1.e55e22p-33f, 0.0f, 0x1.ed3008p-29f, 0.0f, 0.0f, 0x1.9fbe8ap-76f,
     0.0f, 0.0f, 0x1.3ee9c6p-23f, 0.0f, 0.0f, 0x1.db5e16p-3f, 0x1.342eaap-51f,
     0x1.f20532p-103f, 0.0f, 0.0f, 0x1.f775b6p-91f, 0.0f, 0.0f, 0x1.9a62c2p-123f,
     0.0f, 0.0f, 0x1.7fd112p-15f, 0.0f, 0x1.94f2f8p-23f, 0x1.cd354ep-23f,
     0x1.d53af6p-77f, 0.0f, 0x1.0c3884p-126f, 0x1.ab6bdap-6f, 0.0f, 0x1.e1fe2ap-38f,
     0x1.7172b2p-74f, 0.0f, 0x1.40ffdap-57f, 0x1.364358p-66f, 0x1.fccd1ep-108f, 0.0f,
     0x1.7c024cp-78f, 0.0f, 0x1.38da4cp-51f, 0x1.230be8p-90f, 0.0f, 0x1.f4403ap-86f,
     0.0f, 0x1.6347f6p-32f, 0x1.78581cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff189ap-80f,
     0x1.1eb47ap-70f, 0x1.ed6f82p-116f, 0x1.0ee27ap-76f, 0x1.715fa6p-28f,
     0x1.ad9c7cp-56f, 0x1.66deccp-14f, 0.0f, 0x1.267c7cp-85f, 0.0f, 0.0f, 0.0f,
     0x1.93c54cp-82f, 0x1.a4b938p-25f, 0x1.4c691ep-34f, 0.0f, 0x1.f3503ap-89f, 0.0f,
     0.0f, 0x1.058a0cp-101f, 0x1.e30bb4p-50f, 0.0f, 0x1.de9ecap-10f, 0x1.872cep-100f,
     0.0f, 0.0f, 0x1.4a0e6ep-2f, 0.0f, 0x1.fbea8ep-64f, 0x1.24a504p-124f, 0.0f,
     0x1.301aa6p-44f, 0x1.1566d4p-105f, 0x1.da8ffp-93f, 0.0f, 0x1.22b79p-83f, 0.0f,
     0x1.12c69cp-30f, 0x1.c58bc4p-72f, 0.0f, 0x1.16c412p-94f, 0x1.84845ap-104f,
     0x1.60203ep-112f, 0.0f, 0.0f, 0x1.9c6ad8p-78f, 0x1.421ea6p-34f, 0x1p0f,
     0x1.02da5ep-53f, 0x1.b31744p-114f, 0.0f, 0.0f, 0.0f, 0x1.2458b6p-120f,
     0x1.dfa7ccp-52f, 0.0f, 0x1.9eedb4p-117f, 0x1.18f3e8p-110f, 0x1.80f45ep-45f,
     0x1.b10ae8p-28f, 0.0f, 0.0f, 0x1.52d73ap-56f, 0.0f, 0.0f, 0x1.e31c96p-72f, 0.0f,
     0.0f, 0x1.d9914cp-84f, 0x1.acc374p-25f, 0x1.df191p-94f, 0.0f, 0.0f, 0.0f,
     0x1.83067ep-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.253c8ap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.eab368p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.4b4f3p-39f,
     0.0f, 0x1.45c95ap-81f, 0.0f, 0.0f, 0.0f, 0x1.a344a6p-122f, 0x1.6f1794p-107f,
     0x1.ee0112p-46f, 0x1.a1fbfp-52f, 0x1.44246ap-62f, 0.0f, 0.0f, 0x1.e621d6p-64f,
     0.0f, 0.0f, 0x1.108202p-45f, 0x1.52feeap-101f, 0x1.530d02p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0adfap-44f, 0x1.41ebp-104f, 0x1.6e5198p-121f, 0.0f, 0x1.ea5274p-32f,
     0.0f, 0.0f, 0x1.e8131p-99f, 0.0f, 0.0f, 0x1.1b87d2p-92f, 0x1.b6265cp-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ac00e2p-121f, 0.0f, 0.0f, 0x1.70e118p-100f, 0.0f,
     0x1.b98432p-54f, 0.0f, 0.0f, 0x1.9bb6aep-92f, 0.0f, 0x1.264658p-78f, 0.0f,
     0x1.4aa6bp-10f, 0x1.b38a64p-107f, 0.0f, 0.0f, 0x1.ab385ap-5f, 0.0f,
     0x1.f7cefap-82f, 0.0f, 0x1.f054fep-110f, 0.0f, 0.0f, 0x1.69683ep-12f, 0.0f,
     0x1.0c0df8p-77f, 0.0f, 0.0f, 0x1.0034b4p-34f, 0x1.9297ecp-66f, 0x1.b4f1fp-84f,
     0x1.dfc8cep-120f, 0x1.1581a4p-6f, 0x1.0f2ecp-59f, 0x1.58cbeep-8f,
     0x1.2b08f2p-36f, 0.0f, 0x1.74ff3cp-98f, 0x1.ffca18p-46f, 0.0f, 0.0f,
     0x1.155ed2p-77f, 0.0f, 0.0f, 0x1.a2453cp-61f, 0x1.4a5178p-19f, 0.0f,
     0x1.92302ap-42f, 0x1.04c412p-60f, 0.0f, 0x1.291448p-55f, 0x1.c4acc4p-13f, 0.0f,
     0.0f, 0x1.9c99a2p-105f, 0.0f, 0x1.c6824ap-56f, 0.0f, 0.0f, 0.0f,
     0x1.ea786ep-104f, 0.0f, 0.0f, 0.0f, 0x1.45b18ap-3f, 0.0f, 0x1.65a68ep-30f,
     0x1.87c5bp-39f, 0.0f, 0.0f, 0x1.c17772p-54f, 0x1.0d5f7p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6f27ep-17f, 0.0f, 0.0f, 0x1.d76a7ep-114f, 0x1.2c9f5ap-36f, 0.0f,
     0x1.44dba6p-11f, 0x1.3167b6p-126f, 0x1.d2befap-16f, 0x1.6769cep-66f, 0.0f,
     0x1.6d9222p-94f, 0x1.e12bd2p-21f, 0.0f, 0x1.f6282ep-75f, 0.0f, 0x1.e19b34p-28f,
     0x1.668802p-124f, 0.0f, 0x1.bafcaep-126f, 0.0f, 0.0f, 0x1.938676p-83f, 0.0f,
     0x1.1390d6p-46f, 0.0f, 0.0f, 0.0f, 0x1.549294p-73f, 0x1.2e07e6p-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c1929ap-10f, 0x1.cd5d2cp-92f, 0x1.9f950cp-11f, 0x1.f9dc46p-64f,
     0x1.58ed6cp-51f, 0.0f, 0x1.0e63e2p-45f, 0.0f, 0x1.c2d04cp-74f, 0.0f, 0.0f, 0.0f,
     0x1.bd8602p-107f, 0x1.6729c2p-64f, 0.0f, 0.0f, 0x1.059c84p-41f, 0.0f,
     0x1.09dddp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38fec2p-97f, 0x1.add4aep-25f,
     0x1.0045b2p-13f, 0.0f, 0x1.d1f526p-26f, 0x1.32f78ap-92f, 0.0f, 0.0f,
     0x1.c6215cp-61f, 0.0f, 0x1.4cd89ep-121f, 0x1.519838p-23f, 0.0f, 0.0f,
     0x1.0e9366p-122f, 0.0f, 0x1.9aff72p-43f, 0.0f, 0x1.cc5dacp-58f, 0x1.552844p-69f,
     0.0f, 0x1.d8bf84p-9f, 0x1.16bbbap-18f, 0x1.e06228p-105f, 0.0f, 0.0f, 0.0f,
     0x1.177b96p-13f, 0x1.f59eep-31f, 0x1.b432dap-64f, 0.0f, 0x1.94ed18p-10f,
     0x1.baf024p-84f, 0.0f, 0x1.ac5f82p-73f, 0.0f, 0.0f, 0x1.2efdbep-91f,
     0x1.b29b42p-65f, 0x1.23acf6p-111f, 0.0f, 0x1.12ac62p-91f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.9ee2cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.384672p-70f, 0.0f, 0.0f,
     0x1.eeaf1cp-75f, 0x1.904264p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3698f6p-1f, 0x1.92ecd2p-58f, 0x1.a78358p-84f, 0x1.e9cb18p-59f, 0.0f,
     0x1.d092a8p-65f, 0.0f, 0x1.91fbf4p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.146342p-45f, 0.0f, 0x1.1da534p-105f, 0.0f, 0x1.47acbcp-93f, 0x1.5524eep-34f,
     0.0f, 0x1.7157eep-10f, 0x1.3d5bb2p-3f, 0x1.c64cb4p-51f, 0x1.be654cp-73f, 0.0f,
     0.0f, 0x1.b9b2bep-109f, 0.0f, 0x1.c0727ep-53f, 0x1.cb7234p-88f, 0.0f,
     0x1.00cea8p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.544cb4p-7f, 0.0f, 0.0f,
     0x1.e0ccbcp-24f, 0x1.7a0c5cp-36f, 0x1.256014p-91f, 0x1.be590cp-84f,
     0x1.0c3582p-39f, 0x1.0cdd8ap-114f, 0.0f, 0x1.706fa6p-110f, 0x1.cf7c54p-70f,
     0x1.7afb4ap-50f, 0.0f, 0x1.872e04p-93f, 0x1.c5e87ap-32f, 0x1.e4dcfcp-39f, 0.0f,
     0.0f, 0.0f, 0x1.c73b66p-47f, 0x1.11421p-110f, 0x1.1a86f4p-100f, 0x1.b0e412p-67f,
     0.0f, 0.0f, 0x1.6b004ap-22f, 0x1.c208f4p-64f, 0.0f, 0x1.2ee598p-55f,
     0x1.cdee06p-31f, 0x1.66827ap-102f, 0x1.0121bcp-84f, 0.0f, 0x1.1b84a4p-68f,
     0x1.4202e2p-97f, 0x1.7d86ap-98f, 0.0f, 0x1.6600f8p-30f, 0x1.cef0cep-30f,
     0x1.d02a4ep-38f, 0x1.36f822p-71f, 0x1.9a65fcp-123f, 0x1.9218fcp-110f,
     0x1.bd9acap-84f, 0x1.7af37ep-92f, 0x1.3c42ecp-31f, 0.0f, 0x1.f190e2p-102f,
     0x1.46e1fep-67f, 0x1.aa72b8p-92f, 0x1.2e593ep-20f, 0.0f, 0x1.df3bf8p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cd3214p-97f,
     0x1.b144bcp-39f, 0x1.8ca8a2p-73f, 0.0f, 0.0f, 0.0f, 0x1.f0a398p-21f,
     0x1.4acb58p-33f, 0.0f, 0.0f, 0x1.4f0e04p-23f, 0x1.6b666cp-75f, 0x1.4bb044p-83f,
     0x1.af8926p-46f, 0.0f, 0.0f, 0.0f, 0x1.f5097p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3927ap-25f, 0x1.2f9ec4p-108f, 0x1.098b96p-59f, 0.0f, 0.0f, 0x1.595c9p-20f,
     0.0f, 0x1.f201aep-2f, 0x1.0df326p-59f, 0x1.86e6c4p-20f, 0x1.8929fep-64f,
     0x1.2a04e2p-121f, 0.0f, 0.0f, 0.0f, 0x1.03c08p-62f, 0x1.88cb32p-4f, 0.0f,
     0x1.617f7cp-1f, 0.0f, 0.0f, 0x1.86ba78p-91f, 0x1.e1d17p-66f, 0x1.53acbap-106f,
     0.0f, 0x1.62ee66p-103f, 0x1.1e37b6p-102f, 0.0f, 0.0f, 0.0f, 0x1.82df2p-94f, 0.0f,
     0.0f, 0x1.f51dc2p-71f, 0x1.4132ccp-53f, 0.0f, 0.0f, 0x1.94a42cp-71f, 0.0f, 0.0f,
     0x1.a3f0c4p-32f, 0.0f, 0.0f, 0x1.71ad2ap-86f, 0x1.1b34e6p-64f, 0.0f, 0.0f,
     0x1.f510c8p-43f, 0.0f, 0.0f, 0x1.41f536p-87f, 0x1.e9c878p-59f, 0.0f,
     0x1.d97b16p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5afd4ap-8f, 0.0f, 0.0f,
     0x1.94d1a6p-73f, 0.0f, 0.0f, 0.0f, 0x1.b16698p-97f, 0x1.afae7cp-107f,
     0x1.e312e6p-52f, 0x1.bad3dp-45f, 0x1p0f, 0.0f, 0.0f, 0x1.1c4ad8p-98f, 0.0f,
     0x1.20b56ap-112f, 0x1.c9e55p-105f, 0x1.55db1ap-7f, 0.0f, 0.0f, 0.0f,
     0x1.6a029ep-107f, 0.0f, 0x1.096f0ep-25f, 0x1.e9277p-70f, 0.0f, 0.0f,
     0x1.bd9a8ep-90f, 0.0f, 0x1.dd567p-29f, 0x1.e33482p-56f, 0.0f, 0.0f, 0.0f,
     0x1.343fa2p-25f, 0x1.5b0a2ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d976cp-107f,
     0x1.bff6ep-120f, 0x1.25e9fcp-60f, 0.0f, 0x1.0a7ec6p-111f, 0x1.ffe60cp-63f,
     0x1.275024p-84f, 0.0f, 0.0f, 0.0f, 0x1.c0d0b4p-23f, 0x1.e86494p-64f,
     0x1.df55f6p-53f, 0x1.c84868p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a42e4p-16f,
     0x1.8043cp-72f, 0.0f, 0.0f, 0x1.ff8ed6p-16f, 0x1.8029a6p-9f, 0.0f, 0.0f,
     0x1.48c5f2p-43f, 0x1.dcb5aap-80f, 0x1.c4f71ap-30f, 0x1.17d8cap-66f, 0.0f, 0.0f,
     0.0f, 0x1.05f636p-119f, 0x1.fdcdcap-53f, 0x1.c95ddap-73f, 0.0f, 0x1.acb788p-8f,
     0.0f, 0.0f, 0.0f, 0x1.6005p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b63ab4p-54f, 0.0f,
     0x1.7e6e6cp-40f, 0x1.75551cp-90f, 0x1.b48238p-126f, 0x1.fe83b4p-36f, 0.0f, 0.0f,
     0x1.1b90fp-100f, 0.0f, 0.0f, 0.0f, 0x1.a11ca4p-32f, 0x1.8c56c2p-74f, 0.0f,
     0x1.ca1c6ap-79f, 0.0f, 0x1.e9ce8cp-82f, 0.0f, 0x1.5709ccp-112f, 0x1.5de268p-124f,
     0x1.61395p-62f, 0.0f, 0.0f, 0.0f, 0x1.79f14ap-27f, 0x1.42206ap-68f, 0.0f,
     0x1.ba90ep-81f, 0x1.a0cdf4p-78f, 0x1.88896p-101f, 0.0f, 0x1.99099ep-77f,
     0x1.3eb4ccp-104f, 0.0f, 0.0f, 0.0f, 0x1.f8e30cp-124f, 0x1.c743cap-43f, 0.0f,
     0.0f, 0x1.2b9df2p-89f, 0x1.1d2e2ap-27f, 0.0f, 0.0f, 0x1.b882c6p-10f,
     0x1.bacb44p-61f, 0.0f, 0.0f, 0.0f, 0x1.519ac4p-66f, 0x1.9f507ap-116f,
     0x1.e5f656p-31f, 0x1.3dd94ep-111f, 0x1.16d348p-27f, 0x1.f049eep-126f,
     0x1.44aa72p-32f, 0.0f, 0x1.401f5p-5f, 0x1.862972p-67f, 0x1.b47b66p-41f, 0.0f,
     0x1.85183ep-55f, 0.0f, 0x1.13e342p-10f, 0x1.ecc25cp-19f, 0x1.c09664p-103f, 0.0f,
     0x1.fb572ap-46f, 0.0f, 0.0f, 0x1.f45136p-49f, 0x1.1b9afep-14f, 0x1.d73e74p-120f,
     0x1.fc7cc2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3cd84p-96f, 0.0f, 0x1.e0b97p-108f,
     0.0f, 0x1.03341cp-58f, 0.0f, 0.0f, 0.0f, 0x1.97dfeap-11f, 0x1.9b9edcp-6f, 0.0f,
     0x1.6fca7p-23f, 0x1.ff2cb6p-117f, 0x1.0f880ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c2b4cp-40f, 0.0f, 0x1.5bf03cp-56f, 0.0f, 0x1.16ca06p-77f, 0x1.aa9d5ep-74f,
     0x1.7e3954p-108f, 0x1.b99c94p-47f, 0.0f, 0.0f, 0x1.0990aep-125f, 0x1.81361ep-83f,
     0x1.b259e6p-63f, 0.0f, 0.0f, 0x1.b17f12p-64f, 0.0f, 0.0f, 0x1.7e76dcp-123f, 0.0f,
     0.0f, 0.0f, 0x1.e2e67ep-89f, 0.0f, 0.0f, 0.0f, 0x1.1f7144p-5f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e78454p-94f, 0x1.a62d48p-94f, 0x1.556374p-16f, 0.0f, 0.0f, 0.0f,
     0x1.14e6bp-68f, 0x1.5f768cp-114f, 0x1.3a4726p-12f, 0x1.917c7ap-11f,
     0x1.4d4988p-47f, 0x1.8fc6d4p-68f, 0x1.d5a52ap-113f, 0.0f, 0x1.a2fd4ep-106f,
     0x1.4284aep-84f, 0.0f, 0x1.fa7fb2p-36f, 0x1.b30042p-42f, 0.0f, 0x1.ad006cp-63f,
     0x1.50397ep-106f, 0x1.32c528p-34f, 0.0f, 0x1.d1cc02p-86f, 0.0f, 0x1.6b9626p-14f,
     0x1.ba313ep-40f, 0x1.40199p-27f, 0.0f, 0x1.29f75p-9f, 0.0f, 0x1.62e2f8p-92f,
     0x1.c8c11p-69f, 0x1.893a96p-60f, 0x1.837812p-63f, 0.0f, 0.0f, 0x1.69603ep-27f,
     0x1.f1e69ap-66f, 0.0f, 0.0f, 0x1.4a726ep-114f, 0.0f, 0x1.92186ap-15f, 0.0f,
     0x1.5ddcaap-106f, 0.0f, 0x1.840fa4p-57f, 0.0f, 0.0f, 0x1.2dbfbp-77f,
     0x1.e0515ep-54f, 0x1.50be1cp-28f, 0.0f, 0x1.8a3c52p-43f, 0.0f, 0x1.d9791cp-77f,
     0x1.a10dbep-4f, 0x1p0f, 0x1.712ac2p-102f, 0x1.b7830ep-27f, 0.0f, 0.0f, 0.0f,
     0x1.ca26e6p-1f, 0x1.030382p-79f, 0x1.c422f4p-95f, 0x1.180034p-18f, 0.0f,
     0x1.7891e8p-79f, 0x1.2170fcp-116f, 0.0f, 0x1.f1a5b8p-119f
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
            tmp1 = Sleef_sqrtf1_u05purecfma(tmp0);
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
    printf("Sleef_sqrtf1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_u05purecfma bench acc %a\n", global_bench_acc);
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
