/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastpowf1_u3500purecfma.c --function \
 *     Sleef_fastpowf1_u3500purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.2a6b98p-25f, 0.0f, 0.0f, 0.0f, 0x1.ffd2dp-17f, 0.0f, 0x1.3ff4a8p-65f,
     0.0f, 0x1.5a8ba6p-18f, 0x1.68d83cp-59f, 0x1.7bf796p-49f, 0.0f, 0x1.151072p-76f,
     0.0f, 0x1.4482ep-83f, 0.0f, 0.0f, 0x1.395acap-19f, 0.0f, 0x1.f4afdep-90f,
     0x1.d8d2a2p-76f, 0x1.d1ab8p-32f, 0.0f, 0.0f, 0.0f, 0x1.93c27ap-68f, 0.0f,
     0x1.8be70ep-112f, 0.0f, 0x1.6515c6p-101f, 0.0f, 0.0f, 0.0f, 0x1.e95534p-59f,
     0x1.1e4776p-69f, 0.0f, 0x1.8dee28p-51f, 0x1.853352p-8f, 0.0f, 0x1.402a0ep-2f,
     0x1.892138p-115f, 0x1.3e7a92p-41f, 0.0f, 0x1.c17c9ap-94f, 0.0f, 0.0f,
     0x1.d4291p-37f, 0x1.020c22p-94f, 0.0f, 0.0f, 0x1.f4d78p-92f, 0.0f,
     0x1.fd3c32p-85f, 0.0f, 0.0f, 0x1.b91a5p-11f, 0x1.6adeap-43f, 0.0f,
     0x1.c51204p-95f, 0x1.168016p-77f, 0x1.843ebep-115f, 0x1.a47a6ep-102f,
     0x1.11c11cp-52f, 0.0f, 0.0f, 0.0f, 0x1.325918p-89f, 0x1.0a4c52p-76f, 0.0f, 0.0f,
     0x1.42f9f2p-37f, 0x1.3a8054p-41f, 0.0f, 0x1.90c0cp-113f, 0x1.4f6d4ap-95f, 0.0f,
     0.0f, 0x1.923c06p-22f, 0.0f, 0.0f, 0x1.204ecep-68f, 0x1.632e3ap-96f,
     0x1.232faep-58f, 0.0f, 0x1.3d5cb2p-21f, 0.0f, 0x1.d3e512p-8f, 0x1.9c9822p-17f,
     0x1.d3e1a8p-101f, 0.0f, 0.0f, 0.0f, 0x1.637b26p-116f, 0x1.de6d62p-116f,
     0x1.357ae6p-121f, 0x1.df107p-33f, 0x1.1442c2p-16f, 0.0f, 0x1.c86186p-83f, 0.0f,
     0.0f, 0x1.f6ba0cp-38f, 0x1.405f1ep-76f, 0.0f, 0.0f, 0x1.7d68f6p-72f,
     0x1.9513b4p-18f, 0.0f, 0x1.075a1ap-14f, 0x1.8890f8p-62f, 0x1.64682p-91f,
     0x1.ea7b5p-78f, 0x1.686ba4p-32f, 0x1.b2d464p-62f, 0x1.6221cap-13f, 0.0f,
     0x1.378992p-87f, 0x1.577d66p-86f, 0x1.82beacp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7de05cp-100f, 0.0f, 0.0f, 0x1.0359f8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9bff24p-16f, 0x1.f40f3p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c5bd5ap-43f, 0.0f, 0x1.d9a364p-10f, 0x1.6cceep-109f, 0.0f, 0.0f, 0.0f,
     0x1.fb5776p-96f, 0.0f, 0x1.b6eaa6p-44f, 0.0f, 0x1.e9218ep-12f, 0x1.595a2ep-119f,
     0x1.1ba754p-7f, 0.0f, 0.0f, 0x1.e3e9e2p-101f, 0x1.cf027ep-39f, 0x1.3d55ep-40f,
     0x1.495f44p-99f, 0.0f, 0x1.951c8ep-23f, 0.0f, 0.0f, 0.0f, 0x1.58b9aap-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e05bd8p-8f, 0x1.9fd924p-88f, 0.0f,
     0x1.05feecp-81f, 0.0f, 0x1.1f6ecep-38f, 0.0f, 0x1.690692p-108f, 0.0f, 0.0f,
     0x1.861a34p-61f, 0.0f, 0x1.899cbap-97f, 0x1.205c58p-10f, 0.0f, 0x1.d6654cp-32f,
     0.0f, 0x1.8fc446p-27f, 0.0f, 0x1.6783dep-55f, 0x1.ab514ep-48f, 0x1.ef6a4ep-94f,
     0x1.f983bp-88f, 0x1.aa2862p-86f, 0x1.9a0c06p-6f, 0.0f, 0.0f, 0.0f,
     0x1.d5c3a4p-39f, 0x1.c9bb6ep-117f, 0.0f, 0x1.0b0a16p-26f, 0.0f, 0.0f,
     0x1.f5dcb4p-7f, 0x1.0bf2aep-70f, 0.0f, 0.0f, 0.0f, 0x1.bb741cp-90f, 0.0f,
     0x1.d20d98p-55f, 0.0f, 0x1.def2bcp-82f, 0x1.8cbeeap-118f, 0.0f, 0.0f,
     0x1.e1bfep-94f, 0x1.d94b9cp-92f, 0.0f, 0x1.422f38p-94f, 0x1.154858p-91f,
     0x1.5402a8p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e460cp-89f, 0.0f,
     0x1.62dfc6p-46f, 0.0f, 0x1.1387cep-68f, 0.0f, 0x1.eb59dep-14f, 0.0f,
     0x1.84f8eep-87f, 0.0f, 0.0f, 0.0f, 0x1.4833d8p-89f, 0.0f, 0.0f, 0.0f,
     0x1.0baba6p-16f, 0x1.6ecfb4p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e5ee5cp-15f, 0.0f, 0.0f, 0x1.f5ae92p-122f, 0.0f, 0x1.cf8894p-94f, 0.0f,
     0x1.5a1eccp-78f, 0.0f, 0x1.ca4e1ap-73f, 0x1.5c4d2ep-105f, 0x1.58ee16p-72f, 0.0f,
     0.0f, 0x1.4cdbp-1f, 0x1.96d72ap-20f, 0x1.f8c576p-8f, 0x1.1ea17p-5f, 0.0f, 0.0f,
     0.0f, 0x1.9b0344p-28f, 0x1.67236ap-33f, 0x1.ab02dp-102f, 0x1.e67a74p-41f,
     0x1.f9a7fp-93f, 0.0f, 0.0f, 0x1.117722p-26f, 0.0f, 0x1.77c1b6p-58f,
     0x1.f22ceep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0ec4ep-108f, 0.0f,
     0.0f, 0x1.8525aep-31f, 0.0f, 0.0f, 0x1.594a9ep-121f, 0.0f, 0x1.30758cp-15f,
     0x1.d7e0fcp-121f, 0.0f, 0x1.1bb1bcp-86f, 0x1.d22856p-12f, 0.0f, 0x1.81d89ep-2f,
     0.0f, 0x1.c77ea4p-14f, 0.0f, 0x1.2b2cccp-18f, 0x1.592e8ep-106f, 0.0f, 0.0f, 0.0f,
     0x1.50e496p-113f, 0.0f, 0.0f, 0x1.cdbdd6p-71f, 0x1.2e6fdp-114f, 0x1.bafec6p-114f,
     0x1.b7ffbep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.01e88ep-104f, 0x1.b7840cp-30f,
     0x1.c019ep-68f, 0x1.61853ep-40f, 0x1.24b176p-4f, 0.0f, 0x1.517adcp-2f,
     0x1.790f7ap-77f, 0.0f, 0.0f, 0.0f, 0x1.456b26p-17f, 0.0f, 0.0f, 0.0f,
     0x1.db5798p-103f, 0.0f, 0.0f, 0x1.7c32fcp-88f, 0x1.714052p-68f, 0x1.abb8d4p-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2bf12p-76f, 0x1.1b6bccp-91f, 0x1.784e4ap-54f, 0.0f,
     0.0f, 0.0f, 0x1.08ed0ep-113f, 0x1.e62ep-107f, 0.0f, 0.0f, 0x1.80f212p-121f, 0.0f,
     0.0f, 0.0f, 0x1.c2eda6p-11f, 0x1.1027fep-65f, 0.0f, 0.0f, 0x1.35ff56p-44f,
     0x1.8c3228p-11f, 0.0f, 0x1.84ea3p-59f, 0.0f, 0x1.940122p-83f, 0.0f,
     0x1.e4e60ap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef6b0cp-105f, 0x1.dec31cp-14f,
     0.0f, 0x1.361cbep-8f, 0.0f, 0.0f, 0x1.7e0b4p-88f, 0.0f, 0x1.f4ece6p-117f,
     0x1.ea7398p-82f, 0.0f, 0x1.226dacp-72f, 0.0f, 0.0f, 0.0f, 0x1.c5bfccp-24f,
     0x1.268fd2p-105f, 0x1.66e882p-123f, 0.0f, 0x1.c5728cp-64f, 0x1.1b639ep-33f,
     0x1.76290ep-9f, 0.0f, 0x1.51b50cp-54f, 0.0f, 0x1.99e098p-42f, 0.0f,
     0x1.832956p-43f, 0.0f, 0.0f, 0x1.4983c4p-14f, 0.0f, 0x1.39725cp-78f,
     0x1.e1977cp-87f, 0x1.235972p-75f, 0.0f, 0x1.a2f12ap-20f, 0.0f, 0x1.3084c8p-27f,
     0x1.72b038p-57f, 0x1.9015fcp-37f, 0.0f, 0x1.086beep-6f, 0.0f, 0x1.b6ec98p-88f,
     0x1.e7b9e4p-107f, 0x1.e5c9bap-101f, 0.0f, 0.0f, 0x1.e8ef22p-34f, 0x1.534e62p-54f,
     0x1.0eb212p-16f, 0x1.07b66p-39f, 0.0f, 0.0f, 0x1.032d94p-74f, 0.0f, 0.0f,
     0x1.b4e3f4p-81f, 0x1.e9f778p-60f, 0x1.870d24p-108f, 0.0f, 0x1.bb3228p-120f,
     0x1.ceb926p-115f, 0x1.e03bfcp-67f, 0.0f, 0.0f, 0x1.0debdap-78f, 0.0f,
     0x1.9b9bd6p-111f, 0x1.4a388ep-100f, 0.0f, 0.0f, 0x1.266404p-25f, 0x1.6c906ap-98f,
     0.0f, 0x1.9fb322p-17f, 0.0f, 0.0f, 0.0f, 0x1.abd19cp-42f, 0x1.e07baep-58f, 0.0f,
     0.0f, 0x1.55954ap-89f, 0.0f, 0x1.c0fe04p-14f, 0.0f, 0x1.477782p-13f, 0.0f, 0.0f,
     0.0f, 0x1.cf629ap-62f, 0x1.d701c8p-96f, 0.0f, 0.0f, 0x1.6b28e8p-96f, 0.0f, 0.0f,
     0x1.87e336p-105f, 0.0f, 0x1.53debep-51f, 0.0f, 0x1.703178p-108f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0faecp-102f, 0x1.75fefap-59f, 0.0f, 0x1.c32fc8p-89f,
     0x1.b9b37p-24f, 0x1.cf1eaap-69f, 0.0f, 0x1.a75256p-14f, 0.0f, 0x1.f39de6p-56f,
     0x1.fd3d08p-10f, 0x1.b346aap-126f, 0x1.a1abdp-25f, 0x1.93f5ccp-104f,
     0x1.8cf784p-27f, 0x1.36c48cp-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.acf916p-47f,
     0x1.ea703p-80f, 0.0f, 0x1.3773cep-66f, 0.0f, 0x1.824a16p-4f, 0x1.24eb98p-121f,
     0x1.cb814cp-85f, 0.0f, 0x1.c34f08p-28f, 0.0f, 0x1.ef3d9p-82f, 0.0f,
     0x1.9e5faep-67f, 0x1.d82bep-88f, 0.0f, 0.0f, 0x1.e08a88p-1f, 0x1.d0f2e8p-62f,
     0.0f, 0.0f, 0x1.9c7948p-75f, 0.0f, 0x1.488932p-117f, 0x1.645b56p-79f, 0.0f, 0.0f,
     0.0f, 0x1.d2e618p-72f, 0x1.58812ap-28f, 0.0f, 0.0f, 0x1.a6d522p-31f,
     0x1.8715fap-94f, 0x1.993864p-105f, 0x1.0e0be2p-43f, 0x1.f3509ap-8f, 0.0f,
     0x1.8c6f6p-49f, 0x1.c4041cp-36f, 0x1.d55ac2p-6f, 0x1.05d82p-67f,
     0x1.f059a4p-110f, 0.0f, 0x1.90515ap-5f, 0.0f, 0x1.74b0bp-26f, 0x1.3442c2p-35f,
     0x1.c9c462p-74f, 0x1.a10bbp-99f, 0.0f, 0x1.9733a8p-30f, 0x1.f95b5ep-53f, 0.0f,
     0x1.2ef354p-52f, 0x1.25e544p-35f, 0x1.0498a6p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9d294p-99f, 0x1.0b1fbp-32f, 0x1.932ad2p-23f, 0.0f, 0x1.b18fe2p-101f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.567304p-125f, 0x1.59687ep-16f, 0x1.f5e6acp-10f,
     0x1.42a2dcp-20f, 0.0f, 0x1.41f876p-39f, 0.0f, 0x1.96849cp-57f, 0x1.18291p-113f,
     0.0f, 0x1.c68ffp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7fedcp-65f, 0x1.fa2ffep-27f,
     0x1.3c205ep-101f, 0x1.e72402p-112f, 0.0f, 0x1.922b7cp-49f, 0.0f, 0x1.a28804p-65f,
     0x1.939ffp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68de12p-40f, 0.0f, 0x1.b587f8p-100f,
     0.0f, 0x1.88acf8p-102f, 0x1.26976ep-62f, 0.0f, 0x1p0f, 0x1.79d39cp-104f, 0.0f,
     0x1.fe4cd4p-74f, 0x1.c50928p-54f, 0.0f, 0x1.d13826p-36f, 0x1.b52a44p-82f, 0.0f,
     0x1.fa5982p-71f, 0.0f, 0x1.ee9bb6p-117f, 0.0f, 0x1.d69a9cp-108f, 0.0f,
     0x1.30ac54p-49f, 0x1.390b3ep-72f, 0x1.3deceep-21f, 0.0f, 0.0f, 0x1.eab7f4p-105f,
     0.0f, 0x1.98d6bcp-79f, 0.0f, 0.0f, 0x1.6d4932p-56f, 0x1.a62a7p-42f, 0.0f, 0.0f,
     0x1.d3375cp-92f, 0.0f, 0x1.b0f3bap-81f, 0.0f, 0x1.baa808p-113f, 0x1.f2d13cp-111f,
     0.0f, 0.0f, 0.0f, 0x1.e9bbeap-115f, 0x1.ea7cbap-80f, 0x1.61e8bap-67f,
     0x1.9d5706p-65f, 0x1.eb309ep-71f, 0.0f, 0.0f, 0x1.b497a8p-13f, 0x1.fe3f2ep-38f,
     0x1.39bc46p-74f, 0x1.29d996p-27f, 0x1.73f03ep-118f, 0x1.20b5f4p-28f,
     0x1.0e0a4ep-114f, 0x1.1a713ep-17f, 0x1.cb62c8p-38f, 0.0f, 0x1.04a52cp-27f,
     0x1.2dc08p-79f, 0.0f, 0.0f, 0x1.ce7deap-47f, 0.0f, 0.0f, 0x1.7654d2p-89f, 0.0f,
     0.0f, 0x1.45d752p-114f, 0.0f, 0x1.afa42ap-111f, 0.0f, 0x1.08eebp-61f,
     0x1.e74d58p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50a94p-21f, 0.0f, 0.0f, 0.0f,
     0x1.f401f8p-60f, 0x1.f11356p-99f, 0x1.3a38e4p-97f, 0.0f, 0x1.b91998p-23f, 0.0f,
     0.0f, 0x1.12d8e8p-111f, 0.0f, 0.0f, 0x1.be317ap-42f, 0x1.203c4cp-59f,
     0x1.8704cap-53f, 0x1.7c2c36p-69f, 0x1.c7298cp-60f, 0.0f, 0x1.19ee28p-51f,
     0x1.72cba6p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea6e0ap-11f, 0.0f, 0.0f,
     0x1.53e87ep-10f, 0.0f, 0x1.f1da4ep-111f, 0.0f, 0.0f, 0.0f, 0x1.574182p-90f,
     0x1.1f1eap-7f, 0x1.b4d4b4p-17f, 0.0f, 0x1.8a07bep-52f, 0.0f, 0x1.235f32p-32f,
     0.0f, 0.0f, 0x1.206442p-57f, 0x1.0ac2d6p-10f, 0x1.c003e8p-98f, 0.0f,
     0x1.0b6a98p-124f, 0.0f, 0x1.fa4cdp-85f, 0x1.f1028cp-29f, 0x1.a9f08cp-32f,
     0x1.bdc4b6p-2f, 0.0f, 0x1.adc426p-117f, 0.0f, 0x1.4b218p-125f, 0x1.eb85aep-88f,
     0.0f, 0.0f, 0.0f, 0x1.5606bap-16f, 0x1.6aecdep-65f, 0x1.1ecf48p-9f, 0x1p0f,
     0x1.33d1c8p-117f, 0.0f, 0.0f, 0.0f, 0x1.f79cfp-99f, 0x1.389644p-50f,
     0x1.a83f84p-126f, 0.0f, 0x1.e58274p-82f, 0x1.3fe174p-15f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42ad28p-12f, 0.0f, 0.0f, 0x1.6ed9bap-36f, 0x1.7f1232p-109f,
     0x1.06bfc4p-28f, 0.0f, 0x1.babf0cp-11f, 0.0f, 0.0f, 0.0f, 0x1.5d64dp-68f,
     0x1.ba856ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d38526p-35f, 0x1.1262c2p-44f,
     0.0f, 0x1.29290ep-24f, 0x1.eaf3d4p-6f, 0.0f, 0x1.5246ap-77f, 0x1.02d14cp-117f,
     0.0f, 0x1.9dde6ap-2f, 0.0f, 0x1.1c305ap-70f, 0x1.b32734p-29f, 0.0f, 0.0f, 0.0f,
     0x1.b16b62p-87f, 0x1.617faep-59f, 0.0f, 0x1.c038eep-7f, 0x1.17e6ep-114f,
     0x1.40d8a2p-100f, 0.0f, 0.0f, 0x1.73968cp-28f, 0.0f, 0.0f, 0.0f, 0x1.ee87c2p-62f,
     0x1.ab682ep-75f, 0x1.92261ep-111f, 0x1.9721f4p-18f, 0x1.64e294p-76f, 0.0f,
     0x1.34c7fap-109f, 0x1.cf5c1ep-61f, 0.0f, 0x1.e25e6ap-46f, 0x1.dd5b8ap-64f, 0.0f,
     0.0f, 0.0f, 0x1.00f126p-67f, 0x1.bbeeap-32f, 0x1.d3c238p-112f, 0.0f,
     0x1.3f9372p-12f, 0x1.7c5724p-117f, 0.0f, 0.0f, 0.0f, 0x1.92aa26p-75f,
     0x1.7f4154p-117f, 0.0f, 0.0f, 0x1.4116fcp-102f, 0x1.4d2004p-35f, 0.0f, 0.0f,
     0x1.459a6ap-124f, 0x1.618cc4p-6f, 0.0f, 0x1.6fe688p-93f, 0.0f, 0.0f, 0.0f,
     0x1.7bdbfcp-24f, 0x1.8d2d3cp-98f, 0.0f, 0x1.1c7a96p-56f, 0.0f, 0.0f,
     0x1.94b97ap-37f, 0x1.71abd6p-5f, 0x1.72642p-105f, 0x1.ecb1d2p-59f,
     0x1.fa01c6p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19a72cp-29f, 0.0f, 0x1.a6d72p-70f,
     0x1.f8ceaap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad1138p-100f, 0x1.04e66p-10f,
     0x1.f0581cp-30f, 0.0f, 0.0f, 0x1.e911d6p-2f, 0.0f, 0x1.1915eep-34f,
     0x1.11aa7ep-66f, 0x1.fe736ap-55f, 0x1.eb2bf4p-39f, 0.0f, 0x1.f9c736p-112f,
     0x1.215e7p-81f, 0x1.f011bap-65f, 0x1.fc011cp-60f, 0x1.c32e76p-25f, 0.0f, 0.0f,
     0x1.23b6eap-103f, 0x1.8e19eap-114f, 0x1.8f3de6p-81f, 0x1.a67cep-101f,
     0x1.3b9b02p-96f, 0.0f, 0x1.2df0acp-111f, 0.0f, 0x1.e8d1a4p-69f, 0.0f, 0.0f, 0.0f,
     0x1.053508p-40f, 0x1.27743ep-37f, 0.0f, 0.0f, 0x1.9e8274p-107f, 0.0f, 0.0f,
     0x1.641ae6p-35f, 0x1.2fd264p-30f, 0.0f, 0x1.38c98p-34f, 0x1.90b726p-10f,
     0x1.1af446p-28f, 0.0f, 0x1.4089cap-44f, 0x1.9ae112p-47f, 0x1.d7f3ccp-101f,
     0x1p0f, 0x1.43ee16p-47f, 0.0f, 0.0f, 0x1p0f, 0x1.cc1bdcp-126f, 0x1.4df168p-105f,
     0x1.e95cd4p-118f, 0x1p0f, 0x1.6ff34cp-89f, 0x1.77bea6p-100f, 0.0f,
     0x1.5864fap-120f, 0x1.04ff26p-73f, 0.0f, 0x1.ad0ebep-46f, 0x1.3c37dcp-41f, 0.0f,
     0x1.79053ep-54f, 0.0f, 0.0f, 0x1.9e2156p-83f, 0x1.cb234p-88f, 0x1.bf7906p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e9fdep-30f, 0.0f, 0x1.6aae28p-21f,
     0x1.7b53a4p-59f, 0.0f, 0x1.346d38p-100f, 0.0f, 0.0f, 0.0f, 0x1.6a1b7ep-62f,
     0x1.104022p-39f, 0.0f, 0x1.1986f6p-86f, 0x1.062e8p-4f, 0x1.98eb38p-37f,
     0x1.bcd66ep-113f, 0.0f, 0x1.aa1dc6p-60f, 0.0f, 0.0f, 0x1.2a634p-100f, 0.0f,
     0x1.fbc112p-125f, 0x1.d29df4p-24f, 0x1.349e7ep-34f, 0.0f, 0.0f, 0.0f,
     0x1.dbf47p-88f, 0x1.2b0c28p-2f, 0x1.cc2b22p-116f, 0x1.22fb2ap-78f,
     0x1.a87ab6p-1f, 0.0f, 0x1.351c74p-47f, 0.0f, 0x1.c951acp-67f, 0.0f, 0.0f,
     0x1.53bfap-35f, 0x1.dfcbdcp-71f, 0.0f, 0x1.28ca42p-117f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.2989a4p-11f, 0x1.d42158p-112f, 0.0f, 0.0f, 0x1.b2ecc2p-113f, 0.0f,
     0.0f, 0.0f, 0x1.927a9cp-95f, 0x1.bbd7a2p-116f, 0.0f, 0.0f, 0.0f, 0x1.7ba20ap-16f,
     0x1.651bb8p-93f, 0.0f, 0x1.3b215cp-11f, 0x1.1d9adap-98f, 0.0f, 0x1.0763bep-51f,
     0x1.9614fcp-72f, 0x1.d3b75p-67f, 0.0f, 0x1.c6edb2p-63f, 0x1.d95d3p-61f,
     0x1.27e892p-34f, 0.0f, 0.0f, 0.0f, 0x1.16833p-83f, 0x1.0bb7cp-115f, 0.0f,
     0x1.4c58b2p-97f, 0.0f, 0.0f, 0.0f, 0x1.62772ep-93f, 0x1.b0f386p-51f,
     0x1.3c8a9cp-38f, 0x1.673f68p-108f, 0x1.6792ecp-99f, 0x1.877d1p-24f,
     0x1.935172p-29f, 0x1.5a865ep-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.043b88p-51f, 0.0f, 0x1.84564ep-118f, 0.0f, 0x1.695a58p-125f, 0x1.6caap-87f,
     0x1.a350a2p-111f, 0x1.eb2bdp-125f, 0.0f, 0x1.7d0d2p-110f, 0.0f, 0x1.a4b962p-41f,
     0x1.ab3d68p-83f, 0x1.e7d09cp-56f, 0.0f, 0x1.1b6cb2p-114f, 0x1.2c4ffep-125f,
     0x1.dc2ee6p-31f, 0x1.ad5e5ep-34f, 0x1.6794dp-75f, 0.0f, 0.0f, 0x1.97c9b4p-28f,
     0.0f, 0.0f, 0.0f, 0x1.48009ap-20f, 0x1.6172d8p-74f, 0x1.fb9fa6p-58f, 0.0f, 0.0f,
     0.0f, 0x1.e5a40ap-53f, 0x1.862e5cp-111f, 0x1.424764p-26f, 0x1.1ece18p-99f, 0.0f,
     0x1.89ac8ap-25f, 0x1.86bbcap-114f, 0.0f, 0x1.6806dep-119f, 0.0f, 0.0f, 0.0f,
     0x1.7095d6p-124f, 0.0f, 0.0f, 0x1.3f6098p-112f, 0x1.25fe2cp-120f,
     0x1.20da3ep-92f, 0x1.7db75cp-93f, 0x1.ce537ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aafa4p-93f, 0x1.c4fbd8p-78f, 0x1.dd33c4p-47f, 0x1.62c982p-82f,
     0x1.2c8592p-84f, 0.0f, 0x1.7f0138p-118f, 0.0f, 0x1.3f45f4p-79f, 0.0f,
     0x1.4d8522p-62f, 0.0f, 0.0f, 0.0f, 0x1.d405cp-103f, 0x1.bf8f6ep-4f, 0.0f,
     0x1.3cc696p-39f, 0x1.975a44p-10f, 0.0f, 0.0f, 0x1.2827c8p-65f, 0.0f, 0.0f,
     0x1.0983fcp-48f, 0x1.3086c8p-50f, 0x1.45e334p-120f, 0.0f, 0x1.7e76b6p-81f,
     0x1.f3427cp-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77d1c2p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.36e08p-42f, 0.0f, 0x1.caac84p-94f, 0x1.43219p-4f, 0.0f, 0.0f, 0.0f,
     0x1.3a3544p-103f, 0x1.166798p-17f, 0x1.33aedep-17f, 0.0f, 0x1.ac5518p-55f,
     0x1.632ba4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18807cp-43f, 0.0f, 0.0f,
     0x1.6be1a2p-73f, 0x1.1b3a2cp-63f, 0x1.e63daep-112f, 0x1.e71918p-102f,
     0x1.f5a4c6p-66f, 0.0f, 0x1.95c276p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8d7f6p-15f,
     0x1.de6092p-111f, 0.0f, 0x1.b0668cp-118f, 0.0f, 0x1.e1f30cp-60f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.63e9f8p-16f, 0x1.98a5cep-67f, 0.0f, 0.0f, 0x1.16ac3cp-86f,
     0x1.bb49bap-58f, 0.0f, 0x1.3b1ad6p-99f, 0.0f, 0.0f, 0x1.8c62e8p-52f, 0.0f, 0.0f,
     0.0f, 0x1.7f3e7ap-7f, 0.0f, 0.0f, 0.0f, 0x1.1da0c8p-92f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.93e1fap-109f, 0.0f, 0.0f, 0x1.a3f3dp-65f, 0.0f, 0.0f,
     0x1.72ce18p-42f, 0x1.83e5f6p-116f, 0.0f, 0.0f, 0.0f, 0x1.4e0a2p-64f, 0.0f, 0.0f,
     0x1.d3c5a8p-37f, 0.0f, 0x1.03341cp-89f, 0x1.b741ccp-5f, 0x1.70544ap-8f, 0.0f,
     0.0f, 0x1.16487ap-22f, 0.0f, 0x1.6b412ep-45f, 0x1.a53d4p-115f, 0x1.1fcf5ep-89f,
     0.0f, 0x1.d38412p-54f, 0.0f, 0.0f, 0x1.6db5c8p-26f, 0.0f, 0x1.98b06ep-11f,
     0x1.e9086p-125f, 0x1.13ec8ap-87f, 0x1.9f4b44p-73f, 0.0f, 0x1.15ec56p-93f, 0.0f,
     0.0f, 0x1.331608p-112f, 0.0f, 0.0f, 0.0f, 0x1.3a861p-126f, 0.0f,
     0x1.c85e7ap-126f, 0x1.8c5c92p-75f, 0x1.db4dcp-78f, 0x1.883b12p-50f,
     0x1.e234c8p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a05a6cp-56f,
     0x1.be7942p-95f, 0.0f, 0x1.a41cdap-61f, 0x1.1f52ap-80f, 0x1.d2c086p-44f,
     0x1.6925f6p-85f, 0x1.748d44p-14f, 0.0f, 0x1.a1298ep-113f, 0.0f, 0.0f, 0.0f,
     0x1.23c532p-66f, 0x1.b22d2p-1f, 0.0f, 0x1.5983dap-123f, 0.0f, 0x1.b4722cp-44f,
     0.0f, 0x1.3de3ccp-68f, 0x1.bbacbp-109f, 0.0f, 0x1.a87a52p-20f, 0.0f,
     0x1.e992a2p-118f, 0.0f, 0.0f, 0x1.f4238p-54f, 0x1.0dd71ap-19f, 0.0f,
     0x1.2ba244p-61f, 0.0f, 0x1.1bbdd4p-99f, 0x1.c1bd2ap-70f, 0.0f, 0x1.808d86p-108f,
     0x1.f8f23ep-122f, 0.0f, 0.0f, 0x1.9ef19p-35f, 0.0f, 0.0f, 0x1.9813b8p-6f, 0.0f,
     0x1.1ae9e8p-83f, 0.0f, 0x1.92debep-4f, 0.0f, 0x1.37f7cep-56f, 0x1.c16c8ap-104f,
     0.0f, 0x1.872ec4p-57f, 0.0f, 0x1.e58832p-52f, 0.0f, 0x1.4543e8p-54f,
     0x1.04fc3p-57f, 0.0f, 0x1.338df2p-99f, 0x1.63f06cp-81f, 0x1.6999eap-64f, 0.0f,
     0x1.440ff8p-46f, 0x1.459a94p-72f, 0x1.47117ap-42f, 0.0f, 0x1.12d8e4p-49f,
     0x1.fd3638p-121f, 0.0f, 0.0f, 0x1.cc54cap-106f, 0x1.231d78p-74f, 0.0f,
     0x1.b3e3fap-46f, 0.0f, 0x1.0a7bb8p-100f, 0.0f, 0.0f, 0x1.c5f594p-72f, 0.0f, 0.0f,
     0x1.318cb6p-2f, 0.0f, 0x1.b3eb8ep-115f, 0x1.4f2728p-37f, 0x1.dfcebep-111f,
     0x1.89babcp-105f, 0x1.899608p-52f, 0x1.7a1e3ep-115f, 0.0f, 0.0f, 0x1.1949cep-53f,
     0.0f, 0.0f, 0x1.1e528cp-66f, 0.0f, 0.0f, 0.0f, 0x1.21772cp-90f, 0x1.098408p-61f,
     0.0f, 0x1.6ebcep-93f, 0x1.1b9586p-44f, 0.0f, 0x1.6ad86p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.05ebd8p-39f, 0x1.29159p-37f, 0x1.e44f5ep-37f, 0x1.7dfd0ep-117f,
     0.0f, 0x1.ebe44ap-14f, 0x1.76fc8p-11f, 0x1.855a2cp-83f, 0x1.ff1024p-52f, 0.0f,
     0.0f, 0x1.3828ap-114f, 0x1.d0715ep-44f, 0.0f, 0.0f, 0x1.bf898cp-116f,
     0x1.884136p-78f, 0x1.8c5524p-27f, 0x1.3246d6p-89f, 0x1.30304ep-92f,
     0x1.1b99bep-32f, 0x1.fbca14p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6feac6p-26f,
     0x1.6d013cp-65f, 0x1.33ae06p-58f, 0.0f, 0.0f, 0.0f, 0x1.1c8eacp-121f, 0.0f,
     0x1.6640bp-107f, 0x1.1018fep-81f, 0x1.dcb188p-44f, 0.0f, 0x1.3b50d2p-88f,
     0x1.7d6302p-52f, 0.0f, 0x1.56e026p-10f, 0x1.d731eap-31f, 0x1.053f8p-90f, 0.0f,
     0x1.8b23c6p-15f, 0.0f, 0.0f, 0x1.cce908p-123f, 0x1.b6328p-53f, 0.0f, 0.0f,
     0x1.d92d1ep-52f, 0x1.81c5aep-116f, 0x1.c93124p-7f, 0.0f, 0x1.555a0ap-14f, 0.0f,
     0x1.43ac6ap-83f, 0x1.4d3a08p-20f, 0.0f, 0x1.63f982p-103f, 0x1.c71fep-113f,
     0x1.c703a8p-106f, 0x1.d53908p-107f, 0x1.856b1ap-73f, 0x1.01967p-94f, 0.0f, 0.0f,
     0.0f, 0x1.9a84e2p-47f, 0x1.4b7934p-58f, 0.0f, 0x1.31d5b8p-101f, 0.0f,
     0x1.6449b6p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2f604cp-37f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b4b2cp-83f, 0x1.68eb02p-35f, 0x1.509c32p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.78d0e4p-79f, 0x1.a10c88p-1f,
     0x1.f0fe5cp-104f, 0.0f, 0.0f, 0x1.8629f6p-100f, 0x1.dde8bap-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.60d7d4p-28f, 0.0f, 0x1.3fa2c4p-126f, 0x1.d0302cp-111f,
     0x1.243682p-39f, 0x1.485164p-94f, 0x1.37844ap-16f, 0.0f, 0x1.99d628p-101f, 0.0f,
     0x1.116b2ap-1f, 0x1.58d16ap-19f, 0.0f, 0.0f, 0.0f, 0x1.9ffcc2p-94f, 0.0f,
     0x1.ef1ef6p-99f, 0.0f, 0x1.12024ep-14f, 0x1.092036p-80f, 0x1.969fa2p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c7d36p-49f, 0.0f, 0.0f, 0x1.489ffcp-77f, 0.0f,
     0x1.bbc202p-121f, 0.0f, 0x1.d5356p-115f, 0.0f, 0x1.a975e8p-71f, 0x1.0f3798p-112f,
     0x1.40c562p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb13cap-93f, 0x1.97c17cp-83f,
     0.0f, 0x1.467854p-32f, 0.0f, 0x1.27a602p-19f, 0x1.e50e6ap-84f, 0x1.1c9896p-79f,
     0.0f, 0x1.c7656ap-30f, 0.0f, 0x1.930e16p-93f, 0x1.be5f68p-56f, 0.0f, 0.0f, 0.0f,
     0x1.2070c4p-23f, 0.0f, 0.0f, 0x1.cbc904p-50f, 0.0f, 0x1.e65efp-73f,
     0x1.16f878p-37f, 0x1.b300f6p-30f, 0x1.1a8c7ap-78f, 0.0f, 0.0f, 0x1.6d7f94p-122f,
     0x1.ca4006p-113f, 0x1.caa716p-56f, 0.0f, 0x1.5eee88p-62f, 0x1.8af5b8p-49f,
     0x1.938f3p-126f, 0.0f, 0x1.8325fp-47f, 0x1.fcd822p-73f, 0x1.66bc44p-116f, 0.0f,
     0.0f, 0x1.f0e618p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2069b4p-25f, 0.0f,
     0x1.eb3338p-90f, 0.0f, 0x1.27cad4p-41f, 0x1.142ea4p-102f, 0x1.64db8p-84f, 0.0f,
     0.0f, 0x1.c3ef38p-5f, 0.0f, 0x1.010dc2p-16f, 0x1.909618p-37f, 0x1.880832p-99f,
     0x1.d70d7ep-41f, 0.0f, 0x1.767a3cp-90f, 0x1.f3c946p-89f, 0x1.fabb22p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de639ep-119f, 0.0f, 0x1.cb8564p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c4e0ep-78f, 0.0f, 0x1.5f643ep-14f,
     0x1.bd4016p-124f, 0.0f, 0.0f, 0x1.8ca096p-66f, 0x1.518dcep-57f, 0x1.ec03d6p-52f,
     0x1.bf4ee8p-63f, 0.0f, 0.0f, 0.0f, 0x1.0db342p-20f, 0x1.862f62p-27f,
     0x1.f4591p-60f, 0.0f, 0x1.679112p-18f, 0.0f, 0x1.b8d946p-83f, 0x1.4feb14p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.835932p-20f, 0.0f, 0x1.053b32p-37f, 0x1.179068p-51f,
     0.0f, 0x1.3930dep-18f, 0x1.a58c74p-7f, 0.0f, 0.0f, 0.0f, 0x1.227ecep-17f,
     0x1.4b3e4ep-124f, 0x1.a697c6p-124f, 0x1.889a7ep-98f, 0.0f, 0x1.80d8fp-120f, 0.0f,
     0x1.7fc2dcp-77f, 0x1.227fb8p-29f, 0.0f, 0x1.087eep-27f, 0x1.f3aceep-80f,
     0x1.a814b8p-84f, 0.0f, 0.0f, 0.0f, 0x1.9a4108p-98f, 0.0f, 0x1.39fabap-107f,
     0x1.22bc66p-47f, 0.0f, 0.0f, 0.0f, 0x1.4d617ap-30f, 0x1.2d9772p-56f, 0.0f,
     0x1.0373e2p-20f, 0x1.c67f68p-65f, 0x1.c5c4bcp-23f, 0x1.480c46p-14f,
     0x1.435c68p-105f, 0.0f, 0.0f, 0.0f, 0x1.d5d50ap-57f, 0.0f, 0.0f, 0.0f,
     0x1.48aceap-9f, 0.0f, 0.0f, 0.0f, 0x1.fde6b2p-117f, 0x1.615c7ap-65f,
     0x1.97a7b4p-31f, 0x1.c7be54p-35f, 0.0f, 0x1.49c90ep-64f, 0x1.f515ccp-102f, 0.0f,
     0x1.baed2cp-97f, 0x1.57e462p-22f, 0x1.beda76p-34f, 0x1.3ab40ap-62f, 0.0f, 0.0f,
     0x1.fb27e6p-119f, 0.0f, 0.0f, 0x1.fb69b2p-6f, 0x1.d34b54p-46f, 0.0f, 0.0f,
     0x1.2ecef6p-96f, 0x1.49be3ep-16f, 0.0f, 0x1.e0d34ap-38f, 0.0f, 0.0f,
     0x1.3c6714p-110f, 0x1.6f401p-14f, 0.0f, 0x1.69f574p-99f, 0.0f, 0x1.4dad64p-90f,
     0x1.ee40f6p-98f, 0.0f, 0x1.6f77bep-17f, 0.0f, 0x1.076122p-64f, 0.0f,
     0x1.9a6846p-70f, 0.0f, 0x1.79275ep-79f, 0.0f, 0.0f, 0.0f, 0x1.8c4d92p-1f,
     0x1.ff890ap-80f, 0x1.d59696p-55f, 0x1.8c08f8p-84f, 0x1.ce948p-75f,
     0x1.26b6fap-44f, 0.0f, 0.0f, 0.0f, 0x1.edcf1ep-85f, 0x1.5c2c32p-47f,
     0x1.4981aap-35f, 0x1.67eb2p-80f, 0.0f, 0x1.49ad14p-35f, 0x1.56dac6p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.584a4ep-42f, 0.0f, 0.0f, 0.0f,
     0x1.93d826p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.40515ep-98f, 0x1.6fe366p-121f,
     0x1.3e7164p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4eb10ep-117f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9c2c76p-119f, 0.0f, 0x1.87122ep-112f, 0.0f, 0.0f, 0x1.4a94a8p-95f,
     0x1.98809p-68f, 0x1.024a54p-72f, 0x1.8b9036p-82f, 0.0f, 0x1.e3e93p-58f, 0.0f,
     0.0f, 0x1.fa19aap-120f, 0x1.5f2f66p-101f, 0x1.719fbep-81f, 0.0f, 0.0f,
     0x1.9bc044p-70f, 0.0f, 0x1.5c6848p-3f, 0x1.3e3906p-29f, 0x1.4019d8p-33f, 0.0f,
     0.0f, 0.0f, 0x1.f25b08p-46f, 0x1.fe54bep-83f, 0x1.a0d116p-20f, 0.0f,
     0x1.b6c1p-32f, 0.0f, 0x1.17dbc6p-52f, 0.0f, 0.0f, 0x1.8b7b2cp-12f,
     0x1.6a3d52p-39f, 0.0f, 0x1.ec9852p-14f, 0x1.08f66ep-123f, 0x1.f680d4p-81f,
     0x1.409dfp-93f, 0x1.432fdep-88f, 0x1.822256p-38f, 0x1.9443e2p-7f, 0x1.115bf6p-2f,
     0x1.46fb9p-32f, 0.0f, 0x1.a8706p-118f, 0.0f, 0.0f, 0x1.03668cp-50f,
     0x1.9aa966p-114f, 0x1.ed5838p-111f, 0x1.6f88fap-12f, 0x1.ee4028p-108f, 0.0f,
     0x1.ef8c22p-108f, 0x1.42a51ap-85f, 0x1.574614p-43f, 0.0f, 0x1.430486p-24f, 0.0f,
     0.0f, 0x1.0c691ep-84f, 0x1.6da06cp-62f, 0x1.c41d4p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5e775ap-7f, 0x1.1b0714p-82f, 0x1.d343e8p-50f, 0x1.54b03cp-9f,
     0x1.09f00ap-31f, 0.0f, 0.0f, 0.0f, 0x1.f9cdecp-62f, 0.0f, 0x1.e58162p-23f, 0.0f,
     0x1.36340cp-16f, 0.0f, 0x1.22511cp-24f, 0.0f, 0x1.8a9312p-64f, 0.0f,
     0x1.891e62p-71f, 0x1.c23abep-105f, 0x1.17c9a8p-75f, 0x1.a16e6cp-36f, 0.0f,
     0x1.4ef6bp-91f, 0.0f, 0x1.eb52bcp-92f, 0x1.63882p-21f, 0.0f, 0.0f,
     0x1.01b6bep-54f, 0x1.7ccf7ep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.48ed22p-89f, 0x1.f2f3f6p-35f, 0.0f, 0x1.da30bap-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.06243ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eac66ep-104f, 0.0f, 0.0f, 0.0f, 0x1.2842f8p-21f, 0x1.8979a2p-111f,
     0x1.beb4p-2f, 0.0f, 0.0f, 0x1.660322p-40f, 0x1.b067a2p-117f, 0.0f, 0.0f,
     0x1.5d56d2p-23f, 0x1.f8deb2p-72f, 0.0f, 0x1.f11ad6p-6f, 0.0f, 0x1.f71b4cp-67f,
     0.0f, 0.0f, 0x1.f50e62p-108f, 0.0f, 0x1.79e6c4p-67f, 0x1.960e86p-9f, 0.0f,
     0x1.033be2p-5f, 0.0f, 0x1.f34f0ep-80f, 0x1.0e0ed2p-53f, 0.0f, 0.0f,
     0x1.5a24a6p-73f, 0x1.a3ccap-116f, 0x1.d0fb06p-123f, 0.0f, 0.0f, 0x1.d8504ap-103f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9c14ap-7f, 0x1.b15e14p-86f, 0.0f,
     0.0f, 0x1.8d3cap-117f, 0.0f, 0x1.9db9fp-15f, 0x1.c7badap-22f, 0.0f,
     0x1.278466p-55f, 0x1.bc8774p-66f, 0.0f, 0.0f, 0x1.1fddc8p-29f, 0x1.55412ap-114f,
     0.0f, 0.0f, 0x1.6c662cp-92f, 0.0f, 0x1.f3468ap-124f, 0x1.33ec0ap-48f,
     0x1.57e3ep-62f, 0x1.413316p-47f, 0x1.33338p-120f, 0.0f, 0x1.a560eap-70f, 0.0f,
     0.0f, 0x1.745ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc09bcp-110f, 0.0f,
     0x1.9f99dap-106f, 0.0f
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
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fastpowf1_u3500purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_fastpowf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastpowf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
