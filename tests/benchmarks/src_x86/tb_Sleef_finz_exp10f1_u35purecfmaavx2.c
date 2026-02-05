/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f1_u35purecfma.c --function \
 *     Sleef_finz_exp10f1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.8b92dap-97f, 0.0f, 0x1.6062dep-126f, 0.0f, 0x1.bffe6ap-100f, 0.0f,
     0x1.403188p-56f, 0x1.e92444p-79f, 0x1.e868a4p-113f, 0x1.c6f1eap-65f,
     0x1.50a974p-110f, 0x1.0ce3acp-87f, 0x1.24b948p-46f, 0.0f, 0.0f, 0.0f,
     0x1.8a8844p-124f, 0x1.2b0cfcp-20f, 0x1.9ea86p-29f, 0.0f, 0x1.c139ep-89f,
     0x1.2d823p-17f, 0x1.b6da9p-72f, 0.0f, 0x1.d27c5cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07872ep-13f, 0x1.b9910ap-45f, 0x1.dbde88p-83f, 0.0f, 0x1.b59a1cp-27f, 0.0f,
     0x1.7d13b2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f81992p-105f, 0x1.1d0882p-83f,
     0x1.0a607p-8f, 0x1.4f384ap-80f, 0.0f, 0.0f, 0x1.11e5ep-32f, 0x1.772828p-6f,
     0x1.c5f6a2p-45f, 0x1.7af1e6p-81f, 0.0f, 0x1.2ce022p-94f, 0.0f, 0.0f, 0.0f,
     0x1.734702p-47f, 0x1.afbccp-95f, 0.0f, 0.0f, 0x1.bbd5f6p-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.53ed12p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f15d78p-11f,
     0x1.949656p-17f, 0.0f, 0x1.e5ff64p-116f, 0x1.217af6p-101f, 0x1.522936p-18f,
     0x1.438c42p-6f, 0x1.a8ae3cp-93f, 0.0f, 0.0f, 0x1.66ceb8p-120f, 0x1.45461ep-94f,
     0.0f, 0x1.317b52p-14f, 0x1.b60da8p-115f, 0x1.0ec52p-99f, 0x1.1c865ap-35f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58a8bap-103f, 0x1.a24e1cp-66f,
     0x1.e6edfp-124f, 0.0f, 0x1.eabf94p-11f, 0.0f, 0.0f, 0.0f, 0x1.6b8cp-9f,
     0x1.0e5f24p-21f, 0.0f, 0.0f, 0.0f, 0x1.0e9dd2p-43f, 0x1.196baap-5f,
     0x1.31586p-80f, 0x1.7deabap-72f, 0.0f, 0x1.4e834cp-25f, 0.0f, 0x1.fc9b32p-66f,
     0x1.e44b62p-116f, 0.0f, 0.0f, 0x1.841d4ep-73f, 0x1.f718cp-54f, 0.0f,
     0x1.5dc132p-111f, 0x1.2069c6p-69f, 0.0f, 0.0f, 0.0f, 0x1.e187eep-37f,
     0x1.06bc4p-4f, 0.0f, 0x1.5a6a06p-34f, 0x1.ec2c62p-2f, 0.0f, 0.0f,
     0x1.2855ap-117f, 0.0f, 0x1.e90ffep-100f, 0x1.7f5786p-68f, 0x1.3b0698p-46f, 0.0f,
     0x1.8b5f64p-14f, 0.0f, 0x1.40d3e4p-22f, 0.0f, 0x1.03ab5ep-36f, 0x1.7ff8f6p-51f,
     0x1.fea16ap-115f, 0.0f, 0.0f, 0.0f, 0x1.44bcc6p-51f, 0.0f, 0x1.c4c84cp-63f,
     0x1.703dc6p-32f, 0.0f, 0.0f, 0x1.cb0ecap-7f, 0.0f, 0x1.63f98ap-80f, 0.0f, 0.0f,
     0x1.ef4e14p-52f, 0x1.13e69cp-121f, 0x1.1c89a2p-110f, 0x1.8e715p-96f, 0.0f, 0.0f,
     0x1.1e65eep-60f, 0.0f, 0.0f, 0.0f, 0x1.fc77d6p-33f, 0x1.4f27ap-32f,
     0x1.5e51d4p-87f, 0.0f, 0.0f, 0x1.828c92p-111f, 0.0f, 0.0f, 0x1.14fddap-74f, 0.0f,
     0.0f, 0x1.4b4dp-21f, 0x1.89345ap-100f, 0.0f, 0.0f, 0x1.f558d8p-92f,
     0x1.1be0bep-118f, 0x1.3d3e8cp-49f, 0x1.9aac3ep-68f, 0x1.be51f6p-57f,
     0x1.0b8786p-95f, 0.0f, 0.0f, 0x1.c7f52ep-90f, 0x1.de8676p-46f, 0.0f,
     0x1.7977d6p-92f, 0.0f, 0x1.44939ap-51f, 0x1.06da6ap-44f, 0x1.b5bcfcp-113f, 0.0f,
     0.0f, 0x1.944522p-35f, 0x1.c6cde8p-120f, 0.0f, 0x1.54c882p-62f, 0x1.0fccc6p-7f,
     0x1.90529cp-84f, 0x1.03cce2p-9f, 0x1.86ece6p-36f, 0x1.512654p-73f, 0.0f,
     0x1.04966ap-71f, 0.0f, 0x1.6c078ep-45f, 0x1.c6e20cp-70f, 0x1.e56dd4p-35f,
     0x1.86ed56p-111f, 0.0f, 0x1.50e246p-88f, 0x1.beac8ep-17f, 0.0f, 0x1.7eb942p-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1944ep-3f, 0.0f, 0.0f, 0.0f, 0x1.ffe71ap-2f,
     0x1.1711e6p-64f, 0x1.073a7ap-71f, 0.0f, 0x1.72fd6ep-80f, 0.0f, 0x1.dbd42cp-94f,
     0.0f, 0x1.b16898p-47f, 0x1.ace1fep-54f, 0.0f, 0x1.ace548p-86f, 0.0f, 0.0f, 0.0f,
     0x1.00e08p-89f, 0.0f, 0x1.78626cp-43f, 0x1.88fc2p-116f, 0x1.14a8a2p-53f, 0.0f,
     0.0f, 0x1.55103p-44f, 0.0f, 0.0f, 0.0f, 0x1.7f0784p-51f, 0.0f, 0x1.4cf048p-126f,
     0.0f, 0x1.db14c4p-2f, 0.0f, 0x1.d13108p-33f, 0x1.a821fep-79f, 0x1.b20ce6p-53f,
     0.0f, 0x1.3c8508p-56f, 0x1.4f9c68p-24f, 0x1.38p-32f, 0x1.bfeae8p-102f,
     0x1.085d9cp-117f, 0.0f, 0.0f, 0x1.51ba92p-36f, 0x1.a864ecp-96f, 0x1.c6cb42p-56f,
     0.0f, 0x1.b9f68ep-49f, 0x1.034c36p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4a776p-40f,
     0x1.ff472ep-93f, 0x1.702196p-31f, 0.0f, 0x1.2a3d7ap-21f, 0.0f, 0.0f,
     0x1.99334ap-88f, 0x1.e2b6a8p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c1778ap-86f, 0x1.d6029ep-64f, 0x1.98dff8p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.68877cp-52f, 0.0f, 0.0f, 0x1.8f1406p-14f, 0x1.d0d63cp-38f, 0.0f, 0.0f,
     0x1.7b495ap-39f, 0x1.4f413ep-124f, 0.0f, 0.0f, 0.0f, 0x1.0ee666p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6047acp-2f, 0x1.a433ap-73f, 0.0f,
     0x1.00cbcap-42f, 0.0f, 0x1.83c238p-82f, 0x1.603f6cp-47f, 0x1.b1eceap-120f, 0.0f,
     0.0f, 0x1.eb90cap-115f, 0x1.9c336cp-75f, 0x1.3147d4p-65f, 0x1.c4a9c2p-102f,
     0x1.763dfap-66f, 0.0f, 0.0f, 0.0f, 0x1.e47666p-2f, 0x1.bea62ap-58f, 0.0f, 0.0f,
     0.0f, 0x1.a88dfcp-103f, 0x1p0f, 0.0f, 0x1.305882p-84f, 0.0f, 0.0f,
     0x1.1ccdf6p-86f, 0.0f, 0x1.417fccp-117f, 0x1.27c242p-45f, 0x1.647c36p-42f,
     0x1.a83bfcp-48f, 0.0f, 0x1.516d18p-25f, 0x1.51985ap-67f, 0.0f, 0x1.c0afa2p-27f,
     0x1.fbf63ep-93f, 0x1.62ec7ap-38f, 0.0f, 0.0f, 0x1.cca61p-50f, 0x1.0df8d4p-99f,
     0.0f, 0x1.94369p-103f, 0.0f, 0.0f, 0.0f, 0x1.10bbf4p-108f, 0.0f, 0.0f,
     0x1.92286p-83f, 0x1.c3444ep-104f, 0x1.56b7bap-91f, 0x1.36f576p-91f,
     0x1.3e2a8ap-96f, 0.0f, 0x1.5a9f2ep-62f, 0.0f, 0.0f, 0x1.1d5e32p-49f, 0.0f,
     0x1.69723ep-125f, 0x1.df4b5ap-9f, 0x1.e6f058p-12f, 0x1.e464ep-53f,
     0x1.32e5e2p-61f, 0x1.185704p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ab0504p-53f, 0.0f, 0x1.c2f242p-125f, 0.0f, 0x1.6e4b64p-109f, 0.0f,
     0.0f, 0x1.f30006p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ddbccp-86f,
     0x1.d25e6p-84f, 0.0f, 0.0f, 0.0f, 0x1.3c4926p-126f, 0x1.643668p-119f,
     0x1.816acep-53f, 0.0f, 0x1.bc9b54p-9f, 0.0f, 0x1.35646cp-106f, 0.0f,
     0x1.dd9d64p-99f, 0x1.dd9632p-14f, 0x1.5f87c6p-85f, 0.0f, 0x1.262574p-73f, 0.0f,
     0x1.25235ep-89f, 0.0f, 0x1.6a79b8p-73f, 0x1.989c38p-95f, 0x1.4fc398p-18f,
     0x1.a224fp-87f, 0x1.bcb63ep-34f, 0x1.5da92ap-123f, 0.0f, 0x1.4d9b62p-46f,
     0x1.9d4388p-27f, 0x1.6c27bep-122f, 0.0f, 0x1.a7b77ep-105f, 0x1.415a54p-119f,
     0x1.f59674p-52f, 0x1.13f586p-33f, 0x1.85e054p-19f, 0.0f, 0x1.5aca46p-1f,
     0x1.31b8aap-115f, 0x1.6c9f0cp-79f, 0x1.81fd66p-81f, 0x1.639102p-120f,
     0x1.0e647cp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f654bap-48f, 0.0f, 0.0f,
     0x1.8a04eep-18f, 0x1.376544p-103f, 0.0f, 0.0f, 0x1.de2d62p-121f, 0.0f,
     0x1.377616p-34f, 0.0f, 0.0f, 0x1.134f14p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.71a916p-12f, 0x1.56a6d2p-29f, 0x1.5538ecp-91f, 0.0f, 0x1.25cafp-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1871ap-97f, 0x1.5de744p-73f, 0x1.852a8p-43f, 0.0f,
     0x1.8569eap-94f, 0x1.aa09b6p-15f, 0.0f, 0.0f, 0.0f, 0x1.913684p-113f, 0.0f, 0.0f,
     0x1.7a1f7ap-109f, 0.0f, 0x1.ffc5f2p-118f, 0.0f, 0.0f, 0x1.30d5acp-60f,
     0x1.6c50bp-112f, 0x1.e4d3e4p-9f, 0x1.1e1b24p-33f, 0x1.202a88p-28f,
     0x1.4d4bd2p-109f, 0.0f, 0x1.4768bap-121f, 0.0f, 0x1.9e0e96p-23f, 0x1.dd6d08p-14f,
     0x1.8e1c6ep-124f, 0.0f, 0x1.856d48p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.710b2cp-82f, 0.0f, 0.0f, 0.0f, 0x1.b8fb64p-91f, 0x1.002e64p-44f, 0.0f,
     0x1.759f2cp-51f, 0.0f, 0x1.28ba16p-81f, 0.0f, 0.0f, 0.0f, 0x1.4f5cd6p-113f, 0.0f,
     0x1.2c3a8cp-43f, 0x1.14533ap-116f, 0x1.49af6ap-16f, 0x1.2084d2p-77f, 0.0f, 0.0f,
     0x1.0e81a8p-63f, 0.0f, 0x1.42c3d2p-4f, 0.0f, 0.0f, 0.0f, 0x1.3ec3fp-34f,
     0x1.95dff4p-15f, 0.0f, 0.0f, 0.0f, 0x1.63126ep-110f, 0x1.4140ccp-113f,
     0x1.9c57a2p-47f, 0x1.40daccp-69f, 0x1.270f2p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e5e6ap-82f, 0.0f, 0x1.56c09ap-109f, 0.0f, 0.0f, 0.0f, 0x1.01c3b6p-67f, 0.0f,
     0x1.0e687p-71f, 0.0f, 0.0f, 0x1.2b780cp-82f, 0x1.78cec4p-57f, 0.0f,
     0x1.81c00ap-74f, 0x1.b680a6p-13f, 0x1.0b6e24p-60f, 0x1.66d51ep-28f,
     0x1.5bcffep-91f, 0x1.0cbb0ap-51f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.9a85c2p-106f, 0.0f, 0.0f, 0x1.317b16p-4f, 0x1.efd4ccp-2f, 0x1.9210fcp-4f,
     0x1p0f, 0x1.3e4cdp-67f, 0.0f, 0.0f, 0.0f, 0x1.7296e2p-24f, 0.0f, 0x1.47708ep-80f,
     0.0f, 0.0f, 0.0f, 0x1.d57e8cp-68f, 0x1.b84a0ap-41f, 0.0f, 0x1.10a514p-86f, 0.0f,
     0x1.7c09f2p-76f, 0x1.aabe2ap-62f, 0x1.153c14p-24f, 0.0f, 0x1.61ac88p-36f, 0.0f,
     0x1.a83834p-58f, 0x1.d75cacp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1f8eep-79f, 0.0f,
     0.0f, 0x1.7548a8p-116f, 0.0f, 0.0f, 0x1.de8c6ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.9fe6d6p-83f, 0x1.d8a8bap-107f, 0.0f, 0x1.a46f18p-71f, 0x1.def7dp-122f, 0.0f,
     0x1.036eb4p-60f, 0x1.f5ad5ap-96f, 0x1.5c25aap-19f, 0.0f, 0x1.81ee82p-84f,
     0x1.ade992p-114f, 0.0f, 0.0f, 0.0f, 0x1.e6bf88p-6f, 0x1.344494p-81f, 0.0f,
     0x1.0e27a4p-87f, 0.0f, 0.0f, 0x1.5a4814p-92f, 0.0f, 0.0f, 0x1.9377b6p-22f, 0.0f,
     0x1.7ef54ep-74f, 0x1.6b5384p-15f, 0x1.e8d18p-41f, 0.0f, 0x1.a25e5cp-58f, 0.0f,
     0x1.996b2cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5296dp-123f, 0.0f,
     0x1.47f81cp-86f, 0.0f, 0.0f, 0.0f, 0x1.661e28p-4f, 0x1.718a7p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7c16fap-71f, 0.0f, 0.0f, 0x1.86b002p-85f, 0.0f, 0x1.b3e384p-73f,
     0x1.207de2p-14f, 0x1.4b6a3ep-66f, 0x1.b34e12p-69f, 0x1.cb73d8p-49f,
     0x1.5ca7dp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a48f6ep-112f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.30e4aap-80f, 0x1.982f6cp-74f, 0x1.3ec2e6p-111f, 0x1.a9cd8ep-4f,
     0x1.baa554p-94f, 0.0f, 0.0f, 0x1.edaf1p-25f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.38a02ep-17f, 0.0f, 0x1.8a8382p-67f, 0x1.f1d4bp-114f,
     0.0f, 0x1.199f2ep-82f, 0x1.3ddd48p-63f, 0.0f, 0.0f, 0.0f, 0x1.44808cp-49f,
     0x1.b6d3bap-80f, 0x1.2eab1p-94f, 0.0f, 0.0f, 0x1.66cd78p-21f, 0.0f, 0.0f,
     0x1.3191bep-86f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.427ed8p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bda148p-6f, 0x1.ba4448p-52f, 0x1.b963f4p-126f,
     0x1.706f36p-121f, 0x1.dcb67p-56f, 0x1.397096p-2f, 0x1.3a3f02p-66f,
     0x1.0a23eap-26f, 0.0f, 0x1.fef334p-1f, 0.0f, 0x1.818adap-51f, 0.0f,
     0x1.9a0fap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cc16eap-123f, 0.0f, 0x1.c5529ap-21f, 0x1.b0da6cp-61f, 0x1.b61022p-3f, 0.0f,
     0x1.a41d1cp-33f, 0.0f, 0.0f, 0x1.78987ep-102f, 0x1.df729cp-77f, 0x1.5edeb8p-8f,
     0.0f, 0.0f, 0x1.729064p-66f, 0x1.a6abc2p-38f, 0.0f, 0.0f, 0.0f, 0x1.0ea2bcp-8f,
     0.0f, 0x1.3e90aap-8f, 0x1.fe5dbap-95f, 0x1.186feep-82f, 0x1.9b8c8p-8f,
     0x1.dd7ce4p-95f, 0x1.dc1cc4p-29f, 0x1.9754dcp-8f, 0x1.676e2cp-13f,
     0x1.72ce14p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11c0cap-33f, 0x1.ff1ec2p-54f, 0.0f,
     0x1.1c1564p-77f, 0.0f, 0.0f, 0x1.0f74b6p-126f, 0x1.476c44p-4f, 0x1.dbfdeap-115f,
     0.0f, 0x1.17e93ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fea1cp-100f, 0x1.5dfdacp-84f,
     0.0f, 0x1.e35cdcp-122f, 0x1.a11456p-16f, 0.0f, 0.0f, 0x1.cc288ep-83f, 0.0f,
     0x1.ba404ap-48f, 0.0f, 0.0f, 0.0f, 0x1.d88586p-117f, 0x1.309e2ep-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22d3eap-21f, 0x1.86c84ap-27f, 0x1.6ed7eep-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.316b98p-95f, 0x1.b04446p-93f, 0.0f, 0.0f,
     0x1.9f187ap-15f, 0x1.5e574p-20f, 0.0f, 0.0f, 0x1.70ed1cp-20f, 0x1.c496ecp-77f,
     0.0f, 0x1.69a4a8p-25f, 0.0f, 0.0f, 0x1.4992dcp-41f, 0x1.a7d6f8p-72f, 0.0f, 0.0f,
     0x1.f9ff7p-46f, 0.0f, 0x1.31519cp-5f, 0.0f, 0x1.3d821ap-62f, 0x1.3c5996p-39f,
     0.0f, 0.0f, 0.0f, 0x1.982ce8p-22f, 0.0f, 0.0f, 0x1.ce993p-121f, 0x1.1ed998p-25f,
     0x1.6eb9f4p-5f, 0x1.c7272cp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82d462p-27f,
     0x1.61d91ep-98f, 0x1.740ea6p-93f, 0.0f, 0.0f, 0x1.47e082p-101f, 0.0f,
     0x1.66087ap-68f, 0x1.bb4ee8p-68f, 0.0f, 0.0f, 0x1.b21d9ap-9f, 0.0f, 0.0f, 0.0f,
     0x1.38674ap-93f, 0.0f, 0x1.be4ca6p-106f, 0.0f, 0x1.40197ap-42f, 0x1.f60e52p-99f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71fbf2p-124f, 0.0f, 0x1.bc345ap-24f,
     0x1.0be17ep-96f, 0x1.2ada1p-70f, 0.0f, 0.0f, 0x1.5fb60ap-18f, 0.0f, 0.0f,
     0x1.489686p-44f, 0.0f, 0x1.638f1ap-31f, 0x1.fbb22p-41f, 0x1.062fa8p-61f, 0.0f,
     0.0f, 0.0f, 0x1.05ef8ep-109f, 0x1.c5ff9ep-126f, 0x1.4dca6ap-26f, 0x1.536b68p-23f,
     0.0f, 0x1.d10014p-112f, 0x1.04914cp-109f, 0.0f, 0x1.18e056p-101f,
     0x1.d36254p-112f, 0x1.23b4e2p-53f, 0x1.7d7a4ap-111f, 0.0f, 0x1.4738e4p-66f, 0.0f,
     0.0f, 0x1.1a34bap-85f, 0.0f, 0x1.dcee5ap-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8d9884p-37f, 0x1.b97f8p-28f, 0.0f, 0x1.e16a04p-104f, 0x1.da8c3cp-26f, 0.0f,
     0x1.187212p-77f, 0x1.bfb922p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fd514p-45f,
     0x1.a2c2cep-113f, 0x1.6538dp-5f, 0.0f, 0x1.22f4fp-108f, 0.0f, 0.0f,
     0x1.30ebdep-57f, 0x1.fe6366p-69f, 0.0f
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
            tmp1 = Sleef_finz_exp10f1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp10f1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10f1_u35purecfma bench acc %a\n", global_bench_acc);
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
