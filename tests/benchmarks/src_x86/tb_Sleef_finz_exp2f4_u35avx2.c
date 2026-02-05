/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2f4_u35avx2128.c --function \
 *     Sleef_finz_exp2f4_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 4 --function-input-vector-size \
 *     4 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.1b7de6p-110f, 0.0f, 0x1.bee9f6p-120f, 0x1.21c006p-110f, 0.0f,
     0x1.dd6c5ep-74f, 0x1.44d8fap-62f, 0x1.246ac4p-90f, 0.0f, 0x1.c906bap-75f,
     0x1.7a80dp-114f, 0.0f, 0x1p0f, 0x1.15ba04p-108f, 0.0f, 0x1.3743aep-42f,
     0x1.f4d08ep-107f, 0.0f, 0x1.404cbep-115f, 0.0f, 0x1.9101d2p-9f, 0.0f, 0.0f, 0.0f,
     0x1.28230cp-13f, 0x1.f43d66p-44f, 0x1.b827e2p-100f, 0.0f, 0.0f, 0.0f,
     0x1.6f86b2p-26f, 0x1.727e1ap-106f, 0x1.7de9a2p-39f, 0x1.603408p-24f,
     0x1.580118p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8f84ap-20f, 0.0f, 0.0f, 0.0f,
     0x1.55ca46p-39f, 0.0f, 0x1.92c68p-35f, 0x1.20efep-75f, 0x1.7b132ap-78f,
     0x1.18c88ep-41f, 0.0f, 0x1.ff1c8cp-110f, 0.0f, 0x1.9ce6d2p-99f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.973a18p-84f, 0x1.6aabf2p-10f, 0.0f, 0.0f, 0x1.cd6f4p-124f,
     0x1.c309d4p-87f, 0x1.f3e8d2p-95f, 0x1.bdde2p-122f, 0.0f, 0.0f, 0x1.9bae5p-77f,
     0.0f, 0x1.b4ec4ep-44f, 0x1.ea5afcp-59f, 0x1.025f16p-94f, 0.0f, 0x1.3b6e94p-103f,
     0.0f, 0x1.e68bd8p-40f, 0x1.36ae88p-13f, 0.0f, 0.0f, 0x1.71af4cp-98f, 0.0f,
     0x1.5dde4cp-103f, 0x1.5da756p-73f, 0.0f, 0x1.6aca6cp-117f, 0.0f, 0.0f,
     0x1.65c346p-113f, 0.0f, 0x1.e0cae4p-49f, 0.0f, 0.0f, 0x1.1f3542p-62f,
     0x1.4b4a26p-51f, 0.0f, 0.0f, 0.0f, 0x1.e123ccp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c907d2p-102f, 0x1.002338p-43f, 0x1.1e7144p-77f, 0x1.19e77ep-125f, 0.0f,
     0x1.48990cp-60f, 0x1.851908p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.48bbc8p-22f, 0x1.e55b56p-35f, 0x1.f91deep-40f, 0.0f,
     0x1.9564fap-14f, 0x1.6a268ep-98f, 0.0f, 0x1.92450cp-92f, 0.0f, 0x1.46342cp-55f,
     0x1.a2c1b8p-61f, 0x1.d5ca6p-48f, 0.0f, 0x1.87a098p-24f, 0.0f, 0x1.731456p-95f,
     0.0f, 0.0f, 0.0f, 0x1.1ee81ep-92f, 0x1.c8eeacp-125f, 0x1.9ec124p-25f,
     0x1.29f0ecp-104f, 0x1.41775p-43f, 0x1.fcbb4ap-17f, 0.0f, 0x1.3deeeap-43f, 0.0f,
     0.0f, 0x1.cb6b02p-51f, 0x1.3d12f6p-21f, 0x1.6fdbeap-106f, 0x1.b63d0cp-110f,
     0x1.f9e7a2p-93f, 0.0f, 0.0f, 0x1.408172p-29f, 0x1.31d08p-108f, 0.0f, 0.0f,
     0x1.5d007ap-111f, 0.0f, 0x1.a29ec4p-92f, 0.0f, 0x1.004bccp-43f, 0.0f,
     0x1.9f34p-1f, 0x1.fe11c8p-18f, 0.0f, 0.0f, 0.0f, 0x1.e99f4p-79f,
     0x1.7ef4cap-115f, 0.0f, 0x1.185682p-95f, 0.0f, 0x1.f4fa7ep-108f, 0.0f, 0.0f,
     0.0f, 0x1.b942fep-79f, 0x1.b97b56p-121f, 0x1.170dcap-13f, 0x1.1e204ap-121f, 0.0f,
     0x1.e32f4ap-106f, 0.0f, 0x1.390e32p-86f, 0x1.4cda64p-82f, 0x1.02130cp-50f, 0.0f,
     0x1.df95e8p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77fd4ep-112f, 0x1.8ff244p-36f,
     0x1.3708fap-18f, 0x1.472848p-2f, 0x1.648862p-25f, 0x1.ec8e4ap-63f,
     0x1.a0a214p-79f, 0.0f, 0.0f, 0x1.2c02fep-33f, 0x1.764964p-50f, 0.0f, 0.0f, 0.0f,
     0x1.8991c4p-42f, 0x1.c8fe1ep-118f, 0x1.3d5db4p-94f, 0.0f, 0x1.2bae08p-109f,
     0x1.6601b8p-14f, 0x1.519c66p-25f, 0x1.c1c15ap-57f, 0.0f, 0.0f, 0x1.a09b4ep-20f,
     0.0f, 0.0f, 0x1.eb74bcp-115f, 0x1.1ae834p-56f, 0.0f, 0.0f, 0.0f, 0x1.6a44bcp-18f,
     0.0f, 0x1.5ca4cep-124f, 0.0f, 0.0f, 0.0f, 0x1.4ca126p-125f, 0x1.f5a2d2p-18f,
     0x1.20e20ap-8f, 0.0f, 0x1.a1b2f8p-91f, 0.0f, 0.0f, 0x1.a0a154p-124f,
     0x1.c7f0f6p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1d9df6p-72f, 0.0f, 0.0f,
     0x1.2dccfap-21f, 0x1.225e0ep-102f, 0x1.71146cp-93f, 0x1.12b702p-11f, 0.0f,
     0x1.f5e35ep-19f, 0.0f, 0x1.878bp-120f, 0x1.dc98e6p-20f, 0x1.9ca9ep-124f, 0.0f,
     0x1.9d3486p-56f, 0.0f, 0.0f, 0x1.08cbc6p-8f, 0.0f, 0x1.64beecp-30f,
     0x1.53404ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2623ap-115f,
     0x1.ac6f1cp-67f, 0x1.c59e16p-55f, 0x1.6c84e6p-49f, 0x1.45398ep-58f, 0.0f, 0.0f,
     0x1.b02db8p-3f, 0x1.08d90cp-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8326d4p-94f, 0x1.4cf5f4p-6f, 0x1.e907ccp-41f, 0x1.5b14dcp-81f, 0.0f,
     0x1.06b136p-94f, 0x1.2db40ep-61f, 0x1.6a43c4p-25f, 0.0f, 0x1.3b9af6p-60f, 0.0f,
     0.0f, 0x1.a08362p-51f, 0x1.72185p-117f, 0.0f, 0x1.14dbcep-18f, 0x1.ffc66ap-30f,
     0x1.3f8acep-106f, 0x1.d4d4ccp-64f, 0x1.6cb7cap-47f, 0.0f, 0x1.679502p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8cb0bep-87f, 0.0f, 0x1.a50236p-29f, 0.0f, 0.0f, 0.0f,
     0x1.66d2d4p-23f, 0x1.12a38cp-34f, 0.0f, 0x1.d2932cp-29f, 0.0f, 0.0f,
     0x1.d5c34ap-108f, 0.0f, 0x1.e8c832p-41f, 0x1.ca59a8p-89f, 0.0f, 0x1.77c50cp-29f,
     0x1.886878p-30f, 0.0f, 0.0f, 0.0f, 0x1.1a1558p-109f, 0x1.09258p-86f,
     0x1.704616p-56f, 0.0f, 0.0f, 0.0f, 0x1.31eae6p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa11bap-83f, 0x1.9f43a2p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.006b86p-10f, 0.0f, 0.0f, 0x1.26dfa8p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41a4aap-13f, 0x1.994cc8p-26f, 0.0f, 0.0f, 0.0f, 0x1.5e7254p-77f, 0.0f, 0.0f,
     0x1.35fbfcp-101f, 0.0f, 0.0f, 0x1.53b7aap-22f, 0x1.06f75p-121f, 0x1.5891eap-51f,
     0x1.f6aca4p-36f, 0.0f, 0x1.e1f442p-56f, 0x1.4c6794p-38f, 0.0f, 0.0f, 0.0f,
     0x1.2a0efap-51f, 0.0f, 0x1.ba1ffp-26f, 0x1.1764aap-20f, 0.0f, 0x1.675f84p-42f,
     0x1.95fd1ep-78f, 0.0f, 0x1.4a939ap-115f, 0x1.7de99cp-95f, 0.0f, 0x1.a9f362p-79f,
     0.0f, 0.0f, 0x1.73ec6cp-60f, 0x1.69b582p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8ff8ep-24f, 0x1.88b4f6p-94f, 0.0f, 0x1.5f99fap-2f, 0.0f, 0x1.674cbap-37f,
     0.0f, 0.0f, 0x1.a8894p-92f, 0x1.d28ec4p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ce58ap-67f, 0x1.b7b2cap-87f, 0.0f, 0x1.066422p-77f, 0.0f, 0.0f,
     0x1.11e054p-44f, 0.0f, 0.0f, 0.0f, 0x1.d2c42ep-118f, 0x1.64849p-107f, 0.0f,
     0x1.1814cp-57f, 0x1.4bdb3ap-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c32f32p-96f,
     0.0f, 0x1.b4d66cp-69f, 0x1.23c9e6p-21f, 0.0f, 0.0f, 0.0f, 0x1.f9a5bcp-44f,
     0x1.87e426p-30f, 0.0f, 0.0f, 0.0f, 0x1.079d5ap-123f, 0.0f, 0x1.f89fc4p-31f, 0.0f,
     0.0f, 0.0f, 0x1.de0c1cp-103f, 0x1.a53516p-83f, 0.0f, 0.0f, 0x1.7959f4p-47f,
     0x1.6a936p-59f, 0x1.a9d144p-61f, 0.0f, 0x1.9fd15p-43f, 0x1.d5011p-120f, 0.0f,
     0.0f, 0x1.80f21ep-34f, 0x1.632ee6p-85f, 0x1.53ebd8p-68f, 0.0f, 0.0f, 0.0f,
     0x1.745ae2p-97f, 0x1.d91e32p-79f, 0x1.daa9f8p-94f, 0x1.ff6a8p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.094edap-100f, 0x1.5b8156p-20f, 0x1.503bf2p-3f,
     0x1.4b9acap-78f, 0.0f, 0.0f, 0.0f, 0x1.59c83ep-85f, 0x1.afae8ep-100f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bf297cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc48bep-97f,
     0x1.b5aff2p-4f, 0x1.37de96p-105f, 0x1.0f442cp-81f, 0x1.032426p-119f, 0.0f,
     0x1.87dea6p-28f, 0x1.241718p-8f, 0x1.edaa18p-51f, 0x1.8c4edcp-78f,
     0x1.2f5224p-107f, 0.0f, 0.0f, 0.0f, 0x1.5ea46cp-114f, 0x1.2ad998p-20f, 0.0f,
     0x1.76b198p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb038cp-79f, 0.0f, 0.0f, 0.0f, 0x1.23a9b4p-24f, 0.0f, 0x1.8740dcp-125f, 0.0f,
     0x1.f70bd4p-62f, 0.0f, 0.0f, 0.0f, 0x1.b95152p-29f, 0x1.729a74p-90f, 0.0f,
     0x1.0ce8f4p-70f, 0x1.9a154ap-25f, 0.0f, 0.0f, 0x1.f3558ap-14f, 0x1.360bd2p-125f,
     0.0f, 0x1.81df58p-24f, 0.0f, 0x1.f8c37ap-16f, 0x1.730b96p-104f, 0x1.c7b4bap-107f,
     0x1.f5cf12p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b79178p-11f,
     0.0f, 0.0f, 0x1.cfb43cp-63f, 0x1.424d92p-22f, 0x1.c7ba22p-28f, 0x1.227028p-5f,
     0.0f, 0x1.a6e718p-6f, 0.0f, 0x1.0842f6p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2feap-52f, 0x1.a4ef64p-85f, 0.0f, 0.0f, 0.0f, 0x1.71a466p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b0438p-20f, 0.0f, 0x1.0242cap-96f, 0x1.c4c32ap-59f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0c9518p-65f, 0.0f, 0x1.bd11ep-111f, 0.0f, 0.0f, 0x1.cd1c1ap-72f,
     0.0f, 0.0f, 0x1.58a024p-87f, 0x1.500174p-82f, 0.0f, 0x1.5dfdd2p-85f,
     0x1.37ff16p-120f, 0x1.f7bf44p-124f, 0.0f, 0.0f, 0x1.e67db6p-52f, 0x1.72abaep-62f,
     0.0f, 0x1.8edb5ep-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.344b44p-71f, 0x1.ca06fp-48f, 0x1.24df3ep-48f,
     0x1.eb0a2ap-89f, 0x1.bb6e4p-12f, 0.0f, 0.0f, 0x1.51489cp-20f, 0x1.97c8d2p-9f,
     0.0f, 0.0f, 0x1.ec39dp-11f, 0x1.1ab4aap-58f, 0x1.95ec4ap-109f, 0x1.b84cd4p-6f,
     0x1.beecfp-34f, 0x1.ee6738p-53f, 0x1.6fb0ecp-55f, 0x1.0ea51ep-68f,
     0x1.4ad86p-88f, 0x1.a1dab4p-112f, 0x1.b687fp-42f, 0x1.61a8ecp-100f, 0.0f, 0.0f,
     0.0f, 0x1.6d5ccap-101f, 0x1.9d4d1p-66f, 0x1.52c72ep-48f, 0x1.34fcbep-77f,
     0x1.353a74p-84f, 0.0f, 0x1.485aep-14f, 0x1.26e448p-66f, 0x1.dd333p-95f, 0.0f,
     0.0f, 0.0f, 0x1.53962ap-19f, 0.0f, 0.0f, 0.0f, 0x1.838878p-69f, 0x1.954634p-20f,
     0x1.cb310ep-4f, 0x1.b3eaa6p-93f, 0.0f, 0.0f, 0x1.b39d3ap-119f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6fee58p-2f, 0x1.526538p-72f, 0x1.ac066p-24f, 0x1.e980f4p-93f,
     0.0f, 0x1.dbec2ap-82f, 0.0f, 0x1.4d9decp-92f, 0.0f, 0.0f, 0.0f, 0x1.2e917cp-24f,
     0.0f, 0x1.f3aeccp-66f, 0.0f, 0x1.454f38p-70f, 0x1.b67d92p-84f, 0.0f,
     0x1.2c90a4p-27f, 0.0f, 0.0f, 0x1.9f8124p-85f, 0.0f, 0x1.9df50cp-22f, 0.0f,
     0x1.d277c6p-89f, 0x1.6dcbeep-121f, 0x1.558b0cp-4f, 0.0f, 0x1p0f, 0x1.0bca96p-9f,
     0x1.9be1c2p-15f, 0.0f, 0.0f, 0.0f, 0x1.5fb872p-18f, 0x1.9736b2p-65f, 0.0f,
     0x1.07fc3ap-122f, 0.0f, 0x1.40dffep-27f, 0x1.5bcef8p-35f, 0.0f, 0x1.50ce82p-33f,
     0x1.1a05ep-11f, 0x1.576626p-43f, 0x1.7800aep-64f, 0.0f, 0.0f, 0x1.37afa4p-42f,
     0x1.4e416p-119f, 0x1.8267bcp-7f, 0.0f, 0x1.07989cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.769deep-99f, 0x1.66865ap-99f, 0.0f, 0x1.4c0382p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d409a8p-40f, 0x1.6bcccap-13f, 0x1.371e8cp-26f, 0.0f, 0x1.6923a2p-30f,
     0x1.78163p-117f, 0x1.e21794p-65f, 0x1.e5a232p-44f, 0.0f, 0x1.05744ep-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d34f2p-72f, 0.0f, 0.0f, 0x1.028b4p-89f, 0x1p0f,
     0x1.052668p-30f, 0x1.734164p-118f, 0x1.4563b4p-91f, 0x1.f45166p-26f,
     0x1.b1127ep-22f, 0x1.fd4b6p-99f, 0.0f, 0.0f, 0.0f, 0x1.1e8facp-22f,
     0x1.55c452p-64f, 0.0f, 0x1.a4d6eep-76f, 0.0f, 0.0f, 0x1.bdd564p-38f,
     0x1.7c552ep-12f, 0.0f, 0x1.8ffb32p-61f, 0x1.40934ep-115f, 0.0f, 0x1.7ea3ecp-122f,
     0.0f, 0.0f, 0x1.dda382p-76f, 0x1.5a340ap-5f, 0x1.af1eep-13f, 0.0f, 0.0f,
     0x1.dd1dacp-124f, 0x1.65757ap-117f, 0.0f, 0x1.eb9b84p-92f, 0x1.a93ba6p-58f, 0.0f,
     0.0f, 0x1.1a458ap-66f, 0.0f, 0.0f, 0x1.4282ep-8f, 0x1.7b3d1ap-73f, 0.0f, 0.0f,
     0x1.06e894p-7f, 0x1.446d32p-38f, 0x1.35792p-40f, 0x1.aa9054p-81f, 0.0f,
     0x1.ee9242p-59f, 0x1.33b4c2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37a24cp-45f,
     0x1.a665b2p-119f, 0x1.800b5cp-122f, 0.0f, 0.0f, 0x1.a1f876p-79f, 0x1.f5187cp-92f,
     0.0f, 0x1.59a318p-105f, 0x1.8a6846p-102f, 0x1.998892p-116f, 0.0f, 0.0f,
     0x1.dca584p-43f, 0.0f, 0x1.83e45cp-37f, 0x1.b5e2p-71f, 0x1.984d46p-101f, 0.0f,
     0.0f, 0x1.831208p-102f, 0.0f, 0.0f, 0x1.b67286p-52f, 0x1.efe06ap-26f, 0.0f,
     0x1.97bd42p-46f, 0x1.bf681ap-95f, 0.0f, 0x1.1a29p-66f, 0x1.d2a7e4p-45f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfff12p-53f, 0x1.bb8196p-88f,
     0x1.98727ep-68f, 0.0f, 0x1.7fe404p-124f, 0x1.cac022p-121f, 0.0f, 0x1.a69fc2p-49f,
     0.0f, 0x1.e23b64p-29f, 0x1.958edep-54f, 0x1.2d49bp-89f, 0.0f, 0x1.41b8p-71f,
     0x1.27708p-41f, 0.0f, 0.0f, 0x1.005fc6p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.249aap-8f, 0x1.6b30cp-82f, 0x1.346742p-83f, 0.0f, 0.0f, 0x1.8467ep-85f,
     0x1.c81e2cp-19f, 0x1.39279p-9f, 0x1.dd73bap-86f, 0.0f, 0.0f, 0x1.517bdep-89f,
     0.0f, 0x1.1cd61cp-44f, 0.0f, 0x1.0dfa0cp-120f, 0x1.d5e40ep-70f, 0.0f,
     0x1.fb6b46p-62f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f670e8p-99f, 0.0f,
     0x1.f18566p-40f, 0x1.5ad51p-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.539bf4p-89f, 0x1.8b45fap-52f, 0x1.8c928ap-59f, 0.0f, 0x1.6412ap-87f,
     0x1.7d4694p-25f, 0x1.474048p-100f, 0.0f, 0x1.de7d0ap-83f, 0x1.8ff1a6p-36f, 0.0f,
     0x1.0adeap-8f, 0x1.ffe164p-107f, 0.0f, 0x1.7d7736p-28f, 0x1.8d14f2p-5f,
     0x1.1198d8p-106f, 0.0f, 0x1.06db46p-30f, 0.0f, 0.0f, 0x1.264908p-36f,
     0x1.fb48bp-48f, 0.0f, 0.0f, 0x1.8152aep-116f, 0x1.ec8fdp-96f, 0x1.128408p-116f,
     0.0f, 0x1.bc77a4p-16f, 0.0f, 0.0f, 0x1.2f0666p-9f, 0.0f, 0x1.465096p-82f,
     0x1.36fccap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e94f6p-80f,
     0.0f, 0.0f, 0x1.a15fe6p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef69d4p-35f, 0.0f,
     0.0f, 0x1.43f996p-116f, 0x1.024482p-24f, 0x1.894f5cp-59f, 0x1.c7415ep-2f,
     0x1.191ddep-90f, 0x1.843722p-82f, 0x1.d701c2p-76f, 0.0f, 0.0f, 0.0f,
     0x1.b525f6p-94f, 0x1.984c18p-117f, 0.0f, 0.0f, 0x1.f899d2p-98f, 0x1.298a64p-81f,
     0x1.9506ep-52f, 0.0f, 0x1.e142e8p-65f, 0x1.44ad76p-23f, 0.0f
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
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_finz_exp2f4_u35avx2128(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_exp2f4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2f4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
