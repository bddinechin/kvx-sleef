/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhf1_u10purecfma.c --function \
 *     Sleef_atanhf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0x1.e91aeep-70f, 0x1.54e2c2p-67f, 0.0f, 0.0f, 0.0f, 0x1.37b3a8p-105f,
     0.0f, 0x1.e0615ap-85f, 0x1.877c76p-75f, 0.0f, 0x1.2854aep-13f, 0x1.57db34p-58f,
     0.0f, 0x1.8b41b2p-115f, 0x1.10dd86p-108f, 0.0f, 0x1.d813cep-123f,
     0x1.0b76eap-37f, 0.0f, 0x1.b1a57p-32f, 0x1.afef9cp-13f, 0x1.a2f98ep-23f, 0.0f,
     0.0f, 0x1.18d6p-16f, 0.0f, 0x1.f0acecp-112f, 0x1.105e1ep-107f, 0x1.96092ep-75f,
     0.0f, 0.0f, 0x1.40f006p-104f, 0.0f, 0x1.838438p-123f, 0x1.74a596p-90f,
     0x1.d67c8ep-55f, 0.0f, 0x1.c79e2ap-33f, 0x1.fb9682p-6f, 0x1.c561cep-35f, 0.0f,
     0.0f, 0x1.3e14cep-46f, 0.0f, 0x1.2b59dap-45f, 0x1.5c20a4p-95f, 0x1.ecdc02p-72f,
     0.0f, 0x1.ac1af4p-111f, 0x1.9d0b36p-46f, 0x1.6d3a16p-67f, 0x1.d2e6cep-64f,
     0x1.6771d4p-119f, 0.0f, 0x1.87bafp-39f, 0x1.230072p-100f, 0.0f, 0x1.8f1e3ep-31f,
     0x1.ec42a2p-103f, 0x1.d8650cp-101f, 0.0f, 0.0f, 0x1.44d192p-19f, 0x1.b26516p-67f,
     0x1.930d04p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00b5dp-87f, 0x1.370d82p-12f,
     0.0f, 0x1.5aad36p-52f, 0x1.53d54p-123f, 0.0f, 0.0f, 0.0f, 0x1.ecbdd6p-13f,
     0x1.771726p-85f, 0.0f, 0.0f, 0x1.38e2e4p-43f, 0x1.e7d942p-83f, 0.0f,
     0x1.e01cap-9f, 0x1.1208a8p-33f, 0x1.439f32p-26f, 0.0f, 0x1.c5bcf8p-17f, 0.0f,
     0.0f, 0x1.7b4a74p-121f, 0.0f, 0.0f, 0.0f, 0x1.7dd89cp-42f, 0.0f, 0.0f, 0.0f,
     0x1.d481eep-65f, 0.0f, 0x1.4962d4p-12f, 0.0f, 0x1.132614p-90f, 0x1.f73d3ap-63f,
     0x1.5c484ap-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9770ep-3f, 0x1.e09d66p-104f, 0.0f,
     0x1.1df65p-25f, 0x1.cac29ep-38f, 0x1.e574ap-18f, 0x1.b8a474p-93f,
     0x1.82720ep-91f, 0x1.ff235cp-71f, 0x1.d65f9p-118f, 0x1.76315p-18f, 0.0f,
     0x1.a5196cp-101f, 0x1.c7777cp-81f, 0x1.fa5bbep-65f, 0.0f, 0.0f, 0x1.4e49f6p-62f,
     0x1.16e7c2p-98f, 0x1.4b772p-9f, 0.0f, 0.0f, 0x1.653c7cp-96f, 0.0f, 0.0f,
     0x1.aad3f8p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd003ep-119f, 0.0f,
     0x1.0a4e94p-49f, 0.0f, 0.0f, 0.0f, 0x1.aeffb6p-9f, 0.0f, 0x1.975d08p-57f,
     0x1.1f3d66p-28f, 0.0f, 0x1.d91b78p-116f, 0x1.75ea94p-124f, 0x1.c15d3ep-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aec902p-62f, 0.0f, 0x1.e1c0b6p-65f, 0x1.b9a666p-50f,
     0x1.30f45cp-49f, 0.0f, 0x1.18098ap-110f, 0.0f, 0x1.634432p-124f, 0x1.855e48p-9f,
     0.0f, 0.0f, 0.0f, 0x1.aa87b6p-80f, 0.0f, 0.0f, 0x1.83204p-42f, 0x1.1db8a6p-94f,
     0.0f, 0x1.e1d47cp-104f, 0x1.ffa008p-107f, 0x1.b21caep-126f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3bb194p-32f, 0.0f, 0x1.b6f4a4p-106f, 0x1.e1598p-27f, 0.0f, 0.0f,
     0.0f, 0x1.4949fep-53f, 0.0f, 0x1.ce6c06p-111f, 0x1.1d0cc2p-76f, 0x1.6b1c1ap-80f,
     0x1.6b429p-93f, 0x1.108dbap-119f, 0x1.8ccb4ap-92f, 0x1.f33e7p-43f,
     0x1.15dc22p-67f, 0.0f, 0x1.a06966p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a02646p-103f,
     0x1.c120dap-111f, 0x1.5c9a2cp-122f, 0.0f, 0.0f, 0x1.94e578p-87f, 0x1.066384p-27f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9d7bp-6f, 0x1.78360ep-75f, 0.0f, 0x1.a3cbd2p-124f,
     0x1.58cd4p-10f, 0.0f, 0.0f, 0x1.66e322p-99f, 0x1.a26e64p-39f, 0x1.7596c6p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c2754p-65f, 0x1.eb2edap-72f, 0x1.fdd22cp-120f, 0.0f,
     0x1.81df0ep-44f, 0x1.c96bbep-52f, 0.0f, 0.0f, 0.0f, 0x1.26dea8p-44f, 0.0f, 0.0f,
     0.0f, 0x1.029398p-33f, 0x1.c6abe2p-84f, 0x1.a7b21p-103f, 0.0f, 0x1.42480cp-28f,
     0x1.06d56cp-116f, 0x1.69936ep-110f, 0.0f, 0x1.a594c2p-7f, 0.0f, 0x1.f0e228p-59f,
     0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.4ae8d2p-116f, 0.0f, 0.0f, 0x1.8644f4p-117f, 0.0f,
     0x1.240e0cp-50f, 0x1.0769d6p-121f, 0x1.63eaeap-12f, 0.0f, 0x1.ccd94ep-78f,
     0x1.4a876cp-66f, 0x1.c6e6ecp-78f, 0.0f, 0.0f, 0.0f, 0x1.f23d22p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c47098p-12f, 0.0f, 0.0f, 0.0f, 0x1.0803cep-49f,
     0.0f, 0x1.1f44bap-19f, 0.0f, 0x1.3c25f4p-78f, 0x1.f4855ap-123f, 0.0f,
     0x1.84898cp-124f, 0x1.f338f4p-61f, 0.0f, 0.0f, 0.0f, 0x1.2b9262p-70f, 0.0f, 0.0f,
     0.0f, 0x1.927a7p-48f, 0.0f, 0.0f, 0x1.75ef96p-99f, 0.0f, 0.0f, 0x1.2f510ap-37f,
     0.0f, 0x1.d5f25p-44f, 0x1.6f7d04p-4f, 0x1.b04448p-47f, 0x1.1a9f48p-33f,
     0x1.2e0228p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d083d8p-115f,
     0x1.5f72e4p-40f, 0.0f, 0.0f, 0x1.c69084p-69f, 0x1.17a614p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f8d704p-29f, 0x1.bcc086p-93f, 0x1.e84cdp-110f,
     0x1.af7f32p-63f, 0.0f, 0x1.6453c4p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e783p-22f, 0x1.aaa53p-86f, 0x1.8a9dd8p-120f, 0x1.6608fap-26f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.80767ep-27f, 0.0f, 0.0f, 0.0f,
     0x1.fc4648p-33f, 0.0f, 0.0f, 0x1.d94d1cp-73f, 0.0f, 0.0f, 0x1.20b4e6p-97f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.05f372p-104f, 0.0f, 0.0f, 0x1.f96174p-88f,
     0x1.6cc6f8p-34f, 0.0f, 0.0f, 0.0f, 0x1.fc42c4p-76f, 0x1.b3c2dp-97f,
     0x1.2d369ep-109f, 0x1.757b7ap-68f, 0.0f, 0x1.197bbap-67f, 0x1.c829dap-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9663ap-100f, 0x1.126c68p-2f, 0x1.2101b2p-36f, 0.0f,
     0x1.75fceap-5f, 0.0f, 0x1.0268bep-31f, 0.0f, 0x1.485aep-39f, 0.0f,
     0x1.a1acf8p-55f, 0.0f, 0x1.067352p-70f, 0x1.654202p-26f, 0x1.1c1f4ap-32f,
     0x1.d107eep-17f, 0x1.f8a2e8p-42f, 0.0f, 0x1.bfa1d2p-43f, 0.0f, 0x1.fdd6b2p-79f,
     0x1.c5f826p-121f, 0.0f, 0x1.729d64p-101f, 0.0f, 0.0f, 0x1.d25ca6p-20f,
     0x1.2ec1eep-68f, 0.0f, 0.0f, 0.0f, 0x1.d07cdep-99f, 0x1.bcfb56p-98f, 0.0f,
     0x1.16936p-112f, 0x1.84ea52p-26f, 0.0f, 0x1.69ecbep-17f, 0x1.b88efap-89f,
     0x1.a7cc9p-87f, 0.0f, 0.0f, 0.0f, 0x1.864a4ep-41f, 0.0f, 0.0f, 0x1.353454p-6f,
     0.0f, 0x1.631a76p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07ff7ap-36f, 0x1.22e21p-18f, 0x1.994e1cp-8f, 0.0f, 0x1.dd000ep-87f,
     0x1.f84d2cp-6f, 0.0f, 0.0f, 0x1.46222ep-26f, 0x1.a650ecp-100f, 0x1.918a6ep-119f,
     0.0f, 0.0f, 0.0f, 0x1.f3109ep-107f, 0x1.723416p-49f, 0.0f, 0x1.5daf3ap-113f,
     0x1.802436p-30f, 0.0f, 0.0f, 0.0f, 0x1.1d91dap-79f, 0.0f, 0.0f, 0x1.46520ap-83f,
     0.0f, 0.0f, 0.0f, 0x1.c4a374p-63f, 0.0f, 0x1.584144p-75f, 0.0f, 0x1.206e6p-10f,
     0.0f, 0.0f, 0x1.a0c68p-96f, 0x1.d60e18p-30f, 0x1.979866p-20f, 0x1.8e3a18p-112f,
     0x1.528018p-116f, 0x1.35ccbcp-61f, 0x1.e61e2cp-9f, 0x1.805d0ep-24f,
     0x1.53c202p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54e562p-31f, 0.0f,
     0x1.21407cp-34f, 0.0f, 0.0f, 0x1.913642p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63e9bep-61f, 0x1.d72548p-2f, 0.0f, 0.0f, 0.0f, 0x1.527394p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bdc48cp-108f, 0.0f, 0x1.ae3b88p-3f, 0x1.4a8068p-37f,
     0x1.5fee96p-122f, 0.0f, 0.0f, 0x1.13940ap-28f, 0x1.4889e6p-29f, 0x1.043354p-19f,
     0x1.d64652p-51f, 0x1.466fb6p-11f, 0.0f, 0.0f, 0.0f, 0x1.489056p-25f,
     0x1.cefb8cp-26f, 0.0f, 0x1.d5380cp-87f, 0x1.977774p-84f, 0.0f, 0.0f,
     0x1.cf4976p-14f, 0x1.19697p-43f, 0.0f, 0x1.6b6da6p-113f, 0x1.c7e932p-111f,
     0x1.a0c818p-55f, 0x1p0f, 0x1.657862p-10f, 0x1.46b3c8p-113f, 0.0f, 0.0f, 0.0f,
     0x1.d8aa18p-92f, 0x1.9d1dc8p-27f, 0x1.b5eaa6p-107f, 0.0f, 0x1.42b8fp-7f,
     0x1.7335aep-106f, 0.0f, 0x1.dca06ap-49f, 0.0f, 0x1.0240b8p-94f, 0x1.b435bp-33f,
     0x1.2e7dacp-126f, 0x1.295a84p-72f, 0.0f, 0.0f, 0.0f, 0x1.0ada92p-72f, 0.0f,
     0x1.4adbfcp-111f, 0.0f, 0.0f, 0.0f, 0x1.ffee44p-37f, 0.0f, 0x1.efeaf6p-6f,
     0x1.a35f08p-70f, 0.0f, 0.0f, 0x1.f29616p-67f, 0x1.4279a8p-44f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.798282p-65f, 0x1.bca3dep-19f, 0.0f, 0x1.02f386p-76f,
     0x1.805438p-116f, 0x1.408c2ap-121f, 0.0f, 0x1.f202f4p-16f, 0.0f, 0.0f,
     0x1.785f3ap-51f, 0.0f, 0.0f, 0x1.e2064cp-21f, 0.0f, 0x1.d0ac2p-84f,
     0x1.fa8a3cp-99f, 0x1.f1bfa2p-116f, 0x1.fe931ep-34f, 0x1.cc0c46p-67f, 0.0f,
     0x1.afe264p-108f, 0x1.4b552ep-89f, 0.0f, 0.0f, 0x1.a4ae58p-17f, 0.0f,
     0x1.97485p-29f, 0x1.f2a7aap-22f, 0x1.b7c702p-106f, 0x1.0e64eap-100f,
     0x1.93a618p-117f, 0.0f, 0x1.a7c92p-48f, 0x1.06779cp-50f, 0x1.65d7a2p-22f,
     0x1.eaa372p-85f, 0.0f, 0.0f, 0x1.838448p-78f, 0.0f, 0x1.1452d4p-64f, 0.0f,
     0x1.1cb4fp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.cd5cd2p-2f, 0x1.9d79a6p-65f,
     0x1.71a73ap-73f, 0.0f, 0x1.e52af6p-26f, 0x1.99e0dcp-36f, 0x1.f5d424p-34f,
     0x1.1f24b2p-85f, 0.0f, 0.0f, 0x1.490362p-58f, 0x1.fb7cfp-55f, 0.0f,
     0x1.d8321ap-109f, 0.0f, 0x1.b519dcp-39f, 0x1.161784p-16f, 0.0f, 0.0f,
     0x1.611724p-33f, 0x1.265bb4p-111f, 0.0f, 0.0f, 0.0f, 0x1.50f392p-47f, 0.0f, 0.0f,
     0.0f, 0x1.b00efap-93f, 0.0f, 0.0f, 0.0f, 0x1.16bc6p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9dcf06p-100f, 0x1.5639d2p-10f, 0x1.c5cd94p-25f, 0x1.750446p-30f,
     0x1.49f95ep-100f, 0x1.e72a7p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22538ap-126f,
     0x1.edf48ap-72f, 0x1.0e20c8p-99f, 0.0f, 0.0f, 0.0f, 0x1.845546p-72f,
     0x1.998dc2p-3f, 0x1.f5ba6p-70f, 0.0f, 0.0f, 0x1.60ab4ap-91f, 0.0f, 0.0f,
     0x1.9330a2p-2f, 0x1.902dacp-81f, 0.0f, 0x1.50b7acp-85f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1f247p-86f, 0.0f, 0x1.a74f62p-23f, 0.0f, 0.0f, 0.0f, 0x1.7f598p-36f,
     0x1.988532p-61f, 0.0f, 0x1.51ffp-112f, 0.0f, 0x1.715ecp-11f, 0x1.aa945ap-102f,
     0x1.2333dp-96f, 0x1.2ca524p-63f, 0x1.184ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ac91a2p-77f, 0x1.22d45p-26f, 0.0f, 0x1.cf7cfcp-66f, 0.0f, 0x1.fb56c6p-9f,
     0x1.a3f0e8p-126f, 0x1.167ba6p-68f, 0x1.959964p-89f, 0x1.0f9d8p-99f,
     0x1.dba132p-99f, 0.0f, 0x1.0805f8p-79f, 0x1.425a2ep-55f, 0.0f, 0.0f, 0.0f,
     0x1.4cd41ep-21f, 0x1.d2e11cp-37f, 0x1.ebaa4p-49f, 0x1.cf0be4p-59f,
     0x1.b5fd58p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c49592p-9f, 0x1.1f4e42p-60f,
     0.0f, 0x1.b52478p-40f, 0x1.a71aa2p-74f, 0x1.e2fdcap-23f, 0.0f, 0x1.b67182p-79f,
     0x1.ff4688p-99f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.dbc9b2p-25f, 0.0f,
     0x1.467b1ap-46f, 0x1.612d1cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32ed7ep-75f,
     0.0f, 0x1.0c820ep-46f, 0.0f, 0x1.d6ad22p-4f, 0x1.e2dedcp-86f, 0x1.04502p-43f,
     0x1.e2c882p-110f, 0x1.85ebeep-29f, 0x1.e124fep-59f, 0.0f, 0.0f, 0.0f,
     0x1.3ebf0cp-111f, 0x1.24be9ep-92f, 0x1.afe74ap-59f, 0.0f, 0.0f, 0x1.6c23acp-55f,
     0x1.382922p-76f, 0x1.a59a5ep-119f, 0.0f, 0.0f, 0x1.3e1a2ap-12f, 0x1.c26ffap-17f,
     0x1.96bceap-116f, 0x1.59db9ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6e4ab2p-33f, 0x1.5ee6b8p-40f, 0x1.24a99p-119f, 0.0f, 0x1.321d56p-20f,
     0x1.14e40cp-94f, 0.0f, 0.0f, 0x1.47b272p-97f, 0x1.b70ca8p-115f, 0x1.469fe6p-117f,
     0.0f, 0x1p0f, 0x1.47aa2cp-107f, 0x1.54bc84p-92f, 0x1.55ca78p-33f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6d4352p-108f, 0x1.362b76p-44f, 0.0f, 0x1p0f, 0.0f,
     0x1.920692p-45f, 0x1.31325cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bab18ap-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e3f48p-3f, 0x1.e6ea5ap-72f, 0x1.c3c598p-56f,
     0.0f, 0.0f, 0x1.32e1e4p-18f, 0.0f, 0.0f, 0x1.833738p-121f, 0.0f, 0.0f,
     0x1.0f183p-88f, 0x1.5b67bp-20f, 0x1.68c882p-114f, 0.0f, 0.0f, 0.0f,
     0x1.113972p-97f, 0x1.442da2p-19f, 0.0f, 0.0f, 0x1.003618p-61f, 0x1.b8c2bcp-12f,
     0.0f, 0.0f, 0.0f, 0x1.5e3d16p-56f, 0.0f, 0.0f, 0x1.a7665cp-112f, 0x1.c15f5cp-30f,
     0.0f, 0x1.378106p-78f, 0x1.14ab8cp-87f, 0x1.3adf44p-28f, 0.0f, 0x1.7b5732p-34f,
     0x1.26c98p-76f, 0x1.b0b9c6p-79f, 0x1.08a2b8p-96f, 0x1.87b0a8p-29f,
     0x1.13c3a4p-50f, 0x1.3583ap-114f, 0.0f, 0.0f, 0x1.49ecd2p-66f, 0.0f,
     0x1.38fb1p-95f, 0.0f, 0.0f, 0.0f, 0x1.9d25fp-93f, 0x1.04136ep-64f,
     0x1.d2af2cp-107f, 0.0f, 0.0f, 0.0f, 0x1.9869fcp-109f, 0x1.6c0d5p-29f,
     0x1.1efebp-8f, 0x1.472ce6p-61f, 0.0f, 0x1.3a639ap-38f, 0.0f, 0.0f, 0.0f,
     0x1.7ccbf6p-113f, 0x1.9adc2cp-86f, 0.0f, 0x1.ff874ep-81f, 0x1.3a469ap-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.924e38p-45f, 0.0f, 0x1.075aep-27f, 0x1.70415ap-91f, 0.0f,
     0x1.cc914cp-89f, 0.0f, 0x1.51d97ap-102f, 0.0f, 0.0f, 0x1.afe79ep-32f, 0.0f,
     0x1.e9c142p-60f, 0x1.e9f624p-110f, 0.0f, 0.0f, 0.0f, 0x1.6062cp-96f, 0.0f,
     0x1.b49cdep-26f, 0.0f, 0x1.91a868p-121f, 0.0f, 0.0f, 0.0f, 0x1.b8002ep-8f, 0.0f,
     0x1.ab2754p-35f, 0.0f, 0.0f, 0.0f, 0x1.a5d4c2p-107f, 0.0f, 0.0f, 0x1.6dc69ep-53f,
     0.0f, 0x1.093d32p-99f, 0x1.c7f346p-62f, 0x1.b6d3b6p-9f, 0.0f, 0.0f, 0.0f,
     0x1.f1f7c4p-9f, 0x1.252b36p-93f, 0.0f, 0x1.3cc384p-13f, 0.0f, 0x1.b72316p-19f,
     0x1.7f49ep-110f, 0.0f, 0x1.872fecp-72f, 0x1.1b213ap-31f, 0x1.a194ap-53f, 0.0f,
     0.0f, 0x1.f8ad86p-14f, 0.0f, 0.0f, 0x1.5f0586p-74f, 0.0f, 0x1p0f,
     0x1.ecf02ep-25f, 0x1.0ba716p-35f, 0.0f, 0.0f
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
            tmp1 = Sleef_atanhf1_u10purecfma(tmp0);
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
    printf("Sleef_atanhf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanhf1_u10purecfma bench acc %a\n", global_bench_acc);
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
