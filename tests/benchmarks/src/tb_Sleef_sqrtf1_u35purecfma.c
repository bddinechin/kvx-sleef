/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf1_u35purecfma.c --function \
 *     Sleef_sqrtf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8dd9cp-109f, 0.0f, 0.0f, 0.0f,
     0x1.0f786p-90f, 0.0f, 0.0f, 0.0f, 0x1.b00a7ap-36f, 0x1.1e9c64p-22f,
     0x1.7670bp-15f, 0x1.f8d8ccp-54f, 0.0f, 0.0f, 0.0f, 0x1.dc7cc8p-53f,
     0x1.6f4054p-85f, 0x1.0129ep-52f, 0x1.ff3984p-58f, 0x1.240344p-8f,
     0x1.b13374p-106f, 0x1.61b66ap-91f, 0x1.56d4cep-33f, 0.0f, 0x1.00d984p-31f,
     0x1.9040eap-71f, 0x1.d59a06p-7f, 0.0f, 0.0f, 0.0f, 0x1.f3335ep-10f, 0.0f, 0.0f,
     0.0f, 0x1.d91f3p-16f, 0x1.e10a14p-11f, 0x1.e7a266p-57f, 0x1.d9da9cp-126f,
     0x1.456724p-88f, 0.0f, 0.0f, 0x1.d171c2p-71f, 0.0f, 0.0f, 0.0f, 0x1.ea439cp-94f,
     0.0f, 0.0f, 0.0f, 0x1.6cf734p-1f, 0.0f, 0x1.a6c144p-103f, 0x1.cacddcp-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6275ap-24f, 0x1.22953cp-39f, 0.0f, 0x1.a7ff36p-36f,
     0x1.a4ee44p-14f, 0.0f, 0.0f, 0.0f, 0x1.5f826ep-81f, 0.0f, 0x1.ea413ap-97f,
     0x1.99abf8p-103f, 0x1.7d816cp-90f, 0x1.d307c2p-28f, 0.0f, 0x1.8893a4p-116f, 0.0f,
     0x1.9c665ep-96f, 0.0f, 0x1.80f94ep-1f, 0x1.dd0684p-81f, 0.0f, 0x1.93ecbcp-25f,
     0.0f, 0x1.fe4276p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.022894p-11f,
     0x1.8492a6p-14f, 0.0f, 0x1.fc349ap-31f, 0x1.c34102p-71f, 0x1.1521b8p-125f,
     0x1.2c207ap-116f, 0.0f, 0.0f, 0x1.76667cp-81f, 0.0f, 0x1.d418d4p-41f,
     0x1.620b34p-119f, 0x1.628b4p-33f, 0.0f, 0x1.010a1ep-34f, 0.0f, 0x1.115334p-76f,
     0.0f, 0.0f, 0x1.8c2b7ap-30f, 0.0f, 0x1.f112c2p-89f, 0.0f, 0.0f, 0x1.774f04p-22f,
     0.0f, 0.0f, 0x1.24fca2p-4f, 0.0f, 0.0f, 0x1.4d62a2p-111f, 0.0f, 0x1.680516p-90f,
     0x1.21fd0ap-91f, 0x1.b2c6d2p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b6b6ep-109f, 0.0f, 0x1.fefa52p-14f, 0.0f, 0x1.2091ep-2f, 0x1.68d99ep-22f,
     0.0f, 0x1.220816p-45f, 0.0f, 0x1.2670f2p-105f, 0.0f, 0x1.58a7e2p-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87fae2p-5f, 0x1.a9d0b8p-126f,
     0x1.296298p-31f, 0.0f, 0x1.394532p-79f, 0x1.6d1d9cp-110f, 0x1.a4cf52p-16f,
     0x1.7a3d3ep-105f, 0x1.3fc92cp-76f, 0x1.3d6bdep-73f, 0x1.0c4c48p-75f, 0.0f, 0.0f,
     0x1.f4b816p-52f, 0.0f, 0x1.130a4ap-61f, 0x1.6346e8p-103f, 0x1.43422ap-116f,
     0x1.265cf4p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c31176p-85f, 0x1.4792bp-32f, 0.0f, 0.0f, 0x1.986a94p-88f, 0.0f, 0.0f,
     0x1.c14798p-110f, 0x1.91d6ecp-1f, 0.0f, 0x1.2b017cp-81f, 0x1.639f6ap-17f, 0.0f,
     0x1.97be0ep-46f, 0.0f, 0x1.fdc88ap-93f, 0.0f, 0.0f, 0.0f, 0x1.0c6b36p-9f, 0.0f,
     0x1.2f1942p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.326d2ap-10f,
     0x1.3d212p-39f, 0.0f, 0.0f, 0x1.037404p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58d1e8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.707cd8p-63f, 0x1.5eaa1cp-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.737698p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.389f6cp-119f,
     0x1.d2ddaap-36f, 0.0f, 0x1.bd28a4p-71f, 0.0f, 0.0f, 0x1.74c6f2p-86f,
     0x1.e27a44p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d74a96p-54f, 0.0f, 0x1.cb710ep-12f,
     0.0f, 0x1.cfaee6p-14f, 0x1.89a11cp-84f, 0.0f, 0x1.e1c764p-31f, 0.0f, 0.0f, 0.0f,
     0x1.bdf2dep-67f, 0x1.17fe7ep-90f, 0x1.d9826ep-29f, 0.0f, 0x1.259fe4p-16f,
     0x1.1f7e24p-71f, 0x1p0f, 0x1.c780bcp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b064fcp-63f,
     0.0f, 0.0f, 0.0f, 0x1.20fd9ep-46f, 0.0f, 0x1.748108p-12f, 0x1.8ddd78p-61f,
     0x1.f9857ep-103f, 0.0f, 0x1.60394ep-25f, 0x1.125124p-18f, 0x1.29165ap-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.26f3eep-23f, 0x1.b8453cp-123f, 0.0f, 0.0f, 0.0f,
     0x1.db647p-63f, 0x1.4fa16p-121f, 0.0f, 0.0f, 0.0f, 0x1.96978p-74f, 0.0f,
     0x1.419186p-58f, 0x1.41906ep-116f, 0x1.fb205ap-2f, 0x1.040254p-13f,
     0x1.a4b836p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22b648p-120f, 0x1.333bfp-39f,
     0x1.f1f7f8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9aa3b6p-112f, 0.0f,
     0x1.ffeeccp-117f, 0x1.e65f96p-81f, 0.0f, 0x1.c3bc84p-13f, 0.0f, 0x1.348652p-117f,
     0.0f, 0.0f, 0x1p0f, 0x1.4c06fap-80f, 0.0f, 0x1.7fb84p-106f, 0.0f,
     0x1.e9194ap-119f, 0.0f, 0x1.6d6982p-67f, 0x1.a8cae8p-59f, 0x1.620cd8p-91f,
     0x1.98b05ap-21f, 0.0f, 0x1.755b8cp-9f, 0.0f, 0.0f, 0x1.8beb0ep-46f,
     0x1.1dca6ep-16f, 0x1.4bff8ep-116f, 0.0f, 0x1.991d82p-106f, 0x1.34a7eap-50f, 0.0f,
     0x1.f598aep-106f, 0.0f, 0x1.9c6d4cp-45f, 0.0f, 0x1.18118p-80f, 0x1.14c3f8p-100f,
     0.0f, 0x1.e46e26p-120f, 0x1.e409eap-83f, 0x1.4c3b04p-43f, 0.0f, 0x1.935022p-38f,
     0.0f, 0x1.95d8aep-35f, 0x1.2f9492p-118f, 0.0f, 0.0f, 0x1.763efcp-118f, 0.0f,
     0x1.8f5c0ap-96f, 0.0f, 0.0f, 0x1.930b82p-56f, 0.0f, 0x1.48bbaep-120f, 0.0f, 0.0f,
     0x1.ece556p-111f, 0.0f, 0x1.8c62b2p-80f, 0x1.8383d8p-78f, 0.0f, 0.0f,
     0x1.815b72p-110f, 0x1.65acc4p-92f, 0x1.50bfbap-68f, 0.0f, 0x1.a3b694p-53f, 0.0f,
     0x1.cdad0ep-105f, 0.0f, 0x1.88cd0cp-15f, 0.0f, 0x1.42335cp-13f, 0x1.a0b4dap-49f,
     0.0f, 0.0f, 0x1.c6f4fep-52f, 0x1.df205p-121f, 0.0f, 0x1.ea2118p-101f,
     0x1.57419ap-42f, 0.0f, 0.0f, 0x1.9f34f8p-14f, 0x1.b0213p-91f, 0x1.995be2p-118f,
     0.0f, 0x1.a5c83ap-118f, 0x1.166fe8p-125f, 0x1.9f47fap-60f, 0.0f, 0x1.2df966p-61f,
     0x1.9b3be8p-6f, 0.0f, 0.0f, 0x1.32b716p-40f, 0x1.5c9578p-120f, 0.0f, 0.0f,
     0x1.45a9p-16f, 0.0f, 0.0f, 0.0f, 0x1.739c42p-29f, 0.0f, 0x1.5db7b6p-100f,
     0x1.9ad096p-85f, 0x1.1e78fcp-10f, 0x1.1b9b32p-44f, 0.0f, 0.0f, 0x1.d48826p-79f,
     0x1.a870a8p-35f, 0x1.855512p-76f, 0.0f, 0x1.fe3868p-59f, 0x1.7d8396p-40f, 0.0f,
     0x1.07dd32p-50f, 0.0f, 0x1.c92636p-110f, 0x1.a49842p-8f, 0x1.10953p-5f, 0.0f,
     0x1.7f55cap-94f, 0.0f, 0.0f, 0.0f, 0x1.57072ap-55f, 0.0f, 0x1.e0d736p-49f, 0.0f,
     0.0f, 0x1.90999p-98f, 0x1.ed9caap-112f, 0x1.aba174p-43f, 0.0f, 0.0f, 0.0f,
     0x1.17414p-99f, 0x1.50a20ap-4f, 0x1.38fa16p-85f, 0x1.07704ep-63f, 0.0f,
     0x1.36dbc8p-77f, 0.0f, 0.0f, 0x1.b04e1ep-8f, 0.0f, 0x1.68ef04p-67f, 0.0f,
     0x1.b9a06ep-72f, 0x1.911062p-36f, 0.0f, 0x1.3e48bep-32f, 0.0f, 0x1.868bfep-59f,
     0x1.95c16ep-76f, 0.0f, 0x1.2e5ec4p-37f, 0x1.e23f96p-11f, 0.0f, 0x1p0f, 0.0f,
     0x1.ea74a4p-116f, 0.0f, 0x1.780cdcp-98f, 0.0f, 0.0f, 0.0f, 0x1.768496p-18f,
     0x1.8ef452p-33f, 0x1.3f3dbp-5f, 0.0f, 0x1.576d68p-71f, 0x1.bcf78p-86f, 0.0f,
     0.0f, 0.0f, 0x1.724adap-40f, 0.0f, 0.0f, 0.0f, 0x1.dc3f84p-34f, 0.0f, 0.0f, 0.0f,
     0x1.bcd67ap-81f, 0x1.b4becep-40f, 0.0f, 0.0f, 0x1.d631fcp-81f, 0.0f, 0.0f, 0.0f,
     0x1.2bf13ap-32f, 0x1.a4afp-45f, 0x1.27e25p-56f, 0.0f, 0.0f, 0x1.8d4f1cp-17f,
     0.0f, 0x1.ff238ep-72f, 0x1.526036p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7bb4eap-109f, 0x1.a355eap-47f, 0.0f, 0x1.33579cp-107f, 0x1.ef061ep-114f,
     0.0f, 0.0f, 0x1.cbc55ap-94f, 0x1.266a26p-31f, 0x1.2056cp-6f, 0.0f,
     0x1.c30192p-3f, 0x1.5ff5e8p-65f, 0x1.13dc38p-94f, 0x1.0bd25ep-126f, 0.0f,
     0x1.3d41bep-2f, 0x1.c67348p-20f, 0x1.109404p-110f, 0.0f, 0.0f, 0x1.3d35a4p-44f,
     0.0f, 0x1.2bb824p-4f, 0x1.3547acp-120f, 0.0f, 0x1.c8825ep-88f, 0.0f, 0.0f, 0.0f,
     0x1.4a6a3ap-99f, 0x1.311c04p-105f, 0x1.db395ep-57f, 0x1.0974aep-121f,
     0x1.d7231cp-50f, 0x1.79ac42p-111f, 0x1.a32f46p-62f, 0.0f, 0x1.2ccb4ep-115f,
     0x1.5771dcp-55f, 0.0f, 0.0f, 0x1.7eb7cap-123f, 0.0f, 0.0f, 0.0f, 0x1.67bb8p-8f,
     0.0f, 0.0f, 0.0f, 0x1.25dbap-11f, 0x1.cf13ecp-121f, 0.0f, 0.0f, 0x1.ddf4a4p-60f,
     0x1.4302cap-32f, 0.0f, 0.0f, 0x1.917a9p-66f, 0x1.8e4552p-17f, 0.0f,
     0x1.9ab922p-122f, 0x1.d4d0bcp-9f, 0.0f, 0x1.690076p-122f, 0x1.ae9146p-105f,
     0x1.553b7p-77f, 0.0f, 0.0f, 0x1.4f9554p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5edfp-52f, 0x1.51b8a4p-27f, 0x1.36bc36p-92f, 0.0f, 0x1.125736p-80f,
     0x1.c9dfcp-6f, 0.0f, 0x1.940dacp-72f, 0x1.6dbbd2p-51f, 0x1.88a32ep-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.326f46p-13f, 0.0f, 0.0f, 0x1.c01686p-91f, 0x1.e70e3ap-83f,
     0x1.846adp-45f, 0.0f, 0x1.0f398cp-85f, 0.0f, 0.0f, 0x1.5aedf2p-48f,
     0x1.a2b3acp-6f, 0.0f, 0.0f, 0x1.0c4f96p-60f, 0.0f, 0x1.61d464p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0ba406p-98f, 0.0f, 0x1.cd652ep-32f, 0x1.704edp-96f,
     0x1.663214p-60f, 0.0f, 0x1.ac58aep-49f, 0x1.cec85cp-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3eff0cp-32f, 0x1.fecd14p-125f, 0x1.740e66p-69f, 0x1.f6912p-64f, 0.0f,
     0x1.92c9bp-95f, 0x1.f1bc5cp-122f, 0.0f, 0.0f, 0x1.90c82cp-84f, 0x1.ac9ep-4f,
     0x1.f83c14p-86f, 0x1.7b1746p-19f, 0x1.7e3648p-33f, 0x1.06b60cp-78f, 0.0f, 0.0f,
     0x1.839a92p-94f, 0x1.e90326p-73f, 0.0f, 0x1.103ea8p-119f, 0x1.6618c6p-18f, 0.0f,
     0x1.784f1cp-43f, 0x1.10e1eap-113f, 0.0f, 0x1.4f3274p-28f, 0x1.5da564p-24f,
     0x1.9df51ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e6d12p-91f, 0.0f,
     0x1.c4ad28p-59f, 0x1.5a4456p-92f, 0x1.52caacp-96f, 0.0f, 0x1.dd7caep-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.091596p-119f, 0x1.ac22b4p-79f, 0x1.9826e2p-24f,
     0x1.8f01eap-120f, 0.0f, 0x1.32ede6p-36f, 0.0f, 0x1.03bc7cp-78f, 0x1.a5df24p-106f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a39d92p-58f, 0.0f, 0x1.d607b6p-84f, 0x1.d60372p-50f,
     0.0f, 0x1.7ccf54p-51f, 0.0f, 0.0f, 0x1.7f5846p-37f, 0.0f, 0x1.6ba078p-39f,
     0x1.7c825ep-12f, 0.0f, 0x1.e86e12p-64f, 0.0f, 0x1.a9328p-96f, 0.0f,
     0x1.58db44p-103f, 0.0f, 0x1.90d2eap-86f, 0x1.a423b2p-92f, 0.0f, 0.0f,
     0x1.110d44p-59f, 0x1.3ccaecp-67f, 0x1.ec4b1cp-80f, 0.0f, 0x1.b64d68p-8f,
     0x1.04f5f2p-121f, 0.0f, 0x1.b394e2p-6f, 0.0f, 0.0f, 0x1.1f1534p-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d4cd58p-22f, 0x1.72f916p-83f, 0x1.64388p-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3af7bp-85f, 0x1.b348ccp-68f, 0.0f, 0.0f, 0.0f,
     0x1.236e7ap-95f, 0.0f, 0.0f, 0.0f, 0x1.eaa766p-102f, 0.0f, 0x1.261098p-47f,
     0x1.74d4bcp-87f, 0.0f, 0x1.445cfcp-5f, 0.0f, 0.0f, 0.0f, 0x1.ec46cep-30f,
     0x1.770c96p-74f, 0.0f, 0x1.d8c366p-105f, 0.0f, 0.0f, 0x1.41545cp-60f,
     0x1.57c7fap-112f, 0.0f, 0x1.c72496p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08a0b4p-51f,
     0x1.cebff8p-4f, 0x1.81d586p-96f, 0.0f, 0x1.a256cep-55f, 0x1.343fbp-80f, 0.0f,
     0x1.3d4b6ep-124f, 0x1.7cb44cp-49f, 0.0f, 0.0f, 0x1.074ceep-22f, 0.0f, 0.0f,
     0x1.cbc0bp-78f, 0.0f, 0x1.79148ap-22f, 0x1.8521cap-8f, 0.0f, 0x1.08df46p-125f,
     0x1.7b230ap-30f, 0.0f, 0x1.b220aep-95f, 0.0f, 0x1.ab86b4p-40f, 0.0f,
     0x1.866e64p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.84e8e6p-123f, 0.0f, 0.0f,
     0x1.1b4de4p-113f, 0x1.61c48ep-77f, 0x1.0128eap-95f, 0x1.b4f1aap-83f,
     0x1.b6a102p-70f, 0.0f, 0x1.cf9762p-44f, 0.0f, 0.0f, 0.0f, 0x1.6856cap-85f,
     0x1.b144d2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3158c2p-33f, 0.0f, 0.0f,
     0x1.464d98p-9f, 0.0f, 0x1.d6acaap-53f, 0x1.df5a94p-71f, 0x1.94b4c2p-19f,
     0x1.d54198p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8749eap-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f44af2p-109f, 0x1.a51044p-47f, 0.0f, 0x1.5aa536p-7f, 0.0f,
     0x1.509a76p-68f, 0.0f, 0.0f, 0.0f, 0x1.bc97e8p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a8ea4p-52f, 0x1.6815fcp-120f, 0.0f, 0x1.eed198p-37f, 0x1.cc09b6p-62f,
     0x1.d31712p-125f, 0.0f, 0x1.54939p-54f, 0.0f, 0.0f, 0x1.7ba856p-2f,
     0x1.b2df24p-66f, 0x1.81241ep-106f, 0x1.892004p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ceca46p-123f, 0.0f, 0x1.d1ac3cp-125f, 0x1.44dc04p-33f, 0.0f,
     0x1.fce31cp-117f, 0x1.297f74p-30f, 0.0f, 0x1.8580b4p-33f, 0x1.514014p-24f, 0.0f,
     0.0f, 0.0f, 0x1.484de6p-18f, 0x1.7bfe3p-41f, 0.0f, 0.0f, 0x1.fe18b8p-86f,
     0x1.20d1bap-97f, 0.0f, 0x1.ced956p-34f, 0x1.5b2336p-54f, 0x1.9b6106p-50f,
     0x1.43e70ep-54f, 0x1.ccfb66p-19f, 0x1.71264p-102f, 0.0f, 0x1.53f71cp-4f,
     0x1.7b4376p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc3946p-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.24be9p-96f, 0x1.13f182p-2f, 0x1.915c64p-84f, 0x1.5188c4p-1f, 0.0f,
     0x1.e900dp-33f, 0x1.53fe3cp-29f, 0.0f, 0x1.5d5d5ep-50f, 0.0f, 0x1.1e0dd8p-59f,
     0x1.5241fcp-64f, 0x1.b282cep-54f, 0.0f, 0x1.1cf234p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54d5eap-112f, 0x1.6d57bcp-73f, 0x1.a86d76p-88f,
     0x1.aa4878p-114f, 0x1.1f00fap-45f, 0x1.2edc14p-118f, 0x1.aa6232p-18f, 0.0f,
     0x1.90ab6cp-67f, 0x1.a828eep-39f, 0.0f, 0x1.43567ep-1f, 0x1.117024p-92f,
     0x1.eaabd6p-12f, 0x1.903cacp-26f, 0.0f, 0.0f, 0x1.d39b98p-85f, 0x1.2221acp-43f,
     0x1.53ffc8p-78f, 0x1.33584cp-75f, 0x1.09f664p-41f, 0.0f, 0.0f, 0.0f,
     0x1.53fb98p-55f, 0.0f, 0x1.733e86p-87f, 0.0f, 0x1.416334p-72f, 0.0f,
     0x1.bd1fecp-93f, 0.0f, 0.0f, 0x1.adc8dap-15f, 0x1.40184ep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cc432p-17f
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
            tmp1 = Sleef_sqrtf1_u35purecfma(tmp0);
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
    printf("Sleef_sqrtf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtf1_u35purecfma bench acc %a\n", global_bench_acc);
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
