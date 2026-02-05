/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_hypotf4_u35avx2128.c --function Sleef_hypotf4_u35avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.baab14p-36f, 0x1.63aba6p-95f, 0x1.f9461ap-65f, 0x1.feca7ep-77f,
     0x1.9eae7ep-60f, 0.0f, 0.0f, 0.0f, 0x1.325378p-91f, 0x1.72e4bep-15f,
     0x1.53447ap-49f, 0x1.05d05p-28f, 0x1.5a7de2p-60f, 0x1.1fbad8p-123f,
     0x1.719812p-8f, 0.0f, 0x1.8d8262p-32f, 0.0f, 0.0f, 0x1.205562p-119f, 0.0f,
     0x1.56cc46p-4f, 0x1.f38ffap-67f, 0x1.790b8p-111f, 0.0f, 0x1.7a5b4cp-69f,
     0x1.277f8p-124f, 0x1.2b5fc8p-24f, 0.0f, 0x1.a64bd4p-50f, 0.0f, 0x1.3fe2cap-32f,
     0x1.5aed1p-56f, 0x1.daa794p-101f, 0x1.b5ed52p-54f, 0.0f, 0.0f, 0.0f,
     0x1.06d29ep-28f, 0.0f, 0.0f, 0x1.99f10ap-110f, 0.0f, 0x1.28cac2p-122f,
     0x1.7839p-84f, 0x1.7fa1cap-110f, 0.0f, 0.0f, 0x1.a9de34p-47f, 0x1.daf4dp-22f,
     0.0f, 0x1.8b5e8cp-75f, 0x1.5e9c2cp-55f, 0.0f, 0.0f, 0x1.2a7fc2p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f97496p-18f, 0x1.160026p-17f, 0x1.4a8016p-116f, 0x1.eb3bf8p-21f,
     0.0f, 0.0f, 0x1.cf6992p-59f, 0x1.171d3ap-23f, 0x1.7c3758p-63f, 0.0f, 0.0f, 0.0f,
     0x1.aa1966p-112f, 0x1.b1159cp-10f, 0x1.eb90fep-28f, 0x1.a69f88p-69f,
     0x1.238d44p-120f, 0.0f, 0x1.0fc4bp-126f, 0x1.0f9a8ap-4f, 0x1.9b8acp-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3bc588p-18f, 0x1.31bce2p-113f, 0.0f, 0.0f, 0.0f,
     0x1.6b619cp-7f, 0.0f, 0.0f, 0x1.eb90fap-9f, 0x1.464d86p-34f, 0x1.28a8a2p-31f,
     0x1.bfd002p-20f, 0x1.2e21dap-119f, 0x1.7b934ap-95f, 0x1.513146p-17f, 0.0f,
     0x1.d5e504p-23f, 0x1.e39b1ep-119f, 0x1.65bf7ap-27f, 0.0f, 0.0f, 0.0f,
     0x1.4fab08p-50f, 0.0f, 0x1.12795cp-93f, 0x1.af72bcp-62f, 0.0f, 0.0f,
     0x1.ca3c18p-25f, 0.0f, 0x1.ef43d6p-26f, 0x1.a66dfep-53f, 0.0f, 0.0f,
     0x1.d9f362p-2f, 0x1.1a6d6p-95f, 0x1.f077fap-98f, 0.0f, 0x1.e0e2e8p-27f, 0.0f,
     0.0f, 0x1.08a814p-95f, 0x1.6c387p-49f, 0.0f, 0x1.2e076cp-39f, 0.0f, 0.0f,
     0x1.e54856p-89f, 0.0f, 0x1.7cf506p-15f, 0x1.9c5af2p-16f, 0.0f, 0.0f, 0.0f,
     0x1.b50ad6p-114f, 0.0f, 0.0f, 0x1.0ff806p-49f, 0.0f, 0.0f, 0x1.203b34p-45f, 0.0f,
     0x1.1b6c1cp-109f, 0x1.aef578p-65f, 0.0f, 0x1.95bd18p-43f, 0.0f, 0x1.a99e86p-27f,
     0x1.249604p-1f, 0x1.1edc18p-34f, 0.0f, 0.0f, 0.0f, 0x1.5f4916p-71f, 0.0f,
     0x1.e35512p-113f, 0x1.6f7092p-22f, 0x1.cf703ep-94f, 0.0f, 0.0f, 0.0f,
     0x1.07c2d2p-85f, 0x1.bc016ep-120f, 0x1.55b272p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47f2cap-101f, 0x1.fb8e26p-62f, 0.0f, 0x1.5a22aep-90f,
     0x1.e8b90cp-4f, 0.0f, 0x1.dbbc76p-112f, 0.0f, 0x1.8eb8acp-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2a7f9cp-35f, 0x1.41553ep-81f, 0.0f, 0x1.bd08cep-83f, 0.0f,
     0x1.c19548p-55f, 0.0f, 0.0f, 0.0f, 0x1.9714bp-26f, 0x1.92a62cp-28f,
     0x1.e15a2p-8f, 0x1.12d954p-116f, 0.0f, 0.0f, 0x1p0f, 0x1.922784p-89f, 0.0f, 0.0f,
     0x1.1cd88p-119f, 0.0f, 0.0f, 0.0f, 0x1.50f2eap-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.446adep-118f, 0.0f, 0.0f, 0x1.90e9d6p-21f, 0x1.1a01eep-75f,
     0.0f, 0x1.399808p-22f, 0x1.3dd014p-42f, 0x1.1fca44p-93f, 0x1.e275bp-98f,
     0x1.28d818p-56f, 0x1.9c4cbp-86f, 0x1.520a4ap-57f, 0x1.d137f8p-31f,
     0x1.84cb9ep-88f, 0.0f, 0x1p0f, 0.0f, 0x1.21ce9p-7f, 0x1.adcb0ap-16f, 0.0f,
     0x1.e4d096p-108f, 0x1.77191p-117f, 0.0f, 0.0f, 0.0f, 0x1.f5842ap-101f, 0.0f,
     0.0f, 0x1.70a7f2p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cd54ep-82f,
     0x1.9d3f14p-6f, 0x1.f0c118p-17f, 0x1.e51eep-95f, 0.0f, 0.0f, 0.0f,
     0x1.29882ep-111f, 0x1.881e6ap-60f, 0x1.959e34p-107f, 0.0f, 0x1.5c338ap-101f,
     0.0f, 0x1.c971bcp-121f, 0x1.bff0bep-48f, 0x1.89a212p-20f, 0x1.9693fep-61f,
     0x1.11974ap-56f, 0x1.1f4acep-69f, 0.0f, 0x1.14a2f4p-42f, 0.0f, 0.0f,
     0x1.a50cd8p-59f, 0x1.81256cp-55f, 0x1.104356p-88f, 0.0f, 0x1.b8f80ep-74f, 0.0f,
     0x1.42a96cp-16f, 0.0f, 0.0f, 0x1.2628dep-48f, 0x1.eca706p-47f, 0.0f,
     0x1.3e5c5ep-34f, 0x1.53213p-72f, 0x1p0f, 0x1.a0cb7ep-42f, 0x1.13fbdep-44f, 0.0f,
     0.0f, 0.0f, 0x1.8c670ap-61f, 0x1.06f6bp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4188bp-49f, 0.0f, 0x1.6d11bp-95f, 0x1.459584p-30f, 0x1.aeeb94p-82f, 0.0f,
     0.0f, 0x1.05346ap-17f, 0.0f, 0x1.d14c3cp-64f, 0x1.3284ccp-45f, 0.0f, 0.0f, 0.0f,
     0x1.516258p-105f, 0x1.bc484p-42f, 0x1.6e5458p-114f, 0x1.150062p-29f,
     0x1.d728f4p-103f, 0x1.f6c156p-60f, 0.0f, 0x1.98fd6ep-103f, 0.0f, 0.0f,
     0x1.a16c62p-14f, 0x1p0f, 0x1.c217b6p-126f, 0.0f, 0x1.b39cf8p-68f,
     0x1.3187d6p-85f, 0.0f, 0x1.2d0a2ep-11f, 0x1.caa91ep-4f, 0x1.d1bb64p-72f, 0.0f,
     0.0f, 0x1.06ebd2p-17f, 0.0f, 0x1.53fc3cp-103f, 0x1.c3b2d8p-20f, 0x1.6291a8p-49f,
     0x1.86745ap-112f, 0.0f, 0x1.77df5p-78f, 0.0f, 0.0f, 0x1.73f87ap-30f,
     0x1.b8e7e4p-90f, 0x1.dcb854p-123f, 0x1.c338aap-99f, 0x1.7e30d2p-106f, 0.0f,
     0x1.7701p-4f, 0x1.f1e22ap-71f, 0.0f, 0x1.3edadcp-35f, 0x1.96ff1p-85f, 0.0f, 0.0f,
     0x1.f95ad2p-83f, 0x1.ba280ep-108f, 0x1.5403fap-101f, 0x1.80acb8p-13f, 0.0f,
     0x1.94057ep-34f, 0x1.713072p-25f, 0.0f, 0.0f, 0.0f, 0x1.38b044p-121f,
     0x1.feb9c4p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bbc1ep-65f, 0.0f,
     0x1.c0b544p-117f, 0x1.26d38ap-49f, 0.0f, 0x1.cd86b2p-116f, 0.0f, 0x1.9919b2p-24f,
     0.0f, 0x1.e38a0ap-75f, 0.0f, 0.0f, 0x1.c5014ap-30f, 0x1.828c68p-105f, 0.0f, 0.0f,
     0x1.bb7978p-97f, 0x1.54f8c8p-55f, 0.0f, 0x1.9b3cdcp-21f, 0x1.f48308p-101f,
     0x1.afa948p-23f, 0.0f, 0.0f, 0x1.7be72cp-104f, 0.0f, 0x1.3cf094p-64f,
     0x1.ab4298p-100f, 0x1.38f4cap-97f, 0.0f, 0x1.7f73aap-83f, 0.0f, 0x1.527422p-52f,
     0.0f, 0.0f, 0x1.d6a8ccp-4f, 0x1.25815cp-12f, 0x1.9199dep-109f, 0.0f,
     0x1.818a5p-54f, 0x1.517c1cp-36f, 0x1.a20636p-117f, 0.0f, 0.0f, 0x1.297cd8p-64f,
     0.0f, 0x1.d76f88p-113f, 0.0f, 0.0f, 0x1.200c86p-18f, 0x1.5db33ep-36f, 0.0f,
     0x1.17e416p-75f, 0x1.b8aea6p-101f, 0x1.13cffap-71f, 0x1.9dcc14p-120f, 0.0f, 0.0f,
     0.0f, 0x1.d2de94p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46f5dep-32f, 0x1.e4fd3p-36f,
     0x1.de552p-7f, 0x1.32a336p-124f, 0.0f, 0.0f, 0x1.7f0496p-38f, 0x1.5c38d2p-18f,
     0x1.86bf32p-42f, 0x1.0b6aa6p-10f, 0x1.a929cp-88f, 0.0f, 0x1.a38798p-81f,
     0x1.59e032p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1478dcp-56f, 0x1.4f3ccep-122f, 0.0f,
     0.0f, 0x1.faa89ap-53f, 0.0f, 0x1.32afc2p-95f, 0x1.5ab8acp-39f, 0x1.af73b2p-17f,
     0.0f, 0x1.4ead18p-78f, 0.0f, 0.0f, 0x1.d403dep-23f, 0.0f, 0x1.73a76ep-55f,
     0x1.6fb166p-48f, 0x1.050896p-69f, 0x1.cc4b6ep-25f, 0.0f, 0x1.bc417ep-48f, 0.0f,
     0.0f, 0x1.1c0648p-51f, 0x1.1a59dep-88f, 0x1.9f8256p-86f, 0.0f, 0x1.9ec6fcp-86f,
     0x1.115a32p-119f, 0x1.dee3fep-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c1f16p-35f, 0.0f,
     0x1.3de1f4p-25f, 0x1.88224cp-57f, 0x1.d42e1cp-119f, 0.0f, 0x1.77acdep-117f,
     0x1.124abcp-125f, 0x1.baed36p-71f, 0.0f, 0x1.ba8c02p-111f, 0.0f,
     0x1.814f56p-108f, 0.0f, 0.0f, 0x1.56df9cp-81f, 0.0f, 0x1.34e838p-61f,
     0x1.81ac98p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce3a3p-5f, 0.0f,
     0x1.81c392p-29f, 0x1.2a36ap-73f, 0x1.38a168p-27f, 0.0f, 0x1.6f1f64p-89f, 0.0f,
     0.0f, 0x1.422dep-20f, 0x1.5f1bc4p-39f, 0x1p0f, 0x1.cb045p-81f, 0.0f,
     0x1.1ec956p-31f, 0x1.c61eb4p-58f, 0.0f, 0x1.5b9528p-112f, 0x1.136742p-89f,
     0x1.97cccap-1f, 0x1.f65ab8p-110f, 0.0f, 0x1.48e046p-18f, 0x1.615eaap-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7df514p-16f, 0.0f, 0x1.dd9054p-72f, 0x1.871d8ep-114f, 0.0f,
     0.0f, 0x1.7e1584p-120f, 0.0f, 0.0f, 0.0f, 0x1.a36484p-69f, 0x1.ba030cp-77f, 0.0f,
     0x1p0f, 0.0f, 0x1.9008aep-70f, 0x1.23ac2cp-114f, 0x1.996bcp-96f, 0.0f, 0.0f,
     0x1.65e05ep-75f, 0x1.bd1082p-22f, 0x1.6b0008p-57f, 0x1.2d93bap-96f, 0.0f,
     0x1.9c008ep-43f, 0x1.5aaddcp-28f, 0.0f, 0x1.c226dp-26f, 0x1.fefa8ep-118f, 0.0f,
     0x1.f2417p-52f, 0.0f, 0x1.14b3dap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.be147ap-109f, 0.0f, 0.0f, 0x1.3af4c4p-118f, 0x1.e64f8ap-33f,
     0x1.390024p-81f, 0.0f, 0x1.c9ba5p-47f, 0x1.f1391p-124f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.20b17ep-6f, 0.0f, 0x1p0f, 0.0f, 0x1.fb696cp-103f, 0.0f,
     0x1.98efa4p-49f, 0x1.d7393ep-51f, 0x1.3a4cdcp-95f, 0x1.15ab34p-91f,
     0x1.d3c606p-18f, 0x1.d028b4p-82f, 0x1.cbc034p-89f, 0.0f, 0x1.1e279cp-11f, 0.0f,
     0.0f, 0.0f, 0x1.f1e352p-15f, 0x1.066642p-7f, 0x1.2876aep-126f, 0.0f,
     0x1.1021b6p-26f, 0.0f, 0.0f, 0x1.f3e5f2p-16f, 0.0f, 0x1.96dfa4p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.331f32p-87f, 0x1.711222p-123f, 0x1.fde59p-45f, 0x1.51e5eep-109f,
     0x1.d00494p-102f, 0x1.7c9d7cp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f897ecp-107f,
     0.0f, 0x1.b8495ep-16f, 0.0f, 0.0f, 0.0f, 0x1.99b87p-44f, 0.0f, 0x1.d2025ap-115f,
     0x1.38f698p-14f, 0.0f, 0x1.532b7ap-20f, 0x1.7a067ep-46f, 0x1.6260d4p-74f,
     0x1.7a881p-126f, 0x1.91495p-86f, 0.0f, 0x1.635ea6p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9b8fdep-121f, 0.0f, 0.0f, 0x1.23e8f8p-56f, 0x1.5307b8p-97f,
     0.0f, 0x1.c9d068p-100f, 0x1.b54da4p-13f, 0x1.373a9cp-77f, 0x1.896fc4p-120f, 0.0f,
     0x1p0f, 0.0f, 0x1.d40facp-25f, 0x1.ffdc12p-87f, 0x1.2b64eep-61f, 0x1.a21d3ep-88f,
     0x1.2ce78ep-67f, 0.0f, 0.0f, 0x1.9711c2p-117f, 0x1.74c342p-103f, 0.0f, 0.0f,
     0x1.95ccb6p-77f, 0x1.8f940ap-20f, 0x1.ccb064p-80f, 0x1.bf3586p-125f,
     0x1.ce27d6p-58f, 0.0f, 0x1.19cca6p-125f, 0x1.071accp-115f, 0x1.d9ef3cp-119f,
     0x1.a8f378p-9f, 0.0f, 0.0f, 0x1.b33a4ep-69f, 0x1.5510fep-122f, 0.0f,
     0x1.ff6fd6p-88f, 0x1.84d386p-34f, 0.0f, 0.0f, 0.0f, 0x1.59f16ep-14f, 0.0f,
     0x1.d63e8ap-73f, 0.0f, 0x1.aa32dcp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2423cp-11f,
     0x1.fb20c2p-1f, 0.0f, 0.0f, 0x1.e27f78p-24f, 0x1.473022p-19f, 0x1.ed330ep-86f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3ccacp-2f, 0x1.586d28p-126f,
     0x1.ca4f8cp-117f, 0x1.a665d6p-55f, 0.0f, 0x1.03c5e2p-85f, 0x1.5df6f2p-27f,
     0x1.3f41p-44f, 0.0f, 0.0f, 0x1.831906p-111f, 0x1.1400eep-14f, 0.0f,
     0x1.0325e4p-123f, 0x1.19efc2p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b258cp-28f,
     0x1.2410dp-39f, 0.0f, 0x1.5be4aap-115f, 0.0f, 0.0f, 0x1.8cc00ap-39f,
     0x1.82c05ep-116f, 0.0f, 0x1.00c6cap-2f, 0x1.8220c2p-70f, 0.0f, 0x1.50d3aep-1f,
     0x1.54f1a4p-123f, 0x1.1362f4p-65f, 0.0f, 0.0f, 0x1.91ab04p-107f, 0.0f,
     0x1.d09aa4p-48f, 0x1.4d34dap-43f, 0.0f, 0.0f, 0.0f, 0x1.82d2cp-65f,
     0x1.7ebb22p-87f, 0x1.fa1e28p-57f, 0.0f, 0x1.c8f6a4p-115f, 0.0f, 0x1.1c2d52p-1f,
     0x1.17d10ap-52f, 0.0f, 0x1.cb85f4p-33f, 0.0f, 0x1.1157b8p-67f, 0.0f,
     0x1.80bb44p-35f, 0x1.1cd65ap-50f, 0x1.9a9632p-20f, 0.0f, 0.0f, 0.0f,
     0x1.ddde58p-36f, 0x1.521ba8p-57f, 0x1.8a31a8p-55f, 0.0f, 0.0f, 0.0f,
     0x1.ef065cp-56f, 0x1.ca3f62p-18f, 0x1.e5069cp-62f, 0.0f, 0.0f, 0.0f,
     0x1.c629b4p-15f, 0.0f, 0.0f, 0x1.19efdep-64f, 0x1.7a66bap-27f, 0x1.f3001ap-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bca386p-66f, 0x1.887d5ap-71f, 0.0f, 0.0f, 0.0f,
     0x1.fec00ap-77f, 0x1.e86224p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a85e6cp-122f, 0.0f,
     0x1.784874p-36f, 0.0f, 0x1.becbccp-18f, 0x1.c8b13p-82f, 0.0f, 0x1.702adp-69f,
     0.0f, 0x1.8d06e4p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7534b8p-54f, 0.0f, 0.0f,
     0x1.b59892p-24f, 0x1.564014p-92f, 0.0f, 0x1.10892ep-52f, 0x1.af50fcp-84f,
     0x1.40ef08p-118f, 0x1.b64974p-46f, 0x1.9c0c5ep-80f, 0x1.c99cc2p-96f,
     0x1.f237b6p-37f, 0.0f, 0x1.cdb088p-22f, 0.0f, 0.0f, 0.0f, 0x1.a5e60ap-53f, 0.0f,
     0.0f, 0.0f, 0x1.ec20cap-74f, 0x1.34087ap-96f, 0x1.2d515p-33f, 0.0f,
     0x1.70ab98p-32f, 0.0f, 0x1.7ae132p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c88e8p-65f,
     0.0f, 0.0f, 0.0f, 0x1.6624e4p-37f, 0x1.0865cap-112f, 0.0f, 0x1.016facp-103f,
     0.0f, 0x1.82203ep-60f, 0x1.b234d8p-76f, 0x1.8990eap-87f, 0.0f, 0.0f,
     0x1.405ec6p-78f, 0x1.e476d4p-27f, 0x1.d22298p-118f, 0.0f, 0.0f, 0.0f,
     0x1.074b56p-50f, 0x1.6e09bap-72f, 0x1.1dbaf8p-126f, 0x1.0f7d18p-51f, 0.0f, 0.0f,
     0x1.a5130ep-64f, 0.0f, 0x1.ddf0a6p-55f, 0x1.ade35ap-43f, 0x1.c2481cp-90f, 0.0f,
     0.0f, 0x1.12baecp-67f, 0x1.26877cp-64f, 0x1.2ed6dcp-103f, 0x1.5fdbe8p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a0804p-110f, 0.0f, 0x1.d0526ap-49f,
     0x1.08ea06p-113f, 0.0f, 0x1.4e4f0ap-21f, 0x1.1fc98p-5f, 0.0f, 0x1.fe852ep-94f,
     0x1p0f, 0x1.7115b6p-33f, 0.0f, 0x1.52d924p-97f, 0.0f, 0.0f, 0x1.5b66fap-83f,
     0.0f, 0.0f, 0x1.85582ep-32f, 0x1.57e8bp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.090f28p-50f, 0x1.3b4932p-124f, 0x1.436ab4p-19f, 0.0f, 0x1.d4d216p-92f,
     0x1.4bc61ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3b23ep-22f, 0x1.65c35ep-77f,
     0x1.75587p-59f, 0.0f, 0.0f, 0x1.4be172p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.76ef8p-17f, 0.0f, 0x1.26acdep-125f, 0x1.0da4c8p-126f, 0x1.b2101p-89f,
     0x1.35e4e8p-103f, 0x1.0fcfb4p-17f, 0.0f, 0x1.ded5c4p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d31cdap-102f, 0.0f, 0.0f, 0x1.45bde2p-9f, 0.0f, 0x1.7692fap-34f,
     0x1.cf1922p-56f, 0.0f, 0x1.9d663ap-72f, 0.0f, 0.0f, 0x1.1d71d8p-95f, 0.0f,
     0x1.bfa302p-47f, 0x1.40dd22p-29f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.817ffap-2f, 0x1.9c916ap-117f, 0.0f,
     0x1.a200a4p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.575abp-106f, 0x1.a017fcp-61f,
     0x1.667336p-112f, 0.0f, 0x1.959d92p-120f, 0.0f, 0x1.edb68cp-86f, 0x1.82f3ecp-44f,
     0x1.69f0b6p-5f, 0x1.8e405ap-80f, 0x1.993ebep-125f, 0.0f, 0.0f, 0x1.2d3a84p-69f,
     0x1.4755b8p-79f, 0.0f, 0.0f, 0.0f, 0x1.0f9586p-85f, 0x1.70f6dap-56f,
     0x1.9fc98p-85f, 0x1.fbbd9ep-105f, 0.0f, 0x1.ff134ep-5f, 0x1.464ffcp-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd1d6p-120f, 0.0f, 0x1.daa7bp-36f, 0.0f,
     0x1.3ac958p-35f, 0x1.6738cap-68f, 0x1.950f1ep-58f, 0.0f, 0.0f, 0x1.ccbd86p-62f,
     0x1.7e2bfp-25f, 0x1.e7acdp-7f, 0x1.e98656p-44f, 0.0f, 0x1.c4a5f2p-14f,
     0x1.808d56p-65f, 0x1.888954p-22f, 0x1.051da6p-125f, 0.0f, 0.0f, 0x1.35a27ep-66f,
     0x1.77113cp-28f, 0x1.a6f3e8p-30f, 0.0f, 0x1.9d1d8ap-35f, 0x1.cf84b6p-67f,
     0x1.8f382cp-18f, 0x1.5a713cp-45f, 0.0f, 0x1.308ad6p-48f, 0.0f, 0.0f,
     0x1.4627c4p-31f, 0.0f, 0x1.707cd8p-50f, 0x1.b1bbf6p-24f, 0x1.06f526p-64f, 0.0f,
     0.0f, 0.0f, 0x1.ba980ap-25f, 0x1.2eed56p-95f, 0.0f, 0x1.f2ca6p-59f, 0.0f,
     0x1.34ae56p-69f, 0.0f, 0x1.100348p-54f, 0.0f, 0.0f, 0x1.2467ap-35f,
     0x1.fd6026p-104f, 0x1.64c552p-66f, 0.0f, 0.0f, 0.0f, 0x1.0396c4p-106f,
     0x1.73ad2cp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50a62ap-43f, 0x1.2031d4p-43f,
     0x1.583294p-124f, 0x1.a8e33ap-39f, 0.0f, 0x1.ea70b8p-114f, 0x1.9329e2p-7f, 0.0f,
     0x1.5d34f6p-52f, 0.0f, 0x1.4f5ebp-111f, 0.0f, 0x1.91c082p-109f, 0x1.6c9576p-6f,
     0.0f, 0x1.c32126p-18f, 0x1.0b05eap-76f, 0.0f, 0.0f, 0x1.f8f85p-108f, 0.0f,
     0x1.f0e97cp-114f, 0.0f, 0x1.948e48p-67f, 0x1.202e5ap-79f, 0x1.3e51ep-106f, 0.0f,
     0.0f, 0.0f, 0x1.b64336p-40f, 0x1.e90bf6p-120f, 0.0f, 0x1.f4ff7ep-73f,
     0x1.fa5714p-62f, 0x1.7b5232p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4aa2p-50f, 0.0f,
     0.0f, 0x1.85293p-35f, 0x1.ce65d2p-52f, 0.0f, 0.0f, 0x1.2b9722p-97f,
     0x1.239d8cp-22f, 0x1.059fbap-54f, 0x1.d673f8p-115f, 0.0f, 0.0f, 0x1.291af8p-56f,
     0.0f, 0x1.9f96bcp-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.397318p-118f,
     0x1.657d14p-102f, 0.0f, 0.0f, 0x1.0cbc36p-39f, 0x1.72fe7ep-50f, 0.0f,
     0x1.93e734p-78f, 0.0f, 0.0f, 0.0f, 0x1.e61502p-8f, 0x1.f096b8p-50f,
     0x1.794282p-87f, 0x1.63d028p-4f, 0.0f, 0.0f, 0x1.c4908ep-102f, 0.0f, 0.0f, 0.0f,
     0x1.69a5dcp-50f, 0x1.cc27bp-77f, 0x1.11ff5ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.72d6cap-85f, 0x1.9ecd82p-96f, 0.0f, 0x1.eefd94p-20f, 0x1.e58b88p-57f, 0.0f,
     0x1.40c2c2p-38f, 0x1.84d7bep-96f, 0x1.0149p-85f, 0x1.c492c4p-83f,
     0x1.5c9f3ep-88f, 0.0f, 0.0f, 0.0f, 0x1.add71ap-100f, 0.0f, 0x1.c4e072p-119f,
     0.0f, 0x1.da1796p-123f, 0.0f, 0x1.a5c9f8p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1d698cp-108f, 0x1.e391bep-75f, 0x1.f7808p-53f, 0x1.584246p-124f, 0.0f,
     0.0f, 0x1.43bdd2p-107f, 0x1.aa21d8p-6f, 0.0f, 0x1.72e8e8p-27f, 0.0f, 0.0f,
     0x1.243dd4p-50f, 0.0f, 0.0f, 0x1.38da1ap-51f, 0x1.1888f6p-107f, 0.0f, 0.0f, 0.0f,
     0x1.7b1986p-92f, 0x1.ba61aep-27f, 0.0f, 0x1.b8c736p-67f, 0x1.ac6564p-5f,
     0x1.69f2a2p-35f, 0.0f, 0x1.0ebbbp-122f, 0.0f, 0x1.5996ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.f936bp-6f, 0x1p0f, 0.0f, 0x1.0b83bep-86f, 0x1.a0d00ep-123f, 0x1.c8053ep-54f,
     0x1.8704a2p-54f, 0.0f, 0x1.d1188ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.148356p-61f, 0.0f, 0.0f, 0x1.f962cp-56f,
     0x1.eb2f06p-31f, 0x1.ef584ep-52f, 0x1.fc04e8p-46f, 0.0f, 0x1.5ff8fap-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.929db6p-59f, 0x1.4b2386p-9f, 0x1.91bb42p-52f,
     0x1.a8e1a2p-47f, 0x1.272356p-19f, 0x1.e4668p-81f, 0x1.bb1746p-46f,
     0x1.d2e44p-60f, 0.0f, 0x1.3337b8p-47f, 0x1.7cc0fp-61f, 0x1.302d6ap-58f,
     0x1.d6b5ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e6d6ccp-120f, 0x1.208a7ap-118f,
     0x1.43f614p-76f, 0.0f, 0x1.a213fcp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae4de6p-61f, 0x1.81822ep-95f, 0.0f, 0.0f, 0x1.ede9bcp-48f,
     0x1.2595ep-28f, 0.0f, 0.0f, 0x1.30fc8cp-100f, 0x1.d0b9cap-88f, 0x1.376468p-101f,
     0.0f, 0x1.4c897ep-34f, 0x1.d5785p-92f, 0x1.bad626p-108f, 0x1.61da12p-24f,
     0x1.95846p-104f, 0.0f, 0x1.1d5174p-107f, 0x1.37ea84p-41f, 0x1.73bc3ep-72f,
     0x1.d9b66p-108f, 0.0f, 0x1.e568b8p-60f, 0x1.aeaf64p-21f, 0.0f, 0.0f,
     0x1.8af67ep-86f, 0x1.c31136p-82f, 0.0f, 0x1.46f4bap-93f, 0x1.89c61ap-30f,
     0x1.3afdd6p-33f, 0x1.de7be6p-108f, 0x1.6dbbdcp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b08b8p-33f, 0x1.af0508p-120f, 0x1.073b32p-117f, 0x1.fad404p-30f,
     0x1.eec804p-24f, 0x1.990dbcp-66f, 0x1.bc214ap-100f, 0.0f, 0.0f, 0.0f,
     0x1.2827p-108f, 0x1.3bb2c4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ba78ep-101f,
     0x1.600212p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34a4fcp-112f, 0.0f, 0x1.6d38cp-17f,
     0x1.08c22ep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.787f8p-30f, 0x1.b3265p-12f,
     0x1.7fa8d6p-11f, 0.0f, 0x1.381dbcp-65f, 0.0f, 0x1.f1769ep-72f, 0.0f,
     0x1.691526p-11f, 0x1.560f7ap-63f, 0.0f, 0x1.2ccba2p-94f, 0x1.df550ep-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2debfap-110f, 0x1.3d9426p-18f, 0x1.f6eb0ap-107f,
     0x1.07e544p-1f, 0.0f, 0x1.45987p-126f, 0.0f, 0.0f, 0x1.12d52p-4f, 0.0f,
     0x1.2e01b8p-92f, 0x1.7d881ap-4f, 0.0f, 0.0f, 0.0f, 0x1.b22e2cp-56f,
     0x1.24d7b8p-23f, 0.0f, 0x1.4d0348p-4f, 0x1.cd6fa8p-46f, 0.0f, 0.0f,
     0x1.e2f4fap-122f, 0.0f, 0.0f, 0x1.4ac566p-85f, 0.0f, 0.0f, 0x1.49d3dap-86f,
     0x1.9dc86ap-42f, 0x1.197042p-60f, 0x1.487258p-49f, 0.0f, 0.0f, 0x1.ec6d56p-56f,
     0x1.ab1a0ap-38f, 0x1.7c9cbap-26f, 0x1.f15f44p-22f, 0x1.f479ecp-52f, 0.0f, 0.0f,
     0x1.ba6528p-30f, 0x1.caa9bep-12f, 0x1.6e66e6p-47f, 0x1.2b787p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fa82c4p-31f, 0.0f, 0.0f, 0x1.115732p-57f, 0.0f, 0x1.387d4cp-19f,
     0x1.44369ap-94f, 0.0f, 0x1.0b301p-108f, 0.0f, 0x1.80a324p-71f, 0.0f,
     0x1.fcc598p-90f, 0x1.f7b65p-93f, 0x1.def342p-14f, 0x1.e93d04p-5f, 0.0f,
     0x1.177c5ap-87f, 0.0f, 0x1.6678dap-103f, 0.0f, 0.0f, 0x1.b0310ap-47f, 0.0f,
     0x1.12553cp-28f, 0.0f, 0.0f, 0x1.4b5918p-2f, 0x1.3dae32p-77f, 0x1.23055cp-30f,
     0x1.235c08p-80f, 0.0f, 0.0f, 0x1.198af6p-99f, 0.0f, 0x1.fc09bap-11f, 0.0f,
     0x1.debc6cp-50f, 0.0f, 0.0f, 0x1.c6125ep-44f, 0x1.ecbb34p-110f, 0x1.5b715p-104f,
     0.0f, 0x1.67e8fap-72f, 0x1.8f9d8ap-55f, 0x1.a3f13p-74f, 0x1p0f, 0.0f,
     0x1.6e85bcp-3f, 0x1.bcaf56p-69f, 0x1.a82004p-71f, 0x1.10885ap-33f, 0.0f, 0.0f,
     0x1.4e9248p-47f, 0x1.978244p-15f, 0.0f, 0.0f, 0.0f, 0x1.9ee15p-97f,
     0x1.c75b8ap-32f, 0.0f, 0x1.bc65b4p-34f, 0.0f, 0x1.87d9ccp-94f, 0x1.9e6768p-42f,
     0x1.0c194ep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.360f92p-64f, 0.0f, 0.0f, 0.0f,
     0x1.fd8024p-69f, 0.0f, 0x1.436afcp-79f, 0x1.2d49d6p-117f, 0.0f, 0.0f,
     0x1.9035b4p-48f, 0.0f, 0.0f, 0.0f, 0x1.b45d8p-90f, 0x1.3a751p-17f,
     0x1.f54588p-67f, 0.0f, 0.0f, 0.0f, 0x1.5a3888p-79f, 0.0f, 0.0f, 0.0f,
     0x1.ba4526p-22f, 0.0f, 0x1.ba700ap-103f, 0x1.8c66c6p-79f, 0.0f, 0.0f,
     0x1.4e2112p-100f, 0x1.d11a6cp-63f, 0x1.7500e2p-101f, 0.0f, 0.0f,
     0x1.8a5686p-102f, 0x1.92658ep-94f, 0x1.7c0d7cp-13f, 0x1.95dd5ep-36f,
     0x1.653beap-6f, 0x1.c88db2p-77f, 0.0f, 0x1.fe452ap-98f, 0x1.ab08b2p-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.019b2cp-65f, 0.0f, 0x1.a64346p-82f,
     0x1.98fa9p-32f, 0.0f, 0x1.1ed16p-99f, 0.0f, 0x1.09c532p-110f, 0.0f, 0.0f,
     0x1.389ce6p-14f, 0x1.17c284p-6f, 0.0f, 0x1.4629aap-121f, 0x1.dddd7p-103f,
     0x1.62042cp-65f, 0.0f, 0x1.0e81e8p-126f, 0.0f, 0x1.77fb04p-91f, 0x1.508c16p-3f,
     0.0f, 0.0f, 0x1.318b7ap-63f, 0x1.b06cbep-85f, 0.0f, 0.0f, 0.0f, 0x1.f7f944p-73f,
     0x1.c3cdbap-32f, 0x1.4cde74p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96af68p-56f, 0.0f,
     0x1.093258p-103f, 0x1.5d9b7ap-13f, 0.0f, 0x1.15e978p-39f, 0.0f, 0x1.1866f2p-119f,
     0.0f, 0x1.4ce2ep-109f, 0.0f, 0x1.f815acp-1f, 0x1.80f77cp-59f, 0x1.463022p-79f,
     0.0f, 0x1.a85c06p-9f, 0x1.8b4d3cp-84f, 0.0f, 0.0f, 0.0f, 0x1.b5332cp-36f,
     0x1.12626ep-90f, 0.0f, 0x1.c43ddcp-67f, 0.0f, 0x1.b9ab4ep-95f, 0.0f,
     0x1.96169ap-65f, 0x1.a996b6p-35f, 0x1.f8e0eap-29f, 0.0f, 0x1.58a94ap-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.36a34p-115f, 0x1.d8c368p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5d135p-92f, 0.0f, 0x1.760b9ap-12f, 0x1.73629ep-11f, 0x1.72baf6p-106f,
     0x1.816246p-84f, 0x1.849f78p-63f, 0x1.0de07cp-68f, 0x1.0cd9b2p-107f,
     0x1.82b464p-77f, 0x1.7860ccp-124f, 0x1.ecdcd2p-72f, 0x1.031aaap-117f,
     0x1.eade76p-56f, 0.0f, 0x1.2de22ep-79f, 0x1.a56908p-54f, 0x1.c6647p-25f, 0.0f,
     0x1.c11a1p-14f, 0.0f, 0.0f, 0.0f, 0x1.a516f6p-105f, 0.0f, 0.0f, 0x1.79e044p-79f,
     0.0f, 0.0f, 0x1.420952p-97f, 0x1.b8394cp-34f, 0.0f, 0x1.9a1656p-107f,
     0x1.f7ca76p-124f, 0.0f, 0x1.9b966p-81f, 0x1.7e0bep-39f, 0.0f, 0.0f, 0.0f,
     0x1.da34a4p-99f, 0.0f, 0x1.cee7b2p-51f, 0.0f, 0.0f, 0x1.01bceap-100f, 0.0f,
     0x1.3a9918p-105f, 0x1.eddfb8p-123f, 0.0f, 0x1.c64412p-84f, 0.0f, 0x1.5153e2p-77f,
     0x1.cb3384p-101f, 0.0f, 0x1.5eda3ep-64f, 0x1.e288dcp-15f, 0.0f, 0x1.80b89ap-34f,
     0.0f, 0.0f, 0x1.0d22c2p-118f, 0x1.7ee60ep-3f, 0x1.0b6364p-14f, 0.0f,
     0x1.e64ffep-97f, 0x1.bcea16p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e5ac4p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b994d8p-59f, 0.0f, 0.0f, 0.0f,
     0x1.c2445p-49f, 0x1.cba6c2p-124f, 0.0f, 0x1.b3729p-73f, 0x1.c5aa6p-107f,
     0x1.415364p-2f, 0.0f, 0x1.a652ecp-62f, 0x1.be3beap-2f, 0x1.d6caa2p-30f,
     0x1.b10a56p-83f, 0.0f, 0x1.2b1ebcp-110f, 0x1.c91248p-47f, 0x1.54dd22p-20f, 0.0f,
     0x1.a2b212p-29f, 0x1.9cb69cp-106f, 0x1.82cb1cp-27f, 0.0f, 0x1.0623bcp-95f,
     0x1.e01186p-67f, 0x1.8d5c4cp-37f, 0x1.733deap-43f, 0x1.d315fcp-43f, 0.0f,
     0x1.2caae6p-65f, 0x1.20ce34p-65f, 0x1.919dd4p-78f, 0x1.930f6ap-66f,
     0x1.560ceap-2f, 0x1.41c3f8p-64f, 0x1.6ea5cap-8f, 0.0f, 0.0f, 0x1.7209bap-98f,
     0.0f, 0x1.4a9b88p-67f, 0.0f, 0.0f, 0.0f, 0x1.d105bep-79f, 0.0f, 0x1.a8e0cap-36f,
     0x1.fb7b06p-56f, 0.0f, 0x1.7f5e4cp-90f, 0.0f, 0x1.8faadp-41f, 0.0f, 0.0f, 0.0f,
     0x1.ebc08ep-101f, 0.0f, 0x1.cdeaep-96f, 0x1.eb2ep-78f, 0x1.32eef8p-44f,
     0x1.f3f09p-64f, 0.0f, 0x1.633fcp-82f, 0x1.64145cp-80f, 0.0f, 0x1.886b2cp-84f,
     0.0f, 0x1.543b76p-31f, 0.0f, 0.0f, 0.0f, 0x1.6e77d6p-93f, 0x1.72da54p-38f,
     0x1.a51d64p-97f, 0.0f, 0.0f, 0x1.96cadap-76f, 0.0f, 0x1.4652a6p-78f,
     0x1.33cd62p-25f, 0.0f, 0x1.129b2p-105f, 0x1.77404ap-96f, 0.0f, 0x1.9ec49ep-101f,
     0x1.514762p-8f, 0x1.c3aa9ap-117f, 0x1.0d3bep-120f, 0.0f, 0.0f, 0x1.0e6e0ap-86f,
     0.0f, 0x1.bef5a2p-7f, 0.0f, 0.0f, 0x1.8b3b2ep-94f, 0x1.07548ap-70f,
     0x1.a79abcp-97f, 0x1.bdf2b4p-107f, 0x1.906e1cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.4c5164p-90f, 0.0f, 0x1.f89e3ap-14f, 0x1.166b7cp-119f, 0x1.f044ap-101f,
     0x1.928154p-103f, 0x1.bc8facp-121f, 0x1.3da02cp-124f, 0x1.66457cp-6f, 0.0f, 0.0f,
     0x1.9f535p-85f, 0x1.eef40cp-12f, 0x1.a19088p-13f, 0.0f, 0x1.e2a07ep-8f, 0.0f,
     0.0f, 0.0f, 0x1.851f72p-14f, 0.0f, 0.0f, 0.0f, 0x1.948cc6p-38f, 0x1.7287f8p-25f,
     0x1.c152c2p-109f, 0x1.e48b44p-5f, 0.0f, 0.0f, 0x1.ff43fep-58f, 0x1.135356p-59f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a903ecp-30f, 0.0f, 0.0f, 0x1.ab9c32p-61f,
     0x1.9b3104p-92f, 0x1.8e6b26p-86f, 0.0f, 0x1.ccf622p-48f, 0.0f, 0x1.b965fcp-13f,
     0x1.038f92p-22f, 0.0f, 0x1.988438p-117f, 0x1.d1ca0ap-32f, 0x1.ef9cb4p-122f,
     0x1.84364p-89f, 0.0f, 0x1.ffa2eap-84f, 0x1.6b11f8p-33f, 0x1.ed8d92p-28f,
     0x1.5b961cp-65f, 0.0f, 0.0f, 0.0f, 0x1.b2789p-82f, 0.0f, 0x1.893824p-10f,
     0x1.debbc2p-101f, 0x1.400c28p-13f, 0.0f, 0x1.5d3f5ap-84f, 0x1.715a6ap-114f,
     0x1.1e6abcp-6f, 0.0f, 0x1.851518p-4f, 0.0f, 0x1.ff075ap-72f, 0x1.6cec1ep-30f,
     0x1.b764a4p-124f, 0.0f, 0x1.5f75b8p-16f, 0.0f, 0x1.9eaf7p-34f, 0.0f,
     0x1.04a86ap-53f, 0.0f, 0x1.cfd4a6p-126f, 0.0f, 0.0f, 0x1.a2bb98p-12f,
     0x1.b3483p-44f, 0x1.2c879ep-51f, 0x1.2a8bf8p-94f, 0x1.db553ep-81f, 0.0f,
     0x1.61803ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9692cp-55f, 0.0f,
     0x1.3d7bd4p-91f, 0.0f, 0.0f, 0.0f, 0x1.22789ap-82f, 0.0f, 0x1.945e58p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6618acp-113f, 0.0f, 0x1.8e1648p-79f, 0x1.3f508p-14f, 0.0f,
     0.0f, 0.0f, 0x1.9d008cp-78f, 0x1.76f44ep-125f, 0.0f, 0.0f, 0.0f, 0x1.e3fce6p-34f,
     0.0f, 0x1.669beep-61f, 0.0f, 0x1.78b6ccp-124f, 0.0f, 0x1.345584p-80f, 0.0f, 0.0f,
     0.0f, 0x1.071e7p-96f, 0x1.83863ap-113f, 0x1.aea3cp-12f, 0x1.6d15c4p-89f, 0.0f,
     0x1.5495f8p-82f, 0x1.039226p-55f, 0.0f, 0.0f, 0x1.954f6ap-23f, 0.0f,
     0x1.95c23ap-119f, 0.0f, 0.0f, 0x1.a7cc16p-63f, 0x1.5e869ep-66f, 0x1.253f12p-46f,
     0.0f, 0x1.632a7p-119f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.03e14ep-101f, 0.0f, 0.0f,
     0.0f, 0x1.f872p-123f, 0.0f, 0.0f, 0x1.944e5p-94f, 0x1.d523f2p-41f,
     0x1.041f74p-48f, 0x1.2cd12cp-84f, 0.0f, 0.0f, 0x1.28c0b6p-55f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_hypotf4_u35avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_hypotf4_u35avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_hypotf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
