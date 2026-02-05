/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf4_u35kvx.c --function Sleef_tanhf4_u35kvx \
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
     0x1.f7411ep-77f, 0x1.918cbp-30f, 0x1.06f046p-34f, 0.0f, 0.0f, 0.0f,
     0x1.1eae4ap-118f, 0x1.a47004p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4e68p-36f,
     0x1.a245eap-84f, 0.0f, 0.0f, 0x1.2b7afcp-102f, 0.0f, 0x1.290ecep-85f, 0.0f, 0.0f,
     0x1.3fa1b4p-32f, 0x1.f90f2p-53f, 0.0f, 0x1.2ea7b4p-117f, 0.0f, 0.0f, 0.0f,
     0x1.36c5dcp-78f, 0x1.4a6e8ep-8f, 0x1.17ebbep-113f, 0.0f, 0.0f, 0x1.038346p-100f,
     0.0f, 0.0f, 0x1.f78f0cp-9f, 0x1.310e22p-38f, 0x1.227074p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8b6836p-47f, 0x1.cf7df8p-17f, 0x1.30aefap-126f, 0x1.d10cbap-58f, 0.0f,
     0.0f, 0x1.1b5662p-110f, 0x1.1a14cap-77f, 0x1.33c376p-57f, 0x1.5d1f88p-7f,
     0x1.0606eap-94f, 0x1.de9682p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07d432p-50f,
     0x1.0b08f4p-117f, 0x1.0c2c4p-66f, 0x1.40f53cp-83f, 0.0f, 0x1.f12202p-120f, 0.0f,
     0.0f, 0x1.dc8136p-33f, 0.0f, 0.0f, 0.0f, 0x1.3c8bep-20f, 0.0f, 0.0f,
     0x1.c27588p-78f, 0.0f, 0x1.12c604p-63f, 0.0f, 0.0f, 0x1.ec51a8p-88f, 0.0f,
     0x1.d57006p-6f, 0x1.3b2c1p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b29378p-72f, 0.0f, 0x1.d42516p-16f, 0.0f, 0.0f, 0x1.e7e96ap-57f, 0.0f,
     0x1.2ac61p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54682ep-30f, 0.0f, 0x1.9f8fc2p-118f,
     0x1.95246ep-84f, 0.0f, 0.0f, 0x1.a2845cp-53f, 0.0f, 0x1.f6339ap-125f, 0.0f,
     0x1.7e0b04p-89f, 0.0f, 0x1.97d616p-82f, 0x1.faa418p-117f, 0x1.13342p-53f, 0.0f,
     0.0f, 0x1.cd88p-91f, 0x1.23432ap-44f, 0x1.d50ae4p-9f, 0x1.1916d8p-51f,
     0x1.3f1b92p-32f, 0x1.0605dap-55f, 0x1.e0acfcp-87f, 0.0f, 0x1.0df86ap-90f,
     0x1.bba838p-122f, 0.0f, 0.0f, 0x1.5faabep-26f, 0.0f, 0.0f, 0.0f, 0x1.9694f4p-54f,
     0.0f, 0.0f, 0x1.c58638p-23f, 0x1.da017p-121f, 0.0f, 0x1.de47dp-87f,
     0x1.94e65ap-6f, 0.0f, 0.0f, 0x1.fec424p-41f, 0x1.473c6ep-18f, 0x1.fa6d84p-124f,
     0.0f, 0x1.4bbd86p-4f, 0.0f, 0.0f, 0x1.b2ce7p-61f, 0.0f, 0x1.526638p-93f,
     0x1.2911fcp-64f, 0x1.927022p-97f, 0x1.ac5506p-118f, 0.0f, 0.0f, 0x1.2e50dep-32f,
     0.0f, 0.0f, 0.0f, 0x1.9a2b38p-42f, 0x1.c8d678p-106f, 0x1.2817dap-65f,
     0x1.4cb1bp-75f, 0.0f, 0x1.25c7f8p-22f, 0x1.a2afe8p-82f, 0.0f, 0.0f,
     0x1.19c942p-35f, 0.0f, 0x1.09ae4p-3f, 0x1.f1af9ep-71f, 0x1.7d581ap-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef02a2p-51f, 0x1.0ea72cp-105f, 0.0f, 0.0f,
     0.0f, 0x1.cc2b94p-26f, 0.0f, 0.0f, 0.0f, 0x1.47dd1cp-13f, 0.0f, 0x1.b90a06p-95f,
     0x1.da5eep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88022p-45f, 0x1.7c7502p-41f,
     0x1.a64916p-124f, 0.0f, 0.0f, 0.0f, 0x1.433872p-98f, 0x1.818f64p-29f,
     0x1.a9dfc8p-83f, 0.0f, 0x1.6b390cp-25f, 0x1.8c6e3ep-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4659a8p-70f, 0x1.c78b74p-38f, 0.0f, 0.0f, 0x1.681f28p-126f, 0.0f,
     0x1.f72c52p-99f, 0.0f, 0.0f, 0x1.59bd12p-21f, 0x1.0ec598p-9f, 0x1.3a4d9ep-80f,
     0.0f, 0x1.d567d2p-65f, 0x1.44b91p-25f, 0.0f, 0x1.ff365cp-34f, 0x1.181ep-57f,
     0x1.1db924p-53f, 0.0f, 0.0f, 0.0f, 0x1.bddd8cp-19f, 0.0f, 0x1.98c3e6p-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c85194p-80f, 0x1.e36df6p-73f, 0.0f,
     0x1.02e29p-51f, 0x1.0abf0cp-3f, 0.0f, 0.0f, 0x1.ce425p-16f, 0x1.558076p-96f,
     0.0f, 0.0f, 0.0f, 0x1.3a6638p-50f, 0.0f, 0x1.f653ap-86f, 0x1.ec7472p-81f,
     0x1.e6dc7ap-110f, 0x1.71fca4p-21f, 0.0f, 0.0f, 0.0f, 0x1.6ce466p-97f, 0.0f,
     0x1.0e65b8p-108f, 0.0f, 0.0f, 0x1.28a3aep-65f, 0x1.7214c6p-6f, 0.0f,
     0x1.bdfe64p-98f, 0.0f, 0x1.8eae5cp-106f, 0x1.b06f14p-110f, 0.0f,
     0x1.bad736p-111f, 0.0f, 0.0f, 0x1.4bb80cp-19f, 0x1.f3fb64p-116f, 0x1.6e537p-92f,
     0x1.5a464ap-48f, 0.0f, 0.0f, 0.0f, 0x1.3f6e28p-119f, 0.0f, 0x1.f0fc4ep-112f,
     0x1.4d0b46p-80f, 0x1.a6776ep-26f, 0.0f, 0.0f, 0x1.24e18ap-13f, 0x1.ac0768p-7f,
     0.0f, 0x1.39edd6p-100f, 0x1.30b35cp-6f, 0x1.91cd8cp-25f, 0x1.cf9bd4p-76f,
     0x1.c09c28p-20f, 0.0f, 0.0f, 0x1.dca306p-98f, 0.0f, 0x1.bd5eaep-44f,
     0x1.b9d96ap-90f, 0.0f, 0x1.f24052p-56f, 0x1.c92c1cp-68f, 0.0f, 0x1.50bdb8p-122f,
     0.0f, 0x1.da81e2p-110f, 0.0f, 0.0f, 0.0f, 0x1.91cdb4p-119f, 0x1.b68fb6p-102f,
     0x1.2880e2p-52f, 0x1.8a9118p-119f, 0x1.9c5036p-105f, 0x1.dd993ap-107f, 0.0f,
     0x1.34f892p-19f, 0.0f, 0.0f, 0.0f, 0x1.cb6fdp-3f, 0x1.f15988p-60f, 0.0f, 0.0f,
     0.0f, 0x1.3c15eap-109f, 0.0f, 0.0f, 0x1.842ea6p-32f, 0.0f, 0x1.570aep-14f, 0.0f,
     0x1.ecd914p-19f, 0.0f, 0.0f, 0x1.6ef242p-34f, 0.0f, 0x1.bd7b98p-110f,
     0x1.30d30ap-28f, 0x1.871888p-61f, 0.0f, 0x1.87b798p-123f, 0x1.625b5cp-32f, 0.0f,
     0x1.ccc868p-52f, 0x1.8630cep-19f, 0x1.acc2d6p-114f, 0.0f, 0x1.1aa774p-19f, 0.0f,
     0x1.1aae2ap-15f, 0x1.8225f8p-75f, 0.0f, 0x1.0e1294p-56f, 0x1.babd4cp-24f,
     0x1.dc5106p-101f, 0x1.0f395p-102f, 0x1.33718cp-24f, 0x1.f04c2cp-109f,
     0x1.182cb6p-66f, 0x1.196d3ep-9f, 0.0f, 0.0f, 0x1.2c1f8p-17f, 0x1.712e84p-116f,
     0x1.2c3432p-92f, 0x1.30b81cp-55f, 0x1.aee6a8p-10f, 0x1.6dd044p-34f, 0.0f, 0.0f,
     0x1.499d2ap-95f, 0x1.b7f102p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c8af2p-35f,
     0x1.108312p-87f, 0.0f, 0x1.cb4fdep-29f, 0x1.395f6p-98f, 0.0f, 0.0f, 0.0f,
     0x1.50dd74p-30f, 0x1.578498p-31f, 0x1.e8c784p-38f, 0x1.5487e6p-38f, 0.0f,
     0x1.95369ap-116f, 0x1.ed12dep-9f, 0x1.38d5f8p-55f, 0.0f, 0x1.b72f6ep-87f,
     0x1.9064ccp-20f, 0.0f, 0x1.54844p-24f, 0.0f, 0x1.b7ac22p-19f, 0x1.99ee4ep-32f,
     0.0f, 0x1.1db06ep-90f, 0.0f, 0.0f, 0.0f, 0x1.e03444p-81f, 0x1.49e72ap-93f,
     0x1.2a2e9ap-113f, 0.0f, 0.0f, 0x1.66404cp-87f, 0x1.60f3e2p-64f, 0x1p0f, 0.0f,
     0x1.25a1dep-36f, 0x1.ed98a4p-70f, 0.0f, 0x1.de73cep-83f, 0.0f, 0x1.dbc576p-38f,
     0x1.d2d92p-79f, 0x1.977172p-68f, 0.0f, 0.0f, 0x1.c5f3acp-92f, 0x1.f60402p-33f,
     0.0f, 0.0f, 0.0f, 0x1.744d58p-96f, 0x1.abb486p-121f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.932f08p-41f, 0.0f, 0x1.7a167ap-124f, 0.0f, 0x1.30e628p-110f,
     0x1.d53548p-34f, 0x1.4f7976p-98f, 0x1.0e0128p-5f, 0.0f, 0.0f, 0x1.1b32eep-20f,
     0.0f, 0x1.870de6p-90f, 0x1.02373ep-57f, 0.0f, 0.0f, 0x1.a291e8p-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5794ep-29f, 0x1.c82492p-98f, 0.0f, 0x1.015a14p-31f,
     0x1.6ed5d8p-113f, 0x1.221ddap-122f, 0x1.21ddbp-61f, 0x1.09ed4p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3b089p-95f, 0.0f, 0.0f, 0x1.4fbf98p-109f, 0x1.5837b6p-108f, 0.0f,
     0x1.c07e1ap-125f, 0x1.6dc372p-124f, 0x1.b791eap-8f, 0.0f, 0x1.7d6a64p-7f,
     0x1.3f11ecp-121f, 0.0f, 0x1.8b441ap-62f, 0.0f, 0.0f, 0.0f, 0x1.129ebcp-87f,
     0x1.4fb028p-111f, 0.0f, 0.0f, 0x1.7e0c06p-38f, 0x1.346554p-106f, 0x1.655p-69f,
     0.0f, 0.0f, 0.0f, 0x1.34e964p-71f, 0x1.325314p-57f, 0x1.bd019ap-12f, 0.0f,
     0x1.d852ap-25f, 0.0f, 0x1.7bc5c8p-55f, 0.0f, 0x1.d23be6p-48f, 0.0f,
     0x1.954f74p-41f, 0.0f, 0.0f, 0x1.9e7a12p-57f, 0x1.abf8dap-12f, 0.0f,
     0x1.2a30acp-82f, 0x1.9bef32p-25f, 0.0f, 0x1.03a074p-44f, 0x1.d23a74p-123f, 0.0f,
     0x1.d994d4p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1759ap-39f, 0x1.c0c53cp-101f,
     0.0f, 0.0f, 0x1.4064eep-54f, 0x1.9b1cfp-76f, 0x1.c9ad16p-54f, 0x1.fb968cp-17f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b45cfcp-18f, 0.0f, 0.0f, 0x1.1ae684p-4f, 0.0f, 0.0f,
     0.0f, 0x1.d87f36p-77f, 0x1.147eaep-100f, 0.0f, 0x1.5b2fa6p-69f, 0x1.f301d6p-48f,
     0x1.fb2048p-89f, 0.0f, 0x1.4d728ep-36f, 0x1.43977p-105f, 0.0f, 0x1.ec6708p-32f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.b04514p-15f, 0.0f, 0x1.0e6282p-125f, 0.0f,
     0x1.6f6ffap-15f, 0x1.43cd58p-27f, 0x1p0f, 0x1.1e818cp-108f, 0x1.7f172ap-35f,
     0.0f, 0x1.a9878cp-113f, 0x1.32a49ap-34f, 0x1.365364p-56f, 0.0f, 0x1.86e6bep-45f,
     0x1.3d7146p-126f, 0x1.f482f2p-114f, 0x1.cea15cp-7f, 0.0f, 0.0f, 0x1.3ace2cp-118f,
     0.0f, 0.0f, 0.0f, 0x1.7aecccp-23f, 0x1.0bc5aap-104f, 0.0f, 0.0f, 0x1.e7b35p-52f,
     0.0f, 0x1.0ca6bep-40f, 0x1.26ef0cp-111f, 0x1.7e538ep-99f, 0.0f, 0.0f, 0.0f,
     0x1.8e759ep-59f, 0x1.d77eacp-23f, 0.0f, 0x1.739ffp-17f, 0x1.bf4f12p-35f,
     0x1.e915ep-81f, 0x1.bb07f2p-24f, 0.0f, 0.0f, 0x1.cf094ap-97f, 0x1.8188ap-78f,
     0x1.efda1p-25f, 0x1.edc4f6p-68f, 0x1.b3858ep-11f, 0x1.7df3dp-114f, 0.0f,
     0x1.2b0a6p-21f, 0x1.cff14cp-116f, 0x1.2a9e4ap-88f, 0x1.ffa398p-7f, 0.0f, 0.0f,
     0x1.478d62p-2f, 0x1.381b44p-108f, 0.0f, 0x1.88284cp-110f, 0.0f, 0x1.2eec74p-69f,
     0x1.1ac516p-117f, 0.0f, 0x1.0e174cp-50f, 0.0f, 0x1.6c22ep-43f, 0x1.5a3676p-94f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb478ap-41f, 0.0f, 0x1.1bed12p-5f, 0x1.b18d5ep-122f,
     0.0f, 0.0f, 0x1.51c2fep-94f, 0x1.65f2e2p-43f, 0.0f, 0x1.381b0ep-19f, 0.0f,
     0x1.ba0668p-70f, 0.0f, 0.0f, 0x1.1a37bep-1f, 0x1.6eeb74p-80f, 0x1.5087f2p-103f,
     0x1.806aap-20f, 0x1.e0a1f6p-95f, 0x1.74a65ep-121f, 0.0f, 0.0f, 0x1.7ff44cp-11f,
     0.0f, 0.0f, 0.0f, 0x1.144a8p-114f, 0.0f, 0x1.a4adbap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67b9f2p-74f, 0.0f, 0.0f, 0.0f, 0x1.3b8cb6p-69f, 0.0f, 0.0f, 0x1.8b3664p-76f,
     0.0f, 0x1.176186p-75f, 0.0f, 0x1.8ede52p-55f, 0.0f, 0.0f, 0.0f, 0x1.a7023p-87f,
     0x1.821b98p-80f, 0x1.b91246p-59f, 0.0f, 0x1.4b23c2p-58f, 0x1.aa36dep-21f,
     0x1.73fc5ep-31f, 0x1.93f2eap-29f, 0x1.f28dc2p-60f, 0.0f, 0x1.570be6p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a02d4p-54f, 0x1.94aac8p-13f, 0x1.30afd8p-111f,
     0x1.e79808p-98f, 0x1.4d1148p-60f, 0x1.f0e818p-122f, 0.0f, 0.0f, 0x1.04e3d2p-113f,
     0x1.9032bap-97f, 0.0f, 0x1.4f21d4p-15f, 0x1.02140cp-46f, 0x1.f13dp-3f,
     0x1.b1a2a2p-29f, 0.0f, 0.0f, 0.0f, 0x1.c45c4p-81f, 0.0f, 0x1.15a1c8p-40f, 0x1p0f,
     0x1.d71e82p-36f, 0.0f, 0.0f, 0x1.5ec3dap-21f, 0x1.d31c8p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7a9064p-4f, 0x1.6aa1a6p-37f, 0x1.f4a996p-115f, 0x1.59dac4p-50f,
     0.0f, 0x1.889212p-46f, 0x1.5a712ep-52f, 0x1.c49588p-117f, 0.0f, 0.0f,
     0x1.40c008p-60f, 0.0f, 0x1.f0737p-77f, 0.0f, 0x1.f01026p-6f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.90e6bcp-38f, 0.0f, 0.0f, 0x1.4c20b6p-83f, 0.0f, 0.0f, 0.0f,
     0x1.5e9358p-30f, 0x1.af72e2p-78f, 0x1.dd8da6p-5f, 0x1.3098fp-16f, 0.0f, 0.0f,
     0x1.7ce30ap-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d90c2p-116f, 0x1.55d172p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef4dccp-41f, 0.0f, 0.0f, 0x1.dc478ap-94f,
     0.0f, 0x1.24dcd6p-31f, 0x1.908a08p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3efe34p-55f, 0x1.c3ed54p-54f, 0x1.6a9804p-52f, 0x1.bc845cp-123f,
     0x1.02e9fap-39f, 0x1.3dc4d8p-20f, 0x1.3dd1a4p-114f, 0.0f, 0.0f, 0x1.ba5e8ep-57f,
     0.0f, 0x1.76ccfcp-11f, 0x1.5dfe48p-72f, 0x1.0aa60ap-28f, 0x1.872d12p-63f,
     0x1.34aebep-75f, 0x1.35765ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30097p-8f, 0x1.80986p-18f, 0x1.ac4922p-43f, 0.0f, 0.0f, 0.0f, 0x1.411854p-3f,
     0x1.0b74ep-71f, 0x1.054b7p-99f, 0.0f, 0x1.44353p-49f, 0x1.3de654p-54f,
     0x1.68a1p-105f, 0x1.5a816ep-17f, 0.0f, 0x1.3ec696p-55f, 0x1.54eedap-14f,
     0x1.cec1b4p-80f, 0x1.3f85acp-119f, 0x1.3af21ap-4f, 0x1.2087dap-124f,
     0x1.400966p-39f, 0x1.13ba8ap-56f, 0x1.1934e2p-89f, 0x1.dfd2dep-63f, 0.0f, 0.0f,
     0.0f, 0x1.08ebaap-81f, 0x1.9c446cp-16f, 0x1.af3a42p-107f, 0.0f, 0x1.5bf95ep-94f,
     0x1.232a2ep-38f, 0.0f, 0.0f, 0x1.1cae92p-115f, 0.0f, 0.0f, 0x1.7e5a9p-41f,
     0x1.8a4104p-91f, 0.0f, 0x1.a6799cp-58f, 0.0f, 0x1.895f8ep-109f, 0x1.befde6p-63f,
     0x1.31cc6ap-12f, 0x1.4306fap-39f, 0x1.617da4p-15f, 0.0f, 0.0f, 0.0f,
     0x1.db107ep-75f, 0x1.91fa16p-23f, 0x1.e10198p-91f, 0.0f, 0.0f, 0x1.65c512p-89f,
     0x1.f1508cp-55f, 0.0f, 0.0f, 0x1.810fb2p-52f, 0.0f, 0x1.e9ed48p-15f,
     0x1.5563fp-4f, 0.0f, 0.0f, 0x1.de147cp-74f, 0x1.4d1412p-82f, 0.0f,
     0x1.8de6e2p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31d8dcp-6f, 0x1.e5efacp-9f, 0.0f,
     0.0f, 0.0f, 0x1.ab1e68p-12f, 0x1.762b26p-13f, 0.0f, 0x1.fd53b8p-20f,
     0x1.7806cep-52f, 0.0f, 0.0f, 0x1.02dec6p-54f, 0x1.d5e4d6p-124f, 0x1.def6b4p-27f,
     0x1.4da7eap-24f, 0.0f, 0x1.ff3306p-67f, 0.0f, 0.0f, 0.0f, 0x1.6e2d2ep-3f,
     0x1.0810a2p-109f, 0.0f, 0x1.f74a12p-123f, 0.0f, 0.0f, 0x1.1f22aep-85f,
     0x1.01ef0ap-51f, 0x1.fa254p-22f, 0.0f, 0.0f, 0x1.5375a2p-58f, 0.0f, 0.0f,
     0x1.e06afp-92f, 0.0f, 0.0f, 0x1.6816b2p-123f, 0x1.786e1cp-58f, 0x1.251c5cp-100f,
     0.0f, 0.0f, 0x1.9ffb2p-48f, 0x1.c24c4p-106f, 0.0f, 0x1.57770cp-72f, 0.0f,
     0x1.9c6f06p-11f, 0x1.62e8c6p-117f, 0x1.e7324ep-13f, 0x1.68a6dap-71f, 0.0f, 0.0f,
     0x1.a929a2p-110f, 0.0f, 0.0f, 0x1.36a678p-56f, 0.0f, 0.0f, 0.0f, 0x1.f503ap-101f,
     0.0f, 0x1.7630c2p-73f, 0x1.a6fc7ap-121f, 0.0f, 0x1.3b485p-4f, 0x1.f88b98p-9f,
     0.0f, 0x1.39e432p-6f, 0.0f, 0x1.0914ap-101f, 0x1.0a430ap-25f, 0.0f,
     0x1.9609d4p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9d8fcp-45f, 0x1.db296cp-7f,
     0.0f, 0x1.59837cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d2167p-27f, 0x1.25cecp-50f,
     0.0f, 0x1.498748p-93f, 0.0f, 0x1.db2708p-82f, 0x1.d837dep-60f, 0.0f,
     0x1.42ef32p-122f, 0.0f
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
            tmp1 = Sleef_tanhf4_u35kvx(tmp0);
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
    printf("Sleef_tanhf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
