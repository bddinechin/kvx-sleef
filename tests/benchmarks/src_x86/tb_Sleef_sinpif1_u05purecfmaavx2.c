/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpif1_u05purecfma.c --function \
 *     Sleef_sinpif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.10ac4cp-29f, 0x1.c1ef54p-18f, 0.0f, 0.0f, 0x1.972f3p-53f, 0.0f,
     0x1.130e58p-21f, 0x1.4c2dcep-126f, 0x1.6c0702p-69f, 0x1.f7c78ep-3f, 0.0f, 0.0f,
     0.0f, 0x1.fc973ap-93f, 0x1.f69d6p-64f, 0.0f, 0.0f, 0x1.122edap-93f,
     0x1.d92348p-112f, 0x1.9c3a26p-31f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.60a62ap-29f, 0x1.ffbe3ap-97f, 0x1.c53604p-31f, 0.0f, 0x1.75a3e2p-104f, 0.0f,
     0x1.eec0c4p-5f, 0x1.d9c07p-109f, 0.0f, 0.0f, 0x1.f7536cp-25f, 0x1.61408ep-69f,
     0x1.00e0ecp-86f, 0x1.9cf73ep-118f, 0x1.83d61p-8f, 0.0f, 0.0f, 0x1.97616ap-34f,
     0x1.2d347p-27f, 0x1.df0ec8p-51f, 0x1.5746f6p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84e926p-79f, 0.0f, 0x1.b763f6p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.879342p-13f, 0.0f, 0x1.1a4904p-100f, 0x1.c9792p-105f, 0x1.6df4p-86f,
     0x1.3b9f72p-72f, 0.0f, 0x1.836302p-82f, 0.0f, 0x1.29d83ep-7f, 0.0f, 0.0f,
     0x1.ec406p-115f, 0.0f, 0.0f, 0x1.498058p-117f, 0.0f, 0x1.bc975ep-105f,
     0x1.2980bep-9f, 0x1.cecb9cp-100f, 0.0f, 0.0f, 0x1.72f0dep-106f, 0x1.a8b43ep-4f,
     0.0f, 0x1.71680cp-114f, 0x1.b1572ap-63f, 0.0f, 0x1.f494eep-46f, 0x1.ccb624p-107f,
     0.0f, 0x1.f0747ap-17f, 0.0f, 0x1.a44dc4p-73f, 0x1.aee0ccp-103f, 0.0f, 0.0f, 0.0f,
     0x1.85a8cap-9f, 0x1.7f6aa4p-57f, 0.0f, 0.0f, 0x1.3f840ap-54f, 0x1.da8908p-118f,
     0x1.82ad38p-108f, 0x1.8a7aa8p-18f, 0x1.f13d36p-19f, 0x1.ac79a2p-65f,
     0x1.1b87bp-59f, 0.0f, 0x1.5b25e2p-125f, 0x1.f102ccp-46f, 0x1.b3b2c6p-72f,
     0x1.3abcdap-70f, 0x1.66fd2cp-31f, 0x1.4f92f8p-108f, 0.0f, 0x1.941efp-22f, 0.0f,
     0.0f, 0.0f, 0x1.e615dp-98f, 0x1.875a7p-105f, 0x1.0ca554p-115f, 0x1.46dc28p-11f,
     0.0f, 0x1.b5b762p-18f, 0.0f, 0x1.04d614p-70f, 0.0f, 0x1.f2876ep-19f,
     0x1.475014p-102f, 0x1.8bb92p-87f, 0x1.edb15cp-83f, 0x1.fce8bp-27f, 0.0f, 0.0f,
     0x1.2eb24ep-65f, 0.0f, 0.0f, 0x1.911022p-121f, 0x1.a4831p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.498c56p-105f, 0.0f, 0x1.e47642p-113f, 0.0f, 0.0f, 0x1.c7fdbp-42f, 0.0f,
     0.0f, 0.0f, 0x1.005abp-75f, 0.0f, 0x1.f622b8p-53f, 0x1.78de2cp-117f, 0.0f,
     0x1.312cbep-91f, 0x1.8d74d8p-102f, 0.0f, 0.0f, 0x1.0df0b2p-39f, 0.0f, 0.0f, 0.0f,
     0x1.422ebap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6ed96p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bc60e2p-44f, 0.0f, 0x1.fd07cap-117f, 0x1.575d1cp-111f, 0.0f, 0.0f,
     0x1.5580c6p-28f, 0.0f, 0.0f, 0.0f, 0x1.30d026p-48f, 0x1.e0ad8p-36f, 0.0f, 0.0f,
     0.0f, 0x1.c84ab6p-65f, 0.0f, 0x1.0e744cp-14f, 0x1.252d96p-74f, 0x1.38b828p-80f,
     0x1.f28e3cp-121f, 0x1.582b96p-14f, 0x1.0d1c26p-76f, 0.0f, 0.0f, 0x1.a35f62p-108f,
     0.0f, 0x1.ca5456p-102f, 0.0f, 0x1.ee39fp-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2a73p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d02fecp-21f, 0x1.1a5c28p-81f,
     0x1.219322p-14f, 0x1.582f1cp-20f, 0x1.e0bd6ep-13f, 0.0f, 0x1.c7388cp-62f, 0.0f,
     0.0f, 0x1.e94eep-69f, 0.0f, 0.0f, 0x1.366584p-89f, 0x1.73257cp-13f, 0.0f,
     0x1.167c9ap-45f, 0x1.b03438p-116f, 0x1.2b80fep-2f, 0x1.797ec8p-15f, 0.0f,
     0x1.e2e742p-98f, 0x1.405e68p-66f, 0.0f, 0x1p0f, 0x1.fca43ap-75f, 0.0f,
     0x1.31a33ep-122f, 0.0f, 0.0f, 0.0f, 0x1.cb556ap-112f, 0.0f, 0x1.f56f26p-13f,
     0.0f, 0x1.065b48p-115f, 0x1.f3a372p-117f, 0x1.1be512p-124f, 0x1.0acd1ep-116f,
     0.0f, 0x1.fea814p-76f, 0x1.57ca44p-13f, 0x1.751226p-106f, 0x1.c3197ep-84f,
     0x1.f74e84p-107f, 0x1.df8672p-110f, 0x1.020de6p-3f, 0x1.2e044cp-16f, 0.0f, 0.0f,
     0x1.db2748p-105f, 0x1.8c32bcp-97f, 0.0f, 0.0f, 0.0f, 0x1.e77e4ep-34f,
     0x1.50ea5cp-21f, 0x1.4b9f04p-92f, 0x1.830af2p-125f, 0x1.ffd49ep-46f, 0.0f,
     0x1.6b6cccp-125f, 0.0f, 0x1p0f, 0x1.eee3aap-85f, 0x1.c8bacap-79f,
     0x1.fb9f8ap-62f, 0.0f, 0x1.92c5d6p-69f, 0.0f, 0.0f, 0x1.108b24p-22f,
     0x1.929be8p-79f, 0.0f, 0x1.0ac55cp-59f, 0.0f, 0.0f, 0x1.55115ap-75f, 0.0f,
     0x1.d819dcp-65f, 0x1.a090a6p-3f, 0.0f, 0.0f, 0.0f, 0x1.c3e18ap-53f, 0.0f,
     0x1.1d6bdap-22f, 0x1.8365cp-27f, 0.0f, 0x1.2c9736p-54f, 0.0f, 0.0f,
     0x1.15b986p-45f, 0x1.ec6d9cp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1008dep-78f, 0x1.5da15ap-89f, 0x1.cf6cp-32f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b28ep-126f, 0.0f, 0x1.a098d4p-30f, 0x1.c2aadap-52f, 0x1.b3058cp-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1038fp-55f, 0.0f, 0.0f, 0x1.6ab214p-84f, 0x1.ef6e68p-95f,
     0x1.114f0ap-100f, 0x1.ec9758p-62f, 0x1.8f351ep-59f, 0.0f, 0.0f, 0x1.3b0546p-76f,
     0x1.de93a4p-71f, 0x1.0a9914p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.70cf04p-79f,
     0x1.45807cp-52f, 0x1.ad468ep-19f, 0.0f, 0x1.7c19bcp-110f, 0.0f, 0x1.4ce35p-121f,
     0.0f, 0.0f, 0x1.3fd3dep-73f, 0x1.99ad28p-38f, 0.0f, 0x1.3a3c72p-11f,
     0x1.30b0a2p-99f, 0x1.9df22cp-5f, 0.0f, 0.0f, 0.0f, 0x1.6d0fp-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.147f9ep-110f, 0x1.841d98p-67f, 0x1.f53638p-72f, 0.0f,
     0x1.46303ep-97f, 0.0f, 0.0f, 0.0f, 0x1.a2d8bp-56f, 0x1.9bda5ap-113f, 0.0f,
     0x1.1fe066p-56f, 0x1.01a3bp-69f, 0x1.8c5032p-117f, 0x1.0599f2p-95f,
     0x1.f5b5c8p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.38386ep-114f, 0x1.f4cec6p-69f, 0x1.14751cp-16f, 0x1.b40daep-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7d65f8p-33f, 0x1.ee298ep-65f, 0x1.6aa834p-39f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.fd29p-104f, 0.0f, 0.0f, 0.0f, 0x1.117112p-115f, 0.0f,
     0x1.5b17cp-111f, 0x1.902592p-26f, 0x1.63fe36p-85f, 0.0f, 0x1.be701p-80f,
     0x1.7bfb4p-83f, 0x1.32feaap-43f, 0x1.6ed932p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8667fcp-93f, 0x1.e2f674p-13f, 0x1.ff2674p-111f, 0.0f, 0x1.6f6a12p-102f, 0.0f,
     0x1.b16d16p-99f, 0x1.4ce24p-64f, 0x1.1c359cp-49f, 0x1.20dc2p-61f,
     0x1.e4b59ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2fc128p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad0b04p-27f, 0x1.119a7ep-82f, 0.0f, 0x1.7de0d8p-20f,
     0x1.437884p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b7b3p-97f, 0.0f, 0.0f,
     0x1.f0531ep-60f, 0.0f, 0.0f, 0x1.0cecep-48f, 0x1.9f4c76p-105f, 0x1.086a96p-23f,
     0x1.0317d4p-97f, 0.0f, 0x1.9eb5fap-51f, 0.0f, 0.0f, 0x1.ec9bd6p-80f,
     0x1.2c580ep-122f, 0x1.78109cp-116f, 0x1.47f0c2p-58f, 0x1.3a64fap-2f, 0.0f,
     0x1.efe094p-103f, 0.0f, 0x1.9d40e4p-12f, 0x1.3d37d2p-74f, 0.0f, 0x1.e67bep-120f,
     0.0f, 0x1.157fdcp-7f, 0.0f, 0x1.d79348p-26f, 0.0f, 0.0f, 0x1.409574p-77f,
     0x1.fec44cp-106f, 0.0f, 0.0f, 0x1.77807ap-46f, 0x1.d1917ap-86f, 0x1.7a1af6p-31f,
     0.0f, 0.0f, 0x1.fa2c2cp-47f, 0x1.3abea6p-100f, 0x1.eea188p-121f, 0x1.da19bp-83f,
     0x1.0683bcp-80f, 0x1.686be8p-3f, 0.0f, 0x1.ed0abep-19f, 0.0f, 0x1.290474p-26f,
     0.0f, 0.0f, 0x1.efc494p-54f, 0.0f, 0x1.70afc6p-54f, 0x1.fe0dc2p-28f, 0.0f, 0.0f,
     0x1.482a86p-116f, 0x1.f624bp-99f, 0.0f, 0.0f, 0.0f, 0x1.b17f3p-17f, 0.0f,
     0x1.2937f8p-68f, 0x1.bc6356p-40f, 0x1.ac5208p-68f, 0.0f, 0x1.c8a3bp-80f,
     0x1.e31036p-79f, 0.0f, 0x1.ce9002p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef08eap-83f, 0x1.072ddp-25f, 0.0f, 0.0f, 0x1.7daef8p-42f, 0x1.4f3f86p-64f,
     0x1.845782p-102f, 0x1.e9e91p-56f, 0x1.3f8a32p-113f, 0x1.24640cp-58f,
     0x1.00b144p-52f, 0.0f, 0.0f, 0x1.482d36p-46f, 0x1.e1c0aep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f3ac2ep-86f, 0x1.7e0674p-87f, 0x1.c3d84ep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a6ac9p-34f, 0.0f, 0.0f, 0x1.83ac86p-38f, 0x1.0837fep-85f,
     0x1.04c8ep-24f, 0.0f, 0.0f, 0x1.98ae8cp-86f, 0x1.34932ap-57f, 0.0f,
     0x1.bd7438p-36f, 0x1.a37574p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c00c4p-87f, 0.0f, 0x1.428f54p-52f, 0x1.d3db4p-60f, 0x1.d0d794p-16f, 0.0f,
     0.0f, 0x1.272b18p-82f, 0x1.9d4bb2p-39f, 0x1.0bf492p-61f, 0x1.5fb2c4p-70f,
     0x1.5c1a2ap-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ebca4cp-45f, 0.0f,
     0x1.8bdfbp-7f, 0x1.5b15fap-103f, 0.0f, 0.0f, 0x1.6459fcp-43f, 0.0f, 0.0f,
     0x1.d72358p-39f, 0.0f, 0x1.8dbd5cp-100f, 0.0f, 0.0f, 0x1.eb3dap-53f,
     0x1.777ecp-9f, 0x1.e963c6p-7f, 0x1.e479e6p-78f, 0.0f, 0.0f, 0x1.26d162p-42f,
     0x1.31f838p-46f, 0x1.0b1698p-51f, 0.0f, 0x1.32c9e8p-85f, 0.0f, 0x1.f22234p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92b358p-86f, 0x1.c31678p-101f,
     0x1.146ec8p-84f, 0.0f, 0.0f, 0x1.53e40ep-8f, 0.0f, 0x1.d94242p-109f,
     0x1.49345ap-101f, 0x1.6f54a6p-28f, 0x1.1367b2p-51f, 0.0f, 0x1.cfac3cp-82f,
     0x1.547dcap-64f, 0x1.24d9b4p-126f, 0x1.b1bcp-108f, 0.0f, 0.0f, 0x1.51e1bcp-25f,
     0.0f, 0x1.44b63ep-78f, 0.0f, 0.0f, 0x1.a5fcf4p-67f, 0.0f, 0x1p0f,
     0x1.69ef94p-19f, 0x1.3757e4p-115f, 0.0f, 0x1.93be3p-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17afe2p-63f, 0.0f, 0.0f, 0.0f,
     0x1.55a22ep-61f, 0.0f, 0x1.7e1f5cp-44f, 0.0f, 0.0f, 0.0f, 0x1.1873b8p-52f,
     0x1.bae1e2p-67f, 0.0f, 0x1.780b96p-122f, 0x1.8f7836p-67f, 0x1.136d5ep-27f, 0.0f,
     0x1.998378p-16f, 0.0f, 0x1.9157fp-100f, 0x1.a91a24p-93f, 0.0f, 0x1.8857eap-82f,
     0x1.40fd48p-27f, 0.0f, 0x1.c88e1ap-82f, 0x1.96b434p-61f, 0.0f, 0.0f,
     0x1.bc945p-82f, 0.0f, 0.0f, 0x1.d0e13ap-119f, 0x1.d0194ap-28f, 0.0f,
     0x1.8daed6p-100f, 0.0f, 0.0f, 0x1.236f42p-18f, 0x1.f4ade8p-118f, 0x1.07eb22p-90f,
     0.0f, 0.0f, 0.0f, 0x1.dd6596p-4f, 0x1.7752bap-104f, 0x1.e9a6bap-83f,
     0x1.43931ap-118f, 0.0f, 0.0f, 0.0f, 0x1.d3b67ep-83f, 0x1.08231ep-65f, 0.0f,
     0x1.7978aap-108f, 0.0f, 0x1.50230ap-74f, 0x1.1311e6p-52f, 0.0f, 0x1.27dabap-49f,
     0.0f, 0x1.85b3bep-57f, 0x1.5ba05cp-45f, 0x1.04c052p-117f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f5a3cp-68f, 0.0f, 0.0f, 0x1.7248f6p-98f, 0x1.f73566p-66f, 0.0f,
     0x1.b131f8p-44f, 0.0f, 0x1.80e3eep-78f, 0.0f, 0x1.d22d66p-2f, 0.0f,
     0x1.f89aacp-59f, 0.0f, 0.0f, 0x1.f644c8p-61f, 0.0f, 0.0f, 0x1.cf06eep-39f, 0.0f,
     0x1.22ba5p-33f, 0.0f, 0x1.e47a8p-23f, 0.0f, 0x1.dd1fd4p-6f, 0x1.db1066p-43f,
     0x1.0cfcfep-41f, 0x1.474522p-108f, 0x1.507c12p-24f, 0x1.840dfep-112f,
     0x1.59d99ap-115f, 0.0f, 0.0f, 0x1.790b18p-82f, 0.0f, 0.0f, 0x1.40ba3cp-89f,
     0x1.2fab4ap-74f, 0.0f, 0x1.c1599ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e3de4p-113f, 0x1.cd01a2p-113f, 0x1.5311b6p-55f, 0.0f, 0x1.d9fa38p-30f,
     0x1.55de44p-66f, 0x1.32c206p-101f, 0x1.82b17ap-80f, 0.0f, 0x1.b11746p-118f,
     0x1.266c66p-33f, 0x1.15f12ep-124f, 0x1.86c7a4p-94f, 0x1.f4f8f4p-67f,
     0x1.55f0acp-104f, 0x1.07db8ap-48f, 0.0f, 0x1.4c71d4p-28f, 0x1.8bd91ep-89f, 0.0f,
     0.0f, 0.0f, 0x1.248d14p-44f, 0x1.ad56e2p-94f, 0x1.27955ap-121f, 0.0f,
     0x1.e097fcp-83f, 0.0f, 0x1.3f274ap-32f, 0x1.d1efc2p-22f, 0.0f, 0.0f, 0.0f,
     0x1.aa473ep-107f, 0.0f, 0x1.ed2e7cp-106f, 0x1.08e604p-18f, 0.0f, 0x1.596aeep-23f,
     0.0f, 0x1.6d126ap-76f, 0.0f, 0x1.33ccecp-4f, 0x1.9196a8p-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5883ecp-114f, 0x1.14486ep-103f, 0x1.61788ep-37f, 0x1.b1099p-65f,
     0x1.7539bep-125f, 0.0f, 0x1.566d3ap-8f, 0.0f, 0.0f, 0x1.e814dap-78f,
     0x1.865c8p-37f, 0x1.6e6656p-98f, 0.0f, 0.0f, 0x1.68ca6cp-59f, 0x1.77939ep-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.82a9dp-50f, 0x1.91f7f4p-109f, 0.0f, 0x1.b187ep-19f,
     0.0f, 0.0f, 0.0f, 0x1.56750cp-67f, 0.0f, 0.0f, 0.0f, 0x1.c8f76ep-107f,
     0x1.61e882p-17f, 0x1p0f, 0x1.fc150cp-79f, 0.0f, 0x1.ed14c6p-112f,
     0x1.ee742cp-87f, 0.0f, 0.0f, 0x1.51ff72p-6f, 0.0f, 0x1.b52d4ap-62f,
     0x1.ac2d16p-40f, 0.0f, 0.0f, 0x1.01850ep-69f, 0x1.46c838p-84f, 0x1.3ab906p-85f,
     0x1.64c77ap-60f, 0.0f, 0.0f, 0x1.2c1cbap-28f, 0.0f, 0.0f, 0x1.a4daa4p-92f,
     0x1.b1703ap-48f, 0.0f, 0.0f, 0x1.9f6ffp-90f, 0.0f, 0.0f, 0x1.f7fe62p-3f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.277c72p-53f, 0.0f, 0.0f,
     0x1.ef672p-67f, 0x1.47282ap-3f, 0.0f, 0.0f, 0x1.f34e48p-76f, 0x1.4b1872p-63f,
     0x1.6bbc98p-105f, 0x1.410162p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8c3c74p-53f, 0x1.520768p-17f, 0.0f, 0x1.ef959ep-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d3ee2p-101f, 0.0f, 0x1.9bafdap-97f,
     0x1.00e3c8p-67f, 0x1.09e68cp-71f, 0x1.1dd078p-116f, 0.0f, 0x1.3c0b8ap-99f, 0.0f,
     0x1.4cadcp-40f, 0.0f, 0.0f, 0.0f, 0x1.f2a466p-39f, 0.0f, 0.0f, 0x1.796a5ap-98f,
     0x1.f88e3ep-116f, 0x1.ec628ap-96f, 0x1.cc639ap-121f, 0.0f, 0.0f, 0x1.eb737cp-79f,
     0x1.43057cp-73f, 0.0f, 0x1.9e826cp-69f, 0x1.16a108p-102f, 0x1.513294p-12f,
     0x1p0f, 0.0f, 0x1.1b86ccp-8f, 0x1.b8ce08p-5f, 0x1.25e4e2p-98f, 0.0f, 0.0f,
     0x1.b9e128p-11f, 0x1.d3fap-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.823048p-124f, 0.0f, 0x1.47040ep-64f, 0x1.047e58p-118f, 0.0f, 0x1.e41248p-15f
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
            tmp1 = Sleef_sinpif1_u05purecfma(tmp0);
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
    printf("Sleef_sinpif1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinpif1_u05purecfma bench acc %a\n", global_bench_acc);
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
