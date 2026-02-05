/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastsinf4_u3500kvx.c --function \
 *     Sleef_fastsinf4_u3500kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.677e9cp-115f, 0x1.1f4d36p-89f, 0.0f, 0x1.b6dd58p-19f, 0x1.23dc3ap-109f,
     0x1.3d0432p-57f, 0x1.bab55cp-30f, 0x1.8f3efcp-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.67fc98p-101f, 0x1.2f3d6ep-4f, 0x1.e7494ep-22f, 0x1.2cffdp-20f,
     0x1.f991eap-84f, 0.0f, 0.0f, 0.0f, 0x1.60963p-103f, 0x1.5160cp-107f, 0.0f, 0.0f,
     0x1.9b50dp-26f, 0x1.3fe64ep-123f, 0.0f, 0x1.5a024ep-126f, 0.0f, 0.0f, 0.0f,
     0x1.36aa46p-51f, 0x1.cb9c54p-110f, 0.0f, 0x1.9e1a88p-68f, 0x1.8530e8p-65f, 0.0f,
     0.0f, 0x1.4bd2d6p-35f, 0.0f, 0x1.385f7ep-69f, 0x1.cf637p-3f, 0x1.a369aep-93f,
     0x1.72308p-5f, 0.0f, 0x1.2b14a4p-94f, 0x1.f3481ep-27f, 0x1.3d8976p-97f, 0.0f,
     0x1.e130cp-1f, 0x1.04d614p-14f, 0x1.f2fae4p-108f, 0.0f, 0x1.0a7d2ep-80f, 0.0f,
     0.0f, 0x1.e9bd94p-57f, 0x1.64c13cp-4f, 0x1.0fa1e8p-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c330ccp-56f, 0.0f, 0.0f, 0.0f, 0x1.cf3faep-88f, 0x1.8067d6p-107f, 0.0f,
     0x1.1e3ceep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b46164p-69f, 0.0f, 0.0f, 0.0f,
     0x1.cdc6f6p-115f, 0x1.688bfap-122f, 0.0f, 0x1.fc79cep-19f, 0x1.895bdap-18f, 0.0f,
     0x1.8a50d6p-59f, 0.0f, 0x1.0c0082p-117f, 0.0f, 0x1.80d1eep-28f, 0.0f, 0.0f, 0.0f,
     0x1.bb1454p-64f, 0.0f, 0.0f, 0x1.ddad7p-3f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.edfbf4p-81f, 0x1.e0ef4cp-52f, 0.0f, 0x1.42b4dp-39f, 0x1.16b13p-5f,
     0x1.a4596ep-81f, 0x1.15359p-26f, 0x1.ed79bcp-39f, 0x1.7c5bbep-90f,
     0x1.5a1a7ap-68f, 0x1.380f7p-5f, 0x1.34253ap-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c13cb8p-36f, 0.0f, 0x1.ca0bd4p-55f, 0.0f, 0.0f, 0.0f, 0x1.9904bcp-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b8636p-74f, 0x1.c8abd6p-119f, 0x1.9d825p-79f, 0.0f,
     0x1.d1e712p-118f, 0x1.56fd44p-85f, 0x1.85d2dp-93f, 0x1.40ba62p-87f,
     0x1.e7d90cp-94f, 0x1.f8f2eap-77f, 0x1.a62b04p-124f, 0x1.e4829ap-104f, 0.0f,
     0x1.743be8p-80f, 0x1.978776p-73f, 0x1.3091aap-32f, 0x1.27deb2p-94f, 0.0f,
     0x1.cffc8ap-120f, 0.0f, 0x1.248594p-63f, 0x1.f03478p-83f, 0x1.9bcca8p-89f,
     0x1.7b10eep-20f, 0x1.69682cp-3f, 0x1.55c282p-28f, 0x1.a93876p-51f, 0.0f,
     0x1.d5faccp-100f, 0x1.fd9f18p-20f, 0x1.83d86ep-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3e882p-62f, 0x1.3ef9f6p-29f, 0.0f, 0x1.337694p-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dcc03cp-12f, 0x1.d4e776p-22f, 0.0f, 0x1.d51886p-114f, 0.0f, 0x1.4f687ap-103f,
     0x1.82f1eap-86f, 0x1.7367aap-82f, 0x1.ade194p-17f, 0x1.0ab98p-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cce252p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31e9a2p-97f, 0x1.589e1ap-99f, 0.0f, 0x1.e81eap-49f, 0x1.3fd44ap-16f,
     0x1.09affep-64f, 0.0f, 0.0f, 0x1.50b40ap-90f, 0.0f, 0x1.d38e36p-90f, 0.0f, 0.0f,
     0x1.70df88p-74f, 0x1.a468c4p-18f, 0.0f, 0.0f, 0x1.2ed08p-88f, 0x1.a05878p-45f,
     0x1.a49468p-68f, 0x1.9add1cp-61f, 0.0f, 0x1.e6119p-22f, 0x1.a0c47ap-75f,
     0x1.f9b622p-31f, 0x1.24274p-63f, 0.0f, 0x1.4487d4p-9f, 0x1.6f6cd4p-33f, 0.0f,
     0.0f, 0x1.0ebddep-61f, 0x1.4befa2p-30f, 0.0f, 0.0f, 0x1.feb928p-41f,
     0x1.93e28ep-122f, 0x1.8109c6p-69f, 0x1.81cfecp-11f, 0.0f, 0.0f, 0.0f,
     0x1.d2a12ep-53f, 0.0f, 0.0f, 0x1.1b41f2p-57f, 0x1.02172ap-43f, 0.0f,
     0x1.83a5e2p-99f, 0x1.47635cp-14f, 0.0f, 0.0f, 0x1.a9961cp-33f, 0.0f, 0.0f, 0.0f,
     0x1.2a523ep-68f, 0x1.3183f6p-39f, 0x1.9fcaf8p-3f, 0.0f, 0x1.7921ep-45f,
     0x1.2f9606p-1f, 0.0f, 0x1.61dbe2p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5149cap-119f,
     0x1.d15d06p-37f, 0x1.c0e526p-93f, 0x1.c2b4e2p-96f, 0.0f, 0.0f, 0x1.5152cp-113f,
     0.0f, 0x1.746706p-110f, 0.0f, 0.0f, 0x1.cbc6dcp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1ee15p-122f, 0x1.c1b874p-81f, 0x1.d70876p-119f, 0x1.c99af6p-1f, 0.0f,
     0x1.57d76cp-20f, 0x1.485ddcp-10f, 0x1.d54626p-51f, 0.0f, 0.0f, 0.0f,
     0x1.129716p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.136e8ap-117f,
     0x1.0f6a44p-61f, 0x1.a95534p-9f, 0.0f, 0x1.4122c4p-51f, 0.0f, 0x1.b680b8p-31f,
     0.0f, 0.0f, 0.0f, 0x1.fbc0c8p-79f, 0.0f, 0x1.22a782p-111f, 0x1.f3b6ecp-10f, 0.0f,
     0.0f, 0x1.dd7626p-5f, 0.0f, 0.0f, 0x1.1f5804p-116f, 0x1.e9ff8cp-28f,
     0x1.161d1cp-8f, 0x1.1eaed8p-42f, 0.0f, 0.0f, 0x1.4f5f0cp-54f, 0.0f,
     0x1.528d8cp-14f, 0x1.a1647cp-31f, 0.0f, 0.0f, 0x1.73956cp-50f, 0x1.34528p-59f,
     0x1.95bd08p-107f, 0x1.3d23e8p-91f, 0x1.f40afep-80f, 0x1.237ad8p-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.18ea3cp-38f, 0x1.b2d61ep-120f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f3783cp-25f, 0x1.a97314p-101f, 0.0f, 0x1.940758p-43f, 0x1.02caa4p-69f,
     0x1.070734p-19f, 0x1.29649p-13f, 0.0f, 0.0f, 0.0f, 0x1.136d2cp-49f, 0.0f,
     0x1.be7d26p-90f, 0.0f, 0.0f, 0x1.823314p-81f, 0x1.31d054p-64f, 0.0f, 0.0f,
     0x1.a8f20ep-76f, 0x1.b0217cp-62f, 0x1.2294a2p-2f, 0.0f, 0.0f, 0x1.a64f02p-112f,
     0.0f, 0x1.e426d6p-61f, 0x1.74c44ep-12f, 0.0f, 0.0f, 0x1.23ed02p-112f, 0.0f, 0.0f,
     0.0f, 0x1.dc5ab4p-5f, 0.0f, 0.0f, 0x1.a15f3ap-35f, 0x1.6509bp-107f,
     0x1.115accp-70f, 0x1.de445p-62f, 0.0f, 0.0f, 0.0f, 0x1.9913b2p-115f,
     0x1.a3abbcp-35f, 0x1.43f93ep-99f, 0x1.1bda28p-123f, 0.0f, 0.0f, 0.0f,
     0x1.33dd74p-29f, 0.0f, 0.0f, 0x1.bc3098p-118f, 0x1.87854p-10f, 0x1.1e1a3cp-6f,
     0.0f, 0x1.bf14c2p-27f, 0.0f, 0x1.a883bp-85f, 0x1.e4124ap-44f, 0x1.58e94ep-15f,
     0.0f, 0x1.ff8f28p-1f, 0.0f, 0.0f, 0x1.b6835p-73f, 0x1.b897ap-84f, 0.0f,
     0x1.211eep-12f, 0.0f, 0x1.4035a2p-20f, 0.0f, 0x1.ea2ee4p-38f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ec7d2p-28f, 0.0f, 0x1.baa09cp-80f, 0.0f, 0x1.eee34ep-53f,
     0x1.36c7c6p-113f, 0x1.c0ed06p-26f, 0.0f, 0.0f, 0.0f, 0x1.31c244p-8f,
     0x1.10c92ep-6f, 0.0f, 0.0f, 0x1.ad9eaep-75f, 0x1.2f172p-117f, 0x1.c2130ep-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7ed96p-92f, 0x1.ee82e4p-3f, 0x1.30915p-76f,
     0x1.35b8c8p-17f, 0x1.edf01ep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13dd2cp-64f,
     0.0f, 0x1.8b2ffp-19f, 0x1.58188ap-83f, 0x1.d928c4p-78f, 0.0f, 0.0f,
     0x1.d33374p-53f, 0x1.24dedcp-88f, 0.0f, 0x1.0f8dfap-3f, 0.0f, 0x1.0f7abp-30f,
     0x1.7779bp-27f, 0x1.1ce978p-109f, 0x1.a9cdaap-91f, 0.0f, 0.0f, 0x1.7bad1ap-105f,
     0x1.a86f54p-28f, 0.0f, 0x1.a401c2p-112f, 0.0f, 0.0f, 0x1.370d8cp-77f,
     0x1.79d132p-89f, 0x1.e95c26p-16f, 0.0f, 0x1.eafafep-22f, 0.0f, 0x1.334b3p-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.655f0ep-14f, 0.0f,
     0x1.3e342p-75f, 0x1.bed554p-43f, 0.0f, 0x1.d8212cp-44f, 0x1.22f02cp-78f,
     0x1.e2c7d2p-86f, 0.0f, 0x1.ffed2p-123f, 0x1.1084c6p-67f, 0x1.80a8fap-52f,
     0x1.33263ep-53f, 0.0f, 0x1.8fd8a4p-73f, 0.0f, 0x1.646ebep-55f, 0x1.71157ep-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3377e4p-17f, 0x1.3f8e3p-38f, 0.0f, 0x1.20dfc6p-51f,
     0.0f, 0.0f, 0x1.fc5e16p-16f, 0x1.4c0368p-25f, 0x1.89ad62p-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.79a1c8p-93f, 0x1.70c106p-22f, 0.0f, 0.0f, 0x1.c86df8p-72f,
     0x1.a171acp-114f, 0.0f, 0.0f, 0x1.7a7edep-45f, 0.0f, 0.0f, 0x1.b3ab8cp-99f, 0.0f,
     0.0f, 0x1.2f2eaep-84f, 0x1.7fe658p-54f, 0x1.eacb98p-2f, 0x1.25a154p-9f,
     0x1.338f3p-15f, 0x1.47c0f6p-38f, 0.0f, 0x1.01402ap-56f, 0.0f, 0x1.58fb0ap-23f,
     0.0f, 0x1.ad9424p-35f, 0.0f, 0.0f, 0.0f, 0x1.a8f10ep-87f, 0.0f, 0x1.269ae2p-118f,
     0x1.edc2fap-122f, 0.0f, 0x1.00b836p-35f, 0.0f, 0.0f, 0.0f, 0x1.0f941ap-78f, 0.0f,
     0.0f, 0x1.963adp-11f, 0x1.797de4p-34f, 0x1.c7e204p-42f, 0.0f, 0x1.4b8eccp-2f,
     0x1.af4482p-74f, 0.0f, 0x1.f5598ep-9f, 0x1.e8dca8p-40f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ae2cf4p-98f, 0.0f, 0.0f, 0x1.2d6248p-46f, 0.0f, 0.0f,
     0x1.b88dd8p-75f, 0.0f, 0x1.22301cp-109f, 0.0f, 0x1.065fd2p-46f, 0x1.ef6a3cp-73f,
     0.0f, 0x1.a1093p-124f, 0.0f, 0.0f, 0x1.537924p-114f, 0.0f, 0x1.14655ep-74f, 0.0f,
     0x1.66dd2p-37f, 0.0f, 0.0f, 0.0f, 0x1.27a1a2p-69f, 0.0f, 0.0f, 0x1.12d84p-92f,
     0x1.a0726ap-86f, 0.0f, 0.0f, 0x1.0f65bp-55f, 0x1.ea560cp-42f, 0.0f,
     0x1.4b3422p-99f, 0x1.a70b16p-59f, 0x1.0f49fp-78f, 0x1.6c9ab4p-115f,
     0x1.95ca36p-118f, 0x1.6d2d62p-30f, 0.0f, 0x1.4a50bap-79f, 0x1.0b97ep-28f,
     0x1.7fb3a2p-10f, 0x1.e74c5ap-81f, 0x1.e2fa5cp-74f, 0x1.98ae82p-58f, 0.0f,
     0x1.684c4p-20f, 0.0f, 0x1.29e8ep-7f, 0x1.ee5ad8p-15f, 0.0f, 0.0f,
     0x1.ac8398p-31f, 0x1.94aaf2p-34f, 0x1.e820dap-72f, 0.0f, 0x1.e9a896p-35f,
     0x1.3d84ccp-87f, 0x1.489f62p-13f, 0x1.fe0ec2p-44f, 0x1.6889d2p-65f, 0.0f,
     0x1.aa281p-87f, 0.0f, 0.0f, 0.0f, 0x1.b1188cp-3f, 0x1.97a1dap-53f, 0.0f,
     0x1.ce1cdap-16f, 0x1.941652p-33f, 0.0f, 0x1.f12a4p-26f, 0.0f, 0x1.6f1a64p-88f,
     0x1.1d10e6p-82f, 0.0f, 0x1.191008p-111f, 0.0f, 0x1.5b816p-19f, 0.0f,
     0x1.33e5bap-40f, 0.0f, 0x1.94706ap-52f, 0.0f, 0.0f, 0x1.93322ep-55f, 0.0f, 0.0f,
     0x1.d0caap-79f, 0x1.2745b8p-43f, 0.0f, 0.0f, 0.0f, 0x1.0fe4ecp-101f, 0.0f,
     0x1.3e85d8p-14f, 0x1.0afee8p-73f, 0x1.f2ad4cp-65f, 0x1.684d8ap-21f,
     0x1.b40f12p-54f, 0x1.a99d0cp-86f, 0.0f, 0x1.d49fb2p-35f, 0x1.f0ddc6p-72f,
     0x1.3babb4p-55f, 0.0f, 0.0f, 0x1.dfbdb2p-105f, 0.0f, 0x1.6e1a96p-70f, 0.0f,
     0x1.1baf1cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1eda2p-62f, 0.0f, 0.0f,
     0x1.ee3f38p-86f, 0x1.6f6cfcp-11f, 0.0f, 0.0f, 0.0f, 0x1.7fc06ep-78f, 0.0f,
     0x1.de8ff2p-98f, 0x1.7d2824p-59f, 0.0f, 0x1.2196ccp-60f, 0x1.ed4a4cp-13f, 0.0f,
     0x1.4277bcp-57f, 0.0f, 0x1.aae2eap-84f, 0x1.2ebc74p-102f, 0.0f, 0.0f,
     0x1.649532p-59f, 0x1.621b32p-11f, 0x1.7c25e4p-48f, 0x1.ce049ep-110f, 0.0f,
     0x1.9e22a6p-38f, 0.0f, 0.0f, 0x1.56e0d8p-26f, 0x1.66515p-79f, 0x1.e1aac8p-17f,
     0x1.0a1d16p-22f, 0x1.079ae6p-85f, 0x1.7e94cap-46f, 0.0f, 0x1.d5859ap-94f,
     0x1.07757ap-47f, 0.0f, 0.0f, 0.0f, 0x1.54c54p-92f, 0.0f, 0.0f, 0x1.4a039p-53f,
     0x1.06eb8p-72f, 0.0f, 0.0f, 0.0f, 0x1.4dff24p-3f, 0.0f, 0.0f, 0x1.ca4d1p-32f,
     0x1.85a31cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d7cf4p-73f, 0x1.e24d84p-3f,
     0x1.c692bep-58f, 0x1.cf36d8p-3f, 0x1.8358c4p-72f, 0.0f, 0.0f, 0x1.ac7a7p-20f,
     0.0f, 0.0f, 0.0f, 0x1.4bf8cp-91f, 0x1.f8bcb8p-38f, 0.0f, 0x1.076decp-111f, 0.0f,
     0x1.457902p-125f, 0x1.94691ap-97f, 0x1.331fp-35f, 0.0f, 0x1.170982p-111f, 0.0f,
     0.0f, 0x1.8e2da8p-43f, 0.0f, 0.0f, 0x1.8de7dap-8f, 0.0f, 0x1.acd46ap-49f, 0.0f,
     0x1.ff16b2p-10f, 0.0f, 0.0f, 0x1.2da5e8p-6f, 0.0f, 0.0f, 0x1.314ec8p-91f, 0.0f,
     0x1.baa682p-53f, 0x1.5acbe8p-38f, 0x1.efa6e4p-104f, 0x1.05f7acp-116f,
     0x1.5e699ep-94f, 0x1.c5873p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aca1cap-56f, 0x1.a2c956p-14f, 0.0f, 0x1.e11efp-53f, 0.0f, 0x1.4501ep-108f,
     0.0f, 0x1.1a045ap-95f, 0x1.a030bp-60f, 0x1.24c318p-13f, 0.0f, 0.0f,
     0x1.6eead4p-73f, 0x1.c756b2p-45f, 0x1.a3e8fcp-31f, 0x1.d49e14p-61f,
     0x1.beb7b4p-42f, 0x1.b493a2p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c8ed2p-15f,
     0x1.d9e60ap-69f, 0x1.ed335p-20f, 0x1.0db8d8p-89f, 0.0f, 0.0f, 0x1.7a3b26p-106f,
     0x1.949352p-15f, 0.0f, 0x1.e971c8p-114f, 0.0f, 0x1.e93cc6p-119f, 0.0f, 0.0f,
     0.0f, 0x1.0f856p-89f, 0x1.a248cp-63f, 0.0f, 0x1.a40e3ep-69f, 0.0f, 0.0f, 0.0f,
     0x1.b0a20ep-57f, 0.0f, 0x1.49ba74p-111f, 0.0f, 0x1.c8a688p-69f, 0x1.362316p-46f,
     0x1.c131f6p-74f, 0.0f, 0.0f, 0x1.9e47a6p-111f, 0.0f, 0.0f, 0x1.e0eeeep-15f, 0.0f,
     0.0f, 0x1.50336cp-125f, 0.0f, 0x1.6fec3ep-4f, 0x1.a07a42p-35f, 0.0f,
     0x1.6cac5ap-37f, 0.0f, 0x1.c84736p-85f, 0x1.900772p-122f, 0x1.dae4a8p-48f,
     0x1.a10104p-125f, 0.0f, 0.0f, 0x1.3dd3e8p-63f, 0.0f, 0x1.cc134p-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b9fec8p-123f, 0x1.686d12p-7f, 0x1.3593bep-90f, 0.0f, 0.0f,
     0x1.ac96acp-66f, 0x1.5daca2p-58f, 0x1.91f6c2p-121f, 0x1.da03ap-107f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.358478p-26f, 0x1.4c7358p-33f, 0x1.07e96cp-72f, 0.0f,
     0x1.dcb9ccp-63f, 0x1.917a84p-95f, 0.0f, 0x1.bdba8ap-19f, 0.0f, 0x1.536eap-38f,
     0.0f, 0x1.30c392p-13f, 0x1.b221cep-69f, 0x1.361364p-86f, 0x1.69478cp-112f,
     0x1.f26c28p-90f, 0x1.183548p-2f, 0x1.bca17ap-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a8412p-17f, 0.0f, 0x1.7bdeaep-113f, 0x1.e6a42ep-60f, 0x1.694bb6p-39f, 0.0f,
     0x1.2628ccp-3f, 0x1.b4107cp-44f, 0x1.d81d8p-27f, 0x1.1d1344p-65f, 0.0f,
     0x1.2702b6p-107f, 0x1.ef62f8p-105f, 0x1.a582ap-3f, 0x1.774744p-59f,
     0x1.985a52p-10f, 0.0f, 0.0f, 0.0f, 0x1.8e92acp-38f, 0x1.01c08p-20f, 0.0f,
     0x1.f516dp-100f, 0.0f, 0x1.61724ep-90f, 0x1.7b12eep-82f, 0.0f, 0x1.9649cp-21f,
     0x1.3cf872p-75f, 0.0f, 0.0f, 0.0f, 0x1.719a62p-4f, 0x1.9388ep-55f, 0.0f,
     0x1.74a9c6p-35f, 0.0f, 0x1.d8b2ccp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d39d02p-123f,
     0x1.2013b6p-53f, 0.0f, 0x1.e5904ep-123f, 0.0f, 0.0f, 0.0f, 0x1.98a742p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.448198p-32f, 0x1.f99ebp-100f, 0x1.fb5896p-87f,
     0x1.bec994p-54f, 0.0f, 0.0f, 0.0f, 0x1.7a2adcp-93f, 0x1.eb8436p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b8f5ep-58f, 0.0f, 0.0f
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
            tmp1 = Sleef_fastsinf4_u3500kvx(tmp0);
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
    printf("Sleef_fastsinf4_u3500kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fastsinf4_u3500kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
