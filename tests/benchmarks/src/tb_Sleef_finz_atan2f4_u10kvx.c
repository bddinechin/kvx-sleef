/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atan2f4_u10kvx.c --function \
 *     Sleef_finz_atan2f4_u10kvx --arity 2 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32,binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.85c94cp-90f, 0x1.fe6d7ep-48f, 0x1.dc10c2p-87f, 0.0f, 0.0f, 0x1.449eep-120f,
     0.0f, 0.0f, 0x1.571088p-16f, 0.0f, 0.0f, 0.0f, 0x1.c01da8p-114f, 0.0f,
     0x1.8717ep-67f, 0x1.407748p-111f, 0.0f, 0.0f, 0x1.1d15f6p-48f, 0x1.b37304p-20f,
     0.0f, 0x1.155ab6p-119f, 0.0f, 0x1.7abbc6p-31f, 0.0f, 0x1.bda6a8p-36f,
     0x1.28e9c8p-40f, 0.0f, 0x1.90869ep-24f, 0.0f, 0.0f, 0.0f, 0x1.085ac2p-95f,
     0x1.d66354p-48f, 0x1.a4688ap-13f, 0.0f, 0x1.59c0acp-92f, 0.0f, 0x1.9decd6p-70f,
     0x1.4a706ap-24f, 0.0f, 0x1.e83024p-41f, 0.0f, 0x1.0927bcp-34f, 0x1.63f098p-14f,
     0.0f, 0.0f, 0.0f, 0x1.dc98fcp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1ebdp-23f,
     0x1.0cc52ap-45f, 0.0f, 0x1.c9abfep-87f, 0.0f, 0x1.e41128p-88f, 0.0f,
     0x1.3525d4p-32f, 0x1.e521bep-1f, 0x1.23859ap-107f, 0.0f, 0.0f, 0x1.3e47cap-119f,
     0.0f, 0x1.380328p-67f, 0.0f, 0x1.d8c0dap-52f, 0x1.59bf7p-56f, 0.0f,
     0x1.e2fc3cp-58f, 0.0f, 0x1.7762bcp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f38b4ep-70f,
     0.0f, 0x1.13a9e4p-50f, 0.0f, 0x1.ec1c66p-89f, 0x1.d37d48p-74f, 0x1.758638p-82f,
     0x1.4ee268p-10f, 0x1.90cb52p-65f, 0x1.c2297p-58f, 0x1.165612p-41f, 0.0f, 0.0f,
     0x1.4b893p-36f, 0x1.a36526p-92f, 0.0f, 0.0f, 0.0f, 0x1.e47b4cp-112f,
     0x1.3c1bbcp-52f, 0.0f, 0x1.9e2accp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37cd84p-97f, 0x1.240994p-20f, 0x1.92542cp-22f, 0.0f, 0.0f, 0x1.719aecp-1f,
     0.0f, 0x1.2ec6ccp-37f, 0x1.f77d04p-102f, 0.0f, 0.0f, 0x1.c26cbcp-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d1f9c8p-41f, 0.0f, 0x1.10e9e2p-79f, 0x1.d8b05cp-82f, 0.0f, 0.0f,
     0.0f, 0x1.4aeceep-83f, 0.0f, 0.0f, 0x1.61152ep-59f, 0.0f, 0.0f, 0x1.9e4248p-101f,
     0.0f, 0x1.1bad5ap-81f, 0.0f, 0.0f, 0x1.7f363p-21f, 0x1.cc92ecp-90f,
     0x1.c1c016p-48f, 0x1.ced124p-55f, 0x1.53ddc2p-97f, 0.0f, 0x1.1e2bacp-78f, 0.0f,
     0x1.6e42e2p-31f, 0x1.18ebfep-74f, 0.0f, 0.0f, 0x1.5c77c4p-19f, 0x1.d38f9p-70f,
     0x1.454602p-40f, 0x1.1bdde4p-8f, 0x1.7908ecp-73f, 0.0f, 0x1.40a516p-46f,
     0x1.812052p-51f, 0.0f, 0.0f, 0x1.d3fb2p-110f, 0.0f, 0x1.b656a6p-22f,
     0x1.904eep-83f, 0x1.7ca44cp-28f, 0x1.847126p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3a90dap-53f, 0x1.7599a2p-96f, 0.0f, 0x1.605d8p-30f, 0.0f, 0x1.4596c8p-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f12dep-92f, 0x1.23935p-7f, 0.0f, 0.0f,
     0x1.0b6fbep-42f, 0x1.d9380ap-14f, 0x1.a59d26p-46f, 0.0f, 0x1.cf406ap-102f, 0.0f,
     0x1.4e1992p-103f, 0.0f, 0.0f, 0x1.271d02p-112f, 0x1.9b1976p-92f, 0x1.d49226p-61f,
     0x1.1a8886p-5f, 0x1.e13f1cp-109f, 0.0f, 0.0f, 0x1.15e9ccp-42f, 0.0f,
     0x1.684e9ap-55f, 0x1.165a82p-72f, 0.0f, 0x1.93e6c6p-41f, 0x1.661cc4p-117f, 0.0f,
     0x1.4a991cp-117f, 0x1.1dccap-8f, 0.0f, 0x1.575682p-14f, 0.0f, 0.0f,
     0x1.4b0ddap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f0d5cp-103f, 0.0f, 0.0f,
     0x1.3e4ec4p-81f, 0x1.07555ap-19f, 0.0f, 0x1.00a85ep-43f, 0.0f, 0.0f, 0.0f,
     0x1.ca67ap-115f, 0x1.d19f66p-26f, 0x1.df1592p-14f, 0.0f, 0x1.d993cep-78f,
     0x1.110c06p-40f, 0x1.b6a5e8p-103f, 0.0f, 0.0f, 0x1.1b3558p-31f, 0.0f, 0.0f, 0.0f,
     0x1.f86dbep-5f, 0.0f, 0x1.24f926p-39f, 0x1.a1216ap-116f, 0x1.6be3b4p-48f, 0.0f,
     0x1.fc24d8p-88f, 0.0f, 0x1.697808p-25f, 0x1.1d944ap-59f, 0.0f, 0x1.5cb3b4p-115f,
     0.0f, 0x1.c3d774p-44f, 0x1.970016p-115f, 0x1.146788p-43f, 0.0f, 0x1.411eecp-86f,
     0.0f, 0x1.6f318p-77f, 0x1.295bb6p-87f, 0.0f, 0.0f, 0x1.cb08dap-88f, 0.0f, 0.0f,
     0.0f, 0x1.8de72cp-56f, 0x1.48d06ap-30f, 0x1.1ce076p-71f, 0.0f, 0.0f,
     0x1.e686b6p-22f, 0x1.9d3daap-12f, 0x1.b51176p-43f, 0x1.79e8a6p-109f,
     0x1.8d9e16p-119f, 0x1.524d3cp-98f, 0x1.2ce46p-63f, 0.0f, 0.0f, 0x1.9f86cp-104f,
     0x1.c28d52p-98f, 0x1.33dddep-103f, 0.0f, 0x1.628a22p-78f, 0x1.569d96p-39f,
     0x1.0c6fbap-108f, 0x1.4049e4p-78f, 0x1.d90142p-101f, 0x1.caf11ep-44f,
     0x1.0e257p-110f, 0.0f, 0x1.50c1fp-62f, 0x1.6f9e0ep-12f, 0.0f, 0.0f,
     0x1.77c56ep-51f, 0.0f, 0x1.9aea64p-118f, 0.0f, 0x1.af29b6p-27f, 0.0f,
     0x1.94e862p-120f, 0.0f, 0.0f, 0.0f, 0x1.bf0394p-88f, 0x1.21cfeap-1f,
     0x1.94975p-52f, 0x1.8f34eap-98f, 0.0f, 0.0f, 0x1.37e75ap-26f, 0.0f, 0.0f,
     0x1.4c4b26p-32f, 0.0f, 0x1.51eep-62f, 0x1.4a8074p-101f, 0x1.c8beep-82f, 0.0f,
     0x1.475ed8p-56f, 0.0f, 0.0f, 0x1.afedd8p-118f, 0.0f, 0.0f, 0x1.adbd52p-87f,
     0x1.8f79a2p-16f, 0.0f, 0x1.cc5658p-82f, 0.0f, 0x1.647fc2p-35f, 0.0f, 0.0f,
     0x1.0b95dp-126f, 0x1.a8f6f8p-113f, 0x1.b6fbe8p-82f, 0.0f, 0x1.f4f6fep-93f,
     0x1.343102p-7f, 0x1.514fdp-39f, 0x1.99e216p-101f, 0x1.076712p-53f, 0.0f,
     0x1.313a48p-44f, 0x1.0501ap-74f, 0x1.c01b94p-120f, 0.0f, 0.0f, 0.0f,
     0x1.e7b5cap-21f, 0.0f, 0.0f, 0.0f, 0x1.a6447cp-13f, 0x1.c769b6p-48f, 0.0f,
     0x1.a94858p-10f, 0.0f, 0.0f, 0x1.9d6beep-96f, 0.0f, 0x1.e67cdp-20f,
     0x1.188136p-111f, 0x1.f80884p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3470fap-102f,
     0.0f, 0x1.aebc96p-64f, 0.0f, 0.0f, 0.0f, 0x1.8648d2p-86f, 0x1.106fc4p-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.49fcd6p-94f, 0x1.a6f868p-14f, 0.0f, 0.0f, 0.0f,
     0x1.ee1ac2p-59f, 0x1.f2352p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f31976p-25f, 0.0f,
     0.0f, 0x1.d2c176p-97f, 0x1.ef13f6p-102f, 0.0f, 0.0f, 0.0f, 0x1.93bc8cp-69f, 0.0f,
     0x1.16282ap-76f, 0.0f, 0.0f, 0x1.75c936p-101f, 0x1.b5771cp-63f, 0x1.112da2p-15f,
     0x1.338252p-120f, 0x1.72a54ep-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.92c418p-113f, 0.0f, 0x1.63fed2p-46f, 0.0f, 0.0f, 0x1.bd28b8p-19f, 0.0f,
     0.0f, 0x1.02a2dep-9f, 0x1.ab7c3ep-3f, 0.0f, 0x1.bcc0cp-114f, 0x1.acbf1ap-124f,
     0x1.94e758p-110f, 0x1.396348p-61f, 0.0f, 0x1.b09dcep-91f, 0.0f, 0x1.eef75ap-54f,
     0x1.ea4064p-55f, 0x1.d7e304p-61f, 0.0f, 0.0f, 0x1.b9f8a8p-94f, 0x1.b7e9ep-31f,
     0x1.ce344ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c4836p-97f, 0.0f, 0.0f,
     0x1.dd56b8p-15f, 0.0f, 0x1.abfcbep-103f, 0.0f, 0.0f, 0x1.5ca1fp-77f,
     0x1.fc5d54p-19f, 0x1.fece3cp-69f, 0x1.f40cb6p-12f, 0.0f, 0.0f, 0x1.c2831cp-108f,
     0.0f, 0x1.f891e8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be073ep-28f, 0.0f,
     0x1.02cec8p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b569ap-19f, 0x1.177ec6p-38f,
     0x1.f292f6p-79f, 0.0f, 0x1.6ab924p-120f, 0.0f, 0.0f, 0x1.d4736p-32f,
     0x1.ef4a02p-12f, 0.0f, 0.0f, 0.0f, 0x1.d75ebp-116f, 0x1.8dbb82p-33f,
     0x1.edd8e8p-120f, 0.0f, 0.0f, 0.0f, 0x1.c4df24p-42f, 0.0f, 0.0f, 0.0f,
     0x1.63c79ep-125f, 0x1.be211cp-105f, 0x1.3a640cp-15f, 0x1.2e4892p-5f, 0.0f,
     0x1.3d8c8cp-55f, 0x1.effb48p-84f, 0.0f, 0x1.3f06a8p-65f, 0.0f, 0.0f,
     0x1.8f51ep-26f, 0x1.83d762p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.208738p-77f, 0x1.90eeacp-3f, 0.0f, 0x1.15fdc4p-111f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.212008p-34f, 0x1.248beep-23f, 0.0f,
     0x1.893fd2p-70f, 0x1.fe6d84p-102f, 0x1.f092aep-109f, 0.0f, 0.0f, 0x1.c462c6p-17f,
     0x1.74556ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b5bc6p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7eee8ep-92f, 0x1.47ab6ap-49f, 0x1.81a5dcp-111f,
     0x1.dc1692p-34f, 0.0f, 0.0f, 0.0f, 0x1.b88f9ap-123f, 0x1.553282p-97f,
     0x1.ef2be2p-16f, 0x1.28943ap-94f, 0x1.3291c6p-80f, 0x1.fd7482p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.89f8e2p-35f, 0.0f, 0x1.375a38p-83f, 0.0f, 0.0f, 0x1.f39c14p-87f,
     0x1.c29a36p-73f, 0.0f, 0.0f, 0.0f, 0x1.9bdad6p-35f, 0x1.ea56bcp-45f, 0.0f,
     0x1.16220ap-52f, 0.0f, 0x1.af7ae4p-53f, 0x1.4949a8p-72f, 0x1.4638e2p-117f,
     0x1.fb8ba8p-44f, 0x1.ec4fe8p-60f, 0x1.e80accp-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44cb28p-29f, 0x1.e0063p-41f, 0.0f, 0.0f, 0x1.89e9fap-121f, 0.0f,
     0x1.6e20a6p-58f, 0.0f, 0.0f, 0.0f, 0x1.624864p-109f, 0x1.097a6p-45f,
     0x1.ee71bap-28f, 0x1.b6f074p-57f, 0.0f, 0x1.c35d9cp-93f, 0.0f, 0x1.264876p-54f,
     0x1.a3fc4ep-73f, 0.0f, 0x1.1393ap-2f, 0x1.30f838p-106f, 0x1.f0a72cp-22f, 0.0f,
     0x1.18e82cp-68f, 0x1.7c4402p-42f, 0x1.0df908p-23f, 0.0f, 0.0f, 0x1.e2f7d8p-2f,
     0.0f, 0x1.ff61dp-83f, 0.0f, 0x1.04e7acp-62f, 0x1.c60448p-94f, 0x1.e9494cp-69f,
     0x1.97a8e2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5181a6p-60f, 0.0f,
     0x1.5ba3d8p-20f, 0x1.dff946p-33f, 0x1.d8ee6ep-55f, 0x1.a5d2dep-96f,
     0x1.0fc40ep-123f, 0.0f, 0x1.13595ap-115f, 0x1.505604p-113f, 0.0f,
     0x1.0e763cp-30f, 0.0f, 0x1.b0932ap-13f, 0.0f, 0x1.2da814p-6f, 0.0f, 0.0f,
     0x1.862ac2p-9f, 0x1.3054f8p-25f, 0x1.d52472p-11f, 0.0f, 0.0f, 0.0f,
     0x1.fc6438p-70f, 0x1.3f1e3ep-109f, 0x1.e80dbap-108f, 0.0f, 0x1.772024p-36f, 0.0f,
     0.0f, 0.0f, 0x1.585ad6p-74f, 0x1.200d94p-31f, 0x1.9f3028p-79f, 0x1.8c8db6p-29f,
     0x1.49995p-103f, 0.0f, 0x1.e0c634p-91f, 0x1.a19b9p-37f, 0.0f, 0x1.8351eap-61f,
     0.0f, 0x1.bd234p-67f, 0.0f, 0x1.ebb698p-40f, 0x1.50d298p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5fff1cp-69f, 0.0f, 0x1.cb0e78p-60f, 0.0f, 0.0f, 0.0f,
     0x1.5b269ep-58f, 0.0f, 0x1.5cc584p-14f, 0x1.4f4e92p-102f, 0.0f, 0.0f,
     0x1.bf9242p-125f, 0.0f, 0.0f, 0x1.601558p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee8de4p-78f, 0.0f, 0.0f, 0x1.c52ab6p-94f, 0.0f, 0x1.9b0d76p-73f, 0.0f, 0.0f,
     0.0f, 0x1.f43b28p-24f, 0x1.8a78b8p-42f, 0x1.8fffe6p-5f, 0x1.ec5fd8p-41f, 0.0f,
     0.0f, 0.0f, 0x1.5b2232p-55f, 0.0f, 0x1.3bbb5cp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.468b6cp-74f, 0x1.4d9b6cp-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aef2fep-39f, 0.0f, 0x1.7da5f2p-43f, 0x1.f8b07p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.356eep-81f, 0x1.eb71a8p-59f, 0.0f, 0x1.abd36ap-61f, 0.0f, 0.0f,
     0x1.7954c6p-70f, 0.0f, 0x1.db6ebcp-41f, 0x1.0ec7acp-1f, 0x1.44b512p-88f, 0.0f,
     0.0f, 0x1.890246p-113f, 0.0f, 0.0f, 0x1.912878p-39f, 0.0f, 0x1.2fe1dcp-106f,
     0x1.70d0cp-74f, 0.0f, 0x1.e19282p-28f, 0x1.2cbcf6p-32f, 0x1.6cfa1p-15f, 0.0f,
     0.0f, 0x1.aca30ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b6e8c8p-118f, 0.0f, 0x1.ac78bp-8f, 0x1.b9d7cap-37f, 0x1.800d94p-88f, 0.0f,
     0x1.6d0fe2p-54f, 0.0f, 0.0f, 0.0f, 0x1.f7918cp-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.93d35cp-119f, 0.0f, 0.0f, 0x1.8a7594p-89f, 0.0f, 0x1.59ebc4p-72f, 0.0f,
     0x1.cfb37ap-92f, 0x1.01e63ep-103f, 0x1.572b1cp-92f, 0x1.ed2618p-125f,
     0x1.16d404p-99f, 0x1.4f9f62p-98f, 0.0f, 0x1.ce43c4p-14f, 0x1.2449fap-12f,
     0x1.7f7fbcp-5f, 0x1.80141p-44f, 0x1.b402dcp-125f, 0x1.8aeb8ep-61f,
     0x1.d712fap-26f, 0x1.18045ap-96f, 0.0f, 0x1.e608dp-99f, 0x1.02b354p-76f, 0.0f,
     0.0f, 0x1.b04434p-116f, 0.0f, 0x1.41e12ep-5f, 0.0f, 0x1.161dc2p-3f,
     0x1.113588p-79f, 0.0f, 0.0f, 0x1.d12fdcp-47f, 0.0f, 0.0f, 0x1.46fd1ep-101f, 0.0f,
     0x1.0f9b82p-63f, 0.0f, 0x1.96e16cp-2f, 0.0f, 0x1.863fdap-20f, 0x1.56f106p-5f,
     0x1.8ec912p-41f, 0x1.e4391p-82f, 0.0f, 0x1.bc604p-26f, 0x1.aec41ep-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.5cc21ap-48f, 0x1.f2287ep-10f, 0.0f, 0.0f, 0x1.bc19a2p-14f,
     0x1.fb07ep-119f, 0x1.ad3cp-93f, 0x1.87f99cp-30f, 0.0f, 0x1.0132cep-49f,
     0x1.7bc294p-31f, 0x1.a900f8p-64f, 0.0f, 0.0f, 0x1.3f97bcp-43f, 0x1.4e7e04p-67f,
     0.0f, 0x1.f617f4p-36f, 0.0f, 0x1.c7e738p-80f, 0.0f, 0.0f, 0x1.29b27ep-110f, 0.0f,
     0x1.321d22p-22f, 0.0f, 0x1.49475cp-125f, 0x1.cd80a4p-74f, 0.0f, 0.0f,
     0x1.50e34cp-53f, 0x1.c1a8dp-52f, 0.0f, 0.0f, 0.0f, 0x1.c28f0cp-23f,
     0x1.2c0146p-100f, 0x1.b5015ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf77a2p-76f, 0.0f,
     0x1.01a6dcp-23f, 0x1.a33674p-7f, 0.0f, 0x1.83d054p-82f, 0x1.30fccap-12f,
     0x1.b827c4p-29f, 0x1.c4e76p-42f, 0x1.224f46p-72f, 0x1.43581ap-118f,
     0x1.90eb8cp-13f, 0.0f, 0x1.0af3cap-48f, 0x1.59f93ap-58f, 0x1.43d10ep-18f,
     0x1.cea704p-80f, 0x1.687236p-34f, 0.0f, 0x1.f48d4ap-103f, 0x1.b56b86p-14f,
     0x1.49681ep-68f, 0x1.1e94aap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a43834p-20f, 0x1p0f, 0x1.7aa67ap-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83e8d4p-119f, 0x1.f25edcp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f21ebcp-13f,
     0x1.2799bcp-91f, 0x1.b104a2p-7f, 0x1.4fac66p-99f, 0.0f, 0.0f, 0x1.e10e58p-79f,
     0.0f, 0.0f, 0x1.62bc1ap-81f, 0x1.932d18p-42f, 0.0f, 0.0f, 0x1.48ab42p-74f,
     0x1.f7892ap-68f, 0x1.b2ff2p-97f, 0x1.cde8p-9f, 0x1.2a6868p-40f, 0x1.0b8ac2p-116f,
     0.0f, 0.0f, 0x1.e5076p-71f, 0x1.374bb2p-68f, 0x1.048852p-54f, 0x1.332fd2p-76f,
     0x1.44ce14p-57f, 0x1.d1e5dep-114f, 0.0f, 0.0f, 0.0f, 0x1.1b776cp-96f, 0.0f, 0.0f,
     0x1.30ec36p-107f, 0x1.3bbddcp-54f, 0x1.1cecp-105f, 0.0f, 0x1.23053p-126f, 0.0f,
     0x1.2f87acp-17f, 0.0f, 0.0f, 0x1.d38092p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c835cp-113f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0x1.75764cp-76f, 0.0f, 0.0f, 0x1.90f414p-23f, 0x1.0f7354p-59f,
     0x1.a3da12p-47f, 0x1.68b018p-4f, 0.0f, 0.0f, 0x1.207ea2p-124f, 0x1.14ffa2p-61f,
     0x1.0d13aap-51f, 0.0f, 0.0f, 0x1.e60d22p-36f, 0x1.890ddp-119f, 0x1.03be4ap-76f,
     0.0f, 0.0f, 0x1.4f1ad4p-29f, 0x1.306324p-69f, 0.0f, 0x1.9a6e5ap-31f, 0.0f, 0.0f,
     0x1.5eed44p-110f, 0.0f, 0x1.26fb2p-80f, 0.0f, 0.0f, 0x1.7a779p-32f,
     0x1.aa1572p-43f, 0x1.463a52p-115f, 0x1.514a44p-103f, 0.0f, 0x1.00657cp-50f,
     0x1.c825eep-59f, 0x1.387114p-47f, 0x1.653c7p-18f, 0.0f, 0.0f, 0x1.2a066ap-11f,
     0.0f, 0x1.3092c4p-52f, 0.0f, 0x1.6c64dep-103f, 0x1.7336dcp-80f, 0.0f, 0.0f,
     0x1.e2bf94p-80f, 0.0f, 0.0f, 0x1.97e848p-99f, 0.0f, 0x1.604616p-101f, 0.0f,
     0x1.6769f6p-115f, 0x1.9b42c8p-47f, 0.0f, 0x1.296d52p-115f, 0x1.dfe656p-75f,
     0x1.c18d78p-46f, 0x1.853284p-123f, 0x1.84266p-32f, 0.0f, 0.0f, 0x1.388b4ep-8f,
     0x1.ab1674p-12f, 0.0f, 0x1.eb7c4ap-30f, 0x1.306408p-94f, 0.0f, 0.0f,
     0x1.20fecp-34f, 0.0f, 0x1.572922p-68f, 0.0f, 0x1.52148cp-105f, 0.0f,
     0x1.b3dcaep-43f, 0x1.fefb96p-69f, 0.0f, 0x1.0601bap-90f, 0x1.3cbcbep-96f,
     0x1.9db88ap-119f, 0x1.aa248cp-14f, 0x1.68eb5ap-28f, 0.0f, 0x1.866d2cp-82f, 0.0f,
     0x1.435e1p-79f, 0.0f, 0x1.e4d3bap-49f, 0.0f, 0x1.40ca52p-26f, 0x1.9cf738p-114f,
     0x1.97c058p-57f, 0.0f, 0.0f, 0x1.870e3ep-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b789fep-91f, 0x1.a4638ep-87f, 0.0f, 0x1.e67be4p-27f,
     0x1.2f1366p-117f, 0x1.166f42p-21f, 0.0f, 0.0f, 0.0f, 0x1.51236ap-2f,
     0x1.025c94p-79f, 0.0f, 0x1.77aacap-112f, 0.0f, 0x1.745992p-116f, 0.0f,
     0x1.9ea13ep-7f, 0x1.bfc1cp-105f, 0.0f, 0x1.8d464cp-61f, 0.0f, 0x1p0f,
     0x1.c0dcfp-89f, 0x1.879636p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d549a4p-90f, 0.0f, 0.0f, 0x1.d1dff4p-90f, 0.0f, 0x1.2103eep-74f,
     0x1.a6e382p-115f, 0x1.7b32fep-22f, 0.0f, 0.0f, 0.0f, 0x1.4f4b18p-68f, 0.0f,
     0x1.eb7b92p-60f, 0.0f, 0x1.03f8a8p-8f, 0.0f, 0x1.bff46p-55f, 0.0f, 0.0f,
     0x1.a4b6c2p-85f, 0x1.603fb8p-76f, 0x1.21f2cep-57f, 0.0f, 0.0f, 0x1.515d14p-124f,
     0x1.b9adeap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4b294p-56f, 0.0f,
     0x1.3d3c84p-98f, 0x1.8fa398p-20f, 0.0f, 0x1.a9c922p-53f, 0.0f, 0.0f, 0.0f,
     0x1.d61c46p-21f, 0x1.5b5796p-104f, 0.0f, 0x1.31b57ap-117f, 0x1.a33d5p-84f,
     0x1.0ac51ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750ae2p-105f, 0.0f, 0.0f,
     0x1.46b4bp-11f, 0x1.ddce08p-4f, 0x1.171b1ep-119f, 0.0f, 0x1.8a71cap-6f, 0.0f,
     0.0f, 0x1.e8615cp-45f, 0x1.65673ep-19f, 0x1.ec8f66p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.55cc84p-29f, 0x1.a5801ep-63f, 0x1.00c918p-2f, 0x1.3ebcap-35f, 0x1.e8b5ap-87f,
     0.0f, 0.0f, 0x1.ad33eap-28f, 0.0f, 0.0f, 0x1.43ccp-87f, 0.0f, 0x1.a61e18p-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6381cp-35f, 0x1.39eaf4p-101f,
     0x1.b1d914p-35f, 0x1.211874p-42f, 0x1.f16386p-120f, 0.0f, 0.0f, 0x1.37fb48p-15f,
     0.0f, 0x1.b5783ep-77f, 0.0f, 0.0f, 0.0f, 0x1.faf7fp-79f, 0x1.9b95c2p-30f,
     0x1.dd80ccp-103f, 0x1.80efc6p-119f, 0.0f, 0x1.6bcd4cp-32f, 0x1.6500a4p-39f,
     0x1.661fd8p-11f, 0.0f, 0.0f, 0.0f, 0x1.9a26aap-65f, 0x1.0e882p-81f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.11a22cp-27f, 0x1.2bfda2p-103f, 0.0f, 0.0f, 0x1.f2456p-111f,
     0x1.a4e302p-81f, 0.0f, 0x1.2cc35p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7943p-12f,
     0.0f, 0x1.d559dep-65f, 0x1.05e92p-1f, 0x1.520c1ep-87f, 0x1.284ef8p-26f, 0.0f,
     0.0f, 0x1.f5ce04p-21f, 0x1p0f, 0.0f, 0x1.62ca2ap-125f, 0x1.6035b2p-22f,
     0x1.e50004p-33f, 0x1.fcfcaap-23f, 0x1.34f7d4p-53f, 0.0f, 0.0f, 0x1.3a5e3cp-52f,
     0.0f, 0.0f, 0x1.d33868p-6f, 0.0f, 0.0f, 0x1.ee81d2p-85f, 0.0f, 0x1.f44e6cp-2f,
     0x1.26c518p-29f, 0.0f, 0x1.3291fap-52f, 0x1.cee848p-24f, 0.0f, 0.0f, 0.0f,
     0x1.f89354p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dbf44p-24f, 0.0f,
     0x1.1ae522p-109f, 0x1.7318ep-63f, 0x1.b7a23p-81f, 0x1.0744acp-55f,
     0x1.ad0b68p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eadc12p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec1484p-80f, 0.0f, 0.0f, 0x1.c885p-41f, 0.0f, 0.0f, 0x1.3f81f6p-32f, 0.0f,
     0x1.7dccc2p-63f, 0.0f, 0.0f, 0x1.d2c5ep-97f, 0.0f, 0.0f, 0x1.84725p-32f,
     0x1.e404f6p-68f, 0x1.519cbep-118f, 0x1.f3796p-29f, 0.0f, 0x1.367d24p-51f,
     0x1.86b6dcp-9f, 0.0f, 0x1.1f4e7p-70f, 0x1.b3ff8p-9f, 0x1.a7c146p-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.079a94p-108f, 0x1.2d4808p-98f, 0.0f, 0x1.821246p-116f, 0x1.9a675ep-41f,
     0x1.0d4e7ap-87f, 0.0f, 0.0f, 0x1.2068f6p-55f, 0x1.4c1ecp-27f, 0x1.b74c44p-37f,
     0x1.129012p-119f, 0x1.6ba52ep-37f, 0.0f, 0x1.ce5c72p-120f, 0x1.0f7f5p-98f,
     0x1.5170e4p-34f, 0x1.48afp-89f, 0x1.997cd4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d75da4p-48f, 0x1.0cff6ap-6f, 0x1.fea03ap-23f, 0.0f,
     0x1.0eda32p-4f, 0x1.a4d296p-1f, 0x1.0d82dap-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.84b514p-50f, 0x1.ed4268p-111f, 0.0f, 0.0f, 0.0f, 0x1.b4cd66p-78f, 0.0f,
     0x1.1c32b6p-66f, 0.0f, 0x1.22b19cp-58f, 0x1.6a42c4p-25f, 0x1.230cbp-65f, 0.0f,
     0x1.06566ap-68f, 0.0f, 0.0f, 0x1.a8e738p-88f, 0x1.638202p-85f, 0x1.225648p-41f,
     0.0f, 0.0f, 0x1.b14052p-113f, 0x1.af798p-24f, 0x1.0b16fep-97f, 0x1.f9877ap-14f,
     0x1.0b954cp-90f, 0x1.30332cp-100f, 0.0f, 0.0f, 0x1.719702p-100f, 0x1.71704ap-9f,
     0x1.5f315cp-49f, 0.0f, 0.0f, 0.0f, 0x1.6ac22cp-94f, 0x1.27fc02p-72f,
     0x1.9b679ep-122f, 0x1.a6e244p-10f, 0.0f, 0x1.393fbp-40f, 0x1.77017ep-47f,
     0x1.9bd346p-42f, 0.0f, 0.0f, 0x1.946458p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.52ac8ep-97f, 0.0f, 0x1.de6a86p-17f, 0.0f, 0x1.6470bep-61f, 0.0f, 0.0f,
     0x1.2cb416p-97f, 0x1.667a3ep-24f, 0.0f, 0x1.cfa5bcp-67f, 0.0f, 0x1.bd41dcp-44f,
     0.0f, 0.0f, 0x1.e6dd9ap-100f, 0x1.5ca8b4p-116f, 0.0f, 0.0f, 0.0f,
     0x1.47e422p-118f, 0x1.942c4ap-3f, 0.0f, 0.0f, 0.0f, 0x1.47eb4ep-113f,
     0x1.844c66p-6f, 0.0f, 0.0f, 0.0f, 0x1.0f0868p-58f, 0x1.fadb7p-57f, 0.0f, 0.0f,
     0x1.e5032ep-4f, 0x1.561a46p-16f, 0x1.dada6ap-95f, 0x1.3ba9dp-124f, 0.0f,
     0x1.c4a324p-119f, 0.0f, 0.0f, 0.0f, 0x1.6500d6p-78f, 0.0f, 0x1.a15e6cp-34f, 0.0f,
     0.0f, 0x1.6ea84cp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a1570ap-85f, 0x1.9d3f3ap-51f,
     0.0f, 0x1.bff588p-61f, 0.0f, 0x1.905ef4p-108f, 0x1.203b88p-118f, 0.0f, 0.0f,
     0x1.60741p-100f, 0.0f, 0.0f, 0.0f, 0x1.23dc78p-17f, 0x1.55a112p-126f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.60b396p-88f, 0x1.6ee42ap-55f, 0.0f,
     0x1.918452p-109f, 0x1.b5a21ap-55f, 0x1.5fe1d8p-114f, 0.0f, 0x1.2bf3f4p-40f,
     0x1.a73e96p-21f, 0.0f, 0x1.ba97cp-33f, 0x1.0b40dap-72f, 0x1.0d770ap-54f, 0.0f,
     0.0f, 0x1.223d14p-93f, 0x1.1dbb42p-92f, 0x1.b56f3ap-85f, 0x1.0fc0cep-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.591c6p-122f, 0.0f, 0x1.615c5cp-61f, 0x1.0f66d8p-99f, 0.0f,
     0x1.318cdp-54f, 0.0f, 0.0f, 0x1.5c37bep-4f, 0.0f, 0.0f, 0x1.b5a32cp-115f,
     0x1.7e70b4p-13f, 0.0f, 0x1.1c3228p-97f, 0.0f, 0x1.5807bcp-30f, 0x1.861c74p-116f,
     0.0f, 0x1.f083acp-28f, 0x1.9775a6p-57f, 0.0f, 0.0f, 0x1.32018cp-103f,
     0x1.480456p-10f, 0x1.9466eep-84f, 0x1p0f, 0x1.554108p-60f, 0x1.94705ap-45f,
     0x1.ade2ecp-76f, 0x1p0f, 0x1.c19c96p-39f, 0x1.602fp-70f, 0x1.5733bep-47f,
     0x1.bfb14p-118f, 0x1.8fdd04p-37f, 0.0f, 0.0f, 0.0f, 0x1.55f6dcp-81f, 0.0f,
     0x1.ba9e72p-87f, 0.0f, 0.0f, 0.0f, 0x1.030a68p-45f, 0x1.94f1bcp-18f, 0.0f, 0.0f,
     0x1.b8953ep-13f, 0x1.be4822p-45f, 0.0f, 0.0f, 0x1.9afb42p-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3346fep-112f, 0x1.5d031p-13f, 0.0f, 0x1p0f, 0.0f,
     0x1.7c711ep-34f, 0x1.f3ba6p-88f, 0x1.fcd808p-55f, 0.0f, 0x1.85850ep-47f, 0.0f,
     0x1.46ec2cp-70f, 0x1.5a7a5ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c641cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15c9ap-124f, 0x1.9b5202p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e504c4p-82f, 0.0f, 0x1.11f7fp-111f, 0.0f, 0x1.a5c372p-12f,
     0.0f, 0x1.c1785ap-53f, 0x1.db7fa8p-36f, 0x1.ef8138p-103f, 0x1.e83c28p-79f, 0.0f,
     0.0f, 0x1.a82432p-85f, 0.0f, 0x1.ede21ep-9f, 0.0f, 0x1.b15602p-5f,
     0x1.80b658p-20f, 0x1.5f8b92p-62f, 0x1.0634a8p-66f, 0x1.e04108p-37f,
     0x1.77c968p-85f, 0.0f, 0x1.e9fa28p-61f, 0.0f, 0.0f, 0x1.f7db9p-69f, 0.0f,
     0x1.5f79b8p-33f, 0.0f, 0x1.7c0a28p-37f, 0.0f, 0x1.7e8e44p-124f, 0x1.01e5ecp-31f,
     0x1.7205d4p-121f, 0x1.f29e7ap-89f, 0.0f, 0.0f, 0x1.804da6p-49f, 0x1.bc7b22p-72f,
     0.0f, 0.0f, 0x1.b0818ap-101f, 0.0f, 0x1.b7cccap-30f, 0x1.cb84e8p-29f, 0.0f,
     0x1.265d02p-21f, 0x1.f64f34p-47f, 0.0f, 0.0f, 0x1.8fd6eep-62f, 0x1.368b76p-16f,
     0x1.3fbc9ap-66f, 0.0f, 0x1.35e44ap-41f, 0.0f, 0x1.7faae4p-17f, 0x1.1a3d6ap-86f,
     0.0f, 0x1.1915fcp-7f, 0x1.10b31ap-64f, 0.0f, 0x1.1cb77p-1f, 0x1.540506p-79f,
     0x1.ecef32p-91f, 0x1.db841cp-24f, 0.0f, 0x1.311a8ep-92f, 0x1.f0001ap-14f,
     0x1.1b52aap-63f, 0.0f, 0x1p0f, 0x1.e0740cp-98f, 0x1.721bc6p-119f, 0.0f,
     0x1.4f2d22p-122f, 0x1.45d2c6p-106f, 0x1.52c4b4p-27f, 0.0f, 0x1.147672p-103f,
     0.0f, 0x1.fe3a18p-93f, 0x1.97f54ep-102f, 0.0f, 0.0f, 0x1.555b5cp-47f, 0.0f,
     0x1.e8afb6p-110f, 0x1.726176p-85f, 0.0f, 0x1.b56ccp-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d61b5ep-94f, 0x1.bf5174p-55f, 0.0f, 0.0f, 0x1.e88ceap-73f, 0.0f, 0.0f,
     0x1.cdfbb6p-21f, 0x1.a9bb64p-76f, 0.0f, 0.0f, 0x1.30754ep-71f, 0.0f, 0.0f, 0.0f,
     0x1.88a354p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.541f04p-64f, 0x1.8a1888p-12f, 0.0f,
     0x1.e4bfdcp-25f, 0x1.023882p-121f, 0.0f, 0x1.b92532p-54f, 0.0f, 0x1.d65ed2p-28f,
     0x1.4c0e8cp-8f, 0.0f, 0x1.5895fcp-124f, 0x1.afa5bcp-83f, 0x1.f7b51cp-100f,
     0x1.060832p-12f, 0.0f, 0x1.5301b2p-66f, 0x1.719104p-97f, 0x1.c4298p-60f, 0.0f,
     0.0f, 0x1.0ba2f6p-109f, 0x1.59fd52p-118f, 0x1.b86e04p-4f, 0x1.84834ep-84f,
     0x1.3dc9ecp-54f, 0.0f, 0.0f, 0x1.80e632p-111f, 0x1.0522b2p-43f, 0x1.7069e2p-45f,
     0x1.26f456p-57f, 0.0f, 0.0f, 0.0f, 0x1.405d56p-125f, 0.0f, 0x1.bba83ap-60f,
     0x1.e9815ap-94f, 0x1.230e56p-54f, 0.0f, 0x1.c568cep-48f, 0x1.a7e3aap-79f, 0.0f,
     0.0f, 0.0f, 0x1.7839a2p-35f, 0x1.a07fecp-18f, 0.0f, 0.0f, 0x1.b65038p-122f, 0.0f,
     0x1.5de544p-78f, 0x1.bac814p-86f, 0x1.d2fb7ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.e26d2p-19f, 0x1.6faa2ap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75638ap-52f,
     0x1.419c0ep-8f, 0.0f, 0x1.9cd882p-63f, 0.0f, 0x1.3e78ap-113f, 0x1.298adp-117f,
     0x1.447baap-91f, 0x1.31f8a2p-11f, 0x1.21bc76p-30f, 0x1.ea077ap-69f,
     0x1.12f58p-43f, 0.0f, 0x1.577942p-100f, 0x1.9c1694p-7f, 0.0f, 0x1.fd766ep-121f,
     0.0f, 0x1.99a958p-18f, 0.0f, 0.0f, 0x1.009bdep-111f, 0.0f, 0.0f, 0x1.6cb61cp-79f,
     0.0f, 0.0f, 0x1.abdba4p-15f, 0x1.e1ebf4p-2f, 0x1.f96044p-40f, 0x1.4a806p-118f,
     0x1.22563ep-73f, 0x1.83cc9p-58f, 0.0f, 0x1.39a4e2p-32f, 0.0f, 0.0f,
     0x1.c2ad98p-88f, 0x1.08ffcp-42f, 0x1.714298p-57f, 0x1.6cf182p-56f,
     0x1.c696a4p-85f, 0.0f, 0.0f, 0x1.984e62p-108f, 0.0f, 0.0f, 0x1.5ae336p-123f,
     0x1.60b838p-53f, 0x1.c30a62p-10f, 0x1.aa84f6p-90f, 0.0f, 0.0f, 0x1.71750ep-123f,
     0.0f, 0.0f, 0.0f, 0x1.b8d44ap-28f, 0.0f, 0.0f, 0x1.9b365cp-109f, 0x1.4df48cp-85f,
     0x1.4fa2e8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a5917cp-77f, 0.0f,
     0x1.e9af8p-74f, 0x1.44635ep-107f, 0.0f, 0x1.9e2ce4p-61f, 0.0f, 0x1.d1541p-35f,
     0.0f, 0x1.a15ffp-86f, 0x1.6b1e54p-80f, 0.0f, 0.0f, 0x1.6713aap-116f, 0.0f, 0.0f,
     0x1.12ecfep-57f, 0x1.e6c552p-38f, 0x1.6c525ap-91f, 0.0f, 0x1.89df78p-100f, 0.0f,
     0x1.7a204cp-57f, 0x1.9cf48p-100f, 0.0f, 0.0f, 0x1.e496c8p-113f, 0x1.4131e8p-101f,
     0.0f, 0x1.d661eap-108f, 0.0f, 0x1.a07de4p-64f, 0.0f, 0.0f, 0x1.c5fe1cp-101f,
     0x1.5f2222p-17f, 0x1.0f70fcp-84f, 0.0f, 0x1.5f5026p-65f, 0x1.95603ap-93f,
     0x1.f9df56p-94f, 0.0f, 0x1.60ac0ap-48f, 0x1.a5369ap-47f, 0.0f, 0.0f,
     0x1.ae6e42p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40371p-40f, 0x1.1baee4p-31f,
     0x1.d8429ap-82f, 0x1.0cc636p-6f, 0.0f, 0.0f, 0.0f, 0x1.2f3988p-116f,
     0x1.0979cap-32f, 0.0f, 0.0f, 0x1.7a6332p-18f, 0.0f, 0x1.481582p-71f, 0.0f, 0.0f,
     0x1.6a0948p-124f, 0.0f, 0x1.fe9842p-120f, 0.0f, 0x1.04ab9cp-29f, 0x1.4c57e4p-24f,
     0x1.42bbaep-95f, 0x1.d2036cp-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64a7f8p-14f,
     0x1.bc1448p-124f, 0x1.8758cep-55f, 0x1.018736p-76f, 0x1.3a1326p-105f,
     0x1.9981bap-124f, 0.0f, 0.0f, 0x1.06bbaap-103f, 0.0f, 0x1.d9f6e8p-54f,
     0x1.c0e4bcp-74f, 0.0f, 0x1.bfc84cp-82f, 0.0f, 0.0f, 0x1.339e6cp-32f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4eee58p-34f, 0x1.f75318p-36f, 0x1.a8351ep-92f, 0x1.dec504p-122f,
     0x1.49f0ep-55f, 0.0f, 0.0f, 0x1.5cd58cp-67f, 0x1.76261p-84f, 0x1.54840ep-28f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4087e8p-13f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_atan2f4_u10kvx(tmp0, tmp1);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_atan2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atan2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
