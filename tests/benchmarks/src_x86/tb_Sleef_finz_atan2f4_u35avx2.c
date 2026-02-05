/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f4_u35avx2128.c --function \
 *     Sleef_finz_atan2f4_u35avx2128 --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.6b1b18p-49f, 0x1.3cdd0cp-5f, 0.0f, 0x1.e09ca8p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcc61cp-96f, 0x1.0d1f8ep-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d2fccp-39f, 0x1.518ffp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6688e4p-121f, 0x1.41f142p-42f, 0.0f, 0.0f, 0x1.f0fcfcp-66f, 0x1.0d0fb8p-48f,
     0.0f, 0.0f, 0.0f, 0x1.5f39d8p-28f, 0x1.65be64p-105f, 0.0f, 0.0f, 0x1.1e0c9cp-83f,
     0x1.3a986p-100f, 0x1.8319fap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbbb56p-14f,
     0x1.5207a8p-45f, 0.0f, 0x1.f1b8f4p-87f, 0.0f, 0.0f, 0x1.dc23dap-8f, 0.0f,
     0x1.1ac4e6p-69f, 0x1.e3781cp-97f, 0.0f, 0x1.f72432p-84f, 0x1.3a699ap-85f,
     0x1.0c9f54p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c00e2p-117f,
     0x1.83df8ep-61f, 0.0f, 0x1.26278cp-60f, 0x1.b899aep-121f, 0x1.262146p-74f,
     0x1.e60ccap-104f, 0x1.45db02p-114f, 0x1.4e0d38p-51f, 0x1.6c7bc4p-18f,
     0x1.38519cp-18f, 0.0f, 0.0f, 0.0f, 0x1.1f08a8p-123f, 0x1.cc88bp-57f,
     0x1.e277cp-10f, 0x1.9b3752p-85f, 0x1.0f04d2p-41f, 0x1.740d4ap-126f, 0.0f,
     0x1.187d9ap-106f, 0.0f, 0x1.70fdb6p-104f, 0.0f, 0.0f, 0x1.745016p-30f,
     0x1.06f464p-98f, 0.0f, 0.0f, 0x1.5554f6p-54f, 0x1.afeb82p-88f, 0x1.d842cep-69f,
     0.0f, 0.0f, 0x1.d96c1cp-75f, 0.0f, 0.0f, 0.0f, 0x1.3ea59p-22f, 0.0f, 0.0f,
     0x1.c1c79ap-126f, 0x1.a52b6p-69f, 0x1.52b5a8p-37f, 0.0f, 0.0f, 0.0f,
     0x1.2e953ep-61f, 0x1.07d1fp-71f, 0x1.59fed2p-116f, 0x1.4c2fecp-80f,
     0x1.0e1246p-60f, 0x1.d439dap-40f, 0.0f, 0x1.aae7bep-6f, 0.0f, 0x1.0bea4ep-60f,
     0x1.0cded2p-71f, 0.0f, 0x1.e1f862p-119f, 0x1.7de9bep-106f, 0x1.f596b8p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94d244p-76f, 0x1.d2a018p-80f,
     0x1.689572p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7a7616p-126f, 0x1.084966p-122f,
     0x1.9d5136p-39f, 0.0f, 0.0f, 0x1.efd6c8p-55f, 0x1.ac3bbap-58f, 0x1.addabep-125f,
     0x1.7ef0dp-29f, 0.0f, 0.0f, 0x1.30f23cp-49f, 0.0f, 0x1.f712ap-108f,
     0x1.71b0fap-102f, 0x1.abaf08p-32f, 0.0f, 0x1.636e4p-58f, 0.0f, 0x1.ca7cc4p-88f,
     0.0f, 0.0f, 0x1.fc0458p-75f, 0x1.808e22p-70f, 0x1.41bc74p-79f, 0.0f, 0.0f, 0.0f,
     0x1.9667a2p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.297f38p-73f, 0.0f, 0.0f,
     0x1.dd20b2p-106f, 0.0f, 0x1.511634p-28f, 0.0f, 0x1.cbd366p-39f, 0.0f,
     0x1.94e1e8p-60f, 0.0f, 0x1.ba9d94p-76f, 0x1.a4d12cp-26f, 0.0f, 0x1.eb2282p-6f,
     0x1.7a6eb4p-74f, 0.0f, 0.0f, 0.0f, 0x1.4043dcp-116f, 0x1.b174dep-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3cac6ep-8f, 0x1.becc96p-52f, 0x1.c34d76p-66f, 0x1.8a17c4p-125f,
     0.0f, 0x1.e2b4d2p-57f, 0.0f, 0.0f, 0.0f, 0x1.8cc472p-106f, 0.0f, 0.0f,
     0x1.be049ap-74f, 0x1.6b8b1ap-65f, 0.0f, 0.0f, 0.0f, 0x1.7864c6p-93f,
     0x1.510cf6p-115f, 0.0f, 0x1.67eac8p-90f, 0x1.d100bcp-99f, 0x1.84fe56p-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db4d6cp-30f, 0.0f, 0.0f, 0x1.c9d916p-44f, 0.0f, 0.0f,
     0x1.7b8a3p-41f, 0.0f, 0x1.593ed8p-36f, 0.0f, 0.0f, 0.0f, 0x1.ac441p-12f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bccde6p-112f, 0.0f, 0.0f, 0.0f,
     0x1.fb2beap-64f, 0.0f, 0.0f, 0x1.cca548p-23f, 0x1.891674p-86f, 0x1.07832cp-52f,
     0.0f, 0.0f, 0x1.ec1f9cp-37f, 0x1.5b1078p-20f, 0.0f, 0x1.6275aap-34f, 0.0f,
     0x1.765d56p-116f, 0x1.b85c84p-95f, 0.0f, 0.0f, 0x1.bfdf72p-78f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7c776cp-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ed7e2p-28f, 0.0f,
     0x1p0f, 0x1.11e92p-63f, 0x1.8c35bp-47f, 0x1.195e98p-94f, 0x1.e09282p-107f,
     0x1.6d371cp-67f, 0.0f, 0x1.0b8adp-27f, 0x1.fb77d2p-80f, 0.0f, 0x1.992638p-59f,
     0x1.f44b5p-52f, 0x1.0fbd22p-119f, 0x1.e66c06p-66f, 0x1.2dd11p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f41e8cp-88f, 0.0f, 0x1.e8715ep-67f, 0.0f, 0.0f, 0x1.37d364p-5f,
     0.0f, 0x1.c50b74p-104f, 0x1.edb05ep-20f, 0.0f, 0.0f, 0x1.312decp-62f, 0.0f, 0.0f,
     0.0f, 0x1.72f4ccp-78f, 0x1.f9545ep-16f, 0.0f, 0x1.8785fcp-12f, 0x1.e6a6fep-83f,
     0.0f, 0.0f, 0x1.5acb1ap-102f, 0.0f, 0x1.108f4cp-38f, 0x1.5b46d6p-45f,
     0x1.67fe08p-45f, 0x1.9b91a4p-67f, 0x1.1a3c96p-85f, 0.0f, 0x1.52e512p-66f,
     0x1.2b97b6p-89f, 0x1.559496p-116f, 0x1.f97e74p-58f, 0x1p0f, 0x1.19cc0ap-89f,
     0x1.fef238p-74f, 0x1.09b97ep-89f, 0x1.c4c8c4p-71f, 0x1.2b577cp-12f, 0.0f,
     0x1.6942bcp-63f, 0x1.3a5e36p-77f, 0x1.5ed6c4p-70f, 0x1.018d7ep-125f, 0.0f,
     0x1.6c1dbap-33f, 0.0f, 0x1.cb775p-12f, 0x1.119f42p-50f, 0.0f, 0x1.1c5f3cp-75f,
     0.0f, 0x1.a0fbccp-45f, 0.0f, 0.0f, 0x1.1060a6p-51f, 0x1.b01738p-56f,
     0x1.b242dep-86f, 0.0f, 0.0f, 0.0f, 0x1.a1af02p-78f, 0.0f, 0x1.c76fb4p-45f,
     0x1.17725ep-6f, 0.0f, 0x1.8363d4p-2f, 0x1.002d06p-95f, 0.0f, 0x1.881dc8p-54f,
     0x1.6581a8p-22f, 0.0f, 0x1.09c47cp-74f, 0.0f, 0x1.79515p-87f, 0.0f,
     0x1.423a02p-20f, 0.0f, 0x1.922d02p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb8aaep-105f, 0.0f, 0x1.0c55fep-32f, 0.0f, 0.0f, 0x1.600896p-4f, 0.0f, 0.0f,
     0x1.d8a986p-123f, 0x1.e77a3cp-70f, 0x1.e03d2cp-66f, 0x1.61deb2p-102f, 0.0f, 0.0f,
     0x1.c6c1b6p-47f, 0x1.da57bep-74f, 0x1.9333bp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b977ecp-111f, 0.0f, 0.0f, 0.0f, 0x1.7636acp-48f, 0.0f,
     0x1.fce7f4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5336bep-73f,
     0.0f, 0.0f, 0.0f, 0x1.bd25fcp-81f, 0x1.49dfb4p-36f, 0x1.8b14fcp-85f,
     0x1.98db86p-101f, 0x1.a3f32cp-44f, 0x1.1cd64cp-25f, 0x1.45ba1cp-61f, 0.0f,
     0x1.a70174p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.adf9cep-65f, 0.0f, 0.0f, 0.0f,
     0x1.183ff8p-120f, 0x1p0f, 0x1.b473d4p-121f, 0.0f, 0.0f, 0x1.b60474p-105f, 0.0f,
     0.0f, 0x1.e3fe5ap-50f, 0.0f, 0x1.a9230ap-23f, 0.0f, 0.0f, 0.0f, 0x1.85f26ep-99f,
     0x1.bfbedp-103f, 0x1.8c42fcp-94f, 0x1.0a7236p-67f, 0.0f, 0x1.564fap-101f, 0.0f,
     0x1.e2398ep-71f, 0x1.c71b74p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.943d6ap-20f, 0.0f,
     0x1.533f5ep-45f, 0.0f, 0x1.44d17p-15f, 0.0f, 0x1.e5d624p-66f, 0.0f, 0.0f,
     0x1.ec6a2p-91f, 0.0f, 0.0f, 0.0f, 0x1.3b81fap-6f, 0.0f, 0.0f, 0.0f,
     0x1.9c431p-35f, 0.0f, 0x1.a7afacp-79f, 0.0f, 0.0f, 0x1.9d9f0ep-44f,
     0x1.da9864p-53f, 0.0f, 0.0f, 0x1.0b7e7ep-89f, 0.0f, 0x1.8ac7d2p-88f,
     0x1.2040ccp-67f, 0x1.1c0e44p-90f, 0.0f, 0.0f, 0x1.987278p-47f, 0x1.e54642p-14f,
     0.0f, 0x1.009c0ep-102f, 0x1.9b7edcp-43f, 0x1.478988p-119f, 0x1.b8caf2p-7f, 0.0f,
     0.0f, 0x1.43de84p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.415a94p-98f,
     0x1.9702b6p-42f, 0.0f, 0.0f, 0x1.ac41bep-28f, 0.0f, 0.0f, 0.0f, 0x1.2f8838p-43f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.597d5p-31f, 0x1.0e2b16p-54f, 0x1.9391eep-104f,
     0x1.15d532p-62f, 0x1.dfd01ep-82f, 0.0f, 0x1.6848bep-3f, 0x1.9d625ep-16f, 0.0f,
     0x1.e78d4ap-9f, 0x1.8ae4e6p-81f, 0.0f, 0.0f, 0x1.2e0ab4p-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.03788ap-25f, 0x1.81616p-25f, 0x1.2c5ecep-19f, 0x1.7a9c08p-66f, 0.0f,
     0.0f, 0.0f, 0x1.30201ep-75f, 0x1.8c581cp-117f, 0x1.e71a3ep-47f, 0x1.8a6bf4p-123f,
     0.0f, 0.0f, 0x1.832e7cp-17f, 0x1.6e2152p-65f, 0.0f, 0x1.d6b9p-2f, 0x1.92ec7p-6f,
     0.0f, 0.0f, 0x1.fd5ea4p-119f, 0.0f, 0x1.6e50eep-47f, 0x1.4a1e84p-82f, 0.0f,
     0x1.6d2d2cp-115f, 0x1.22da52p-79f, 0x1.71e89ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.2e66fcp-78f, 0x1.82d1a8p-6f, 0.0f, 0.0f, 0x1.0dd25ep-29f, 0.0f,
     0x1.c87d2ep-35f, 0.0f, 0x1.23678p-56f, 0x1.65d1a4p-58f, 0x1.cc5e7p-25f,
     0x1.013004p-30f, 0x1p0f, 0x1.61408cp-74f, 0.0f, 0x1.aaf45ap-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a6b0d6p-109f, 0.0f, 0x1.8e6ac6p-114f, 0x1.978044p-74f, 0.0f, 0.0f,
     0.0f, 0x1.f48abep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1bc8e8p-115f, 0x1.84d984p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3b486p-118f,
     0x1.1a115cp-36f, 0.0f, 0x1.e510c8p-21f, 0.0f, 0x1.b0af52p-56f, 0x1.30ea34p-58f,
     0.0f, 0.0f, 0.0f, 0x1.1d12a4p-110f, 0.0f, 0.0f, 0x1.83164p-121f, 0x1.ed81b6p-4f,
     0.0f, 0x1.a3c8f2p-118f, 0.0f, 0x1.9a3c2ap-81f, 0.0f, 0x1.a5f654p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a0083cp-110f, 0.0f, 0x1.99c79ep-35f, 0x1.114f9cp-45f,
     0x1.53157cp-36f, 0x1.15d464p-69f, 0x1.afc96cp-52f, 0x1.2c46acp-96f,
     0x1.af42f4p-121f, 0.0f, 0.0f, 0.0f, 0x1.5c7a86p-115f, 0x1.b1201p-112f, 0.0f,
     0x1.7a7c1ep-89f, 0x1.801b1ep-79f, 0.0f, 0.0f, 0.0f, 0x1.a0ec3ep-11f,
     0x1.63e274p-101f, 0x1.5dbc26p-26f, 0x1.6f012cp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2cd206p-17f, 0x1.0e57ap-108f, 0.0f, 0x1.894bb6p-60f, 0.0f, 0.0f,
     0.0f, 0x1.96db12p-45f, 0.0f, 0x1.350c3ep-62f, 0.0f, 0x1.e69708p-27f,
     0x1.515f8ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c7b02p-56f, 0x1.e5a122p-67f, 0.0f,
     0x1.ebba28p-119f, 0.0f, 0x1.dc714cp-36f, 0.0f, 0x1.fcc84cp-116f, 0x1.236d4cp-64f,
     0x1.38135ap-4f, 0x1.76e796p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.be1fb2p-77f, 0.0f, 0.0f, 0x1.fc6e02p-98f, 0.0f, 0x1.7796e6p-34f,
     0x1.493fbap-3f, 0x1.4430d4p-105f, 0.0f, 0x1.25894cp-23f, 0x1.1b65cp-52f,
     0x1.3cb906p-15f, 0.0f, 0.0f, 0x1.a4442cp-10f, 0x1.58a51ep-92f, 0x1.b88a3ap-95f,
     0x1.3d4326p-33f, 0.0f, 0.0f, 0.0f, 0x1.816674p-72f, 0.0f, 0.0f, 0x1.2083bap-100f,
     0x1.84c192p-37f, 0.0f, 0x1.8014eap-11f, 0x1.90d1fp-113f, 0.0f, 0x1.6e3d3ep-121f,
     0x1.67116ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff8e8cp-66f, 0x1.d7df48p-35f,
     0.0f, 0.0f, 0.0f, 0x1.2458aap-56f, 0x1.b998fap-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55f21cp-10f, 0.0f, 0.0f, 0.0f, 0x1.aa4fecp-123f, 0.0f, 0x1.d51e0cp-40f, 0.0f,
     0x1.dac5f6p-5f, 0.0f, 0.0f, 0x1.fafddep-61f, 0.0f, 0x1.0fdffp-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ede72p-29f, 0x1.aabd1ep-28f, 0x1.766006p-103f, 0.0f,
     0x1.9c596cp-80f, 0x1.efc1fep-30f, 0x1.612a5ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d87f94p-120f, 0.0f, 0.0f, 0x1.42713cp-116f, 0x1.918f2cp-9f,
     0x1.8b7eb2p-16f, 0x1.481998p-14f, 0x1.651e36p-38f, 0.0f, 0.0f, 0x1.65d19p-82f,
     0x1.3667e8p-28f, 0x1p0f, 0.0f, 0x1.0db074p-26f, 0x1.2ea52ep-47f, 0x1.85537cp-43f,
     0x1.efb456p-65f, 0x1.d94648p-42f, 0x1.f89046p-3f, 0.0f, 0x1.7a4996p-22f,
     0x1.79fd6cp-112f, 0.0f, 0.0f, 0.0f, 0x1.53f074p-67f, 0.0f, 0x1.6909eep-40f,
     0x1.a02904p-111f, 0x1.63e2c8p-96f, 0.0f, 0.0f, 0x1.1f5568p-123f, 0.0f, 0.0f,
     0x1.385ab2p-103f, 0.0f, 0x1.f0da48p-124f, 0x1.d87198p-71f, 0.0f, 0x1.4ce03cp-84f,
     0x1.256114p-7f, 0.0f, 0x1.78f40cp-8f, 0x1.45bf8p-34f, 0.0f, 0.0f, 0x1.a15b1p-22f,
     0.0f, 0x1.e39cdap-10f, 0x1.a71d0cp-3f, 0x1.fa26f6p-20f, 0.0f, 0x1.2f9264p-59f,
     0x1.6c43bp-5f, 0.0f, 0x1.66d65ap-26f, 0.0f, 0x1.d57f2ap-8f, 0.0f, 0x1.0683b6p-4f,
     0.0f, 0x1.3695aap-120f, 0x1.5274bcp-78f, 0x1.8ae6b6p-52f, 0.0f, 0x1.3be2p-60f,
     0.0f, 0.0f, 0.0f, 0x1.09defp-112f, 0x1.e426dcp-13f, 0.0f, 0x1.1874dep-102f, 0.0f,
     0.0f, 0.0f, 0x1.75dc9cp-44f, 0x1.4614bp-107f, 0.0f, 0.0f, 0x1.de3538p-94f,
     0x1.00e2e2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c7d3p-95f, 0x1.679deep-98f, 0.0f,
     0.0f, 0.0f, 0x1.e66a02p-25f, 0x1.636e6p-109f, 0.0f, 0x1.1995b6p-79f,
     0x1.e81674p-44f, 0x1.a3b276p-111f, 0x1.c9d532p-65f, 0x1.e03b04p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.402352p-10f, 0x1.a2b6a8p-108f, 0x1.48d26ap-102f, 0.0f, 0.0f,
     0x1.54b2ep-126f, 0x1p0f, 0.0f, 0x1.0256cep-10f, 0.0f, 0x1.4579fap-85f, 0.0f,
     0x1.702028p-81f, 0.0f, 0x1.3b3f26p-9f, 0x1.6ccea6p-35f, 0x1.3d46ccp-23f, 0.0f,
     0.0f, 0x1.6812ep-95f, 0x1.67fc8ep-126f, 0x1.79b122p-58f, 0x1.0055a8p-124f,
     0x1.30a502p-55f, 0.0f, 0x1.923808p-86f, 0.0f, 0x1.d43ad8p-107f, 0x1.054c22p-58f,
     0x1.f71352p-80f, 0x1.cec06cp-23f, 0x1.5db8e2p-75f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c6d76p-112f, 0.0f, 0x1.5389eap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fa076ap-81f, 0x1.63dbdcp-36f, 0x1.337b3cp-122f, 0.0f, 0.0f, 0x1.153cdp-2f,
     0x1.9d6cdep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86eb5cp-16f, 0.0f, 0.0f,
     0x1.2125fp-73f, 0.0f, 0.0f, 0x1.994ff4p-15f, 0.0f, 0.0f, 0x1.1ef3d2p-89f,
     0x1.5129f2p-117f, 0x1.6f7744p-2f, 0x1.25a3b2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb6be2p-56f, 0.0f, 0x1.588d6ep-15f, 0x1.9efd8ep-39f, 0.0f, 0x1.bf83fp-81f,
     0x1.ac0fcap-115f, 0x1.f857d4p-124f, 0x1.801bbep-35f, 0.0f, 0x1.2bbe94p-98f,
     0x1.016f2ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90155p-114f, 0x1.91c4bcp-70f,
     0.0f, 0.0f, 0x1.31be7ap-47f, 0x1.5602f2p-40f, 0x1.137caap-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5b2b3cp-68f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.f295fap-73f, 0.0f, 0x1.8e4b92p-8f, 0x1.74eb66p-63f, 0x1.debc28p-97f,
     0x1.80ca16p-91f, 0.0f, 0.0f, 0x1.a17658p-85f, 0.0f, 0x1.1b4878p-8f, 0.0f, 0.0f,
     0x1.efcad2p-76f, 0.0f, 0.0f, 0.0f, 0x1.162b18p-124f, 0.0f, 0.0f, 0x1.ac977ep-63f,
     0.0f, 0x1.5ced2ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f86e12p-73f, 0.0f,
     0x1.74e6f2p-101f, 0x1.2870d4p-26f, 0x1.5d9d82p-19f, 0.0f, 0x1.7c563ep-48f, 0.0f,
     0.0f, 0.0f, 0x1.c5d3bap-101f, 0x1.c4edbp-55f, 0.0f, 0x1.f47e42p-103f, 0.0f,
     0x1.e739fap-17f, 0x1.2d28d4p-1f, 0.0f, 0x1.b983b8p-44f, 0x1.08fa2ep-122f, 0.0f,
     0x1.d81b62p-35f, 0.0f, 0.0f, 0.0f, 0x1.8153p-21f, 0.0f, 0.0f, 0x1.7be888p-34f,
     0.0f, 0.0f, 0x1.7122ccp-74f, 0x1.a4757ep-63f, 0.0f, 0.0f, 0x1.c259ap-61f,
     0x1.5da016p-52f, 0x1.e8e8cp-18f, 0x1p0f, 0x1.54cbe6p-66f, 0x1.2e0828p-53f,
     0x1.2b84f6p-63f, 0.0f, 0.0f, 0x1.8e0eaep-65f, 0.0f, 0x1.988e38p-100f,
     0x1.759528p-125f, 0x1.9be288p-108f, 0x1.fdb538p-112f, 0x1.5efa98p-90f, 0.0f,
     0.0f, 0.0f, 0x1.d70078p-24f, 0x1.c0d798p-76f, 0x1.d3131ap-116f, 0.0f,
     0x1.688ed8p-68f, 0x1.e9570cp-58f, 0.0f, 0.0f, 0.0f, 0x1.aec688p-126f, 0.0f,
     0x1.24adc6p-108f, 0x1.3fc73p-104f, 0x1.c430a6p-61f, 0x1.4e0708p-37f,
     0x1.703e4ep-25f, 0x1.3854e8p-55f, 0.0f, 0x1.3c6fc4p-25f, 0x1.9b1312p-86f, 0.0f,
     0x1.d42a5p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0658ep-43f, 0.0f, 0x1.6e76aap-94f,
     0.0f, 0x1.2a4dd8p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.666654p-89f, 0x1.fb191ap-90f,
     0.0f, 0x1.864f12p-122f, 0.0f, 0x1.03f6a8p-45f, 0.0f, 0x1.e3dbd2p-9f,
     0x1.cde482p-72f, 0x1.2f7414p-33f, 0x1.418d5ep-111f, 0x1.deaa8p-48f,
     0x1.67920cp-118f, 0.0f, 0.0f, 0.0f, 0x1.83c2c2p-29f, 0.0f, 0x1.79fce4p-117f,
     0x1.6932b8p-20f, 0x1.92552cp-7f, 0.0f, 0x1.fb28dcp-40f, 0.0f, 0.0f,
     0x1.ec7d9ep-106f, 0x1.caf612p-123f, 0.0f, 0x1.da5cd4p-87f, 0.0f, 0.0f, 0.0f,
     0x1.b96d7cp-76f, 0.0f, 0.0f, 0x1.9149e8p-89f, 0x1.ac745p-58f, 0x1.a610bp-73f,
     0x1.42f85ep-60f, 0.0f, 0x1.7377c8p-21f, 0.0f, 0.0f, 0x1.af4ba6p-85f, 0.0f, 0.0f,
     0.0f, 0x1.ab1cd8p-80f, 0.0f, 0.0f, 0.0f, 0x1.c81baap-86f, 0x1.b64ea8p-120f, 0.0f,
     0x1.c9b4a4p-1f, 0.0f, 0x1.62b68p-13f, 0.0f, 0.0f, 0x1.e9ed1cp-75f, 0.0f, 0.0f,
     0.0f, 0x1.8280dap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.97b47cp-74f, 0x1.274eb2p-4f,
     0.0f, 0x1.13c604p-2f, 0x1.370e48p-56f, 0x1.98c81cp-115f, 0x1.3a9b72p-94f, 0.0f,
     0x1.4637fcp-54f, 0x1.2189f4p-79f, 0x1.62f848p-18f, 0x1.728902p-97f, 0.0f,
     0x1.28f8b6p-31f, 0.0f, 0.0f, 0.0f, 0x1.a3816p-96f, 0x1.e02976p-68f, 0.0f,
     0x1.a8d436p-109f, 0x1.59c8e6p-23f, 0.0f, 0x1.7980dp-111f, 0x1.c0813cp-42f, 0.0f,
     0.0f, 0x1.63e926p-36f, 0x1.7fd23cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.085ebcp-94f, 0x1.d975cp-57f, 0.0f, 0x1.767d7ep-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d05bfcp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e5faep-21f,
     0.0f, 0x1.66788p-30f, 0x1.e56b28p-103f, 0.0f, 0x1.b9304ep-25f, 0x1.d9030ep-6f,
     0.0f, 0x1.dcb2dap-114f, 0x1.fd7dacp-30f, 0x1.c9aa56p-95f, 0x1.a8db12p-72f,
     0x1.f6fd0ap-37f, 0x1.b9f6f6p-99f, 0x1.e80a0ep-27f, 0.0f, 0x1.e44ca4p-57f, 0.0f,
     0x1.99363ap-18f, 0x1.b218c8p-105f, 0.0f, 0x1.c0a598p-95f, 0x1.5e6732p-69f, 0.0f,
     0.0f, 0x1.1e985ep-95f, 0.0f, 0.0f, 0.0f, 0x1.d54b1cp-103f, 0x1p0f, 0.0f,
     0x1.4e1de8p-43f, 0x1.1c9d9cp-92f, 0.0f, 0.0f, 0x1.54ad8ep-116f, 0x1.1b454p-118f,
     0x1.8a6a2ap-104f, 0x1.c092cp-106f, 0x1.47facp-111f, 0.0f, 0.0f, 0x1.136becp-88f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a138e2p-96f, 0.0f, 0.0f, 0.0f,
     0x1.01dc74p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35bde4p-101f, 0.0f,
     0x1.b3afcp-82f, 0x1.d13ebap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.137fecp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e88b74p-23f, 0x1.c2fe12p-111f,
     0x1.15dc08p-18f, 0.0f, 0x1.8c5e18p-124f, 0.0f, 0x1.e6c0eap-35f, 0.0f, 0.0f, 0.0f,
     0x1.ca06p-101f, 0.0f, 0x1.e72e9cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71db38p-25f, 0x1.4710dep-69f, 0x1.381096p-97f, 0.0f, 0x1.153f5p-98f, 0.0f,
     0x1.b15aecp-23f, 0.0f, 0.0f, 0x1.55caa4p-27f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f3836p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.defccp-116f, 0x1.212702p-115f, 0.0f,
     0x1.e8bfcap-70f, 0x1.bd43ccp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.750612p-3f, 0.0f, 0.0f, 0x1.ad6c1ap-6f, 0.0f, 0x1.bbeb52p-44f, 0.0f, 0.0f,
     0x1.b5df4ep-62f, 0x1.d86aaap-68f, 0x1.9723b6p-19f, 0x1.49fa5ep-98f, 0.0f,
     0x1.2f1eb8p-44f, 0x1.2057bap-92f, 0x1.bebea2p-72f, 0.0f, 0.0f, 0x1.97da44p-60f,
     0x1.9887bcp-81f, 0x1.4a7ad8p-39f, 0.0f, 0.0f, 0x1.a56266p-38f, 0x1.0e8278p-68f,
     0.0f, 0x1.aec67p-34f, 0.0f, 0x1.b1ad2p-109f, 0x1.0f758cp-114f, 0.0f,
     0x1.4921ap-28f, 0x1.163622p-13f, 0x1.d8017ep-74f, 0.0f, 0.0f, 0.0f,
     0x1.824512p-51f, 0x1.0909d2p-64f, 0x1.92a722p-6f, 0x1.28a33ep-25f,
     0x1.01f64p-94f, 0.0f, 0x1.b7d29cp-60f, 0.0f, 0.0f, 0x1.da4db6p-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.595f08p-121f, 0.0f, 0.0f, 0x1.cb7912p-114f, 0x1.3cfa22p-8f, 0.0f,
     0x1.f37e3ap-79f, 0.0f, 0.0f, 0x1.b5e712p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.69444p-93f, 0x1.3478ep-71f, 0x1.591deep-24f, 0.0f, 0x1.29d35ep-63f, 0.0f,
     0.0f, 0x1.66b5b4p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2433fp-124f,
     0x1.434022p-8f, 0x1.0987cp-85f, 0.0f, 0.0f, 0x1.f03126p-64f, 0.0f,
     0x1.20213ep-62f, 0.0f, 0.0f, 0x1.139092p-106f, 0x1.8c22b2p-36f, 0x1.519a4cp-29f,
     0x1.ef1634p-86f, 0.0f, 0x1.ad015cp-102f, 0.0f, 0.0f, 0.0f, 0x1.c55bb4p-50f,
     0x1.8f507ep-91f, 0x1.d8bf7ep-34f, 0x1.66de1ap-36f, 0x1.20c208p-94f, 0.0f, 0.0f,
     0x1.06edap-58f, 0x1.8fffe6p-20f, 0.0f, 0x1.15ae12p-118f, 0x1.eecfa2p-6f,
     0x1.ac9676p-90f, 0.0f, 0.0f, 0x1.7f6768p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.040f04p-34f, 0.0f, 0x1.6f97ep-60f, 0.0f, 0.0f, 0.0f,
     0x1.acd4p-4f, 0.0f, 0x1.842cc2p-57f, 0.0f, 0x1.c61656p-64f, 0x1.6bb362p-84f,
     0.0f, 0x1.63a5ccp-114f, 0.0f, 0x1.02d068p-34f, 0.0f, 0x1.7a2996p-75f, 0.0f, 0.0f,
     0x1.de0c64p-72f, 0.0f, 0.0f, 0x1.dcd1ccp-54f, 0x1.a8b78cp-48f, 0x1.595442p-6f,
     0.0f, 0.0f, 0.0f, 0x1.c7fe54p-41f, 0.0f, 0x1.681ad2p-122f, 0x1.2ae0eap-111f,
     0.0f, 0.0f, 0x1.f5989p-107f, 0x1.857f6cp-6f, 0.0f, 0.0f, 0.0f, 0x1.9148ep-113f,
     0x1.d55408p-44f, 0.0f, 0x1.0fcdeap-75f, 0.0f, 0x1.9b04dcp-55f, 0x1.e845a4p-118f,
     0.0f, 0x1.5f71f4p-102f, 0x1.768e4ep-68f, 0x1.6080e6p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dc041p-113f, 0x1.2e1088p-49f, 0.0f, 0x1.b94dcp-12f, 0.0f,
     0x1.6fb4bap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ef824p-116f, 0.0f, 0.0f,
     0x1.f47f0ep-126f, 0.0f, 0.0f, 0.0f, 0x1.eb378cp-11f, 0x1.4b8f72p-77f, 0.0f, 0.0f,
     0x1.f3eadap-68f, 0x1.f79be4p-35f, 0.0f, 0.0f, 0x1.f1b0cep-64f, 0.0f,
     0x1.7af738p-70f, 0x1.e7a01cp-1f, 0x1.3fee94p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2af69cp-84f, 0x1.21acb8p-119f, 0.0f, 0x1.3d1fd4p-25f, 0x1.6d37f6p-125f, 0.0f,
     0.0f, 0x1.7668dp-98f, 0x1.d4b244p-100f, 0x1.0bc8fcp-48f, 0x1.7ac806p-17f, 0.0f,
     0x1.93ea24p-13f, 0.0f, 0x1.5b0f4ap-120f, 0x1.215048p-20f, 0.0f, 0.0f, 0.0f,
     0x1.ef281cp-126f, 0.0f, 0x1.b02786p-20f, 0x1.8bc96cp-29f, 0.0f, 0x1.e6ba46p-33f,
     0.0f, 0x1.3d6da4p-72f, 0.0f, 0.0f, 0.0f, 0x1.cb7efp-57f, 0x1.f8155cp-66f, 0.0f,
     0x1.a16118p-103f, 0x1.59b8cp-68f, 0.0f, 0x1.77f416p-33f, 0.0f, 0x1.2054c8p-18f,
     0x1.0ba738p-28f, 0x1.9fca1ap-12f, 0x1.ca7a96p-62f, 0x1.838bdcp-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.02f248p-116f, 0.0f, 0.0f, 0x1.245544p-57f, 0x1.7561dp-109f, 0.0f,
     0.0f, 0x1.b502b8p-63f, 0.0f, 0.0f, 0.0f, 0x1.1d1e42p-126f, 0.0f,
     0x1.96c4e4p-107f, 0.0f, 0.0f, 0x1.124e84p-115f, 0.0f, 0.0f, 0x1.4176ccp-39f,
     0x1.e5af32p-55f, 0x1.733478p-105f, 0.0f, 0x1.2cded8p-96f, 0x1.40f118p-29f,
     0x1.c09752p-110f, 0.0f, 0x1.63eb3ep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.69453ep-85f, 0x1.992096p-25f, 0x1.ded824p-64f, 0x1.e1c34ap-60f,
     0.0f, 0x1.4c1132p-29f, 0.0f, 0.0f, 0x1.b5d57ap-72f, 0.0f, 0.0f, 0x1.a48568p-92f,
     0x1.d75e8ep-84f, 0x1.929c34p-12f, 0.0f, 0.0f, 0x1.7bf154p-3f, 0.0f,
     0x1.d6f3bcp-110f, 0x1.fed408p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0437dep-9f,
     0x1.754ed8p-56f, 0x1.48202ep-118f, 0x1.3ff46ap-86f, 0x1.5a0d12p-14f, 0.0f, 0.0f,
     0x1.2ec0ecp-83f, 0.0f, 0.0f, 0x1.2878bep-13f, 0x1.eaa10cp-47f, 0x1.45a792p-109f,
     0.0f, 0x1.b5dcep-20f, 0x1.71ada6p-58f, 0.0f, 0x1.4f4dfap-1f, 0.0f,
     0x1.02ae86p-96f, 0x1.af237cp-8f, 0x1.fa84c4p-27f, 0.0f, 0x1.ef6818p-84f, 0.0f,
     0.0f, 0x1.2a09c4p-122f, 0x1.d7495p-8f, 0x1.7203aep-74f, 0x1.f9e88cp-106f, 0.0f,
     0x1.9f08f4p-7f, 0.0f, 0.0f, 0x1.74e2e4p-15f, 0x1.56532ep-5f, 0.0f,
     0x1.f7c608p-57f, 0.0f, 0.0f, 0.0f, 0x1.ee3794p-95f, 0x1.0a82b4p-64f,
     0x1.04e0b2p-93f, 0.0f, 0.0f, 0x1.42b00ep-57f, 0.0f, 0x1.543d82p-35f, 0.0f, 0.0f,
     0x1.cbde68p-12f, 0.0f, 0x1.94024cp-31f, 0.0f, 0.0f, 0x1.4fa074p-33f, 0.0f,
     0x1.f2219p-55f, 0x1.069f2ep-37f, 0.0f, 0x1.367208p-59f, 0x1.cd4d36p-104f, 0.0f,
     0.0f, 0x1.822d9ap-117f, 0x1.5e9bd2p-103f, 0.0f, 0x1.27f732p-18f, 0x1.8d6818p-7f,
     0.0f, 0x1.2867ecp-73f, 0x1.bad3fap-22f, 0.0f, 0.0f, 0x1.133338p-94f,
     0x1.674498p-121f, 0x1.e53ddep-48f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad18a8p-18f, 0x1.6e197cp-122f, 0x1.d10c8p-115f, 0.0f, 0.0f, 0x1.215106p-60f,
     0x1.c48dcp-79f, 0x1.5bf18p-7f, 0.0f, 0x1.ead5d4p-1f, 0.0f, 0.0f,
     0x1.6d0b72p-115f, 0x1.e73ad2p-76f, 0.0f, 0x1.041a8ep-33f, 0x1.61a342p-102f, 0.0f,
     0x1.35ef32p-38f, 0.0f, 0.0f, 0x1.1d66cap-41f, 0x1.ba4cd8p-8f, 0.0f, 0.0f,
     0x1.640018p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87b02cp-70f, 0.0f,
     0x1.144a2ep-69f, 0x1.2bfc8p-75f, 0x1.5ed352p-40f, 0x1.99596ap-4f, 0.0f, 0.0f,
     0.0f, 0x1.904f8p-38f, 0x1.51b1dap-57f, 0x1.e6c674p-119f, 0x1.b50be6p-26f, 0.0f,
     0x1.a14118p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08333ap-75f, 0.0f, 0x1.f58e96p-119f,
     0.0f, 0.0f, 0.0f, 0x1.1744aep-114f, 0.0f, 0x1.262dbep-84f, 0x1.1b3302p-120f,
     0.0f, 0.0f, 0x1.cf08fep-3f, 0x1.2b5dc8p-58f, 0.0f, 0x1.ad3d24p-88f, 0.0f, 0.0f,
     0x1.ac6ab8p-56f, 0.0f, 0x1.98f2d8p-101f, 0.0f, 0x1.ad5326p-76f, 0x1.37b2b6p-50f,
     0.0f, 0x1.0ac37p-113f, 0x1.960f08p-100f, 0x1.13cc86p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41ea16p-59f, 0x1.d18f92p-47f, 0x1.736d76p-92f,
     0x1.57cdccp-107f, 0.0f, 0.0f, 0x1.7bd86ep-4f, 0x1.33c8b6p-43f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4be632p-120f, 0x1.ab99b8p-36f, 0x1.190a2cp-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.98216ep-43f, 0.0f, 0.0f, 0.0f,
     0x1.925e3cp-112f, 0x1.fc04dcp-24f, 0x1.a4497ap-65f, 0.0f, 0.0f, 0.0f,
     0x1.b62af6p-110f, 0x1.9cc174p-100f, 0x1.183dcep-19f, 0x1.312554p-51f, 0.0f,
     0x1.713d3ep-73f, 0.0f, 0x1.5f7b8ep-76f, 0x1.173858p-107f, 0x1.7443f6p-34f,
     0x1.24af12p-98f, 0.0f, 0.0f, 0x1.1501fep-49f, 0.0f, 0x1.60a208p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c01b8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.819deap-23f,
     0x1.87616cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1e4c2p-66f, 0x1.fd7146p-116f,
     0x1.bd05p-77f, 0x1.e4858ap-123f, 0.0f, 0.0f, 0.0f, 0x1.68b844p-68f, 0.0f, 0.0f,
     0x1.513478p-106f, 0.0f, 0.0f, 0.0f, 0x1.8268b2p-72f, 0x1.0c35b4p-45f, 0.0f,
     0x1.8d4d92p-21f, 0x1.04e792p-116f, 0x1.9592c8p-65f, 0.0f, 0x1.bc2972p-32f, 0.0f,
     0x1.93decap-51f, 0x1.4ab886p-120f, 0x1.46595cp-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91dbd2p-81f, 0x1.ae73d8p-24f, 0x1.578086p-55f, 0x1.ea717p-111f, 0.0f, 0.0f,
     0x1.9e273p-22f, 0x1.4afab4p-16f, 0x1.3bdfap-38f, 0.0f, 0x1.64cdd6p-10f, 0.0f,
     0x1.d5584ep-12f, 0.0f, 0x1.ed7e96p-13f, 0x1.730d96p-85f, 0.0f, 0x1.bf7c42p-18f,
     0.0f, 0x1.468f14p-48f, 0x1.ceb2d6p-91f, 0.0f, 0x1.2f9a4cp-55f, 0.0f, 0.0f, 0.0f,
     0x1.a64b72p-110f, 0x1.bc5784p-48f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f4e6p-41f, 0.0f, 0x1.afa898p-107f, 0x1.968a44p-20f, 0x1.3c8e5ap-59f, 0.0f,
     0.0f, 0x1.34bafep-27f, 0x1.70e62ep-66f, 0x1.17d1fp-89f, 0x1.a50a2cp-58f,
     0x1.e0c952p-125f, 0x1.d14ba4p-19f, 0.0f, 0x1.f88dbap-94f, 0x1.02d42ap-66f,
     0x1.a7eeb2p-16f, 0x1.9af8ep-1f, 0x1.824fd4p-3f, 0.0f, 0x1.58a878p-87f,
     0x1.b0088ep-47f
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
            tmp2 = Sleef_finz_atan2f4_u35avx2128(tmp0, tmp1);
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
    printf("Sleef_finz_atan2f4_u35avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atan2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
