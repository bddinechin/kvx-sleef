/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastsinf1_u3500purecfma.c --function \
 *     Sleef_finz_fastsinf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.3dbd98p-112f, 0x1.715f28p-126f, 0x1.1860d2p-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a28d0ep-36f, 0.0f, 0.0f, 0x1.c9d418p-13f, 0.0f, 0.0f,
     0x1.71ef6ap-123f, 0x1.c0a95cp-117f, 0x1.e7f788p-121f, 0.0f, 0x1.da6b5ep-113f,
     0x1.7a4afcp-23f, 0x1.e39f4cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fee3e4p-82f,
     0x1.852a4cp-48f, 0.0f, 0x1.20a4cap-68f, 0.0f, 0x1.00a81p-21f, 0.0f,
     0x1.b04286p-59f, 0x1.0be8c6p-43f, 0x1.1e1c5ep-47f, 0.0f, 0x1.507eaep-31f,
     0x1.08344ap-86f, 0.0f, 0x1.5beb44p-118f, 0x1.d6a044p-65f, 0.0f, 0.0f,
     0x1.07f698p-11f, 0x1.a34332p-77f, 0.0f, 0.0f, 0x1.b6de24p-47f, 0x1.fcb558p-40f,
     0.0f, 0.0f, 0.0f, 0x1.503a3ap-18f, 0.0f, 0.0f, 0x1.402e28p-30f, 0x1.f173aep-83f,
     0x1.ce395ep-107f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.782b34p-77f, 0.0f, 0.0f, 0.0f,
     0x1.f6451cp-11f, 0x1.c1d584p-23f, 0.0f, 0x1.92c17ep-115f, 0.0f, 0x1.044306p-81f,
     0.0f, 0x1.ce3dbep-14f, 0.0f, 0.0f, 0.0f, 0x1.b46df8p-18f, 0.0f, 0x1.0e8d7ap-100f,
     0.0f, 0x1.092278p-116f, 0x1.8e8004p-3f, 0x1.d30df6p-106f, 0x1.e67becp-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9a3dcp-88f, 0.0f, 0.0f, 0x1.e702bap-35f,
     0x1.8e865ap-59f, 0x1.580c6p-64f, 0.0f, 0x1.032e74p-53f, 0.0f, 0x1.46ca5ep-110f,
     0.0f, 0x1p0f, 0x1.a4446p-17f, 0.0f, 0x1.d2bf24p-42f, 0x1.880ceep-27f, 0.0f,
     0x1.74ab7ep-112f, 0x1.432756p-66f, 0.0f, 0x1.a2afacp-58f, 0.0f, 0.0f,
     0x1.ae1f7ap-66f, 0.0f, 0x1.f23ffap-51f, 0x1.5c9ed8p-11f, 0x1.b3c00ap-84f, 0.0f,
     0.0f, 0x1.939efap-23f, 0x1.e59926p-21f, 0.0f, 0x1.b24c54p-10f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.456f1p-33f, 0.0f, 0.0f, 0x1.4cbef4p-104f, 0x1.431dcp-26f, 0.0f,
     0x1.1365d4p-98f, 0.0f, 0x1.cc803p-92f, 0x1.ef9f4cp-84f, 0.0f, 0.0f, 0.0f,
     0x1.e348b8p-87f, 0x1.b50756p-85f, 0x1.2ac062p-52f, 0.0f, 0.0f, 0x1.b0a4fep-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04a126p-53f, 0.0f,
     0.0f, 0x1.630cf6p-42f, 0.0f, 0x1.0fa5a6p-76f, 0.0f, 0.0f, 0.0f, 0x1.9f6e2ep-86f,
     0x1.856ee6p-41f, 0x1.1c722ap-118f, 0.0f, 0x1.509accp-39f, 0.0f, 0.0f,
     0x1.28ea4p-68f, 0x1.505aa6p-116f, 0x1.26cf04p-52f, 0x1.1f1712p-57f,
     0x1.33faecp-77f, 0x1.402a3ap-39f, 0x1.c40ac4p-24f, 0x1.f302ap-17f, 0.0f,
     0x1.8b5c1p-51f, 0.0f, 0x1.bed84p-54f, 0x1.978acep-118f, 0x1.125ca4p-78f,
     0x1.121f28p-112f, 0x1.0c806cp-73f, 0x1.c4ed4ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8df65ap-74f, 0x1.b33de6p-107f, 0x1.99d34p-5f, 0.0f, 0.0f, 0.0f,
     0x1.0a6398p-57f, 0.0f, 0x1.97ed4ap-37f, 0.0f, 0x1.3ce278p-122f, 0x1.a6087ap-62f,
     0.0f, 0x1.3cdc3ap-85f, 0x1.cb19b2p-6f, 0x1.970b56p-19f, 0.0f, 0x1.d4ead8p-37f,
     0.0f, 0.0f, 0x1.e129f6p-121f, 0.0f, 0x1.6db1a4p-26f, 0x1.160e56p-116f, 0.0f,
     0.0f, 0x1.134312p-35f, 0.0f, 0x1.736256p-2f, 0x1.f9acb4p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.934626p-100f, 0.0f, 0.0f, 0x1.200732p-94f, 0.0f, 0.0f,
     0x1.89f01ep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.076ebp-60f, 0.0f, 0x1.24119ap-111f,
     0.0f, 0.0f, 0x1.4db1a2p-112f, 0.0f, 0.0f, 0.0f, 0x1.c5b0bp-121f, 0.0f,
     0x1.e3edaep-29f, 0.0f, 0.0f, 0x1.c1cc6ap-11f, 0.0f, 0x1.e4b782p-94f, 0.0f,
     0x1.7a0cap-48f, 0x1.17cf4p-12f, 0x1.60856cp-9f, 0.0f, 0x1.3e4c6ep-55f,
     0x1.478ac8p-97f, 0x1.f582aap-116f, 0.0f, 0.0f, 0.0f, 0x1.7fbff8p-24f, 0.0f, 0.0f,
     0x1.d3216ep-108f, 0x1.137c7p-97f, 0.0f, 0.0f, 0x1.ec2e88p-96f, 0.0f, 0.0f,
     0x1.b261b6p-30f, 0.0f, 0x1.63605ap-86f, 0x1.67146p-46f, 0x1.126b9p-48f,
     0x1.53b322p-49f, 0x1.0ecc84p-118f, 0.0f, 0x1.f77782p-40f, 0.0f, 0x1.d1b412p-73f,
     0.0f, 0x1.4def8cp-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4b0128p-106f, 0x1.012978p-100f, 0x1.f5d16ep-25f, 0.0f, 0.0f,
     0x1.963f14p-118f, 0x1.5bb762p-83f, 0x1.c61bd4p-45f, 0x1.0744dcp-102f, 0.0f,
     0x1.75c34p-21f, 0.0f, 0.0f, 0x1.174838p-76f, 0x1.decfeap-55f, 0x1.fb7bf2p-33f,
     0.0f, 0x1.bd1806p-120f, 0x1.5da42ep-9f, 0.0f, 0.0f, 0x1.8e85cp-43f, 0.0f, 0.0f,
     0x1.04dadp-100f, 0.0f, 0.0f, 0.0f, 0x1.b1e84ep-17f, 0x1.643b94p-75f,
     0x1.e419a4p-110f, 0x1.31d9fp-62f, 0.0f, 0x1.eb9e7ep-99f, 0.0f, 0x1.7d321cp-123f,
     0.0f, 0x1.f3b9d6p-19f, 0.0f, 0x1.34ef38p-126f, 0x1.f5d908p-74f, 0x1.5d7e76p-123f,
     0.0f, 0.0f, 0.0f, 0x1.4d5084p-90f, 0x1.4c00bap-53f, 0x1.e0730ep-14f, 0.0f, 0.0f,
     0x1.25af58p-33f, 0x1.2bf3fp-43f, 0x1.efcfap-29f, 0.0f, 0.0f, 0x1.7f6fd4p-77f,
     0.0f, 0x1.a940b4p-113f, 0.0f, 0.0f, 0.0f, 0x1.06093p-66f, 0x1.76af34p-56f, 0.0f,
     0.0f, 0.0f, 0x1.5990ep-32f, 0x1.0f208p-23f, 0x1.77044cp-53f, 0x1.b01a3ep-66f,
     0.0f, 0x1.b2e6bp-126f, 0x1.156004p-66f, 0x1.7afeb8p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.35de08p-33f, 0x1.ceb822p-119f, 0.0f, 0x1.cb5acep-96f,
     0.0f, 0.0f, 0x1.52dfc2p-115f, 0x1.14deccp-5f, 0x1.f6468ap-67f, 0x1.c208bap-118f,
     0x1.914982p-122f, 0.0f, 0.0f, 0.0f, 0x1.680a8ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8e33ep-30f, 0.0f, 0x1.07aae2p-109f, 0x1.7655d4p-121f, 0.0f, 0x1.48e6ep-44f,
     0x1.f9f82p-114f, 0.0f, 0x1.9fec92p-103f, 0x1.ee72bap-82f, 0.0f, 0.0f,
     0x1.da5b1ep-92f, 0.0f, 0x1.8bff6cp-100f, 0.0f, 0x1.908dd6p-70f, 0.0f,
     0x1.96818ep-14f, 0.0f, 0x1.2171cap-23f, 0x1.ddd334p-33f, 0x1.6c294p-109f, 0.0f,
     0.0f, 0x1.e80b32p-29f, 0x1.da49e4p-93f, 0.0f, 0x1.5b5af4p-111f, 0x1.cb9f58p-96f,
     0x1.f38de8p-29f, 0.0f, 0.0f, 0.0f, 0x1.4f109ap-7f, 0.0f, 0.0f, 0x1.00f394p-103f,
     0x1.a7d64cp-54f, 0.0f, 0.0f, 0x1.e481b2p-1f, 0x1.ceec8ap-51f, 0x1.081408p-7f,
     0x1.cc9768p-84f, 0x1.2f7c92p-42f, 0.0f, 0x1.793882p-76f, 0x1.5f913p-85f, 0.0f,
     0.0f, 0x1.dde17cp-98f, 0.0f, 0.0f, 0.0f, 0x1.ea4a0cp-24f, 0x1.4de368p-31f, 0.0f,
     0x1.62feaep-91f, 0x1.88a248p-75f, 0.0f, 0x1.0147a4p-39f, 0.0f, 0.0f,
     0x1.b2be42p-26f, 0x1.2156cep-79f, 0x1.504d24p-10f, 0.0f, 0x1.d3ff7ap-45f,
     0x1.ef8bcp-47f, 0.0f, 0x1.348b84p-46f, 0x1.d68794p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7cdb8p-8f, 0.0f, 0x1.e69038p-55f, 0x1.de312cp-34f, 0.0f, 0.0f, 0.0f,
     0x1.e0991ap-3f, 0.0f, 0x1.4e00a8p-25f, 0.0f, 0x1.f82286p-65f, 0.0f, 0.0f,
     0x1.c64ee2p-72f, 0.0f, 0x1.6d5c1cp-103f, 0x1.b65ff2p-55f, 0x1.09c4e6p-24f, 0.0f,
     0x1.455d7ep-125f, 0x1.5542eep-59f, 0x1.8e2bfap-25f, 0.0f, 0x1.8ac0b2p-102f,
     0x1.629c82p-54f, 0.0f, 0.0f, 0x1.7e4cfp-108f, 0x1.9b6c96p-124f, 0.0f,
     0x1.df68ep-84f, 0.0f, 0x1.fb3474p-81f, 0x1.7cedbap-63f, 0x1.6d74c2p-95f,
     0x1.56f0e6p-112f, 0.0f, 0x1.a6ee96p-3f, 0.0f, 0.0f, 0x1.5c15e6p-95f,
     0x1.197f08p-8f, 0.0f, 0.0f, 0.0f, 0x1.fc72d6p-37f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.b00a3p-34f, 0.0f, 0x1.2476c2p-11f, 0x1.e3263p-55f, 0x1.1ad54ep-27f,
     0x1.d23872p-56f, 0x1.035872p-100f, 0.0f, 0.0f, 0.0f, 0x1.52822ap-20f, 0.0f, 0.0f,
     0x1.7b9bp-30f, 0.0f, 0x1.da4f22p-125f, 0x1.e77bfp-3f, 0.0f, 0.0f, 0.0f,
     0x1.175ap-1f, 0x1.57653ep-61f, 0.0f, 0.0f, 0x1.a9909ap-110f, 0x1.4ac1eap-63f,
     0.0f, 0x1.26dc9ep-70f, 0.0f, 0.0f, 0.0f, 0x1.6456ccp-95f, 0x1.782d02p-94f,
     0x1.87cbep-119f, 0x1.7f6c68p-48f, 0x1.d5c776p-80f, 0x1.25d962p-64f, 0.0f, 0.0f,
     0x1.fa31ecp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f5508ep-48f, 0x1.2dbf04p-121f, 0.0f,
     0x1.64f8bap-114f, 0x1.7c64a4p-91f, 0x1.3e84e2p-116f, 0x1.fe13a6p-16f, 0.0f,
     0x1.29a39ap-122f, 0x1.2e059cp-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1900bep-93f,
     0.0f, 0.0f, 0x1.545b38p-78f, 0x1.fcb302p-74f, 0x1.29374ep-38f, 0.0f,
     0x1.53c826p-76f, 0.0f, 0x1.a20b68p-105f, 0.0f, 0.0f, 0x1.1dfb68p-117f, 0.0f,
     0x1.d66ca6p-4f, 0x1.5dd6b2p-104f, 0.0f, 0x1.ce63fep-10f, 0x1.fd3fa6p-110f,
     0x1.83201cp-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35354ap-22f, 0x1.40e558p-8f,
     0x1.cac0bep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef6312p-27f, 0.0f, 0.0f,
     0x1.a75eaep-76f, 0.0f, 0x1.7860d2p-114f, 0x1.6fcdd2p-24f, 0x1.ecc0b2p-101f, 0.0f,
     0.0f, 0.0f, 0x1.128b5cp-16f, 0.0f, 0.0f, 0x1.357c08p-124f, 0.0f, 0x1.49ce84p-69f,
     0.0f, 0.0f, 0.0f, 0x1.98534p-32f, 0.0f, 0x1.398fcp-77f, 0.0f, 0.0f,
     0x1.05243cp-36f, 0x1.e8c962p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.26bb2cp-4f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9cc15p-99f, 0.0f, 0.0f, 0x1.d43b32p-119f, 0x1.d226dep-124f,
     0.0f, 0x1.04b1b8p-45f, 0x1.4cc584p-47f, 0.0f, 0.0f, 0x1.a0b25cp-29f, 0.0f, 0.0f,
     0.0f, 0x1.1f5dfap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41221ap-86f,
     0x1.6fbe6cp-24f, 0.0f, 0.0f, 0.0f, 0x1.5926eap-113f, 0x1.ddd7d6p-5f, 0.0f, 0.0f,
     0x1.16a75cp-50f, 0x1.1e401cp-26f, 0.0f, 0.0f, 0x1.7ce53ep-112f, 0.0f,
     0x1.c995aep-87f, 0.0f, 0x1.fd3b56p-121f, 0.0f, 0x1.f6cf32p-93f, 0x1.4e2872p-31f,
     0.0f, 0.0f, 0.0f, 0x1.42eb7ep-71f, 0x1.4838bap-34f, 0x1.6b27fp-71f, 0x1p0f, 0.0f,
     0x1.a6c116p-1f, 0.0f, 0x1.06248cp-79f, 0.0f, 0x1.d65318p-86f, 0x1.89077ap-83f,
     0.0f, 0.0f, 0.0f, 0x1.ac5c6ap-98f, 0.0f, 0.0f, 0x1.d6a8e8p-113f, 0x1.a39332p-92f,
     0.0f, 0.0f, 0x1.ff9dep-62f, 0x1.48b18cp-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ae998p-123f, 0x1.206faep-53f, 0x1.c1423p-56f, 0x1.82c806p-95f,
     0x1.508c02p-75f, 0.0f, 0x1.cab71cp-110f, 0x1.671be6p-111f, 0.0f, 0x1.a49dbp-32f,
     0.0f, 0x1.fc2012p-81f, 0x1.9f7962p-92f, 0x1.057dd2p-28f, 0x1.bea60cp-19f,
     0x1.eeea34p-8f, 0.0f, 0.0f, 0x1.a55462p-49f, 0x1.1b4032p-64f, 0x1.e03c4ep-115f,
     0.0f, 0x1.f59014p-107f, 0x1.58006ap-11f, 0x1.6f6aacp-61f, 0x1.eeb34ep-54f,
     0x1.60a18ap-102f, 0.0f, 0.0f, 0x1.6d5bd4p-78f, 0x1p0f, 0.0f, 0.0f,
     0x1.7b6e44p-30f, 0.0f, 0.0f, 0.0f, 0x1.fd4f3p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90bd8p-88f, 0.0f, 0x1.88915cp-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16ffb6p-1f, 0x1.ecca8p-1f, 0.0f, 0x1.553742p-37f, 0.0f, 0.0f,
     0x1.2db0c2p-35f, 0x1.61a33cp-17f, 0.0f, 0x1.b8303p-65f, 0x1.1b659ap-17f, 0.0f,
     0x1.f3791cp-20f, 0x1.0b8decp-81f, 0x1.04179cp-58f, 0x1.be14e6p-82f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.075accp-60f, 0x1.5bb3c6p-107f, 0.0f, 0x1.84bde8p-91f,
     0.0f, 0x1.96be62p-85f, 0x1p0f, 0.0f, 0x1.567b58p-8f, 0.0f, 0x1.c91eep-78f,
     0x1.b88552p-19f, 0x1.fcd0f8p-97f, 0x1.544306p-98f, 0.0f, 0.0f, 0x1.f1b9dp-73f,
     0.0f, 0.0f, 0x1.278eep-80f, 0.0f, 0.0f, 0x1.888934p-49f, 0.0f, 0x1.1a2c0cp-46f,
     0.0f, 0x1.942bfcp-30f, 0.0f, 0.0f, 0x1.d9693ap-97f, 0.0f, 0x1.837ed6p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.716632p-99f, 0x1.54b60cp-53f, 0.0f, 0x1.46a096p-75f,
     0x1.30649ep-15f, 0x1.e6d9a8p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ccb24p-126f,
     0x1.024ed6p-81f, 0x1.1b23ap-122f, 0.0f, 0x1.0bfc78p-102f, 0x1.d153dap-63f, 0.0f,
     0.0f, 0.0f, 0x1.3dba04p-95f, 0x1.20e31cp-27f, 0x1.04ad2cp-116f, 0x1.f3c908p-21f,
     0x1.e1d2aep-32f, 0x1.9aecb8p-62f, 0x1.dc9426p-76f, 0.0f, 0x1.6c126p-4f, 0.0f,
     0x1.ca173p-29f, 0x1.8821f4p-56f, 0x1.d1ef52p-117f, 0x1.8a09d6p-100f, 0.0f, 0.0f,
     0x1.8189f2p-98f, 0x1.bf38cep-8f, 0.0f, 0x1.9832fcp-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.79354p-9f, 0.0f, 0.0f, 0x1.ca4958p-87f, 0.0f, 0.0f, 0x1.43423cp-117f, 0.0f,
     0.0f, 0x1.8160b4p-18f, 0x1.689caep-1f, 0.0f, 0.0f, 0.0f, 0x1.7f78a8p-20f,
     0x1.0551p-108f, 0.0f, 0x1.843c3cp-55f, 0.0f, 0x1.b0ec12p-24f, 0.0f,
     0x1.ac8ffep-63f, 0.0f, 0.0f, 0.0f, 0x1.9c1b9ap-87f, 0x1.2059a8p-61f, 0.0f, 0.0f,
     0x1.f44112p-72f, 0.0f, 0.0f, 0.0f, 0x1.062da6p-28f, 0x1.38b98ap-15f, 0.0f,
     0x1.86116ep-28f, 0.0f, 0.0f, 0.0f, 0x1.9d21fp-9f, 0x1.1ac3a2p-69f,
     0x1.8721c6p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6981cp-54f, 0.0f, 0.0f,
     0x1.c81f84p-35f, 0.0f, 0x1.b03f0cp-31f, 0.0f, 0x1.2f57b6p-82f, 0.0f, 0.0f, 0.0f,
     0x1.974528p-36f, 0x1.6089acp-58f, 0.0f, 0x1.6f285ep-92f, 0x1.d159fcp-16f,
     0x1.d4662cp-68f, 0x1.af91d4p-31f, 0.0f, 0x1.0cb8fap-85f, 0x1.441002p-118f,
     0x1.32ade2p-13f, 0x1.09740ep-92f, 0.0f, 0.0f, 0x1.28eea6p-58f, 0.0f,
     0x1.6d5b5cp-27f, 0.0f, 0.0f, 0.0f, 0x1.be6c58p-48f, 0x1.4bf084p-54f,
     0x1.e10998p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.546a66p-48f,
     0x1.e3c56p-7f, 0x1.83ffa4p-110f, 0x1.65ee26p-25f, 0x1.deef54p-96f,
     0x1.48b14ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1655d4p-3f, 0.0f,
     0x1.0d590ap-64f, 0.0f, 0x1.edbf62p-27f, 0.0f, 0x1.ef6dd8p-116f, 0.0f,
     0x1.e1d212p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c28928p-97f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd6de4p-22f, 0.0f, 0x1.1ebe86p-18f, 0.0f, 0x1.c902dcp-70f
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
            tmp1 = Sleef_finz_fastsinf1_u3500purecfma(tmp0);
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
    printf("Sleef_finz_fastsinf1_u3500purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastsinf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
