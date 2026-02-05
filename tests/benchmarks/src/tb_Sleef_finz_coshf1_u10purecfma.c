/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshf1_u10purecfma.c --function \
 *     Sleef_finz_coshf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0.0f, 0x1.8e69cp-26f, 0x1.1cb6ccp-96f, 0x1.ee6f72p-33f, 0.0f,
     0x1.3ed2cp-50f, 0x1.d3c2b4p-15f, 0x1.2c040cp-40f, 0.0f, 0.0f, 0x1.fa1062p-120f,
     0x1.f088e2p-103f, 0.0f, 0.0f, 0x1.ba5346p-1f, 0x1.0f1404p-88f, 0x1.7f8dcap-49f,
     0.0f, 0.0f, 0x1.5f33d2p-116f, 0x1.b885ep-26f, 0x1.635652p-98f, 0.0f,
     0x1.0ada3p-126f, 0.0f, 0.0f, 0x1.16a016p-100f, 0.0f, 0x1.c77a36p-35f, 0.0f, 0.0f,
     0x1.8d787ap-34f, 0.0f, 0.0f, 0.0f, 0x1.4a0076p-25f, 0.0f, 0x1.c0e94ep-85f, 0.0f,
     0.0f, 0x1.751bfp-57f, 0x1.584a52p-65f, 0.0f, 0x1.e817d4p-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e0d296p-42f, 0.0f, 0.0f, 0x1.aa016ap-34f, 0x1.b20feap-66f, 0.0f,
     0x1.87fc38p-13f, 0.0f, 0x1.3e095cp-84f, 0x1.d2ec7ep-83f, 0.0f, 0x1.e7df92p-16f,
     0x1.7b81a6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96aaaap-123f, 0.0f,
     0x1.691ddp-58f, 0.0f, 0x1.205c2p-60f, 0.0f, 0x1.85fadp-22f, 0x1.2bcf9ep-58f,
     0.0f, 0.0f, 0x1.27af34p-89f, 0x1.3ecfc6p-121f, 0x1.2580a4p-38f, 0x1.3457p-69f,
     0x1.53871ep-82f, 0x1.1e16d4p-103f, 0x1.73049ap-5f, 0x1.47ef42p-30f,
     0x1.54bdb2p-99f, 0.0f, 0x1.86bc84p-37f, 0.0f, 0x1.d5a0aap-71f, 0x1.def45ep-60f,
     0.0f, 0x1.cef712p-54f, 0x1p0f, 0x1.4ae024p-60f, 0.0f, 0x1.f622fp-11f, 0.0f, 0.0f,
     0x1.a8af7ep-80f, 0x1.f28a7ep-31f, 0.0f, 0x1.2a2b2ap-121f, 0x1.d36d02p-70f, 0.0f,
     0.0f, 0.0f, 0x1.88288cp-88f, 0.0f, 0x1.8dd674p-98f, 0x1.cc1d84p-64f, 0.0f,
     0x1.a3fd86p-67f, 0x1.cf4058p-30f, 0.0f, 0.0f, 0.0f, 0x1.ce93ap-51f,
     0x1.033b52p-83f, 0x1.fee0d4p-16f, 0.0f, 0x1.7cf34cp-30f, 0.0f, 0x1.d215b8p-99f,
     0x1.31bcd6p-47f, 0x1.d38eeep-45f, 0.0f, 0.0f, 0x1.a5150ap-125f, 0.0f,
     0x1.4c95ap-59f, 0.0f, 0.0f, 0.0f, 0x1.41ffecp-91f, 0.0f, 0.0f, 0x1.807abap-65f,
     0x1.c4d12p-76f, 0x1.cd7f46p-19f, 0x1.10a07ap-87f, 0x1.4814f2p-76f,
     0x1.cea732p-78f, 0x1.96beb4p-99f, 0.0f, 0x1.76d298p-36f, 0.0f, 0x1.c5f0fep-62f,
     0.0f, 0x1.bbf1c8p-9f, 0.0f, 0.0f, 0x1.391804p-22f, 0x1.1da7f2p-122f, 0.0f, 0.0f,
     0.0f, 0x1.03bd7p-84f, 0x1.2ca434p-122f, 0x1.c31c88p-82f, 0.0f, 0.0f,
     0x1.6fe0fep-94f, 0x1.11aeb2p-69f, 0.0f, 0x1.46d78cp-25f, 0x1.51a5bap-120f, 0.0f,
     0.0f, 0.0f, 0x1.7ca234p-34f, 0.0f, 0x1.6b8a8p-114f, 0.0f, 0.0f, 0x1.d6d9a6p-36f,
     0.0f, 0.0f, 0x1.345046p-95f, 0.0f, 0x1.17fbfep-60f, 0.0f, 0x1.30e6b4p-62f,
     0x1.b1aafep-35f, 0.0f, 0x1.cff658p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2811bp-123f,
     0.0f, 0x1.9fb22cp-44f, 0x1.2cddd2p-67f, 0.0f, 0.0f, 0x1.40e29p-81f,
     0x1.479938p-22f, 0x1.2ec96p-10f, 0x1.67e2e8p-77f, 0x1.cac1fp-1f, 0.0f, 0.0f,
     0x1.a71d56p-25f, 0x1.7122cp-35f, 0x1.cef092p-123f, 0x1.5df074p-32f,
     0x1.7531c8p-36f, 0.0f, 0.0f, 0x1.79f3c6p-38f, 0.0f, 0x1.0a7e3cp-102f,
     0x1.54767ap-84f, 0x1.20ec84p-51f, 0x1.7ad1fep-97f, 0x1.830fb8p-91f,
     0x1.2ac4c2p-33f, 0x1.d10004p-43f, 0x1.e0e46ap-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.26693ep-12f, 0x1.032604p-76f, 0.0f, 0x1.73359p-74f, 0x1.4211fep-42f, 0.0f,
     0.0f, 0.0f, 0x1.c28afcp-3f, 0.0f, 0x1.8eaab8p-66f, 0x1.14f9c8p-71f,
     0x1.615274p-22f, 0x1.f72b48p-90f, 0.0f, 0x1.4735bap-73f, 0x1.f5edb2p-2f,
     0x1.c9fa2p-117f, 0.0f, 0.0f, 0x1.91553p-20f, 0x1.ceb034p-103f, 0.0f, 0.0f, 0.0f,
     0x1.303ba8p-34f, 0x1.7c8b4p-45f, 0x1.44e33ap-62f, 0x1.ae1b2p-49f,
     0x1.6ca54cp-114f, 0x1.e68176p-85f, 0.0f, 0.0f, 0x1.1a1c0cp-115f, 0.0f,
     0x1.14c2b6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e67bbap-17f, 0x1.146264p-100f, 0.0f,
     0x1.462d88p-40f, 0x1.924bb8p-99f, 0.0f, 0x1.361498p-30f, 0.0f, 0x1.80784p-17f,
     0x1.6bcdecp-3f, 0x1.b713f4p-42f, 0x1.4a63a2p-78f, 0.0f, 0.0f, 0x1.b05f1cp-103f,
     0.0f, 0x1.a27d78p-94f, 0.0f, 0.0f, 0x1.54be0cp-29f, 0x1.f19c1cp-8f, 0.0f,
     0x1.e895e2p-41f, 0x1.905af8p-69f, 0.0f, 0.0f, 0.0f, 0x1.00297cp-76f,
     0x1.3edb2ap-3f, 0x1.71aba8p-28f, 0.0f, 0.0f, 0x1.effe98p-62f, 0x1.4a0c54p-24f,
     0.0f, 0x1.b7617p-1f, 0x1.7ba41ap-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d28766p-29f,
     0.0f, 0x1.d401d4p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.318b3ep-111f, 0.0f, 0x1.4efd5p-119f, 0.0f, 0.0f, 0.0f, 0x1.a387dep-115f,
     0.0f, 0x1.7c5d02p-72f, 0x1.60b58p-42f, 0.0f, 0x1.7daa38p-119f, 0x1.9ae5c8p-118f,
     0.0f, 0x1.7b41eap-27f, 0x1.aef26cp-53f, 0x1.4e621p-24f, 0.0f, 0x1.443ec2p-5f,
     0.0f, 0x1.d36a98p-77f, 0x1.1aea24p-1f, 0x1.62912ep-114f, 0.0f, 0.0f, 0.0f,
     0x1.7457fp-52f, 0x1.b89cb6p-18f, 0.0f, 0x1.b04a72p-62f, 0x1.4eff54p-89f, 0.0f,
     0x1.0bb95ep-43f, 0.0f, 0.0f, 0.0f, 0x1.9738c8p-18f, 0x1.22622p-62f, 0.0f, 0.0f,
     0x1.3cb1c4p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.010d6p-42f, 0.0f, 0.0f, 0.0f,
     0x1.a80b7p-102f, 0.0f, 0x1.e882a4p-117f, 0x1.abe9e2p-88f, 0x1.bd4b7p-74f,
     0x1.fbb7fp-12f, 0x1.5816f2p-43f, 0.0f, 0x1.62832ap-111f, 0.0f, 0x1.9afd16p-32f,
     0.0f, 0x1.555c6ep-22f, 0x1.683196p-112f, 0.0f, 0x1.3c181p-112f, 0.0f,
     0x1.d95874p-101f, 0.0f, 0x1.e62578p-15f, 0x1.49f1e8p-103f, 0.0f, 0x1.a7d2b4p-67f,
     0.0f, 0x1.55fe2ap-89f, 0.0f, 0x1.924368p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4f23dep-27f, 0x1.0c83e8p-77f, 0.0f, 0.0f, 0x1.64bc22p-83f, 0x1.4305fp-57f,
     0.0f, 0x1.8b981cp-48f, 0.0f, 0.0f, 0x1.151ad6p-115f, 0x1.27ef9ep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.64633ap-19f, 0x1.34d7a8p-25f, 0.0f, 0x1.af933cp-54f, 0.0f,
     0x1.6a0968p-60f, 0.0f, 0x1.f58cecp-63f, 0x1.91e7d6p-22f, 0x1.e255c4p-66f,
     0x1.4ff954p-4f, 0x1.fd5288p-47f, 0x1.0db7dcp-64f, 0.0f, 0.0f, 0x1.5c6a0ep-61f,
     0x1.ed8494p-58f, 0x1.da7906p-87f, 0.0f, 0.0f, 0.0f, 0x1.3c1158p-40f,
     0x1.1548acp-41f, 0x1.18e574p-105f, 0.0f, 0x1.58760cp-94f, 0.0f, 0x1.e79972p-21f,
     0.0f, 0x1.7abbdp-9f, 0.0f, 0.0f, 0x1.8f0cfp-64f, 0.0f, 0x1.993fecp-126f, 0.0f,
     0.0f, 0x1.28c946p-115f, 0x1.582072p-76f, 0x1.f67f98p-21f, 0.0f, 0x1.0ca316p-16f,
     0x1.a3935ep-23f, 0x1.636c68p-50f, 0x1.4ade6p-35f, 0.0f, 0x1.cde75cp-57f, 0.0f,
     0x1.2e8a96p-71f, 0.0f, 0x1.669a14p-11f, 0.0f, 0x1.4afc7p-76f, 0x1.12c5bap-70f,
     0.0f, 0.0f, 0x1.3765ep-18f, 0x1.387a12p-19f, 0x1.586238p-51f, 0.0f, 0.0f,
     0x1.296a5ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3eaecp-72f, 0.0f,
     0x1.a1f426p-88f, 0x1.fca35cp-62f, 0.0f, 0.0f, 0x1.6791d6p-41f, 0x1.e6a362p-97f,
     0x1.750f16p-45f, 0.0f, 0.0f, 0x1.2f04eap-36f, 0.0f, 0x1.74ee68p-110f, 0.0f,
     0x1.1c47dp-100f, 0.0f, 0x1.06e7dp-24f, 0.0f, 0.0f, 0.0f, 0x1.baa326p-116f, 0.0f,
     0.0f, 0x1.57599cp-114f, 0.0f, 0.0f, 0.0f, 0x1.0a2f74p-60f, 0x1.b8876p-1f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.03a0aap-60f, 0x1.aeca56p-13f, 0x1.1572b8p-61f,
     0x1.ecc366p-4f, 0.0f, 0x1.e89274p-115f, 0x1.729a64p-109f, 0x1.354476p-95f,
     0x1.4e67aep-26f, 0.0f, 0x1.de7b88p-69f, 0.0f, 0.0f, 0.0f, 0x1.d5466cp-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ee2dcp-73f, 0x1.53dbbap-48f, 0.0f, 0.0f,
     0x1.79166ep-55f, 0.0f, 0.0f, 0x1.0c9386p-109f, 0.0f, 0.0f, 0x1.77a9ccp-46f,
     0x1.490ce2p-72f, 0.0f, 0x1.af2f6ap-60f, 0.0f, 0x1.078c4ap-91f, 0x1.e9fa8cp-103f,
     0.0f, 0x1.0df0b6p-32f, 0.0f, 0.0f, 0x1.c446e4p-45f, 0x1.fa4dccp-55f, 0.0f, 0.0f,
     0x1.61c54cp-45f, 0x1.3cce42p-51f, 0.0f, 0x1.fabfb6p-18f, 0x1.b9a5dcp-1f,
     0x1.3946fcp-119f, 0x1.ad69ap-71f, 0.0f, 0x1.e21cb2p-45f, 0x1.b156bp-115f,
     0x1.04c3cap-75f, 0x1.787ffcp-29f, 0x1.1b6344p-81f, 0.0f, 0x1.cfa864p-120f, 0.0f,
     0x1.806c14p-96f, 0x1.a3ddccp-31f, 0.0f, 0.0f, 0x1.b2355ap-42f, 0.0f,
     0x1.1bee6ep-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.985bap-79f, 0x1.c57d62p-48f, 0.0f,
     0.0f, 0x1.4c0f26p-64f, 0x1.cb245p-116f, 0x1.d06e66p-10f, 0.0f, 0x1.d9129p-13f,
     0x1.3383aep-126f, 0x1.84b73ap-9f, 0x1.f7346p-117f, 0.0f, 0.0f, 0x1.602524p-87f,
     0x1.64ce1ap-24f, 0x1.7146dap-98f, 0x1.bf6198p-114f, 0x1.9df91ap-121f,
     0x1.e3d82ep-117f, 0x1.8ae892p-13f, 0x1.90dd78p-26f, 0x1p0f, 0x1.e0e428p-22f,
     0.0f, 0.0f, 0.0f, 0x1.995c44p-105f, 0x1.b2660cp-115f, 0x1.123ff2p-118f,
     0x1.60ac6ap-117f, 0x1.3791aap-59f, 0x1.450c9ep-4f, 0x1.c2eeaap-82f, 0.0f, 0.0f,
     0.0f, 0x1.e34266p-80f, 0.0f, 0x1.f9e8fep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e2e254p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8066f2p-39f, 0.0f, 0x1.e8383p-76f,
     0.0f, 0.0f, 0x1.be811p-114f, 0.0f, 0x1.73316ep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e66682p-101f, 0x1.a868dep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2cda32p-50f,
     0x1.e4b93p-91f, 0x1.f9f826p-77f, 0x1.ac54a2p-104f, 0x1.ac0408p-88f, 0.0f, 0.0f,
     0x1.3c16ecp-33f, 0.0f, 0x1.739f26p-15f, 0.0f, 0x1.0d69b6p-35f, 0.0f, 0.0f,
     0x1.d8b994p-101f, 0.0f, 0.0f, 0.0f, 0x1.a92396p-23f, 0x1.b72e7cp-13f,
     0x1.cd5cc2p-10f, 0.0f, 0x1.26e632p-82f, 0.0f, 0x1.a690aap-18f, 0x1.5ff47ap-94f,
     0x1.8a4294p-64f, 0.0f, 0x1.ad74bp-46f, 0.0f, 0.0f, 0.0f, 0x1.bf419cp-35f, 0.0f,
     0.0f, 0x1.4019d2p-9f, 0x1.d3119p-120f, 0x1.dbe0bp-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fe05e8p-30f, 0x1.fc3bbep-94f, 0.0f, 0x1.537094p-114f, 0.0f,
     0x1.160984p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0260dep-29f,
     0x1.12d31ep-112f, 0x1.f56854p-61f, 0.0f, 0x1.d2b2f2p-59f, 0x1.c21e1ap-17f, 0.0f,
     0x1.704f98p-16f, 0x1.7879fap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c2b4ecp-36f, 0.0f, 0x1.624efap-50f, 0x1.fac428p-84f, 0.0f, 0x1.d936fap-28f,
     0.0f, 0x1.b90a2ep-9f, 0x1.62a53ep-87f, 0.0f, 0x1.cc6598p-12f, 0.0f, 0.0f,
     0x1.00c2fp-37f, 0x1.36d924p-55f, 0x1.6d28eep-84f, 0x1.8c7a7cp-53f,
     0x1.cb73bp-119f, 0x1.3cb1cap-104f, 0x1.33154ap-110f, 0.0f, 0x1.16d45p-124f,
     0x1.b1cab4p-87f, 0.0f, 0x1.52db0ap-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f99e2p-68f,
     0.0f, 0.0f, 0.0f, 0x1.5ef25ap-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fccb0ap-84f, 0x1.5d1444p-87f, 0.0f, 0.0f, 0x1.daf982p-73f,
     0x1.3af93ap-44f, 0.0f, 0x1.e374a2p-70f, 0x1.69714cp-20f, 0x1.6565b4p-98f, 0.0f,
     0x1.0a1c14p-61f, 0x1.404ca4p-122f, 0.0f, 0x1.0cc87ep-88f, 0x1.9a0b68p-45f,
     0x1.8bcef4p-90f, 0x1.a1cab6p-20f, 0x1.7797e6p-42f, 0x1.9dd618p-122f, 0.0f,
     0x1.ac48bcp-34f, 0.0f, 0x1.990778p-112f, 0x1.cd77eep-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.665792p-38f, 0.0f, 0x1.ed9782p-120f, 0.0f, 0x1.89505p-54f,
     0x1.84ce1ep-112f, 0x1.634768p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c9ed6p-80f, 0.0f,
     0x1.9fb7dap-48f, 0x1.2ebfd8p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59648p-85f, 0.0f,
     0.0f, 0x1.2ed45p-45f, 0x1.13cdap-67f, 0x1.39e906p-94f, 0x1.131f2ep-106f,
     0x1.566132p-20f, 0x1.931b68p-105f, 0x1.af9e16p-63f, 0.0f, 0.0f, 0x1.f1fac8p-111f,
     0.0f, 0.0f, 0x1.75f374p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a37f8ap-41f, 0x1.a3c9eep-120f, 0.0f, 0x1.a53efcp-45f, 0.0f, 0.0f, 0.0f,
     0x1.8a7bfap-99f, 0x1.a163d8p-2f, 0x1.cff148p-65f, 0.0f, 0x1.2f1eacp-64f, 0.0f,
     0.0f, 0.0f, 0x1.12bb4ep-14f, 0.0f, 0x1.ddba8p-94f, 0.0f, 0.0f, 0x1.a6c3fap-120f,
     0.0f, 0.0f, 0x1.4b89cep-29f, 0x1.156b44p-67f, 0.0f, 0.0f, 0.0f, 0x1.e73772p-60f,
     0x1.a869d6p-37f, 0.0f, 0.0f, 0x1.f96f7p-21f, 0.0f, 0.0f, 0.0f, 0x1.a97464p-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fea218p-86f, 0.0f, 0.0f, 0.0f, 0x1.6a5ce6p-5f, 0.0f,
     0x1.5f9718p-66f, 0x1.1862dcp-87f, 0.0f, 0x1.392e2ep-126f, 0.0f, 0.0f,
     0x1.4e250ap-64f, 0x1.5b5db4p-27f, 0.0f, 0.0f, 0.0f, 0x1.c3c95p-87f, 0.0f,
     0x1.212f6p-75f, 0x1.929be4p-36f, 0x1.94065ep-9f, 0x1.ada53ep-65f, 0.0f, 0.0f,
     0x1.ff211ap-106f, 0x1.8ad5e4p-23f, 0.0f, 0.0f, 0x1.98b53ap-31f, 0x1.f35154p-8f,
     0.0f, 0x1.50ab72p-96f, 0x1.4fd9a8p-18f, 0.0f, 0.0f, 0x1.02415cp-40f,
     0x1.4c4396p-82f, 0.0f, 0x1.a5e272p-81f, 0x1.8e39e8p-111f, 0x1.64a03ep-83f, 0.0f,
     0.0f, 0x1.59ff34p-50f, 0x1.2d4becp-95f, 0x1.89130ap-115f, 0x1.bc5b1ep-89f, 0.0f,
     0x1.7bf076p-44f, 0.0f, 0x1.72c958p-71f, 0x1.7eee24p-42f, 0x1.30ca9cp-69f,
     0x1.84827ap-99f, 0.0f, 0.0f, 0x1.4de71ap-68f, 0x1.1334fcp-73f, 0.0f,
     0x1.6ee628p-42f, 0x1.da448ep-102f, 0x1.84bb2ap-111f, 0.0f, 0x1.7662dep-36f,
     0x1.b39b5p-47f, 0x1.96017ep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd9cb8p-7f,
     0x1.16454ap-59f, 0.0f, 0x1.ae7ef8p-3f, 0.0f, 0.0f, 0x1.f6504ap-21f, 0.0f,
     0x1.818e2ap-106f, 0x1.86e59p-107f, 0.0f, 0.0f, 0.0f, 0x1.24beb4p-83f,
     0x1.7f3ac8p-37f, 0x1.88eb92p-113f, 0x1.81538p-100f, 0x1.4221ap-61f,
     0x1.ccf4aep-42f, 0x1.0c7062p-47f, 0.0f, 0x1.b3ab5cp-95f, 0x1.2dafap-25f,
     0x1.eef71p-20f, 0x1.497dd2p-118f, 0.0f, 0.0f, 0.0f, 0x1.8cef1ap-104f,
     0x1.9dd17ep-90f, 0.0f, 0x1.b4db2cp-12f, 0x1.dfd5d8p-37f, 0.0f, 0x1.570cf2p-83f,
     0.0f, 0.0f, 0.0f, 0x1.d90d02p-25f, 0x1.8eb488p-29f, 0x1.8e1852p-93f
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
            tmp1 = Sleef_finz_coshf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_coshf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshf1_u10purecfma bench acc %a\n", global_bench_acc);
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
