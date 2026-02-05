/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f1_u10purecfma.c --function \
 *     Sleef_finz_exp2f1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.8cf37cp-112f, 0x1.991376p-91f, 0.0f, 0.0f, 0x1.77983ap-92f, 0.0f,
     0x1.5f9ec2p-96f, 0x1.f4e0aap-110f, 0.0f, 0.0f, 0.0f, 0x1.093704p-77f,
     0x1.5211ap-8f, 0x1.15173ap-32f, 0x1.8808b4p-91f, 0x1.5dbe56p-23f,
     0x1.28c486p-39f, 0x1.635b32p-25f, 0.0f, 0.0f, 0x1.1155bcp-57f, 0.0f, 0.0f, 0.0f,
     0x1.12b05p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6e1e8p-28f, 0x1.eea624p-48f,
     0x1.337604p-66f, 0x1.8a344ep-1f, 0.0f, 0x1.8bbfccp-126f, 0.0f, 0.0f,
     0x1.cba52p-2f, 0x1.d0cb3ep-109f, 0.0f, 0x1.cf18bp-54f, 0.0f, 0x1.9504fcp-91f,
     0x1.ee1c6p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.907608p-60f, 0x1.a5976ep-67f,
     0x1.2397e2p-84f, 0.0f, 0x1.be341cp-110f, 0x1.35c8eap-65f, 0x1.8e8526p-60f,
     0x1.d6d5a2p-82f, 0x1.5c5aaep-34f, 0.0f, 0x1.279bf4p-14f, 0.0f, 0x1.f5a694p-82f,
     0x1.db8272p-89f, 0x1.4961bep-112f, 0x1.6ef1f4p-70f, 0.0f, 0x1.979f7ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9dd834p-77f, 0.0f, 0x1.3146fp-25f, 0.0f, 0x1.08e6a2p-28f,
     0x1.c8cc96p-94f, 0.0f, 0.0f, 0x1.bc8fb8p-7f, 0.0f, 0x1.001738p-96f, 0.0f,
     0x1.ab82a8p-98f, 0x1.79e41ep-81f, 0x1.72132ap-81f, 0x1.62903ap-95f,
     0x1.04048p-87f, 0.0f, 0x1.5c9cf2p-42f, 0x1.882466p-87f, 0x1.a5d0bep-113f, 0.0f,
     0.0f, 0x1.edbap-21f, 0.0f, 0x1.397406p-93f, 0.0f, 0x1.ad6fbap-115f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.066daap-93f, 0.0f, 0.0f,
     0x1.99c14ap-29f, 0.0f, 0.0f, 0x1.ba7972p-94f, 0x1.01ce48p-120f, 0x1.d000b2p-20f,
     0x1.8d301cp-38f, 0.0f, 0.0f, 0.0f, 0x1.3047a8p-119f, 0.0f, 0.0f, 0x1.8a0934p-28f,
     0x1.5a1252p-108f, 0x1.fbb5bap-69f, 0.0f, 0x1.ed81fcp-45f, 0.0f, 0x1.80795ap-9f,
     0x1.9c8fap-86f, 0.0f, 0x1.f197a8p-50f, 0x1.a9e84ep-5f, 0x1.7706e6p-108f,
     0x1.4bb9ccp-102f, 0.0f, 0.0f, 0x1.67cb94p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e5028p-124f, 0.0f, 0.0f, 0.0f, 0x1.1e5242p-22f, 0x1.7c0bb8p-104f,
     0x1.8e53dcp-25f, 0.0f, 0x1.eab1aap-75f, 0x1.c80a56p-120f, 0x1.8a9eeep-54f, 0.0f,
     0.0f, 0.0f, 0x1.105ce2p-13f, 0x1.1f9c68p-121f, 0.0f, 0x1.380f2ep-57f,
     0x1.268836p-3f, 0.0f, 0x1.54826p-78f, 0x1.e4ab72p-82f, 0x1.dc5326p-65f,
     0x1.1984b4p-52f, 0.0f, 0x1.b6609ap-117f, 0x1.ffbe7ap-63f, 0x1.8ffc06p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab0916p-93f, 0x1.0c28ep-75f, 0x1.3a4724p-3f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.417c4ap-38f, 0.0f, 0.0f, 0x1.a09544p-126f, 0.0f, 0.0f, 0.0f,
     0x1.4147d8p-126f, 0.0f, 0x1.6035bcp-6f, 0x1.18aa8cp-24f, 0.0f, 0x1.7732d8p-59f,
     0x1.8e856ap-75f, 0x1.25d8e4p-110f, 0x1.d7124ep-85f, 0.0f, 0.0f, 0x1.4ff7b2p-68f,
     0.0f, 0x1.4482a6p-102f, 0.0f, 0x1.20b65p-62f, 0x1.6e1ed4p-101f, 0x1.dea9e4p-125f,
     0x1.dcca44p-64f, 0x1.ebef26p-58f, 0.0f, 0x1.386414p-50f, 0x1.8e651ep-79f,
     0x1.07248ap-106f, 0.0f, 0x1.9bb48cp-52f, 0.0f, 0.0f, 0x1.ff232cp-122f, 0.0f,
     0x1.285e4ep-85f, 0x1.6d4c82p-80f, 0x1.46fd4ap-78f, 0.0f, 0.0f, 0x1.768a04p-96f,
     0x1.c4f7d4p-121f, 0x1.c1597cp-42f, 0x1.d8458ap-107f, 0.0f, 0.0f, 0.0f,
     0x1.642c0cp-105f, 0x1.2d9a4p-40f, 0.0f, 0x1.e880eap-51f, 0x1.901614p-73f,
     0x1.f066b6p-80f, 0.0f, 0.0f, 0x1.6cd6b2p-92f, 0x1.4ea8eep-85f, 0.0f,
     0x1.b3b77ep-116f, 0.0f, 0.0f, 0x1.72a1e8p-16f, 0x1.901616p-89f, 0x1.35bc8ep-13f,
     0x1.2959b6p-68f, 0x1.2a0946p-43f, 0.0f, 0x1.a109d4p-34f, 0x1.b041e4p-70f,
     0x1.2a0216p-90f, 0x1.892caep-39f, 0x1.792ae2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee898cp-44f, 0x1.641dd6p-44f, 0.0f, 0x1.d7f0fep-22f, 0.0f, 0x1.22292ep-30f,
     0.0f, 0.0f, 0.0f, 0x1.dd9416p-57f, 0.0f, 0.0f, 0x1.eae40cp-85f, 0.0f,
     0x1.923c4cp-115f, 0x1.44a236p-34f, 0.0f, 0.0f, 0x1.ed8226p-9f, 0.0f,
     0x1.b43596p-52f, 0x1.fe80d6p-103f, 0x1.b298c8p-33f, 0x1.399396p-90f,
     0x1.04561p-90f, 0.0f, 0x1.6ba12cp-36f, 0x1.8a3b28p-6f, 0x1.536eeep-2f, 0.0f,
     0.0f, 0x1.3c6facp-74f, 0x1.e9b008p-102f, 0x1.6987e8p-50f, 0x1.2fe5b8p-48f, 0.0f,
     0x1.d293eep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e43b6p-100f, 0.0f,
     0x1.9bd69cp-100f, 0.0f, 0x1.9cc3dep-126f, 0.0f, 0x1.31f944p-43f, 0.0f,
     0x1.fb2f32p-77f, 0x1.1a723p-104f, 0.0f, 0x1.8029a8p-76f, 0.0f, 0.0f,
     0x1.82c832p-20f, 0.0f, 0.0f, 0.0f, 0x1.eb5922p-35f, 0x1.f9738ep-93f,
     0x1.c7ba5cp-93f, 0.0f, 0.0f, 0.0f, 0x1.82f9f2p-82f, 0x1.7c3accp-78f,
     0x1.32e2ecp-5f, 0x1.78bf92p-121f, 0x1.e46116p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.96dde6p-24f, 0.0f, 0.0f, 0x1.1d25a4p-21f, 0x1.5accf2p-17f, 0x1.e4faap-16f,
     0.0f, 0x1.c8566ep-113f, 0x1.3887f4p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a7079p-119f, 0.0f, 0x1.637162p-28f, 0.0f, 0x1.c1dd1cp-101f, 0.0f,
     0x1.2b6eb8p-108f, 0x1.add66p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfdd68p-45f, 0.0f,
     0.0f, 0x1.c1f874p-12f, 0x1.a70a18p-94f, 0x1.404b62p-18f, 0x1.79cbc2p-51f, 0.0f,
     0x1.a9c93cp-63f, 0x1.0065p-98f, 0x1.2bddcep-124f, 0x1.ec15eap-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1b42b8p-45f, 0.0f, 0x1.592f94p-32f, 0x1.90c61ep-95f, 0.0f,
     0.0f, 0x1.185286p-41f, 0x1.e710ep-65f, 0x1.fa5afap-18f, 0x1.140c1ap-44f, 0.0f,
     0.0f, 0x1.9ed872p-28f, 0.0f, 0x1.e55b3p-91f, 0.0f, 0.0f, 0x1p0f, 0x1.da4e2cp-44f,
     0.0f, 0.0f, 0x1.54310ap-126f, 0x1.3bfc86p-113f, 0x1.dc3084p-3f, 0.0f, 0.0f, 0.0f,
     0x1.6f93acp-66f, 0.0f, 0x1.84d5fep-56f, 0.0f, 0.0f, 0x1.e7f06p-100f,
     0x1.f96a26p-45f, 0.0f, 0x1.cce714p-116f, 0.0f, 0x1.f2fd18p-37f, 0x1.8513ecp-52f,
     0.0f, 0x1.29e73p-37f, 0.0f, 0x1.1d47dep-2f, 0x1.1a5dcep-17f, 0x1.de020ep-2f,
     0x1.c720bp-66f, 0x1.7b874p-79f, 0x1.ccb944p-9f, 0x1.8c1688p-94f, 0.0f, 0.0f,
     0.0f, 0x1.69c356p-109f, 0x1.ec7052p-107f, 0x1.8c69p-21f, 0.0f, 0.0f, 0.0f,
     0x1.873242p-34f, 0.0f, 0x1.4dad2ap-73f, 0x1.ccc02p-98f, 0x1.8f8c76p-84f,
     0x1.eb6488p-126f, 0x1.eb5b88p-125f, 0x1.380adap-120f, 0x1.fd5368p-53f,
     0x1.a5316p-40f, 0x1.5ffc56p-15f, 0.0f, 0.0f, 0x1.822248p-85f, 0x1.8f949ap-40f,
     0.0f, 0.0f, 0x1.993c74p-38f, 0.0f, 0x1.7725aep-85f, 0.0f, 0.0f, 0x1.c6b374p-116f,
     0.0f, 0x1.0cfc1ap-39f, 0.0f, 0.0f, 0x1.2971f4p-18f, 0.0f, 0.0f, 0x1.89a56ep-79f,
     0x1.843b82p-11f, 0x1.643d5ep-88f, 0x1.7d05cp-67f, 0x1.470848p-81f, 0.0f,
     0x1.9d0ec2p-82f, 0x1.9d5d3cp-70f, 0x1.3eede2p-100f, 0.0f, 0x1.845ec2p-103f, 0.0f,
     0x1.3e9a76p-83f, 0.0f, 0x1.a98022p-15f, 0.0f, 0.0f, 0x1.0f6048p-119f, 0.0f,
     0x1.87416ep-48f, 0.0f, 0.0f, 0x1.023978p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2bcdcp-81f, 0.0f, 0x1.a67ff8p-113f, 0.0f, 0.0f, 0x1.f54decp-37f,
     0x1.ef84eep-125f, 0.0f, 0.0f, 0x1.a4d788p-19f, 0.0f, 0x1.1f911p-28f,
     0x1.9a61f4p-80f, 0.0f, 0x1.f5c8aap-82f, 0.0f, 0.0f, 0x1.862d86p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.164b26p-120f, 0.0f, 0x1.6f3a0ap-85f, 0x1.0c294p-58f,
     0x1.1e0a2p-118f, 0.0f, 0.0f, 0x1.32d07cp-15f, 0x1.45b294p-70f, 0x1.b6d0fap-81f,
     0.0f, 0x1.78819ap-31f, 0x1.cede5p-54f, 0.0f, 0x1.bd3468p-83f, 0x1.b50f4ep-15f,
     0.0f, 0.0f, 0x1.d6919ep-123f, 0.0f, 0.0f, 0x1.bee138p-116f, 0x1.059704p-87f,
     0x1.ecaa9p-113f, 0.0f, 0.0f, 0x1.5f1d18p-14f, 0x1.7ef2f6p-98f, 0x1.22880ap-16f,
     0x1.2448a2p-99f, 0x1.354e9ap-49f, 0x1.1e4adep-23f, 0x1.b772cep-85f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.80a694p-108f, 0x1.328ac6p-57f, 0.0f, 0x1.6f4edap-33f,
     0x1.78f782p-5f, 0.0f, 0x1.7a57dp-23f, 0.0f, 0x1.5e272ep-4f, 0x1.519982p-36f,
     0x1.7a78b2p-86f, 0.0f, 0.0f, 0x1.d867dp-120f, 0.0f, 0.0f, 0.0f, 0x1.6211f8p-30f,
     0x1.30a636p-87f, 0x1.81c738p-123f, 0.0f, 0x1.408b76p-121f, 0x1.5cbb54p-4f,
     0x1.776404p-124f, 0x1.0ebd9ep-118f, 0x1.7884f4p-45f, 0x1.b736e6p-66f, 0.0f, 0.0f,
     0x1.5dfba6p-109f, 0x1.fa0ba8p-49f, 0.0f, 0.0f, 0x1.8e0e52p-56f, 0.0f,
     0x1.c8232p-112f, 0.0f, 0.0f, 0x1.9823c2p-98f, 0.0f, 0x1.4404bep-84f,
     0x1.7c4438p-94f, 0x1.72d5e6p-114f, 0.0f, 0.0f, 0.0f, 0x1.b45b6cp-30f,
     0x1.6c90b6p-12f, 0.0f, 0x1.52ce64p-83f, 0.0f, 0x1.4396fap-114f, 0x1.f726b4p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93da86p-48f,
     0x1.83e8a6p-54f, 0x1.350e22p-91f, 0x1.b410dap-113f, 0x1.6bb9cap-80f,
     0x1.cec83ep-96f, 0.0f, 0x1.66c276p-48f, 0.0f, 0.0f, 0x1.1d0ae8p-110f,
     0x1.2bd946p-57f, 0.0f, 0x1.1a059ap-63f, 0.0f, 0x1.df0db2p-99f, 0x1.e5474ep-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36074ep-76f, 0x1.302154p-61f, 0x1.6b439ep-116f,
     0x1.17ac6cp-63f, 0.0f, 0.0f, 0x1.0e20fcp-95f, 0.0f, 0x1.796fe4p-66f,
     0x1.47eb3p-84f, 0.0f, 0.0f, 0.0f, 0x1.59af1cp-67f, 0.0f, 0x1.073fa6p-22f, 0.0f,
     0x1.6d88b8p-101f, 0.0f, 0.0f, 0x1.01613ep-34f, 0x1.75eed6p-57f, 0x1.aead16p-40f,
     0x1.4bfffap-119f, 0x1.b2bbbcp-51f, 0.0f, 0x1.30a6c8p-26f, 0.0f, 0.0f,
     0x1.687c9ep-79f, 0x1.86663p-101f, 0x1.7ea9cp-37f, 0x1.3cdf2cp-93f, 0.0f,
     0x1.f59eb2p-114f, 0.0f, 0.0f, 0x1.acb1b8p-55f, 0.0f, 0x1.a6d3bp-64f,
     0x1.45c0b2p-37f, 0.0f, 0.0f, 0.0f, 0x1.ed8f16p-96f, 0.0f, 0x1.4083p-15f, 0.0f,
     0x1.04ad86p-48f, 0x1.e7d092p-20f, 0x1.78113cp-72f, 0.0f, 0x1.dd2a78p-30f, 0.0f,
     0x1.16940ap-41f, 0.0f, 0x1.6608b4p-96f, 0.0f, 0x1.4dd05ep-8f, 0.0f, 0.0f, 0.0f,
     0x1.2f800cp-109f, 0.0f, 0x1.d00d74p-98f, 0x1.ea8c0ep-104f, 0x1.07e08p-18f,
     0x1.57cf2ap-111f, 0.0f, 0.0f, 0x1.ded9p-94f, 0x1.306fc6p-5f, 0x1.006fc4p-82f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.cb72e6p-76f, 0.0f, 0x1.6c0086p-57f,
     0x1.9d9facp-22f, 0.0f, 0.0f, 0.0f, 0x1.edfe2p-90f, 0x1.d9a3bap-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.43a664p-68f, 0x1.2fdebap-70f, 0x1.132f42p-111f,
     0x1.d3077cp-1f, 0x1.b8a134p-95f, 0x1.e9d512p-108f, 0x1.8e5f5p-91f,
     0x1.65db1cp-45f, 0.0f, 0x1.bd7238p-76f, 0x1.3e7108p-116f, 0x1.72774cp-11f,
     0x1.f11348p-22f, 0x1.34b6aap-89f, 0x1.c4325ep-18f, 0x1.100878p-114f,
     0x1.d52f8p-69f, 0.0f, 0x1.b892a2p-80f, 0x1.61b712p-27f, 0x1.6b8306p-98f,
     0x1.2b3f08p-21f, 0.0f, 0.0f, 0x1.4cb95p-36f, 0x1.598ab2p-104f, 0.0f,
     0x1.c026dp-96f, 0x1.4c44ccp-107f, 0x1.5b32ecp-110f, 0x1.f5677cp-40f, 0.0f, 0.0f,
     0x1.ac36e2p-60f, 0.0f, 0.0f, 0.0f, 0x1.efc728p-74f, 0.0f, 0.0f, 0.0f,
     0x1.5ca368p-3f, 0x1.e20756p-124f, 0.0f, 0x1.c248a2p-77f, 0x1.57a4bep-104f, 0.0f,
     0.0f, 0.0f, 0x1.b4d934p-32f, 0x1.403c68p-68f, 0x1.4f99eep-119f, 0.0f,
     0x1.82688p-4f, 0.0f, 0.0f, 0.0f, 0x1.7b9b0ap-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cece2p-39f, 0x1.2d4c7ap-24f, 0.0f, 0x1.4e8cbcp-123f, 0x1.0855d4p-89f, 0.0f,
     0x1.2aedd2p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90f36ep-55f, 0x1.bd8546p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d213d2p-61f, 0x1.e842b4p-52f, 0.0f, 0x1.fe65a6p-122f,
     0.0f, 0.0f, 0x1.970d44p-125f, 0.0f, 0.0f, 0x1.ce8a0ep-58f, 0x1.f039ccp-18f,
     0x1.3726b8p-66f, 0.0f, 0.0f, 0.0f, 0x1.268afap-25f, 0.0f, 0.0f, 0.0f,
     0x1.be8406p-96f, 0.0f, 0x1.679238p-74f, 0x1.b0fa2cp-124f, 0x1.ade29p-5f, 0.0f,
     0x1.e2260ep-78f, 0x1.bb66b2p-7f, 0x1.0b629ep-21f, 0.0f, 0x1.3f49eep-102f, 0.0f,
     0x1.829838p-125f, 0.0f, 0x1.6905f8p-36f, 0x1.12c21ap-43f, 0x1.409edep-55f, 0.0f,
     0.0f, 0x1.4703dcp-49f, 0x1.76203p-20f, 0.0f, 0.0f, 0x1.0431f4p-41f, 0.0f, 0.0f,
     0x1.bccf18p-124f, 0x1.f23f1cp-13f, 0x1.8a9a5cp-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.df2b6ep-107f, 0x1.7c1fc2p-110f, 0x1.ba761ep-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e4d372p-87f, 0.0f, 0x1.4c2c92p-66f, 0x1.bf5fd8p-96f, 0x1.9a352ep-120f,
     0x1.c7478ep-20f, 0x1.1cdaf4p-81f, 0x1.65014ap-99f, 0x1.41f27p-70f, 0.0f, 0.0f,
     0.0f, 0x1.b83f0cp-46f, 0.0f, 0.0f, 0x1.38bc62p-121f, 0.0f, 0.0f, 0x1.e62f62p-59f,
     0x1.fd577ep-58f, 0x1.464f4p-48f, 0x1.0a4af8p-3f, 0x1.ad975p-35f, 0x1.549fb4p-92f,
     0.0f, 0x1.316b62p-65f, 0x1.cebf62p-72f, 0.0f, 0x1.eb423cp-126f, 0x1.cb9c9ep-40f,
     0.0f, 0.0f, 0x1.fe251ep-11f, 0.0f, 0x1.56ee22p-67f, 0.0f, 0.0f, 0x1.73644p-13f,
     0x1.fb6e4p-114f, 0x1.952abep-38f, 0x1.93c8f6p-48f, 0x1.139c8cp-110f,
     0x1.79ed88p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7043eep-3f, 0.0f,
     0x1.5784aap-44f, 0.0f, 0x1.c000a4p-18f, 0.0f, 0.0f, 0x1.aafd22p-44f, 0.0f,
     0x1.5bc216p-89f, 0.0f, 0.0f, 0x1.9a2be8p-43f, 0x1.0956a8p-41f, 0x1.324d34p-73f,
     0.0f, 0x1.69e6b2p-52f, 0x1.410a6cp-114f, 0x1.e5e34p-105f, 0.0f, 0x1.7da2ap-13f,
     0x1.4f5acep-45f, 0.0f, 0x1.116f3cp-72f, 0.0f, 0.0f, 0x1.d5ab32p-46f, 0.0f,
     0x1.dbb9fcp-110f, 0x1.dfb6d6p-1f, 0.0f, 0.0f, 0.0f, 0x1.11f7c6p-62f,
     0x1.566a92p-81f, 0x1.10c4cap-94f, 0.0f, 0.0f, 0x1.47eb72p-31f, 0.0f,
     0x1.003906p-77f, 0x1.f83558p-36f, 0.0f, 0.0f, 0.0f, 0x1.76970ep-15f,
     0x1.513bd2p-40f, 0.0f, 0.0f, 0x1.6614bep-15f, 0.0f, 0x1.cf6228p-121f, 0.0f,
     0x1.f11adcp-93f, 0x1.63fe5ap-53f, 0x1.79b14ap-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a21416p-52f, 0x1.d5f23cp-45f, 0x1.5543f4p-110f, 0x1.cae164p-113f,
     0x1.b9591p-23f, 0.0f, 0x1.fc8498p-61f, 0.0f, 0x1.e24dc6p-126f, 0.0f, 0.0f,
     0x1.20bfb8p-64f, 0x1.63651ep-89f, 0.0f, 0x1.7bdb9p-13f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_exp2f1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_exp2f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2f1_u10purecfma bench acc %a\n", global_bench_acc);
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
