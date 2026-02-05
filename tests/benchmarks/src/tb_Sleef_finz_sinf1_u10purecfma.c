/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf1_u10purecfma.c --function \
 *     Sleef_finz_sinf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.58fcbep-90f, 0x1.717022p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e7b5p-108f, 0x1.a345dap-120f, 0.0f, 0.0f, 0x1.a740d2p-112f, 0.0f, 0.0f, 0.0f,
     0x1.504612p-24f, 0x1.02c678p-22f, 0.0f, 0x1.bf2ca4p-48f, 0.0f, 0.0f, 0.0f,
     0x1.f0aba4p-13f, 0x1.95bb24p-118f, 0.0f, 0.0f, 0.0f, 0x1.ef879p-1f,
     0x1.098c0cp-102f, 0.0f, 0.0f, 0x1.0348f4p-81f, 0.0f, 0x1.91ce48p-72f, 0.0f,
     0x1.86e642p-2f, 0x1.a56de8p-122f, 0x1.0065b6p-108f, 0x1.6b64aap-29f,
     0x1.bdd908p-86f, 0x1.ec5ebp-99f, 0.0f, 0.0f, 0x1.da3e92p-17f, 0.0f, 0.0f,
     0x1.5f3c0ep-48f, 0.0f, 0x1.f061ecp-14f, 0.0f, 0x1.637896p-24f, 0x1.62b1b8p-6f,
     0.0f, 0.0f, 0x1.4138e2p-25f, 0.0f, 0x1.bd655ep-109f, 0x1.751b16p-107f,
     0x1.c5f362p-42f, 0x1.26cb84p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.920c02p-78f,
     0x1.ec3564p-43f, 0x1.088142p-87f, 0.0f, 0x1.de3ca4p-73f, 0.0f, 0x1.e95e9p-82f,
     0.0f, 0.0f, 0.0f, 0x1.4e10ep-79f, 0.0f, 0.0f, 0.0f, 0x1.360df2p-35f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d81c8p-9f, 0x1.4aa1f6p-65f, 0x1.103694p-11f,
     0x1.9b3d2cp-28f, 0x1.501f52p-16f, 0x1.e15084p-11f, 0.0f, 0.0f, 0x1.4d33d2p-72f,
     0.0f, 0x1.265d78p-26f, 0x1.00d21p-32f, 0.0f, 0.0f, 0.0f, 0x1.a1795cp-44f, 0.0f,
     0.0f, 0.0f, 0x1.94fbcap-30f, 0.0f, 0x1.f41a3ep-26f, 0x1.548ef8p-88f, 0.0f, 0.0f,
     0x1.f76334p-18f, 0.0f, 0.0f, 0.0f, 0x1.2ca9ep-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b0c84ep-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ed06ep-122f, 0.0f, 0.0f,
     0.0f, 0x1.44901p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f8f0cp-74f,
     0x1.fdb39p-37f, 0.0f, 0x1.a97e3cp-37f, 0x1.0842d2p-97f, 0x1.00682cp-20f, 0.0f,
     0x1.e9fffep-63f, 0x1.adf134p-107f, 0x1.08cd4ep-26f, 0x1.0c8be8p-2f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.54e218p-29f, 0x1.60705p-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.482e68p-98f, 0x1.da9aaap-47f, 0x1.b51258p-104f, 0.0f, 0x1.5bc1dep-8f,
     0x1.6cf81ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.594ff2p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.50823ap-30f, 0.0f, 0x1.869a18p-93f, 0.0f, 0.0f, 0.0f, 0x1.6a2a4ap-22f,
     0.0f, 0.0f, 0x1.ee49aep-18f, 0.0f, 0.0f, 0x1.a5fb6ap-7f, 0x1.6d5a0ap-88f, 0.0f,
     0x1.840852p-114f, 0.0f, 0x1.8b24aep-118f, 0x1.c02cc4p-28f, 0x1.63ed5ap-70f, 0.0f,
     0.0f, 0x1.283b38p-40f, 0x1.016ce8p-71f, 0.0f, 0.0f, 0x1.be8a0cp-59f,
     0x1.6f4c16p-83f, 0.0f, 0.0f, 0x1.18bfa2p-62f, 0.0f, 0.0f, 0.0f, 0x1.57951ap-83f,
     0.0f, 0.0f, 0x1.f7968ep-93f, 0x1.19bbdcp-122f, 0.0f, 0x1.0ce306p-66f, 0.0f, 0.0f,
     0x1.14b7a6p-3f, 0.0f, 0x1.cd335ap-15f, 0.0f, 0.0f, 0.0f, 0x1.97473cp-40f,
     0x1.44c28ep-17f, 0x1.a8a62ep-119f, 0.0f, 0.0f, 0.0f, 0x1.0ade84p-74f,
     0x1.b4daacp-49f, 0.0f, 0x1.4b4ba4p-49f, 0.0f, 0.0f, 0x1.2d1128p-34f, 0.0f, 0.0f,
     0x1.d6d1eep-50f, 0.0f, 0.0f, 0x1.7d1362p-19f, 0.0f, 0x1.95459ap-88f, 0.0f, 0.0f,
     0x1.f0ffe6p-2f, 0x1.f536f2p-26f, 0x1.edb326p-120f, 0.0f, 0x1.a3e1a2p-48f,
     0x1.064918p-71f, 0x1.66eabp-117f, 0x1.54bde2p-90f, 0x1.e78038p-49f,
     0x1.ff9834p-110f, 0x1.8b01cap-35f, 0.0f, 0x1.f430ccp-91f, 0x1.b417ap-77f, 0.0f,
     0.0f, 0x1.15aee4p-124f, 0x1.c894fcp-53f, 0x1.4d45b8p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1e6f56p-99f, 0.0f, 0.0f, 0.0f, 0x1.34cbf4p-38f, 0.0f, 0x1.8e0e16p-55f,
     0x1.b1574ap-101f, 0.0f, 0x1.8b7c06p-33f, 0x1.0c1df4p-31f, 0.0f, 0.0f,
     0x1.1b8fc8p-10f, 0.0f, 0x1.7a2fep-117f, 0x1.6bc48ap-16f, 0.0f, 0.0f,
     0x1.cca7c8p-7f, 0.0f, 0.0f, 0.0f, 0x1.6cdb16p-109f, 0.0f, 0x1.42cb5ep-107f,
     0x1.2081b4p-36f, 0x1.406d9cp-22f, 0.0f, 0x1.ba6d94p-50f, 0x1.ea578ap-36f,
     0x1.397a9ap-10f, 0x1.7aa97p-101f, 0x1.e39178p-1f, 0.0f, 0.0f, 0x1.de543cp-16f,
     0x1.ebd588p-47f, 0x1.d7a11p-93f, 0.0f, 0.0f, 0x1.c9267ap-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.23584cp-91f, 0.0f, 0.0f, 0x1.d1e242p-117f, 0.0f, 0.0f,
     0x1.6b265ep-24f, 0x1.4837eep-85f, 0.0f, 0x1.20cd5ep-65f, 0.0f, 0x1.e8c5cp-55f,
     0.0f, 0x1.dced38p-15f, 0x1.65d706p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f31a4p-29f,
     0x1.6e019cp-62f, 0x1.aac214p-29f, 0x1.f1238ep-64f, 0.0f, 0x1.c6f098p-84f,
     0x1.28ac54p-101f, 0.0f, 0x1.375b5ap-58f, 0.0f, 0x1.73b1aap-49f, 0x1.8dc328p-84f,
     0.0f, 0.0f, 0x1.1e7f16p-21f, 0x1.f9ecdap-4f, 0.0f, 0x1.15f6f2p-1f, 0.0f, 0.0f,
     0x1.ab3034p-74f, 0.0f, 0.0f, 0x1.fcf43ap-32f, 0x1.38d124p-53f, 0x1.dce1b6p-8f,
     0.0f, 0x1.82e3fap-18f, 0x1.b2a54ap-80f, 0.0f, 0x1.ec595ap-2f, 0x1.57d3bcp-99f,
     0x1.a0bf46p-44f, 0x1.526176p-77f, 0x1.2658eep-23f, 0x1.97577cp-103f,
     0x1.5ae61p-115f, 0.0f, 0x1.c1c742p-86f, 0x1.e19022p-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05717cp-64f, 0.0f, 0x1.83578ap-44f, 0.0f, 0x1.721b68p-65f, 0x1.5c769cp-31f,
     0.0f, 0.0f, 0x1.60c59ap-34f, 0x1.674a06p-81f, 0.0f, 0x1.f23d56p-117f,
     0x1.52472ep-3f, 0.0f, 0x1.88cf1cp-75f, 0.0f, 0x1.a2893p-87f, 0x1.2e2894p-102f,
     0.0f, 0.0f, 0.0f, 0x1.b491aap-24f, 0.0f, 0.0f, 0x1.72e106p-41f, 0.0f,
     0x1.dd90c4p-121f, 0.0f, 0x1.5e8e08p-14f, 0x1.ac9358p-110f, 0x1.ba6c4ep-87f,
     0x1.8ad512p-105f, 0.0f, 0x1.1acc5p-119f, 0x1.71fab2p-62f, 0x1.519ec4p-59f, 0.0f,
     0x1.0d0adep-66f, 0x1.be8164p-62f, 0.0f, 0.0f, 0.0f, 0x1.590efep-96f, 0.0f, 0.0f,
     0x1.068506p-43f, 0.0f, 0.0f, 0.0f, 0x1.e14b98p-112f, 0.0f, 0x1.15309ap-112f,
     0x1.08d85ep-43f, 0x1.f9a85p-41f, 0x1.e2e37cp-33f, 0.0f, 0x1.d0ec86p-47f, 0.0f,
     0x1.21099p-124f, 0.0f, 0x1.56f7f4p-67f, 0.0f, 0.0f, 0x1.d96a52p-92f,
     0x1.ffcc96p-37f, 0.0f, 0x1.e79248p-113f, 0x1.fb0fcp-27f, 0.0f, 0x1.c734eep-47f,
     0.0f, 0x1.6ee2f2p-53f, 0.0f, 0.0f, 0x1.b79e9cp-94f, 0x1.51975p-56f, 0.0f, 0.0f,
     0x1.685264p-7f, 0.0f, 0x1.6ac54cp-33f, 0.0f, 0x1.ad1b02p-23f, 0.0f,
     0x1.ca719p-114f, 0x1.984902p-104f, 0.0f, 0.0f, 0.0f, 0x1.4d4fd6p-102f,
     0x1.1a8e78p-11f, 0.0f, 0x1.fe181ap-37f, 0x1.52d1b6p-46f, 0x1.ad485ap-45f,
     0x1.e7b5ap-14f, 0x1.a3e534p-37f, 0x1.4e3a8p-75f, 0x1.3a967ap-37f, 0.0f,
     0x1.e5183ep-118f, 0x1.9775ecp-68f, 0.0f, 0x1.f0dde2p-120f, 0.0f, 0x1.37def2p-28f,
     0x1.8d2958p-85f, 0.0f, 0x1.0c5fdp-9f, 0x1.ea8f2cp-67f, 0.0f, 0.0f,
     0x1.1c05b8p-82f, 0x1.6cb118p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73eb4ep-122f,
     0x1.7a645cp-96f, 0.0f, 0x1.17d346p-106f, 0.0f, 0x1.4dd9eep-47f, 0x1.8885acp-6f,
     0.0f, 0x1.ac07cep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.542fd2p-91f, 0.0f,
     0x1.86fee6p-114f, 0x1.964112p-26f, 0x1.e6d15p-119f, 0.0f, 0x1.70bddep-85f,
     0x1.5faf26p-11f, 0.0f, 0x1.a3ebdep-82f, 0x1.c03c62p-57f, 0.0f, 0.0f,
     0x1.c6e00ap-13f, 0x1.a1ca9cp-40f, 0x1.ccb14p-18f, 0x1.39c152p-107f, 0.0f,
     0x1.c72bf8p-40f, 0x1.b7613p-19f, 0.0f, 0.0f, 0.0f, 0x1.8cd796p-80f,
     0x1.d8e7b6p-75f, 0x1.311044p-91f, 0x1.94b74p-74f, 0.0f, 0x1.13e444p-18f, 0.0f,
     0x1.44b314p-3f, 0.0f, 0x1.a4876cp-64f, 0.0f, 0.0f, 0x1.182cb6p-30f,
     0x1.c51c06p-115f, 0x1.70dcbap-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.579cacp-12f, 0.0f, 0x1.4a46dcp-29f, 0x1.2289acp-61f, 0.0f, 0.0f, 0.0f,
     0x1.9182acp-113f, 0x1.db75fp-49f, 0.0f, 0.0f, 0x1.17d308p-50f, 0x1.41be7p-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dae31ap-42f, 0x1.38ae1ep-48f, 0.0f, 0x1.c0db34p-52f,
     0.0f, 0x1.318a26p-12f, 0.0f, 0.0f, 0.0f, 0x1.a8f2fcp-114f, 0.0f, 0.0f,
     0x1.e0b49ep-48f, 0.0f, 0x1.0430bcp-20f, 0.0f, 0x1.91249p-61f, 0x1.9537b2p-112f,
     0.0f, 0.0f, 0x1.f2cd14p-28f, 0x1.52cb7cp-29f, 0x1.ec7d4ap-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7c6f36p-81f, 0x1.4b00c8p-68f, 0.0f, 0x1.e4afc6p-106f, 0.0f, 0.0f, 0.0f,
     0x1.7b8e9ep-99f, 0x1.728748p-5f, 0x1.438c52p-27f, 0x1.b5673p-93f, 0x1.b81f8p-60f,
     0.0f, 0x1.19901cp-103f, 0.0f, 0x1.a6c0bap-73f, 0x1.8574cap-125f, 0.0f,
     0x1.bdeebp-89f, 0.0f, 0x1.9fc94ep-88f, 0.0f, 0.0f, 0x1.b494f4p-89f, 0.0f,
     0x1.50ce6p-52f, 0x1.48fe34p-97f, 0.0f, 0x1.e2211cp-67f, 0.0f, 0x1.8bf83ep-107f,
     0.0f, 0.0f, 0x1.39df44p-49f, 0.0f, 0x1p0f, 0x1.a5fdf8p-59f, 0.0f, 0.0f,
     0x1.f4c63p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec114p-51f, 0.0f,
     0x1.80b00cp-74f, 0.0f, 0.0f, 0.0f, 0x1.aa48ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ecb674p-123f, 0x1.a3ad28p-76f, 0x1.e7c8bcp-80f, 0x1.931522p-110f,
     0.0f, 0x1.a5c4d6p-50f, 0x1.25369p-58f, 0x1.0b3268p-70f, 0x1.4f1516p-17f, 0.0f,
     0.0f, 0x1.6bdfd8p-20f, 0.0f, 0x1.1b9b6ap-21f, 0x1.82cc8ep-54f, 0x1.bde7bp-92f,
     0.0f, 0.0f, 0x1.1e30a6p-71f, 0x1.65d0eap-107f, 0x1.c0acbap-99f, 0.0f, 0.0f,
     0x1.a623cep-62f, 0x1.bd4b5ep-8f, 0.0f, 0x1.4167fap-51f, 0.0f, 0.0f, 0.0f,
     0x1.1963cp-72f, 0.0f, 0.0f, 0x1.e3486ap-61f, 0x1.8afac6p-95f, 0x1.28656ap-22f,
     0.0f, 0x1.bc475ap-117f, 0.0f, 0.0f, 0x1.29747ap-87f, 0.0f, 0.0f, 0.0f,
     0x1.279184p-71f, 0.0f, 0x1.47c0cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f3a8cep-56f,
     0.0f, 0.0f, 0.0f, 0x1.ef09a6p-16f, 0x1.a6711ap-88f, 0x1.61ca46p-109f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5b10fep-13f, 0x1.4ff1b2p-53f, 0.0f, 0.0f,
     0x1.a18014p-55f, 0.0f, 0.0f, 0x1.abc4ep-56f, 0x1.ebe708p-56f, 0x1.b7fc8ap-39f,
     0.0f, 0.0f, 0x1.9d0196p-107f, 0.0f, 0.0f, 0x1.32740ap-94f, 0.0f, 0.0f, 0.0f,
     0x1.23f476p-13f, 0x1.84e67p-51f, 0.0f, 0x1.fcc482p-82f, 0.0f, 0.0f,
     0x1.a7776ep-42f, 0x1.4cf4b8p-71f, 0.0f, 0x1.2b6fdep-16f, 0.0f, 0x1.921358p-92f,
     0.0f, 0.0f, 0x1.10ecfep-49f, 0x1.5c2502p-92f, 0x1.f602b2p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7e2f8ep-65f, 0x1.81ddfp-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3382cp-2f,
     0.0f, 0x1.57482ap-108f, 0.0f, 0.0f, 0x1.318a2cp-16f, 0x1.004bb2p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7af3bep-115f, 0.0f, 0.0f, 0x1.f2c66ap-65f,
     0x1.2ff55cp-102f, 0x1.c46e6cp-29f, 0x1.4bfdbcp-86f, 0x1.05fd6ap-24f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.21f6bap-114f, 0.0f, 0x1.aa462ap-18f, 0x1.fc64f6p-31f,
     0x1.634a54p-124f, 0x1.9304d2p-59f, 0x1.ff5ce6p-120f, 0.0f, 0.0f, 0.0f,
     0x1.1db996p-119f, 0x1.6041c8p-90f, 0x1.aa49c4p-10f, 0.0f, 0x1.3b7e9ap-82f,
     0x1.2030aap-100f, 0.0f, 0.0f, 0.0f, 0x1.a536dep-92f, 0x1.b9a47ep-38f,
     0x1.fba86ap-89f, 0.0f, 0.0f, 0.0f, 0x1.11759ep-66f, 0x1.acee9ap-111f,
     0x1.e13e3ap-105f, 0.0f, 0.0f, 0.0f, 0x1.d2a3dp-48f, 0x1.e0195ap-50f,
     0x1.6aa7b4p-91f, 0x1.61d31ep-91f, 0.0f, 0x1.742a2p-91f, 0x1.53788ap-6f,
     0x1.3bdae2p-79f, 0x1.98671ap-68f, 0.0f, 0x1.fe1a1p-68f, 0x1.bff2e8p-75f,
     0x1.38e12p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7668aep-38f, 0.0f, 0x1.bd53c6p-122f,
     0x1.c17c3ap-108f, 0.0f, 0.0f, 0.0f, 0x1.d2206p-104f, 0x1.aecd44p-108f, 0.0f,
     0x1.6e1616p-106f, 0x1.65c87ep-75f, 0x1.864eb4p-72f, 0.0f, 0x1.09b806p-118f,
     0x1.4d3ad6p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ca1cfap-49f, 0.0f,
     0.0f, 0x1.3b0a94p-35f, 0x1.005874p-33f, 0x1.af310cp-20f, 0.0f, 0.0f,
     0x1.166c76p-4f, 0x1.1b3c9cp-53f, 0x1.4ac22p-88f, 0x1.83266p-100f,
     0x1.4f5d7p-107f, 0x1.992f96p-9f, 0.0f, 0x1.8a3804p-91f, 0.0f, 0.0f,
     0x1.f2ccb6p-51f, 0x1.356c8ap-84f, 0.0f, 0x1.dce0e8p-58f, 0.0f, 0x1.b2778p-73f,
     0x1.c2e644p-89f, 0.0f, 0.0f, 0.0f, 0x1.442922p-38f, 0x1.1bbf12p-35f, 0.0f,
     0x1.674ee6p-55f, 0.0f, 0x1.0551fap-114f, 0.0f, 0x1.19216ap-102f, 0x1.3d914ap-56f,
     0x1.74323ep-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9545aep-114f, 0x1.54cc78p-37f,
     0.0f, 0x1.7be9dp-97f, 0.0f, 0x1.e9ccc6p-107f, 0.0f, 0.0f, 0.0f, 0x1.74183ep-92f,
     0.0f, 0.0f, 0.0f, 0x1.ee24a4p-58f, 0x1.11d1b8p-48f, 0x1.1de882p-80f,
     0x1.7efb8p-120f, 0.0f, 0x1.6cbcf8p-116f, 0x1.a530d6p-63f, 0.0f, 0.0f,
     0x1.b986p-59f, 0x1.5bddeap-57f, 0.0f, 0x1.1bcd08p-32f, 0x1.bc3122p-14f, 0.0f,
     0x1p0f, 0x1.6ee724p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e2d82p-106f,
     0.0f, 0.0f, 0.0f, 0x1.2babep-16f, 0x1.1a3fdp-34f, 0.0f, 0x1.f25ebcp-94f, 0.0f,
     0x1.fb0a52p-74f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.e36bf2p-50f, 0x1.06eeep-72f, 0.0f,
     0x1.a285ecp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bcdf4p-95f, 0.0f, 0x1.18c91ap-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd068p-88f, 0x1.2a5874p-80f,
     0x1.ae9dbcp-39f, 0.0f, 0x1.b9da0ap-61f, 0x1.d3ecfp-66f, 0x1.1f019p-106f, 0.0f,
     0x1.9cbe46p-96f, 0x1.d71076p-59f, 0.0f, 0x1.d6b62cp-111f, 0x1.fbe78p-96f, 0.0f,
     0.0f, 0x1.c892p-21f, 0x1.0ca324p-33f, 0x1.cf8af4p-60f, 0.0f, 0x1.9cfb24p-7f,
     0x1.73a2fcp-51f, 0x1.064cdcp-65f, 0x1.224c0ep-95f
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
            tmp1 = Sleef_finz_sinf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sinf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinf1_u10purecfma bench acc %a\n", global_bench_acc);
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
