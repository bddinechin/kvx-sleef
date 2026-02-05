/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpif1_u05purecfma.c --function \
 *     Sleef_finz_sinpif1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.f816b2p-71f, 0x1.61086p-64f, 0x1.71ccd8p-107f, 0.0f,
     0x1.10e3cp-40f, 0.0f, 0x1.0e0e14p-61f, 0.0f, 0.0f, 0x1.f1372cp-78f,
     0x1.a58602p-58f, 0x1.621c6ep-55f, 0.0f, 0.0f, 0x1.f4e148p-104f, 0.0f, 0.0f,
     0x1.6d3e62p-16f, 0x1.0fe87p-16f, 0.0f, 0.0f, 0x1.399286p-22f, 0x1.48fc8ep-108f,
     0.0f, 0x1.1c566ap-79f, 0x1.b2ebbep-37f, 0x1.ce083p-4f, 0.0f, 0.0f,
     0x1.62571cp-84f, 0.0f, 0x1.35034p-12f, 0x1.c21a3cp-11f, 0.0f, 0x1.ec7448p-14f,
     0x1.cb0e58p-1f, 0.0f, 0x1.1ba01p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb6af2p-25f, 0.0f, 0x1.1be05ap-106f, 0x1.2ed454p-34f, 0x1.f3646ap-59f,
     0x1.5e3904p-6f, 0x1.3de626p-47f, 0.0f, 0.0f, 0.0f, 0x1.dd03fap-31f,
     0x1.ad8a46p-123f, 0x1.3b4762p-46f, 0x1.93aa7ap-34f, 0x1.77639p-98f,
     0x1.7f4418p-82f, 0.0f, 0x1.b5e8b4p-112f, 0x1.0b209p-8f, 0.0f, 0.0f,
     0x1.39b5aep-89f, 0x1.e378d6p-19f, 0.0f, 0x1.06474ep-75f, 0x1.628dfap-99f, 0.0f,
     0.0f, 0.0f, 0x1.c1d03ep-64f, 0.0f, 0x1.80e6p-83f, 0x1.1962b4p-13f, 0.0f,
     0x1.b1d03cp-43f, 0.0f, 0.0f, 0.0f, 0x1.613128p-4f, 0.0f, 0x1.cc9e42p-14f, 0.0f,
     0x1.85992ap-27f, 0.0f, 0x1.2ab34ap-82f, 0x1.bfc1a4p-10f, 0.0f, 0x1.b5081cp-124f,
     0.0f, 0.0f, 0x1.b46ccap-45f, 0.0f, 0.0f, 0x1.a2c43ap-85f, 0.0f, 0.0f,
     0x1.7dbc14p-113f, 0.0f, 0.0f, 0.0f, 0x1.5b4584p-67f, 0.0f, 0x1.3eb38ep-33f, 0.0f,
     0.0f, 0x1.8db192p-59f, 0x1.b0a876p-103f, 0.0f, 0x1.ba1f04p-118f, 0x1.818b4p-12f,
     0.0f, 0x1.4725e2p-97f, 0.0f, 0.0f, 0x1.b64ad6p-90f, 0.0f, 0x1.8ffa4ep-13f,
     0x1.ee944cp-89f, 0x1.b4fdbp-31f, 0.0f, 0.0f, 0x1.e1e736p-88f, 0x1.943ce6p-88f,
     0.0f, 0x1.af5358p-59f, 0.0f, 0x1.aac70cp-13f, 0.0f, 0x1.ff11p-121f, 0.0f, 0.0f,
     0x1.4c91p-67f, 0x1.424542p-93f, 0x1.446608p-29f, 0.0f, 0.0f, 0x1.f7a4fep-17f,
     0x1.d2769ap-82f, 0x1.97f4b2p-90f, 0x1.d291e8p-109f, 0.0f, 0x1.e457b8p-50f, 0.0f,
     0x1.f4d8b8p-102f, 0x1.ed67fcp-48f, 0x1.10b3acp-45f, 0.0f, 0x1.305dc8p-50f,
     0x1.da363ep-105f, 0.0f, 0x1.922fecp-10f, 0x1.bf8c64p-77f, 0x1.48ca2ep-79f, 0.0f,
     0.0f, 0.0f, 0x1.94837ep-19f, 0x1.653a38p-88f, 0x1.4a510cp-75f, 0.0f,
     0x1.f8ab3ep-118f, 0.0f, 0x1.a6043ep-86f, 0.0f, 0.0f, 0.0f, 0x1.710564p-48f, 0.0f,
     0x1.f20358p-125f, 0x1.76b40ep-80f, 0x1.e5733p-72f, 0x1.cb5a9ap-113f, 0.0f,
     0x1.8864a4p-124f, 0x1.2ec0b2p-8f, 0.0f, 0x1.ab4ce4p-120f, 0x1.45e668p-95f, 0.0f,
     0x1.1629d4p-80f, 0x1.43396ap-7f, 0.0f, 0x1.43ee12p-10f, 0.0f, 0x1.d692fap-105f,
     0x1.8f8a44p-83f, 0x1.845bc2p-52f, 0.0f, 0x1.dd0798p-92f, 0x1.96a2p-126f,
     0x1.7a221cp-12f, 0.0f, 0x1.48575ap-74f, 0.0f, 0x1.4f97d8p-4f, 0x1.313a04p-38f,
     0x1.626f74p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a19bap-88f, 0x1.cc5b36p-46f,
     0.0f, 0.0f, 0x1.29d728p-85f, 0.0f, 0x1.a893e6p-12f, 0.0f, 0x1.983a96p-85f, 0.0f,
     0x1.722308p-98f, 0.0f, 0x1.0a0b64p-37f, 0.0f, 0x1.9a3facp-49f, 0.0f, 0.0f,
     0x1.8d719ap-89f, 0x1.8ed6e8p-28f, 0x1.f1f196p-75f, 0.0f, 0x1.f5f22p-75f, 0.0f,
     0.0f, 0x1.b77dc2p-21f, 0.0f, 0.0f, 0x1.b721d2p-22f, 0x1.6f3d78p-46f, 0.0f, 0.0f,
     0x1.ba7f26p-92f, 0.0f, 0.0f, 0x1.353d38p-66f, 0x1.ee5012p-38f, 0x1.396e74p-109f,
     0x1.c1f0bcp-83f, 0.0f, 0.0f, 0x1.ddcf28p-5f, 0x1.dec598p-90f, 0.0f,
     0x1.53a364p-18f, 0x1.89a4a4p-20f, 0x1.7dd20cp-51f, 0x1.777dbp-27f, 0.0f, 0.0f,
     0x1.d8125ep-67f, 0.0f, 0x1.bfc674p-104f, 0x1.e645c8p-78f, 0x1.f534cp-115f, 0.0f,
     0x1.dc8708p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92c08ap-126f,
     0.0f, 0.0f, 0x1.3cd492p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1972cp-73f, 0x1p0f,
     0.0f, 0x1.e1d7cp-67f, 0x1.a68ae2p-114f, 0.0f, 0.0f, 0.0f, 0x1.704618p-3f,
     0x1.be7ab2p-98f, 0x1.a57e7cp-77f, 0x1.582f5p-34f, 0x1.486b06p-79f,
     0x1.e4d29p-55f, 0x1p0f, 0.0f, 0.0f, 0x1.729e5ap-108f, 0x1.f6185p-74f,
     0x1.aaefb6p-78f, 0x1.d4dab6p-36f, 0x1.cbf462p-16f, 0.0f, 0x1.18df82p-126f,
     0x1.cd8e88p-45f, 0x1.366d48p-61f, 0.0f, 0x1.94b9cep-16f, 0.0f, 0x1.1a48a2p-56f,
     0.0f, 0x1.77e28ep-36f, 0x1.538284p-78f, 0.0f, 0x1.cb5eccp-117f, 0.0f, 0.0f,
     0x1.65f216p-68f, 0.0f, 0.0f, 0x1.61c9f2p-12f, 0.0f, 0x1.0a1254p-113f,
     0x1.16ae0ep-115f, 0.0f, 0x1.bac7b2p-98f, 0.0f, 0.0f, 0x1.6d54ecp-119f, 0.0f,
     0x1.99457ap-81f, 0.0f, 0x1.5fca5p-120f, 0.0f, 0.0f, 0x1.ee1b2cp-56f,
     0x1.c7caa4p-70f, 0.0f, 0x1.6e65a6p-90f, 0x1.bb6ec8p-92f, 0x1.b6efa6p-35f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.af18e4p-74f, 0x1.18a33cp-118f, 0.0f, 0.0f, 0x1.bf48e8p-57f,
     0.0f, 0.0f, 0x1.791646p-124f, 0.0f, 0.0f, 0x1.d86d38p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.b1e9fap-37f, 0x1.e91d58p-117f, 0.0f, 0x1.3d68a2p-24f,
     0.0f, 0x1.ec8f3ep-3f, 0.0f, 0.0f, 0.0f, 0x1.a95ae8p-99f, 0x1.073f94p-58f, 0.0f,
     0x1.96131cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f826dcp-61f,
     0x1.4a60b4p-45f, 0x1.84360ep-8f, 0x1.509704p-95f, 0x1.15a02ep-22f, 0.0f,
     0x1.b41a0cp-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d2698p-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8f8756p-116f, 0x1.dfc98cp-70f, 0x1.941e34p-110f, 0.0f, 0.0f,
     0x1.3accfep-71f, 0.0f, 0.0f, 0.0f, 0x1.638a06p-84f, 0x1.a5b36ep-14f,
     0x1.d52632p-8f, 0x1.47cd7ap-113f, 0.0f, 0x1.31ec7ep-13f, 0x1.7663cep-26f,
     0x1.f555cp-94f, 0.0f, 0.0f, 0.0f, 0x1.be5f2ep-103f, 0.0f, 0x1.a43216p-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f0ffcep-58f, 0.0f, 0x1.4f4f4ap-63f, 0.0f, 0x1.26dd38p-5f,
     0.0f, 0x1.eb34eep-100f, 0x1.dc308ap-108f, 0x1.64f5dep-114f, 0x1.9935cap-44f,
     0.0f, 0x1.7439e2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c110cp-84f,
     0x1.9c5258p-101f, 0x1.971bf2p-112f, 0.0f, 0x1.51b3eap-27f, 0.0f, 0x1.7e901ap-86f,
     0x1.4cb06ap-68f, 0x1.3d9a6ep-77f, 0.0f, 0.0f, 0.0f, 0x1.b14b76p-7f, 0.0f, 0.0f,
     0.0f, 0x1.0f1ffep-125f, 0.0f, 0.0f, 0x1.821cbep-72f, 0x1.782de8p-25f,
     0x1.049ceap-30f, 0.0f, 0.0f, 0.0f, 0x1.1b91eap-29f, 0x1.d6e08cp-90f, 0.0f,
     0x1.bd7db4p-70f, 0x1.4ddabp-93f, 0x1.167974p-2f, 0.0f, 0.0f, 0x1.8b57eep-123f,
     0.0f, 0x1.3d39d6p-90f, 0.0f, 0x1.177c44p-120f, 0x1.67f0d4p-118f, 0.0f, 0.0f,
     0x1.109c8ep-119f, 0x1.433becp-51f, 0.0f, 0x1.ab058p-38f, 0.0f, 0x1.3dbb84p-43f,
     0.0f, 0x1.6a74ep-10f, 0x1.1b9732p-42f, 0.0f, 0.0f, 0.0f, 0x1.f93e36p-97f,
     0x1.1f8366p-86f, 0.0f, 0.0f, 0x1.8a90bp-15f, 0.0f, 0x1.0da41ap-84f,
     0x1.982942p-93f, 0x1.db08e4p-32f, 0x1.bd592ap-117f, 0.0f, 0x1.cd8ab8p-113f, 0.0f,
     0.0f, 0.0f, 0x1.c05b5p-31f, 0.0f, 0x1.03887ep-101f, 0.0f, 0.0f, 0x1.202034p-72f,
     0x1.a32346p-71f, 0.0f, 0.0f, 0x1.ff0f3ep-86f, 0x1.35d0c4p-97f, 0x1.f51e08p-113f,
     0x1.f53d5p-99f, 0.0f, 0.0f, 0x1.6b5678p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ac54ep-32f, 0.0f, 0.0f, 0x1.1e07cp-124f, 0x1.acde32p-56f, 0x1.211dap-42f,
     0.0f, 0x1.e6d33p-90f, 0x1.8c1bfp-7f, 0x1.10c0a2p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.57270ap-109f, 0.0f, 0x1.879a56p-120f, 0.0f, 0.0f,
     0x1.cbe1c4p-27f, 0.0f, 0x1.103e44p-90f, 0.0f, 0x1.06543p-43f, 0x1.2a183p-17f,
     0x1.deb858p-55f, 0x1.80526ep-58f, 0.0f, 0x1.74b28ep-16f, 0.0f, 0.0f,
     0x1.c572f2p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e27d3ap-23f, 0.0f, 0.0f,
     0x1.cdb1b2p-90f, 0x1.dd17c4p-41f, 0x1.1769a4p-43f, 0x1.ec2848p-69f, 0.0f,
     0x1.bcaab6p-67f, 0x1.a1d012p-123f, 0x1.9e600ap-92f, 0.0f, 0.0f, 0x1.877446p-97f,
     0.0f, 0x1.e28544p-69f, 0.0f, 0.0f, 0x1.6a4f3p-40f, 0x1.402e4ap-67f,
     0x1.98b0b4p-76f, 0x1.9cec58p-119f, 0.0f, 0.0f, 0x1.d9769ep-126f,
     0x1.5ee744p-114f, 0.0f, 0.0f, 0.0f, 0x1.5c185ap-13f, 0.0f, 0x1.e66a78p-98f,
     0x1.aac18cp-123f, 0.0f, 0.0f, 0x1.37272cp-100f, 0x1.ca45f8p-99f, 0x1.d2587ep-35f,
     0.0f, 0x1.02fee6p-111f, 0x1.c90b14p-39f, 0.0f, 0x1.a4ce6p-52f, 0.0f,
     0x1.f475b4p-31f, 0.0f, 0x1.9c81bep-65f, 0x1.7fa0a4p-7f, 0x1.70b49ap-77f, 0.0f,
     0.0f, 0x1.9f21c8p-76f, 0.0f, 0x1.5bf188p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5a07dp-87f, 0x1.5f8c5cp-96f, 0x1.a116c4p-51f, 0.0f, 0x1.a740d8p-55f,
     0x1.fd78a4p-35f, 0.0f, 0.0f, 0x1.83eff6p-40f, 0.0f, 0x1.8a50b8p-35f,
     0x1.eff6e6p-103f, 0.0f, 0x1.56b038p-71f, 0x1.eccde4p-40f, 0.0f, 0x1.6327eap-90f,
     0x1.09075cp-125f, 0.0f, 0x1.ac9d8ep-64f, 0.0f, 0x1.228898p-30f, 0x1.1829ecp-89f,
     0x1.661f08p-103f, 0.0f, 0.0f, 0.0f, 0x1.7769dcp-44f, 0.0f, 0x1.75d59ep-67f,
     0x1.1f3b2ep-64f, 0x1.ae508p-15f, 0x1.e0691ap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a49e6cp-28f, 0.0f, 0x1.4cbf0ep-95f, 0.0f, 0x1.3f68a6p-112f, 0x1.07191p-64f,
     0x1.6d4194p-119f, 0.0f, 0.0f, 0x1.b2af64p-44f, 0.0f, 0x1.e78ec4p-63f,
     0x1.8e86cep-48f, 0.0f, 0.0f, 0x1.7c6baap-76f, 0x1.718462p-44f, 0.0f,
     0x1.b6bb2ep-123f, 0.0f, 0.0f, 0x1.e5870ep-83f, 0x1.b2d248p-92f, 0x1.964818p-125f,
     0.0f, 0.0f, 0x1.dd23b8p-32f, 0x1.ae76b4p-104f, 0.0f, 0x1.5841fep-41f,
     0x1.aedd2ap-124f, 0x1.2203a8p-70f, 0.0f, 0x1.368d6cp-17f, 0.0f, 0.0f,
     0x1.0541bap-85f, 0x1.177abcp-7f, 0.0f, 0x1.627b96p-92f, 0x1.f01cecp-59f, 0.0f,
     0x1.333302p-55f, 0x1.869caap-44f, 0.0f, 0x1.6ac4f8p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef7e4cp-98f, 0.0f, 0x1p0f, 0.0f, 0x1.9a69f4p-81f, 0x1.d7df3cp-78f,
     0.0f, 0.0f, 0x1.82766p-97f, 0.0f, 0x1.736362p-81f, 0x1.74b55ep-44f, 0.0f,
     0x1.05cff8p-98f, 0x1.58cd02p-105f, 0.0f, 0x1.f6f0fcp-21f, 0x1.279f64p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.daed78p-72f, 0x1.aec1aep-71f, 0.0f, 0.0f, 0x1.4f050cp-75f,
     0.0f, 0x1p0f, 0.0f, 0x1.26635ap-1f, 0.0f, 0x1.5bea4cp-110f, 0.0f,
     0x1.b4f9aep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb6c22p-16f, 0.0f, 0x1.18c73ap-120f,
     0x1.b8337ap-86f, 0.0f, 0x1.71313cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.daf174p-71f, 0x1.3befdcp-104f, 0x1.f67cbep-98f, 0.0f, 0x1.4ca758p-86f,
     0.0f, 0x1.4b25dcp-107f, 0x1.e672c4p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.59802cp-47f, 0x1.a2e3dcp-52f, 0x1.935414p-11f, 0x1.e41958p-79f,
     0x1.fd19fap-116f, 0.0f, 0.0f, 0.0f, 0x1.59b30ep-75f, 0x1.b2cbcp-51f,
     0x1.079d5ap-113f, 0x1.f16408p-25f, 0.0f, 0x1.aa93cp-19f, 0.0f, 0x1.6fd28p-109f,
     0x1.aa65d6p-19f, 0.0f, 0.0f, 0x1.5ce6dp-79f, 0x1.92406ep-122f, 0x1.7e87aap-117f,
     0.0f, 0x1.684726p-10f, 0x1.7cf1bcp-120f, 0.0f, 0x1.1c2eb8p-78f, 0x1.424a3p-22f,
     0x1.35a492p-125f, 0.0f, 0x1.22518cp-111f, 0x1.45180ep-79f, 0.0f, 0x1.863ca8p-97f,
     0x1.d1a3b2p-71f, 0.0f, 0x1.c90a02p-39f, 0x1.5602dap-79f, 0.0f, 0.0f,
     0x1.fc4fe6p-123f, 0x1.ae1c4ep-19f, 0.0f, 0x1.aa7e1ep-126f, 0.0f, 0x1.64e60ep-86f,
     0x1.040cf4p-104f, 0x1.bc857p-65f, 0.0f, 0.0f, 0.0f, 0x1.26958cp-80f,
     0x1.83714cp-89f, 0x1.62d9aap-26f, 0.0f, 0x1.08c90ap-72f, 0.0f, 0.0f,
     0x1.111aa8p-51f, 0.0f, 0x1.6b40e8p-56f, 0x1.061652p-115f, 0.0f, 0x1.f08a46p-30f,
     0x1.9af1c4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1af0c4p-111f, 0.0f, 0.0f,
     0x1.dca584p-117f, 0.0f, 0x1.e2c2d2p-2f, 0.0f, 0x1.78ebb4p-104f, 0x1.cdd4fap-4f,
     0x1.8ad38ap-85f, 0x1.801f9p-31f, 0.0f, 0x1.2f7b6ep-6f, 0x1.9d5502p-69f, 0.0f,
     0.0f, 0x1.eee284p-10f, 0x1.6420c2p-61f, 0x1.48c592p-36f, 0.0f, 0.0f,
     0x1.ac1288p-42f, 0x1.77db8ap-48f, 0x1.c64022p-9f, 0x1.3c8172p-32f, 0.0f,
     0x1.da4d76p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.468672p-108f, 0.0f,
     0.0f, 0x1.d8ee86p-102f, 0.0f, 0x1.0699c2p-116f, 0x1.ebc6eap-42f, 0x1.ea866ep-66f,
     0.0f, 0.0f, 0x1.4fee4ep-11f, 0.0f, 0x1.1c39ccp-15f, 0.0f, 0.0f, 0.0f,
     0x1.5f77bp-105f, 0x1.354386p-47f, 0.0f, 0x1.e484c4p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.20e2d2p-6f, 0x1.201caap-30f, 0x1.f5048ep-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46adbcp-64f, 0x1.84293ep-111f,
     0x1.5ef398p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34c60cp-82f, 0x1.2ca964p-92f,
     0x1.009bf6p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa0926p-81f, 0.0f, 0x1.9d6d3ep-85f,
     0x1.aaceb8p-92f, 0.0f, 0x1.d8b1e8p-114f, 0x1.122cacp-100f, 0x1.8de26cp-34f,
     0x1.1af0a2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da341ep-7f, 0x1.f325c6p-43f, 0.0f,
     0x1.245894p-15f, 0x1.8d997cp-80f, 0x1.d64eb6p-54f, 0x1.8de21cp-8f, 0.0f,
     0x1.8901b4p-104f, 0x1.8d0ed4p-20f, 0x1.cb0648p-114f, 0.0f, 0x1.6f8a9ep-111f,
     0x1.601ee8p-55f, 0.0f, 0x1.ea6f46p-90f, 0x1.f90b3p-1f, 0x1.dcc218p-92f, 0.0f,
     0.0f, 0.0f, 0x1.bfa264p-117f, 0.0f, 0x1.2a2818p-106f, 0x1.750638p-93f,
     0x1.71edfap-91f, 0x1.1196cap-1f, 0x1.065dfep-75f, 0x1.12de8ep-59f,
     0x1.0ced0ep-111f, 0.0f, 0.0f, 0x1.2955b4p-116f, 0x1.f8fcdap-61f, 0x1.77f034p-37f,
     0x1.05e68p-27f, 0.0f, 0.0f, 0x1.964444p-97f, 0x1.29edfp-113f, 0x1.a0faf6p-117f,
     0.0f, 0x1.ec10b2p-75f, 0x1.82a01cp-30f, 0x1.23d592p-71f, 0.0f, 0x1.2b37c4p-59f
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
            tmp1 = Sleef_finz_sinpif1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sinpif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinpif1_u05purecfma bench acc %a\n", global_bench_acc);
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
