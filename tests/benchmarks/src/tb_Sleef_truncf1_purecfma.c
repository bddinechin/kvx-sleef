/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncf1_purecfma.c --function Sleef_truncf1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
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
     0x1.19647p-98f, 0.0f, 0x1.bab54p-103f, 0x1.4c5f26p-67f, 0x1.e23f04p-54f, 0.0f,
     0.0f, 0.0f, 0x1.2f513ep-124f, 0.0f, 0.0f, 0x1.5ed7bp-71f, 0x1.fc48aap-97f, 0.0f,
     0x1.d32e06p-55f, 0.0f, 0x1.32f8d8p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18b1b6p-28f,
     0.0f, 0x1.c120aap-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85a1b6p-90f, 0.0f,
     0x1.bf43bcp-27f, 0x1.77e878p-98f, 0x1.740c3cp-36f, 0x1.fe3382p-90f, 0.0f,
     0x1.51605ap-34f, 0.0f, 0.0f, 0x1.349d36p-80f, 0x1.5f135ap-50f, 0x1.577afp-36f,
     0.0f, 0x1.501da8p-45f, 0x1.f602e2p-89f, 0x1.9aaa42p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.65caa6p-5f, 0x1.16b092p-40f, 0.0f, 0x1.a1df3p-93f, 0x1.388ab6p-99f,
     0x1.128af2p-14f, 0.0f, 0.0f, 0x1.068f4ep-33f, 0x1.c5b73ap-8f, 0x1.94b368p-92f,
     0x1.ee100ap-90f, 0x1.c49398p-45f, 0x1.66253ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.1bef64p-33f, 0.0f, 0.0f, 0x1.fc0e6ap-122f, 0.0f, 0.0f, 0.0f, 0x1.545b4p-67f,
     0.0f, 0.0f, 0x1.be50dep-12f, 0.0f, 0.0f, 0x1.f220e4p-100f, 0x1.aa8bd4p-33f, 0.0f,
     0x1.aff7c8p-40f, 0.0f, 0.0f, 0.0f, 0x1.1cd65p-53f, 0.0f, 0x1.33f052p-121f,
     0x1.30ac5cp-48f, 0x1.d998bcp-79f, 0x1.40e692p-31f, 0x1.328846p-66f,
     0x1.2370fap-25f, 0.0f, 0.0f, 0.0f, 0x1.1df13p-70f, 0x1.3c094p-3f,
     0x1.511158p-93f, 0.0f, 0.0f, 0x1.e264dap-66f, 0x1.88632p-63f, 0x1.b887fap-93f,
     0.0f, 0x1.e8e4aap-79f, 0.0f, 0.0f, 0x1.52e85ep-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d6754p-48f, 0.0f, 0x1.351caep-5f, 0.0f, 0x1.5ed088p-61f, 0.0f, 0.0f,
     0x1.310c9p-7f, 0x1.d0a542p-100f, 0.0f, 0x1.2cc9f8p-21f, 0x1.cab006p-17f, 0.0f,
     0.0f, 0.0f, 0x1.257696p-37f, 0.0f, 0x1.ba0308p-118f, 0x1.7ca3c4p-88f,
     0x1.546cc2p-49f, 0.0f, 0x1.77857cp-43f, 0x1.9247a2p-46f, 0x1.8bcab8p-88f,
     0x1.a99e6ep-91f, 0.0f, 0.0f, 0x1.e694c6p-89f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9baacp-39f, 0.0f, 0x1.345f8ep-112f, 0.0f, 0.0f, 0.0f, 0x1.9c3276p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7123c4p-31f, 0x1.0b111ep-43f, 0x1.6ad396p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cff2eep-39f, 0.0f, 0.0f, 0x1.47fc66p-53f, 0.0f, 0x1.24d72ep-44f,
     0.0f, 0x1.378d5ap-88f, 0x1.a64456p-51f, 0x1.4bc17p-124f, 0.0f, 0x1.d7a2f6p-116f,
     0.0f, 0x1.b0accap-94f, 0.0f, 0.0f, 0x1.d346cp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6292c2p-17f, 0x1.4fce8ap-44f, 0x1.0df08p-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c6f98p-5f, 0.0f, 0.0f, 0x1.2d66c4p-47f, 0.0f, 0x1.bf592ep-97f, 0.0f,
     0x1.07048ap-1f, 0x1.7f4ebap-27f, 0.0f, 0x1.eddc2p-102f, 0.0f, 0x1.05ff32p-99f,
     0.0f, 0.0f, 0.0f, 0x1.a015e8p-111f, 0.0f, 0x1.ea260cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.576f4ap-115f, 0x1.6b1526p-44f, 0.0f, 0x1.01877ap-28f, 0x1.35fabp-6f, 0.0f,
     0x1.e4180ap-104f, 0x1.eb77c8p-105f, 0.0f, 0x1.02bed4p-119f, 0.0f, 0.0f,
     0x1.f70f0cp-43f, 0x1.cd85cep-85f, 0x1.4e6944p-62f, 0.0f, 0x1.22a62ap-5f, 0.0f,
     0x1.051d02p-41f, 0.0f, 0.0f, 0x1.a7b35cp-75f, 0x1.7dd4b2p-58f, 0x1.17dd1cp-67f,
     0x1.dc97fp-24f, 0x1.c38d1ap-56f, 0.0f, 0x1.546408p-87f, 0.0f, 0x1.dc0edap-92f,
     0x1.9051c4p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.87eacp-26f, 0.0f,
     0x1.e18fe2p-85f, 0.0f, 0.0f, 0x1.322ffep-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.92b2d4p-105f, 0x1.66f42ep-49f, 0x1.01eacep-38f, 0.0f,
     0x1.711404p-99f, 0.0f, 0.0f, 0x1.3ad57cp-102f, 0.0f, 0.0f, 0.0f, 0x1.62cc46p-51f,
     0.0f, 0x1.55d1e8p-89f, 0x1.c4aff8p-93f, 0.0f, 0x1.c156bap-33f, 0.0f,
     0x1.0ac0cp-45f, 0.0f, 0.0f, 0x1.9341fp-96f, 0x1.ceb748p-3f, 0.0f, 0x1.c60bdp-99f,
     0x1.935d2ep-51f, 0x1.ce6bbp-4f, 0.0f, 0.0f, 0.0f, 0x1.360a56p-113f, 0.0f,
     0x1.1b3bep-53f, 0.0f, 0x1.683cep-24f, 0x1.1fb5aep-24f, 0.0f, 0x1.62362ep-102f,
     0x1.3e6c28p-88f, 0.0f, 0.0f, 0.0f, 0x1.f58bbp-11f, 0x1.2dfd44p-47f, 0.0f, 0.0f,
     0.0f, 0x1.ab0adap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bbdf2p-90f, 0x1.f28908p-38f,
     0x1.f13144p-42f, 0x1.eeab9ap-57f, 0x1.635408p-110f, 0.0f, 0x1.930d2ep-102f, 0.0f,
     0.0f, 0.0f, 0x1.ed322ep-116f, 0x1.0fdc34p-90f, 0.0f, 0.0f, 0x1.280b46p-69f, 0.0f,
     0x1.c398eep-5f, 0x1.f2dbacp-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.850f7ap-16f,
     0x1.e940d2p-77f, 0.0f, 0x1.de701ap-114f, 0.0f, 0x1.8cfdc6p-12f, 0x1.1c543cp-99f,
     0x1.ec07d6p-45f, 0.0f, 0x1.db77a2p-110f, 0x1.e801e8p-54f, 0.0f, 0.0f,
     0x1.e6c156p-58f, 0.0f, 0x1.80db0ep-74f, 0x1.5e39ep-98f, 0.0f, 0x1.90ec44p-106f,
     0.0f, 0.0f, 0x1.50f0eep-1f, 0x1.1da91ep-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee6b6cp-73f, 0.0f, 0x1.6ab1fap-8f, 0x1.94ac2cp-78f, 0x1.ae481p-108f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2d40eap-34f, 0x1.728dcap-58f, 0x1.31a4bap-62f, 0.0f,
     0x1.ab82cep-59f, 0x1.f798a8p-6f, 0.0f, 0x1.aa94d8p-46f, 0x1.b5aeccp-17f, 0.0f,
     0x1.319cf2p-104f, 0x1.e977d8p-94f, 0.0f, 0.0f, 0x1.ada368p-108f,
     0x1.20fe5ep-124f, 0x1.4c21d2p-93f, 0x1.b46d8p-120f, 0.0f, 0.0f, 0x1.2aed3ep-57f,
     0.0f, 0x1.79fe04p-63f, 0.0f, 0x1.30f6c6p-111f, 0x1.2eaa9cp-114f, 0.0f, 0.0f,
     0x1.6a9af6p-85f, 0.0f, 0x1.462782p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f1be16p-56f, 0x1.7fa762p-66f, 0x1.c4e9e2p-15f, 0x1.c6510ap-39f,
     0x1.8e8aa4p-99f, 0x1.c8df86p-83f, 0.0f, 0.0f, 0x1.63164p-75f, 0x1.6819ap-54f,
     0x1.4ebf3cp-67f, 0x1.901136p-120f, 0x1.186f3p-78f, 0.0f, 0.0f, 0x1.489abcp-60f,
     0x1.ddde46p-83f, 0.0f, 0x1.67d21ap-109f, 0x1.a4fe1ep-46f, 0x1.8081dp-85f, 0.0f,
     0x1.edbebep-22f, 0x1.7081a2p-100f, 0.0f, 0.0f, 0.0f, 0x1.14a642p-58f,
     0x1.c542fep-10f, 0x1.0bc754p-87f, 0.0f, 0x1.12e94p-16f, 0.0f, 0x1.0f611ap-67f,
     0.0f, 0x1.2867cap-108f, 0x1.69453cp-113f, 0x1.c72c98p-80f, 0x1.5c3becp-19f,
     0x1.9deac4p-27f, 0x1.6d34e4p-56f, 0x1.9112acp-67f, 0.0f, 0x1.a01f44p-116f,
     0x1.d7dd7cp-14f, 0x1.06e588p-57f, 0x1.05885p-102f, 0.0f, 0x1.d8edb2p-100f,
     0x1.041d26p-117f, 0.0f, 0.0f, 0x1.53c386p-86f, 0x1.a38f88p-84f, 0x1.18b474p-33f,
     0x1.7d782ep-95f, 0x1.4e8b46p-68f, 0x1.8a977p-109f, 0.0f, 0x1.6b7fbcp-84f, 0.0f,
     0x1.402bbcp-92f, 0x1.8e28bap-14f, 0x1.1468ep-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e1fbbep-119f, 0.0f, 0x1.79a7d2p-77f, 0.0f, 0x1.83ced8p-10f,
     0x1.de5f6ap-123f, 0x1.cfc71ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b504f6p-52f,
     0x1.28e14cp-39f, 0x1.f2ce52p-52f, 0.0f, 0x1.6e77dap-3f, 0.0f, 0.0f,
     0x1.f39d1ap-16f, 0.0f, 0.0f, 0x1.4637fep-3f, 0x1.e9f2dep-75f, 0x1.00875p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4b38cp-19f, 0x1.c2086ap-22f, 0.0f, 0.0f, 0.0f,
     0x1.ffccfp-11f, 0x1.4fb91cp-5f, 0x1.250c02p-45f, 0x1.6a829ep-5f, 0.0f,
     0x1.2ef74ep-69f, 0x1.ad256ep-17f, 0x1.9a4d8ep-17f, 0.0f, 0x1.635326p-63f,
     0x1.a52b6ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.deb0eap-71f, 0.0f, 0.0f,
     0.0f, 0x1.3eee9p-74f, 0.0f, 0x1.1cb856p-44f, 0.0f, 0.0f, 0.0f, 0x1.e3d05ep-72f,
     0x1.e2b6f8p-36f, 0x1.223d8ap-50f, 0x1.6a8668p-108f, 0.0f, 0x1.2f6c34p-51f,
     0x1.60f7e2p-39f, 0x1.6c77fp-37f, 0.0f, 0x1.ad8af6p-106f, 0.0f, 0.0f,
     0x1.9729dep-82f, 0x1.20866cp-33f, 0.0f, 0.0f, 0x1.96769ep-102f, 0x1.96613ep-118f,
     0.0f, 0x1.5cf35ap-9f, 0x1.32501p-18f, 0.0f, 0.0f, 0x1.c71418p-7f, 0.0f,
     0x1.e26e5ep-19f, 0x1.1b81ap-35f, 0x1.6c6b5cp-92f, 0x1.b263fep-21f, 0.0f,
     0x1.a85b1p-102f, 0x1.6dbb02p-13f, 0.0f, 0.0f, 0.0f, 0x1.d6c51p-49f,
     0x1.424d2p-94f, 0x1.e62a06p-10f, 0x1.54a2bcp-59f, 0x1.dfb418p-123f, 0.0f, 0.0f,
     0x1.d878p-16f, 0.0f, 0.0f, 0.0f, 0x1.f84572p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c6241ap-65f, 0.0f, 0x1.ff267p-31f, 0x1.3c0ffep-35f, 0x1.cc4c18p-41f,
     0.0f, 0.0f, 0.0f, 0x1.aea98p-96f, 0x1.8ea1c8p-4f, 0.0f, 0.0f, 0.0f,
     0x1.96562ep-5f, 0x1.907802p-24f, 0.0f, 0.0f, 0x1.aec9c4p-19f, 0x1.8ba7cep-83f,
     0x1.b9f1d6p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fcc722p-126f, 0x1.d67a24p-54f,
     0x1.055224p-86f, 0.0f, 0x1.1ee44ep-30f, 0.0f, 0x1.249f02p-117f, 0.0f, 0.0f,
     0x1.12f74ap-63f, 0.0f, 0x1.922f9ap-99f, 0.0f, 0x1.201326p-47f, 0.0f,
     0x1.63b63ep-104f, 0.0f, 0x1.552dbp-86f, 0x1.a2e0e4p-108f, 0x1.112bcap-73f,
     0x1.41cf76p-121f, 0.0f, 0x1.60b2b2p-77f, 0x1.5d9012p-65f, 0x1.349594p-55f,
     0x1.444c32p-14f, 0x1.3a8f0ap-16f, 0x1.1d1f44p-15f, 0x1.57a706p-34f, 0.0f, 0.0f,
     0x1.605c74p-77f, 0.0f, 0x1.b81c6cp-101f, 0.0f, 0.0f, 0x1.7a2886p-37f,
     0x1.723bf6p-63f, 0.0f, 0x1.308e98p-8f, 0x1.eaf3cp-124f, 0x1.397b2p-76f,
     0x1.7e4ec4p-120f, 0.0f, 0.0f, 0.0f, 0x1.fbc4b4p-57f, 0.0f, 0x1.12790ep-68f,
     0x1.3f62aap-2f, 0.0f, 0x1.086314p-67f, 0x1.7ec8f4p-67f, 0x1.68c4dap-47f, 0.0f,
     0.0f, 0x1.017f9ep-50f, 0.0f, 0x1.e901f2p-90f, 0.0f, 0x1.27db8cp-103f,
     0x1.49e8dcp-36f, 0.0f, 0x1.45f1e8p-47f, 0x1.2685a8p-3f, 0.0f, 0x1.afe61ap-23f,
     0.0f, 0.0f, 0x1.eb8828p-63f, 0x1.3accb8p-34f, 0.0f, 0x1.657022p-75f,
     0x1.c9bep-72f, 0.0f, 0.0f, 0x1.50e41ep-69f, 0x1.bcd246p-102f, 0x1.03279ap-36f,
     0.0f, 0x1.dbf118p-53f, 0x1.5f1074p-4f, 0x1.e1eb88p-105f, 0.0f, 0.0f,
     0x1.01742ep-85f, 0x1.839682p-34f, 0x1.bbf02ep-56f, 0.0f, 0.0f, 0.0f,
     0x1.894d4ap-57f, 0x1.ffb956p-76f, 0.0f, 0.0f, 0x1.627d84p-91f, 0x1.119544p-40f,
     0x1.857118p-82f, 0x1.0eb432p-68f, 0x1.2f2404p-73f, 0.0f, 0x1.e8e2dap-19f, 0.0f,
     0x1.bbabdcp-86f, 0.0f, 0x1.8dd526p-42f, 0x1.3e2f74p-10f, 0x1.930af8p-45f, 0.0f,
     0.0f, 0x1.001fa4p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0db716p-70f, 0x1.6a121ep-15f,
     0.0f, 0x1.28f588p-68f, 0x1.c393ap-49f, 0x1.dd3478p-94f, 0.0f, 0x1.554652p-24f,
     0.0f, 0.0f, 0.0f, 0x1.8f274p-99f, 0x1.8612c8p-41f, 0.0f, 0x1.4f5c2ep-29f, 0.0f,
     0x1.667406p-93f, 0x1.cb1dbap-50f, 0x1.22cbf4p-99f, 0.0f, 0x1.ea4c2ep-53f, 0.0f,
     0.0f, 0.0f, 0x1.3aeae4p-76f, 0x1.5e0132p-114f, 0.0f, 0.0f, 0x1.4bd92ep-85f, 0.0f,
     0x1.b6a652p-82f, 0.0f, 0.0f, 0x1.9ed2cap-54f, 0.0f, 0x1.cc868cp-19f, 0.0f, 0.0f,
     0.0f, 0x1.043912p-68f, 0x1.6a3216p-10f, 0x1.70e5bep-83f, 0.0f, 0.0f,
     0x1.4d4d6ap-29f, 0x1.4c295ap-59f, 0x1.426ab8p-123f, 0.0f, 0x1.2bffbap-29f,
     0x1.8b7754p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b190d4p-98f, 0x1.8498a6p-68f, 0.0f,
     0x1.defe18p-30f, 0.0f, 0.0f, 0x1.c11d04p-62f, 0x1.5042b2p-117f, 0x1.11ca9ap-51f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.38a164p-96f, 0x1.77bcfap-105f, 0.0f,
     0x1.691838p-15f, 0.0f, 0x1.fe5f9ep-77f, 0x1.08f37ap-124f, 0.0f, 0x1.1e3b5p-61f,
     0.0f, 0x1.9620f6p-17f, 0x1.50d5d2p-5f, 0.0f, 0.0f, 0.0f, 0x1.e972c8p-85f, 0.0f,
     0.0f, 0.0f, 0x1.ec6fd6p-65f, 0.0f, 0x1.dfc284p-65f, 0.0f, 0x1.2e0084p-33f, 0.0f,
     0x1.594506p-30f, 0.0f, 0x1.1eb5ep-8f, 0.0f, 0x1.32e6aap-94f, 0.0f, 0.0f,
     0x1.96e6a6p-54f, 0.0f, 0x1.147efep-83f, 0.0f, 0x1.b34596p-64f, 0.0f, 0.0f,
     0x1.cb9996p-59f, 0x1.c260acp-52f, 0.0f, 0.0f, 0x1.67c6c2p-38f, 0x1.75f90ep-27f,
     0x1.3a474cp-94f, 0x1.4d28c8p-1f, 0.0f, 0.0f, 0.0f, 0x1.01f648p-21f, 0.0f,
     0x1.279beap-74f, 0.0f, 0.0f, 0.0f, 0x1.dbf73ep-113f, 0x1.e0922ap-107f, 0.0f,
     0.0f, 0x1.4185d6p-3f, 0x1.470e28p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.828422p-17f, 0x1.476a3cp-72f, 0.0f, 0.0f, 0x1.514a54p-63f, 0x1.2d2c98p-1f,
     0.0f, 0x1.b8ba9p-43f, 0x1.4c983ap-40f, 0.0f, 0.0f, 0x1.a7047ap-16f,
     0x1.a3c864p-28f, 0x1.cd8524p-12f, 0.0f, 0x1.047c08p-39f, 0x1.0760fap-92f,
     0x1.78544ap-114f, 0.0f, 0x1.f73c6p-65f, 0.0f, 0x1.e5dbb2p-12f, 0x1.c2ed6ap-114f,
     0x1.54e9f8p-78f, 0x1.f4b732p-19f, 0.0f, 0x1.abbbd4p-67f, 0.0f, 0.0f, 0.0f,
     0x1.59fee2p-60f, 0x1.25bc3p-112f, 0x1.d8edecp-115f, 0.0f, 0.0f, 0.0f,
     0x1.ebb69p-61f, 0x1.b3ac2ap-13f, 0.0f, 0x1.e9a118p-1f, 0.0f, 0x1.8d3548p-122f,
     0x1.17c85ap-44f, 0.0f, 0x1.d97eb6p-80f, 0.0f, 0x1.0127fep-73f, 0.0f, 0.0f, 0.0f,
     0x1.bbfc78p-108f, 0x1.33b5e6p-25f, 0.0f, 0.0f, 0.0f, 0x1.b403c6p-24f, 0.0f, 0.0f,
     0x1.23ecbap-16f, 0.0f, 0.0f, 0x1.4f58f4p-26f, 0.0f, 0.0f, 0.0f, 0x1.aed9ap-109f,
     0.0f, 0.0f, 0.0f, 0x1.93d8bep-86f, 0x1.9d8d28p-96f, 0.0f, 0.0f, 0x1.f4520ep-5f,
     0x1.c3545ap-38f, 0x1.a6c916p-92f, 0x1.e9fd5cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ae9f8cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2cf8p-20f, 0.0f, 0.0f, 0x1.b90d9p-75f, 0.0f, 0x1.e06056p-19f, 0.0f,
     0x1.b93aap-112f, 0.0f, 0.0f, 0x1.e1f9b6p-97f, 0.0f, 0.0f, 0.0f, 0x1.74ee42p-121f,
     0x1.ffffe8p-2f, 0x1.85988ep-41f, 0x1.53379ep-18f, 0.0f, 0.0f, 0x1.ffb8fp-4f,
     0x1.9e5ad6p-110f, 0x1.c156fcp-23f, 0x1.6513dap-121f, 0.0f, 0x1.976798p-67f,
     0x1.daa4a4p-22f, 0.0f, 0.0f, 0x1.559abp-55f, 0.0f, 0x1.f37874p-125f, 0.0f, 0.0f,
     0x1.8988a6p-70f, 0x1.7a9966p-27f, 0x1.86e284p-87f
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
            tmp1 = Sleef_truncf1_purecfma(tmp0);
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
    printf("Sleef_truncf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_truncf1_purecfma bench acc %a\n", global_bench_acc);
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
