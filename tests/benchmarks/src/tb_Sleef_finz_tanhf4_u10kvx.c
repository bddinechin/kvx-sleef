/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhf4_u10kvx.c --function \
 *     Sleef_finz_tanhf4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.8e543ap-42f, 0x1.9806bap-41f, 0x1.1b8192p-14f, 0x1.292fe6p-95f,
     0x1.e6bce4p-89f, 0x1.497b2ep-49f, 0x1.5745e4p-77f, 0x1.cfed3cp-61f, 0.0f,
     0x1.cf19aap-64f, 0x1.a707a2p-39f, 0x1.748504p-41f, 0x1.0fd0dep-97f,
     0x1.afb4b6p-87f, 0x1.c1b116p-23f, 0x1.33696cp-23f, 0x1.5c6182p-46f,
     0x1.928e8ap-100f, 0x1.f5332cp-40f, 0x1.8fa846p-84f, 0x1.08d7c8p-6f, 0.0f,
     0x1.2055dcp-97f, 0.0f, 0x1.205c64p-78f, 0.0f, 0x1.4926aep-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.da4d52p-70f, 0x1.b60e2p-20f, 0.0f, 0x1.45384cp-25f, 0.0f,
     0x1.89b994p-120f, 0x1.2bf252p-87f, 0x1.94974p-5f, 0x1.b49074p-29f, 0.0f, 0.0f,
     0x1.314fd4p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc8c8ep-33f,
     0x1.03301ap-74f, 0x1.7a59a8p-115f, 0.0f, 0.0f, 0x1.7f8b34p-36f, 0x1.63d81p-21f,
     0.0f, 0x1.32822ap-90f, 0.0f, 0x1.ff071p-96f, 0x1.2c498ap-53f, 0.0f,
     0x1.3e0a66p-11f, 0.0f, 0x1.5b53fep-116f, 0.0f, 0.0f, 0.0f, 0x1.cc24dcp-65f, 0.0f,
     0x1.0b2996p-12f, 0x1.1a772cp-98f, 0x1.0d2472p-43f, 0.0f, 0x1.5084eep-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3978bep-111f, 0.0f, 0.0f, 0.0f, 0x1.51c75ap-95f,
     0x1.0aaa22p-66f, 0.0f, 0x1.f9e32cp-51f, 0x1.6880a4p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a53c24p-73f, 0x1.b81c16p-75f, 0x1.dd7bfap-118f, 0.0f, 0.0f, 0x1.5bf9b4p-49f,
     0.0f, 0.0f, 0.0f, 0x1.9d314ap-81f, 0.0f, 0.0f, 0x1.cc63fap-105f, 0x1.e2a914p-60f,
     0.0f, 0x1.601472p-8f, 0.0f, 0x1.56c314p-43f, 0x1.38cabap-19f, 0.0f,
     0x1.51e11ep-1f, 0.0f, 0x1.65150ap-29f, 0x1.704dd2p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f0e6eep-112f, 0.0f, 0x1.6fa5eep-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.660066p-20f,
     0.0f, 0x1.428282p-104f, 0.0f, 0.0f, 0x1.e671acp-53f, 0x1.9c8aap-80f, 0.0f,
     0x1.40eda2p-36f, 0x1.da61d4p-2f, 0x1.dee3fep-68f, 0x1.514974p-1f, 0.0f,
     0x1.c7f57cp-121f, 0x1.13531cp-13f, 0.0f, 0x1.517d3ap-50f, 0x1.5fb7dep-36f,
     0x1.b72916p-17f, 0x1.3e5ae6p-88f, 0.0f, 0.0f, 0x1.1526bep-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a46e8cp-50f, 0x1.73efe8p-113f, 0x1.36a39cp-111f, 0x1.73c9aap-77f,
     0x1.d3e43p-6f, 0.0f, 0x1.5a5f1cp-84f, 0.0f, 0x1.048b66p-84f, 0.0f,
     0x1.a8ffaep-34f, 0.0f, 0.0f, 0x1.f54a78p-113f, 0.0f, 0x1.360e98p-87f, 0.0f,
     0x1.e8072cp-16f, 0x1.678ff4p-60f, 0x1.d909e2p-35f, 0x1.00d4eap-22f, 0.0f, 0.0f,
     0.0f, 0x1.afc262p-124f, 0.0f, 0.0f, 0.0f, 0x1.371034p-114f, 0.0f, 0.0f,
     0x1.33b768p-21f, 0.0f, 0x1.2ea6ap-56f, 0.0f, 0x1.c15e76p-110f, 0.0f,
     0x1.dc1194p-22f, 0x1.fe7f7p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa3fe8p-102f, 0x1.6477a2p-1f, 0.0f, 0.0f, 0x1.c29902p-117f, 0x1.b30a1cp-58f,
     0.0f, 0x1.dc713ap-12f, 0.0f, 0x1.3e833cp-71f, 0x1.58a0fp-20f, 0x1.b5744p-26f,
     0.0f, 0.0f, 0x1.52df1ap-21f, 0x1.2a169cp-34f, 0x1.fe0d5cp-61f, 0.0f, 0.0f,
     0x1.e528bp-65f, 0x1.538118p-118f, 0x1.a4d23p-73f, 0x1.8db39cp-30f,
     0x1.112162p-25f, 0x1.2ed63ep-16f, 0.0f, 0.0f, 0x1.6a0332p-102f, 0.0f,
     0x1.8b0f6p-49f, 0x1.4db63ap-91f, 0x1.56fc18p-106f, 0x1.a2d5bap-54f,
     0x1.1d97a6p-82f, 0.0f, 0x1.109e4ep-77f, 0x1.8b0f04p-121f, 0.0f, 0.0f, 0.0f,
     0x1.b2658cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c64e2p-53f, 0.0f, 0.0f, 0.0f,
     0x1.321c5cp-9f, 0.0f, 0x1.650a9ap-121f, 0.0f, 0x1.54686ap-28f, 0x1.d2d7cp-87f,
     0x1.483efep-114f, 0x1.54848ep-33f, 0x1.9b9be2p-102f, 0.0f, 0x1.8e031p-58f, 0.0f,
     0x1.8af738p-44f, 0x1.2e5e56p-117f, 0.0f, 0x1.d9097ap-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a49c1ep-22f, 0x1.ba674p-83f, 0x1.01fff4p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c83cc2p-39f, 0.0f, 0x1.cf9ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.0dfcep-10f, 0.0f, 0x1.75dff4p-12f, 0.0f, 0.0f, 0.0f, 0x1.0e4d26p-107f, 0.0f,
     0x1.d9ce1ap-114f, 0x1.084cdep-36f, 0x1.0c261ap-125f, 0x1.9c69d8p-82f, 0.0f,
     0x1.9e7d76p-101f, 0x1.988a94p-7f, 0x1.eeadd2p-10f, 0x1.5be8e2p-72f,
     0x1.499c28p-124f, 0.0f, 0x1.114472p-48f, 0x1.3187e2p-50f, 0.0f, 0x1.6e8924p-62f,
     0.0f, 0x1.5a54a6p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0aeeb4p-21f, 0.0f, 0.0f,
     0.0f, 0x1.d56ffap-93f, 0.0f, 0x1.215d52p-98f, 0.0f, 0x1.076276p-32f, 0.0f,
     0x1.c578ep-71f, 0.0f, 0.0f, 0x1.cc345ep-58f, 0x1.d221e8p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e45f48p-22f, 0.0f, 0.0f, 0x1.51244cp-7f, 0.0f, 0.0f, 0.0f,
     0x1.4a15b6p-101f, 0.0f, 0x1.89ad2p-85f, 0.0f, 0.0f, 0x1.e4963ap-123f,
     0x1.416a74p-23f, 0x1.1f5b54p-115f, 0.0f, 0.0f, 0x1.737ca8p-26f, 0x1.15829ap-57f,
     0x1.23d0f2p-80f, 0x1.b5c3aap-72f, 0x1.ba71dep-123f, 0x1.0e5e14p-9f, 0.0f,
     0x1.6a0022p-45f, 0x1.bef6d6p-88f, 0x1.4f2692p-84f, 0.0f, 0.0f, 0.0f,
     0x1.383082p-62f, 0x1.311dbep-118f, 0.0f, 0x1.74a6dp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ce5bep-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.509e52p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.662db4p-116f, 0.0f, 0x1.622e62p-105f, 0.0f, 0.0f,
     0x1.28f98cp-8f, 0.0f, 0.0f, 0x1.ba25b6p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.945e2ep-37f, 0.0f, 0.0f, 0x1.9011e8p-25f, 0.0f, 0.0f, 0x1.4792dap-66f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.25534p-18f, 0x1.5f9994p-37f, 0.0f, 0x1.1deed6p-23f, 0.0f,
     0x1.f83b62p-113f, 0.0f, 0x1.85cc3ep-25f, 0x1.a413bcp-97f, 0x1.085fe8p-125f, 0.0f,
     0.0f, 0x1.787b48p-22f, 0.0f, 0.0f, 0.0f, 0x1.f63354p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d93p-5f, 0x1.492288p-45f, 0x1.fa35cap-72f, 0x1.f2232ap-92f, 0x1.d7beb4p-67f,
     0.0f, 0x1.565d02p-28f, 0x1.4c853p-65f, 0.0f, 0.0f, 0x1.3ed282p-91f,
     0x1.fadb7cp-98f, 0x1.308a98p-81f, 0.0f, 0x1.22283ap-125f, 0x1.7a81a4p-85f,
     0x1.279854p-2f, 0x1.ce1638p-95f, 0x1.23faacp-10f, 0.0f, 0x1.a5732p-35f, 0.0f,
     0x1.ffcfd8p-12f, 0x1.062ad6p-64f, 0x1.1ff96cp-2f, 0x1.0896f4p-28f,
     0x1.a0f41cp-91f, 0.0f, 0x1.b7334ap-12f, 0x1.36f352p-86f, 0x1.44a20ap-76f,
     0x1.843482p-82f, 0x1.cbd03p-125f, 0x1.ca828cp-121f, 0x1.d95daep-69f,
     0x1.e460c4p-50f, 0.0f, 0x1.138378p-11f, 0x1.15c298p-53f, 0x1.1ea53cp-114f,
     0x1.efb9c8p-22f, 0.0f, 0x1.23dda4p-113f, 0.0f, 0.0f, 0x1.50442ep-64f, 0.0f,
     0x1.7c3476p-31f, 0.0f, 0.0f, 0x1.51077ep-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bff1aep-10f, 0x1.b06f78p-89f, 0.0f, 0x1.c80e58p-119f, 0x1.d38118p-66f, 0.0f,
     0.0f, 0x1.04e756p-90f, 0x1.c63ab8p-10f, 0.0f, 0x1.e87602p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c0f3ap-66f, 0x1.9b1628p-20f, 0x1.9ae97ap-121f, 0.0f, 0.0f,
     0x1.a98156p-25f, 0x1.05856cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d415ep-22f, 0.0f,
     0x1.81a184p-1f, 0x1.a645p-5f, 0.0f, 0x1.aa921cp-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.058b3ep-96f, 0.0f, 0x1.9ec158p-116f, 0x1.cda414p-43f, 0.0f, 0.0f,
     0x1.ca78eap-31f, 0.0f, 0x1.1e5552p-60f, 0x1.2c30d4p-28f, 0.0f, 0x1.1e53d2p-74f,
     0.0f, 0x1.6a796p-82f, 0x1.53f94cp-116f, 0x1.0b7848p-107f, 0x1.be24ccp-87f, 0.0f,
     0x1.fd515ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.61e74cp-10f, 0.0f, 0.0f,
     0x1.7902eep-44f, 0.0f, 0.0f, 0x1.7f2856p-121f, 0.0f, 0x1.e27226p-94f,
     0x1.cc539cp-52f, 0.0f, 0x1.16797ap-117f, 0.0f, 0.0f, 0x1.1e35ccp-107f,
     0x1.0b7ccp-7f, 0.0f, 0x1.4e40d8p-5f, 0.0f, 0.0f, 0x1.e6b5ap-91f, 0.0f, 0.0f,
     0x1.2ed372p-49f, 0.0f, 0x1.c04076p-60f, 0.0f, 0.0f, 0.0f, 0x1.d09a1p-26f,
     0x1.915a7ep-11f, 0x1.bef06ap-49f, 0.0f, 0x1.d6e7f4p-120f, 0.0f, 0x1.8f2c62p-33f,
     0.0f, 0.0f, 0x1.201fe6p-25f, 0x1.24ae8cp-72f, 0.0f, 0x1.f6f134p-70f,
     0x1.17ec1ep-15f, 0x1.e78b36p-87f, 0x1.045288p-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8a8ccp-17f, 0.0f, 0x1.e399cep-79f, 0x1.37fb46p-55f, 0.0f, 0.0f,
     0x1.30aeb4p-41f, 0.0f, 0x1.f9e1e8p-2f, 0x1.3195f6p-34f, 0.0f, 0.0f, 0.0f,
     0x1.2316cp-63f, 0.0f, 0x1.b47f7p-109f, 0x1.b469fep-120f, 0.0f, 0x1.98db2ep-52f,
     0x1.8dce14p-63f, 0x1.fa50acp-6f, 0x1.9be52p-99f, 0.0f, 0x1.cc9ebap-19f,
     0x1.815a22p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a1b38p-55f, 0x1.d8523ap-102f, 0.0f,
     0x1.d3e32p-48f, 0x1.05768ep-32f, 0.0f, 0.0f, 0.0f, 0x1.5a3538p-99f,
     0x1.7b34a2p-68f, 0x1.e3063p-20f, 0x1.376544p-104f, 0x1.0e494ep-88f,
     0x1.61a16cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6756p-57f, 0.0f, 0.0f,
     0x1.535f9ep-70f, 0x1.beea1ap-62f, 0.0f, 0x1.0c175p-3f, 0.0f, 0x1.777142p-17f,
     0x1.3ce99cp-119f, 0x1.aadb7cp-42f, 0x1.bf7236p-63f, 0.0f, 0x1.e9b466p-18f, 0.0f,
     0.0f, 0x1.6f3f24p-76f, 0.0f, 0x1.35ec38p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b38404p-84f, 0x1.945728p-43f, 0.0f, 0x1.fa61ap-89f, 0x1.8ab22p-17f, 0.0f,
     0.0f, 0.0f, 0x1.2bf6b8p-123f, 0x1.28cad6p-34f, 0.0f, 0.0f, 0x1.645096p-112f,
     0.0f, 0.0f, 0.0f, 0x1.aaabfp-61f, 0x1.bf3a5ap-47f, 0x1.f86fc8p-22f, 0.0f, 0.0f,
     0x1.da987p-78f, 0.0f, 0x1.336762p-98f, 0x1.fa6ac8p-108f, 0x1.de835cp-89f,
     0x1.6f581ap-90f, 0.0f, 0.0f, 0.0f, 0x1.50953cp-71f, 0x1.0e2bd8p-5f,
     0x1.3a5e84p-71f, 0x1.6f88e4p-73f, 0.0f, 0x1.f579c8p-24f, 0.0f, 0.0f, 0.0f,
     0x1.f5357p-31f, 0x1.b7b882p-29f, 0.0f, 0x1.ef3328p-73f, 0.0f, 0x1.27b0b6p-13f,
     0.0f, 0.0f, 0x1.ec6dcap-57f, 0x1.503094p-10f, 0x1.edc596p-93f, 0x1.a0c814p-68f,
     0.0f, 0x1.340aaep-31f, 0.0f, 0x1.acf3fp-125f, 0x1.9b0238p-58f, 0x1.68e22ap-34f,
     0x1.5a3eeap-50f, 0x1.81c30cp-91f, 0.0f, 0.0f, 0x1.a7a814p-84f, 0.0f, 0.0f,
     0x1.f165eap-125f, 0.0f, 0x1.9a55acp-16f, 0x1.74b6d6p-54f, 0x1.9740cp-52f,
     0x1.bb0154p-49f, 0.0f, 0.0f, 0.0f, 0x1.8eca16p-105f, 0x1.81602ep-43f, 0.0f,
     0x1.7c7762p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00d688p-26f,
     0x1.f435a8p-4f, 0.0f, 0x1.fa47c8p-16f, 0.0f, 0.0f, 0x1.ddb0e6p-45f, 0.0f,
     0x1.aa56f4p-67f, 0x1.908e02p-103f, 0.0f, 0x1.aab982p-51f, 0x1.e4d86p-119f,
     0x1.0e136cp-68f, 0x1.1d3472p-37f, 0.0f, 0.0f, 0x1.9aaaeep-79f, 0.0f,
     0x1.90be14p-76f, 0x1.8da068p-53f, 0.0f, 0x1.3fe694p-90f, 0x1.50db5p-71f, 0.0f,
     0.0f, 0x1.539b72p-89f, 0.0f, 0x1.0e109ap-8f, 0.0f, 0x1.a44ff8p-66f, 0.0f,
     0x1.2688c8p-70f, 0x1.d4ae74p-39f, 0x1.0b34dep-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e96d6ep-38f, 0.0f, 0x1.72e7acp-17f, 0.0f, 0x1.9ae104p-115f, 0.0f, 0.0f,
     0x1.982884p-114f, 0x1.61ae74p-71f, 0x1.afe9eap-100f, 0.0f, 0x1.1992fep-86f, 0.0f,
     0x1.f4b1dap-34f, 0.0f, 0x1.183a6p-48f, 0.0f, 0x1.d5789cp-64f, 0x1.81b07ap-22f,
     0x1.9a410ep-112f, 0x1.4a1f34p-105f, 0x1.cd61f8p-1f, 0x1.635196p-99f,
     0x1.81b682p-29f, 0.0f, 0.0f, 0x1.5eb454p-49f, 0.0f, 0x1.299688p-107f, 0.0f, 0.0f,
     0x1.e7162p-20f, 0x1.274438p-61f, 0x1.e72afap-92f, 0x1.a35b1ep-70f, 0.0f, 0.0f,
     0.0f, 0x1.fc8c1ap-48f, 0.0f, 0.0f, 0x1.a5ac68p-52f, 0x1.3e1fe6p-69f, 0.0f, 0.0f,
     0x1.33507ap-11f, 0.0f, 0.0f, 0.0f, 0x1.306df4p-117f, 0x1.56d548p-107f,
     0x1.1d4ec4p-93f, 0x1.3305ccp-36f, 0x1.314912p-69f, 0x1.041158p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c797b6p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fff9bcp-51f, 0x1.355808p-78f, 0x1.9f614cp-103f, 0x1.603c16p-69f,
     0x1.3aac78p-70f, 0x1.87127cp-19f, 0.0f, 0x1.91c5dep-2f, 0.0f, 0.0f,
     0x1.c6191ap-31f, 0x1.8d02bp-9f, 0x1.0201f2p-64f, 0x1.c47412p-77f,
     0x1.2c59dep-72f, 0x1.de0ecp-38f, 0.0f, 0x1.e07b3ep-49f, 0.0f, 0x1.29d29ap-67f,
     0.0f, 0x1p0f, 0.0f, 0x1.a52b8p-99f, 0.0f, 0.0f, 0x1.4c5866p-32f, 0x1.f203fep-76f,
     0x1.dea7c6p-18f, 0.0f, 0.0f, 0.0f, 0x1.5d3e5ep-4f, 0.0f, 0.0f, 0x1.70febap-16f,
     0x1.baee7ep-34f, 0.0f, 0.0f, 0x1.ff115ep-124f, 0x1.a06dfep-76f, 0x1.1ab25ep-38f,
     0.0f, 0.0f, 0x1.f96256p-67f, 0.0f, 0.0f, 0x1.44fb04p-63f, 0x1.0d9b16p-59f,
     0x1.e29d4ap-100f, 0x1.70d28p-77f, 0.0f, 0.0f, 0.0f, 0x1.0f6536p-52f, 0.0f,
     0x1.ae88e6p-46f, 0.0f, 0x1.6361b8p-42f, 0x1.451cp-66f, 0x1.698414p-70f,
     0x1.22eee8p-30f, 0x1.a439fcp-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb5fc2p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6582p-58f, 0.0f, 0x1.ec7032p-124f, 0x1.e5256ep-59f,
     0.0f, 0x1.258ef8p-94f, 0.0f, 0.0f, 0.0f, 0x1.7f7238p-57f, 0.0f, 0x1.73e8a2p-91f,
     0x1.cc16d8p-97f, 0x1.4101eap-116f, 0.0f, 0.0f, 0x1.933ee2p-120f, 0x1.bc92p-121f,
     0x1.5c749ap-43f, 0x1.aba39p-35f, 0.0f, 0x1.c9cabap-83f, 0x1.7bf682p-73f,
     0x1.f6fe4ep-6f, 0.0f, 0x1.f3036ep-105f, 0x1.47ddbcp-33f, 0.0f, 0x1.189daep-46f,
     0x1.2446b4p-4f, 0.0f, 0.0f, 0x1.16ab2cp-118f, 0x1.db03cap-21f, 0x1.f10c1ep-25f,
     0.0f, 0x1.f087c4p-124f, 0.0f, 0x1.99e3a2p-103f, 0.0f, 0x1.12cfe8p-8f, 0.0f, 0.0f,
     0x1.7e71fp-53f, 0x1.29d6fep-115f, 0.0f, 0x1.02363ap-31f, 0.0f, 0.0f,
     0x1.95715cp-98f, 0.0f, 0x1.ef2dd6p-15f, 0.0f, 0x1.a92f76p-10f, 0.0f, 0.0f,
     0x1.c48d84p-16f, 0.0f, 0x1.8aa4b4p-31f, 0.0f, 0.0f, 0x1.671bb2p-43f, 0.0f,
     0x1.ad21b2p-7f, 0.0f, 0x1.c1927ap-102f, 0.0f, 0.0f, 0x1.3e335ep-59f,
     0x1.996dfap-96f, 0.0f, 0x1.818d76p-64f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_tanhf4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_tanhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
