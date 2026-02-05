/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhf1_u35purecfma.c --function \
 *     Sleef_tanhf1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.71ed86p-10f, 0x1.5b77fep-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eec86p-32f,
     0.0f, 0x1.ae8794p-109f, 0.0f, 0.0f, 0.0f, 0x1.6420dcp-16f, 0x1.b05d22p-124f,
     0x1.d5fb9ap-80f, 0.0f, 0x1.fd07b4p-126f, 0.0f, 0.0f, 0.0f, 0x1.f8ea2p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c8000ep-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.03a97p-125f, 0x1.10bceep-73f, 0x1.032636p-6f, 0.0f, 0.0f,
     0x1.4d59c8p-78f, 0.0f, 0x1.ca98ecp-21f, 0x1.4f7becp-31f, 0x1.22dda4p-4f, 0.0f,
     0.0f, 0x1.c4a91cp-88f, 0.0f, 0.0f, 0x1.9c05bep-69f, 0.0f, 0x1.1a233p-91f, 0.0f,
     0.0f, 0x1.3676cp-44f, 0.0f, 0.0f, 0x1.9bc222p-58f, 0.0f, 0.0f, 0.0f,
     0x1.f200dp-95f, 0x1.21aaeap-98f, 0.0f, 0x1.a009b6p-21f, 0x1.270956p-108f,
     0x1.64191ap-43f, 0.0f, 0.0f, 0.0f, 0x1.744706p-40f, 0.0f, 0x1.50b4f2p-33f,
     0x1.c5223p-76f, 0.0f, 0.0f, 0.0f, 0x1.e8668cp-86f, 0.0f, 0x1.5068a2p-92f, 0.0f,
     0x1.72cbap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.71e45ap-22f, 0.0f, 0.0f,
     0x1.34668p-100f, 0x1.67304p-62f, 0x1.340244p-53f, 0x1.222d0ap-117f,
     0x1.938b3ap-10f, 0.0f, 0x1.bb7fb2p-115f, 0x1.7d5166p-118f, 0.0f, 0x1.c9b5a8p-36f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15516ap-51f, 0.0f, 0.0f, 0x1.b53172p-19f, 0.0f, 0.0f,
     0.0f, 0x1.ed31a4p-8f, 0x1.08e542p-123f, 0x1.720282p-67f, 0.0f, 0x1.bf24cp-95f,
     0x1.4e9ae8p-43f, 0x1.98ba02p-6f, 0x1.fba77ep-63f, 0.0f, 0.0f, 0.0f,
     0x1.3ecb0cp-21f, 0.0f, 0.0f, 0x1.da7ddap-66f, 0x1.44e6bp-78f, 0.0f,
     0x1.ce1f74p-98f, 0.0f, 0x1.b5c17ap-16f, 0.0f, 0x1.0e4df2p-105f, 0.0f,
     0x1.542d4p-39f, 0x1.de5adp-124f, 0x1.e50bf2p-90f, 0.0f, 0x1.e2dedp-42f,
     0x1.b1d07ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b17f24p-84f, 0x1.43c684p-78f, 0.0f,
     0x1.5024ep-4f, 0.0f, 0x1.5292b4p-88f, 0.0f, 0.0f, 0.0f, 0x1.e4131cp-14f, 0.0f,
     0.0f, 0.0f, 0x1.5fa48ap-90f, 0x1.2256p-71f, 0x1.dc1594p-25f, 0.0f,
     0x1.341472p-31f, 0.0f, 0.0f, 0x1.fe89eep-66f, 0x1.39de72p-24f, 0x1.92a11p-23f,
     0.0f, 0x1.6e0714p-32f, 0x1.662cfap-45f, 0x1.d6926ep-65f, 0x1.f7d176p-113f, 0.0f,
     0.0f, 0x1.54fa82p-95f, 0x1.46397ep-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2e714p-109f, 0.0f, 0.0f, 0x1.54b026p-123f, 0.0f, 0x1.a7beep-79f, 0.0f,
     0x1.752a1cp-60f, 0x1.ddd2e4p-119f, 0x1.892182p-67f, 0x1.a36e48p-114f,
     0x1.9d65f8p-61f, 0x1.3538dp-2f, 0.0f, 0.0f, 0.0f, 0x1.5e954ap-110f, 0.0f,
     0x1.0bc6c8p-30f, 0.0f, 0x1.78bc2cp-30f, 0x1.c9f38ap-80f, 0.0f, 0.0f,
     0x1.268468p-125f, 0x1.7b6632p-9f, 0x1.824bcp-86f, 0.0f, 0x1.20bc1ep-43f,
     0x1.36a29cp-54f, 0.0f, 0x1.9f83c2p-77f, 0.0f, 0.0f, 0.0f, 0x1.85abap-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9219f4p-108f,
     0.0f, 0x1.45ae02p-96f, 0x1.5e46acp-79f, 0.0f, 0x1.fdd03ep-76f, 0.0f, 0.0f,
     0x1.870c44p-112f, 0x1.bdbdb8p-40f, 0.0f, 0.0f, 0x1.36b976p-115f, 0.0f, 0.0f,
     0.0f, 0x1.de356cp-121f, 0x1.1b68aap-85f, 0x1.73326ap-84f, 0x1.3e830ap-111f,
     0x1.a20ceep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b86bap-73f, 0x1.a97152p-117f,
     0x1.5d931cp-89f, 0.0f, 0.0f, 0x1.6e4536p-32f, 0x1.0e034ap-1f, 0x1.c6c19p-69f,
     0.0f, 0x1.9d0f28p-33f, 0.0f, 0x1.183114p-85f, 0.0f, 0x1.1ce8ecp-119f, 0.0f,
     0x1.19285ap-25f, 0.0f, 0x1.f58eeep-5f, 0.0f, 0x1.d736a8p-82f, 0.0f,
     0x1.7661e6p-61f, 0.0f, 0x1.5515d2p-16f, 0.0f, 0x1.d7d19ap-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.007794p-49f, 0x1.d6666p-51f, 0x1.dc41dep-4f, 0.0f, 0x1.b9a7e6p-124f,
     0.0f, 0x1.63ba08p-32f, 0x1.cc57e6p-104f, 0.0f, 0.0f, 0x1.814492p-112f, 0.0f,
     0x1.a7680ap-91f, 0.0f, 0.0f, 0.0f, 0x1.9bfe3ep-62f, 0.0f, 0.0f, 0x1.e679cap-53f,
     0x1.c9e16ep-99f, 0.0f, 0x1.f10056p-28f, 0x1.603c44p-105f, 0x1.12a082p-16f,
     0x1.7f4588p-69f, 0.0f, 0.0f, 0x1.1aef08p-9f, 0x1.d92e9ep-116f, 0x1.8457fcp-33f,
     0x1.61d738p-6f, 0x1.66ace8p-76f, 0x1.2ff3f6p-34f, 0x1.e2497ep-36f,
     0x1.b2012ep-120f, 0x1.e28f24p-71f, 0.0f, 0x1.c20caap-34f, 0x1.9f33dep-14f,
     0x1.a739ep-8f, 0.0f, 0x1.80339ap-49f, 0x1.0baf0cp-14f, 0.0f, 0x1.b5474ap-30f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.978a2ap-106f, 0x1.976e92p-73f, 0.0f, 0x1.d976d4p-40f,
     0.0f, 0x1.c769cp-35f, 0x1.576ed4p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.9b4f84p-74f, 0x1.34f9bep-110f, 0x1.17fbbap-13f, 0.0f,
     0x1.80c41ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.939602p-34f, 0x1.f661c8p-65f, 0.0f,
     0.0f, 0x1.6a5826p-25f, 0x1.040bf6p-56f, 0.0f, 0x1.5bfe28p-114f, 0x1.afe1b4p-98f,
     0x1.00291cp-113f, 0x1.eac6e8p-47f, 0x1.cefdc4p-33f, 0.0f, 0.0f, 0x1.b2dc5cp-118f,
     0x1.3647b8p-14f, 0x1.9308b4p-83f, 0.0f, 0x1.bc507ep-106f, 0.0f, 0x1p0f, 0.0f,
     0x1.124dd2p-40f, 0x1.ca748p-29f, 0x1.81c0c4p-73f, 0.0f, 0.0f, 0.0f,
     0x1.74d1c8p-66f, 0.0f, 0.0f, 0x1.e64a84p-30f, 0x1.68705cp-125f, 0.0f,
     0x1.6a8c56p-25f, 0x1.029ed2p-59f, 0x1.8c9698p-24f, 0x1.a9456p-84f,
     0x1.4067dap-81f, 0.0f, 0.0f, 0.0f, 0x1.d841e4p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49d376p-62f, 0x1.d00658p-56f, 0x1.e3a9e2p-78f, 0.0f, 0.0f, 0.0f,
     0x1.0e813ep-96f, 0.0f, 0.0f, 0.0f, 0x1.27d8ep-8f, 0.0f, 0x1.75d0dp-94f,
     0x1.a2757p-10f, 0x1.60c1b4p-56f, 0.0f, 0.0f, 0.0f, 0x1.e8b8b8p-60f, 0.0f,
     0x1.b2f3b8p-100f, 0.0f, 0.0f, 0x1.cc4d42p-89f, 0.0f, 0.0f, 0x1.5b4a52p-54f,
     0x1.1759a8p-16f, 0.0f, 0x1.92c3eep-37f, 0x1.09c9b8p-93f, 0.0f, 0.0f,
     0x1.3d1396p-56f, 0x1.6fc0ccp-9f, 0x1.722252p-90f, 0x1.69475ap-59f, 0.0f,
     0x1.fc572cp-3f, 0.0f, 0x1.6cb7bcp-18f, 0x1.8beb78p-53f, 0.0f, 0x1.5b6f4cp-99f,
     0x1.107e5p-41f, 0x1.fd0864p-110f, 0x1.4b0238p-118f, 0.0f, 0x1.1618fp-79f, 0.0f,
     0x1.5182d2p-27f, 0.0f, 0.0f, 0x1.75f5d2p-23f, 0x1.1ae53ep-27f, 0.0f,
     0x1.6dee6ap-26f, 0.0f, 0x1.3535ecp-102f, 0x1.c16356p-47f, 0x1.279776p-93f,
     0x1.9deb8p-126f, 0x1.d258fap-124f, 0x1.bfcf8cp-95f, 0x1.88f28ep-43f, 0.0f, 0.0f,
     0.0f, 0x1.1cb1a8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56ebcp-103f, 0.0f,
     0x1.0e71c6p-113f, 0.0f, 0x1.c22f72p-16f, 0.0f, 0x1.f010f2p-41f, 0.0f,
     0x1.a6823ap-123f, 0.0f, 0.0f, 0x1.8d56f4p-2f, 0.0f, 0x1.0be602p-92f,
     0x1.17777cp-113f, 0x1.84d4eap-59f, 0.0f, 0.0f, 0x1.7deb12p-44f, 0x1.d58538p-29f,
     0x1.00e5d4p-58f, 0.0f, 0x1.ae3d76p-1f, 0.0f, 0.0f, 0x1.72841cp-51f, 0.0f,
     0x1.c15cbep-105f, 0x1.17d172p-86f, 0.0f, 0x1.9e4958p-53f, 0.0f, 0.0f,
     0x1.571e96p-60f, 0x1.99e3d4p-33f, 0x1.5e4c76p-21f, 0.0f, 0.0f, 0x1.e90d9ap-14f,
     0.0f, 0x1.a2b262p-108f, 0.0f, 0x1.79398cp-77f, 0.0f, 0x1.39b65cp-91f, 0.0f, 0.0f,
     0x1.5f884ep-20f, 0x1.d3196ap-81f, 0x1.acd66cp-78f, 0x1.e0c7acp-31f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.70c594p-67f, 0x1.fdcbd6p-104f, 0x1.3c73p-90f, 0.0f, 0.0f,
     0.0f, 0x1.1961c2p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff0ac4p-19f,
     0x1.4f213ap-17f, 0.0f, 0x1.8907dep-27f, 0x1.aeba1ap-32f, 0.0f, 0.0f,
     0x1.3a2c5ep-99f, 0.0f, 0x1.c75b0ap-52f, 0.0f, 0.0f, 0x1.6feb5ap-66f, 0.0f, 0.0f,
     0x1.45ee66p-119f, 0.0f, 0.0f, 0x1.051f64p-72f, 0.0f, 0x1.bd8e46p-17f,
     0x1.944584p-9f, 0.0f, 0x1.6c4056p-106f, 0x1.740398p-103f, 0x1.dfdf5ep-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a61038p-68f, 0x1.2551e6p-94f, 0x1.fd1ad6p-89f,
     0x1.f2daa6p-73f, 0.0f, 0x1.ed99bap-61f, 0x1.a4fee6p-89f, 0.0f, 0x1.b8013cp-35f,
     0x1.bad77ep-58f, 0x1.afc588p-113f, 0.0f, 0x1.0e485p-90f, 0x1.1f6a16p-48f, 0.0f,
     0x1.efe502p-2f, 0x1.23918ap-33f, 0x1.82357p-36f, 0x1.be404ep-65f, 0.0f, 0.0f,
     0.0f, 0x1.cb3bc8p-106f, 0x1.0ca7ap-42f, 0.0f, 0x1.b8077ap-52f, 0x1.90232cp-73f,
     0x1.00ec56p-85f, 0x1.1573a4p-16f, 0.0f, 0x1.f7d4eap-89f, 0x1.551d48p-35f, 0.0f,
     0x1.220ea4p-111f, 0x1.128d1cp-35f, 0.0f, 0x1.15939ap-5f, 0x1.bb3cbap-90f,
     0x1.59ca3p-3f, 0x1.e0e218p-104f, 0x1.0e140ep-10f, 0.0f, 0x1.5a0c8cp-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.90b15cp-54f, 0x1.e07faap-29f, 0x1.c9bcf8p-99f,
     0x1.3b5294p-113f, 0x1.d995fep-59f, 0x1.3737bp-23f, 0x1.3a60ep-37f,
     0x1.36498ep-13f, 0x1.44b6dep-104f, 0x1.2463ecp-30f, 0.0f, 0x1.34fcacp-112f, 0.0f,
     0x1.af8454p-126f, 0x1.91984ep-19f, 0.0f, 0x1.da9108p-47f, 0x1.c7e0eap-23f, 0.0f,
     0x1.7aa04ep-94f, 0.0f, 0.0f, 0x1.fa7e6cp-24f, 0x1.e705a4p-104f, 0.0f,
     0x1.2dbbep-73f, 0x1.e87efep-49f, 0x1.39e592p-92f, 0.0f, 0.0f, 0x1.51b5cep-101f,
     0x1.ee6936p-78f, 0.0f, 0x1.60d89p-32f, 0.0f, 0x1.2dfa94p-38f, 0.0f, 0.0f, 0.0f,
     0x1.e7ffecp-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fed3dep-85f, 0x1.80c242p-115f,
     0x1.5f7ea4p-20f, 0x1.f050ap-19f, 0x1.d1d5b8p-15f, 0x1.42740cp-11f, 0.0f,
     0x1.0d948p-7f, 0x1.925062p-112f, 0.0f, 0x1.75b116p-88f, 0x1.63f84p-76f,
     0x1.326bbp-39f, 0.0f, 0x1.1f80b8p-118f, 0x1.603f0cp-6f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.7e3fbp-11f, 0x1.151fc8p-2f, 0.0f, 0.0f, 0x1.c7c26cp-113f, 0.0f,
     0x1.e86508p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82e61ep-120f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22d4e2p-28f, 0.0f, 0x1.a390a2p-118f,
     0x1.f1426ep-26f, 0.0f, 0.0f, 0.0f, 0x1.3670a8p-81f, 0x1.43308ap-47f,
     0x1.99ca4cp-91f, 0x1.e0333cp-71f, 0.0f, 0.0f, 0x1.cb68eep-109f, 0.0f,
     0x1.f83d1ep-89f, 0.0f, 0.0f, 0x1.3fce22p-93f, 0x1.76f79ap-21f, 0.0f,
     0x1.3c52e6p-84f, 0x1.ee1fbep-102f, 0.0f, 0x1.ac7d2p-75f, 0x1.d8352cp-106f, 0.0f,
     0x1.dd703cp-19f, 0x1.4b64a2p-20f, 0.0f, 0x1.e0082ap-43f, 0x1.91fe82p-59f, 0.0f,
     0x1.425dfap-32f, 0x1.f66384p-88f, 0.0f, 0.0f, 0.0f, 0x1.1b5688p-92f,
     0x1.590682p-53f, 0.0f, 0x1.950252p-65f, 0x1.7799bp-22f, 0.0f, 0.0f, 0.0f,
     0x1.b51a64p-27f, 0x1.836344p-73f, 0x1.acf2ep-52f, 0.0f, 0x1.0b973p-120f,
     0x1.17a97ap-3f, 0.0f, 0.0f, 0x1.919f92p-64f, 0x1.78756p-51f, 0.0f,
     0x1.5c5178p-98f, 0.0f, 0.0f, 0.0f, 0x1.28e36p-119f, 0x1.3e6ffep-36f, 0.0f, 0.0f,
     0x1.f67308p-103f, 0.0f, 0x1.e25b0cp-28f, 0x1.a2feccp-56f, 0x1.8c118p-122f,
     0x1.1f5904p-77f, 0x1.3b0b46p-64f, 0.0f, 0x1.f5886p-63f, 0x1p0f, 0x1.5d9686p-51f,
     0x1.756ea8p-27f, 0.0f, 0.0f, 0x1.f16714p-87f, 0.0f, 0x1.402112p-82f, 0.0f, 0.0f,
     0x1.1f51acp-37f, 0.0f, 0.0f, 0x1.629084p-17f, 0x1.61b83p-61f, 0x1.9be4aap-93f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f3046p-8f, 0.0f, 0.0f, 0x1.add594p-92f,
     0x1.68d8c2p-112f, 0.0f, 0x1.fddc16p-58f, 0x1.f57b1ap-33f, 0x1.396e1ep-41f,
     0x1.78efd4p-83f, 0.0f, 0x1.3bafcap-88f, 0.0f, 0.0f, 0x1.fcae4ep-17f,
     0x1.2671a6p-106f, 0.0f, 0.0f, 0x1.330808p-42f, 0x1.f4918ap-85f, 0x1.f804f8p-23f,
     0.0f, 0x1.93e07ep-7f, 0.0f, 0.0f, 0x1.970b72p-60f, 0.0f, 0x1.088a3p-92f, 0.0f,
     0.0f, 0.0f, 0x1.84883p-13f, 0.0f, 0x1.c7251ep-115f, 0.0f, 0x1.70e45p-72f,
     0x1.c4976ep-24f, 0.0f, 0x1.562ec8p-44f, 0.0f, 0x1.10a0ccp-36f, 0.0f, 0.0f,
     0x1.b66c5p-86f, 0x1.aeb56p-94f, 0x1.e5b41cp-125f, 0.0f, 0x1.7e7aaep-100f,
     0x1.725344p-6f, 0x1.19ba06p-77f, 0x1.f38902p-37f, 0x1.97c6c8p-55f,
     0x1.b3b4f6p-117f, 0.0f, 0.0f, 0x1.ee838cp-113f, 0.0f, 0.0f, 0x1.c7a3e8p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88ea24p-57f, 0x1p0f, 0.0f, 0.0f,
     0x1.f5f4f6p-100f, 0x1.dfa10cp-98f, 0.0f, 0x1.07ea2p-75f, 0.0f, 0.0f, 0.0f,
     0x1.a7e986p-84f, 0.0f, 0.0f, 0.0f, 0x1.b4a474p-8f, 0x1.4ef012p-32f, 0.0f, 0.0f,
     0.0f, 0x1.08352cp-27f, 0.0f, 0x1.4f282ap-10f, 0.0f, 0x1.408d4ep-103f,
     0x1.8231aap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b555aep-118f,
     0x1.6a267ap-64f, 0x1.e88038p-43f, 0.0f, 0.0f, 0.0f, 0x1.4e22b4p-21f,
     0x1.f7afdep-61f, 0.0f, 0.0f, 0x1.e53926p-25f, 0.0f, 0.0f, 0x1.887c22p-73f,
     0x1.4fe8bep-11f, 0.0f, 0x1.94ed4p-29f, 0.0f, 0.0f, 0x1.b673c8p-112f,
     0x1.aa15f8p-76f, 0x1.2aeb1cp-119f, 0.0f, 0x1.f73e98p-57f, 0x1.566cf6p-12f, 0.0f,
     0x1.4d636ap-46f, 0.0f, 0.0f, 0x1.9e464ep-45f, 0x1.a42f5ap-124f, 0x1.3442aap-19f,
     0.0f, 0.0f, 0x1.38f6eap-7f, 0x1.d54c56p-53f, 0.0f, 0x1.0989cp-15f, 0.0f, 0.0f,
     0.0f, 0x1.956faap-6f, 0.0f, 0x1.a93cbp-4f, 0.0f, 0.0f, 0x1.406b5p-64f, 0.0f,
     0.0f, 0.0f, 0x1.427206p-31f, 0x1.57d55ap-43f, 0x1.300734p-78f, 0x1.b04608p-25f,
     0x1.1792c6p-30f, 0.0f, 0x1.0542dcp-93f, 0x1.27033ap-113f, 0.0f, 0x1.06c8e4p-4f,
     0.0f, 0x1.8256ecp-89f, 0.0f, 0x1.9dacc2p-111f, 0.0f, 0x1.7cb2eep-44f,
     0x1.06a2c8p-108f, 0.0f, 0.0f, 0.0f, 0x1.8ee882p-71f, 0x1.4c9c5ap-26f,
     0x1.6d8ae4p-15f, 0x1.463558p-55f, 0x1.6301ep-24f, 0.0f, 0x1.3530fep-55f, 0.0f,
     0.0f, 0x1.ea7042p-101f, 0x1.8a3d22p-52f, 0x1.e5f60ap-1f, 0.0f, 0.0f,
     0x1.4e9aacp-5f, 0.0f, 0x1.70f97p-57f, 0x1.c08cdep-16f, 0.0f, 0.0f,
     0x1.88f35cp-84f, 0x1.755564p-70f, 0x1.8f7b06p-43f, 0x1.8acf4ep-29f,
     0x1.be089ap-30f, 0x1.335b64p-15f, 0.0f, 0.0f, 0x1.b27142p-27f
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
            tmp1 = Sleef_tanhf1_u35purecfma(tmp0);
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
    printf("Sleef_tanhf1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhf1_u35purecfma bench acc %a\n", global_bench_acc);
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
