/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf4_u10kvx.c --function Sleef_sinf4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.11ca6p-49f, 0x1.7ac9cap-31f, 0x1.3ffb14p-31f, 0.0f, 0.0f, 0.0f,
     0x1.1ddd56p-113f, 0.0f, 0.0f, 0x1.4d02c2p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4ac32p-12f, 0x1.5582cap-83f, 0.0f, 0x1.a7f442p-92f, 0.0f, 0x1.2bfb02p-46f,
     0x1.313814p-16f, 0x1.e1f3b6p-116f, 0.0f, 0.0f, 0x1.89b40cp-84f, 0x1.5b0476p-124f,
     0x1.9f7286p-109f, 0.0f, 0.0f, 0x1.70e706p-25f, 0.0f, 0.0f, 0.0f,
     0x1.172f9ep-121f, 0.0f, 0x1.869c9p-123f, 0x1.a5fbb8p-47f, 0x1.eb9482p-43f, 0.0f,
     0.0f, 0x1.bc4712p-12f, 0x1.5e01c8p-71f, 0.0f, 0x1.00de14p-89f, 0x1.230b2ep-63f,
     0.0f, 0x1.006082p-99f, 0.0f, 0x1.fba25cp-42f, 0.0f, 0x1.4003f4p-101f,
     0x1.b3bf98p-2f, 0.0f, 0.0f, 0x1.9ebca2p-88f, 0.0f, 0x1.3fc096p-29f, 0.0f, 0.0f,
     0x1.34f8e8p-69f, 0x1.5cc364p-41f, 0x1.6f08d6p-61f, 0x1.5147d2p-37f, 0.0f,
     0x1.ebb51ap-13f, 0.0f, 0.0f, 0x1.0baacap-102f, 0.0f, 0x1.5e97eep-118f, 0.0f,
     0.0f, 0x1.e85202p-99f, 0.0f, 0x1.f7acbp-107f, 0.0f, 0x1.1404c6p-3f, 0.0f, 0.0f,
     0x1.9c6e38p-107f, 0x1.abe5b2p-86f, 0x1.98ce38p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8f565ep-39f, 0x1.c95d18p-38f, 0x1.c11682p-33f, 0x1.0f4466p-78f,
     0x1.97ab46p-45f, 0.0f, 0x1.e04dc6p-24f, 0.0f, 0.0f, 0x1.3cf744p-68f,
     0x1.97d5fep-11f, 0.0f, 0.0f, 0x1.323656p-88f, 0x1.c9fdfap-21f, 0.0f, 0.0f,
     0x1.c01f7ep-78f, 0.0f, 0.0f, 0.0f, 0x1.b4979p-44f, 0x1.788628p-70f,
     0x1.8d11d4p-86f, 0.0f, 0x1.757494p-92f, 0.0f, 0.0f, 0x1.85e5ep-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.596ccap-41f, 0x1.ec0ea8p-76f, 0x1.a3d712p-87f, 0x1.b45b7ep-56f,
     0.0f, 0x1.5fd4a8p-119f, 0.0f, 0x1.62d026p-100f, 0.0f, 0.0f, 0x1.4d5b5ep-41f,
     0x1.dd1ca6p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9eaa5cp-64f, 0x1.651edep-99f,
     0x1.b1f824p-88f, 0x1.21a3d8p-52f, 0x1.116a3cp-7f, 0.0f, 0.0f, 0x1.70dfacp-5f,
     0.0f, 0x1.36e368p-21f, 0.0f, 0.0f, 0.0f, 0x1.91a956p-37f, 0x1.6aa8fp-110f, 0.0f,
     0x1.e906fp-39f, 0.0f, 0.0f, 0x1.ad4acp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5e728p-124f, 0.0f, 0.0f, 0x1.27c5ccp-76f, 0.0f, 0.0f, 0x1.dc1ad8p-40f,
     0x1.182202p-99f, 0.0f, 0.0f, 0x1.497156p-124f, 0x1.aa24bap-119f, 0x1.a9b47p-8f,
     0.0f, 0x1.d2700ep-50f, 0.0f, 0x1.6f3d7ep-34f, 0x1.0d292ap-30f, 0.0f,
     0x1.5b662cp-12f, 0x1.5efdc6p-71f, 0.0f, 0x1.e8b722p-24f, 0x1.fc6d8cp-48f, 0.0f,
     0.0f, 0x1.5a78fp-71f, 0.0f, 0x1.3d7ad2p-15f, 0.0f, 0x1.b33d5ep-30f, 0.0f,
     0x1.47f37p-4f, 0.0f, 0x1.5d9dap-89f, 0.0f, 0x1.2aefbap-56f, 0x1.8c4ebp-83f, 0.0f,
     0x1.683312p-86f, 0.0f, 0x1.3d6cccp-86f, 0.0f, 0x1.0ed988p-1f, 0x1.76f46cp-50f,
     0x1.284f7p-97f, 0x1.d3c8f2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fac03cp-45f, 0.0f,
     0.0f, 0x1.165a5p-119f, 0x1.8ed4bep-114f, 0.0f, 0.0f, 0x1.1bdfc2p-105f,
     0x1.c5c138p-23f, 0x1.b1f4bcp-32f, 0x1.eb4e22p-121f, 0x1.1e846ep-109f, 0.0f,
     0x1.8f7f1cp-15f, 0x1.bfb9a2p-114f, 0x1.85b6bep-95f, 0.0f, 0x1.0779bep-17f, 0.0f,
     0x1.5c5882p-37f, 0.0f, 0x1.180e02p-79f, 0x1.b4eadcp-66f, 0x1.450776p-38f,
     0x1.e8a6fcp-7f, 0.0f, 0x1.22512ap-49f, 0.0f, 0x1.1ad568p-104f, 0.0f, 0.0f,
     0x1.788136p-60f, 0x1.a71b02p-106f, 0.0f, 0x1.e39bcp-123f, 0.0f, 0x1.5a9abep-61f,
     0.0f, 0x1.950768p-55f, 0.0f, 0x1.767fc6p-68f, 0x1.e76abp-114f, 0x1.87e67p-121f,
     0.0f, 0.0f, 0x1.c2d702p-66f, 0.0f, 0x1.404d1ep-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.465ddep-31f, 0x1.fd5572p-46f, 0.0f, 0x1.ebfb6ep-117f, 0.0f, 0.0f,
     0x1.5e57c2p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.213a0ep-52f, 0x1.b7f128p-17f,
     0x1.f6f532p-105f, 0.0f, 0x1.d0f204p-7f, 0.0f, 0x1.5e8176p-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f89abp-95f, 0x1.e30f6ap-14f, 0x1.831562p-13f, 0x1.e3319p-70f,
     0x1.b363f8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.288062p-72f, 0x1.1700f2p-106f,
     0.0f, 0.0f, 0.0f, 0x1.9c5bf4p-69f, 0.0f, 0x1.a9a392p-45f, 0x1.a415ecp-39f,
     0x1.9e67dp-28f, 0x1.b54c02p-61f, 0x1.02e79ap-2f, 0x1.283f24p-85f,
     0x1.786318p-33f, 0.0f, 0x1.4f85b6p-69f, 0x1.3268c6p-117f, 0x1.6086d6p-108f,
     0x1.90ea5cp-50f, 0.0f, 0.0f, 0x1.b59292p-4f, 0x1.031ddap-48f, 0x1.f7a098p-18f,
     0x1.46f94ep-43f, 0x1.909c06p-116f, 0x1.e22732p-111f, 0.0f, 0.0f,
     0x1.c93e3ep-120f, 0.0f, 0.0f, 0.0f, 0x1.dda092p-21f, 0x1.5507a8p-117f,
     0x1.0a9a16p-119f, 0x1.77b4b6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84d63cp-102f, 0x1.59488cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9866dcp-6f,
     0x1.7eb18ep-111f, 0.0f, 0x1.7ca1d8p-31f, 0x1.a3be3ep-100f, 0x1.ebedeap-54f,
     0x1.7f4f2ep-24f, 0x1.496188p-12f, 0x1.068486p-9f, 0.0f, 0x1.b2bd52p-7f,
     0x1.399f8p-86f, 0x1.af4634p-58f, 0x1.71a894p-85f, 0.0f, 0.0f, 0.0f,
     0x1.ebb68p-77f, 0x1.da207ep-11f, 0x1.fed90ap-54f, 0x1.5ec0ap-11f, 0.0f,
     0x1.ec9baep-97f, 0.0f, 0.0f, 0x1.561766p-122f, 0x1.cac64cp-110f,
     0x1.88ed34p-123f, 0x1.eb33ep-46f, 0x1.1b7ba2p-94f, 0x1.e5eb38p-14f, 0.0f,
     0x1.108706p-104f, 0x1.e24bp-96f, 0.0f, 0x1.696df8p-39f, 0.0f, 0x1.13a88p-22f,
     0.0f, 0x1.b25ea6p-51f, 0x1.ca61bp-7f, 0x1.d3e6e2p-43f, 0x1.4d956cp-75f, 0.0f,
     0x1.c45c6cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7409acp-80f, 0.0f, 0.0f,
     0x1.16a9f2p-61f, 0x1.e7cfbp-102f, 0.0f, 0x1.be6288p-14f, 0.0f, 0.0f, 0.0f,
     0x1.d1a15ep-72f, 0.0f, 0x1.433d12p-61f, 0.0f, 0x1.d7daaep-95f, 0x1.6554f6p-49f,
     0x1.4109ecp-32f, 0x1.d99f96p-93f, 0x1.2c9d12p-81f, 0x1.5517f8p-25f, 0.0f,
     0x1.cdd664p-86f, 0.0f, 0x1.b8f2c8p-106f, 0.0f, 0.0f, 0x1.73a586p-96f, 0.0f,
     0x1.91a638p-122f, 0.0f, 0.0f, 0x1.596122p-98f, 0.0f, 0x1.a0bdfap-30f,
     0x1.80d2b8p-118f, 0x1.1c16d4p-71f, 0x1.b6b5f4p-41f, 0x1.86c7a4p-94f, 0.0f,
     0x1.ceefp-120f, 0.0f, 0x1.006356p-49f, 0.0f, 0.0f, 0.0f, 0x1.7ff2f6p-81f, 0.0f,
     0x1.8f9dfcp-108f, 0x1.70e72cp-100f, 0.0f, 0x1.cad998p-61f, 0x1.2eb266p-104f,
     0x1.7773e8p-79f, 0x1.775422p-8f, 0.0f, 0.0f, 0x1.eeda3ep-61f, 0x1.2a7266p-105f,
     0x1.e7d7b8p-14f, 0x1.bc6e92p-33f, 0.0f, 0x1.1f39acp-103f, 0.0f, 0x1.2087f4p-125f,
     0x1.160ddcp-48f, 0.0f, 0.0f, 0.0f, 0x1.acb3dp-5f, 0x1.7ca2f8p-68f,
     0x1.3b6b4ep-105f, 0x1.55bcccp-113f, 0x1.2ae372p-79f, 0x1.3dd8fcp-94f,
     0x1.cc1a8ap-84f, 0.0f, 0x1.69f882p-23f, 0.0f, 0x1.11ea42p-28f, 0.0f,
     0x1.f4fd3p-70f, 0x1.f4ca2ep-70f, 0x1.3a13ccp-46f, 0.0f, 0.0f, 0.0f,
     0x1.8ce59p-49f, 0x1.2475eep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f9136p-65f,
     0x1.e74a7ep-51f, 0x1.1f8fd2p-4f, 0x1.1a3a34p-71f, 0x1.607e44p-65f,
     0x1.05007p-115f, 0.0f, 0x1.aebef4p-57f, 0.0f, 0.0f, 0x1.82491cp-52f, 0.0f,
     0x1.17995ep-109f, 0.0f, 0.0f, 0x1.f2c666p-80f, 0.0f, 0.0f, 0.0f, 0x1.4d384p-119f,
     0x1.5a374cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.273688p-100f, 0x1.80b884p-55f, 0.0f,
     0x1.dcf7a6p-31f, 0x1.9027a6p-123f, 0x1.d808b8p-105f, 0x1.8dbd7cp-92f, 0.0f,
     0x1.8ff744p-104f, 0x1.4bb486p-110f, 0x1.b4dd8p-75f, 0x1.2528c8p-111f, 0.0f, 0.0f,
     0.0f, 0x1.95c03cp-81f, 0.0f, 0.0f, 0x1.cfbf5ep-41f, 0.0f, 0x1.2fbd36p-58f, 0.0f,
     0x1.1f0b84p-89f, 0x1.979328p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9539ep-37f, 0x1.714d26p-88f, 0x1.5ab4c6p-85f, 0x1.51eb4ep-14f, 0.0f, 0.0f,
     0.0f, 0x1.b70c68p-100f, 0x1.3df83ap-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ed4f8ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a1c7p-91f, 0.0f, 0x1.06b5e2p-122f,
     0.0f, 0x1.8d04fep-94f, 0x1.1c14b8p-52f, 0x1.144294p-35f, 0.0f, 0.0f,
     0x1.b48306p-41f, 0x1.c3bf6cp-61f, 0x1.095348p-40f, 0.0f, 0.0f, 0.0f,
     0x1.460bccp-32f, 0x1.537ad6p-120f, 0x1.c94d82p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38dfbp-13f, 0x1.14f9aep-88f, 0.0f, 0x1.8fef5ep-33f, 0.0f, 0x1.fe435ep-29f,
     0.0f, 0x1.10a408p-5f, 0.0f, 0x1.d0c73p-97f, 0.0f, 0.0f, 0.0f, 0x1.c23452p-22f,
     0.0f, 0x1.044d1ap-5f, 0x1.ce7946p-65f, 0x1.9024f2p-68f, 0.0f, 0x1.627c8ap-87f,
     0.0f, 0.0f, 0x1.797e3p-83f, 0.0f, 0.0f, 0x1.52b6p-58f, 0x1.9d929ap-3f,
     0x1.8743d2p-34f, 0x1.8f276p-67f, 0x1.d23032p-38f, 0.0f, 0.0f, 0x1.455888p-80f,
     0x1.ffe70ep-70f, 0x1.e8408cp-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17a1ap-36f, 0x1.18d6eep-25f, 0.0f, 0.0f, 0x1.9d057p-23f, 0x1.2ba326p-47f,
     0.0f, 0x1.01b642p-114f, 0.0f, 0x1.f429b6p-52f, 0.0f, 0.0f, 0x1.117a5cp-96f, 0.0f,
     0x1.01798ep-4f, 0x1.dd70acp-57f, 0x1.9a37ecp-88f, 0.0f, 0.0f, 0x1.471bdep-7f,
     0x1.cd950ep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be5b5cp-72f, 0x1.85d58ap-61f,
     0x1.f15e04p-94f, 0.0f, 0x1.3be33p-32f, 0x1.1b15bap-83f, 0x1.1ad4dcp-14f, 0.0f,
     0.0f, 0x1.13a684p-88f, 0.0f, 0x1.487cf6p-7f, 0x1.76d984p-107f, 0x1.8a0ep-33f,
     0.0f, 0.0f, 0x1.e13b68p-45f, 0.0f, 0.0f, 0x1.1da1dap-47f, 0.0f, 0.0f,
     0x1.7bcd5ep-17f, 0x1.af7be8p-5f, 0x1.25d3b4p-96f, 0x1.ae03b4p-104f,
     0x1.5a9816p-26f, 0x1.6c3bf8p-64f, 0x1.971dap-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85f282p-29f, 0x1.ea2ceep-82f, 0x1.7a8a74p-117f, 0.0f, 0x1.07b4bp-84f,
     0x1.758c88p-29f, 0.0f, 0x1.e7d804p-92f, 0x1.aea74cp-9f, 0.0f, 0.0f,
     0x1.6a0b4ep-17f, 0.0f, 0x1.f32952p-91f, 0.0f, 0.0f, 0x1.a3c1eep-55f,
     0x1.422a76p-56f, 0.0f, 0x1.ad39d4p-72f, 0.0f, 0x1.b0513p-20f, 0.0f,
     0x1.bd79eep-105f, 0.0f, 0x1.2022bp-79f, 0.0f, 0x1.75ae12p-14f, 0x1.d0415ep-17f,
     0.0f, 0.0f, 0x1.bbd5dap-99f, 0.0f, 0x1.dcfe32p-38f, 0x1.a65a24p-119f, 0.0f,
     0x1.97c20ep-40f, 0x1.fe07d6p-100f, 0x1.ae46d4p-102f, 0.0f, 0x1.d73d5ep-54f,
     0x1.1aa372p-99f, 0.0f, 0.0f, 0x1.741782p-18f, 0x1.bd6466p-38f, 0x1.d63434p-9f,
     0.0f, 0.0f, 0x1.3d45bp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.261af6p-108f, 0.0f,
     0x1.00f612p-77f, 0x1.aeff9p-83f, 0x1.cff166p-22f, 0x1.6407bap-102f,
     0x1.e744d8p-32f, 0x1.91ab56p-55f, 0.0f, 0x1.2fcecep-121f, 0x1.60245cp-120f,
     0x1.46303p-99f, 0x1.643526p-96f, 0.0f, 0x1.a152d4p-112f, 0.0f, 0x1.195af8p-105f,
     0x1.6105cp-11f, 0x1.c7b0a6p-120f, 0.0f, 0x1.582166p-8f, 0x1.fb9a7ep-86f, 0.0f,
     0.0f, 0x1.e675eep-90f, 0x1.fbc53cp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16f7dep-68f, 0.0f, 0x1.16ee62p-103f, 0x1.73cb34p-42f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b9f546p-124f, 0.0f, 0x1.2e50f2p-56f, 0x1.5bea84p-29f, 0x1.9ef526p-95f,
     0x1.2b8f48p-32f, 0.0f, 0x1.3c0106p-58f, 0.0f, 0x1.eb8cacp-96f, 0.0f, 0.0f,
     0x1.bdcdaap-126f, 0x1.0c5bd4p-28f, 0x1.0c81aep-61f, 0.0f, 0.0f, 0x1.76800ap-102f,
     0x1.5a0e92p-67f, 0x1p0f, 0x1.b1f4cep-76f, 0x1.263526p-37f, 0.0f, 0.0f,
     0x1.36f036p-26f, 0x1.e05434p-41f, 0.0f, 0x1.8234a6p-90f, 0.0f, 0x1.78ee8p-112f,
     0x1.542106p-66f, 0x1.845e82p-105f, 0x1.bf9778p-6f, 0x1.d53a44p-2f, 0.0f,
     0x1.9e31dp-86f, 0.0f, 0.0f, 0.0f, 0x1.55a57p-88f, 0.0f, 0x1.5e2eecp-13f,
     0x1.5c57f4p-111f, 0.0f, 0x1.1b57b8p-120f, 0.0f, 0x1.192b06p-89f, 0.0f, 0.0f,
     0.0f, 0x1.66f58p-8f, 0x1.8c7edp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.23944cp-110f, 0.0f, 0x1.2c0db6p-125f, 0x1.c4bc8p-14f, 0.0f, 0.0f, 0.0f,
     0x1.b03f3p-119f, 0x1.1b3488p-55f, 0x1p0f, 0.0f, 0x1.9e3d24p-85f,
     0x1.f602ecp-119f, 0.0f, 0x1.f075dcp-15f, 0x1.488e0ap-126f, 0.0f, 0x1.a51b3ap-53f,
     0x1.dba7e8p-44f, 0x1.76a3bcp-60f, 0.0f, 0x1.ba729cp-91f, 0.0f, 0.0f,
     0x1.4adc68p-75f, 0x1.1659fcp-2f, 0x1.ddf0c8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c2182p-44f, 0.0f, 0.0f, 0x1.1e613cp-106f, 0x1.bd0378p-23f, 0.0f, 0.0f,
     0.0f, 0x1.f3717ep-29f, 0.0f, 0.0f, 0.0f, 0x1.595562p-106f, 0x1.ed292cp-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e39e2p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b7ac8p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da8b9ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.c993e4p-26f, 0.0f, 0x1.bcc96ap-80f, 0.0f, 0.0f, 0x1.ddd72ap-78f,
     0x1.68d6dcp-43f, 0x1.1a3d5p-118f, 0.0f, 0.0f, 0x1.cb0714p-12f, 0x1.ac1cd4p-74f,
     0x1.773cfcp-101f, 0x1.55d786p-25f, 0x1.868066p-116f, 0x1.11b57ap-70f, 0.0f,
     0x1.0e223p-112f, 0.0f, 0x1.37e5d8p-27f, 0x1.ed2e6p-12f, 0x1.3c1f8p-37f,
     0x1.99406ap-43f, 0x1.a0768ap-91f, 0x1.befca4p-55f, 0.0f, 0x1.f5e84cp-24f, 0.0f,
     0x1.c65fd6p-92f, 0.0f, 0x1.f5845cp-66f, 0x1.cd4b44p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b05922p-105f, 0x1.60f94ap-99f, 0.0f, 0.0f, 0x1.4f0c3p-17f, 0x1.b34768p-87f,
     0x1.c8a11p-29f, 0.0f, 0.0f, 0x1.e8108cp-28f, 0x1.baf2aap-79f, 0.0f,
     0x1.637628p-95f, 0.0f, 0.0f, 0.0f, 0x1.22e6d2p-104f, 0.0f, 0x1.a8d002p-97f, 0.0f,
     0.0f, 0.0f, 0x1.cd6878p-67f, 0.0f, 0x1.68627p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.580e2p-44f, 0x1.265a02p-32f, 0x1.11792p-124f, 0x1p0f, 0x1.af54c4p-88f, 0.0f,
     0.0f, 0.0f, 0x1.255662p-49f, 0.0f, 0x1.d8d876p-59f, 0.0f, 0x1.7d5914p-19f,
     0x1.28573p-89f, 0.0f, 0x1.b7e334p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71061ep-108f,
     0x1.988974p-61f, 0.0f, 0.0f, 0.0f, 0x1.70a874p-110f, 0x1.ff4eb8p-115f, 0.0f,
     0x1.5a526ep-6f, 0.0f, 0x1.1d3612p-106f, 0x1.896b6ap-50f, 0x1.016288p-34f, 0.0f,
     0x1.5436dp-7f
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
            tmp1 = Sleef_sinf4_u10kvx(tmp0);
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
    printf("Sleef_sinf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
