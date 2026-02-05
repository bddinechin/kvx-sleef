/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmodf4_avx2128.c --function Sleef_fmodf4_avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.709a16p-87f, 0.0f, 0.0f, 0x1.085c28p-20f, 0.0f, 0x1.5230bcp-71f,
     0x1.d28a46p-88f, 0x1.049bf6p-86f, 0x1.34d83ap-93f, 0.0f, 0x1.676662p-86f, 0.0f,
     0x1.76dad4p-74f, 0x1p0f, 0x1.57517ap-85f, 0.0f, 0x1.2733dap-7f, 0.0f,
     0x1.c3dca4p-26f, 0.0f, 0x1.c7b4f8p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b759p-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c89ap-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cf973ep-102f, 0.0f, 0x1.076002p-60f, 0x1.917152p-34f, 0.0f,
     0x1.b01ac4p-118f, 0x1.78c0ccp-84f, 0x1.4c5a8ap-107f, 0.0f, 0x1.9f0b38p-89f, 0.0f,
     0x1.410e6ap-23f, 0x1.90b45ap-41f, 0x1.45667ep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.a7a424p-1f, 0.0f, 0x1.e94c5ap-107f, 0.0f, 0.0f, 0x1.4bd594p-13f,
     0.0f, 0x1.418aa2p-79f, 0x1.3b780ap-48f, 0x1.210a84p-113f, 0.0f, 0x1.3d4caap-60f,
     0.0f, 0.0f, 0.0f, 0x1.7adc04p-50f, 0x1.20a5d8p-32f, 0x1.aa47e8p-35f,
     0x1.72412cp-29f, 0x1.693702p-37f, 0x1.f1532ap-29f, 0.0f, 0x1.16bf56p-118f,
     0x1.33ef12p-111f, 0x1.d5b004p-75f, 0.0f, 0x1.c87f08p-109f, 0x1p0f, 0.0f,
     0x1.a7badcp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd7684p-3f, 0.0f, 0.0f,
     0x1.c1abp-63f, 0x1.bd1fbcp-84f, 0x1.2d21dp-123f, 0x1.8faf7ap-66f, 0x1.ca0a4p-75f,
     0.0f, 0x1.dcf3aep-74f, 0x1.0db202p-87f, 0.0f, 0x1.0e3006p-77f, 0x1.62c1f2p-53f,
     0.0f, 0.0f, 0.0f, 0x1.de4962p-125f, 0.0f, 0.0f, 0x1.141e3p-101f, 0x1.594788p-31f,
     0x1.aa7618p-69f, 0x1.2ffb0cp-3f, 0x1.8b9b6p-102f, 0x1.a687dp-64f, 0.0f,
     0x1.d2afbep-42f, 0.0f, 0x1.3c3ae4p-5f, 0.0f, 0x1.dc898ap-97f, 0.0f,
     0x1.d6b9bep-9f, 0.0f, 0x1.b3ed0cp-65f, 0x1.44e58ep-98f, 0.0f, 0.0f,
     0x1.2be29cp-99f, 0.0f, 0.0f, 0x1.d54df2p-16f, 0.0f, 0.0f, 0x1.9197cp-113f,
     0x1.661908p-111f, 0x1.e7e2b8p-106f, 0.0f, 0x1.cef316p-4f, 0x1.415268p-64f,
     0x1.01979ep-89f, 0.0f, 0.0f, 0.0f, 0x1.e97964p-33f, 0x1.bfd18cp-100f, 0.0f,
     0x1.b6867p-97f, 0x1.2fcb9cp-66f, 0x1.36153cp-70f, 0x1.a8083p-120f,
     0x1.2c3f0cp-28f, 0.0f, 0.0f, 0x1.a4245ap-84f, 0.0f, 0x1.5d420cp-46f,
     0x1.19824ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.190ccap-6f, 0.0f, 0x1.c9a96ep-104f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.20441cp-126f, 0.0f, 0.0f, 0x1.e7229ap-101f,
     0x1.63a558p-26f, 0x1.a7a8f4p-17f, 0x1.39282cp-4f, 0.0f, 0x1.4762f6p-71f,
     0x1.1420b4p-88f, 0.0f, 0.0f, 0x1.0f559cp-4f, 0.0f, 0.0f, 0.0f, 0x1.297ea8p-125f,
     0.0f, 0.0f, 0.0f, 0x1.b6d984p-22f, 0x1.1f91aap-95f, 0x1.bcf908p-100f, 0.0f, 0.0f,
     0x1.c3828cp-28f, 0.0f, 0.0f, 0x1.95355p-27f, 0.0f, 0.0f, 0x1.028898p-107f, 0.0f,
     0.0f, 0.0f, 0x1.24492p-50f, 0x1.10cfe6p-123f, 0.0f, 0.0f, 0x1p0f,
     0x1.e62e6ap-124f, 0.0f, 0x1.dcc788p-62f, 0x1.aca928p-83f, 0.0f, 0x1.ff4db8p-3f,
     0x1.a5189p-120f, 0.0f, 0x1.bd888cp-8f, 0.0f, 0.0f, 0.0f, 0x1.fdf2dp-104f,
     0x1.de8dap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.018edcp-66f, 0x1.718d54p-105f, 0.0f,
     0x1.4b1028p-121f, 0x1.4b5eecp-80f, 0x1.b7b98p-93f, 0.0f, 0x1.e7c12cp-89f, 0.0f,
     0.0f, 0x1.c8bcecp-123f, 0.0f, 0x1.8f993ap-41f, 0.0f, 0x1.4de982p-3f, 0.0f,
     0x1.22900cp-21f, 0x1.b766f8p-48f, 0.0f, 0.0f, 0x1.be03cap-87f, 0x1.4ddcfap-45f,
     0.0f, 0x1.3456ep-23f, 0x1.cdd854p-112f, 0x1.2ce438p-93f, 0x1.60ba06p-75f, 0.0f,
     0.0f, 0x1.cbb132p-69f, 0.0f, 0.0f, 0x1.bf35cap-6f, 0x1.42251cp-15f,
     0x1.687e88p-88f, 0x1.fd76bcp-125f, 0x1.fb9d1p-83f, 0x1.4df274p-36f,
     0x1.0f7266p-67f, 0.0f, 0.0f, 0x1.01ffdcp-101f, 0.0f, 0.0f, 0x1.1fe6aep-30f,
     0x1.7ab418p-109f, 0x1.0f4782p-96f, 0x1.294378p-40f, 0.0f, 0x1.ef0206p-38f, 0.0f,
     0x1.f07608p-9f, 0x1.c6b9bap-105f, 0.0f, 0x1.6ee684p-47f, 0.0f, 0x1.8a4faep-56f,
     0.0f, 0.0f, 0.0f, 0x1.f02822p-7f, 0.0f, 0x1.666038p-100f, 0.0f, 0x1.e32cap-104f,
     0x1.60410ep-54f, 0x1.0830e8p-122f, 0.0f, 0.0f, 0.0f, 0x1.6aa8dp-63f, 0.0f,
     0x1.77cce6p-96f, 0x1.63320ep-68f, 0.0f, 0x1.d376e2p-13f, 0.0f, 0.0f, 0.0f,
     0x1.3d9142p-31f, 0x1.9da34ep-107f, 0.0f, 0x1.a4e446p-40f, 0.0f, 0x1.a6073ep-19f,
     0.0f, 0.0f, 0x1.e92f04p-116f, 0x1.06f1b4p-87f, 0x1.4e0cbcp-80f, 0.0f,
     0x1.b20fe2p-29f, 0.0f, 0x1.3cf3d4p-98f, 0.0f, 0x1.e956bp-60f, 0x1.ccfb7cp-114f,
     0.0f, 0.0f, 0x1.3e5fc6p-18f, 0x1.697d72p-125f, 0.0f, 0.0f, 0.0f, 0x1.1bfe24p-71f,
     0.0f, 0x1.b3c482p-81f, 0.0f, 0x1.7f389ep-34f, 0.0f, 0.0f, 0x1.bb7f54p-67f,
     0x1.0e882cp-16f, 0x1.ce7b84p-19f, 0.0f, 0x1.4d587ep-95f, 0x1.cc2db2p-61f, 0.0f,
     0.0f, 0x1.2b741ep-79f, 0x1.342238p-30f, 0x1.c73ba4p-5f, 0.0f, 0.0f,
     0x1.4157ccp-6f, 0.0f, 0x1.7dfc82p-89f, 0x1.f0d08ep-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e3de5ep-62f, 0.0f, 0x1.77d2b8p-79f, 0.0f, 0x1.196e28p-111f, 0.0f,
     0x1.9e1fdcp-45f, 0x1.2d6c2ep-80f, 0.0f, 0x1.599494p-26f, 0.0f, 0x1.c9aa04p-125f,
     0x1.9764e6p-117f, 0x1.79110cp-100f, 0x1.d05f74p-94f, 0x1.a5ce4ap-84f,
     0x1.568376p-27f, 0x1p0f, 0x1.596954p-32f, 0x1.a7d10cp-33f, 0x1.d423fp-26f,
     0x1.44f1p-116f, 0.0f, 0x1.c841a6p-76f, 0x1.61c8f6p-32f, 0.0f, 0.0f,
     0x1.e6639p-14f, 0x1.ae2b02p-112f, 0x1.81e9p-34f, 0x1.3e0f18p-2f, 0x1.e33c3p-109f,
     0x1.e138b2p-10f, 0x1.e80e64p-34f, 0x1.c530ecp-31f, 0x1.9cd1bp-44f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3a9adap-101f, 0x1.7dab6p-6f, 0x1.991e9ap-59f, 0x1.66ap-89f,
     0x1.cb4fd2p-88f, 0x1.2dc29p-77f, 0.0f, 0x1.dabdeap-18f, 0x1.e442e8p-24f, 0.0f,
     0.0f, 0x1.55f01ep-58f, 0x1.a5f086p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eabc56p-76f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d629bcp-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b35ff4p-3f,
     0.0f, 0x1.fc4fcep-105f, 0.0f, 0.0f, 0.0f, 0x1.88d15ap-13f, 0x1.0aecfcp-13f, 0.0f,
     0x1.0cd5fap-40f, 0.0f, 0x1.a4b736p-73f, 0x1.d60166p-55f, 0x1.72fbeep-108f,
     0x1.2ea4f6p-84f, 0x1.35b052p-94f, 0.0f, 0.0f, 0x1.aea97ap-69f, 0x1.7f8bacp-63f,
     0x1.8e0cap-81f, 0x1.f6e5d2p-43f, 0x1.f17102p-41f, 0.0f, 0x1.fc02dcp-2f,
     0x1.a0806p-53f, 0x1.2b6a16p-12f, 0.0f, 0.0f, 0x1.a0ef5ap-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a2fa88p-78f, 0.0f, 0x1.e96bdp-60f, 0.0f, 0.0f, 0x1.9d9286p-20f, 0.0f,
     0.0f, 0x1.8f402ep-5f, 0.0f, 0x1.ff8012p-102f, 0.0f, 0.0f, 0x1.2a56f6p-123f, 0.0f,
     0.0f, 0x1.5da76p-52f, 0x1.c05aecp-70f, 0.0f, 0x1.18e8eap-81f, 0x1.f8f80ep-21f,
     0x1.39b3bep-117f, 0x1.87c274p-30f, 0.0f, 0.0f, 0.0f, 0x1.1f6236p-52f,
     0x1.3de478p-40f, 0x1.4fc91ap-85f, 0x1.2fc6f4p-3f, 0.0f, 0x1.3b7cb4p-13f, 0.0f,
     0.0f, 0x1.61f34cp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bf4e6p-119f, 0x1.b43c9cp-25f,
     0.0f, 0x1.08fc1ap-74f, 0x1.8c4064p-63f, 0.0f, 0.0f, 0x1.347364p-38f,
     0x1.b621c8p-34f, 0.0f, 0x1.849214p-56f, 0x1.6cb2dp-76f, 0x1.028e32p-35f,
     0x1.55ddb4p-104f, 0.0f, 0x1.9e43eep-56f, 0.0f, 0x1.cb2034p-15f, 0x1.c74228p-55f,
     0x1.1c9f94p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2900ep-106f, 0.0f, 0x1.c82466p-53f,
     0x1.f59fbep-108f, 0x1.8eb82ep-52f, 0.0f, 0.0f, 0x1.25ac18p-59f, 0x1.5f0092p-102f,
     0x1.b1eceap-27f, 0.0f, 0x1.7ad8b4p-76f, 0.0f, 0.0f, 0.0f, 0x1.21ce9ap-38f, 0.0f,
     0.0f, 0x1.2888b4p-17f, 0x1.0740d6p-16f, 0x1.0b515ap-62f, 0x1.ccf1e2p-35f,
     0x1.eeb4c6p-123f, 0x1.7b7582p-69f, 0x1.166e72p-101f, 0x1.6a7c74p-26f, 0.0f,
     0x1.e491dcp-120f, 0.0f, 0.0f, 0x1.7ff776p-54f, 0x1.800b42p-120f, 0.0f,
     0x1.295974p-58f, 0x1.3209c4p-80f, 0x1.7dea22p-35f, 0.0f, 0x1.248b5cp-88f,
     0x1.3072dep-72f, 0.0f, 0.0f, 0x1.dea594p-12f, 0x1.f56fc4p-75f, 0x1.44ac58p-99f,
     0.0f, 0x1.c8ad36p-76f, 0x1.1b579ep-58f, 0x1.ce1912p-17f, 0x1.15cefep-21f, 0.0f,
     0x1.070a64p-125f, 0x1.b8d4b8p-94f, 0x1.64dafep-18f, 0x1.abaa1p-57f,
     0x1.a3e0a6p-50f, 0x1.7122e4p-34f, 0x1.1f8ec4p-4f, 0x1.95771cp-20f, 0.0f,
     0x1.7b067ap-38f, 0x1.8f5968p-94f, 0.0f, 0.0f, 0x1.9dcca4p-125f, 0x1.d0839ap-20f,
     0x1.8d772ap-49f, 0x1.106ca2p-35f, 0.0f, 0x1.6ac406p-95f, 0x1.2f02bcp-34f, 0.0f,
     0.0f, 0.0f, 0x1.f3fab4p-99f, 0x1.8c5b7ep-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.265b3ap-57f, 0x1.dffa1ap-27f, 0x1.bd1ed2p-71f, 0x1.8d6388p-101f, 0.0f,
     0x1.bcfc24p-55f, 0x1.f32c1cp-55f, 0.0f, 0.0f, 0x1.56e78ap-76f, 0x1.cf23eap-85f,
     0x1.dc34cp-28f, 0x1.6b01cap-68f, 0.0f, 0x1.9268ccp-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5ac4eep-41f, 0x1.2d6eb8p-120f, 0.0f, 0x1.26cc44p-109f, 0.0f, 0.0f,
     0.0f, 0x1.35d4p-74f, 0x1.b67e66p-4f, 0.0f, 0.0f, 0x1.530a1p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.563822p-26f, 0x1.63de04p-117f, 0x1.462a0cp-14f, 0.0f, 0.0f,
     0x1.933c3cp-122f, 0.0f, 0x1.8b0768p-114f, 0x1.e69446p-80f, 0.0f, 0x1.7e143cp-79f,
     0.0f, 0x1.6cf51cp-59f, 0x1.5f0bdcp-17f, 0x1.1f912cp-99f, 0.0f, 0.0f, 0.0f,
     0x1.a825dap-77f, 0x1.0064f8p-85f, 0x1.5345e4p-102f, 0.0f, 0x1.5f66b8p-54f, 0.0f,
     0.0f, 0.0f, 0x1.59234ap-78f, 0x1.c017eep-113f, 0x1.08597ap-77f, 0x1.7dd894p-120f,
     0.0f, 0x1.a709ecp-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b84ap-35f, 0.0f,
     0x1.a3a784p-16f, 0x1.08a694p-46f, 0.0f, 0.0f, 0.0f, 0x1.4bb1a2p-29f,
     0x1.0d7d5ep-122f, 0.0f, 0.0f, 0.0f, 0x1.4ab9d4p-101f, 0x1.32580ap-78f,
     0x1.c8f5b6p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13d644p-65f,
     0x1.00abf4p-82f, 0.0f, 0x1.2e2364p-21f, 0.0f, 0.0f, 0.0f, 0x1.184cb4p-31f,
     0x1.04254ep-125f, 0.0f, 0.0f, 0x1.65c828p-57f, 0.0f, 0.0f, 0.0f, 0x1.27095ep-22f,
     0x1.3afe04p-88f, 0x1.0093c2p-7f, 0x1.9d1286p-2f, 0x1.2c7f5ap-24f, 0.0f, 0.0f,
     0x1.7ed1e4p-124f, 0.0f, 0.0f, 0.0f, 0x1.f669c2p-2f, 0.0f, 0x1.0d4ae2p-50f, 0.0f,
     0x1.411832p-3f, 0.0f, 0.0f, 0x1.723edp-6f, 0.0f, 0.0f, 0x1.172c1ap-116f, 0.0f,
     0x1.63d9d4p-122f, 0.0f, 0x1.80785ap-22f, 0.0f, 0x1.067e5cp-61f, 0.0f, 0.0f,
     0x1.a35774p-53f, 0.0f, 0x1.e64c68p-68f, 0x1.e32702p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f50d72p-87f, 0.0f, 0.0f, 0.0f, 0x1.32d44cp-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09afcap-48f, 0.0f, 0.0f, 0x1.9078b4p-13f, 0.0f, 0x1.9fd294p-92f, 0.0f,
     0x1.dfbd98p-87f, 0.0f, 0.0f, 0x1.cf6e08p-113f, 0x1.317a86p-69f, 0x1.b25d1ep-68f,
     0.0f, 0.0f, 0x1.62e70cp-109f, 0x1.632c66p-91f, 0.0f, 0x1.10e536p-14f,
     0x1.33a9ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d494ap-67f, 0.0f, 0.0f,
     0x1.b1456p-78f, 0x1.6025e4p-75f, 0.0f, 0.0f, 0.0f, 0x1.3b2fcep-65f,
     0x1.51ffep-108f, 0x1.eb269cp-86f, 0x1.860408p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96b366p-9f, 0x1.3be958p-126f, 0x1.15602p-60f, 0.0f, 0.0f, 0x1.159f36p-42f,
     0x1.0b2612p-123f, 0x1.e62778p-61f, 0x1.a6074cp-73f, 0.0f, 0x1.491df6p-124f,
     0x1.a0801ap-86f, 0.0f, 0x1.b4ca14p-78f, 0x1.2ebe6ap-54f, 0.0f, 0x1.7724d6p-42f,
     0x1.434762p-64f, 0x1.d1081p-16f, 0.0f, 0x1.ceb31p-20f, 0.0f, 0x1.90f696p-46f,
     0x1.0a4976p-15f, 0x1.91b072p-75f, 0.0f, 0x1.d61256p-93f, 0.0f, 0x1.7e0f22p-99f,
     0x1.f9c852p-76f, 0.0f, 0x1.b0e502p-104f, 0x1.2f8962p-105f, 0x1.6d481ap-114f,
     0.0f, 0.0f, 0x1.08f386p-12f, 0.0f, 0x1.28de12p-5f, 0.0f, 0x1.946b26p-25f,
     0x1.2bf618p-41f, 0x1.3d9e7ap-55f, 0x1.c6eb54p-79f, 0.0f, 0.0f, 0x1.02e72p-77f,
     0x1.222946p-126f, 0x1.a8e664p-30f, 0x1.345bbp-26f, 0.0f, 0x1.9c214ap-92f, 0.0f,
     0x1.07beccp-30f, 0.0f, 0x1.16a046p-16f, 0x1.c7ba48p-27f, 0.0f, 0x1.e74f66p-39f,
     0.0f, 0x1.5b3f3ep-8f, 0x1.4a12f6p-2f, 0x1.e4d09cp-61f, 0x1.d01694p-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5cdfa6p-55f, 0.0f, 0x1.ff336cp-37f, 0x1.83115p-39f,
     0x1.b3121p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.809f1p-40f, 0.0f, 0.0f,
     0x1.8f4518p-39f, 0.0f, 0.0f, 0.0f, 0x1.9e1fa4p-87f, 0x1.e7056p-73f,
     0x1.495b86p-91f, 0x1.1107dep-66f, 0.0f, 0x1.0889p-83f, 0x1.bfe65cp-48f, 0.0f,
     0.0f, 0.0f, 0x1.bb914p-81f, 0.0f, 0x1.8c06c4p-54f, 0x1.39d4eap-31f, 0.0f, 0.0f,
     0x1.853326p-73f, 0.0f, 0.0f, 0x1.06b55p-31f, 0x1.191fd4p-58f, 0.0f,
     0x1.c0a856p-28f, 0.0f, 0.0f, 0x1.1f5aa2p-110f, 0.0f, 0x1.965a04p-120f, 0.0f,
     0x1.494b5cp-62f, 0x1.7b448p-46f, 0x1.ac301p-68f, 0x1.18041cp-52f, 0.0f, 0.0f,
     0.0f, 0x1.2c7048p-31f, 0.0f, 0.0f, 0.0f, 0x1.6a3b8cp-24f, 0.0f, 0x1.76f212p-64f,
     0x1.2b8fbap-63f, 0x1.f67224p-36f, 0.0f, 0.0f, 0x1.ae69cep-126f, 0.0f, 0.0f,
     0x1.2aab1p-38f, 0x1.4a193ep-39f, 0.0f, 0.0f, 0x1.8cc14ap-59f, 0x1.fbf902p-125f,
     0x1.4a7dbap-95f, 0.0f, 0x1.da3b3p-47f, 0x1.4d2e36p-1f, 0x1.029cc2p-5f, 0.0f,
     0.0f, 0.0f, 0x1.9a3e74p-121f, 0.0f, 0.0f, 0x1.b25454p-119f, 0.0f,
     0x1.156e1ep-81f, 0x1.b217ecp-96f, 0.0f, 0x1.913366p-125f, 0.0f, 0x1.3e628ep-51f,
     0x1.f2762ep-101f, 0x1.d68984p-15f, 0x1.b73d9cp-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f432f6p-27f, 0.0f, 0.0f, 0x1.776b44p-120f, 0x1.eaac8ep-62f, 0.0f, 0.0f,
     0x1.7296aep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89ade4p-104f, 0.0f, 0.0f,
     0x1.297788p-43f, 0x1.e20a7ep-35f, 0.0f, 0x1.362514p-93f, 0x1.b5e384p-123f, 0.0f,
     0x1.c459cp-111f, 0x1.d10346p-108f, 0x1.9b00dcp-7f, 0.0f, 0x1.7892p-66f, 0.0f,
     0x1.b0ad64p-66f, 0.0f, 0x1.eef6dap-85f, 0x1.ce9938p-19f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.05ec3p-15f, 0x1.b5d202p-98f, 0x1.687b2ep-125f, 0x1.cc0e92p-6f, 0.0f,
     0.0f, 0.0f, 0x1.f2544p-3f, 0x1.7dfb98p-107f, 0x1.1fb03ep-126f, 0x1.994dbap-98f,
     0x1.fe7114p-35f, 0.0f, 0x1.4169dep-22f, 0x1.ca90a6p-48f, 0x1.e608eep-20f, 0.0f,
     0.0f, 0x1.0998f6p-42f, 0x1.281d62p-80f, 0x1.9a4396p-103f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0de2cp-83f, 0.0f, 0.0f, 0.0f, 0x1.fd39d8p-86f, 0x1.b0ead6p-31f,
     0x1.a7db66p-11f, 0x1.408e1cp-7f, 0x1.027dfep-85f, 0.0f, 0x1.61bd9ep-79f,
     0x1.757284p-119f, 0x1.337ba4p-60f, 0.0f, 0.0f, 0x1.b8c404p-48f, 0x1.6de1a2p-92f,
     0.0f, 0.0f, 0x1.7d4a94p-116f, 0x1.a1ed4ep-24f, 0.0f, 0.0f, 0x1.5feb7ap-106f,
     0x1.df5a6cp-12f, 0.0f, 0x1.53ac54p-122f, 0x1.4b90cep-66f, 0x1.679caep-90f,
     0x1.8c3a9ep-60f, 0x1.54d456p-120f, 0x1.c6535ap-39f, 0x1.0b0bf8p-18f,
     0x1.ba82b8p-74f, 0x1.792ec6p-51f, 0x1.5fc284p-60f, 0.0f, 0x1.f47e82p-117f, 0.0f,
     0x1.f3c83cp-68f, 0.0f, 0x1.0d26a4p-63f, 0.0f, 0x1.7ee5fep-41f, 0.0f,
     0x1.81dac8p-44f, 0x1.b71982p-63f, 0x1.894c5ap-114f, 0.0f, 0.0f, 0x1.3bf614p-50f,
     0x1.bbab72p-121f, 0.0f, 0x1.8d4562p-125f, 0.0f, 0x1.8b60bp-81f, 0.0f,
     0x1.c2ffbap-33f, 0x1.12dd2ep-38f, 0x1.bafa76p-25f, 0x1.07df2cp-16f, 0.0f,
     0x1.4ac3dap-125f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.15512p-124f, 0.0f, 0.0f,
     0x1.21fc78p-87f, 0.0f, 0x1.81665ap-93f, 0x1.c3673ap-116f, 0x1.d9cae6p-26f, 0.0f,
     0x1.b5b93ep-119f, 0x1.0cfb5cp-54f, 0x1.95f966p-101f, 0x1.996f1p-100f,
     0x1.5af3bp-32f, 0x1.3ee396p-80f, 0x1.81fd16p-23f, 0x1.14f1b2p-113f,
     0x1.8e8d82p-110f, 0x1.5da16ep-13f, 0x1.0c271ap-73f, 0x1.f07bf8p-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9df002p-1f, 0x1.14370ap-97f, 0.0f, 0.0f, 0x1.2939bep-45f, 0.0f,
     0x1.40be1cp-82f, 0x1.20edp-97f, 0x1.0d20d6p-6f, 0x1.6d1fa6p-38f, 0x1.fd5326p-19f,
     0.0f, 0.0f, 0x1.87235cp-84f, 0x1.70c9c2p-54f, 0x1.9e46dcp-61f, 0x1.6f5f04p-118f,
     0x1.94f4c8p-74f, 0x1.cdcd94p-32f, 0x1.dee26ap-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5015b4p-17f, 0.0f, 0x1.86e924p-42f, 0x1.997086p-92f, 0x1.d223fcp-79f,
     0x1.b424a6p-87f, 0x1.3ca36cp-107f, 0x1.c40d0cp-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2a2de6p-95f, 0x1.88d2dp-48f, 0x1.21b7cap-93f, 0x1.090feap-26f, 0.0f,
     0.0f, 0x1.616a1ap-105f, 0.0f, 0x1.7cfcb4p-44f, 0.0f, 0.0f, 0x1.4af314p-11f,
     0x1.912f4cp-111f, 0x1.0b628ep-125f, 0x1.2bc70ap-47f, 0.0f, 0.0f,
     0x1.de5cbep-108f, 0x1.00fb4p-4f, 0x1.b2767p-99f, 0x1.8b25b2p-73f, 0.0f, 0.0f,
     0x1.1af822p-65f, 0.0f, 0.0f, 0x1.d3d92ap-30f, 0.0f, 0x1.d09a64p-23f,
     0x1.9c85b6p-26f, 0.0f, 0.0f, 0.0f, 0x1.65352ap-118f, 0x1.7dc8aep-34f, 0.0f, 0.0f,
     0.0f, 0x1.866612p-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66b8c2p-35f, 0.0f,
     0x1.522174p-80f, 0x1.70ee3p-81f, 0x1.fe5c04p-44f, 0.0f, 0x1.0ecd74p-106f,
     0x1.81acfp-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbc9e6p-84f, 0.0f, 0x1.3d6c8ep-121f,
     0.0f, 0.0f, 0.0f, 0x1.22bf98p-80f, 0x1.db2a1cp-106f, 0.0f, 0.0f,
     0x1.5e6af2p-118f, 0.0f, 0.0f, 0.0f, 0x1.ad2ae8p-83f, 0x1.a6633ap-113f, 0.0f,
     0x1p0f, 0x1.78108cp-40f, 0x1.6350dp-49f, 0.0f, 0.0f, 0.0f, 0x1.b5b0d2p-12f, 0.0f,
     0.0f, 0.0f, 0x1.a25a76p-43f, 0x1.4b3c92p-56f, 0.0f, 0x1.d2cceap-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.94d164p-51f, 0.0f, 0x1.ed01dap-59f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.66c236p-94f, 0x1.7bdf9ep-34f, 0.0f, 0x1.d533b8p-123f,
     0.0f, 0x1.059f36p-57f, 0.0f, 0.0f, 0x1.f679fcp-37f, 0x1.0f0cacp-14f, 0.0f,
     0x1.cd989p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.293562p-5f, 0.0f,
     0x1.dffe64p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75c5cp-78f,
     0x1.4c1f8p-25f, 0x1.0f3a2ap-121f, 0.0f, 0.0f, 0.0f, 0x1.728dd8p-95f,
     0x1.f43c6ep-116f, 0.0f, 0.0f, 0.0f, 0x1.e7e32ep-64f, 0.0f, 0x1.c65a5ep-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cffe1cp-48f, 0x1.d46d9p-103f, 0x1.250e68p-84f,
     0x1.fc8a2p-12f, 0x1.4db576p-74f, 0.0f, 0x1.12978p-81f, 0x1.ed007ap-62f, 0.0f,
     0x1.e65398p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1a68p-49f, 0.0f, 0.0f,
     0x1.756896p-45f, 0.0f, 0x1.298bdp-122f, 0.0f, 0x1.7d196ap-33f, 0x1.6aa568p-102f,
     0.0f, 0.0f, 0.0f, 0x1.3273eap-107f, 0.0f, 0x1.24694ep-16f, 0.0f, 0.0f,
     0x1.c6f102p-126f, 0.0f, 0.0f, 0.0f, 0x1.0566a6p-117f, 0x1.c9f34cp-43f,
     0x1.a75c2p-64f, 0x1.aea984p-27f, 0x1.4b573cp-43f, 0.0f, 0.0f, 0.0f,
     0x1.8dca5p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3b748p-4f, 0.0f, 0x1.e36e2p-37f,
     0.0f, 0.0f, 0x1.7ecbc8p-37f, 0.0f, 0x1.48cp-8f, 0x1.73143ep-17f, 0.0f,
     0x1.27d906p-6f, 0.0f, 0.0f, 0x1.f77bfp-9f, 0.0f, 0x1.42b5ecp-115f,
     0x1.574388p-83f, 0x1.e08818p-19f, 0.0f, 0x1.ba85fap-28f, 0.0f, 0x1.e3e6ap-35f,
     0x1.8be446p-79f, 0.0f, 0x1.9bf7bap-13f, 0.0f, 0.0f, 0.0f, 0x1.6ee126p-126f,
     0x1.ebea94p-124f, 0x1.ae3b0ap-51f, 0.0f, 0x1.6d5276p-74f, 0x1p0f, 0.0f,
     0x1.8ec9bp-51f, 0x1.c869eap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b7c94p-36f, 0.0f,
     0.0f, 0.0f, 0x1.3d7be6p-1f, 0.0f, 0x1.5bed3p-105f, 0.0f, 0x1.213254p-46f, 0.0f,
     0.0f, 0x1.b7edf4p-67f, 0x1.7c1d08p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f34dfap-95f, 0x1.728946p-3f, 0.0f, 0.0f, 0x1.eff194p-81f, 0.0f,
     0x1.44ff88p-122f, 0.0f, 0x1.4a9db8p-89f, 0.0f, 0.0f, 0.0f, 0x1.eb3bbep-113f,
     0.0f, 0x1.110838p-69f, 0x1.044b54p-108f, 0x1.3b21fap-25f, 0x1.b3787ep-47f,
     0x1.10dc24p-37f, 0x1.cde624p-7f, 0.0f, 0x1.d5cbe8p-82f, 0x1.d6b838p-14f, 0.0f,
     0x1.560268p-41f, 0.0f, 0x1.b1b106p-65f, 0x1.144f24p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e905p-93f, 0.0f, 0x1.1adf26p-17f, 0x1.f7f0e8p-103f, 0x1.8fec96p-80f, 0.0f,
     0x1.e0c558p-106f, 0x1.cd536ep-18f, 0x1.680cb2p-113f, 0x1.bf87eap-77f, 0.0f,
     0x1.d71ff4p-14f, 0.0f, 0.0f, 0.0f, 0x1.83821ap-53f, 0.0f, 0.0f, 0x1.8f4696p-102f,
     0x1.5356c2p-9f, 0.0f, 0x1.413cfcp-63f, 0x1.9156e6p-62f, 0.0f, 0.0f,
     0x1.6149bp-80f, 0x1.f130a4p-89f, 0x1.c30332p-59f, 0x1.4182c2p-99f, 0x1p0f,
     0x1.ac8d3p-11f, 0.0f, 0x1.332caep-14f, 0x1.5a7eap-107f, 0.0f, 0.0f,
     0x1.2204d8p-77f, 0x1.15f33ap-67f, 0.0f, 0x1.39d854p-52f, 0.0f, 0.0f,
     0x1.374e9p-28f, 0x1.e2638cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7de5b8p-92f,
     0x1.e6f9d2p-3f, 0.0f, 0.0f, 0.0f, 0x1.29dddap-60f, 0x1.25572ep-52f, 0.0f,
     0x1.8fae5p-98f, 0.0f, 0x1.024d42p-15f, 0.0f, 0x1.2c7e4p-65f, 0x1.99469p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.299db8p-58f, 0x1.be5e8ep-71f, 0x1.c4a10ep-3f,
     0.0f, 0x1.8c9ec4p-23f, 0x1.a5b344p-82f, 0.0f, 0.0f, 0x1.b697ecp-20f,
     0x1.41f712p-71f, 0x1.e2628ep-42f, 0.0f, 0x1.7b804ap-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2e506p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44b1dp-24f,
     0x1.6ec81cp-101f, 0.0f, 0.0f, 0x1.fc3f46p-8f, 0x1.60b7ep-112f, 0.0f,
     0x1.546a5p-86f, 0.0f, 0x1.6a50f4p-18f, 0.0f, 0.0f, 0x1.af0ccp-108f,
     0x1.79544cp-61f, 0x1.6ebef8p-3f, 0.0f, 0x1.179abp-38f, 0.0f, 0.0f,
     0x1.e8964ep-33f, 0x1.6c7e26p-87f, 0.0f, 0.0f, 0x1.a19e14p-85f, 0.0f, 0.0f,
     0x1.90335cp-29f, 0x1.01bde8p-18f, 0x1.fcea5cp-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d33e9ep-122f, 0x1.75acb6p-92f, 0.0f, 0.0f, 0.0f, 0x1.eb769ap-69f, 0.0f, 0.0f,
     0.0f, 0x1.55c616p-44f, 0.0f, 0x1.768b62p-32f, 0.0f, 0x1.e4c596p-59f,
     0x1.256c2cp-34f, 0x1.c313b6p-106f, 0x1.531bbep-86f, 0.0f, 0.0f, 0x1.f76ceep-42f,
     0x1.79d892p-61f, 0.0f, 0x1.461b32p-54f, 0.0f, 0x1.720e3cp-116f, 0x1.7dbf5ep-109f,
     0.0f, 0.0f, 0.0f, 0x1.6488e6p-56f, 0.0f, 0.0f, 0.0f, 0x1.007724p-49f,
     0x1.8278acp-7f, 0.0f, 0x1.8a4d64p-67f, 0.0f, 0.0f, 0.0f, 0x1.17adc8p-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef5b24p-66f, 0.0f, 0.0f, 0.0f,
     0x1.e0ff0ap-114f, 0.0f, 0.0f, 0x1.9c65b8p-46f, 0x1.228244p-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f208fep-4f, 0x1.33cebep-78f, 0x1.e6579p-69f,
     0x1.cab974p-102f, 0.0f, 0.0f, 0.0f, 0x1.dd2294p-45f, 0x1.3597fap-58f,
     0x1.a1e15ap-119f, 0.0f, 0.0f, 0.0f, 0x1.59b646p-123f, 0x1.4a593ep-40f,
     0x1.2b2d5ep-77f, 0x1.0a4074p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6312p-91f, 0.0f,
     0x1.edcc5cp-45f, 0.0f, 0.0f, 0.0f, 0x1.7b02ap-35f, 0.0f, 0x1.2db25ep-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d1e0ap-9f, 0x1.0c4f52p-13f, 0x1.bf7796p-29f,
     0x1.72a01ep-119f, 0.0f, 0.0f, 0x1.b7d3c2p-29f, 0x1.1de8e2p-83f, 0.0f,
     0x1.f4351ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2666ep-19f, 0x1.e2c64cp-26f, 0.0f,
     0x1.715908p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30402p-34f, 0x1.597b88p-76f, 0.0f,
     0x1.d8e57p-22f, 0x1.5cdceap-70f, 0x1.a84b3p-43f, 0x1.cc7646p-60f, 0.0f, 0.0f,
     0x1.86b8f4p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7eb6ap-55f, 0x1.aea1c8p-37f,
     0x1.d34e92p-59f, 0x1.e8a63cp-118f, 0x1.cfd57ep-113f, 0.0f, 0x1.578884p-25f, 0.0f,
     0.0f, 0x1.06c13ap-111f, 0x1.21e728p-16f, 0.0f, 0x1.ee6048p-91f, 0.0f, 0.0f, 0.0f,
     0x1.05e2bap-107f, 0.0f, 0x1.da9daep-48f, 0.0f, 0x1.c7140ap-106f, 0x1.774bcep-60f,
     0.0f, 0x1.dd4556p-95f, 0.0f, 0.0f, 0.0f, 0x1.d68abp-48f, 0.0f, 0x1.f9af26p-106f,
     0x1.25aacp-24f, 0.0f, 0.0f, 0.0f, 0x1.294dcp-82f, 0.0f, 0.0f, 0x1.c8074p-96f,
     0.0f, 0x1.bab722p-119f, 0.0f, 0.0f, 0.0f, 0x1.86023ep-77f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2e7082p-119f, 0.0f, 0x1.a1c334p-70f, 0.0f, 0.0f, 0x1.6f5d04p-93f,
     0x1.7bc56p-70f, 0.0f, 0.0f, 0.0f, 0x1.27c146p-36f, 0x1.5f97dap-15f,
     0x1.64e512p-114f, 0.0f, 0.0f, 0.0f, 0x1.c675e8p-116f, 0.0f, 0x1.6b151ap-59f,
     0.0f, 0x1.98c092p-56f, 0x1.d729bp-88f, 0.0f, 0.0f, 0x1.d3500cp-59f, 0.0f,
     0x1.24db94p-96f, 0x1.67c4bap-47f, 0.0f, 0x1.5b5de6p-13f, 0x1.dc6082p-35f,
     0x1.afe082p-68f, 0x1.4eb81cp-26f, 0.0f, 0x1.876516p-106f, 0x1.5aa82ap-109f,
     0x1.ed22bap-55f, 0.0f, 0x1.0d60a4p-117f, 0x1.81c65p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b736cp-41f, 0x1.e82712p-116f, 0x1.a4778ap-75f, 0.0f, 0x1.7c8036p-91f,
     0.0f, 0x1.8da4bep-101f, 0x1.f26a24p-9f, 0.0f, 0.0f, 0.0f, 0x1.216fa4p-118f, 0.0f,
     0x1.91bac6p-29f, 0x1.fca41cp-22f, 0.0f, 0.0f, 0x1.8234ecp-118f, 0.0f, 0x1p0f,
     0x1.25bc88p-45f, 0x1.ac844ap-82f, 0.0f, 0x1.7f19fcp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.431f9cp-113f, 0x1.c97864p-87f, 0.0f, 0.0f, 0.0f, 0x1.0a3f78p-115f,
     0.0f, 0x1.dd43d6p-116f, 0x1.eaf966p-76f, 0x1.b6d7f8p-38f, 0.0f, 0.0f, 0.0f,
     0x1.dd81b2p-36f, 0x1.28c57p-114f, 0x1.09c86ap-52f, 0x1.0e39e6p-13f, 0.0f,
     0x1.f4fc72p-94f, 0x1.28453p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f7d1ep-84f,
     0x1.b411f8p-21f, 0.0f, 0x1.655adcp-99f, 0x1.90f35ap-62f, 0x1.1dd5b2p-10f, 0.0f,
     0.0f, 0x1.893454p-17f, 0.0f, 0x1.4a3ac2p-18f, 0x1.17ad16p-34f, 0x1.d5b00ap-3f,
     0x1.91888p-119f, 0x1.3c52aap-42f, 0x1.0b8de6p-93f, 0.0f, 0.0f, 0x1.ec42d6p-75f,
     0x1.68468cp-5f, 0.0f, 0x1.621b5p-28f, 0.0f, 0.0f, 0x1.e51f4p-49f, 0.0f,
     0x1.c81c88p-107f, 0x1.1a5cf4p-91f, 0x1.8852e8p-124f, 0.0f, 0.0f, 0x1.5074d8p-10f,
     0.0f, 0x1.d6bbb8p-58f, 0x1.1ac916p-6f, 0.0f, 0.0f, 0x1.e0911ep-3f,
     0x1.32e24cp-56f, 0.0f, 0.0f, 0.0f, 0x1.02570ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.c8bd04p-114f, 0x1.f674c2p-126f, 0x1.e09a5ap-51f, 0.0f, 0x1.e2f55ep-74f,
     0x1.317438p-60f, 0x1.e5a864p-105f, 0.0f, 0.0f, 0x1.7d025p-84f, 0.0f,
     0x1.f17ce8p-102f, 0.0f, 0x1.fb58b2p-17f, 0.0f, 0.0f, 0.0f, 0x1.f5eb5cp-31f, 0.0f,
     0x1.04fa98p-75f, 0x1.33673cp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c90198p-1f,
     0x1.83ac2ep-110f, 0x1.72266cp-60f, 0x1.3c571ap-37f, 0x1.be1ceep-35f, 0.0f,
     0x1.36b684p-69f, 0x1.268316p-83f, 0x1.d30726p-30f, 0x1.72675ap-97f,
     0x1.02c04ep-74f, 0x1.191bd8p-104f, 0.0f, 0x1.1ce96ap-111f, 0x1.7c3b9cp-121f,
     0x1.12a884p-21f, 0.0f, 0x1.f25aa4p-4f, 0.0f, 0x1.a8513p-10f, 0.0f,
     0x1.cc0cbap-45f, 0x1.6147cap-61f, 0.0f, 0x1.91a558p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f13bep-80f, 0.0f, 0.0f, 0x1.7ea8e8p-97f, 0.0f, 0x1.26dd4ep-31f,
     0x1.09647ap-16f, 0.0f, 0.0f, 0.0f, 0x1.8a2b98p-84f, 0.0f, 0.0f, 0.0f,
     0x1.2369bep-110f, 0x1.dff9f8p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45cff6p-85f, 0.0f, 0.0f, 0.0f, 0x1.243392p-57f, 0.0f,
     0x1.fcbb92p-115f, 0.0f, 0.0f, 0x1.4fa102p-12f, 0.0f, 0x1.24288ep-88f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d65c6p-126f, 0.0f, 0x1.fcf52ep-56f, 0.0f, 0x1.5b79f4p-78f,
     0.0f, 0.0f
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
            tmp2 = Sleef_fmodf4_avx2128(tmp0, tmp1);
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
    printf("Sleef_fmodf4_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fmodf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
