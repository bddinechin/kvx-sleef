/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_remainderf4_kvx.c --function \
 *     Sleef_finz_remainderf4_kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.bf5abcp-12f, 0x1.cbf9f8p-23f, 0x1.70a94ap-85f, 0x1.853324p-67f, 0.0f,
     0x1.5fde04p-61f, 0x1.1fb68p-37f, 0.0f, 0x1.d4c7dp-49f, 0x1.70cad4p-126f, 0.0f,
     0.0f, 0x1.c8b682p-44f, 0.0f, 0x1.2162dcp-86f, 0x1.e1b92cp-54f, 0x1.c89b36p-114f,
     0.0f, 0.0f, 0x1.32990cp-66f, 0x1.1c7242p-90f, 0.0f, 0x1.f612e4p-122f, 0.0f, 0.0f,
     0.0f, 0x1.c54ab2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64b9fap-42f, 0x1.aa854ep-122f,
     0x1.647b0ap-108f, 0.0f, 0x1.f3160ap-31f, 0.0f, 0.0f, 0.0f, 0x1.0c4cb4p-44f,
     0x1.45c7d6p-114f, 0.0f, 0.0f, 0.0f, 0x1.c58bc2p-1f, 0.0f, 0x1.edd90ap-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.72cc5ep-63f, 0x1.0dd93ap-49f, 0.0f, 0.0f, 0x1.dd92c4p-29f,
     0x1.2e6d8cp-46f, 0x1.b826e4p-113f, 0.0f, 0x1.f0ba96p-105f, 0x1.89f0b4p-104f,
     0x1.ae8a42p-106f, 0.0f, 0.0f, 0x1.80e5a4p-11f, 0x1.beb978p-62f, 0.0f,
     0x1.b7919cp-61f, 0x1.b68b74p-16f, 0x1.ea1d22p-107f, 0.0f, 0x1.350e8ap-114f,
     0x1.178032p-61f, 0x1.1c9b14p-117f, 0x1.8a97f6p-1f, 0x1.fc7846p-35f, 0.0f,
     0x1.8ec722p-70f, 0x1.aa44cap-123f, 0.0f, 0x1.652466p-15f, 0.0f, 0x1.63e0aap-48f,
     0x1.815eaep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77f27ap-80f, 0x1.cfc90ep-42f,
     0.0f, 0x1.a1a64ep-62f, 0x1.4c6074p-60f, 0.0f, 0x1.4fc3bep-99f, 0x1.184a4cp-7f,
     0x1.a126bp-70f, 0x1.2fee18p-9f, 0x1.9fa7f8p-29f, 0x1.7a7c1cp-81f, 0.0f,
     0x1.be9d52p-15f, 0.0f, 0x1.881a36p-104f, 0x1.bd8472p-7f, 0x1.afc0dep-48f,
     0x1.a564bap-125f, 0x1.186e6cp-95f, 0x1.380e8ep-37f, 0.0f, 0x1.b9015ep-18f,
     0x1.81afb8p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09bac8p-47f, 0.0f, 0.0f,
     0x1.397926p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.68407ep-119f, 0.0f,
     0x1.c94756p-35f, 0.0f, 0.0f, 0x1.c13af6p-24f, 0x1.8b1f3ap-52f, 0x1.d15946p-74f,
     0x1.85a2e2p-50f, 0x1.47af58p-81f, 0.0f, 0.0f, 0.0f, 0x1.332c56p-49f, 0.0f, 0.0f,
     0x1.b14c1cp-62f, 0.0f, 0.0f, 0x1.6e8a0ep-65f, 0x1.a0f078p-117f, 0x1.2bb008p-3f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f34ap-37f, 0x1.82f754p-80f, 0.0f,
     0.0f, 0x1.f0352p-25f, 0.0f, 0x1.d38432p-57f, 0x1.d7c3f4p-35f, 0.0f,
     0x1.73d384p-9f, 0x1.c2fef8p-43f, 0x1.5eff2ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b47adap-123f, 0.0f, 0.0f, 0x1.310628p-90f,
     0x1.0cfe7ap-62f, 0x1.cb7766p-45f, 0.0f, 0.0f, 0x1.54d176p-104f, 0.0f, 0.0f,
     0x1.129558p-49f, 0x1.9dc486p-20f, 0x1.b9746cp-85f, 0x1.667a38p-43f, 0.0f, 0.0f,
     0x1.733138p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44941ep-47f, 0.0f, 0x1.d614f4p-107f, 0.0f, 0x1.00ddbap-24f, 0x1.474004p-82f,
     0.0f, 0.0f, 0.0f, 0x1.a739f8p-102f, 0.0f, 0.0f, 0x1.6e68d8p-24f, 0.0f, 0.0f,
     0x1.33f216p-64f, 0x1.83e094p-62f, 0.0f, 0x1.41b698p-40f, 0.0f, 0x1.cdb6f8p-66f,
     0.0f, 0x1.bfce72p-85f, 0.0f, 0.0f, 0.0f, 0x1.71d692p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f8b282p-75f, 0x1.028aa6p-38f, 0x1.c1593ap-50f, 0x1.a48e34p-93f,
     0x1.1ae454p-91f, 0x1.f6c59cp-42f, 0.0f, 0x1.85a978p-62f, 0.0f, 0x1.867432p-72f,
     0x1.3b0caep-89f, 0x1.ee04ep-101f, 0.0f, 0x1.a1fcbcp-96f, 0.0f, 0.0f,
     0x1.92572p-90f, 0x1.991abp-84f, 0x1.26b344p-101f, 0.0f, 0x1.8d7ae6p-96f,
     0x1.0ccb9p-17f, 0x1.dbefdep-113f, 0x1.59d0fap-117f, 0.0f, 0x1.b43a7ap-23f,
     0x1.29fd7ap-19f, 0.0f, 0.0f, 0x1.3c1836p-57f, 0.0f, 0x1.6f2d3p-38f, 0.0f,
     0x1.3288aap-74f, 0x1.51d54ep-98f, 0.0f, 0x1.95caf2p-41f, 0x1.81e906p-43f, 0.0f,
     0.0f, 0.0f, 0x1.c4ca3p-28f, 0.0f, 0x1.e32394p-94f, 0x1.92e362p-52f, 0.0f,
     0x1.c262d2p-22f, 0.0f, 0.0f, 0x1.00ca86p-2f, 0.0f, 0.0f, 0.0f, 0x1.cf11bp-113f,
     0x1.a8e844p-62f, 0.0f, 0x1.02652p-35f, 0.0f, 0x1.f7fc76p-115f, 0.0f, 0.0f,
     0x1.60c96p-26f, 0.0f, 0.0f, 0.0f, 0x1.ea693ap-114f, 0x1.f691d2p-47f,
     0x1.6076a2p-66f, 0.0f, 0x1.0be2cp-90f, 0x1.111292p-66f, 0x1.3a2032p-72f, 0.0f,
     0.0f, 0.0f, 0x1.4094eap-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6709ecp-78f, 0x1.818ea4p-62f, 0x1.5503bap-119f, 0x1.7cabaep-46f,
     0x1.febed8p-116f, 0.0f, 0x1.62469p-2f, 0x1.8a9534p-20f, 0.0f, 0x1.4838dcp-94f,
     0.0f, 0.0f, 0x1.aab9dp-121f, 0.0f, 0x1.f0adb2p-43f, 0x1.8d062cp-114f,
     0x1.980ee6p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.07e004p-107f, 0.0f, 0.0f,
     0x1.28e4e6p-110f, 0.0f, 0x1.05b806p-48f, 0.0f, 0.0f, 0x1.417efp-23f, 0.0f,
     0x1.bd85e6p-93f, 0.0f, 0x1.d152bep-102f, 0.0f, 0x1.f0232ap-44f, 0x1.2e0854p-122f,
     0x1.5a67cp-44f, 0x1.6beeeep-68f, 0.0f, 0.0f, 0x1.f1263cp-57f, 0x1.090db4p-111f,
     0x1.05f682p-74f, 0.0f, 0x1.69065ap-33f, 0x1.f122d2p-34f, 0.0f, 0.0f,
     0x1.b35266p-109f, 0.0f, 0x1.43f92p-58f, 0.0f, 0.0f, 0x1.0a7808p-69f, 0.0f, 0.0f,
     0x1.3c4246p-91f, 0.0f, 0x1.09b3b2p-61f, 0x1.65d654p-23f, 0.0f, 0x1.824daep-103f,
     0.0f, 0x1.fc1ep-90f, 0x1.1bd81p-72f, 0.0f, 0.0f, 0x1.9860bcp-110f, 0.0f, 0.0f,
     0x1.fb8de6p-2f, 0.0f, 0.0f, 0x1.f96168p-16f, 0x1.651be6p-4f, 0.0f,
     0x1.742f38p-68f, 0.0f, 0x1.4aeca6p-46f, 0x1.72b10ap-45f, 0.0f, 0.0f, 0.0f,
     0x1.0e389cp-126f, 0.0f, 0.0f, 0.0f, 0x1.2b10f2p-19f, 0x1.f0051cp-77f, 0.0f,
     0x1.ae5928p-122f, 0x1.1d5216p-50f, 0.0f, 0.0f, 0.0f, 0x1.0809a8p-62f, 0.0f,
     0x1.c37a74p-29f, 0x1.2acc84p-26f, 0x1.e3aec4p-42f, 0x1.485fb6p-27f,
     0x1.1513ap-60f, 0.0f, 0x1.e0be32p-122f, 0x1.b4f4bep-70f, 0.0f, 0.0f, 0.0f,
     0x1.1f0428p-116f, 0.0f, 0.0f, 0x1.60101ep-120f, 0x1.121038p-42f, 0.0f, 0x1p0f,
     0.0f, 0x1.158b3ep-46f, 0.0f, 0x1.bcfeb8p-11f, 0x1.ee3106p-68f, 0x1.0124d8p-40f,
     0x1.87a754p-117f, 0.0f, 0.0f, 0.0f, 0x1.b48ed8p-1f, 0x1.8beb5cp-90f,
     0x1.14ffc2p-32f, 0x1.61840cp-89f, 0x1.4200ccp-42f, 0.0f, 0.0f, 0x1.d9985ap-43f,
     0.0f, 0.0f, 0x1.476fep-56f, 0.0f, 0x1.c227fep-46f, 0.0f, 0.0f, 0.0f,
     0x1.79a87p-20f, 0.0f, 0x1.f037e2p-115f, 0x1.739bf4p-82f, 0x1.e0297cp-59f,
     0x1.8cbd1ep-108f, 0x1.2a9ed6p-70f, 0x1.f8eaa4p-86f, 0.0f, 0x1.f64ffap-115f, 0.0f,
     0x1.453402p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5208a8p-72f, 0.0f,
     0x1.d0d1b2p-115f, 0.0f, 0.0f, 0.0f, 0x1.6cae6ep-120f, 0.0f, 0.0f, 0x1.935962p-3f,
     0.0f, 0x1.bed0f2p-61f, 0.0f, 0x1.7dfad4p-107f, 0x1.2a1b72p-17f, 0.0f,
     0x1.6e6d6ep-52f, 0.0f, 0.0f, 0x1.68886p-4f, 0.0f, 0x1.3376a6p-17f,
     0x1.d461a4p-99f, 0x1.c81e8ep-86f, 0.0f, 0.0f, 0x1.9af678p-37f, 0.0f,
     0x1.64d2bp-115f, 0x1.9e072cp-96f, 0.0f, 0x1.95d546p-106f, 0.0f, 0x1.2fbb3ap-38f,
     0.0f, 0.0f, 0x1.c28192p-43f, 0.0f, 0x1.2ecce4p-109f, 0x1.6655e4p-18f,
     0x1.62c4aep-32f, 0x1.a55714p-44f, 0.0f, 0.0f, 0x1.2916a8p-116f, 0x1.4ab8b6p-54f,
     0.0f, 0x1.f66d92p-59f, 0.0f, 0x1.1382e6p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d17a3cp-103f, 0x1.f20b4ep-68f, 0.0f, 0.0f, 0x1.ee65aep-42f,
     0x1.10c446p-72f, 0x1.02f394p-1f, 0x1.07a6d2p-105f, 0x1.c4941ap-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c6410ep-103f, 0.0f, 0x1.b5b7eap-125f, 0x1.507e6p-2f, 0.0f, 0.0f,
     0.0f, 0x1.2b8ca8p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccbaa4p-16f,
     0x1.e3e536p-18f, 0.0f, 0.0f, 0x1.f214b2p-102f, 0x1.0fde8ep-15f, 0x1.6f3a2cp-75f,
     0x1.2c6292p-112f, 0x1.cd4d44p-75f, 0x1.72ec82p-46f, 0x1.3de56ap-72f,
     0x1.ab562ep-30f, 0x1.ba8bap-68f, 0x1.d7309cp-40f, 0x1.028deap-11f, 0.0f, 0.0f,
     0x1.c08fccp-112f, 0x1.734a04p-105f, 0x1.adc8ccp-57f, 0x1.7194b6p-40f, 0.0f, 0.0f,
     0x1.aa195cp-43f, 0.0f, 0.0f, 0x1.a8d216p-62f, 0x1.075cacp-57f, 0x1.507c3p-41f,
     0.0f, 0.0f, 0x1.7ae11ap-111f, 0x1.49d96p-100f, 0x1.41647p-14f, 0x1.5c60c6p-108f,
     0x1.926f3ep-95f, 0.0f, 0.0f, 0x1.2e5442p-40f, 0.0f, 0x1.ec6c02p-8f,
     0x1.db5e2cp-100f, 0.0f, 0.0f, 0x1.7bf91p-19f, 0x1.b2649p-111f, 0x1.2947eap-30f,
     0.0f, 0x1.a4f956p-39f, 0.0f, 0x1.54137ap-49f, 0x1.c20994p-121f, 0.0f,
     0x1.2fe0fcp-86f, 0x1.00beap-99f, 0x1.d6a52ap-80f, 0x1.332622p-57f,
     0x1.9b2918p-24f, 0.0f, 0x1.eee582p-94f, 0.0f, 0.0f, 0.0f, 0x1.0a12e8p-13f, 0.0f,
     0.0f, 0.0f, 0x1.5ed28p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6eeacp-37f,
     0x1.4b1f3cp-47f, 0x1.497a1ep-96f, 0.0f, 0x1.81123ap-21f, 0x1.5d8ce6p-109f, 0.0f,
     0.0f, 0.0f, 0x1.219688p-101f, 0.0f, 0.0f, 0x1.aa53fp-74f, 0x1.e8c024p-35f, 0.0f,
     0x1.ec2fe4p-41f, 0x1.098b86p-90f, 0.0f, 0.0f, 0x1.14de86p-91f, 0x1.8c9cc2p-109f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e37c4p-111f, 0x1.ae540cp-75f, 0.0f,
     0x1.0bc3bp-17f, 0.0f, 0x1.32cbbcp-70f, 0.0f, 0x1.402658p-90f, 0x1.4e65f6p-75f,
     0x1.fa2dep-24f, 0x1.3064bap-72f, 0x1.6e273ap-100f, 0x1.8c278p-108f, 0.0f,
     0x1.7b1e1p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64417p-36f, 0x1.f347c8p-19f,
     0x1.a97544p-41f, 0.0f, 0.0f, 0x1.0f6fa8p-4f, 0.0f, 0.0f, 0.0f, 0x1.d41cdap-73f,
     0x1.8632b2p-111f, 0x1.4cf8d6p-111f, 0.0f, 0.0f, 0x1.9b9d2ep-32f, 0.0f, 0.0f,
     0.0f, 0x1.efb294p-6f, 0x1.ff886cp-48f, 0x1.7c772ep-2f, 0.0f, 0x1.d060cp-38f,
     0x1.78987p-34f, 0.0f, 0.0f, 0x1.5023dep-113f, 0.0f, 0x1.5da9bcp-68f, 0.0f, 0.0f,
     0x1.112dbep-20f, 0.0f, 0.0f, 0x1.052864p-37f, 0.0f, 0x1.a6f4dep-26f,
     0x1.333398p-94f, 0x1.8ebeaap-15f, 0.0f, 0.0f, 0x1.b7e078p-79f, 0x1.487778p-75f,
     0.0f, 0x1.cbc878p-20f, 0.0f, 0x1.4ad662p-98f, 0.0f, 0x1.3f4444p-101f,
     0x1.82836p-83f, 0.0f, 0x1.8b5c4ap-70f, 0.0f, 0x1.a03b98p-115f, 0x1.44f2f2p-112f,
     0.0f, 0.0f, 0x1.a19ba2p-103f, 0.0f, 0.0f, 0x1.e4de44p-20f, 0x1.d30c84p-124f,
     0x1.3ba32ep-76f, 0.0f, 0x1.1c02p-24f, 0.0f, 0.0f, 0x1.3d0b72p-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bdc9fep-51f, 0.0f, 0x1.22612p-29f, 0x1.ecdbbep-125f, 0.0f, 0.0f,
     0x1.d62e8ap-49f, 0x1.f6e512p-87f, 0.0f, 0x1.a5a29ap-39f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45057ap-80f, 0.0f, 0.0f, 0x1.baa2p-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.872a5ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51b34p-15f, 0.0f,
     0x1.c88232p-6f, 0.0f, 0x1.500176p-74f, 0x1.88583cp-1f, 0.0f, 0x1.9f6f04p-57f,
     0x1.cbe65ap-83f, 0x1.ae9444p-79f, 0x1.104186p-117f, 0.0f, 0.0f, 0.0f,
     0x1.cc177ep-57f, 0x1.1d929ep-57f, 0.0f, 0x1.224c0cp-39f, 0.0f, 0.0f,
     0x1.fe3a5ap-114f, 0x1.49d978p-53f, 0.0f, 0.0f, 0.0f, 0x1.757782p-29f,
     0x1.b25cc2p-23f, 0.0f, 0.0f, 0x1.142452p-114f, 0.0f, 0x1.53a12ep-71f, 0.0f,
     0x1.8fa4d6p-94f, 0.0f, 0x1.0c02bep-83f, 0.0f, 0.0f, 0x1.0625fep-37f, 0.0f,
     0x1.ae0e46p-55f, 0x1.544b86p-58f, 0.0f, 0x1.36843cp-85f, 0.0f, 0x1.83c5ecp-105f,
     0x1.6b1112p-20f, 0.0f, 0x1.474f6ep-69f, 0.0f, 0.0f, 0x1.aa93e6p-33f,
     0x1.c6abe8p-1f, 0.0f, 0x1.12482p-86f, 0x1.3af6c8p-28f, 0x1.60fe32p-52f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.52d248p-57f, 0x1.f05a5p-4f, 0.0f, 0.0f, 0x1.3b3c64p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1d1ccp-93f, 0x1.1a2a5cp-43f, 0x1.25bd3p-124f, 0.0f,
     0x1.15ae82p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.828e46p-123f, 0x1.0570bep-27f,
     0x1.cd70d8p-13f, 0x1.cbb6fp-12f, 0x1.b84508p-23f, 0.0f, 0.0f, 0x1.30ca96p-107f,
     0x1.3dd0d6p-65f, 0.0f, 0.0f, 0x1.0edba8p-7f, 0x1.46645ep-27f, 0x1.d6a942p-29f,
     0.0f, 0x1.1ddb9p-18f, 0x1.191236p-38f, 0.0f, 0.0f, 0.0f, 0x1.ac0f1ap-121f,
     0x1.d86e74p-88f, 0x1.d3d96p-14f, 0x1.c340ep-49f, 0x1.9ed66cp-44f, 0.0f, 0.0f,
     0x1.d3592ap-119f, 0.0f, 0x1.3bfe78p-107f, 0x1.38b014p-75f, 0x1.38ae48p-96f, 0.0f,
     0.0f, 0.0f, 0x1.69469p-4f, 0x1.4e7f62p-83f, 0x1.1035f6p-37f, 0.0f,
     0x1.953a16p-57f, 0.0f, 0x1.2586b6p-31f, 0x1.66f2bp-23f, 0.0f, 0x1.af6794p-37f,
     0.0f, 0.0f, 0.0f, 0x1.ec009ep-45f, 0x1.b896acp-61f, 0x1.357a86p-97f, 0.0f,
     0x1.07ed9ap-95f, 0.0f, 0x1.de52ecp-81f, 0.0f, 0x1.9ee028p-40f, 0.0f,
     0x1.7a441cp-39f, 0x1.c036bep-25f, 0x1.bf3706p-121f, 0.0f, 0x1.e13f44p-112f,
     0x1.de9ep-87f, 0.0f, 0.0f, 0x1.a264fcp-58f, 0.0f, 0x1.a7f28ep-75f, 0.0f,
     0x1.4ede5cp-41f, 0.0f, 0x1.21b516p-100f, 0x1.6ce472p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4640ap-5f, 0x1.c4e94p-86f, 0.0f, 0x1.6c1e1p-121f, 0x1.ee4bf2p-112f,
     0x1.0462fap-112f, 0.0f, 0x1.0f57f6p-115f, 0.0f, 0.0f, 0.0f, 0x1.497da6p-3f,
     0x1.9f41bcp-15f, 0.0f, 0x1.1d514ep-78f, 0.0f, 0x1.e979c6p-106f, 0x1.465862p-9f,
     0.0f, 0x1.3f0398p-48f, 0.0f, 0x1.154fep-1f, 0x1.c1df04p-91f, 0x1.46ba86p-102f,
     0x1.f504f6p-122f, 0x1.af1fbep-40f, 0.0f, 0.0f, 0.0f, 0x1.4d28bep-18f,
     0x1.9e239ep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9c8bcep-50f, 0x1.ee3c38p-18f, 0.0f,
     0.0f, 0x1.3a2c7ep-21f, 0.0f, 0.0f, 0.0f, 0x1.d2efcep-58f, 0x1.87b7d6p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.86a948p-38f, 0x1.6ac1cp-95f, 0x1.8ae97ep-81f,
     0x1.6164f4p-45f, 0.0f, 0.0f, 0x1.5c6a2p-29f, 0.0f, 0x1.e1733cp-109f, 0.0f,
     0x1.9eda1ep-108f, 0x1.20400ep-53f, 0x1.1653ecp-101f, 0x1.116dfep-107f,
     0x1.6309f8p-119f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.0a6e6ap-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49e0fp-29f, 0x1p0f,
     0x1.5f2dfep-73f, 0x1.c96f46p-18f, 0.0f, 0.0f, 0.0f, 0x1.e9a52cp-116f,
     0x1.a37af6p-123f, 0x1.abac7p-113f, 0.0f, 0.0f, 0x1.0ce7cp-37f, 0x1.5850ecp-89f,
     0x1.a57058p-125f, 0x1.dc65e8p-7f, 0.0f, 0.0f, 0x1.a7359cp-79f, 0x1.53a56ep-8f,
     0.0f, 0x1.d7058cp-125f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.a546d4p-114f,
     0x1.8e0b1ap-86f, 0.0f, 0x1.080246p-13f, 0.0f, 0.0f, 0x1.4a224ep-90f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.45d0eep-107f, 0.0f, 0x1.9cf57ap-74f, 0.0f, 0.0f, 0x1.4cacdap-75f,
     0.0f, 0x1.ab76d2p-116f, 0.0f, 0x1.b00108p-33f, 0.0f, 0.0f, 0x1.a273f4p-11f,
     0x1.d7ae3p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.370b8p-126f, 0x1.6717a2p-65f,
     0x1.518eacp-77f, 0x1.23ea7cp-77f, 0x1.aba292p-3f, 0.0f, 0.0f, 0.0f,
     0x1.330d22p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e30d2p-17f, 0.0f, 0.0f,
     0x1.ac04d6p-42f, 0.0f, 0.0f, 0.0f, 0x1.b024fep-52f, 0.0f, 0.0f, 0.0f,
     0x1.6a191ap-63f, 0.0f, 0.0f, 0.0f, 0x1.478976p-73f, 0x1.5a1146p-35f,
     0x1.2d4a06p-47f, 0x1.15a22p-84f, 0x1.524516p-113f, 0.0f, 0.0f, 0x1.0fbf4cp-19f,
     0x1.52e794p-105f, 0x1.c1160ep-47f, 0.0f, 0.0f, 0.0f, 0x1.ff4e1ap-58f,
     0x1.272972p-84f, 0x1.4143a8p-126f, 0.0f, 0x1.b82e9p-33f, 0x1.02add8p-57f,
     0x1.aa9faap-71f, 0x1.180378p-55f, 0.0f, 0x1.2b561ap-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.962bf8p-118f, 0.0f, 0.0f, 0x1.dc1e8p-18f, 0.0f, 0x1.78f36p-112f,
     0x1.9a1738p-22f, 0x1.b2598cp-88f, 0.0f, 0.0f, 0x1.9b348ap-67f, 0x1.f93152p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee62c6p-63f, 0x1.873e5ep-1f, 0x1.f6b9d2p-115f,
     0x1.9719d8p-95f, 0.0f, 0x1.970aacp-74f, 0.0f, 0x1.2b5118p-32f, 0x1.f06aeap-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5efe3p-31f, 0.0f, 0x1.d7ebdap-70f, 0x1.3d9d14p-107f,
     0x1.c150c2p-59f, 0.0f, 0.0f, 0x1.f16ff2p-64f, 0x1.db01a6p-83f, 0x1.6ae272p-99f,
     0.0f, 0.0f, 0x1.af74dap-80f, 0.0f, 0.0f, 0x1.2e0114p-16f, 0.0f, 0x1.67aca2p-99f,
     0x1.737e7ap-86f, 0.0f, 0x1.58c852p-31f, 0x1.37f3dep-82f, 0x1.f5557p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e26d5cp-80f, 0.0f, 0x1.f0655p-88f, 0x1.500896p-36f, 0.0f,
     0.0f, 0x1.a16e36p-115f, 0.0f, 0.0f, 0.0f, 0x1.c5e1fap-62f, 0x1.bc3c08p-75f, 0.0f,
     0.0f, 0x1.7fb01cp-117f, 0.0f, 0x1.cbf4eep-42f, 0.0f, 0.0f, 0x1.8e6924p-58f,
     0x1.9d1db4p-30f, 0x1.7f83bep-108f, 0.0f, 0.0f, 0x1.b7642cp-22f, 0.0f,
     0x1.0c84ccp-22f, 0.0f, 0x1.fc3ec6p-17f, 0x1.632776p-119f, 0x1.9c017p-11f,
     0x1.77834cp-124f, 0.0f, 0.0f, 0x1.dc0e94p-93f, 0.0f, 0.0f, 0x1.d36198p-102f,
     0.0f, 0.0f, 0x1.1a2274p-37f, 0.0f, 0x1.67ec66p-41f, 0x1.c7f3cp-29f,
     0x1.3f8994p-118f, 0x1.0313dp-85f, 0.0f, 0x1.6dc2cp-38f, 0x1.9af346p-70f,
     0x1.8a215cp-63f, 0.0f, 0.0f, 0.0f, 0x1.ef08f8p-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.04eab6p-114f, 0.0f, 0x1.f0c084p-83f, 0x1.920994p-12f, 0x1.3cba4ep-42f, 0.0f,
     0.0f, 0x1.964f5cp-78f, 0.0f, 0x1.a0068ep-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9e8d46p-51f, 0.0f, 0x1.ac5db8p-121f, 0.0f, 0x1.1f687ep-19f, 0.0f,
     0x1.7f2a0cp-78f, 0x1.6b74b8p-75f, 0.0f, 0.0f, 0x1.fad77cp-94f, 0x1.00be4cp-6f,
     0.0f, 0x1.0e4214p-74f, 0x1.fff90ep-19f, 0.0f, 0x1.6120fp-118f, 0.0f,
     0x1.0c023ap-31f, 0x1.bf2132p-17f, 0x1.d6b1ep-96f, 0.0f, 0.0f, 0x1.11158ep-108f,
     0.0f, 0.0f, 0x1.87a93ep-55f, 0x1.acf87ep-21f, 0x1.7ae5ccp-114f, 0.0f,
     0x1.5c30ap-123f, 0.0f, 0.0f, 0.0f, 0x1.54e2d8p-75f, 0x1.c0ef42p-38f, 0.0f, 0.0f,
     0x1.26ccc8p-33f, 0x1.90ecb2p-119f, 0.0f, 0.0f, 0x1.4b9dacp-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a53ep-64f, 0x1.34fed6p-102f, 0.0f, 0.0f, 0x1.894c22p-35f, 0.0f,
     0x1.022e8ep-66f, 0.0f, 0x1.d7d42ep-16f, 0x1.f20d88p-68f, 0x1.aab9b8p-108f, 0.0f,
     0x1.c932a2p-9f, 0x1.8c81fep-65f, 0.0f, 0.0f, 0.0f, 0x1.07b47ep-58f, 0.0f,
     0x1.7af9dp-21f, 0x1.a55c2p-1f, 0x1.a962fap-43f, 0x1.60336p-23f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.20649p-109f, 0x1.17100ap-86f, 0x1.4a2af6p-72f, 0.0f,
     0x1.f5645ep-4f, 0.0f, 0x1.50cd5ep-124f, 0.0f, 0x1.a57b28p-62f, 0x1.42207ap-20f,
     0x1.475f14p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.233ea4p-126f,
     0x1.8effp-105f, 0x1.051772p-66f, 0.0f, 0.0f, 0.0f, 0x1.1db94cp-26f, 0.0f,
     0x1.22e76ep-35f, 0.0f, 0.0f, 0x1.7033bcp-79f, 0.0f, 0.0f, 0x1.7d4178p-74f, 0.0f,
     0x1.0343f2p-10f, 0.0f, 0.0f, 0x1.faebfp-75f, 0.0f, 0.0f, 0x1.575226p-74f, 0.0f,
     0.0f, 0x1.63f762p-108f, 0.0f, 0x1.a8f746p-119f, 0.0f, 0x1.04031ep-121f,
     0x1.1b066cp-51f, 0x1.e84feap-104f, 0x1.bc7614p-71f, 0x1.bf88cep-103f, 0.0f, 0.0f,
     0x1.9551b8p-96f, 0x1.eb8cep-107f, 0x1.88c446p-78f, 0x1.94fec2p-47f, 0.0f, 0.0f,
     0x1.b3aef6p-3f, 0.0f, 0.0f, 0x1.0d4104p-108f, 0.0f, 0.0f, 0x1.26d3bap-115f,
     0x1.dc899p-73f, 0.0f, 0.0f, 0x1.17731p-102f, 0.0f, 0x1.13a524p-103f,
     0x1.505b7cp-98f, 0.0f, 0x1.0fc28ap-37f, 0x1.18d4eap-21f, 0x1.7c321ap-62f, 0.0f,
     0x1.5dddd2p-108f, 0.0f, 0x1p0f, 0x1.7be26cp-1f, 0x1.173cc4p-112f,
     0x1.7cd69ap-56f, 0.0f, 0.0f, 0x1.70cee2p-42f, 0x1.e97ac4p-70f, 0x1.cdbd96p-73f,
     0.0f, 0.0f, 0x1.71988ep-119f, 0x1.19da5cp-13f, 0.0f, 0x1.2ef418p-78f, 0.0f,
     0x1.cc6beap-72f, 0x1.2a88f4p-88f, 0.0f, 0.0f, 0x1.c349acp-100f, 0x1.21d1f8p-64f,
     0.0f, 0.0f, 0.0f, 0x1.d348ap-68f, 0.0f, 0.0f, 0x1.8d203p-126f, 0.0f,
     0x1.570946p-91f, 0x1.9ae368p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29b8a8p-54f, 0.0f,
     0x1.b8f63cp-7f, 0.0f, 0.0f, 0x1.075c54p-34f, 0.0f, 0.0f, 0x1.13455ap-57f, 0.0f,
     0x1.cf4beep-94f, 0x1.d96e18p-11f, 0.0f, 0x1.a0936ep-98f, 0x1.98ed1ap-100f,
     0x1.a16c8cp-84f, 0.0f, 0.0f, 0.0f, 0x1.f1a07p-19f, 0.0f, 0x1.02dd08p-26f,
     0x1.47ac68p-12f, 0x1.e6c1c2p-55f, 0.0f, 0.0f, 0x1.37128ep-36f, 0.0f, 0.0f,
     0x1.eeb61ep-23f, 0.0f, 0x1.0e8deap-104f, 0.0f, 0x1.068188p-84f, 0.0f,
     0x1.24e01p-41f, 0.0f, 0x1.688db8p-74f, 0.0f, 0x1.2a048p-29f, 0x1.01ba3cp-123f,
     0x1.85d47ep-105f, 0.0f, 0x1.097e4p-43f, 0.0f, 0x1.2ce17ap-123f, 0.0f, 0.0f,
     0x1.41ffd6p-100f, 0x1.dbc06p-109f, 0x1.b54778p-61f, 0x1.6057bep-75f,
     0x1.a88ep-41f, 0x1.6a08ap-75f, 0x1.1b0e3ep-74f, 0x1.36631ap-65f, 0.0f,
     0x1.89fe32p-108f, 0.0f, 0.0f, 0x1.d8d964p-107f, 0x1.b2692ap-84f, 0x1.db001cp-7f,
     0x1.bc6dfap-36f, 0.0f, 0x1.587a38p-115f, 0x1.925a7ap-95f, 0.0f, 0.0f, 0.0f,
     0x1.7c05a6p-1f, 0x1.2f03cp-101f, 0.0f, 0.0f, 0.0f, 0x1.64d4d4p-126f,
     0x1.5a1d54p-90f, 0x1.ad7cc8p-59f, 0x1.4b91d8p-62f, 0x1.0da5e8p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cd6b7cp-79f, 0x1.48f46cp-77f, 0.0f, 0.0f, 0x1.68c8b2p-40f,
     0x1.1f138ep-122f, 0.0f, 0x1.d73ccap-97f, 0.0f, 0.0f, 0x1.e2b1ap-82f,
     0x1.32e4c8p-70f, 0x1.d4f426p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1297ep-14f,
     0x1.b9f71cp-55f, 0x1.3e663ep-48f, 0x1.ae9b98p-72f, 0.0f, 0x1.458ffcp-7f, 0.0f,
     0x1.52549ep-120f, 0x1.e3626cp-89f, 0x1.ea2c72p-59f, 0.0f, 0x1.6e55f2p-115f, 0.0f,
     0x1.60fac2p-32f, 0x1.ba2c0cp-11f, 0x1.49cfb8p-112f, 0.0f, 0x1.7baec6p-97f,
     0x1.fd23b6p-124f, 0.0f, 0x1.5d13d2p-44f, 0.0f, 0.0f, 0x1.19fccp-48f, 0.0f, 0.0f,
     0x1.2192cep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19e36ap-116f, 0.0f, 0x1.84f49p-21f,
     0.0f, 0.0f, 0.0f, 0x1.2d8a18p-49f, 0x1.4fff22p-123f, 0.0f, 0.0f, 0x1.31d7a2p-60f,
     0x1.19ce82p-60f, 0x1.39f74ep-54f, 0.0f, 0x1.127fbp-29f, 0x1.d6bffcp-109f,
     0x1.5dab2cp-33f, 0x1.0635b8p-81f, 0x1.06179cp-118f, 0.0f, 0x1.af4ee4p-70f, 0.0f,
     0.0f, 0x1.506f3ep-108f, 0x1.58e85p-2f, 0.0f, 0x1.23e53cp-75f, 0x1.421904p-29f,
     0.0f, 0x1.753776p-74f, 0.0f, 0x1.609628p-60f, 0x1.8e62d8p-78f, 0x1.99a314p-104f,
     0x1.48272ap-1f, 0x1.6560bap-85f, 0x1.13d956p-113f, 0.0f, 0.0f, 0x1.e7f83ap-20f,
     0.0f, 0x1.2ebeeep-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66a426p-16f,
     0x1.8f5e02p-43f, 0x1.f5d6aep-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bc908p-42f, 0.0f,
     0x1.d91ed2p-8f, 0x1.88a5fcp-49f, 0.0f, 0.0f, 0x1.d1205ep-60f, 0.0f, 0.0f,
     0x1.f816ep-20f, 0x1.f8a8aep-9f, 0x1.e73b7p-33f, 0x1.8a28dep-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d8b25ep-75f, 0.0f, 0.0f, 0x1.69d3f2p-12f, 0x1.23655cp-11f,
     0x1.010166p-31f, 0.0f, 0x1.4f3494p-37f, 0x1.54c908p-42f, 0x1.bfac9ep-50f,
     0x1.b67cb8p-107f, 0x1.a7080ap-101f, 0.0f, 0x1.981482p-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.41a176p-5f, 0.0f, 0x1.abb88cp-83f, 0.0f, 0x1.d18858p-107f,
     0x1.10e1dcp-13f, 0x1.6dfb8cp-39f, 0.0f, 0x1.f14984p-25f, 0x1.96c48ap-5f,
     0x1.0b5336p-79f, 0x1.a5702ap-115f, 0.0f, 0x1.0d7cf4p-7f, 0.0f, 0x1.aeab86p-10f,
     0.0f, 0x1.6452f8p-79f, 0x1.33822p-109f, 0x1.111eap-49f, 0.0f, 0.0f, 0.0f,
     0x1.f86fdp-8f, 0x1.544d7ep-107f, 0.0f, 0.0f, 0x1.d7a98ap-5f, 0x1.553cbap-102f,
     0x1.f5e42ep-63f, 0.0f, 0x1.5048e8p-91f, 0x1.eebc2p-26f, 0.0f, 0x1.749f0cp-96f,
     0.0f, 0x1.e05f46p-23f, 0.0f, 0.0f, 0x1.ab6c52p-121f, 0.0f, 0.0f, 0x1.4869ecp-69f,
     0.0f, 0.0f, 0x1.8465dcp-61f, 0.0f, 0.0f, 0x1.535618p-61f, 0x1.0938a4p-84f,
     0x1.d1aae4p-35f, 0x1.610334p-111f, 0x1.2f8c2cp-56f, 0.0f, 0x1.5adb98p-36f,
     0x1.e5ec96p-80f, 0.0f, 0x1.97a402p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ddddap-14f,
     0x1.559afap-4f, 0.0f, 0.0f, 0x1.5c6f1cp-2f, 0.0f, 0x1.4f2704p-68f, 0.0f, 0.0f,
     0.0f, 0x1.d219aep-126f, 0x1.877128p-39f, 0x1.d7cb94p-29f, 0.0f, 0x1.892cb6p-73f,
     0x1.2bf2dep-87f, 0x1.e92ap-40f, 0.0f, 0x1.c2f1cp-87f, 0x1.5534bap-93f,
     0x1.471c2ap-14f, 0x1.cd2c7ep-82f, 0.0f, 0x1.5272dep-90f, 0x1.3e89d4p-77f, 0.0f,
     0.0f, 0.0f, 0x1.98be1ep-106f, 0x1.34d7f8p-73f, 0x1.160248p-82f, 0x1.f24ceep-52f,
     0.0f, 0x1.16f096p-87f, 0.0f, 0.0f, 0x1.ed2bbp-56f, 0.0f, 0.0f, 0x1.0269bcp-25f,
     0x1.d766ecp-50f, 0.0f, 0.0f, 0x1.faf3f4p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8d1f6p-92f, 0.0f, 0x1.ea03c4p-39f, 0x1.288d04p-31f, 0x1.c17ffcp-95f,
     0x1.1d8cacp-112f, 0x1.7fa6eep-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a264cp-122f, 0x1.928f98p-65f, 0.0f, 0.0f, 0.0f, 0x1.8ea1p-48f,
     0x1.51318p-72f, 0x1.d0b6b2p-39f, 0x1.e8e02ep-84f, 0.0f, 0.0f, 0x1.5e37ccp-109f,
     0x1.75c97ap-87f, 0x1.d475c4p-64f, 0x1.175a78p-75f, 0x1.b451aep-40f, 0.0f,
     0x1.ff91bp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.462f22p-63f,
     0x1.ef9e2p-82f, 0x1p0f, 0x1.f49faap-72f, 0.0f, 0.0f, 0x1.6d581p-63f, 0.0f, 0.0f,
     0.0f, 0x1.90adcap-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c5b2cp-56f, 0x1.85fc16p-41f,
     0.0f, 0x1.1e456cp-12f, 0x1.0b7a8ap-53f, 0x1.92e42p-92f, 0x1.ea9b64p-48f, 0.0f,
     0.0f, 0x1.3c6908p-14f, 0.0f, 0.0f, 0x1.bbdcf6p-58f, 0x1.494faap-9f,
     0x1.88575ap-13f, 0.0f, 0x1.755cd4p-110f, 0.0f, 0.0f, 0x1.de2d9p-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.95df66p-117f, 0.0f, 0x1.b61bfp-103f, 0.0f, 0.0f, 0x1.176d02p-65f,
     0x1.182104p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e50e5ep-99f, 0x1.6211bp-92f,
     0x1.f479b8p-44f, 0.0f, 0x1.01695cp-11f, 0.0f, 0x1.e095bcp-22f, 0.0f, 0.0f, 0.0f,
     0x1.a58cdp-12f, 0.0f, 0x1.18e434p-107f, 0x1.9b01bep-125f, 0.0f, 0.0f,
     0x1.0ab2d4p-64f, 0.0f, 0.0f, 0x1.bb7f02p-64f, 0x1.68ed36p-116f, 0x1.e15b02p-35f,
     0.0f, 0x1.bb2cfap-108f, 0.0f, 0x1.d6b91cp-90f, 0x1.62493ap-10f, 0x1.aa2a4ep-56f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de03ccp-36f, 0.0f, 0.0f, 0x1.70d904p-37f,
     0.0f, 0.0f, 0x1.108b02p-1f, 0x1.fac11p-76f, 0.0f, 0x1.934742p-6f, 0.0f,
     0x1.dfcb88p-78f, 0.0f, 0.0f, 0x1.a1b0dap-41f, 0.0f, 0x1.a6a7c8p-55f,
     0x1.5f5da8p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d54654p-43f, 0.0f, 0x1.cdbf46p-91f, 0.0f, 0x1.c9317p-74f, 0x1.eeb84ap-76f,
     0.0f, 0.0f, 0x1.1a5aa6p-97f, 0.0f, 0.0f, 0x1.b245f6p-80f, 0x1.edacdap-78f,
     0x1.4decp-65f, 0.0f, 0x1.ca1404p-13f, 0.0f, 0.0f, 0x1.df024ep-44f,
     0x1.89353ap-83f, 0.0f, 0.0f, 0.0f, 0x1.e6e492p-59f, 0x1.f17becp-97f, 0x1p0f,
     0.0f, 0.0f, 0x1.5becaap-27f, 0x1.181fbp-64f, 0x1.5e506ep-115f, 0x1.dedd36p-104f,
     0x1.a796e8p-38f, 0.0f, 0x1.3b7696p-115f, 0x1.7a2812p-32f, 0x1.7cd144p-34f, 0.0f,
     0x1.d75df4p-48f, 0.0f, 0.0f, 0.0f, 0x1.ea5502p-126f, 0x1.b21dbcp-46f,
     0x1.5ffd7cp-42f, 0x1.b318a4p-6f, 0x1.ebca7p-52f, 0x1.8113cap-100f,
     0x1.dd02dp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a41facp-53f, 0.0f, 0.0f,
     0x1.d00f46p-95f, 0.0f, 0x1.f8d894p-88f, 0.0f, 0.0f, 0.0f, 0x1.4d396ep-78f,
     0x1.3ce73ap-64f, 0x1.d36574p-122f, 0.0f, 0.0f, 0x1.dab7a4p-116f, 0.0f,
     0x1.29fc52p-57f, 0x1.b376ccp-123f, 0x1.b17bfep-4f, 0x1.c5bfd8p-96f,
     0x1.aa5c04p-55f, 0x1.cde4c8p-50f, 0x1.36f5ap-48f, 0.0f, 0.0f, 0x1.1c0a02p-49f,
     0x1.ac43f2p-121f, 0x1.d12894p-56f, 0.0f, 0.0f, 0.0f, 0x1.ee9716p-13f
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
            tmp2 = Sleef_finz_remainderf4_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_remainderf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_remainderf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
