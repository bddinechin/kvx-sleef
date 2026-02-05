/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_u35kvx.c --function Sleef_sqrtf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0x1.7d09a2p-34f, 0.0f, 0x1.83a8b4p-21f, 0x1.4a9958p-4f, 0.0f,
     0x1.b519fcp-65f, 0x1.5074f6p-107f, 0.0f, 0x1.066668p-84f, 0x1.e13ba6p-80f, 0.0f,
     0.0f, 0x1.0d9532p-56f, 0x1.fb95fp-107f, 0.0f, 0.0f, 0x1.e0511ap-12f, 0.0f,
     0x1.c497c8p-28f, 0x1.fd9fa8p-105f, 0.0f, 0.0f, 0x1.d28ed6p-109f,
     0x1.656ad6p-111f, 0.0f, 0x1.321296p-32f, 0.0f, 0x1.818234p-113f, 0.0f, 0.0f,
     0.0f, 0x1.8d22d6p-84f, 0x1.208c6cp-52f, 0x1.becd2p-104f, 0.0f, 0x1.b6cbd4p-40f,
     0x1.40c042p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71d48ep-112f, 0.0f, 0x1.6b1eb4p-67f,
     0.0f, 0x1.95a44ep-124f, 0.0f, 0x1.7add7cp-112f, 0x1.40e358p-105f,
     0x1.049886p-37f, 0.0f, 0.0f, 0.0f, 0x1.2efd6ap-88f, 0x1.f6db46p-36f, 0.0f, 0.0f,
     0x1.f1c4eap-12f, 0.0f, 0.0f, 0.0f, 0x1.0ed63ap-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.230478p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c41d32p-13f, 0.0f, 0x1.19b05cp-49f,
     0x1.c5d0dap-55f, 0x1.e1e148p-80f, 0.0f, 0.0f, 0.0f, 0x1.6257f2p-120f,
     0x1.e3716ep-60f, 0.0f, 0.0f, 0x1.80978ep-51f, 0x1.dbc2c4p-103f, 0x1.dd18f2p-103f,
     0x1.4c1fecp-52f, 0x1.380244p-73f, 0x1.bfef32p-94f, 0.0f, 0x1.0ee02ap-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.973aeap-66f, 0.0f, 0x1.b6eedcp-29f, 0.0f, 0.0f,
     0x1.8bc648p-11f, 0x1.987a4p-37f, 0.0f, 0x1.164f9ap-20f, 0x1.dccbc6p-79f, 0.0f,
     0x1.ddc2f6p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6be9fp-120f, 0.0f, 0x1.118b46p-50f,
     0x1.5714e8p-59f, 0x1.7accb4p-107f, 0x1.a94a18p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.25d82ap-62f, 0x1.372882p-32f, 0.0f, 0x1.50458ap-10f, 0x1.cf4b28p-21f,
     0x1.48160ep-105f, 0.0f, 0.0f, 0x1.73e95ep-15f, 0.0f, 0x1.5b0844p-22f,
     0x1.f908fep-52f, 0.0f, 0.0f, 0x1.582d9cp-23f, 0.0f, 0x1.dfec98p-54f, 0.0f, 0.0f,
     0x1.a93b02p-15f, 0.0f, 0.0f, 0x1.a3f25ep-28f, 0x1.78302p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63a302p-40f, 0x1.fdcffep-16f, 0x1.bc0bfep-29f, 0x1.43d7aap-43f,
     0x1.9b79f8p-120f, 0.0f, 0x1.fc6776p-46f, 0.0f, 0x1.bb0c2ep-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d16f88p-6f, 0.0f, 0.0f,
     0x1.760704p-48f, 0.0f, 0.0f, 0x1.354126p-106f, 0.0f, 0x1.4d96dp-118f,
     0x1.b47c7ap-123f, 0x1p0f, 0x1.9e6ab6p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d87eeep-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4ca3ep-97f, 0.0f, 0x1.a386ecp-7f,
     0.0f, 0x1.f8fc44p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.698a12p-125f, 0.0f, 0.0f,
     0x1.4c08bap-91f, 0x1.1e10d4p-18f, 0x1.44e982p-124f, 0.0f, 0.0f, 0x1.665e6ap-121f,
     0x1.5ba1ccp-112f, 0x1.ebed3p-82f, 0x1.29978p-71f, 0x1.5ed17cp-120f, 0.0f,
     0x1.4bc986p-62f, 0x1.b22eacp-9f, 0.0f, 0.0f, 0x1.4b72fcp-43f, 0x1.0f368ap-61f,
     0x1.572972p-94f, 0x1.5987c8p-95f, 0x1.91562p-20f, 0x1.ed6874p-59f,
     0x1.8273c4p-38f, 0.0f, 0.0f, 0x1.469566p-69f, 0x1.628a78p-19f, 0x1.267978p-93f,
     0x1.ebc8cp-34f, 0.0f, 0.0f, 0x1.904bacp-51f, 0.0f, 0.0f, 0x1.241d68p-96f, 0.0f,
     0x1.cebf64p-23f, 0.0f, 0x1.2197ep-86f, 0x1.e71ceep-36f, 0.0f, 0.0f, 0.0f,
     0x1.390348p-65f, 0.0f, 0x1.a7e644p-94f, 0x1.dc444p-60f, 0x1.74556ap-80f, 0.0f,
     0.0f, 0x1.bb8e96p-9f, 0.0f, 0x1.8ba32ep-117f, 0.0f, 0.0f, 0x1.a0b142p-88f, 0.0f,
     0.0f, 0x1.b05dccp-69f, 0.0f, 0.0f, 0x1.ada2fep-32f, 0x1.07eb18p-29f, 0.0f,
     0x1.2d15dep-4f, 0.0f, 0.0f, 0.0f, 0x1.0e17fp-24f, 0x1.25f23cp-55f,
     0x1.600362p-4f, 0.0f, 0.0f, 0x1.28a63ep-40f, 0x1.049e06p-76f, 0x1.e7175cp-83f,
     0x1.eea4f6p-31f, 0.0f, 0.0f, 0x1.4343bp-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab7e8ep-112f, 0.0f, 0x1.4c9558p-43f, 0.0f, 0.0f, 0x1.7c777ap-38f,
     0x1.bb187ep-37f, 0.0f, 0.0f, 0x1.e79f3p-61f, 0.0f, 0.0f, 0.0f, 0x1.de4c2cp-43f,
     0x1.82f0fep-116f, 0.0f, 0x1.a2b236p-31f, 0.0f, 0x1.caa704p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6175b8p-125f, 0x1.c5c504p-107f, 0.0f, 0x1.724dap-75f, 0.0f,
     0x1.689b48p-95f, 0x1.429deap-91f, 0x1.4d2466p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.37f17cp-7f, 0x1.c4dc34p-114f, 0.0f, 0.0f, 0x1.c64f7cp-47f, 0.0f,
     0x1.5a8b08p-79f, 0.0f, 0.0f, 0.0f, 0x1.f3a44ep-95f, 0x1.6260a4p-27f,
     0x1.9dcbb6p-14f, 0.0f, 0.0f, 0.0f, 0x1.c4e3bcp-77f, 0x1.b672d8p-104f, 0.0f,
     0x1.43e774p-105f, 0.0f, 0x1.b7ee56p-94f, 0x1.6fcff8p-18f, 0.0f, 0x1.22524ap-7f,
     0x1.a22fccp-62f, 0x1.06786ap-28f, 0.0f, 0x1.f41134p-4f, 0.0f, 0x1.c598e6p-51f,
     0.0f, 0x1.b0529p-107f, 0.0f, 0x1.3d2718p-36f, 0x1.ec24e4p-33f, 0.0f, 0.0f,
     0x1.e7fd88p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a5a06p-88f, 0.0f, 0.0f,
     0x1.bf5ed2p-81f, 0.0f, 0.0f, 0.0f, 0x1.1d8c8ep-27f, 0.0f, 0x1.9c94bp-74f,
     0x1.d07112p-28f, 0.0f, 0.0f, 0x1.ebbbb4p-85f, 0.0f, 0x1.810b3ep-99f,
     0x1.26c0e4p-43f, 0.0f, 0.0f, 0x1.2ea20cp-21f, 0x1.969a0ap-88f, 0.0f,
     0x1.be65dp-42f, 0x1.db0d64p-61f, 0x1.7c3fbp-22f, 0x1.a36cbcp-5f, 0x1.e7200cp-50f,
     0x1p0f, 0x1.f1568ep-21f, 0x1.d142ecp-125f, 0.0f, 0x1.743a18p-3f, 0.0f, 0.0f,
     0.0f, 0x1.a7bf56p-41f, 0.0f, 0x1.e263e2p-111f, 0x1.da9a8ep-97f, 0x1.f7ae58p-42f,
     0.0f, 0x1.e313e8p-18f, 0.0f, 0.0f, 0.0f, 0x1.7a642ep-52f, 0x1.0b0022p-63f,
     0x1.d798d2p-74f, 0.0f, 0x1.945ec4p-105f, 0x1.d12938p-38f, 0.0f, 0x1.0d2ffap-11f,
     0x1.e64d6cp-112f, 0x1.d00f32p-113f, 0.0f, 0x1.8e0712p-58f, 0x1.2e993p-47f,
     0x1.c9ec9p-62f, 0x1.8a271ep-2f, 0.0f, 0x1.7c4d7ap-36f, 0x1.443f3p-30f, 0.0f,
     0.0f, 0x1.661014p-52f, 0.0f, 0.0f, 0.0f, 0x1.01d7c8p-115f, 0x1.c360ep-122f,
     0x1.f389eap-22f, 0.0f, 0x1.912e1ep-6f, 0x1.0a4572p-12f, 0x1.dc6e12p-12f,
     0x1.41c98p-15f, 0x1.4577f2p-95f, 0.0f, 0x1.2dd578p-95f, 0x1.dbf44cp-61f, 0x1p0f,
     0x1.6f9fc4p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.a84584p-30f, 0.0f,
     0x1.ca9c7p-41f, 0.0f, 0.0f, 0.0f, 0x1.068bdcp-27f, 0x1.25d99cp-62f,
     0x1.c069bcp-1f, 0x1.16c758p-100f, 0.0f, 0x1.9e343cp-54f, 0x1.5c3cb2p-28f,
     0x1.14434ep-10f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.3b851ap-63f,
     0x1.64de62p-126f, 0.0f, 0x1.a2a202p-126f, 0.0f, 0x1p0f, 0x1.a204c6p-18f, 0.0f,
     0x1.4a32b6p-114f, 0x1.a2a862p-61f, 0x1.2c2bf4p-117f, 0x1.e36442p-125f,
     0x1.10a67ep-7f, 0x1.82063cp-49f, 0.0f, 0x1.30361cp-122f, 0x1.1ca89ap-20f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3482e4p-26f, 0x1.94ba2ep-34f, 0x1.739d92p-95f,
     0x1.e0c6bcp-119f, 0x1.640f94p-126f, 0x1.9a77f8p-17f, 0.0f, 0.0f, 0.0f,
     0x1.cedd62p-7f, 0x1.dd8494p-96f, 0.0f, 0x1.691a66p-77f, 0x1.afe3acp-87f,
     0x1.87826cp-46f, 0.0f, 0.0f, 0.0f, 0x1.8767eap-4f, 0x1.827e3ap-18f, 0.0f,
     0x1.01977ap-103f, 0x1.2f9faep-19f, 0x1.711e1cp-58f, 0x1.778af8p-84f, 0.0f,
     0x1.ac6284p-19f, 0.0f, 0x1.872258p-97f, 0.0f, 0x1.02eddp-19f, 0.0f,
     0x1.a3cabcp-105f, 0.0f, 0.0f, 0.0f, 0x1.2f4106p-65f, 0.0f, 0x1.0f1818p-23f, 0.0f,
     0x1.daec12p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a30d7ap-118f, 0.0f,
     0x1.257a94p-74f, 0x1.9c3688p-34f, 0.0f, 0.0f, 0x1.61d95ap-40f, 0.0f, 0.0f,
     0x1.cd4fap-82f, 0.0f, 0x1.dcdc3p-118f, 0.0f, 0.0f, 0x1.3a97a2p-50f, 0.0f, 0.0f,
     0.0f, 0x1.c28dd4p-41f, 0x1.2966c2p-104f, 0.0f, 0.0f, 0.0f, 0x1.a5a586p-80f,
     0x1.033d64p-18f, 0x1.432058p-26f, 0x1.bb2986p-126f, 0x1.cccd0cp-68f,
     0x1.b380a6p-100f, 0.0f, 0x1.5497cap-111f, 0x1.376fdap-1f, 0x1.0f1432p-46f,
     0x1.6d295cp-86f, 0.0f, 0.0f, 0x1.6d4dc8p-24f, 0x1.a24cap-12f, 0.0f, 0.0f, 0.0f,
     0x1.b67b9ap-42f, 0.0f, 0x1.518f7cp-59f, 0.0f, 0x1.5d1e04p-48f, 0.0f, 0.0f,
     0x1.3aa45ap-14f, 0.0f, 0x1.1d4608p-104f, 0.0f, 0.0f, 0x1.ed1684p-58f, 0.0f, 0.0f,
     0x1.e4e1f4p-48f, 0x1.026aap-59f, 0x1.ba3032p-79f, 0x1.9c1f4cp-9f,
     0x1.dcbeb8p-84f, 0.0f, 0x1.c05c04p-105f, 0x1.e98b5ap-126f, 0.0f, 0x1.07b36ap-50f,
     0.0f, 0.0f, 0x1.39a5d2p-30f, 0.0f, 0x1.bc045cp-70f, 0x1.d9b9cp-79f,
     0x1.363418p-85f, 0x1.02114ep-92f, 0x1.159408p-113f, 0.0f, 0x1.08f66ap-61f, 0.0f,
     0x1.34192ap-8f, 0.0f, 0x1.c5e40ep-81f, 0.0f, 0x1.f96a88p-119f, 0x1.9388f8p-87f,
     0x1.a5ffc4p-56f, 0.0f, 0x1.c6d84cp-103f, 0.0f, 0x1.ed2828p-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3aed4p-36f, 0.0f, 0x1.714ffcp-125f, 0x1.41837p-123f,
     0x1.b1b0bap-75f, 0.0f, 0.0f, 0x1.e8bda4p-116f, 0.0f, 0.0f, 0x1.a61fbcp-4f, 0.0f,
     0.0f, 0.0f, 0x1.297454p-27f, 0x1.6290b4p-69f, 0x1.e2c30ep-52f, 0x1.0a4ec2p-102f,
     0x1.e38dcep-87f, 0x1.866a8cp-87f, 0.0f, 0.0f, 0x1.579a5cp-51f, 0.0f,
     0x1.f95ad6p-120f, 0.0f, 0.0f, 0x1.cafc3cp-17f, 0x1.a095cp-16f, 0.0f, 0.0f,
     0x1.cd5962p-24f, 0x1.37a95cp-49f, 0x1.0a5a08p-111f, 0x1.268ff4p-16f, 0.0f, 0.0f,
     0x1.c11b26p-115f, 0.0f, 0x1.751dfap-44f, 0x1.703088p-5f, 0x1.380a5p-16f, 0.0f,
     0x1.9b8428p-81f, 0.0f, 0.0f, 0x1.d701b8p-58f, 0x1.b733fp-6f, 0x1.42721cp-47f,
     0x1.f62b34p-75f, 0x1.9809eep-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0749aep-39f, 0.0f,
     0x1.1d2d7p-110f, 0.0f, 0.0f, 0x1.8cd8e2p-107f, 0x1.579f54p-121f, 0x1.a8938cp-42f,
     0x1.d7c132p-15f, 0.0f, 0x1.71abe8p-95f, 0.0f, 0x1.16b5d6p-35f, 0.0f,
     0x1.76bd68p-96f, 0.0f, 0.0f, 0.0f, 0x1.832754p-28f, 0x1.de953ep-91f,
     0x1.db1ad8p-38f, 0x1.7346fcp-61f, 0.0f, 0x1.ceb9ap-1f, 0.0f, 0x1.4bbb6cp-96f,
     0.0f, 0x1.80e24p-10f, 0.0f, 0.0f, 0x1.dc19bap-82f, 0x1.05b18p-61f,
     0x1.fd1beap-74f, 0.0f, 0x1.6eccdcp-88f, 0x1.ec423ep-24f, 0.0f, 0x1.344fccp-14f,
     0.0f, 0x1.bb64c4p-102f, 0x1.d61818p-29f, 0x1.f5f774p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5e1378p-65f, 0x1.ba8fecp-3f, 0.0f, 0x1.bf8f4p-38f, 0.0f,
     0x1.4bdfc8p-43f, 0x1.08f28cp-111f, 0x1.069238p-45f, 0x1.664fecp-66f,
     0x1.91fc2p-6f, 0x1.001efp-103f, 0.0f, 0x1.6e39c8p-115f, 0.0f, 0.0f,
     0x1.ba72d8p-97f, 0.0f, 0x1.6e0904p-61f, 0.0f, 0x1.7f7804p-44f, 0x1.9d7004p-56f,
     0x1.8a6be2p-57f, 0x1.4995bap-87f, 0.0f, 0x1.5cdc02p-6f, 0x1.29a8dap-120f,
     0x1.a42174p-26f, 0x1.03cfd4p-51f, 0x1.fc98dep-85f, 0.0f, 0.0f, 0x1.6687a6p-68f,
     0x1.5b6992p-114f, 0x1.ad1c72p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb45c4p-69f,
     0x1.b4ca38p-83f, 0x1.4bb8f8p-111f, 0.0f, 0x1.5bafaep-45f, 0x1.f40f3ap-46f, 0.0f,
     0.0f, 0x1.72d692p-5f, 0x1.bbaae4p-57f, 0x1.b4afap-97f, 0.0f, 0x1.ba6806p-72f,
     0x1.c8c9bcp-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d652ep-78f, 0x1.2af3e6p-82f,
     0x1.a595d4p-40f, 0.0f, 0x1.70389ep-78f, 0x1.a9197ap-71f, 0x1.91a12p-86f, 0.0f,
     0x1.52fe22p-96f, 0x1.ceba4ep-107f, 0.0f, 0.0f, 0.0f, 0x1.4ab2dap-96f,
     0x1.b74c52p-57f, 0.0f, 0x1.0f2952p-81f, 0.0f, 0.0f, 0x1.421e12p-43f, 0.0f,
     0x1.64b2a2p-36f, 0.0f, 0x1.5a7ecp-74f, 0x1.a1867p-14f, 0x1.1e608p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d86812p-15f, 0.0f, 0.0f, 0x1.6575ccp-9f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.05001ap-117f, 0.0f, 0.0f, 0x1.cfdfcp-36f, 0x1.6d518p-55f, 0.0f, 0.0f,
     0x1.b0b8cep-12f, 0.0f, 0x1.877ccp-5f, 0x1.bfa292p-3f, 0.0f, 0x1.d0bc16p-46f,
     0.0f, 0x1.e6ec74p-38f, 0x1.9036e8p-68f, 0x1.0b6b2ep-69f, 0x1.3d35p-51f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.21e1f6p-51f, 0x1.51cf8p-37f, 0.0f, 0.0f, 0x1.58a6f6p-117f,
     0x1.e30cd8p-6f, 0x1.c41b56p-52f, 0x1.aeb194p-75f, 0.0f, 0x1.c64c4ap-111f,
     0x1.2cbacap-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db4078p-112f,
     0x1.75740ap-10f, 0.0f, 0x1.07adfcp-32f, 0x1.5fcff4p-104f, 0.0f, 0.0f,
     0x1.4b8d02p-36f, 0x1.d4efbep-21f, 0.0f, 0x1.e1da4ap-16f, 0.0f, 0x1.854988p-66f,
     0x1.c8fcd6p-43f, 0x1.a64f98p-115f, 0x1.0f748ep-13f, 0x1.4763ep-87f,
     0x1.300f9cp-32f, 0.0f, 0x1.ec52eap-113f, 0x1.6166ap-51f, 0.0f, 0x1.5772aep-113f,
     0.0f, 0.0f, 0x1.8554fcp-7f, 0.0f, 0.0f, 0.0f, 0x1.95133ap-85f, 0x1.100c46p-50f,
     0.0f, 0x1.f32ef6p-105f, 0x1.b79826p-86f, 0x1.eb8a8cp-30f, 0x1.097ec6p-32f, 0.0f,
     0.0f, 0.0f, 0x1.7dfe96p-31f, 0.0f, 0.0f, 0x1.9384b2p-78f, 0.0f, 0x1.b35acap-52f,
     0x1.c369c8p-57f, 0x1.ec0b26p-100f, 0x1.242aacp-80f, 0.0f, 0x1.21c23ap-81f, 0.0f,
     0x1.b07dd2p-83f, 0.0f, 0x1.594e12p-92f, 0x1.97b31ap-111f, 0x1.dafa46p-118f,
     0x1.a1172cp-21f, 0x1.3b38dp-124f, 0.0f, 0x1.f4f9b2p-58f, 0x1.67776p-75f,
     0x1.7877b2p-118f, 0.0f, 0x1.124492p-31f, 0.0f, 0x1.eead92p-120f, 0x1.e92ec2p-66f,
     0.0f, 0.0f, 0x1.8705fep-46f, 0.0f, 0.0f, 0.0f, 0x1.3bcd62p-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9cb356p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e4e09p-45f,
     0x1.482252p-6f, 0.0f, 0.0f, 0x1.287726p-39f, 0.0f, 0x1.9bb91ep-29f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8b74cp-7f, 0x1.69d086p-46f, 0.0f, 0x1.9853aap-117f, 0.0f, 0.0f,
     0x1.4c855ap-115f, 0x1.712e42p-3f, 0x1.a5c3f4p-83f, 0.0f, 0x1.9bb8b6p-23f,
     0x1.3124aep-63f, 0.0f, 0x1.caeedcp-87f, 0.0f, 0x1.4389fap-39f, 0.0f, 0.0f, 0.0f,
     0x1.8559e6p-99f, 0.0f, 0x1.0c61b2p-55f, 0.0f, 0x1.d503e4p-38f, 0.0f,
     0x1.846ccp-78f, 0x1.659a1cp-20f, 0x1.7e025ep-7f, 0x1.b7ee1ep-105f,
     0x1.27b6c4p-53f, 0.0f, 0.0f
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
            tmp1 = Sleef_sqrtf4_u35kvx(tmp0);
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
    printf("Sleef_sqrtf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
