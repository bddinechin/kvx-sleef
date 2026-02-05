/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floorf4_avx2128.c --function Sleef_finz_floorf4_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ae1bp-10f, 0.0f, 0.0f, 0x1.22cd6cp-55f,
     0x1.b44f26p-48f, 0x1.2e012p-124f, 0.0f, 0.0f, 0x1.e7403ep-7f, 0x1.4c3e7cp-10f,
     0x1.71fd7p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.199c4ep-89f, 0x1.1c3522p-87f,
     0x1.465d2ap-83f, 0.0f, 0x1.7464d2p-123f, 0x1.58d3bcp-8f, 0.0f, 0.0f, 0.0f,
     0x1.568e1p-39f, 0x1.9d2432p-23f, 0x1.54c68p-46f, 0.0f, 0x1.86a228p-78f, 0.0f,
     0x1.b5f4b6p-24f, 0x1.2e12ccp-35f, 0.0f, 0x1.4c0b78p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.07ca1cp-20f, 0.0f, 0x1.5339c4p-81f, 0x1.9f83acp-94f, 0x1.ffdde4p-48f,
     0x1.0a9ce2p-22f, 0x1.e74daap-114f, 0.0f, 0x1.a1d844p-49f, 0x1.889488p-106f,
     0x1.bf7be4p-43f, 0x1.42f85p-64f, 0.0f, 0x1.8590ap-19f, 0x1.1e2e94p-85f,
     0x1.e75f9cp-81f, 0x1.c87396p-103f, 0x1.cad7d4p-50f, 0x1.1842fap-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b7cd4p-95f, 0.0f, 0x1.a80c12p-24f,
     0x1.b2e41cp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.747a5cp-85f,
     0x1.acb6d2p-3f, 0x1.a4b568p-103f, 0x1.71b686p-55f, 0x1.80231ap-105f, 0.0f, 0.0f,
     0.0f, 0x1.709648p-58f, 0x1.596fdap-77f, 0x1.a17bdcp-81f, 0.0f, 0.0f, 0.0f,
     0x1.d20646p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30bf5cp-74f, 0.0f, 0.0f,
     0x1.f995c2p-15f, 0.0f, 0.0f, 0x1.8e0e82p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1a1dp-112f, 0.0f, 0x1.b080dep-100f, 0x1.3b122ep-47f, 0.0f, 0x1.2a3ad2p-18f,
     0.0f, 0x1.c97e0ap-82f, 0x1.24c62p-79f, 0x1.9eb55cp-100f, 0x1.0d66d2p-12f,
     0x1.11ad58p-76f, 0x1.ba029ep-8f, 0.0f, 0x1.c6554ap-30f, 0.0f, 0x1.19e98p-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c5116p-48f, 0.0f, 0x1.f53de4p-14f,
     0x1.76b426p-111f, 0.0f, 0.0f, 0.0f, 0x1.bee786p-75f, 0x1.f38dd8p-32f,
     0x1.356538p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c27d32p-57f, 0x1.cc383ep-41f,
     0.0f, 0x1.bd745ap-45f, 0x1.ea319ep-98f, 0.0f, 0.0f, 0x1.afb2fap-32f, 0.0f, 0.0f,
     0x1.936fa6p-8f, 0x1.965a94p-123f, 0x1.0b5a8ep-59f, 0.0f, 0.0f, 0.0f,
     0x1.8556bcp-30f, 0x1.b17bd8p-21f, 0.0f, 0.0f, 0.0f, 0x1.299a42p-88f, 0.0f,
     0x1.88707ap-106f, 0x1.48413p-38f, 0.0f, 0.0f, 0x1.f71d18p-31f, 0x1.2a44d8p-87f,
     0.0f, 0x1.d8f8fap-51f, 0.0f, 0x1.4926a8p-68f, 0x1.982e4p-54f, 0x1.013ca4p-60f,
     0x1.afc3aap-51f, 0.0f, 0x1.ef6af4p-84f, 0.0f, 0x1.fdcba2p-111f, 0x1.53d57cp-92f,
     0.0f, 0x1.8ca6aap-58f, 0x1.a58f1cp-3f, 0x1.5a1392p-47f, 0.0f, 0x1.37e2f8p-26f,
     0.0f, 0x1.3b9848p-54f, 0.0f, 0.0f, 0.0f, 0x1.d1798ap-8f, 0x1.f6133ap-45f, 0.0f,
     0x1.d792f6p-89f, 0.0f, 0x1.18e2cp-3f, 0.0f, 0.0f, 0x1.9df6b8p-112f,
     0x1.a17f8ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1abfa4p-45f, 0.0f, 0.0f, 0.0f,
     0x1.490756p-57f, 0.0f, 0x1.5f0108p-105f, 0.0f, 0.0f, 0x1.679bd2p-42f,
     0x1.36ab4ap-27f, 0x1.41a69ep-80f, 0x1.cf4e3ap-90f, 0.0f, 0.0f, 0x1.e6a8dp-95f,
     0x1.bdca7ep-64f, 0.0f, 0.0f, 0x1.0e63fep-83f, 0.0f, 0.0f, 0x1.c31db2p-101f, 0.0f,
     0x1.81f0b6p-82f, 0.0f, 0x1.19b8dcp-118f, 0x1.a2978ep-93f, 0x1.987adcp-11f,
     0x1.28eb36p-78f, 0.0f, 0x1.6eb322p-84f, 0x1.a69c92p-115f, 0.0f, 0x1.286bb2p-118f,
     0x1.e6f6d6p-21f, 0x1.050072p-84f, 0x1.70be0ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.8a3c6ep-2f, 0.0f, 0.0f, 0x1.7ded56p-73f, 0.0f, 0.0f, 0x1.172136p-99f, 0.0f,
     0.0f, 0x1.bbd5bp-17f, 0.0f, 0.0f, 0x1.581b8ap-29f, 0x1p0f, 0.0f, 0x1.b6371cp-52f,
     0x1.391eb6p-94f, 0.0f, 0x1.c3f26ep-4f, 0x1.44bf3ep-25f, 0x1.549dfcp-118f, 0.0f,
     0x1.be5f98p-106f, 0.0f, 0x1.3e2a84p-95f, 0.0f, 0x1.4a9512p-100f, 0x1.92aeecp-27f,
     0.0f, 0x1.22af5cp-25f, 0x1.08b248p-70f, 0.0f, 0x1.de817cp-126f, 0.0f, 0.0f,
     0x1.9e5602p-67f, 0.0f, 0.0f, 0.0f, 0x1.acdf02p-121f, 0.0f, 0x1.b936c2p-19f, 0.0f,
     0.0f, 0x1.537f4ap-61f, 0x1.b3e8f4p-46f, 0.0f, 0x1.58df84p-115f, 0x1.8ea25cp-5f,
     0.0f, 0x1.71698ep-123f, 0x1.841256p-38f, 0.0f, 0x1.6242fp-58f, 0.0f, 0.0f,
     0x1.b147aap-40f, 0x1.c84466p-111f, 0.0f, 0.0f, 0x1.5ed0dep-64f, 0.0f,
     0x1.872268p-88f, 0x1.3216acp-76f, 0x1.3121cp-70f, 0.0f, 0x1.ba103ap-76f,
     0x1.1fb066p-19f, 0.0f, 0.0f, 0x1.ba7744p-26f, 0x1.c242eap-83f, 0.0f,
     0x1.c994e2p-86f, 0.0f, 0.0f, 0x1.5c98c6p-33f, 0.0f, 0.0f, 0x1.ff3ea6p-69f,
     0x1.cdf712p-124f, 0x1.33beccp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb374p-123f, 0.0f, 0x1.92dcep-94f, 0.0f, 0.0f, 0x1.3b9754p-74f, 0.0f,
     0x1.445c38p-114f, 0.0f, 0x1.70ad2cp-116f, 0x1.79e28p-61f, 0.0f, 0.0f,
     0x1.64688ap-121f, 0x1.4e6424p-113f, 0.0f, 0x1.0d52bep-82f, 0.0f, 0.0f, 0.0f,
     0x1.9c67aap-34f, 0x1.30b292p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ccfa4p-53f,
     0x1.6bb0d4p-42f, 0.0f, 0x1.581e78p-23f, 0.0f, 0.0f, 0x1.e8dec2p-94f, 0.0f,
     0x1.f5fe7p-86f, 0x1.aaedb6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92ed1ap-46f, 0.0f,
     0x1.072e4ep-21f, 0x1.adb8d8p-73f, 0x1.46c92cp-96f, 0x1.d85eeep-116f,
     0x1.3d4254p-20f, 0x1.b9288ap-86f, 0.0f, 0.0f, 0x1.cccde6p-87f, 0.0f,
     0x1.485186p-99f, 0.0f, 0.0f, 0.0f, 0x1.b24a36p-6f, 0x1.05f44cp-8f,
     0x1.4787bep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bb6a2p-68f, 0.0f, 0.0f,
     0x1.a52bap-46f, 0.0f, 0.0f, 0x1.256afap-52f, 0.0f, 0x1.ebad54p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ea69ccp-42f, 0x1.3c4d36p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e1898p-4f, 0x1.ce14c4p-62f, 0.0f, 0x1.9c0742p-26f, 0x1.3dc6fap-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a49bc6p-97f, 0x1.40bec6p-58f, 0x1.ab4a9cp-86f,
     0x1.ae57c6p-59f, 0x1.3eaaecp-114f, 0.0f, 0.0f, 0.0f, 0x1.73f818p-79f, 0.0f,
     0x1.90c314p-1f, 0x1.61bf94p-14f, 0.0f, 0x1.484a38p-109f, 0x1.78b544p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7b7c6p-87f, 0x1.306144p-44f,
     0x1.b59a86p-56f, 0.0f, 0x1.d7e3a2p-30f, 0.0f, 0.0f, 0x1.6abbfcp-18f,
     0x1.9ad48ep-104f, 0x1.c9c6c8p-37f, 0.0f, 0x1.877bc6p-60f, 0x1.17b4cep-40f, 0.0f,
     0x1.95ddeep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b97c0ap-11f, 0.0f, 0.0f,
     0x1.1433e4p-107f, 0.0f, 0.0f, 0x1.6cb704p-114f, 0x1.e69efep-116f, 0.0f, 0.0f,
     0x1.71a774p-2f, 0x1.ebfd16p-119f, 0x1.8b1ee8p-85f, 0x1.0cd25ap-103f,
     0x1.c4d51cp-41f, 0.0f, 0.0f, 0.0f, 0x1.e83ecp-39f, 0.0f, 0x1.73aac8p-93f,
     0x1.6c9388p-25f, 0.0f, 0.0f, 0.0f, 0x1.a7716cp-98f, 0.0f, 0.0f, 0x1.bb7f0ep-66f,
     0.0f, 0x1.1cdb1ap-123f, 0.0f, 0.0f, 0x1.c70cp-19f, 0.0f, 0x1.fb2e94p-53f, 0.0f,
     0x1.a3007ap-54f, 0x1.773a0ep-115f, 0x1.c970eep-113f, 0.0f, 0x1.294f34p-118f,
     0.0f, 0.0f, 0x1.e8c79ep-19f, 0.0f, 0.0f, 0.0f, 0x1.63590ep-115f, 0.0f,
     0x1.0239bp-56f, 0.0f, 0x1.086738p-80f, 0.0f, 0x1.b5777p-83f, 0.0f, 0.0f,
     0x1.12ddc2p-93f, 0.0f, 0.0f, 0x1.eb8abap-25f, 0.0f, 0x1.3ba3cep-21f,
     0x1.1443f4p-55f, 0.0f, 0x1.9b0a06p-46f, 0x1.b31f3ap-84f, 0.0f, 0.0f,
     0x1.c7c766p-47f, 0.0f, 0x1.53b5p-26f, 0x1.fd4dccp-117f, 0x1.b35fdcp-61f,
     0x1.86c408p-10f, 0x1.d615a8p-115f, 0.0f, 0x1.62beb8p-3f, 0x1.95b1a8p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e9d6ep-7f, 0x1.a01814p-62f, 0x1.476ac2p-42f, 0.0f,
     0x1.a4fe42p-15f, 0x1.46956cp-7f, 0.0f, 0.0f, 0x1.238c56p-109f, 0x1.2264dep-66f,
     0.0f, 0x1.0acfa8p-125f, 0x1.db4fe8p-88f, 0.0f, 0.0f, 0x1.a9827ep-57f,
     0x1.19ac5cp-16f, 0.0f, 0x1.aa769cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9ec88p-69f,
     0x1.c9e60ep-52f, 0.0f, 0x1.71435p-50f, 0x1.270756p-41f, 0x1.7878f6p-8f, 0.0f,
     0.0f, 0x1.988a1p-32f, 0x1.e84c92p-63f, 0x1.285256p-5f, 0.0f, 0x1.bb6018p-84f,
     0.0f, 0x1.e4daecp-35f, 0x1.d538dep-42f, 0.0f, 0x1.464ff6p-41f, 0x1.a754p-42f,
     0x1.0a67acp-56f, 0.0f, 0x1.7fa75ap-109f, 0x1.0593bcp-76f, 0.0f, 0x1.b208f8p-101f,
     0x1.049df6p-38f, 0x1.e2817cp-2f, 0.0f, 0x1.06000ap-2f, 0.0f, 0x1.8dd4b8p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd2bdep-8f, 0x1.9126aep-22f, 0x1.69baaep-116f,
     0x1.037994p-9f, 0.0f, 0x1.06bfp-22f, 0.0f, 0.0f, 0.0f, 0x1.172e38p-106f,
     0x1.5a6b44p-99f, 0x1.1baef4p-69f, 0x1.e31256p-18f, 0x1.78fcfp-67f,
     0x1.5ad2d4p-45f, 0.0f, 0x1.724c5cp-27f, 0.0f, 0x1.e6c8aep-7f, 0.0f,
     0x1.5e6104p-7f, 0x1.508752p-13f, 0x1.3d4512p-10f, 0.0f, 0x1.12e0e6p-1f, 0.0f,
     0x1.f0473ep-38f, 0x1.2626c6p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5bba8p-98f,
     0x1.9f14bap-74f, 0x1.56d4aep-84f, 0x1.7112d6p-107f, 0.0f, 0x1.f71b58p-86f, 0.0f,
     0x1.a81e68p-89f, 0.0f, 0x1.df8c4ap-87f, 0x1.1a7ec4p-72f, 0x1.1e7a5p-43f, 0.0f,
     0x1.fa75cep-44f, 0x1.e113dap-89f, 0.0f, 0.0f, 0.0f, 0x1.6a11c8p-102f, 0.0f,
     0x1.a2eeaap-57f, 0x1.f77918p-92f, 0x1.5a616p-116f, 0x1.7168b2p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.90fe02p-77f, 0.0f, 0x1.288274p-29f, 0.0f, 0x1.c0ecb8p-3f, 0.0f,
     0.0f, 0x1.53d4d6p-82f, 0.0f, 0x1.f1bae4p-20f, 0.0f, 0.0f, 0.0f, 0x1.53c64p-124f,
     0x1.069c56p-34f, 0x1.3db57ap-63f, 0x1.eac3f2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d08f2p-38f, 0x1.37b976p-121f, 0x1.331782p-18f, 0.0f, 0x1.306c64p-104f,
     0x1.686a64p-43f, 0.0f, 0x1.323f48p-32f, 0x1.9a5082p-60f, 0x1.183adcp-122f,
     0x1.0644d2p-92f, 0x1.3343d6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28cea4p-53f,
     0x1.2a5bc6p-111f, 0x1.31be1ep-77f, 0x1.1f436ap-111f, 0.0f, 0x1.3c8ebep-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c50b2p-108f, 0.0f, 0x1.ee4ca2p-74f, 0.0f, 0.0f,
     0x1.9531cap-95f, 0.0f, 0.0f, 0x1.a74cbep-23f, 0.0f, 0x1.b8be9ap-123f,
     0x1.28307ep-4f, 0.0f, 0.0f, 0.0f, 0x1.761608p-9f, 0x1.f73956p-55f,
     0x1.86a3dap-1f, 0.0f, 0x1.2fb08ep-75f, 0.0f, 0x1.bcd478p-45f, 0x1.9da0cep-86f,
     0.0f, 0x1.86187cp-60f, 0x1.62794cp-51f, 0x1.3eb56ep-24f, 0.0f, 0.0f, 0.0f,
     0x1.6b0758p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.980cacp-82f, 0.0f, 0.0f,
     0x1.440962p-105f, 0.0f, 0.0f, 0x1.068786p-79f, 0x1.90c33p-92f, 0x1.74e6a8p-109f,
     0x1.a0ec9cp-85f, 0x1.949dc2p-4f, 0.0f, 0.0f, 0x1.693dacp-7f, 0x1.4aaa24p-2f,
     0x1.6050b6p-60f, 0x1.110b3ep-13f, 0.0f, 0.0f, 0.0f, 0x1.117bdcp-29f, 0.0f, 0.0f,
     0x1.9f011ep-68f, 0x1.d9452ep-2f, 0x1.5eea5ap-75f, 0x1.d65e98p-71f, 0.0f, 0.0f,
     0x1.5e41ccp-20f, 0x1.73429cp-53f, 0x1.ac2776p-35f, 0x1.e0b9e4p-89f, 0.0f,
     0x1.758c46p-77f, 0x1.f2deacp-5f, 0.0f, 0.0f, 0.0f, 0x1.7c79ccp-24f, 0.0f,
     0x1.571a92p-39f, 0x1.ea41f2p-116f, 0.0f, 0x1.7cbe32p-9f, 0x1.7ab04ep-110f,
     0x1.bad8ap-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7155aap-105f, 0x1.688bb4p-98f,
     0x1.16d844p-1f, 0x1.d9b57p-19f, 0.0f, 0x1.4668c2p-66f, 0.0f, 0x1.01adeep-116f,
     0x1.980f2ep-70f, 0x1.04887cp-59f, 0.0f, 0x1.9b684p-73f, 0x1.a295f8p-49f, 0.0f,
     0.0f, 0x1.2bfc8cp-102f, 0x1.8e23bcp-76f, 0.0f, 0.0f, 0x1.3a88d2p-27f,
     0x1.4aa48p-115f, 0.0f, 0x1.fa3e76p-49f, 0x1.be939ap-1f, 0.0f, 0x1.6af512p-94f,
     0x1.322058p-100f, 0x1.a808fcp-66f, 0.0f, 0x1.eb372ap-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fabb36p-93f, 0x1.ea38a6p-5f, 0.0f, 0.0f, 0x1.4cb05cp-61f, 0x1.4258c4p-97f,
     0.0f, 0.0f, 0x1.f4a71p-114f, 0x1.31162cp-57f, 0x1.5ee42p-23f, 0.0f, 0.0f,
     0x1.6cf4f2p-41f, 0.0f, 0.0f, 0x1.a9e54cp-120f, 0.0f, 0.0f, 0x1.45c26ep-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b8fd6p-90f, 0.0f, 0x1.1e15bap-120f,
     0.0f, 0x1.79e0aep-5f, 0x1.fc2632p-17f, 0x1.76368p-69f, 0x1.36cf52p-38f, 0.0f,
     0x1.7613e2p-20f, 0.0f, 0x1.f530dap-108f, 0.0f, 0.0f, 0x1.531e96p-106f, 0.0f,
     0x1.bf5188p-33f, 0x1.8c583cp-29f, 0.0f, 0.0f, 0x1.f2251cp-45f, 0.0f, 0.0f,
     0x1.15e0eep-124f, 0.0f, 0x1.3fa9ep-119f, 0.0f, 0x1.20e98ap-36f, 0.0f,
     0x1.6e0bdep-56f, 0x1.2cd166p-15f, 0.0f, 0x1.588b9p-27f, 0x1.9a2b94p-28f, 0.0f,
     0.0f, 0x1.0a402ep-86f, 0.0f, 0.0f, 0x1.a8c6b8p-79f, 0x1.294318p-42f, 0.0f,
     0x1.ba6194p-125f, 0.0f, 0.0f, 0x1.b77b1p-19f, 0x1.f4d398p-19f, 0x1.c150e4p-54f,
     0x1.46677ep-113f, 0x1.5ebfeap-86f, 0.0f, 0.0f, 0x1.3c8ac2p-76f, 0.0f, 0.0f,
     0x1.238756p-110f, 0x1.840808p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.565a12p-79f,
     0x1.238a34p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.c75456p-28f,
     0x1.126dc8p-90f, 0x1.2f9b8ap-65f, 0x1.0084acp-62f, 0.0f, 0.0f, 0.0f,
     0x1.aa470cp-72f, 0.0f, 0.0f, 0.0f, 0x1.134cap-83f, 0.0f, 0x1.cc3e46p-121f,
     0x1.71749cp-43f, 0x1.b8d0f8p-12f, 0x1.1ff97p-53f, 0x1.5ad872p-6f,
     0x1.b916c2p-108f, 0x1.39a282p-95f, 0x1.4592a8p-110f, 0.0f, 0x1.42b188p-77f, 0.0f,
     0.0f, 0.0f, 0x1.f6d8e4p-53f, 0.0f, 0x1.a716fap-37f, 0.0f, 0x1.2a93a4p-126f, 0.0f,
     0x1.27b886p-28f, 0.0f, 0.0f, 0x1.05679cp-9f, 0.0f, 0.0f, 0x1.75a8d8p-20f,
     0x1.46628ep-117f, 0x1.53eeaep-51f, 0x1p0f, 0.0f, 0x1.f71aaap-52f, 0.0f, 0.0f,
     0.0f, 0x1.8f896p-98f, 0.0f, 0x1.f225p-18f, 0x1.752b4p-41f, 0x1.3091f2p-100f,
     0.0f, 0x1.d2533p-126f
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_floorf4_avx2128(tmp0);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_floorf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_floorf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
