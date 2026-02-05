/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosf4_u35kvx.c --function Sleef_sincosf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --precision sleef_sf2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float32x4_t_2 external_bench_wrapper_cst = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
static const Sleef_float32x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0f, 0.0f, 0.0f, 0.0f},.y = {0.0f, 0.0f, 0.0f, 0.0f}};
volatile Sleef_float32x4_t_2 external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.276df6p-75f, 0x1.b78d0ep-35f, 0x1.418abep-8f, 0x1.1b6a34p-97f,
     0x1.9e6924p-79f, 0x1.ac7216p-76f, 0.0f, 0.0f, 0x1.8a9528p-100f, 0x1.dbc62cp-97f,
     0x1.e6a822p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.642feap-81f, 0.0f, 0.0f,
     0x1.de9c22p-91f, 0x1.38e8e2p-82f, 0.0f, 0x1.16f3e4p-13f, 0x1.d85de6p-107f, 0.0f,
     0x1.c4ad0ep-73f, 0.0f, 0x1.3c14c6p-95f, 0x1.f8fe38p-121f, 0x1.b9858cp-55f, 0.0f,
     0x1.e6fb54p-20f, 0x1.9d62acp-60f, 0x1.4d389ap-103f, 0.0f, 0x1.74e0f4p-50f, 0.0f,
     0x1.04b5e2p-2f, 0x1.e93c0ep-64f, 0x1.63d08p-21f, 0x1.b0a922p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a8a8cp-32f, 0x1.897f54p-1f, 0x1.ee0456p-62f, 0.0f,
     0x1.7b813p-47f, 0.0f, 0x1.1b1e14p-45f, 0x1.e56f3cp-1f, 0.0f, 0x1.1a5944p-18f,
     0.0f, 0x1p0f, 0.0f, 0x1.1a543cp-63f, 0x1.c00a02p-73f, 0.0f, 0.0f, 0.0f,
     0x1.9ab7p-113f, 0.0f, 0.0f, 0x1.8da736p-22f, 0x1.f356dp-15f, 0x1.eecc5ap-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bb21ap-45f, 0x1.e0ce74p-56f, 0.0f, 0x1.9239aap-76f,
     0x1.17c618p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f397f6p-124f, 0.0f,
     0x1.9ffbecp-62f, 0x1.4a4e02p-81f, 0.0f, 0x1.ea9558p-99f, 0x1.fd377ep-48f,
     0x1.cf14dap-27f, 0x1.7f45d8p-24f, 0.0f, 0x1.c21ea6p-11f, 0x1.ac47fp-103f,
     0x1.3e020ep-85f, 0.0f, 0.0f, 0x1.1a49eap-12f, 0.0f, 0x1.1fbf7cp-51f,
     0x1.cc5b58p-6f, 0x1.6fd266p-48f, 0.0f, 0x1.7e325p-75f, 0x1.89e60cp-24f, 0.0f,
     0x1.51ba04p-9f, 0x1.ec5d78p-55f, 0x1.d5ef3ep-29f, 0.0f, 0.0f, 0x1.af4786p-60f,
     0.0f, 0x1.1579ccp-53f, 0.0f, 0.0f, 0x1.c186dcp-50f, 0.0f, 0.0f, 0x1.b13d5p-79f,
     0x1.9f2598p-29f, 0.0f, 0x1.bad7ep-52f, 0x1.17f89cp-21f, 0x1.e5ab06p-86f,
     0x1.6deee2p-25f, 0x1.9f8f7ep-57f, 0x1.1b9d44p-67f, 0.0f, 0x1.257466p-46f,
     0x1.6ec2ecp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.99541ep-52f, 0x1.cbc1c6p-124f, 0.0f, 0x1.7a7674p-84f, 0.0f, 0x1.fe2f76p-51f,
     0.0f, 0x1.601b7p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.23fd22p-126f, 0.0f, 0.0f,
     0x1.502274p-82f, 0.0f, 0.0f, 0x1.79dd52p-124f, 0x1.21258p-26f, 0.0f, 0.0f,
     0x1.ea22bep-71f, 0x1.b28998p-38f, 0.0f, 0.0f, 0x1.b680d2p-73f, 0.0f,
     0x1.cb0106p-41f, 0.0f, 0x1.d60bd2p-43f, 0.0f, 0.0f, 0x1.3a851ep-74f,
     0x1.e7e64ep-112f, 0x1.03e898p-10f, 0x1.ff2ffep-82f, 0.0f, 0x1.38f3a8p-16f, 0.0f,
     0.0f, 0.0f, 0x1.98bc02p-26f, 0x1.1c9006p-18f, 0.0f, 0x1.0d9de4p-75f, 0.0f, 0.0f,
     0x1.5bd81p-97f, 0x1.bd501cp-76f, 0x1.6bac36p-69f, 0.0f, 0.0f, 0x1.9ae234p-15f,
     0x1.6dea7p-120f, 0x1.2b757cp-2f, 0.0f, 0x1.822f3p-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a1c0cap-122f, 0x1.8d99f6p-94f, 0x1.ed461p-114f, 0x1.e5a118p-81f, 0.0f,
     0.0f, 0x1.23234ep-95f, 0.0f, 0x1.7cedb6p-16f, 0x1.04c87ap-121f, 0.0f,
     0x1.a0c47ep-1f, 0x1.06a75ep-68f, 0x1.52781ap-118f, 0.0f, 0x1.ec2f1cp-9f,
     0x1.c543b6p-109f, 0x1.ee8ed8p-97f, 0.0f, 0x1.10002ep-41f, 0.0f, 0x1.6d5f16p-105f,
     0.0f, 0x1.4e8ceap-11f, 0x1.2ce58ep-57f, 0x1.5960d2p-107f, 0.0f, 0.0f, 0.0f,
     0x1.ddbd46p-81f, 0.0f, 0x1.3e3bd6p-52f, 0.0f, 0.0f, 0x1.585b78p-100f,
     0x1.7e86dcp-75f, 0x1.f3e848p-100f, 0x1.a42d28p-9f, 0x1.9e57eap-87f,
     0x1.a3e928p-65f, 0.0f, 0x1.0f5dbcp-59f, 0.0f, 0x1.b50f4cp-1f, 0.0f, 0.0f,
     0x1.705b3p-63f, 0.0f, 0.0f, 0.0f, 0x1.8807dap-105f, 0.0f, 0.0f, 0.0f,
     0x1.e1187ep-41f, 0.0f, 0.0f, 0x1.16ec0ap-13f, 0x1.849e3p-43f, 0.0f, 0.0f,
     0x1.669aecp-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c00332p-126f,
     0x1.f4dd4ap-72f, 0.0f, 0.0f, 0.0f, 0x1.9819f6p-102f, 0.0f, 0x1.b8020ap-56f,
     0x1.6860c8p-79f, 0x1.cd8774p-55f, 0.0f, 0.0f, 0x1.a1f7b4p-63f, 0x1.07be42p-108f,
     0.0f, 0x1.ac1298p-75f, 0.0f, 0.0f, 0x1.8228cep-1f, 0.0f, 0.0f, 0x1.36b8e4p-8f,
     0x1.377e2cp-69f, 0x1.11c3d4p-92f, 0.0f, 0x1.57e0b2p-4f, 0.0f, 0.0f,
     0x1.063152p-58f, 0x1.29bfaap-91f, 0.0f, 0x1.2d793ep-2f, 0x1.618546p-108f, 0.0f,
     0x1.38579ap-119f, 0x1.dedcfcp-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.82108p-65f, 0x1.3d944ep-93f, 0x1.b172fcp-19f, 0x1.35ec72p-110f,
     0x1.a677b2p-29f, 0.0f, 0x1.0a3f5cp-111f, 0.0f, 0.0f, 0x1.e08114p-15f, 0.0f,
     0x1.f52872p-19f, 0x1.40b8ap-81f, 0.0f, 0.0f, 0.0f, 0x1.eb3a2cp-50f,
     0x1.2b40dep-63f, 0x1.46b524p-118f, 0.0f, 0.0f, 0x1.dc3b64p-58f, 0x1.91888ep-26f,
     0x1.581944p-123f, 0x1.310b38p-107f, 0x1.ee971cp-94f, 0x1.20cf74p-56f,
     0x1.1af178p-66f, 0.0f, 0.0f, 0x1.e8125ep-42f, 0x1.ddb642p-125f, 0.0f, 0.0f, 0.0f,
     0x1.8d565ap-41f, 0.0f, 0.0f, 0x1.8d693ep-18f, 0x1.be1b5ep-112f, 0.0f,
     0x1.c3e2ccp-98f, 0x1.0e2836p-4f, 0x1.0d805p-118f, 0.0f, 0x1.c52248p-54f,
     0x1.6e0076p-75f, 0.0f, 0x1.4e0c4p-70f, 0x1.c812d8p-54f, 0x1.6dae1p-107f,
     0x1.63bfeap-1f, 0x1.fcf894p-108f, 0.0f, 0x1.859bfcp-59f, 0.0f, 0x1.b7c408p-11f,
     0x1.03fd98p-35f, 0x1.0a2134p-78f, 0x1.c2c884p-96f, 0.0f, 0x1.0fde28p-96f, 0.0f,
     0x1.253556p-70f, 0x1.ef6dd6p-28f, 0x1.5a8952p-108f, 0.0f, 0x1.8de318p-63f,
     0x1.064d28p-113f, 0x1.27344p-82f, 0x1.195b9cp-17f, 0x1.cef028p-105f,
     0x1.29dc68p-21f, 0.0f, 0.0f, 0x1.cff7f2p-100f, 0.0f, 0.0f, 0x1.42d738p-101f,
     0.0f, 0x1.1df2d6p-42f, 0x1.6f273ap-93f, 0x1.40edep-68f, 0.0f, 0x1.3c4a1cp-65f,
     0.0f, 0x1.a10dccp-50f, 0.0f, 0.0f, 0x1.dcef22p-53f, 0.0f, 0x1.c4b634p-86f, 0.0f,
     0x1.06dae6p-48f, 0.0f, 0.0f, 0x1.ee0dbp-69f, 0.0f, 0x1.76008p-13f, 0.0f,
     0x1.0e4efcp-25f, 0x1.b1a1fep-82f, 0.0f, 0.0f, 0x1.31a544p-44f, 0x1.bb76dap-79f,
     0x1.411354p-102f, 0.0f, 0x1.7fdc2ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b913ap-27f,
     0x1.c3087ap-85f, 0x1.cbdf3p-70f, 0.0f, 0x1.a04a9ap-64f, 0.0f, 0x1.e62e3cp-15f,
     0.0f, 0.0f, 0.0f, 0x1.ffaf88p-73f, 0x1.6ab95ep-112f, 0x1.05f71p-41f, 0.0f, 0.0f,
     0x1.5c08c6p-23f, 0.0f, 0.0f, 0.0f, 0x1.17ecf2p-53f, 0x1.481616p-91f,
     0x1.2c72cap-111f, 0.0f, 0x1.16a65ap-96f, 0x1.df427ap-25f, 0.0f, 0x1.d91f34p-74f,
     0.0f, 0x1.394e5ep-102f, 0.0f, 0x1.29e284p-5f, 0x1.c9b846p-17f, 0.0f,
     0x1.a4e2e2p-2f, 0x1.2ebb76p-121f, 0x1.546d32p-57f, 0x1.f0f86cp-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1d2cfep-96f, 0x1.9d2d98p-95f, 0.0f, 0.0f, 0x1.711e4p-82f, 0.0f,
     0x1.7f8a9ep-41f, 0x1.6bbd98p-116f, 0.0f, 0x1.763078p-66f, 0.0f, 0x1.2849ccp-4f,
     0.0f, 0.0f, 0.0f, 0x1.dff0bp-45f, 0.0f, 0.0f, 0x1.8a9af2p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e3361cp-2f, 0.0f, 0.0f, 0x1.0d187ap-100f, 0x1.74d61p-121f,
     0x1.15b65cp-26f, 0x1.b33a92p-36f, 0x1.26259ep-8f, 0x1.9903fep-34f, 0.0f, 0.0f,
     0x1.54dfe2p-114f, 0.0f, 0.0f, 0x1.86701cp-33f, 0.0f, 0.0f, 0x1.5d152ep-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1d002p-116f, 0.0f, 0.0f, 0x1.4b77bap-46f,
     0x1.0ed2fcp-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c51fc8p-20f, 0.0f, 0x1.2eff3ap-99f,
     0.0f, 0x1.d07b6ap-31f, 0x1.d9c1f2p-125f, 0.0f, 0.0f, 0.0f, 0x1.4eaa8cp-87f, 0.0f,
     0x1.750684p-120f, 0x1.179952p-15f, 0.0f, 0x1.7c3e0ap-30f, 0x1.0bbf3cp-122f, 0.0f,
     0.0f, 0x1.ab748cp-21f, 0x1.6f552ap-47f, 0x1.278ca2p-3f, 0.0f, 0x1.76a332p-126f,
     0.0f, 0.0f, 0x1.ef8b8ep-58f, 0x1.522ffp-27f, 0x1.05c9aap-107f, 0x1.d337f8p-123f,
     0.0f, 0.0f, 0.0f, 0x1.a7a01cp-60f, 0x1.acd38ep-91f, 0x1.577756p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0a8614p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.300944p-121f, 0.0f, 0.0f, 0x1.b3419ap-95f, 0x1.930c5ap-63f, 0.0f,
     0x1.ce9ae6p-1f, 0x1.d0d956p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f929ap-125f, 0x1.27e3p-42f, 0.0f, 0.0f, 0x1.083c38p-31f, 0.0f,
     0x1.01f536p-77f, 0x1.23933ap-53f, 0.0f, 0.0f, 0x1.e26464p-67f, 0x1.3a48dep-18f,
     0.0f, 0.0f, 0.0f, 0x1.b2db7ep-64f, 0.0f, 0x1.b2e21ep-99f, 0.0f, 0x1.246fbap-63f,
     0.0f, 0x1.6ba5c2p-48f, 0.0f, 0x1.b6c672p-62f, 0.0f, 0x1.db7ebcp-124f,
     0x1.32b5bp-112f, 0x1.e1e232p-93f, 0x1.fd6f56p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9a6fp-28f, 0.0f, 0x1.51e9dap-50f, 0.0f, 0x1.2d7cb2p-75f, 0.0f,
     0x1.32d692p-63f, 0x1.ca6528p-83f, 0.0f, 0.0f, 0.0f, 0x1.69c868p-98f,
     0x1.b8a92cp-15f, 0x1.3cfee6p-6f, 0x1.834836p-6f, 0.0f, 0x1.08ad3cp-27f, 0.0f,
     0x1.dab04p-60f, 0.0f, 0x1.4eebf4p-74f, 0.0f, 0x1.5620b4p-98f, 0x1.eebf62p-54f,
     0x1.1fa446p-47f, 0x1.4b5eep-32f, 0x1.dfc31cp-57f, 0.0f, 0.0f, 0.0f,
     0x1.854f62p-31f, 0x1.83b0dp-89f, 0.0f, 0.0f, 0x1.001c4ep-104f, 0.0f,
     0x1.f68fbcp-19f, 0.0f, 0x1.44797p-116f, 0.0f, 0x1.981f84p-19f, 0x1.51b0a8p-18f,
     0.0f, 0.0f, 0.0f, 0x1.53993ap-74f, 0x1.89e73cp-109f, 0.0f, 0x1.c7356p-52f,
     0x1.fc1ddep-70f, 0.0f, 0x1.b2dc12p-47f, 0.0f, 0x1.addf3ep-67f, 0x1.f9127ep-29f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3be8ap-104f, 0.0f,
     0x1.69141cp-72f, 0x1.5cb07p-19f, 0x1.882374p-99f, 0x1.d5a714p-95f, 0.0f, 0.0f,
     0.0f, 0x1.9597b2p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4732b6p-65f, 0x1.c5dcd6p-45f,
     0.0f, 0x1.3e41f2p-45f, 0.0f, 0x1.38e56cp-41f, 0x1.90e92p-48f, 0x1.68604ep-69f,
     0.0f, 0x1.a3d37cp-19f, 0.0f, 0.0f, 0x1.e44d6p-1f, 0x1.1f58acp-123f,
     0x1.303e44p-38f, 0.0f, 0.0f, 0x1.cfe962p-87f, 0.0f, 0x1.a4689ap-52f,
     0x1.637884p-30f, 0x1.25848ap-19f, 0.0f, 0.0f, 0x1.e9c57ep-113f, 0.0f, 0.0f, 0.0f,
     0x1.ae8f1cp-47f, 0.0f, 0x1.bce9dap-104f, 0x1p0f, 0x1.edfa48p-82f, 0.0f, 0.0f,
     0.0f, 0x1.9da866p-52f, 0x1.ac2c0ap-83f, 0x1.efbc9ap-99f, 0x1.3abfe2p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9acf6p-70f, 0.0f, 0.0f, 0x1.314c0ep-76f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a38a82p-124f, 0x1.8b192ep-91f, 0.0f, 0.0f, 0x1.1c4b1ap-45f, 0.0f,
     0x1.68c4a4p-91f, 0.0f, 0x1.908e8ap-18f, 0x1.d3f67p-16f, 0x1.ad0c66p-83f, 0.0f,
     0.0f, 0.0f, 0x1.2a4582p-57f, 0x1.de1a48p-63f, 0x1.7a47b4p-3f, 0x1.28cea2p-77f,
     0.0f, 0x1.352384p-67f, 0x1.52dcfp-80f, 0.0f, 0x1.e3f51p-120f, 0x1.06102cp-124f,
     0x1.64cf28p-58f, 0.0f, 0.0f, 0x1.e3a594p-42f, 0.0f, 0x1.ee69fap-52f,
     0x1.8da1ecp-35f, 0x1.fcb3c2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.506b54p-49f,
     0x1.8677b8p-92f, 0x1.23329cp-7f, 0.0f, 0x1.db12f8p-119f, 0.0f, 0x1.b3fbdcp-82f,
     0.0f, 0.0f, 0x1.45cfd6p-104f, 0x1.05c822p-43f, 0x1.fe6126p-120f, 0.0f, 0.0f,
     0x1.9d5974p-125f, 0x1.d2c61p-116f, 0.0f, 0x1.d9613p-74f, 0x1.62b73ep-73f, 0.0f,
     0.0f, 0.0f, 0x1.83f028p-35f, 0.0f, 0.0f, 0x1.cc8c9p-117f, 0.0f, 0x1.4a27bcp-31f,
     0.0f, 0.0f, 0x1.04a11ap-12f, 0x1.49cd9cp-53f, 0.0f, 0x1.f2c96cp-81f, 0.0f,
     0x1.1b3ce4p-111f, 0x1.311bp-33f, 0x1.c6d53p-1f, 0x1.1c53ep-81f, 0x1.3f47c2p-11f,
     0x1.f39a62p-55f, 0.0f, 0x1.e225bep-107f, 0x1.284c78p-53f, 0.0f, 0x1.b201c6p-94f,
     0x1.ae9dacp-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd1a98p-15f, 0x1.ad1392p-83f,
     0x1.ed5e32p-70f, 0x1.aa1e44p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e42278p-110f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4e34cp-8f, 0x1.d648b8p-56f, 0x1.4f437ep-16f, 0.0f,
     0x1.1b05fap-1f, 0x1.a7b78cp-25f, 0.0f, 0.0f, 0x1.c286cap-35f, 0x1.d254cep-20f,
     0.0f, 0x1.c2e286p-42f, 0.0f, 0x1.1a6fd2p-45f, 0x1.7d56c2p-62f, 0x1.b0a234p-37f,
     0x1.0cba96p-35f, 0x1.f4192ep-35f, 0x1.09f586p-15f, 0.0f, 0x1.1fd254p-116f,
     0x1.71d3f8p-5f, 0.0f, 0.0f, 0.0f, 0x1.aab086p-124f, 0.0f, 0x1.374b32p-88f,
     0x1.bd9a26p-122f, 0x1.dcf74ep-4f, 0x1.89d2aep-49f, 0x1.af087ap-17f, 0.0f,
     0x1.4d0cb8p-46f, 0x1.dc732cp-52f, 0.0f, 0x1.a3a972p-73f, 0.0f, 0x1.c52bdep-20f,
     0x1.85d5b8p-55f, 0x1.f9c8cp-78f, 0x1.78b70ap-64f, 0.0f, 0x1.bf8f12p-102f,
     0x1.7bbde4p-58f, 0x1.4a5a9p-93f, 0.0f, 0.0f, 0.0f, 0x1.b67fbep-40f, 0.0f, 0.0f,
     0x1.b4d8c2p-17f, 0x1.135e5p-34f, 0x1.21e17ap-91f, 0x1.14b018p-93f,
     0x1.29b77ep-66f, 0x1.c21d12p-50f, 0x1.e4d438p-46f, 0.0f, 0.0f, 0x1.1c30aep-67f,
     0.0f, 0x1.8b3404p-67f, 0.0f, 0x1.27a302p-27f, 0x1.b23204p-20f, 0.0f,
     0x1.52eb2ep-1f, 0x1.5f1b78p-123f, 0.0f, 0.0f, 0x1.6d7bd6p-111f, 0.0f,
     0x1.e14118p-37f, 0x1.c705e4p-125f, 0.0f, 0.0f, 0x1.d8bebcp-86f, 0.0f, 0.0f,
     0x1.629e8ep-62f, 0.0f, 0x1.246028p-94f, 0x1.6d90e8p-60f, 0.0f, 0x1.adeebep-6f,
     0.0f, 0.0f, 0x1.7b84b8p-36f, 0.0f, 0.0f, 0x1.b59612p-49f, 0x1.aa9efap-48f, 0.0f,
     0x1.f7bd32p-52f, 0.0f, 0.0f, 0x1.26dfe8p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fca27cp-81f, 0x1.3d8858p-112f, 0.0f, 0x1.ef9a98p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbc60cp-16f, 0x1.e99292p-80f, 0.0f,
     0x1.fdccecp-74f, 0.0f, 0.0f, 0x1.979ceap-68f, 0x1.60f9eap-125f, 0x1.fca2a8p-61f,
     0.0f, 0x1.6f7a4p-84f, 0x1.9c863cp-74f, 0.0f, 0.0f, 0x1.b896f6p-102f,
     0x1.3aa50ep-8f, 0x1.b7ddp-12f, 0.0f, 0.0f, 0x1.fe7af6p-46f, 0.0f,
     0x1.ec8a12p-57f, 0x1.772a9ep-85f, 0x1.003748p-96f, 0x1.ffcea2p-4f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.139642p-108f, 0x1.d693bp-5f, 0x1.7ddb46p-49f,
     0x1.7e0a84p-82f, 0.0f, 0x1.2041eap-84f, 0x1.ce432cp-2f, 0.0f, 0x1.81ebaep-101f,
     0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float32x4_t_2 global_bench_acc;
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
        Sleef_float32x4_t_2 local_acc;
        int32_t i;
        ml_float4_t tmp0;
        ml_float4_t tmp1;
        ml_float4_t tmp2;
        ml_float4_t tmp3;
        ml_float4_t tmp4;
        ml_float4_t tmp5;
        Sleef_float32x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            Sleef_float32x4_t_2 tmp1;
            ml_float4_t tmp2;
            ml_float4_t tmp3;
            ml_float4_t tmp4;
            ml_float4_t tmp5;
            ml_float4_t tmp6;
            ml_float4_t tmp7;
            Sleef_float32x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosf4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float32x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float32x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_sincosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sincosf4_u35kvx bench acc {.x=[%a, %a, %a, %a], .y=[%a, %a, %a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.x[2], global_bench_acc.x[3], global_bench_acc.y[0], global_bench_acc.y[1], global_bench_acc.y[2], global_bench_acc.y[3]);
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
