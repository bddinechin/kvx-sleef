/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtf4_u35avx2128.c --function \
 *     Sleef_finz_sqrtf4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
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
     0.0f, 0x1.518098p-22f, 0.0f, 0x1.9814eep-39f, 0.0f, 0.0f, 0x1.fdc726p-4f, 0.0f,
     0x1.8efb52p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.800eaap-20f, 0x1.c7eabap-15f,
     0x1.f677d6p-6f, 0.0f, 0x1.1c0ep-60f, 0.0f, 0x1.63896ep-71f, 0x1.222814p-5f,
     0x1.a1b1f4p-77f, 0x1.b17afap-15f, 0.0f, 0x1.f5d524p-19f, 0x1.8ecb36p-75f, 0.0f,
     0.0f, 0.0f, 0x1.732db4p-96f, 0x1.0af2eep-75f, 0x1.f2ced8p-10f, 0x1.ae251cp-22f,
     0x1.c4ff64p-93f, 0x1.2b1f9ap-9f, 0x1.84547cp-83f, 0.0f, 0x1.915d5cp-44f, 0.0f,
     0.0f, 0.0f, 0x1.431a4cp-112f, 0x1.93321p-19f, 0x1.a6c9e2p-76f, 0.0f, 0.0f, 0.0f,
     0x1.067354p-50f, 0x1.39c31cp-31f, 0.0f, 0.0f, 0x1.7ea15ep-44f, 0x1.f23aa4p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.42e712p-39f, 0x1.cc4ad8p-65f, 0.0f, 0.0f, 0.0f,
     0x1.8765eap-126f, 0.0f, 0x1.4f65b2p-75f, 0x1.3e8304p-98f, 0.0f, 0x1.fbfc1ep-59f,
     0x1.ad7296p-59f, 0x1.0bcabp-110f, 0x1.84373ep-50f, 0x1.ee3ef2p-60f, 0.0f, 0.0f,
     0x1.1262ccp-95f, 0.0f, 0.0f, 0.0f, 0x1.214328p-116f, 0x1.1c7608p-74f,
     0x1.901f6cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e130e6p-18f, 0.0f, 0.0f,
     0x1.3be74ep-118f, 0x1.039356p-10f, 0.0f, 0x1.1b8022p-22f, 0.0f, 0x1.32f9f8p-96f,
     0x1.a74de4p-100f, 0.0f, 0x1.6e1486p-86f, 0.0f, 0x1.8cd104p-16f, 0.0f,
     0x1.6128c2p-94f, 0.0f, 0x1.384702p-35f, 0.0f, 0x1.eb72c2p-123f, 0x1.1c8cf2p-122f,
     0x1.1c2efp-43f, 0.0f, 0x1.ab4f06p-46f, 0x1.4e091ap-18f, 0x1.8aa9e6p-87f, 0.0f,
     0x1.29d254p-34f, 0.0f, 0x1.87f4e2p-27f, 0x1.9bfadap-59f, 0x1.69287cp-39f, 0.0f,
     0.0f, 0x1.84888ap-15f, 0x1.3c07cep-9f, 0.0f, 0x1.db1052p-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6a542p-114f, 0x1.fa239ep-47f, 0.0f, 0.0f, 0.0f, 0x1.60385ep-91f,
     0x1.6fa056p-62f, 0.0f, 0x1.98c8b8p-87f, 0x1.c6109p-56f, 0x1.26b072p-29f, 0.0f,
     0x1.b4e9dp-66f, 0.0f, 0.0f, 0.0f, 0x1.caedf6p-118f, 0.0f, 0x1.ced0aap-46f,
     0x1.3019ap-46f, 0.0f, 0x1.813b68p-84f, 0.0f, 0.0f, 0x1.3deb7cp-111f,
     0x1.3830acp-30f, 0x1.993a1cp-109f, 0.0f, 0.0f, 0x1.b400f8p-82f, 0.0f, 0.0f,
     0x1.a58ee4p-61f, 0x1.774f3p-42f, 0x1.cb3fbap-45f, 0x1.9008a4p-68f,
     0x1.e8f62ap-28f, 0.0f, 0.0f, 0x1.206052p-86f, 0.0f, 0x1.88b374p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a7dap-9f, 0.0f, 0x1.51663cp-38f, 0.0f, 0x1.74b014p-73f,
     0x1.a03a9ap-69f, 0x1.0f7d2cp-37f, 0.0f, 0.0f, 0.0f, 0x1.9718a6p-16f, 0.0f,
     0x1.4e704ep-99f, 0.0f, 0x1.926d04p-125f, 0.0f, 0x1.a0b41ap-21f, 0x1.79f6e6p-88f,
     0x1.0db5acp-70f, 0x1.41425p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85903ap-17f,
     0x1.d8ea9p-52f, 0.0f, 0x1.e6146p-43f, 0.0f, 0.0f, 0.0f, 0x1.8a72cap-82f,
     0x1.70d642p-75f, 0x1.09deeap-51f, 0x1.4343ccp-101f, 0x1.68a328p-56f,
     0x1.19906cp-72f, 0.0f, 0.0f, 0x1.2354eap-104f, 0x1.33d1c2p-59f, 0x1.d574e6p-90f,
     0x1.eb6972p-52f, 0.0f, 0x1.3f9912p-40f, 0x1.2a9fd4p-125f, 0x1.e87c12p-116f,
     0x1.b68e54p-101f, 0x1.00f0cep-41f, 0.0f, 0x1.4e93f2p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.974868p-122f, 0.0f, 0x1.04a45cp-79f, 0x1.0171dep-117f, 0x1.e4d4dep-12f,
     0x1.7bb72cp-107f, 0x1.3dfec8p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4866aap-19f, 0.0f, 0x1.45b936p-52f, 0x1.72f542p-120f,
     0x1.085ce6p-7f, 0x1.92ca32p-34f, 0.0f, 0x1.dbb586p-93f, 0.0f, 0.0f,
     0x1.25fbbep-109f, 0x1.2bd588p-103f, 0.0f, 0x1.8784dap-79f, 0.0f, 0.0f, 0.0f,
     0x1.af7962p-59f, 0x1.e163b8p-51f, 0x1.1a7b18p-126f, 0.0f, 0.0f, 0.0f,
     0x1.03a9f8p-90f, 0.0f, 0x1.77774cp-96f, 0.0f, 0.0f, 0x1.175becp-118f, 0.0f,
     0x1.50e94p-75f, 0.0f, 0x1.7ec144p-23f, 0.0f, 0.0f, 0.0f, 0x1.688278p-39f, 0.0f,
     0.0f, 0.0f, 0x1.57f42p-96f, 0x1.421588p-34f, 0x1.0eb688p-29f, 0.0f,
     0x1.a9de0ap-114f, 0.0f, 0.0f, 0x1.ceb6ecp-39f, 0x1.8311bp-71f, 0x1.8945eap-98f,
     0x1.23cf6p-68f, 0.0f, 0x1.ab6054p-89f, 0.0f, 0x1.b67172p-114f, 0.0f, 0.0f,
     0x1.9219fap-99f, 0.0f, 0.0f, 0x1.70ba4p-20f, 0x1.08dc82p-12f, 0x1.80c87p-20f,
     0x1.7ed8aap-96f, 0.0f, 0.0f, 0.0f, 0x1.78dbb2p-29f, 0x1.18e954p-96f, 0.0f,
     0x1.f3785cp-58f, 0x1.450612p-92f, 0x1.a55dbcp-88f, 0.0f, 0x1.86ce0ep-34f, 0.0f,
     0x1.5465dep-122f, 0x1.b6f452p-78f, 0x1.18010ap-89f, 0.0f, 0.0f, 0x1.f6da06p-48f,
     0.0f, 0x1.32c524p-46f, 0x1.8951dep-5f, 0x1.14f6fep-100f, 0.0f, 0x1.2a9ed8p-8f,
     0x1.1dda64p-60f, 0x1.07d9aep-74f, 0x1.2503b4p-122f, 0x1.6df348p-91f, 0.0f,
     0x1.d27194p-34f, 0x1.965748p-103f, 0x1.2b4edcp-39f, 0x1.f33d5ep-52f, 0.0f,
     0x1.29bcf6p-41f, 0x1.cb9856p-82f, 0x1.b2b2fp-94f, 0x1.638e28p-19f,
     0x1.f50636p-78f, 0x1.cfa0d4p-39f, 0x1.23994cp-53f, 0x1.71405p-98f,
     0x1.b11d5ap-66f, 0x1.8d1ceep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.605a9cp-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a89186p-87f, 0.0f, 0x1.2cd098p-87f, 0x1.106b74p-117f,
     0x1.b45826p-74f, 0x1.80a56ap-34f, 0.0f, 0x1.eb2f7ep-93f, 0.0f, 0.0f,
     0x1.322672p-47f, 0.0f, 0x1.8bb29p-45f, 0x1.488a5p-11f, 0.0f, 0.0f,
     0x1.9ab1b6p-78f, 0.0f, 0x1.038232p-9f, 0x1.7d85bp-125f, 0x1.d6b6cep-30f, 0.0f,
     0.0f, 0x1.eee41cp-74f, 0.0f, 0x1.cd58bap-103f, 0.0f, 0x1.6f77c8p-80f,
     0x1.4906dp-122f, 0.0f, 0.0f, 0x1.15df44p-100f, 0.0f, 0.0f, 0.0f, 0x1.38d7eap-52f,
     0.0f, 0x1.93088ep-13f, 0.0f, 0.0f, 0.0f, 0x1.fbadf2p-31f, 0x1.73f2fep-25f,
     0x1.01bf82p-66f, 0x1.d6ac08p-11f, 0x1.03b616p-57f, 0.0f, 0x1.a21c3ap-69f, 0.0f,
     0x1.b28e68p-126f, 0.0f, 0.0f, 0x1.5c7a5ep-80f, 0.0f, 0.0f, 0.0f,
     0x1.b26d54p-116f, 0.0f, 0x1.d6df22p-2f, 0.0f, 0x1.951d08p-30f, 0x1.82b3f8p-20f,
     0.0f, 0x1.6b38cep-41f, 0.0f, 0.0f, 0x1.6a68dap-42f, 0.0f, 0.0f, 0.0f,
     0x1.706a78p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5bb9ap-77f,
     0.0f, 0.0f, 0x1.453d16p-16f, 0.0f, 0.0f, 0x1.bfaa62p-72f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22836ep-14f, 0x1.d2edaap-23f, 0x1.d836aep-89f, 0.0f, 0x1.2f51bcp-45f,
     0x1.ecf27ep-115f, 0x1.d9505p-79f, 0.0f, 0x1.19c5f4p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f62ae6p-13f, 0.0f, 0x1.96f6dp-72f, 0.0f, 0.0f, 0x1.85465p-4f,
     0x1.404334p-66f, 0x1.02d284p-78f, 0.0f, 0x1.00506cp-55f, 0x1.f1af8ep-87f, 0.0f,
     0x1.53146ap-5f, 0x1.c5cd52p-104f, 0x1.8e08dcp-48f, 0x1.50d3b6p-6f, 0.0f,
     0x1.a50fcap-7f, 0x1.cdc644p-125f, 0.0f, 0x1.be473ap-98f, 0.0f, 0x1.9bd46ap-112f,
     0x1.cd3e5cp-17f, 0.0f, 0.0f, 0x1.1dc7a4p-60f, 0x1.62d51p-38f, 0.0f, 0.0f,
     0x1.f4182ap-115f, 0.0f, 0x1.4f03eap-18f, 0.0f, 0x1.47b2bp-112f, 0x1.6089dcp-30f,
     0.0f, 0.0f, 0x1.43c0aap-62f, 0x1.e3e072p-98f, 0.0f, 0.0f, 0x1.1010e2p-107f,
     0x1.2b5cep-53f, 0.0f, 0x1.fdac9cp-82f, 0.0f, 0x1.ac932ep-97f, 0.0f, 0.0f,
     0x1.2eedf4p-7f, 0.0f, 0.0f, 0x1.f2eeacp-100f, 0.0f, 0x1.8e47acp-26f, 0.0f,
     0x1.20f2cep-116f, 0x1.cc908ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.02b1eap-8f,
     0x1.7d494p-3f, 0x1.acc2dap-83f, 0.0f, 0x1.1f2fcep-116f, 0x1.5ef2ecp-38f, 0.0f,
     0.0f, 0x1.54e21p-115f, 0.0f, 0x1.85c1ep-93f, 0x1.fc4e9ep-29f, 0x1.16be6cp-27f,
     0.0f, 0.0f, 0.0f, 0x1.88caeap-45f, 0.0f, 0x1.fb2f7p-68f, 0x1.3cbb56p-96f, 0.0f,
     0x1.45abb4p-40f, 0x1.0a9d94p-63f, 0.0f, 0x1.1e2a4p-70f, 0.0f, 0x1.249ffep-94f,
     0.0f, 0x1.986e2ap-54f, 0.0f, 0.0f, 0.0f, 0x1.8f9e8p-83f, 0x1.bdfffep-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a19472p-110f, 0.0f, 0x1.169d4cp-103f, 0x1.c2f146p-7f,
     0x1.92004cp-61f, 0.0f, 0x1.a71e4p-54f, 0.0f, 0.0f, 0x1.eccf58p-40f, 0.0f,
     0x1.ee925ep-16f, 0.0f, 0x1.24ba2ap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94123p-7f, 0x1.a78fd8p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b688c2p-122f, 0x1.becbc8p-68f, 0.0f, 0.0f, 0.0f, 0x1.91bdf6p-29f, 0.0f, 0.0f,
     0x1.3a026p-88f, 0.0f, 0x1.7a6a8ap-17f, 0.0f, 0.0f, 0.0f, 0x1.b4e4acp-47f, 0.0f,
     0.0f, 0x1.4d989cp-68f, 0.0f, 0x1.d37da2p-37f, 0x1.61243cp-2f, 0x1.38e0fap-70f,
     0.0f, 0x1.b95cep-120f, 0x1.8f8cf4p-91f, 0.0f, 0x1.cd849ap-111f, 0x1.41920ep-20f,
     0.0f, 0x1.ad38c2p-89f, 0.0f, 0x1.3de7bp-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e238p-100f, 0x1.32fa5ap-20f, 0x1.f50b78p-126f, 0.0f, 0.0f, 0x1.ac666ap-103f,
     0.0f, 0x1.272988p-100f, 0.0f, 0.0f, 0.0f, 0x1.4555cp-21f, 0.0f, 0.0f, 0.0f,
     0x1.2001c2p-109f, 0x1.1943cep-69f, 0.0f, 0x1.28024ap-21f, 0.0f, 0x1.13a91cp-29f,
     0.0f, 0x1.b1a6e8p-83f, 0x1.22081ep-81f, 0.0f, 0x1.8a94fap-82f, 0x1.8a6cb4p-35f,
     0.0f, 0x1.5585f6p-71f, 0x1.4b20e6p-96f, 0x1.7616aap-40f, 0.0f, 0x1.cc72d6p-52f,
     0.0f, 0.0f, 0x1.82c5d6p-12f, 0.0f, 0.0f, 0.0f, 0x1.7456bap-34f, 0.0f,
     0x1.480878p-9f, 0x1.d31dep-45f, 0x1.63cf5cp-126f, 0x1.dcb6bap-10f, 0.0f, 0.0f,
     0.0f, 0x1.06cb1ap-93f, 0x1.8f4a2ep-53f, 0.0f, 0x1.5ca6f2p-73f, 0.0f, 0.0f,
     0x1.f23a46p-39f, 0x1.fe4b84p-104f, 0x1.da7728p-21f, 0x1.00f2e4p-125f,
     0x1.a8194ep-76f, 0x1.1efc2p-9f, 0x1.26b866p-123f, 0.0f, 0.0f, 0x1.2e892ap-103f,
     0x1.95a5dep-24f, 0.0f, 0.0f, 0x1.5862f4p-13f, 0x1.8591ccp-75f, 0.0f,
     0x1.32c9ecp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3da394p-12f, 0x1.130ab6p-96f, 0.0f,
     0x1.50c22cp-78f, 0x1.670934p-116f, 0x1.efb378p-82f, 0x1.6dc508p-109f,
     0x1.2e0e68p-14f, 0x1.da5a5ap-12f, 0.0f, 0.0f, 0.0f, 0x1.b6308p-108f,
     0x1.66c722p-35f, 0x1.46be8p-9f, 0x1.697358p-102f, 0.0f, 0.0f, 0x1.d65a76p-38f,
     0x1.883ea2p-18f, 0.0f, 0.0f, 0x1.8d156ep-54f, 0.0f, 0.0f, 0.0f, 0x1.5b64eep-6f,
     0.0f, 0.0f, 0x1.36fd2ap-11f, 0x1.2ef8cep-15f, 0x1.7434dcp-10f, 0x1.04f404p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6714fcp-102f, 0.0f, 0.0f,
     0.0f, 0x1.225678p-61f, 0x1.4c7b4cp-84f, 0x1.b9a7c6p-103f, 0x1.eced0cp-69f,
     0x1.04d03p-28f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.12eb6ap-32f, 0x1.12b778p-124f,
     0x1.8d31eap-33f, 0.0f, 0.0f, 0x1.4ef302p-26f, 0.0f, 0.0f, 0.0f, 0x1.c383a6p-50f,
     0.0f, 0x1.6337fap-93f, 0x1.abf67cp-29f, 0x1.9b71f8p-6f, 0x1.6eabf2p-100f, 0.0f,
     0x1.31f03ep-2f, 0x1.970792p-15f, 0.0f, 0.0f, 0.0f, 0x1.1f8d72p-108f,
     0x1.cdad48p-13f, 0x1.27c426p-75f, 0x1.3828aep-75f, 0.0f, 0x1.444b3ap-6f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1f87c8p-115f, 0x1.c4d2e4p-82f, 0.0f, 0.0f, 0.0f,
     0x1.598ea2p-34f, 0.0f, 0.0f, 0x1.57df44p-2f, 0x1.8f8fdcp-57f, 0x1.35a98cp-80f,
     0.0f, 0x1.aefe44p-19f, 0.0f, 0.0f, 0x1.91ff3ep-63f, 0.0f, 0.0f, 0x1.ae0ec6p-72f,
     0x1.79829ep-52f, 0x1.af18c8p-55f, 0x1.2791dp-28f, 0.0f, 0.0f, 0x1.d4e392p-6f,
     0x1.c71632p-86f, 0.0f, 0x1.93a9eep-59f, 0x1.b6812cp-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6d2c4ap-2f, 0x1.b827a4p-66f, 0x1.fd46dap-60f, 0.0f, 0x1.00ad82p-100f,
     0x1.a96ap-118f, 0.0f, 0x1.fd65d6p-96f, 0.0f, 0x1.9033cap-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cc049cp-106f, 0x1.231e1ep-9f, 0x1.197e08p-49f, 0x1.3fcf4ap-87f,
     0x1.614bbp-34f, 0.0f, 0.0f, 0.0f, 0x1.815478p-38f, 0x1.9ed916p-91f,
     0x1.1f7ea6p-110f, 0.0f, 0x1.c1b664p-17f, 0x1.5b1a68p-42f, 0x1.b0d0bcp-97f,
     0x1.700744p-20f, 0x1.283154p-8f, 0x1.fdbfc8p-37f, 0.0f, 0x1.ba7c8ap-107f,
     0x1.5142a2p-53f, 0.0f, 0.0f, 0x1.815ef4p-122f, 0.0f, 0x1.8c3806p-104f,
     0x1.ed7afcp-72f, 0.0f, 0.0f, 0.0f, 0x1.d5357cp-65f, 0x1.0fc1bap-126f, 0.0f, 0.0f,
     0x1.efdf18p-110f, 0.0f, 0x1.74a964p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44bb84p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a694cp-92f, 0x1.1161b2p-93f, 0x1.90e6f2p-72f, 0.0f, 0.0f, 0x1.19e57p-123f,
     0x1.3c10f6p-50f, 0x1.e74624p-65f, 0x1.5bb33cp-40f, 0.0f, 0.0f, 0x1.a86722p-57f,
     0.0f, 0.0f, 0.0f, 0x1.f6e7d8p-4f, 0x1.0739fcp-70f, 0.0f, 0x1.ddf2d4p-16f,
     0x1.b2d982p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e764ep-37f,
     0.0f, 0.0f, 0x1.d4e8a2p-32f, 0x1.9f1c5ap-112f, 0x1.f88d38p-54f, 0x1.3648e2p-126f,
     0x1.7d7ba4p-119f, 0.0f, 0x1.7c9d4cp-75f, 0.0f, 0.0f, 0.0f, 0x1.398818p-27f, 0.0f,
     0.0f, 0.0f, 0x1.a659cep-104f, 0.0f, 0x1.a89be6p-81f, 0x1.bfb84ep-16f,
     0x1.0471f6p-88f, 0.0f, 0x1.860c3cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.08bfccp-17f, 0x1.ad227ep-80f, 0.0f, 0x1.1a42f8p-24f, 0.0f,
     0x1.58b5cep-56f, 0.0f, 0.0f, 0.0f, 0x1.7596a2p-81f, 0.0f, 0.0f, 0x1.f80404p-95f,
     0.0f, 0.0f, 0x1.76c162p-51f, 0.0f, 0x1.07cdf4p-74f, 0x1.9a6e86p-4f,
     0x1.da3d2ap-23f, 0.0f, 0x1.cfd30ap-97f, 0x1.b7c6f6p-69f, 0.0f, 0.0f,
     0x1.b422bp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dcdfap-23f, 0x1.a12b98p-91f, 0.0f,
     0x1.b69822p-72f, 0.0f, 0.0f, 0.0f, 0x1.c7268cp-64f, 0x1.4fd404p-49f, 0.0f, 0.0f,
     0x1.52c592p-116f, 0x1.a79aaep-114f, 0.0f, 0x1.f5cb8cp-7f, 0.0f, 0x1.386d6p-81f,
     0.0f, 0.0f, 0x1.b6fb3ap-111f, 0x1.06f214p-69f, 0.0f
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
            tmp1 = Sleef_finz_sqrtf4_u35avx2128(tmp0);
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
    printf("Sleef_finz_sqrtf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
