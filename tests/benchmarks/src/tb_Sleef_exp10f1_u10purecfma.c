/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10f1_u10purecfma.c --function \
 *     Sleef_exp10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.5e28bap-21f, 0x1.302b7p-87f, 0x1.4078ap-41f, 0.0f, 0.0f, 0x1.cdde1ap-16f,
     0.0f, 0x1.367c7cp-32f, 0.0f, 0.0f, 0x1.fa43f2p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c3562p-89f, 0x1.975134p-112f, 0.0f, 0x1.01c0ccp-122f, 0.0f, 0x1.38d29ep-62f,
     0.0f, 0.0f, 0.0f, 0x1.1f35ap-63f, 0x1.c9a608p-121f, 0.0f, 0x1.1bc0a2p-111f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52842p-61f, 0x1.6b20aap-122f, 0.0f, 0.0f, 0.0f,
     0x1.0b13b8p-28f, 0.0f, 0.0f, 0x1.19c994p-51f, 0x1.486a48p-54f, 0x1.6ece9ep-75f,
     0.0f, 0x1.0bf21ep-47f, 0.0f, 0.0f, 0x1.c82842p-38f, 0.0f, 0x1.dc77fep-103f, 0.0f,
     0.0f, 0x1.332d02p-65f, 0x1.71066ap-27f, 0x1.f43f78p-58f, 0.0f, 0x1.f875eep-12f,
     0.0f, 0x1.b88128p-107f, 0x1.88fc06p-83f, 0x1.461d3cp-108f, 0x1.b5aa5ap-105f,
     0x1.644d08p-126f, 0x1.cd48f2p-82f, 0x1.ef148p-117f, 0.0f, 0x1.31ddd4p-95f, 0.0f,
     0.0f, 0x1.d50702p-54f, 0x1.65fa96p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b0ed8p-77f,
     0x1.d8c59p-122f, 0x1.7ba0bcp-110f, 0x1.d6de6p-30f, 0.0f, 0.0f, 0x1.44708cp-7f,
     0x1.55a6ccp-105f, 0.0f, 0.0f, 0x1.eddec2p-9f, 0x1.71f9ap-18f, 0x1.a03adp-23f,
     0x1.2338e8p-115f, 0.0f, 0.0f, 0x1.82952ep-11f, 0x1.a17282p-111f,
     0x1.f8f3a8p-107f, 0.0f, 0.0f, 0x1.31ccd8p-30f, 0.0f, 0.0f, 0x1.b06516p-34f, 0.0f,
     0x1.8edd8ep-41f, 0x1.69a948p-62f, 0.0f, 0.0f, 0.0f, 0x1.ef0ef8p-81f,
     0x1.2012ap-119f, 0.0f, 0x1.601976p-5f, 0.0f, 0x1.db9822p-49f, 0.0f, 0.0f,
     0x1.e04d62p-118f, 0x1.992e52p-22f, 0x1.af6612p-94f, 0x1.24915cp-51f, 0.0f, 0.0f,
     0.0f, 0x1.aa01eap-15f, 0x1.b57ab6p-43f, 0.0f, 0x1.2fa512p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e05c76p-102f, 0x1.5c64dap-88f, 0x1.d5b296p-49f, 0x1.67b564p-37f,
     0.0f, 0x1.b9a79ep-45f, 0.0f, 0.0f, 0x1.8bb02p-125f, 0x1.ad474cp-113f,
     0x1.899e8ap-58f, 0.0f, 0x1.20f06p-47f, 0.0f, 0.0f, 0x1.c4b00ap-36f, 0.0f,
     0x1.2fe176p-114f, 0.0f, 0.0f, 0x1.ab4116p-52f, 0.0f, 0x1.7e7e22p-54f,
     0x1.0d34ecp-61f, 0x1.80e038p-102f, 0x1.421c1p-123f, 0.0f, 0.0f, 0x1.4cdebep-112f,
     0x1.8de1b8p-9f, 0.0f, 0.0f, 0x1.afb9f8p-109f, 0x1.cf8facp-41f, 0.0f,
     0x1.2b2d86p-22f, 0x1.5275b8p-21f, 0x1.01d554p-105f, 0.0f, 0.0f, 0x1.1a695ap-77f,
     0x1.94d954p-64f, 0x1.029e92p-47f, 0x1.8ddc54p-51f, 0.0f, 0x1.0419d6p-45f,
     0x1.c3613ap-22f, 0x1.f57c64p-118f, 0x1.32df4ep-83f, 0.0f, 0.0f, 0.0f,
     0x1.e007a8p-84f, 0.0f, 0x1.33de12p-81f, 0.0f, 0.0f, 0.0f, 0x1.6622d2p-93f, 0.0f,
     0x1.69fb1p-49f, 0x1.ba9014p-39f, 0x1.abaec4p-60f, 0x1.3fa71cp-28f, 0.0f, 0.0f,
     0.0f, 0x1.4acb34p-8f, 0x1.d8505ap-108f, 0x1.149538p-31f, 0.0f, 0x1.6e38aep-91f,
     0x1.67a0f2p-73f, 0x1.74d47cp-70f, 0.0f, 0x1.561732p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2c1ccp-122f, 0x1.0214b2p-85f, 0x1.9311dap-87f, 0x1.4c4fccp-86f,
     0x1.7d4e86p-23f, 0x1.0879dcp-32f, 0.0f, 0x1.462622p-87f, 0x1.7215d6p-116f, 0.0f,
     0.0f, 0.0f, 0x1.dc913p-38f, 0x1.7d001ap-19f, 0.0f, 0x1.7123bp-52f,
     0x1.3e3968p-70f, 0x1.29272cp-40f, 0x1.aeec44p-63f, 0x1.61c606p-10f, 0.0f, 0.0f,
     0.0f, 0x1.98369ep-23f, 0x1.d8b682p-79f, 0.0f, 0x1.b48004p-24f, 0x1.db97ap-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.28fa5ap-101f, 0.0f, 0x1.e64864p-62f, 0.0f, 0.0f,
     0x1.8d1068p-62f, 0x1.0f71b4p-84f, 0x1.244134p-53f, 0x1.2fd886p-107f, 0.0f, 0.0f,
     0x1.3e63dp-115f, 0x1.e4e868p-99f, 0x1.8fa84ep-19f, 0.0f, 0x1.cbc832p-68f, 0.0f,
     0x1.88a364p-78f, 0.0f, 0x1.a95a0ep-47f, 0x1.41dde4p-1f, 0.0f, 0.0f,
     0x1.20ea66p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2a7cdp-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0b36e8p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cd802p-92f, 0.0f, 0.0f,
     0x1.54871p-80f, 0x1.e01d2ep-9f, 0.0f, 0x1.a07d6p-113f, 0x1.a1a99ap-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3e4ecp-52f, 0x1.309f0cp-36f, 0x1.0aacd4p-81f,
     0.0f, 0x1.8ec5ccp-70f, 0.0f, 0.0f, 0x1.d22d94p-101f, 0x1.a48688p-86f,
     0x1.3107dap-3f, 0x1.85731cp-120f, 0x1.8e9bdap-54f, 0x1.86b936p-113f,
     0x1.57dfep-117f, 0.0f, 0x1.77e7cp-56f, 0.0f, 0x1.cce616p-57f, 0x1.5efc02p-38f,
     0x1.bd6674p-9f, 0x1.0fd4cap-55f, 0x1.393378p-34f, 0.0f, 0.0f, 0x1.c38964p-101f,
     0.0f, 0.0f, 0x1.f874ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.516e88p-67f,
     0x1.d91b5cp-10f, 0.0f, 0.0f, 0x1.3d6c9ep-7f, 0.0f, 0x1.e63706p-125f, 0.0f,
     0x1.0c9f78p-68f, 0x1.60c92ep-55f, 0.0f, 0x1.7ac0e8p-53f, 0x1.17b5ep-54f, 0.0f,
     0x1.041f34p-91f, 0.0f, 0.0f, 0x1.fc7c86p-104f, 0x1.57b6fp-7f, 0.0f, 0.0f, 0.0f,
     0x1.c7f7cep-37f, 0.0f, 0x1.f1039ap-109f, 0.0f, 0x1.fdb372p-48f, 0x1.2381d6p-106f,
     0.0f, 0x1.f5ba9ap-8f, 0.0f, 0.0f, 0x1.905544p-91f, 0.0f, 0x1.b50ec6p-102f, 0.0f,
     0x1.bd195ep-50f, 0x1.a52d68p-55f, 0.0f, 0.0f, 0x1.09dd8ep-120f, 0.0f,
     0x1.cf3fb8p-79f, 0.0f, 0x1.d6418ap-6f, 0x1.dad152p-85f, 0x1.784296p-45f, 0.0f,
     0x1.a58406p-19f, 0x1.3fbfa8p-101f, 0.0f, 0.0f, 0x1.c19c24p-24f, 0x1.3a0878p-49f,
     0x1.daa8dap-52f, 0x1.ec185p-56f, 0x1.3e2e96p-87f, 0x1.f78ac4p-94f,
     0x1.1c709ap-30f, 0x1.47cb1p-96f, 0.0f, 0.0f, 0.0f, 0x1.e2b664p-92f,
     0x1.eb34f4p-102f, 0.0f, 0.0f, 0x1.a2857p-71f, 0.0f, 0x1.fcb038p-62f,
     0x1.a49098p-125f, 0x1.1ae91ep-91f, 0.0f, 0x1.b19996p-66f, 0x1.877188p-41f, 0.0f,
     0x1.1ddf9cp-85f, 0.0f, 0x1.98a45ap-59f, 0.0f, 0.0f, 0.0f, 0x1.a99bd4p-92f,
     0x1.8dd76ep-42f, 0.0f, 0x1.76b948p-121f, 0x1.733178p-45f, 0x1.024e6ap-117f, 0.0f,
     0.0f, 0x1.390156p-86f, 0.0f, 0x1.c8e50ep-54f, 0.0f, 0.0f, 0.0f, 0x1.b61444p-45f,
     0x1.0947bep-12f, 0x1.17301ap-6f, 0x1.576354p-35f, 0.0f, 0x1.66dd6ep-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.442f0ep-36f, 0x1.9bc02cp-9f, 0x1.b867fp-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cff6fap-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.afab16p-114f, 0.0f, 0x1.5dbf56p-21f, 0x1.b68b8cp-116f, 0x1.2976f2p-50f,
     0x1.c6eb04p-3f, 0x1.64c0e2p-86f, 0.0f, 0.0f, 0x1.cb39ap-14f, 0.0f, 0.0f, 0.0f,
     0x1.d04408p-67f, 0.0f, 0.0f, 0x1.555334p-75f, 0.0f, 0.0f, 0.0f, 0x1.e55a0cp-47f,
     0x1.fc074cp-123f, 0x1.1d6a5ep-9f, 0x1.08c12cp-3f, 0.0f, 0.0f, 0x1.dbbc7p-32f,
     0x1.7fa69p-86f, 0x1.82867cp-124f, 0x1.ea90b4p-61f, 0.0f, 0.0f, 0.0f,
     0x1.6c4a06p-91f, 0x1.f5d502p-112f, 0.0f, 0.0f, 0.0f, 0x1.2f917cp-97f,
     0x1.6ee67cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf210ep-65f, 0.0f,
     0x1.8e52a2p-20f, 0.0f, 0x1.ae9774p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08ac38p-8f, 0x1.0cc4bcp-71f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.caa59cp-11f, 0.0f,
     0x1.c8a3c6p-12f, 0.0f, 0.0f, 0x1.c92656p-100f, 0x1.85d16cp-45f, 0.0f,
     0x1.d538c2p-24f, 0.0f, 0.0f, 0x1.8763e8p-46f, 0x1.cc72aap-80f, 0x1.26c44ep-19f,
     0.0f, 0.0f, 0x1.c639cp-109f, 0x1.9223fap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ad328ep-42f, 0x1.45f8eap-77f, 0x1.6dc298p-58f, 0x1.805d0cp-19f,
     0x1.8bd336p-49f, 0x1.572dd4p-95f, 0x1.34e7eap-98f, 0x1.e1b218p-41f, 0.0f,
     0x1.82a32p-52f, 0x1.992e52p-124f, 0.0f, 0.0f, 0x1.6835aap-56f, 0.0f,
     0x1.fcfeaep-63f, 0.0f, 0x1.411344p-72f, 0x1.6dca94p-74f, 0x1.d36e68p-84f, 0.0f,
     0.0f, 0x1.c08808p-101f, 0x1.aa17aep-126f, 0.0f, 0x1.e07752p-96f, 0x1.8ebc46p-76f,
     0.0f, 0x1.38d104p-85f, 0.0f, 0.0f, 0x1.d02dcap-28f, 0x1.1808fcp-11f,
     0x1.89fb9p-60f, 0x1.9bfa96p-29f, 0x1.6c542p-40f, 0.0f, 0.0f, 0x1.9c1ea8p-55f,
     0.0f, 0.0f, 0x1.11434p-10f, 0x1.bc22p-66f, 0.0f, 0x1.71c2bap-30f,
     0x1.a845aap-60f, 0x1.a8152ap-54f, 0x1.ad9008p-33f, 0.0f, 0x1.3e5846p-4f, 0.0f,
     0x1.b4407ep-29f, 0.0f, 0x1.a50262p-4f, 0x1.4485fcp-51f, 0x1.0e91f4p-67f,
     0x1.abc6c4p-61f, 0x1.e61df2p-74f, 0x1.e3af2p-84f, 0.0f, 0.0f, 0x1.420d18p-120f,
     0x1.9bea8cp-103f, 0x1.6d3c8ap-19f, 0.0f, 0x1.faefb6p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.484238p-4f, 0.0f, 0x1.df2414p-2f, 0.0f, 0.0f,
     0x1.99c8fcp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.804716p-51f,
     0x1.11220cp-111f, 0x1.23576cp-53f, 0.0f, 0x1.7d93cp-52f, 0.0f, 0x1.641a02p-87f,
     0.0f, 0.0f, 0.0f, 0x1.131c74p-103f, 0x1.e2b8e8p-75f, 0.0f, 0.0f, 0x1.fc23c2p-80f,
     0.0f, 0x1.b4eeecp-42f, 0.0f, 0x1.81fe76p-77f, 0.0f, 0x1.4f95d8p-100f,
     0x1.dd84cp-104f, 0.0f, 0.0f, 0x1.1a2df2p-28f, 0.0f, 0.0f, 0x1.414eb8p-87f,
     0x1.2d832ap-123f, 0x1.932e4ep-95f, 0x1.9f3fd6p-87f, 0.0f, 0x1.e3759ap-3f, 0.0f,
     0.0f, 0.0f, 0x1.e5134ep-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5779cp-120f, 0.0f,
     0x1.ce531ep-56f, 0x1.5d77a6p-125f, 0.0f, 0x1.06d564p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7a184p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3f1ee4p-60f, 0.0f, 0.0f, 0.0f, 0x1.86490cp-94f, 0x1.1160c6p-24f, 0.0f,
     0x1.5e86cep-101f, 0.0f, 0x1.e50b92p-29f, 0.0f, 0x1.b42184p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.17b2c4p-72f, 0x1.006962p-35f, 0.0f, 0.0f, 0x1.c683dp-57f, 0.0f,
     0x1.0075aep-2f, 0x1.a5144ap-105f, 0x1.f789d6p-3f, 0.0f, 0.0f, 0x1.4a2566p-94f,
     0.0f, 0x1.df9c4ep-35f, 0x1.d4fa62p-45f, 0x1.bca0aep-12f, 0.0f, 0x1.abe036p-37f,
     0x1.5eb242p-1f, 0.0f, 0x1.37fe46p-25f, 0x1.86319ap-113f, 0x1.70ef98p-21f, 0.0f,
     0.0f, 0x1.dc1f0ap-34f, 0.0f, 0.0f, 0x1.af40d2p-16f, 0x1.3861c8p-118f, 0.0f, 0.0f,
     0x1.33264ep-98f, 0.0f, 0x1.f81406p-38f, 0x1.056542p-5f, 0x1.7413ap-54f, 0.0f,
     0x1.56f85ap-119f, 0.0f, 0.0f, 0x1.b0c64cp-50f, 0x1.0688a8p-82f, 0.0f,
     0x1.b1778cp-78f, 0.0f, 0x1.7d9eaap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56d1cep-42f,
     0x1.bd089cp-46f, 0.0f, 0x1.a9d092p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26ec5ep-123f, 0x1.54cb3ap-20f, 0.0f, 0x1.e6d1f4p-114f, 0.0f, 0.0f,
     0x1.fa526ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f2928p-54f, 0.0f,
     0x1.64f4d8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d92a54p-39f, 0x1.82d92p-64f,
     0x1.2e2fc2p-125f, 0x1.5f8904p-118f, 0.0f, 0x1.b678acp-81f, 0x1.80c74ep-110f,
     0x1.b7fabap-28f, 0.0f, 0x1.dff60ep-32f, 0x1.297758p-110f, 0x1.6c4b6ap-65f,
     0x1.71d66cp-15f, 0x1.07eeecp-32f, 0x1.8cbd9cp-125f, 0x1.cb890ep-3f, 0.0f,
     0x1.5e1f1p-87f, 0x1.2baf5ep-97f, 0.0f, 0x1.720bdep-120f, 0.0f, 0.0f, 0.0f,
     0x1.62fb4cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d43cp-13f, 0x1.d4784ap-66f,
     0.0f, 0x1.44047ap-95f, 0x1.9ed544p-119f, 0.0f, 0x1.08ce36p-112f, 0x1.b11d6ap-93f,
     0.0f, 0x1.24c4d4p-84f, 0x1.8731ccp-100f, 0x1.cbb7b2p-41f, 0.0f, 0.0f,
     0x1.49d8fcp-58f, 0.0f, 0.0f, 0x1.3a5b04p-49f, 0x1.0e211ap-15f, 0x1.fb91a4p-73f,
     0x1.d7bb9p-39f, 0x1.189c1cp-13f, 0x1.3bd27ap-8f, 0x1.2707dap-116f, 0.0f,
     0x1.0aa12ep-15f, 0.0f, 0.0f, 0x1.59f5eep-32f, 0.0f, 0x1.43f1b6p-46f,
     0x1.08cc54p-5f, 0.0f, 0x1.2ad14ap-64f, 0x1.800746p-23f, 0x1.73f428p-28f,
     0x1.6576e2p-79f, 0.0f, 0x1.69afe6p-10f, 0.0f, 0x1.e5c52ep-50f, 0.0f,
     0x1.691734p-98f, 0x1.042a52p-5f, 0x1.933364p-66f, 0x1.a14b28p-1f,
     0x1.2ec71cp-100f, 0.0f, 0x1.525c8ap-84f, 0x1.57a362p-36f, 0x1.fd206ep-77f,
     0x1.0e9dbap-106f, 0.0f, 0.0f, 0x1.d78228p-109f, 0x1.fe0414p-59f,
     0x1.96e694p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.85c1e4p-121f, 0.0f, 0x1.1b9d6ep-59f, 0.0f, 0x1.c93dacp-87f, 0.0f, 0.0f,
     0x1.190b62p-92f, 0.0f, 0x1.5616d6p-71f, 0x1.076b46p-71f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.78f53ep-112f, 0.0f, 0x1.aa0a2ep-9f, 0x1.95cc4p-38f,
     0.0f, 0.0f, 0.0f, 0x1.7e21bep-120f, 0.0f, 0x1.ca4fbp-120f, 0.0f, 0.0f, 0.0f,
     0x1.73db06p-19f, 0.0f, 0.0f, 0.0f, 0x1.9d468ep-74f, 0x1.38657ap-3f, 0.0f, 0.0f,
     0.0f, 0x1.0bc16p-34f, 0.0f, 0.0f, 0x1.0c0e0cp-16f, 0.0f, 0.0f, 0.0f,
     0x1.9e5ac6p-30f, 0.0f, 0x1.f348e4p-13f, 0x1.89c36ap-38f, 0.0f, 0.0f,
     0x1.707efcp-26f, 0.0f, 0.0f, 0x1.bbe7acp-124f, 0x1.66d72cp-58f, 0.0f,
     0x1.dca5dap-16f, 0x1.ab50f8p-45f, 0x1.e495c2p-80f, 0x1.25e016p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cf23ap-81f, 0x1.4627a2p-29f, 0x1.97f6ecp-126f, 0.0f,
     0x1.f3fb2p-92f, 0.0f, 0x1.89844p-98f, 0x1.50ab98p-44f, 0.0f, 0x1.afe512p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f2146p-83f, 0.0f, 0.0f, 0x1.d29764p-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79fe2p-122f, 0x1.cbef3p-27f,
     0x1.8abbdap-8f, 0.0f, 0x1.b0794ep-102f, 0x1.00a10cp-21f, 0x1.1268c4p-108f,
     0x1.f8878ap-8f, 0x1.7b563ap-99f, 0.0f, 0.0f, 0x1.f02b78p-20f, 0x1.e1d8b8p-73f,
     0x1.c47e8ap-110f, 0.0f, 0x1.90b948p-88f, 0.0f, 0.0f, 0x1.51bb24p-26f, 0.0f,
     0x1.f49828p-25f, 0x1.63e314p-2f, 0.0f, 0x1.d6204cp-61f, 0.0f
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
            tmp1 = Sleef_exp10f1_u10purecfma(tmp0);
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
    printf("Sleef_exp10f1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
