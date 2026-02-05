/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf4_u35kvx.c --function \
 *     Sleef_finz_coshf4_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target kv3
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
     0.0f, 0x1.02f1a2p-41f, 0.0f, 0x1.bc033p-57f, 0x1.d9f2b4p-124f, 0x1.437d14p-80f,
     0x1.11bc1ep-30f, 0.0f, 0.0f, 0.0f, 0x1.0aa67ap-51f, 0x1.69fd8cp-50f,
     0x1.a6098ap-115f, 0.0f, 0.0f, 0x1.565604p-95f, 0x1.831124p-101f, 0.0f,
     0x1.b3b27ep-33f, 0.0f, 0x1.adfe2cp-6f, 0.0f, 0.0f, 0x1.603ae6p-2f, 0.0f,
     0x1.96e264p-20f, 0x1.14a7b2p-100f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.5b107ep-107f,
     0.0f, 0x1.afb5f4p-74f, 0x1.1a4d28p-23f, 0.0f, 0.0f, 0x1.63b06p-13f, 0.0f, 0.0f,
     0.0f, 0x1.68cf9p-123f, 0.0f, 0x1.1468b8p-23f, 0.0f, 0x1.c11122p-114f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.57ce08p-121f, 0x1.d0342p-123f, 0.0f,
     0x1.f884e2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac78a4p-106f, 0.0f, 0.0f,
     0x1.8174b4p-78f, 0.0f, 0.0f, 0x1.3d8548p-16f, 0.0f, 0x1.82274ap-89f,
     0x1.dad834p-81f, 0.0f, 0.0f, 0x1.390bacp-6f, 0x1.d46dbcp-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5539f8p-113f, 0x1.c59b12p-38f, 0x1.f0e5bp-74f, 0x1.c352f6p-49f,
     0x1.438c22p-61f, 0x1.c96a8p-97f, 0x1.026438p-15f, 0.0f, 0x1.932824p-13f,
     0x1.76b42cp-62f, 0x1.d00d4ep-1f, 0.0f, 0x1.c7a9a8p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6439f8p-21f, 0x1.5e6142p-70f, 0x1.573b44p-23f, 0.0f, 0x1.362542p-79f,
     0x1.45dd68p-77f, 0.0f, 0x1.8c1ecep-76f, 0x1.ce50f4p-74f, 0x1.23dd06p-11f,
     0x1.20b74ap-67f, 0x1.1423b2p-26f, 0x1.ffaabp-17f, 0.0f, 0x1.8d15ap-12f,
     0x1.1ee848p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63ea76p-123f, 0x1.a0951ep-36f,
     0.0f, 0.0f, 0x1.86f96cp-10f, 0.0f, 0.0f, 0x1.41aac6p-123f, 0.0f, 0.0f, 0.0f,
     0x1.fb72ep-104f, 0.0f, 0x1.df5c8cp-64f, 0.0f, 0x1.63ac78p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27bd3p-1f, 0.0f, 0.0f, 0x1.d9064cp-40f, 0.0f, 0x1.78b534p-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8971e4p-13f, 0.0f, 0.0f, 0x1.977e78p-64f, 0.0f,
     0x1.7534f2p-50f, 0.0f, 0x1.5f2e0cp-55f, 0x1.4b8a4ep-71f, 0.0f, 0x1.661ee2p-65f,
     0.0f, 0.0f, 0x1.bfe176p-41f, 0x1.e389ccp-67f, 0.0f, 0.0f, 0x1.e229c6p-84f,
     0x1.89ac48p-126f, 0.0f, 0x1.a5a458p-49f, 0x1.9cb26cp-124f, 0x1.6ab926p-118f,
     0x1.a0e7eap-27f, 0x1.a898dcp-19f, 0x1.59896ap-126f, 0.0f, 0x1.0b4718p-124f, 0.0f,
     0x1.8f1f3p-66f, 0.0f, 0x1.dc6be2p-46f, 0x1.0aa6d8p-8f, 0x1.e9bf58p-47f,
     0x1.60adb4p-29f, 0x1.142c68p-27f, 0.0f, 0x1.de07f2p-44f, 0x1.3d9176p-72f,
     0x1.ef526ap-48f, 0.0f, 0.0f, 0x1.61ff88p-58f, 0.0f, 0.0f, 0x1.e95e86p-83f, 0.0f,
     0.0f, 0x1.db713cp-111f, 0.0f, 0x1.49ac28p-26f, 0.0f, 0.0f, 0x1.b6b3d4p-87f, 0.0f,
     0.0f, 0.0f, 0x1.1323f4p-7f, 0x1.7b1c3cp-85f, 0x1.e894fcp-86f, 0.0f,
     0x1.28b658p-14f, 0.0f, 0x1.bcca42p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6c09eep-5f, 0x1.cafec2p-28f, 0.0f, 0x1.e94f68p-16f, 0.0f, 0.0f,
     0x1.8be386p-94f, 0.0f, 0.0f, 0x1.fe3a98p-113f, 0x1.82e2b2p-93f, 0x1.2ae52ep-117f,
     0.0f, 0.0f, 0x1.1f105ep-57f, 0x1.45cc2ap-29f, 0x1.475886p-116f, 0x1.17f34ep-100f,
     0.0f, 0x1.f8ed9p-56f, 0x1.976d86p-55f, 0.0f, 0x1.8a8f62p-18f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a8c486p-65f, 0.0f, 0x1.30f6e2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3bf1d2p-8f, 0x1.2fb194p-18f, 0x1.01492cp-114f, 0.0f, 0.0f, 0.0f,
     0x1.2d639p-80f, 0x1.beafdap-53f, 0.0f, 0x1.54e61ap-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9ee2e6p-71f, 0x1.12eceap-3f, 0.0f, 0.0f, 0x1.011dc6p-66f,
     0x1.6c26cp-104f, 0x1.5e6cbap-73f, 0x1.eb6ec4p-82f, 0x1.d81376p-101f, 0.0f,
     0x1.5574eap-54f, 0.0f, 0x1.fbb0b2p-118f, 0x1.17f8eep-63f, 0x1.a7063ep-106f, 0.0f,
     0x1.96ca5p-44f, 0x1.a13268p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.88c624p-27f, 0x1.49e5cap-34f, 0.0f, 0x1.1a814p-83f, 0.0f, 0x1.4ff044p-62f,
     0.0f, 0x1.71e718p-26f, 0.0f, 0.0f, 0x1.c07d1p-118f, 0x1.4dcecap-27f,
     0x1.2774b4p-124f, 0.0f, 0x1.51a106p-20f, 0x1.63df8ep-57f, 0.0f, 0x1.5d03b2p-35f,
     0.0f, 0.0f, 0x1.038c84p-126f, 0.0f, 0x1.d975bap-47f, 0x1.482bep-10f,
     0x1.2f8504p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131d5p-125f, 0.0f, 0.0f, 0.0f,
     0x1.f9b708p-31f, 0.0f, 0x1.8e5bd2p-47f, 0x1.1252f4p-50f, 0.0f, 0x1.6023b4p-9f,
     0x1.c6e8bp-60f, 0.0f, 0x1p0f, 0x1.375c4p-8f, 0.0f, 0x1.23ae0ep-1f,
     0x1.e833a6p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3723b2p-76f, 0.0f, 0.0f,
     0x1.392b7cp-23f, 0x1.fa21b6p-112f, 0x1.f5b552p-60f, 0.0f, 0.0f, 0x1.3f284ap-72f,
     0x1.e48b2ep-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f37cc8p-27f, 0.0f, 0.0f, 0.0f,
     0x1.8ae224p-23f, 0.0f, 0.0f, 0.0f, 0x1.2f6f78p-8f, 0.0f, 0.0f, 0x1.839ea4p-22f,
     0x1.d2c4d8p-17f, 0.0f, 0x1.f024f6p-8f, 0x1.dc44p-100f, 0.0f, 0x1.b9f932p-41f,
     0x1.882294p-57f, 0.0f, 0x1.985c2ap-111f, 0x1.3856fcp-72f, 0.0f, 0x1.de20c4p-19f,
     0.0f, 0.0f, 0x1.a71a34p-6f, 0x1.bf99c8p-96f, 0.0f, 0.0f, 0x1.86091ap-41f,
     0x1.37b494p-39f, 0x1.eaa7b2p-63f, 0x1p0f, 0x1.28959ep-94f, 0.0f, 0.0f, 0.0f,
     0x1.74560ap-55f, 0x1.f6de2ep-95f, 0x1.1ebeeep-11f, 0x1.a0101p-19f, 0.0f,
     0x1.f760c6p-86f, 0.0f, 0.0f, 0x1.dd0d0ep-94f, 0x1.3be848p-52f, 0x1.895aaep-85f,
     0x1.267e4p-52f, 0x1.d48eaap-55f, 0x1.26090ep-57f, 0.0f, 0x1.62053ep-111f,
     0x1.eb7abap-119f, 0.0f, 0x1.4ed558p-106f, 0.0f, 0x1.e66eb8p-25f, 0x1.8351fep-79f,
     0.0f, 0.0f, 0x1.a11776p-52f, 0.0f, 0x1.e9c1dcp-118f, 0x1.2b222ap-4f, 0.0f, 0.0f,
     0x1.d4d03ep-94f, 0x1.ce7c7p-101f, 0x1.08c228p-104f, 0.0f, 0x1.24da18p-83f,
     0x1.64d902p-25f, 0x1.6fe8b8p-78f, 0x1.36369p-26f, 0x1.fa8446p-78f, 0.0f,
     0x1.c4345p-18f, 0x1.75f4d4p-63f, 0x1.78385ap-55f, 0x1.dc40b2p-83f, 0.0f,
     0x1.e84dap-11f, 0.0f, 0.0f, 0x1.1ef956p-66f, 0x1.2f7c1ep-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60fdc6p-23f, 0x1.c0e828p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.166882p-88f, 0x1.db329ap-56f, 0x1.ee57acp-121f, 0.0f, 0.0f, 0x1.634a08p-26f,
     0x1.75fc86p-87f, 0x1.365e22p-61f, 0.0f, 0x1.0118dap-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cf1f12p-46f, 0x1.133c8ap-37f, 0x1.0fba1ap-28f, 0.0f, 0.0f, 0.0f,
     0x1.22672ep-23f, 0.0f, 0x1.181bfp-44f, 0.0f, 0x1.d3a248p-15f, 0.0f, 0.0f, 0.0f,
     0x1.79e7bep-44f, 0x1.564c36p-32f, 0.0f, 0.0f, 0.0f, 0x1.b47844p-94f, 0.0f,
     0x1.2303aep-55f, 0x1.fbfb02p-73f, 0x1.58f2e6p-10f, 0.0f, 0.0f, 0x1.98759p-119f,
     0.0f, 0x1.7de66ep-100f, 0.0f, 0x1.1b580ap-100f, 0x1.eb6aeap-85f, 0x1.32cc3ep-27f,
     0.0f, 0x1.814052p-40f, 0.0f, 0x1.1e90cp-42f, 0.0f, 0x1.c8698ap-92f,
     0x1.f2ce9p-12f, 0x1.e6471ep-13f, 0x1.04771cp-56f, 0x1.b2884ep-18f,
     0x1.204d28p-38f, 0.0f, 0x1.6aa0bap-66f, 0x1.4d53fap-122f, 0x1.c68748p-120f,
     0x1.3b1156p-50f, 0x1.b1c3d6p-117f, 0x1.162f62p-19f, 0.0f, 0.0f, 0x1.c24786p-98f,
     0x1.5df964p-98f, 0x1.b98f0cp-12f, 0.0f, 0.0f, 0x1.6502d8p-65f, 0.0f,
     0x1.d65936p-120f, 0x1.eca9aep-100f, 0x1.c7e7ccp-113f, 0x1.5fd73p-17f,
     0x1.b09474p-25f, 0.0f, 0.0f, 0x1.522f56p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.81e958p-89f, 0.0f, 0x1.2ad41p-31f, 0.0f, 0x1.20bb5p-80f, 0x1.4f0a6ep-89f,
     0x1.bb893ep-22f, 0x1.11f036p-52f, 0.0f, 0x1.1ebecap-122f, 0x1.80c706p-35f,
     0x1.dc11a2p-101f, 0x1.52d596p-121f, 0.0f, 0.0f, 0x1.85cd48p-74f, 0.0f, 0.0f,
     0.0f, 0x1.70937cp-64f, 0x1.6fe0ap-53f, 0.0f, 0.0f, 0.0f, 0x1.06ab88p-3f,
     0x1.2c3e7ep-73f, 0x1.74fa82p-121f, 0x1.5d3644p-121f, 0.0f, 0x1.8ce8c6p-67f, 0.0f,
     0.0f, 0x1.e27b98p-51f, 0.0f, 0.0f, 0.0f, 0x1.e18da6p-30f, 0.0f, 0x1.718be4p-49f,
     0x1.94e396p-55f, 0.0f, 0x1.36685ap-105f, 0.0f, 0x1.c1b796p-86f, 0x1.2c84e2p-55f,
     0x1.071496p-34f, 0.0f, 0.0f, 0.0f, 0x1.799454p-124f, 0x1.95c858p-98f, 0.0f,
     0x1.725fd2p-68f, 0.0f, 0x1.c866ccp-102f, 0.0f, 0x1.e16b32p-98f, 0.0f, 0.0f, 0.0f,
     0x1.b5a87ap-105f, 0.0f, 0x1.db1a82p-34f, 0x1.e898b8p-98f, 0.0f, 0.0f, 0.0f,
     0x1.0fd774p-52f, 0x1.848cd4p-124f, 0x1.0ccc6ep-84f, 0x1.41f8a2p-97f,
     0x1.207672p-85f, 0.0f, 0.0f, 0x1.3dcc2ap-61f, 0.0f, 0.0f, 0x1.e7675cp-126f,
     0x1.d14d1ap-40f, 0.0f, 0x1.b80d4ep-46f, 0.0f, 0x1.b7f13p-40f, 0x1.932362p-118f,
     0.0f, 0.0f, 0x1.f4f67cp-15f, 0.0f, 0x1.e62ffp-123f, 0.0f, 0.0f, 0.0f,
     0x1.2effb2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33aap-33f, 0.0f,
     0x1.7de67cp-38f, 0.0f, 0.0f, 0x1.2d145ap-85f, 0x1.7d7192p-114f, 0.0f, 0.0f,
     0x1.f53256p-88f, 0.0f, 0x1.7efa3cp-95f, 0.0f, 0.0f, 0x1.c510bap-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ca4544p-26f, 0x1.35f4b8p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ca10ap-55f, 0x1.ac32b2p-64f, 0.0f, 0x1.e0f3e6p-51f, 0.0f, 0.0f,
     0x1.79ca5ap-51f, 0.0f, 0x1.d41efap-5f, 0x1.098384p-87f, 0x1.56c9f4p-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a598c2p-2f, 0.0f, 0x1.a2f8dep-52f, 0x1.c70b62p-95f, 0.0f,
     0x1.a905p-95f, 0x1.136b48p-123f, 0x1.3e5aaep-75f, 0x1.f7d2bp-23f,
     0x1.1767d2p-44f, 0x1.7ebeeap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd0266p-90f, 0.0f,
     0.0f, 0.0f, 0x1.1a9c66p-115f, 0x1.1e534p-5f, 0.0f, 0.0f, 0x1.d5913cp-10f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.925564p-33f, 0x1.4458d8p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3ab3aep-83f, 0.0f, 0.0f, 0.0f, 0x1.fc630ap-50f, 0x1.fc4842p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6290fap-33f, 0.0f, 0x1.152dc8p-115f, 0x1.1a072cp-58f,
     0.0f, 0x1.569858p-21f, 0x1.e396a8p-89f, 0x1.952504p-67f, 0.0f, 0.0f,
     0x1.de8d0cp-102f, 0.0f, 0.0f, 0x1.84160ap-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7c268p-51f, 0x1.11b97p-78f, 0.0f, 0.0f, 0x1.3351b8p-60f, 0.0f,
     0x1.f26afp-1f, 0x1.117782p-101f, 0.0f, 0x1.529e58p-96f, 0.0f, 0.0f,
     0x1.c2bddep-120f, 0x1.4d2b16p-7f, 0x1.3cc4ep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8436a2p-48f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.5e5c8cp-20f, 0x1.4e67bep-104f,
     0x1.267ccp-41f, 0x1.42c808p-112f, 0.0f, 0.0f, 0x1.7ccf06p-13f, 0.0f, 0.0f,
     0x1.fa245ap-59f, 0.0f, 0x1.1be00ap-50f, 0x1.318feap-58f, 0x1.16544ep-75f, 0.0f,
     0x1.9049dap-68f, 0.0f, 0x1.c9d9a2p-91f, 0.0f, 0.0f, 0.0f, 0x1.1a0b3ap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f922d4p-52f, 0x1.0eefb8p-5f, 0x1.fd8852p-57f,
     0x1.47e5b8p-125f, 0.0f, 0x1.e1dc4p-76f, 0x1.3fb138p-7f, 0.0f, 0.0f,
     0x1.46f38cp-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46bf74p-23f, 0x1.b120e2p-111f,
     0x1.a6f808p-83f, 0.0f, 0x1.1417dcp-59f, 0x1.1569cep-38f, 0.0f, 0x1.8ed57ep-28f,
     0.0f, 0.0f, 0x1.86d5ecp-66f, 0x1.b5b12ap-115f, 0x1.f79e48p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e09a4p-99f, 0x1.6c21a8p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.55e73ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6369eep-46f, 0x1.959456p-52f,
     0.0f, 0.0f, 0.0f, 0x1.eaa384p-2f, 0.0f, 0x1.4ce76ap-12f, 0.0f, 0.0f, 0.0f,
     0x1.28f6f8p-45f, 0.0f, 0x1.eadb0ap-106f, 0.0f, 0.0f, 0x1.01009p-89f,
     0x1.c323acp-74f, 0.0f, 0.0f, 0.0f, 0x1.77a118p-42f, 0x1.c1b6a2p-124f,
     0x1.c1e226p-121f, 0.0f, 0.0f, 0x1.30201p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.331266p-49f, 0.0f, 0.0f, 0.0f, 0x1.5f3314p-29f, 0.0f, 0x1.712728p-115f, 0.0f,
     0.0f, 0.0f, 0x1.4ac1aap-99f, 0.0f, 0.0f, 0.0f, 0x1.8b1e6ap-72f, 0.0f,
     0x1.6340cp-88f, 0x1.3a90acp-95f, 0.0f, 0x1.5782bcp-33f, 0x1.c52b96p-101f, 0.0f,
     0x1.296abap-15f, 0.0f, 0x1.94c3ccp-82f, 0x1.c9776p-104f, 0.0f, 0.0f,
     0x1.592764p-29f, 0x1.8e129cp-103f, 0x1.37130cp-50f, 0x1.75d7dep-27f, 0.0f,
     0x1.7fcf52p-91f, 0.0f, 0x1.4824bcp-19f, 0x1.47e9fp-36f, 0.0f, 0x1.863bcp-56f,
     0x1.f880a8p-30f, 0.0f, 0.0f, 0.0f, 0x1.d2522cp-81f, 0.0f, 0x1.a5829ap-96f,
     0x1.4abe5ap-120f, 0.0f, 0x1.eda368p-11f, 0x1.0a3338p-101f, 0.0f, 0.0f,
     0x1.0bfba2p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f78c6ap-112f, 0.0f, 0.0f,
     0x1.6b04a6p-27f, 0x1.0802dep-29f, 0.0f, 0.0f, 0x1.1deaap-54f, 0.0f, 0.0f, 0.0f,
     0x1.9cfb9ap-45f, 0x1.6817bp-2f, 0x1.3773fcp-87f, 0x1.c21b94p-71f, 0.0f, 0.0f,
     0.0f, 0x1.7f3d68p-20f, 0x1.c6f19ep-27f, 0.0f, 0x1.31fb16p-120f, 0.0f,
     0x1.bbd65ep-42f, 0x1.01ee5ep-113f, 0x1.c02d38p-114f, 0x1.7e3ed2p-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef600ap-102f, 0.0f, 0x1.978afcp-62f, 0x1.c23b5cp-46f, 0.0f,
     0x1.3a5eep-31f, 0x1.11bddp-88f, 0x1.587f3ep-33f, 0x1.4f6fd8p-83f, 0x1.0089fep-5f,
     0x1.6747d2p-89f, 0.0f, 0.0f, 0x1.c95172p-95f, 0.0f, 0x1.b5bf3p-24f,
     0x1.d3deap-77f, 0x1.ef6754p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.822908p-5f, 0x1.1d21b8p-35f, 0x1.5cedbep-53f, 0x1.6a9b6cp-44f, 0.0f,
     0x1.0228f4p-120f, 0x1.a61ae2p-51f, 0x1.5f482ep-13f, 0x1.dd3e16p-11f,
     0x1.b3a362p-44f, 0.0f, 0x1.b3ae1ap-25f, 0x1.574ca4p-124f, 0.0f, 0.0f, 0.0f,
     0x1.736102p-61f
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
            tmp1 = Sleef_finz_coshf4_u35kvx(tmp0);
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
    printf("Sleef_finz_coshf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
