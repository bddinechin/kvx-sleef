/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhf4_u10kvx.c --function \
 *     Sleef_finz_atanhf4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.1d483ap-35f, 0x1.cadfc2p-29f, 0x1.ba6c2ap-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83880cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e07dcp-14f, 0.0f,
     0x1.858c9cp-51f, 0x1.946f86p-103f, 0.0f, 0x1.7d06p-108f, 0.0f, 0x1.d2ac08p-89f,
     0.0f, 0.0f, 0.0f, 0x1.f03bf6p-120f, 0x1.42dc62p-81f, 0x1.81f12ap-29f,
     0x1.61a09ep-54f, 0.0f, 0.0f, 0x1.80f0d4p-33f, 0x1.e2899p-45f, 0.0f,
     0x1.4dcddcp-110f, 0.0f, 0x1.9a38bep-36f, 0x1.4f8edp-16f, 0x1.af4cap-107f,
     0x1.d81788p-77f, 0.0f, 0x1.c9f6b4p-6f, 0x1.9f9f06p-11f, 0.0f, 0x1.e373eep-22f,
     0.0f, 0.0f, 0.0f, 0x1.4a3a4ep-41f, 0.0f, 0.0f, 0x1.8823fap-49f, 0.0f, 0.0f,
     0x1.d1f072p-88f, 0.0f, 0x1.dd1d56p-3f, 0.0f, 0x1.902126p-101f, 0x1.fc7f36p-66f,
     0x1.8c3718p-84f, 0x1.3c095ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89047cp-1f,
     0x1.dd4d4ep-116f, 0.0f, 0x1.af4b64p-37f, 0.0f, 0.0f, 0.0f, 0x1.b50924p-115f,
     0.0f, 0x1.c35f9cp-16f, 0x1.567abep-65f, 0x1.a58a44p-111f, 0x1.106b3ap-98f,
     0x1.bfe55cp-97f, 0x1.a0b6bap-66f, 0x1.70d82cp-1f, 0.0f, 0.0f, 0.0f,
     0x1.01c142p-64f, 0x1.b5ce7ap-39f, 0.0f, 0.0f, 0x1.931e06p-124f, 0.0f, 0.0f,
     0x1.d2ae92p-78f, 0x1.96913ap-124f, 0.0f, 0.0f, 0x1.9d07dap-101f, 0x1.8c6b3ep-92f,
     0x1.4dd55ep-27f, 0x1.abeea2p-118f, 0x1.bd9f2cp-73f, 0x1.5341cap-5f,
     0x1.f0cd98p-24f, 0.0f, 0.0f, 0x1.8d78acp-30f, 0x1.6d9cd8p-104f, 0.0f,
     0x1.8466b2p-85f, 0.0f, 0x1.9c92bap-72f, 0.0f, 0x1.d4605ep-71f, 0.0f,
     0x1.232088p-93f, 0.0f, 0.0f, 0.0f, 0x1.f5646ap-11f, 0x1.ba8c2ep-29f,
     0x1.756316p-116f, 0.0f, 0x1.e90de8p-24f, 0x1.3a2e4ap-3f, 0x1.b329fp-102f, 0.0f,
     0x1.3c22d6p-105f, 0.0f, 0.0f, 0x1.a00a24p-111f, 0x1.dbb684p-73f, 0.0f,
     0x1.4a32dep-102f, 0.0f, 0x1.b433fap-107f, 0x1.647504p-43f, 0x1.0b8e0ap-106f,
     0.0f, 0x1.66be9cp-57f, 0.0f, 0x1.dada58p-32f, 0.0f, 0x1.406304p-85f,
     0x1.408d84p-83f, 0x1.af589ep-91f, 0x1.79bdd8p-7f, 0x1.e7710ep-117f,
     0x1.3902eep-42f, 0x1.9d2268p-110f, 0x1.1a6508p-96f, 0.0f, 0x1.01a862p-66f, 0.0f,
     0x1.1182cep-65f, 0.0f, 0.0f, 0x1.e7e62ap-86f, 0x1.b70e18p-97f, 0.0f,
     0x1.0b1f7cp-89f, 0.0f, 0x1.74d192p-55f, 0.0f, 0.0f, 0.0f, 0x1.fa4fe8p-110f, 0.0f,
     0x1.a6f08ap-72f, 0.0f, 0.0f, 0x1.987ec2p-64f, 0.0f, 0.0f, 0x1.e8629p-90f, 0.0f,
     0.0f, 0x1.e84f4p-82f, 0.0f, 0.0f, 0.0f, 0x1.9d4996p-36f, 0x1.01572ap-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e6336p-88f, 0.0f, 0.0f, 0.0f, 0x1.e9e892p-67f,
     0x1.2a3604p-10f, 0.0f, 0.0f, 0x1.1f14bap-99f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d4f41cp-38f, 0.0f, 0x1.5d2068p-125f, 0.0f, 0.0f, 0.0f, 0x1.cea1a8p-97f, 0.0f,
     0x1.db889p-60f, 0x1.82ac26p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3459fp-61f, 0x1.6798ep-116f, 0x1.cfe0cep-20f, 0x1.c25e5cp-38f,
     0x1.26c804p-107f, 0.0f, 0.0f, 0x1.4824aep-12f, 0.0f, 0x1.927788p-80f,
     0x1.cfefccp-105f, 0x1.af5082p-113f, 0.0f, 0.0f, 0x1.6ddf48p-98f, 0x1.32113cp-77f,
     0x1.9dc4fep-105f, 0x1.d2e2f6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.27e1a6p-76f, 0.0f,
     0x1.f49a76p-15f, 0x1.5a88c4p-66f, 0x1.a47838p-76f, 0x1.44ba14p-22f, 0.0f,
     0x1.7977d4p-7f, 0x1.1f7d0ep-109f, 0.0f, 0.0f, 0x1.a1e4bp-16f, 0.0f, 0.0f,
     0x1.1c7658p-123f, 0x1.2f0ec8p-23f, 0x1.0b7dd2p-105f, 0x1.ae6fc2p-53f, 0.0f,
     0x1.c81e58p-22f, 0.0f, 0.0f, 0x1.581852p-86f, 0x1.b0c31ap-122f, 0x1.3617p-47f,
     0x1.dbad04p-10f, 0.0f, 0.0f, 0.0f, 0x1.31494ap-97f, 0x1.567f5p-66f, 0.0f,
     0x1.9305dap-2f, 0x1.5a2846p-71f, 0x1.ae43f4p-63f, 0.0f, 0x1.3fe0dp-57f, 0.0f,
     0.0f, 0x1.1e8174p-86f, 0x1.80c218p-49f, 0.0f, 0x1.c7e89p-79f, 0.0f, 0.0f, 0.0f,
     0x1.a91c5ap-16f, 0x1.064ffap-6f, 0x1.800e84p-90f, 0x1.3dd446p-79f,
     0x1.c295f6p-108f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.04f1dcp-110f, 0x1.bd0606p-14f,
     0.0f, 0x1.7a8792p-23f, 0.0f, 0.0f, 0x1.9f130ap-14f, 0x1.967b64p-109f,
     0x1.18154p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c420dap-46f,
     0x1.f45ed8p-20f, 0.0f, 0.0f, 0x1.2df82cp-84f, 0.0f, 0x1.ba60dep-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5854d4p-70f, 0.0f, 0x1.85b148p-126f, 0x1.94c084p-29f,
     0x1.a06298p-56f, 0.0f, 0x1.c92eaap-83f, 0x1.86b44p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.68bf6ep-114f, 0x1.6a8a4cp-82f, 0x1.b6d81p-121f, 0x1p0f, 0.0f,
     0x1.fb5016p-24f, 0x1.ecc218p-84f, 0x1.771f1ap-1f, 0x1.5acb0ep-69f, 0.0f,
     0x1.cc1292p-84f, 0x1.bf0924p-49f, 0.0f, 0x1.bb7c0cp-21f, 0.0f, 0x1.bb52ecp-118f,
     0x1.283f44p-41f, 0.0f, 0x1.ed43c2p-103f, 0x1.4ec87p-91f, 0x1.c4a54cp-44f,
     0x1.eb77a4p-29f, 0.0f, 0x1.b148b4p-48f, 0.0f, 0.0f, 0x1.555e4ap-124f,
     0x1.88015p-33f, 0.0f, 0.0f, 0x1.9bc7dap-28f, 0.0f, 0.0f, 0.0f, 0x1.e32846p-112f,
     0x1.db3628p-37f, 0.0f, 0x1.9832dcp-93f, 0x1.018e5cp-62f, 0x1.466a06p-62f,
     0x1.b82fcap-48f, 0x1.756da6p-88f, 0.0f, 0.0f, 0.0f, 0x1.a7e306p-106f, 0.0f, 0.0f,
     0x1.a4089ep-95f, 0.0f, 0x1.754336p-65f, 0.0f, 0x1.b61ffep-100f, 0x1.9e34bp-30f,
     0x1.72c446p-54f, 0x1.ec3042p-56f, 0x1.8ebd9ap-2f, 0.0f, 0x1.6c616ep-24f,
     0x1.15db36p-13f, 0.0f, 0x1.109cacp-15f, 0x1.c75cf2p-37f, 0x1.51921ep-5f, 0.0f,
     0.0f, 0x1.bc84f2p-109f, 0x1.7b4b08p-85f, 0x1.325ac2p-22f, 0x1.c97b06p-48f, 0.0f,
     0.0f, 0x1.fa6efcp-43f, 0x1.be351cp-3f, 0.0f, 0x1.68721p-20f, 0x1.8afd9cp-32f,
     0x1.65639p-56f, 0.0f, 0x1.8ed524p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eddffap-17f,
     0x1.b5d76cp-25f, 0x1.049aa2p-110f, 0x1.e79d62p-91f, 0.0f, 0.0f, 0x1.019ee2p-92f,
     0x1.1f9506p-17f, 0.0f, 0x1.3ac926p-87f, 0.0f, 0.0f, 0x1.97e8fcp-41f,
     0x1.866462p-116f, 0x1.d782fcp-83f, 0x1.cd5daap-6f, 0.0f, 0.0f, 0.0f,
     0x1.5b262p-119f, 0x1.adcbb8p-119f, 0.0f, 0x1.64928ap-71f, 0.0f, 0x1.805fe4p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc5026p-63f, 0x1.66c3e4p-67f,
     0x1.dbd352p-32f, 0x1.1b128cp-105f, 0.0f, 0.0f, 0.0f, 0x1.25e608p-106f, 0.0f,
     0.0f, 0x1.a27828p-96f, 0x1.aaf128p-49f, 0.0f, 0.0f, 0.0f, 0x1.0c4202p-6f, 0.0f,
     0x1.fc5562p-50f, 0x1.6f5868p-83f, 0x1.e86914p-115f, 0x1.eadea2p-71f,
     0x1.79df5cp-17f, 0.0f, 0x1.cc20b8p-2f, 0.0f, 0x1.582a7ap-122f, 0.0f,
     0x1.d82f12p-96f, 0.0f, 0.0f, 0.0f, 0x1.3f4f9cp-72f, 0.0f, 0x1.001c4p-1f,
     0x1.cb3406p-6f, 0.0f, 0x1.138604p-43f, 0x1.5a216cp-62f, 0x1.f067ecp-38f,
     0x1.c5d816p-77f, 0x1.81c41p-108f, 0.0f, 0x1.2b42a2p-43f, 0x1.45baf8p-28f,
     0x1.119906p-88f, 0x1.2c4be6p-31f, 0.0f, 0.0f, 0x1.da7a3cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.f89438p-123f, 0x1.2f7d8p-15f, 0.0f, 0.0f, 0x1.bce3bp-123f, 0x1.d2f81ap-23f,
     0x1.c64cfap-33f, 0x1.b0e7f8p-32f, 0x1.0cd6p-52f, 0.0f, 0.0f, 0x1.d20778p-110f,
     0x1.16cc4ap-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.771f0cp-109f, 0.0f, 0x1.8cc74p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f417c2p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.60a128p-55f, 0x1.d08564p-79f, 0.0f, 0x1.9c8bfcp-108f, 0.0f, 0x1.f7c6acp-64f,
     0x1.ebc3ecp-40f, 0.0f, 0.0f, 0x1.371c86p-15f, 0.0f, 0.0f, 0x1.8823e2p-68f,
     0x1.6fd1aap-28f, 0.0f, 0x1.ce016ap-35f, 0x1.2c2e0ap-52f, 0.0f, 0.0f,
     0x1.85f02p-78f, 0.0f, 0x1.cdcdbp-84f, 0x1.bcf0b4p-39f, 0.0f, 0x1.873e1ap-20f,
     0x1.d767p-126f, 0.0f, 0.0f, 0x1.203a4cp-58f, 0x1.a7e17p-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.653818p-103f, 0.0f, 0x1.245776p-8f, 0.0f, 0.0f, 0.0f, 0x1.ca717p-20f,
     0.0f, 0.0f, 0x1.ba5e9ap-109f, 0x1.5a6296p-126f, 0x1.fadd1ep-53f, 0x1.2b3aa2p-88f,
     0.0f, 0x1.2b41c2p-105f, 0.0f, 0x1.b48e56p-9f, 0x1.f2ad58p-74f, 0x1.a5835ep-113f,
     0.0f, 0x1.86f2cep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.040512p-100f,
     0x1.64adap-112f, 0x1.7fff54p-32f, 0x1.15ceap-29f, 0.0f, 0.0f, 0x1.16578ep-40f,
     0x1.193366p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a5056p-14f,
     0x1.15e2d6p-56f, 0x1.3f6be6p-63f, 0.0f, 0x1.1a701cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6360f6p-13f, 0.0f, 0x1.88246ep-87f, 0.0f, 0x1.4134d4p-70f, 0.0f, 0.0f,
     0x1.0a5f7ep-116f, 0x1.2ae87cp-103f, 0x1.40218p-55f, 0x1.eeda42p-33f, 0.0f, 0.0f,
     0x1.fd801ep-110f, 0x1.d660ecp-25f, 0x1.4f53a4p-118f, 0x1.4a7544p-20f,
     0x1.941626p-93f, 0.0f, 0.0f, 0.0f, 0x1.a8c1aap-72f, 0.0f, 0.0f, 0.0f,
     0x1.6e860cp-27f, 0x1.62ae8ep-93f, 0x1p0f, 0x1.9ba6fap-120f, 0.0f,
     0x1.3e6f64p-117f, 0x1.9ecf6cp-27f, 0x1.30631cp-54f, 0.0f, 0x1.b30502p-88f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c9b892p-37f, 0x1.b3178ap-20f, 0.0f, 0x1.4da678p-14f, 0.0f,
     0.0f, 0x1.72d85cp-53f, 0.0f, 0x1.3498b6p-119f, 0.0f, 0x1.8ee288p-103f, 0.0f,
     0x1.e1de2cp-68f, 0x1.250f46p-74f, 0x1.674112p-27f, 0.0f, 0x1.8166ccp-85f,
     0x1.6a368ap-47f, 0.0f, 0x1.d84e2ep-19f, 0x1.e25a28p-25f, 0.0f, 0x1.923abcp-30f,
     0x1.79d27ep-70f, 0.0f, 0x1.cb3b1ep-81f, 0.0f, 0x1.c4e7b4p-27f, 0.0f,
     0x1.958dcp-87f, 0x1.f6760ap-3f, 0x1.f7338p-65f, 0.0f, 0x1.fe9e6ap-36f,
     0x1.e4b82p-52f, 0x1.112254p-21f, 0x1.492242p-104f, 0x1.7084ep-68f,
     0x1.9d5442p-89f, 0.0f, 0.0f, 0x1.026fcep-21f, 0.0f, 0.0f, 0x1.21628ep-33f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.340c64p-10f, 0x1.daeb7ep-112f,
     0x1.a79c5cp-26f, 0x1.22c6b6p-91f, 0.0f, 0.0f, 0x1.bba7dcp-10f, 0.0f,
     0x1.7ec9eep-35f, 0x1.5366c4p-85f, 0x1.60aa8cp-110f, 0x1.267b7p-123f,
     0x1.3357b2p-68f, 0x1.7b03f4p-104f, 0x1.64538ap-123f, 0x1.c53c1p-29f, 0.0f,
     0x1.7592b8p-18f, 0x1.5a249ep-70f, 0.0f, 0x1.630564p-47f, 0x1.756f98p-115f,
     0x1.7d1184p-63f, 0x1.970bb6p-70f, 0.0f, 0x1.f89374p-8f, 0x1.d3faf8p-7f,
     0x1.a92bd8p-82f, 0x1.43102ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56939ap-64f,
     0x1.ae5386p-60f, 0.0f, 0.0f, 0x1.fd2e12p-64f, 0.0f, 0x1.fd705p-76f,
     0x1.8641b6p-75f, 0x1.e0138ap-45f, 0x1.be59a4p-49f, 0x1.dbaa3p-89f,
     0x1.21c6e6p-101f, 0x1.55fda6p-9f, 0.0f, 0.0f, 0x1.515344p-44f, 0x1.37bac4p-42f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1c3aap-97f, 0.0f, 0.0f, 0x1.b4c4c6p-4f,
     0x1.f3692ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df9686p-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90919ep-70f, 0.0f, 0.0f, 0x1.6337c4p-93f,
     0.0f, 0x1.5adb3p-21f, 0.0f, 0x1.13be74p-32f, 0.0f, 0x1.39414cp-109f, 0.0f, 0.0f,
     0x1.00117cp-82f, 0x1.68fb48p-78f, 0x1.9c725cp-104f, 0.0f, 0.0f, 0.0f,
     0x1.ac5202p-71f, 0.0f, 0x1.833f94p-7f, 0.0f, 0.0f, 0.0f, 0x1.6a2d26p-5f, 0.0f,
     0x1.76134p-106f, 0.0f, 0.0f, 0x1.1bf9cp-8f, 0.0f, 0.0f, 0x1.f6da8p-96f, 0.0f,
     0.0f, 0x1.dbe4d8p-65f, 0x1p0f, 0x1.093206p-49f, 0.0f, 0x1.d04802p-109f,
     0x1.4467fap-74f, 0.0f, 0.0f, 0x1.199fcp-92f, 0.0f, 0x1.7a17fep-56f,
     0x1.200068p-1f, 0x1.2288ccp-45f, 0x1.50c6bp-50f, 0x1.f9d52ap-49f,
     0x1.cbeebcp-88f, 0x1.5a41e4p-99f, 0.0f, 0x1.991bbp-96f, 0.0f, 0.0f,
     0x1.f4008ep-69f, 0x1.ead5b4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db4b2p-50f, 0x1.b99428p-115f, 0x1.837c34p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8c07ep-63f, 0x1.4d5fcp-80f,
     0x1.f255b2p-7f, 0.0f, 0x1.dcc78ap-81f, 0x1.5bb8fcp-7f, 0x1.d93dap-50f,
     0x1.6856a6p-83f, 0x1.ef8ab8p-26f, 0.0f, 0x1.dd1f8ap-59f, 0x1.e4a584p-4f, 0.0f,
     0.0f, 0.0f, 0x1.797e1p-108f, 0.0f, 0x1.927a08p-81f, 0x1.fd8068p-79f, 0.0f, 0.0f,
     0x1.0a429p-85f, 0x1.63f99p-122f, 0.0f, 0x1.c52a7ep-39f, 0.0f, 0x1.55831cp-23f,
     0.0f, 0x1.b96da4p-67f, 0x1.27f482p-10f, 0.0f, 0x1.e4bcaap-45f, 0x1.595a42p-70f,
     0x1.0e79e8p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82f8a2p-23f, 0.0f, 0x1.11d90ap-40f,
     0.0f, 0x1.ad2f0cp-53f, 0.0f, 0x1.86263ap-2f, 0x1.53b41p-25f, 0x1.853786p-37f,
     0.0f, 0x1.2cc0c2p-118f, 0x1.a2b0d2p-98f, 0.0f, 0.0f, 0.0f, 0x1.63131ep-14f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e8648p-41f, 0.0f, 0.0f, 0.0f, 0x1.865c4ap-94f,
     0.0f, 0.0f, 0x1.1c2914p-52f, 0x1.e17c4ep-21f, 0.0f, 0x1.7d3ep-41f,
     0x1.ac49f4p-59f, 0x1.39e74ep-41f, 0x1.93682cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.8d9362p-39f, 0x1.8c070ap-12f, 0x1.9a04c6p-117f, 0.0f, 0x1.b37aacp-126f, 0.0f,
     0x1.36c938p-13f, 0x1.0ffa18p-65f, 0.0f, 0x1.68abcep-88f, 0x1.2ca818p-13f,
     0x1.d175c4p-61f, 0x1.4e6382p-66f, 0x1.db167cp-63f, 0x1.fa82fap-118f,
     0x1.8ef6bap-105f, 0x1.19558cp-74f, 0x1.c24cb8p-103f, 0x1.3ba6dap-2f, 0.0f, 0.0f,
     0.0f, 0x1.e3d3eap-85f, 0x1.2f5d8p-58f, 0x1.117baap-85f, 0x1.423eb6p-67f,
     0x1.36b456p-49f, 0x1.9f00fp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d6ea6p-32f,
     0x1.cc683ap-78f, 0.0f, 0.0f, 0x1.a65eep-120f, 0x1.634cdap-83f, 0x1.7c4fa8p-74f,
     0x1.6a318ep-27f, 0x1.fd95f8p-2f, 0x1.737cb8p-15f, 0x1.01be52p-102f,
     0x1.dcdc82p-2f, 0x1.54c566p-110f, 0.0f, 0x1.613646p-81f, 0x1.6b7bdap-91f,
     0x1.d45e7cp-53f, 0.0f, 0.0f, 0x1.a47cd2p-44f, 0x1.ec3a12p-115f, 0x1.e1b934p-97f,
     0.0f, 0x1.5b7636p-22f, 0x1.ae801ep-113f, 0x1.5cb504p-81f, 0x1.f189b2p-32f,
     0x1.b698ccp-38f, 0x1.7864e4p-46f, 0x1.7e6f3cp-124f, 0x1.b77c18p-124f
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
            tmp1 = Sleef_finz_atanhf4_u10kvx(tmp0);
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
    printf("Sleef_finz_atanhf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanhf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
