/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospif4_u35avx2128.c --function \
 *     Sleef_finz_sincospif4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --precision sleef_sf2 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef___m128_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef___m128_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.5c3708p-34f, 0x1.23f26cp-19f, 0x1.5fd182p-2f, 0x1.4de5e4p-62f, 0.0f, 0.0f,
     0.0f, 0x1.c5229cp-55f, 0x1.3a1fdep-10f, 0x1.462ee6p-69f, 0.0f, 0x1.0bda16p-23f,
     0.0f, 0x1.a7cc18p-21f, 0.0f, 0.0f, 0.0f, 0x1.8cf84ap-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b7c2p-55f, 0x1.50dd5ep-117f, 0x1.5635acp-109f,
     0x1.19831ep-93f, 0.0f, 0.0f, 0x1.9c64b4p-102f, 0.0f, 0.0f, 0x1.b8b22p-23f,
     0x1.1f6ca6p-80f, 0x1.e0f744p-77f, 0x1.6ef4eap-95f, 0x1.78aae6p-51f, 0.0f,
     0x1.efbfd8p-77f, 0x1.b4e9f6p-77f, 0.0f, 0.0f, 0x1.88988ap-5f, 0x1.4372a2p-63f,
     0.0f, 0.0f, 0.0f, 0x1.558bcep-115f, 0.0f, 0x1.ed328ap-37f, 0.0f, 0x1.f15cf8p-62f,
     0.0f, 0.0f, 0.0f, 0x1.b1fe2ap-38f, 0.0f, 0x1.b793dcp-59f, 0.0f, 0.0f,
     0x1.10a2dp-41f, 0.0f, 0x1.93acdep-114f, 0x1.c95a84p-39f, 0.0f, 0x1.be389p-124f,
     0x1.e994a2p-19f, 0x1.61b44ep-71f, 0x1.f44baep-63f, 0.0f, 0.0f, 0x1.580adp-94f,
     0.0f, 0.0f, 0x1.4c9ae6p-112f, 0.0f, 0.0f, 0.0f, 0x1.61eb8cp-11f, 0.0f,
     0x1.6c21ecp-62f, 0x1.ec1fb4p-1f, 0.0f, 0x1.f228cap-80f, 0.0f, 0.0f,
     0x1.61125p-10f, 0.0f, 0.0f, 0.0f, 0x1.e8611ep-30f, 0x1.bd3946p-52f, 0.0f,
     0x1.e1c32cp-94f, 0x1.9cabcep-72f, 0.0f, 0x1.44aa66p-19f, 0x1.4de33ap-59f,
     0x1.42026cp-112f, 0.0f, 0.0f, 0.0f, 0x1.51e8b4p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.18d252p-73f, 0x1.64139ap-23f, 0.0f, 0x1.ee562p-110f, 0.0f, 0x1.e5601ep-68f,
     0x1.8b0f5ep-26f, 0x1.1df1eep-61f, 0.0f, 0.0f, 0x1.0ef08cp-50f, 0x1.a79d96p-29f,
     0x1.2d2092p-81f, 0.0f, 0x1.68573ap-49f, 0.0f, 0.0f, 0x1.6b9716p-26f, 0.0f, 0.0f,
     0.0f, 0x1.8df216p-44f, 0x1.f86a12p-56f, 0.0f, 0x1.477188p-52f, 0.0f,
     0x1.3c79fep-115f, 0.0f, 0.0f, 0x1.267fd6p-104f, 0x1.8ca7e2p-115f,
     0x1.a06caep-45f, 0x1.ed76fcp-38f, 0x1.f3522p-83f, 0.0f, 0x1.5a6cfp-11f, 0.0f,
     0.0f, 0.0f, 0x1.494b3cp-86f, 0.0f, 0x1.83fd4p-112f, 0.0f, 0.0f, 0x1.7767d2p-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a60fcp-9f, 0.0f, 0.0f, 0.0f, 0x1.3c542p-59f, 0.0f,
     0.0f, 0.0f, 0x1.b431e2p-7f, 0.0f, 0.0f, 0x1.432dc2p-21f, 0.0f, 0.0f, 0.0f,
     0x1.db1fdap-48f, 0.0f, 0x1.2e7b74p-25f, 0x1.46e9a2p-110f, 0.0f, 0x1.9608cp-115f,
     0.0f, 0x1.acf36cp-48f, 0x1.942098p-55f, 0.0f, 0x1.966cbep-110f, 0.0f,
     0x1.40c3aep-105f, 0.0f, 0x1.aeb1a4p-14f, 0x1.c0c428p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc8422p-121f, 0x1.836e62p-88f, 0.0f, 0.0f, 0x1.cdca7p-16f, 0.0f, 0.0f,
     0x1.2406acp-37f, 0x1.4a59d2p-89f, 0.0f, 0.0f, 0x1.a1608ep-91f, 0.0f,
     0x1.2e12d4p-42f, 0x1.262794p-54f, 0x1.e508d4p-20f, 0x1.c9078cp-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5affp-3f, 0.0f, 0.0f, 0.0f, 0x1.57c4c8p-15f,
     0x1.07a7ap-41f, 0x1.8517c6p-29f, 0x1.ff95cap-102f, 0.0f, 0.0f, 0x1.b4e43p-114f,
     0.0f, 0.0f, 0.0f, 0x1.f87c92p-118f, 0.0f, 0x1.1d79e6p-53f, 0.0f, 0x1.d0f5fap-59f,
     0.0f, 0x1.3cce52p-16f, 0.0f, 0x1.162f9ap-38f, 0x1.e15aa6p-26f, 0x1.c6e51ap-60f,
     0.0f, 0.0f, 0x1.356bfcp-125f, 0x1.247a64p-2f, 0x1.c841c2p-89f, 0.0f,
     0x1.8f6bd8p-58f, 0.0f, 0.0f, 0x1.a343f8p-53f, 0x1.79ac16p-91f, 0.0f, 0.0f, 0.0f,
     0x1.98fd1p-7f, 0x1.a3bca2p-49f, 0x1.605298p-90f, 0.0f, 0x1.c51b5ap-13f,
     0x1.5d8408p-19f, 0.0f, 0x1.1806fcp-17f, 0x1.3e974p-47f, 0x1.20819ep-28f,
     0x1.b6a632p-72f, 0x1.721a52p-87f, 0.0f, 0.0f, 0x1.0b9424p-97f, 0x1.71af04p-50f,
     0x1.5fd63p-111f, 0x1.be88b4p-5f, 0.0f, 0x1.74b01cp-9f, 0.0f, 0x1.4e20acp-79f,
     0x1.8c5afp-104f, 0x1.7138dep-34f, 0x1.be177cp-119f, 0x1.987156p-34f, 0.0f, 0.0f,
     0.0f, 0x1.b33feep-92f, 0.0f, 0.0f, 0.0f, 0x1.12bbd2p-30f, 0x1.bb95fp-117f, 0.0f,
     0.0f, 0x1.256fa6p-42f, 0.0f, 0x1.49c388p-70f, 0x1.f1e4a2p-85f, 0.0f,
     0x1.20366ep-96f, 0x1.e52c54p-37f, 0.0f, 0.0f, 0.0f, 0x1.8bc3b8p-47f,
     0x1.0cd6aep-65f, 0x1.a09f9p-61f, 0x1.eb0b2cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.800314p-115f, 0x1.471a24p-124f, 0x1.fb895ap-124f, 0x1p0f, 0.0f,
     0x1.acc8d2p-17f, 0.0f, 0x1.fdc2fcp-27f, 0.0f, 0x1.0f46acp-57f, 0x1.920a28p-77f,
     0x1.d418bcp-23f, 0.0f, 0x1.44647cp-70f, 0.0f, 0.0f, 0x1.723f8ep-94f,
     0x1.4a421ap-15f, 0.0f, 0x1.8e48cp-10f, 0x1.f2aea8p-35f, 0.0f, 0x1.c6d7c6p-69f,
     0x1.c30ed4p-34f, 0x1.940cd2p-123f, 0x1.5218dp-12f, 0x1.6c7376p-111f, 0.0f,
     0x1.a40c98p-50f, 0.0f, 0x1.01487ap-61f, 0.0f, 0x1.c7b25ep-12f, 0.0f,
     0x1.007042p-15f, 0.0f, 0x1.33f3ccp-126f, 0x1.782f14p-46f, 0.0f, 0x1.9e6bcap-119f,
     0x1.a33ae4p-83f, 0x1.c1522ap-56f, 0.0f, 0x1.aaca72p-71f, 0.0f, 0.0f, 0.0f,
     0x1.cc1a68p-97f, 0x1.b9e846p-117f, 0x1.50e1e6p-105f, 0x1.ad480cp-12f, 0.0f,
     0x1.722cccp-96f, 0x1.19a074p-9f, 0x1.d07a3ap-19f, 0.0f, 0.0f, 0x1.a07794p-106f,
     0.0f, 0.0f, 0.0f, 0x1.5a4714p-8f, 0x1.faddf4p-56f, 0x1.2f8e5ep-8f,
     0x1.6d00dep-72f, 0.0f, 0x1.ec8586p-96f, 0.0f, 0x1.ed3ecep-97f, 0x1.479ba2p-47f,
     0x1.3d2ef8p-66f, 0x1.70054ap-83f, 0x1.8e7ad4p-103f, 0.0f, 0x1.a8554p-77f,
     0x1.df3174p-57f, 0x1.d04e38p-115f, 0x1.3cf3b8p-66f, 0x1.fb2fb6p-99f,
     0x1.c41f3cp-74f, 0.0f, 0x1.365ffp-35f, 0x1.c6d894p-26f, 0.0f, 0.0f, 0.0f,
     0x1.92a65cp-102f, 0.0f, 0x1.2267b4p-102f, 0x1.27c87ap-55f, 0x1.9dbf3cp-69f,
     0x1.eeb38cp-18f, 0.0f, 0x1.9affa2p-68f, 0x1.70752cp-79f, 0x1.050d14p-14f, 0.0f,
     0x1.04590ep-66f, 0x1.71f63p-72f, 0.0f, 0x1.b71f3cp-6f, 0x1.507cf4p-43f,
     0x1.5bbbd6p-90f, 0.0f, 0.0f, 0x1.db28b8p-111f, 0.0f, 0x1.0abe6ap-58f,
     0x1.6f1996p-63f, 0x1.1a1842p-22f, 0x1.de597cp-67f, 0x1.7f07aep-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4786a4p-7f, 0x1.62eap-67f, 0.0f, 0x1.adf45ep-87f, 0.0f,
     0.0f, 0.0f, 0x1.984c52p-35f, 0.0f, 0x1.083cf2p-75f, 0x1.0f7326p-98f,
     0x1.d6b408p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cac552p-104f, 0.0f,
     0x1.3a6e38p-41f, 0x1.a33228p-93f, 0x1.9bb9ccp-103f, 0.0f, 0x1.e88e5p-96f,
     0x1.f30b4cp-79f, 0x1.06b6a8p-94f, 0.0f, 0x1.b71d9p-95f, 0.0f, 0.0f,
     0x1.d721e4p-69f, 0.0f, 0x1.a3e84cp-23f, 0x1.222d38p-64f, 0x1.c220aap-6f, 0.0f,
     0x1.15a1ap-117f, 0x1.b22ecep-68f, 0x1.42894p-79f, 0x1.1b51cp-56f,
     0x1.8dc354p-35f, 0.0f, 0x1.94965ep-51f, 0.0f, 0x1.02b968p-32f, 0.0f, 0.0f,
     0x1.57dcc8p-117f, 0.0f, 0x1.3c59aep-88f, 0.0f, 0x1.a0b7cp-25f, 0.0f, 0.0f,
     0x1.8a51e4p-89f, 0.0f, 0x1.380552p-87f, 0.0f, 0.0f, 0x1.4350dap-72f, 0.0f, 0.0f,
     0x1.be11d4p-55f, 0x1.04fc04p-111f, 0x1.339c9p-73f, 0x1.ab32ccp-107f, 0.0f,
     0x1.0a272p-47f, 0x1.60c5e4p-14f, 0.0f, 0x1.bf672cp-52f, 0.0f, 0.0f,
     0x1.5b7ec2p-125f, 0.0f, 0x1.f6e0eep-72f, 0.0f, 0x1.6a2fdcp-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.236e3cp-2f, 0.0f, 0x1.21f402p-67f, 0.0f, 0x1.f01b88p-119f,
     0.0f, 0x1.3a0e44p-117f, 0x1.9f561p-62f, 0.0f, 0x1.2551cap-103f, 0.0f,
     0x1.8d1edp-87f, 0.0f, 0.0f, 0x1.8db7eep-68f, 0x1.a0ad2ep-23f, 0.0f,
     0x1.dfb276p-12f, 0x1.5d231ap-99f, 0.0f, 0x1.4cb6a8p-66f, 0.0f, 0x1.98fd5ap-2f,
     0.0f, 0x1.e867dap-76f, 0x1.720cf6p-122f, 0x1.b28a38p-66f, 0.0f, 0x1.c8dbd2p-52f,
     0.0f, 0.0f, 0x1.b81dp-48f, 0x1.40dd3cp-82f, 0.0f, 0.0f, 0.0f, 0x1.0f6cb6p-45f,
     0.0f, 0.0f, 0x1.fc953cp-15f, 0.0f, 0.0f, 0x1.05c648p-50f, 0.0f, 0.0f,
     0x1.290554p-85f, 0.0f, 0x1.df84ap-34f, 0.0f, 0x1.21d392p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9b40ep-50f, 0.0f, 0x1.d4fe06p-119f, 0.0f,
     0x1.acdde8p-121f, 0x1.a09196p-95f, 0x1.80c56ap-64f, 0.0f, 0x1.938ed2p-118f, 0.0f,
     0x1.05b3bap-7f, 0x1.74f542p-17f, 0x1.df3ebp-60f, 0x1.6991bep-8f, 0.0f,
     0x1.2a7608p-114f, 0.0f, 0x1.b774fp-55f, 0.0f, 0.0f, 0x1.bcf902p-97f,
     0x1.83ba94p-48f, 0x1.51fa22p-64f, 0x1.ee7802p-82f, 0x1.c8064cp-19f,
     0x1.8bae4p-77f, 0.0f, 0.0f, 0x1.c27ed4p-114f, 0.0f, 0.0f, 0x1.9e138ep-15f,
     0x1.c5ebc2p-21f, 0.0f, 0x1.224a1ep-100f, 0x1.cffe52p-97f, 0x1.597006p-28f,
     0x1.aa08cap-21f, 0x1.e0f02ap-3f, 0x1.e4ec64p-74f, 0x1.86b95ep-42f,
     0x1.62c07p-51f, 0x1.ff13f4p-6f, 0.0f, 0x1.f50cd4p-104f, 0.0f, 0.0f, 0.0f,
     0x1.563f02p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed43c4p-19f, 0.0f,
     0x1.832dbcp-122f, 0x1.d52ffep-50f, 0x1.2224a8p-11f, 0x1.acac66p-53f, 0.0f, 0.0f,
     0x1.fba9cp-25f, 0.0f, 0x1.d1e53ap-13f, 0x1.d6c004p-74f, 0x1.b5423ep-3f, 0.0f,
     0x1.9f7326p-117f, 0x1.8960d8p-14f, 0.0f, 0.0f, 0x1.9ed396p-70f, 0.0f,
     0x1.a82a2ap-47f, 0x1.e12504p-125f, 0x1.c60b5ap-86f, 0x1.158ce4p-35f,
     0x1.aec932p-12f, 0.0f, 0.0f, 0.0f, 0x1.40147p-50f, 0x1.830ab2p-4f,
     0x1.f134f8p-91f, 0.0f, 0.0f, 0.0f, 0x1.501534p-104f, 0x1.2dcab8p-16f,
     0x1.885f1ep-51f, 0.0f, 0x1.db6da2p-82f, 0x1.820a1ap-8f, 0.0f, 0x1.f591e6p-45f,
     0.0f, 0x1.881c8ap-8f, 0x1.3f003ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.54bb3ep-54f, 0x1.4a1fb8p-111f, 0x1.29bd64p-60f, 0x1.df0966p-46f,
     0x1.ebc256p-98f, 0.0f, 0.0f, 0.0f, 0x1.7c94bep-102f, 0.0f, 0x1.b63aa6p-87f, 0.0f,
     0.0f, 0.0f, 0x1.c6523cp-104f, 0.0f, 0.0f, 0x1.92624ap-113f, 0.0f, 0.0f,
     0x1.60b566p-100f, 0x1.b2469ep-5f, 0.0f, 0x1.13cb32p-111f, 0x1.5b0dap-92f, 0.0f,
     0x1.220146p-119f, 0x1.70491cp-82f, 0.0f, 0.0f, 0.0f, 0x1.a82526p-123f,
     0x1.2ff80ap-11f, 0.0f, 0.0f, 0x1.9fbefep-18f, 0.0f, 0x1.e2e656p-5f,
     0x1.879a24p-62f, 0.0f, 0x1.42f4a4p-117f, 0x1.99a6d6p-19f, 0x1.b7692p-73f,
     0x1.f52abap-16f, 0x1.76c9bp-61f, 0.0f, 0.0f, 0x1.ca06d6p-66f, 0.0f,
     0x1.b0126p-113f, 0x1.96d38ap-11f, 0x1.1f90a6p-52f, 0x1.80df0ep-28f, 0.0f,
     0x1.e8c934p-121f, 0.0f, 0.0f, 0.0f, 0x1.16c642p-55f, 0x1.c15334p-15f,
     0x1.ba241cp-73f, 0x1.1c3e94p-28f, 0.0f, 0.0f, 0x1.f05102p-2f, 0.0f,
     0x1.275d22p-58f, 0x1.f8729cp-119f, 0.0f, 0.0f, 0x1.95c658p-5f, 0.0f,
     0x1.afe806p-17f, 0x1.4f3d82p-6f, 0.0f, 0.0f, 0x1.219dfp-38f, 0x1.5de652p-92f,
     0.0f, 0.0f, 0.0f, 0x1.69095cp-55f, 0x1.05c0dap-17f, 0.0f, 0.0f, 0.0f,
     0x1.9bfeecp-116f, 0x1.81afa4p-44f, 0x1.b7b8e8p-97f, 0x1.345cc6p-67f,
     0x1.90dd3ep-3f, 0x1.235c64p-40f, 0.0f, 0x1.41a334p-43f, 0.0f, 0x1.668112p-32f,
     0x1.d875c8p-112f, 0.0f, 0.0f, 0x1.b072d8p-13f, 0.0f, 0.0f, 0.0f,
     0x1.a0f972p-124f, 0x1.4a7ea8p-58f, 0x1.5030aap-17f, 0x1.c56478p-86f,
     0x1.b48d02p-122f, 0x1.4ee5c8p-50f, 0.0f, 0.0f, 0.0f, 0x1.c607f4p-60f, 0.0f,
     0x1.d6a0a6p-16f, 0x1.761e5ap-9f, 0x1.19272p-64f, 0x1.ecf70cp-96f, 0.0f, 0.0f,
     0x1.6e834cp-78f, 0.0f, 0.0f, 0x1.2a40a2p-36f, 0.0f, 0.0f, 0x1.2efc8cp-96f,
     0x1.07f28ep-12f, 0.0f, 0.0f, 0x1.313b9ap-84f, 0.0f, 0.0f, 0.0f, 0x1.c6095ap-71f,
     0.0f, 0x1.441d7ep-3f, 0.0f, 0x1.b7a4c2p-18f, 0.0f, 0.0f, 0x1.451b74p-78f, 0.0f,
     0x1.cb2b38p-60f, 0x1.6bba5p-24f, 0.0f, 0.0f, 0.0f, 0x1.d4fd98p-46f, 0.0f,
     0x1.9628d2p-10f, 0x1.22730cp-114f, 0.0f, 0x1.a1d36ep-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87f8eap-105f, 0x1.cc06eep-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20092ap-13f,
     0x1.cee7acp-85f, 0x1.50c91ep-88f, 0.0f, 0x1.d1057cp-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.35b49cp-9f, 0.0f, 0x1.d2761p-40f, 0.0f, 0.0f, 0.0f, 0x1.1c76bep-53f,
     0.0f, 0x1.fd80e4p-123f, 0x1.95bf8p-75f, 0.0f, 0.0f, 0.0f, 0x1.d0c656p-83f,
     0x1.e75bf2p-65f, 0x1.703872p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b22ea6p-69f, 0.0f, 0.0f, 0x1.d2fd18p-89f, 0x1.68a7e8p-55f, 0.0f, 0.0f,
     0x1.a26788p-45f, 0x1.215558p-89f, 0.0f, 0.0f, 0.0f, 0x1.b00976p-54f, 0.0f,
     0x1.f82386p-52f, 0.0f, 0.0f, 0x1.6f4f9ap-76f, 0x1.5792b2p-16f, 0x1.c7e864p-67f,
     0.0f, 0.0f, 0x1.977496p-67f, 0.0f, 0x1.6d99c6p-2f, 0x1.ce4b12p-32f, 0.0f, 0.0f,
     0x1.5fb716p-18f, 0.0f, 0x1.5e567p-43f, 0x1.e9afep-87f, 0x1.1e8756p-62f, 0.0f,
     0x1.881e58p-67f, 0.0f, 0x1.3ec6cep-5f, 0.0f, 0x1.e1ea0cp-103f, 0.0f,
     0x1.6e683ap-64f, 0.0f, 0.0f, 0.0f, 0x1.26d6bep-28f, 0.0f, 0.0f, 0.0f,
     0x1.115a4p-112f, 0x1.1aeac8p-42f, 0.0f, 0x1.dc157p-99f, 0x1.76b228p-34f,
     0x1.87585ep-14f, 0x1.5680e2p-115f, 0.0f, 0x1.15e9fep-93f, 0.0f, 0.0f,
     0x1.88a392p-32f, 0.0f, 0x1.ba5ecap-57f, 0.0f, 0x1.2f11b2p-59f, 0x1.cb7058p-119f,
     0x1.0199b2p-71f, 0.0f, 0x1.dd6d2p-123f, 0.0f, 0x1.806cfp-88f, 0x1.67c0b6p-19f,
     0x1.4c052p-54f, 0x1.e76236p-80f, 0.0f, 0.0f, 0.0f, 0x1.c7706p-125f,
     0x1.7892fcp-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96921p-47f,
     0x1.72cae8p-46f, 0.0f, 0.0f, 0.0f, 0x1.29d52ep-2f, 0x1.e8824p-23f, 0.0f,
     0x1.8815d8p-27f, 0x1.3ba57cp-105f, 0.0f, 0x1.e705eep-42f, 0x1.b0206cp-66f,
     0x1.56432ep-103f, 0.0f, 0.0f, 0x1.530612p-24f, 0x1.84f26ep-63f, 0x1.3af0dp-22f,
     0x1.88e1cep-5f, 0x1.484848p-80f, 0x1.424d6ap-29f, 0x1.c2271p-41f, 0.0f, 0.0f,
     0x1.c53428p-25f, 0x1.5c04fep-111f, 0.0f, 0x1.128f18p-46f, 0.0f, 0.0f,
     0x1.cd791p-23f, 0x1.780f48p-84f, 0x1.b0d9p-14f, 0x1.f77dbap-68f, 0x1.874502p-72f,
     0.0f, 0x1.c843fcp-91f, 0x1.60f19p-21f, 0x1.3e7eb2p-29f, 0x1.f0e8c2p-38f,
     0x1.a7ca9cp-31f, 0x1.2fb8b2p-1f, 0.0f, 0x1.f4ebf4p-69f, 0x1.77708p-15f,
     0x1.e401a2p-48f, 0x1.c24ae6p-109f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128_2 global_bench_acc;
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
        Sleef___m128_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef___m128_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef___m128_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef___m128_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospif4_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128_2) {.x=tmp4, .y=tmp7});
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
        tmp6 = ((Sleef___m128_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincospif4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sincospif4_u35avx2128 bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
