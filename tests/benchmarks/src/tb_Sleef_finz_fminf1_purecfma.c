/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fminf1_purecfma.c --function \
 *     Sleef_finz_fminf1_purecfma --arity 2 --headers \
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
     0.0f, 0.0f, 0x1.bd16bp-104f, 0.0f, 0x1.8628c2p-105f, 0x1.14a922p-122f,
     0x1.67841cp-115f, 0.0f, 0.0f, 0.0f, 0x1.ef8246p-78f, 0.0f, 0x1.4e48d6p-67f,
     0x1.2e707ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.99d14ap-49f, 0x1.da892cp-35f,
     0x1.46c6ap-99f, 0x1.8b55e8p-112f, 0x1.cfa49cp-45f, 0.0f, 0.0f, 0.0f,
     0x1.5b4e26p-79f, 0.0f, 0.0f, 0.0f, 0x1.8ada46p-62f, 0x1.e5c302p-103f, 0.0f, 0.0f,
     0.0f, 0x1.6b81f2p-29f, 0x1.74f8a8p-21f, 0x1.e4a3a8p-47f, 0x1.0e796p-7f, 0.0f,
     0.0f, 0.0f, 0x1.883cf8p-19f, 0x1.3b88c6p-62f, 0x1.dabee6p-26f, 0.0f,
     0x1.6986dcp-76f, 0.0f, 0.0f, 0x1.1abeb6p-44f, 0.0f, 0x1.5494b4p-20f, 0.0f,
     0x1.e8989p-10f, 0x1.aa5f86p-49f, 0x1.d805aep-43f, 0x1.890916p-71f, 0.0f,
     0x1.5ced54p-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.43e988p-4f, 0.0f, 0.0f, 0.0f, 0x1.3046d6p-99f, 0x1.97431ep-96f, 0.0f,
     0x1.daa216p-99f, 0.0f, 0x1.63a6f8p-116f, 0x1.ed3af8p-86f, 0x1.9023b6p-105f, 0.0f,
     0x1.ad32e2p-30f, 0.0f, 0.0f, 0.0f, 0x1.9d2264p-38f, 0.0f, 0.0f, 0.0f,
     0x1.beca12p-102f, 0.0f, 0x1.d6e8fp-4f, 0.0f, 0x1.a43468p-93f, 0.0f, 0.0f,
     0x1.198d7cp-61f, 0.0f, 0.0f, 0x1.8892acp-69f, 0x1.b298bap-34f, 0x1.2879d6p-71f,
     0x1.a75024p-16f, 0x1.56c3eep-23f, 0.0f, 0.0f, 0x1.c911a4p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.55972cp-76f, 0x1.8897bp-110f, 0.0f, 0.0f,
     0x1.b239c4p-70f, 0x1.3ed7aap-99f, 0x1.00daaep-66f, 0x1.5c512cp-34f,
     0x1.36665ep-33f, 0x1.eb1e82p-92f, 0x1.31b2a4p-50f, 0x1.c84736p-62f, 0.0f, 0.0f,
     0.0f, 0x1.dccd3ep-118f, 0.0f, 0x1.95a18ap-61f, 0x1.a0cea4p-45f, 0x1.7f5b6ep-101f,
     0x1.e62794p-43f, 0x1.ac586ep-111f, 0.0f, 0x1.c9e73ap-42f, 0.0f, 0x1.3ff906p-113f,
     0x1.b34e06p-2f, 0.0f, 0x1.ebbe84p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cc32p-114f, 0x1.0f591ep-71f, 0x1.490f7ep-82f, 0x1.4cefecp-85f, 0.0f, 0.0f,
     0x1.be8a78p-17f, 0x1.f8d45ap-99f, 0x1p0f, 0x1.39bee2p-25f, 0.0f, 0x1.b51af2p-59f,
     0x1.425c64p-63f, 0.0f, 0x1.034aep-73f, 0.0f, 0.0f, 0.0f, 0x1.d34756p-113f, 0.0f,
     0.0f, 0x1.5fc614p-39f, 0.0f, 0x1.250524p-22f, 0x1.979c1cp-15f, 0x1.0952e2p-62f,
     0.0f, 0x1.defc5p-58f, 0x1.f9c6cp-77f, 0x1.3a2cb4p-88f, 0x1.beaaaep-77f,
     0x1.e44aaap-53f, 0.0f, 0x1.f18166p-23f, 0x1.bb372ap-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.786714p-19f, 0x1.ebc628p-58f, 0x1.8b4494p-11f, 0x1.d088a2p-125f,
     0x1.4eb518p-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4c3aap-18f, 0x1.7f1ap-66f, 0.0f,
     0x1.336b4cp-93f, 0.0f, 0x1.ebc428p-126f, 0x1.c2f0f6p-77f, 0.0f, 0x1.d293eep-72f,
     0x1.ff1b7ap-33f, 0x1.0a8e48p-88f, 0x1.ebe37cp-103f, 0x1.7f400cp-57f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1973dcp-58f, 0x1.6ffe8ap-30f, 0x1.d66486p-84f, 0x1.b4c716p-3f,
     0x1.834782p-98f, 0x1.cdc32p-116f, 0x1.3d5dc6p-77f, 0.0f, 0.0f, 0x1.7d636cp-73f,
     0x1.22e1fcp-85f, 0x1.cff9dcp-23f, 0.0f, 0x1.f30fdap-48f, 0x1.0bece2p-91f,
     0x1.3b6628p-33f, 0.0f, 0x1.196a12p-72f, 0x1.8bf2fep-62f, 0.0f, 0.0f,
     0x1.a08dd8p-27f, 0.0f, 0x1.3dd696p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93caf2p-45f, 0x1.6c503cp-108f, 0.0f, 0.0f, 0.0f, 0x1.92667ap-8f, 0.0f,
     0x1.b5b536p-112f, 0.0f, 0x1.44619ep-119f, 0.0f, 0.0f, 0x1.277da8p-116f,
     0x1.76cea2p-32f, 0x1.ec3e46p-81f, 0x1.272dfcp-86f, 0.0f, 0.0f, 0x1.e56d26p-15f,
     0x1.dfc93ap-39f, 0x1.e4a2ep-64f, 0x1.f5a5f4p-102f, 0x1.d520d8p-17f,
     0x1.29602p-96f, 0x1.12fe34p-126f, 0x1.ad5752p-71f, 0x1.20588cp-103f, 0.0f,
     0x1.94a8d8p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8714bp-102f, 0x1.a46908p-78f,
     0x1.2bfb82p-55f, 0.0f, 0.0f, 0x1.d834aep-56f, 0x1.7f0d26p-99f, 0.0f,
     0x1.3e707cp-48f, 0.0f, 0x1.e4586cp-99f, 0.0f, 0x1.64e43p-101f, 0x1.4ea906p-85f,
     0.0f, 0x1.b5c322p-106f, 0x1.68f8a6p-66f, 0x1.3ad9a2p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9af2p-23f, 0x1.d88b68p-118f, 0.0f, 0x1.d9bd04p-40f, 0x1.9aca8p-19f,
     0x1.cfb05p-121f, 0.0f, 0x1.ca0998p-34f, 0.0f, 0.0f, 0x1.d84276p-91f, 0.0f,
     0x1.778d78p-58f, 0x1.445c22p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.091696p-4f, 0.0f, 0.0f, 0x1.45cb04p-48f, 0.0f, 0x1.59e416p-124f,
     0x1.20ae64p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.18efep-57f, 0.0f, 0x1.4cf976p-93f,
     0x1.1ff2cp-68f, 0.0f, 0.0f, 0.0f, 0x1.c82362p-80f, 0x1.769f3cp-76f, 0.0f,
     0x1.ac498p-109f, 0.0f, 0x1.1545d4p-121f, 0x1.1e5ffap-115f, 0x1.de4f16p-82f,
     0x1.0a8bd8p-66f, 0x1.0a84cep-67f, 0x1.14c0a8p-61f, 0.0f, 0.0f, 0x1.0ccf16p-62f,
     0.0f, 0x1.a85b88p-63f, 0x1.b4d354p-94f, 0.0f, 0.0f, 0.0f, 0x1.06e702p-54f, 0.0f,
     0x1.22c42p-89f, 0x1.1a511cp-120f, 0.0f, 0x1.35f432p-104f, 0.0f, 0.0f, 0.0f,
     0x1.077a5ap-71f, 0.0f, 0.0f, 0.0f, 0x1.63c70cp-33f, 0.0f, 0x1.96ab9ep-66f, 0.0f,
     0.0f, 0x1.0f008ap-36f, 0x1.5d3668p-4f, 0x1.54fbap-94f, 0x1.ab4e48p-68f,
     0x1.1f4a8p-38f, 0.0f, 0.0f, 0x1.ba7502p-25f, 0x1.80fd0cp-116f, 0.0f,
     0x1.731fd2p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4f722cp-19f, 0x1.72dfe4p-66f,
     0x1.0d7806p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6873cp-77f, 0x1.3aa954p-22f, 0.0f,
     0x1.ad122cp-70f, 0x1.7497b6p-19f, 0x1.f40874p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.39a75cp-109f, 0.0f, 0x1.bbe0a4p-108f, 0.0f, 0.0f, 0x1.ec1cd6p-30f, 0.0f,
     0.0f, 0.0f, 0x1.1c17dcp-12f, 0.0f, 0.0f, 0.0f, 0x1.d40f8ep-17f, 0.0f, 0.0f, 0.0f,
     0x1.aa121ap-16f, 0.0f, 0.0f, 0.0f, 0x1.f03812p-25f, 0x1.f38942p-1f,
     0x1.94a486p-123f, 0.0f, 0.0f, 0.0f, 0x1.87bf96p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.dc142p-52f, 0.0f, 0.0f, 0x1.bb3ae6p-68f, 0.0f, 0x1.4964ap-112f, 0.0f,
     0.0f, 0x1.8cdd7cp-43f, 0.0f, 0x1.e8f92ep-83f, 0x1.a852b2p-77f, 0.0f, 0.0f,
     0x1.6ab4a6p-58f, 0.0f, 0x1.4e2e12p-120f, 0.0f, 0x1.33735p-73f, 0x1.98b26p-103f,
     0x1.87babap-66f, 0x1.d13e04p-15f, 0x1.2007d8p-49f, 0.0f, 0.0f, 0.0f,
     0x1.50d40cp-68f, 0x1.51cf1p-10f, 0x1.518a96p-126f, 0x1.494b66p-55f,
     0x1.573694p-45f, 0.0f, 0x1.381878p-57f, 0x1.e0dd5ap-68f, 0.0f, 0x1.38aa7ap-40f,
     0x1.3177c6p-100f, 0.0f, 0.0f, 0x1.3b6f9p-103f, 0.0f, 0x1.794beep-15f, 0.0f,
     0x1.f06bc2p-119f, 0.0f, 0.0f, 0.0f, 0x1.fed974p-109f, 0.0f, 0.0f,
     0x1.64a03ep-95f, 0.0f, 0x1.866e44p-70f, 0x1.fbbddep-81f, 0x1.87cde6p-29f, 0.0f,
     0.0f, 0.0f, 0x1.6783dep-18f, 0x1.b79772p-35f, 0.0f, 0.0f, 0.0f, 0x1.fc0d18p-124f,
     0x1.cd30fcp-48f, 0x1.3e0352p-47f, 0x1.bce5dcp-3f, 0x1.292b16p-9f, 0.0f,
     0x1.287efp-53f, 0x1.568ad8p-1f, 0.0f, 0x1.34bdf4p-17f, 0.0f, 0x1.e8b1aap-5f,
     0.0f, 0.0f, 0x1.77ba9ap-114f, 0.0f, 0.0f, 0x1.f92836p-115f, 0.0f, 0.0f,
     0x1.112342p-96f, 0x1.b83952p-5f, 0.0f, 0.0f, 0.0f, 0x1.7ea55p-44f, 0.0f, 0.0f,
     0.0f, 0x1.d7d158p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f20c6ep-40f, 0.0f,
     0x1.cb13a2p-70f, 0.0f, 0.0f, 0.0f, 0x1.48b786p-83f, 0x1.bdb43ep-61f,
     0x1.8fe1e4p-59f, 0x1.7657dcp-67f, 0.0f, 0x1.8e8d96p-19f, 0.0f, 0.0f,
     0x1.450148p-68f, 0.0f, 0x1.be176cp-119f, 0x1.55e52ap-89f, 0x1.066646p-31f,
     0x1.6fe1cep-10f, 0.0f, 0x1.7194f4p-91f, 0.0f, 0x1.885cb8p-31f, 0.0f,
     0x1.a906bp-91f, 0x1.95911ep-4f, 0x1.7b3634p-79f, 0.0f, 0x1.d7df4ap-20f,
     0x1.f8d724p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.695d44p-96f, 0.0f,
     0x1.5cd3p-41f, 0x1.e05234p-123f, 0.0f, 0.0f, 0x1.727e86p-58f, 0.0f,
     0x1.f238eep-51f, 0x1.d91c7cp-28f, 0.0f, 0x1.d935b6p-84f, 0.0f, 0x1.c61cccp-117f,
     0.0f, 0.0f, 0x1.27264cp-29f, 0.0f, 0x1.100ca4p-26f, 0x1.19241ap-89f,
     0x1.724f92p-63f, 0.0f, 0x1.0be8a4p-115f, 0x1.bae3cep-16f, 0.0f, 0x1.b3c714p-66f,
     0.0f, 0.0f, 0.0f, 0x1.e79de6p-62f, 0x1.2e7728p-105f, 0x1.0c740cp-83f,
     0x1.b86d5p-94f, 0.0f, 0x1.44a7ccp-79f, 0x1.e74e54p-82f, 0x1.202c4ep-118f, 0.0f,
     0x1.a1224ep-123f, 0x1.f24ca4p-82f, 0.0f, 0.0f, 0.0f, 0x1.8d4d62p-7f,
     0x1.b3bea4p-37f, 0.0f, 0x1.8be0dp-20f, 0x1.0cd96cp-75f, 0.0f, 0.0f, 0.0f,
     0x1.5b1142p-46f, 0x1p0f, 0.0f, 0x1.d6169ap-123f, 0.0f, 0.0f, 0x1.2864bp-7f,
     0x1.530572p-6f, 0x1.1e4326p-32f, 0x1.2bd0fep-50f, 0x1.2ab5d2p-116f,
     0x1.420878p-29f, 0x1.18d506p-68f, 0.0f, 0.0f, 0x1.5c6728p-19f, 0.0f,
     0x1.fae64ap-1f, 0x1.b14422p-23f, 0x1.ce3c2ep-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.818352p-110f, 0x1.20a3a8p-50f, 0.0f, 0x1.fa696p-109f, 0.0f, 0.0f,
     0x1.0d2f86p-100f, 0.0f, 0x1.956128p-100f, 0x1.a2450cp-85f, 0.0f, 0.0f,
     0x1.7aef68p-84f, 0x1.a123b8p-117f, 0.0f, 0x1.f9285ap-126f, 0x1.d38d9ap-34f, 0.0f,
     0.0f, 0x1.d5b92cp-58f, 0x1.953bfap-62f, 0.0f, 0.0f, 0.0f, 0x1.0b65f4p-85f,
     0x1.cdde22p-55f, 0.0f, 0.0f, 0.0f, 0x1.b5f59ap-17f, 0x1.f02408p-30f,
     0x1.b164e6p-20f, 0.0f, 0.0f, 0.0f, 0x1.ed50ecp-36f, 0x1.b2e7dp-28f,
     0x1.0ba7e2p-26f, 0.0f, 0x1.411432p-40f, 0.0f, 0x1.75f18ep-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e8c32p-119f,
     0x1.e2972cp-91f, 0.0f, 0x1.44045cp-87f, 0x1.7d628ap-93f, 0x1.e164eap-55f, 0.0f,
     0x1.956bcp-91f, 0x1.ffa314p-20f, 0.0f, 0x1.bb6882p-13f, 0x1.68cae2p-7f, 0.0f,
     0x1.ce407ap-94f, 0.0f, 0x1.4c60aep-95f, 0x1.539a1ap-16f, 0x1.a4f7e2p-5f, 0.0f,
     0.0f, 0.0f, 0x1.465384p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4bfa14p-60f, 0.0f,
     0.0f, 0x1.db4072p-32f, 0.0f, 0.0f, 0x1.57452ep-96f, 0.0f, 0x1.66eef6p-60f, 0.0f,
     0.0f, 0.0f, 0x1.89b74cp-77f, 0x1.2ef5bep-47f, 0x1.6dc8e6p-29f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6b2f1p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65dba2p-65f,
     0x1.efde16p-125f, 0x1.ffbdccp-40f, 0.0f, 0x1.f4f772p-28f, 0.0f, 0x1.192f88p-126f,
     0.0f, 0x1.133b54p-122f, 0.0f, 0x1.c28356p-22f, 0x1.196078p-52f, 0x1.ffa00ap-73f,
     0.0f, 0x1.8a548ep-38f, 0x1.ca871ap-70f, 0x1.e1f4a4p-44f, 0.0f, 0.0f, 0.0f,
     0x1.ce1e1ap-41f, 0.0f, 0x1.77cd6p-3f, 0.0f, 0x1.bedc4ep-104f, 0x1.841efcp-35f,
     0x1.87eafcp-82f, 0.0f, 0x1.bdc002p-21f, 0x1.4b04e8p-68f, 0x1.c21522p-76f, 0.0f,
     0x1.d3b892p-8f, 0x1.0891c2p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e0ace4p-63f,
     0x1.3c2ef2p-32f, 0x1.6694f4p-4f, 0x1.95783ap-31f, 0x1.d2b3f6p-108f,
     0x1.5014e2p-8f, 0x1.a40c6cp-87f, 0.0f, 0.0f, 0x1.d01ceep-2f, 0.0f, 0.0f,
     0x1.1c5a5p-27f, 0.0f, 0x1.7fbcdp-40f, 0x1.db0014p-98f, 0.0f, 0.0f, 0.0f,
     0x1.bd0f92p-85f, 0x1.494a38p-62f, 0x1.c930ccp-114f, 0.0f, 0x1.de9e9p-63f,
     0x1.1b2fb8p-64f, 0x1.09154ep-16f, 0.0f, 0x1.bd02bp-98f, 0x1.9d6522p-43f, 0.0f,
     0.0f, 0.0f, 0x1.f2011p-97f, 0.0f, 0.0f, 0x1.1306cp-92f, 0x1.52761ep-75f,
     0x1.f6931ap-92f, 0x1.35e618p-92f, 0x1.762b9ep-63f, 0x1.2cb4c6p-50f,
     0x1.45102ap-19f, 0x1.4a4684p-17f, 0x1.e1a27ep-65f, 0.0f, 0.0f, 0x1.f41a9cp-25f,
     0.0f, 0x1.c59edcp-119f, 0.0f, 0x1.82f098p-50f, 0.0f, 0x1.6665f6p-48f,
     0x1.45b39cp-28f, 0x1.7bd77p-103f, 0.0f, 0x1.d2298cp-60f, 0.0f, 0x1.8bb9c8p-31f,
     0.0f, 0x1.a92b84p-97f, 0.0f, 0.0f, 0.0f, 0x1.ea804ep-116f, 0x1.aa568cp-101f,
     0x1.1b690ap-8f, 0.0f, 0x1.2604b4p-120f, 0.0f, 0.0f, 0.0f, 0x1.765ddcp-86f,
     0x1.244f9ap-47f, 0.0f, 0.0f, 0.0f, 0x1.83b56p-26f, 0.0f, 0.0f, 0.0f,
     0x1.462186p-35f, 0x1.98e328p-75f, 0.0f, 0x1.5bf9fcp-70f, 0.0f, 0x1.56115cp-65f,
     0x1.b9ff5ep-14f, 0x1.0edc56p-94f, 0.0f, 0.0f, 0x1.d10dcap-115f, 0x1.fe7808p-89f,
     0.0f, 0x1.3680bap-20f, 0x1.80a61ep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97f25p-112f, 0x1.3e81fap-38f, 0.0f, 0.0f, 0x1.4a2b7cp-68f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.023f74p-10f, 0.0f, 0x1.139bccp-21f, 0x1.5b392ap-33f, 0.0f, 0.0f,
     0.0f, 0x1.ca827ep-110f, 0x1.bf0a1ep-23f, 0.0f, 0x1.18d852p-56f, 0x1.f44b6ep-124f,
     0x1.e8f26ep-113f, 0.0f, 0x1.96f0a8p-20f, 0x1.24cf36p-1f, 0.0f, 0x1.c74614p-42f,
     0x1.a385cep-110f, 0x1.801bbap-62f, 0x1.e45d18p-97f, 0x1.03d664p-42f,
     0x1.f83e18p-16f, 0x1.e517f8p-72f, 0x1.cda722p-28f, 0.0f, 0.0f, 0.0f,
     0x1.aae10ap-119f, 0.0f, 0x1.31a574p-38f, 0x1.ceea18p-54f, 0x1.004552p-83f, 0.0f,
     0.0f, 0x1.b4e45cp-105f, 0.0f, 0x1.ce7faap-105f, 0.0f, 0x1.ea6114p-49f,
     0x1.c7c8acp-6f, 0x1.932656p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b3fedp-53f,
     0x1.10cedcp-8f, 0.0f, 0.0f, 0.0f, 0x1.4195eap-5f, 0x1.f4e3cap-76f, 0.0f, 0.0f,
     0.0f, 0x1.f31068p-54f, 0.0f, 0.0f, 0x1.4c14ap-31f, 0.0f, 0.0f, 0x1.f515c4p-86f,
     0x1.a0037cp-74f, 0.0f, 0x1.583eb6p-9f, 0.0f, 0.0f, 0.0f, 0x1.d23f4p-11f, 0.0f,
     0x1.ca24e8p-109f, 0x1.85d844p-80f, 0.0f, 0x1.2e23d6p-95f, 0x1.4d55f2p-4f, 0.0f,
     0.0f, 0x1.a47b1p-97f, 0x1.30cdbp-56f, 0x1.06dde8p-52f, 0x1.42bae6p-9f, 0.0f,
     0.0f, 0x1.cf7dc2p-9f, 0x1.9642ccp-126f, 0.0f, 0.0f, 0.0f, 0x1.9583fcp-14f, 0.0f,
     0x1.092f16p-70f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.add2e8p-89f, 0x1.50964ep-40f, 0.0f, 0x1.088b56p-94f, 0.0f,
     0x1.b17c3p-105f, 0.0f, 0.0f, 0.0f, 0x1.1524bcp-38f, 0.0f, 0.0f, 0.0f,
     0x1.66de5cp-102f, 0.0f, 0.0f, 0.0f, 0x1.8f1b6p-58f, 0x1.883b86p-94f, 0.0f, 0.0f,
     0.0f, 0x1.80f456p-23f, 0x1.c02ffep-85f, 0.0f, 0x1.8a2cd2p-96f, 0.0f,
     0x1.40452ap-77f, 0.0f, 0x1.4118e2p-36f, 0.0f, 0x1.5a8bdp-82f, 0x1.53c798p-65f,
     0x1.f3e154p-39f, 0.0f, 0x1.7aa272p-103f, 0x1.d79d92p-63f, 0.0f, 0.0f, 0.0f,
     0x1.307f86p-1f, 0.0f, 0x1.f7670ep-115f, 0.0f, 0x1.9f82dp-126f, 0.0f, 0.0f,
     0x1.7b998ep-65f, 0.0f, 0x1.4da1bcp-52f, 0x1.d29e48p-62f, 0x1.7d5888p-46f,
     0x1.52233ap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.016cb6p-12f, 0x1.7a1fd4p-51f,
     0.0f, 0x1.5b955p-107f, 0x1.b5f32cp-53f, 0.0f, 0x1.8bc1cp-58f, 0.0f, 0.0f,
     0x1.842c2ep-16f, 0x1.f3b07ep-23f, 0.0f, 0x1.7cd47p-86f, 0.0f, 0x1.449826p-89f,
     0.0f, 0.0f, 0x1.d8127ep-41f, 0.0f, 0.0f, 0.0f, 0x1.0985ccp-116f,
     0x1.a19734p-122f, 0x1.04c29ap-108f, 0x1.f51e0cp-16f, 0x1.1a7a6p-88f,
     0x1.9be704p-118f, 0x1.1b3048p-15f, 0x1.a799b6p-14f, 0x1.544f0ep-126f, 0.0f,
     0x1.c4683p-50f, 0.0f, 0.0f, 0x1.028e06p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b07bbap-113f, 0x1.54e3acp-81f, 0x1.44deaap-43f, 0.0f, 0x1.44438cp-34f,
     0x1.0a8d74p-126f, 0x1.e8fbbep-78f, 0.0f, 0.0f, 0.0f, 0x1.7bd7d2p-101f,
     0x1.e7109ap-71f, 0x1.f01daep-21f, 0x1.88d7ap-94f, 0x1.d4082p-91f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.669d84p-35f, 0x1.799f44p-20f, 0x1.5295ap-26f, 0.0f, 0.0f,
     0x1.65d296p-84f, 0.0f, 0x1.ae2cc8p-9f, 0.0f, 0x1.5c3acep-50f, 0x1.db7c1ep-100f,
     0.0f, 0x1.d26ab2p-2f, 0.0f, 0.0f, 0.0f, 0x1.77f5cp-92f, 0x1.d33014p-53f, 0.0f,
     0.0f, 0x1.41bdcap-90f, 0.0f, 0x1.ff62f8p-23f, 0x1.f437fap-63f, 0.0f,
     0x1.ee7b7ap-104f, 0x1.e0ffbp-21f, 0.0f, 0x1.7e5c3ap-51f, 0x1.872318p-114f,
     0x1.ce2bdcp-77f, 0.0f, 0.0f, 0x1.9119aep-43f, 0.0f, 0x1.9e03eap-78f,
     0x1.458aa6p-13f, 0x1.ee55eep-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d8898p-126f,
     0x1.5b130cp-83f, 0x1.5cbceap-110f, 0.0f, 0x1.02ee1ep-84f, 0.0f, 0.0f, 0.0f,
     0x1.a82e0cp-80f, 0x1.15c1cap-27f, 0.0f, 0x1.4ab0acp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d2d96p-22f, 0x1.5e765p-109f, 0.0f, 0.0f, 0.0f, 0x1.ac20d4p-22f,
     0x1.6dcfc6p-105f, 0.0f, 0.0f, 0.0f, 0x1.fff0cep-34f, 0.0f, 0x1.b3315cp-30f, 0.0f,
     0.0f, 0x1.9bb6eep-115f, 0x1.4f6e82p-26f, 0x1.a61d5ap-59f, 0.0f, 0x1.03fa0ep-118f,
     0x1.fff9a2p-116f, 0x1.b586p-41f, 0x1.5fab88p-87f, 0x1.0eb30cp-81f, 0.0f, 0.0f,
     0x1.f45ed2p-2f, 0x1.932234p-30f, 0.0f, 0x1.5a558ap-109f, 0x1.03bc76p-83f,
     0x1.749358p-27f, 0.0f, 0x1.89da3p-124f, 0x1.74903ap-3f, 0x1.15cbdep-44f, 0.0f,
     0.0f, 0x1.6293p-59f, 0x1.cc465p-111f, 0.0f, 0.0f, 0.0f, 0x1.e46192p-69f,
     0x1.bdfa96p-19f, 0x1.7c8b4ep-86f, 0.0f, 0x1.d8f3dp-101f, 0x1.133908p-55f,
     0x1.da1f9ap-126f, 0x1.8e7434p-85f, 0.0f, 0x1.6e9cc6p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0cf2dp-102f, 0x1.07b678p-67f, 0.0f, 0x1.52ae14p-85f, 0.0f, 0.0f,
     0x1.de971ap-99f, 0x1.f51614p-81f, 0.0f, 0.0f, 0.0f, 0x1.15edfp-112f,
     0x1.99ad56p-88f, 0.0f, 0x1.523356p-101f, 0x1.87bdc8p-77f, 0.0f, 0.0f, 0.0f,
     0x1.8f776ap-54f, 0x1.a51706p-21f, 0x1.7a7dd4p-49f, 0.0f, 0x1.f4931ep-119f, 0.0f,
     0x1.8eda9ap-40f, 0.0f, 0x1.7dd21cp-119f, 0x1.3d5c7p-112f, 0x1.bde64ap-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36cd5ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b653d6p-59f, 0.0f, 0.0f, 0x1.081e08p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0e41f4p-90f, 0x1.9c79a8p-16f, 0x1.09cb58p-29f, 0.0f, 0x1.e9c28p-38f, 0.0f,
     0.0f, 0.0f, 0x1.277becp-108f, 0x1.d6d59ap-95f, 0.0f, 0x1.3b9a9ap-60f,
     0x1.6b8774p-87f, 0.0f, 0x1.51b84ep-98f, 0x1.21d51ap-102f, 0x1.e3d18cp-28f, 0.0f,
     0x1.1c2b1ap-19f, 0.0f, 0.0f, 0x1.faeb4p-13f, 0x1.85bd2ep-65f, 0.0f, 0.0f, 0.0f,
     0x1.1db0aep-42f, 0.0f, 0x1.76c154p-11f, 0.0f, 0x1.84420ep-7f, 0x1.0d6136p-125f,
     0x1.ae1abp-97f, 0x1.77e298p-119f, 0x1.e638f6p-15f, 0x1.060a7ap-54f,
     0x1.d8c244p-19f, 0.0f, 0.0f, 0x1.5981ecp-112f, 0x1.176a3p-101f, 0.0f,
     0x1.d4047cp-99f, 0.0f, 0x1.e661ecp-124f, 0.0f, 0x1.1d9b8ep-115f, 0x1.c30c42p-95f,
     0.0f, 0.0f, 0x1.2b7fd6p-71f, 0x1.0a0ceep-109f, 0.0f, 0x1.b189dap-88f,
     0x1.81782p-7f, 0x1.3b8b3ep-30f, 0.0f, 0x1.ad5a34p-120f, 0x1.caae0ep-117f,
     0x1.0d148cp-117f, 0x1.02fa1ap-28f, 0x1.6704c6p-1f, 0x1.425b26p-125f,
     0x1.ae5d1ap-36f, 0x1.b767bap-18f, 0x1.ec5fb8p-104f, 0x1.eeef44p-91f, 0.0f,
     0x1.fe68c8p-23f, 0x1.6cbf9ap-19f, 0.0f, 0.0f, 0x1.452edp-64f, 0x1.045c22p-62f,
     0x1.2fd47ep-73f, 0x1.9bdd9ep-22f, 0x1.fe1f24p-125f, 0.0f, 0x1.6cbf3p-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85af02p-79f, 0.0f, 0.0f, 0x1.9455cap-3f,
     0x1.b1c61p-89f, 0x1.0e0ef8p-103f, 0x1.82771cp-120f, 0.0f, 0.0f, 0x1.99e85ap-9f,
     0x1.7b4f22p-7f, 0x1.7a2fb6p-122f, 0x1.628bf2p-24f, 0.0f, 0.0f, 0.0f,
     0x1.fcbda4p-66f, 0.0f, 0x1.39f542p-49f, 0x1.5d7dd6p-45f, 0.0f, 0.0f, 0.0f,
     0x1.b56638p-78f, 0x1.a10764p-8f, 0.0f, 0x1.73c6cep-36f, 0x1.8c6fe6p-91f, 0.0f,
     0x1.0b27fep-89f, 0x1.ea4026p-92f, 0x1.1e10bep-11f, 0.0f, 0x1.e8a3bap-97f,
     0x1.ce0e52p-86f, 0.0f, 0.0f, 0x1.9d1022p-121f, 0.0f, 0.0f, 0x1.648834p-113f,
     0.0f, 0x1.c5a134p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5fc96p-69f, 0.0f,
     0x1.7885ccp-67f, 0.0f, 0x1.c098a6p-74f, 0x1.a2409ap-25f, 0x1.597f0ep-26f,
     0x1.92d824p-37f, 0.0f, 0x1.d9ed1cp-68f, 0.0f, 0x1.fa197cp-60f, 0x1.d0c29p-49f,
     0x1.4250bcp-120f, 0.0f, 0.0f, 0.0f, 0x1.e63cf8p-29f, 0.0f, 0.0f, 0x1.252806p-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce2b94p-8f, 0.0f, 0x1.186518p-50f, 0.0f,
     0x1.5d894ap-86f, 0x1.f0e8b4p-4f, 0x1.186c5cp-89f, 0.0f, 0x1.220ffp-16f,
     0x1.b65146p-40f, 0x1.6a9328p-2f, 0.0f, 0x1.60c1b2p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3315ep-47f, 0.0f, 0.0f, 0x1.06dd54p-109f, 0x1.3534dp-109f, 0.0f,
     0x1.59b4d6p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb8fcap-119f, 0x1.67ddccp-92f,
     0.0f, 0x1.7a24e2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d87998p-47f, 0x1.a6a36ap-76f,
     0.0f, 0.0f, 0.0f, 0x1.a67b9p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb9712p-7f,
     0x1.507b6ap-51f, 0x1.e2b956p-113f, 0x1.1ae37ap-74f, 0x1.e160a2p-70f, 0.0f,
     0x1.b4b004p-117f, 0x1.00efd2p-111f, 0x1.0bd6f6p-111f, 0.0f, 0x1.256a2cp-82f,
     0x1.6e5814p-14f, 0.0f, 0x1.1c95eap-46f, 0.0f, 0.0f, 0x1.8b6adcp-18f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ef9fap-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29168ep-7f, 0.0f,
     0.0f, 0x1.7d4aep-91f, 0x1.b04bep-60f, 0x1.f7299cp-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ebb3ap-124f, 0x1.ecd5acp-4f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.9e4b98p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.add468p-13f,
     0x1.adddaep-1f, 0x1.2a0b12p-70f, 0.0f, 0x1.5448e6p-91f, 0.0f, 0x1.1ea33ap-34f,
     0.0f, 0x1.f9b114p-1f, 0x1.0ec012p-26f, 0x1.cf5658p-17f, 0x1.0ca1aap-124f,
     0x1.7223fp-125f, 0.0f, 0.0f, 0x1.499b98p-91f, 0.0f, 0x1.a6e184p-38f,
     0x1.531c56p-40f, 0x1.d704cp-68f, 0.0f, 0x1.fdafecp-49f, 0x1.952ab6p-47f, 0.0f,
     0.0f, 0x1.7d07b8p-19f, 0.0f, 0x1.275ee4p-44f, 0.0f, 0x1.dce678p-4f,
     0x1.38ff04p-19f, 0.0f, 0.0f, 0x1.1cc26p-97f, 0.0f, 0.0f, 0.0f, 0x1.34c20ap-34f,
     0x1.0e7794p-4f, 0x1.e9df3p-66f, 0x1.02aaaep-55f, 0x1.c454d2p-47f, 0.0f, 0.0f,
     0.0f, 0x1.8fee4ap-106f, 0.0f, 0x1.74c37ep-28f, 0x1.e234dap-83f, 0x1.578e58p-111f,
     0.0f, 0.0f, 0.0f, 0x1.91b9dcp-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb3176p-4f, 0.0f, 0x1.87679cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e8608cp-101f, 0.0f, 0.0f, 0.0f, 0x1.1eb52p-18f, 0.0f, 0.0f, 0x1.21e658p-122f,
     0x1.9c1182p-13f, 0.0f, 0.0f, 0x1.29631p-99f, 0x1.04b8cep-5f, 0.0f, 0x1.06aafp-2f,
     0x1.e7c2b2p-42f, 0x1.0f8fa2p-7f, 0.0f, 0.0f, 0x1.f6046ep-44f, 0x1.a172ecp-44f,
     0x1.74e9fep-113f, 0.0f, 0x1.e563a4p-115f, 0x1.3a4d8p-46f, 0.0f, 0x1.b02e22p-104f,
     0x1.b86fbap-90f, 0.0f, 0x1.83c348p-27f, 0.0f, 0.0f, 0x1.2404c4p-6f,
     0x1.98e136p-43f, 0.0f, 0.0f, 0.0f, 0x1.49c464p-123f, 0x1.a80f58p-9f,
     0x1.739beap-103f, 0x1.0e2242p-26f, 0x1.f8501ap-26f, 0x1.0cabaep-30f, 0.0f, 0.0f,
     0x1.4b3604p-125f, 0x1.bf5e88p-116f, 0x1.7b2eep-59f, 0.0f, 0x1.e5e8d2p-3f, 0.0f,
     0.0f, 0x1.48394ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a24bcp-19f, 0x1.beab42p-16f,
     0.0f, 0.0f, 0x1.666bb8p-27f, 0x1.9153d6p-12f, 0x1.c49074p-122f, 0.0f, 0.0f, 0.0f,
     0x1.ff69acp-25f, 0x1.12792ap-59f, 0x1.8ec6eap-18f, 0x1.f66a54p-24f, 0.0f, 0.0f,
     0.0f, 0x1.6af84ap-70f, 0x1.8cee82p-119f, 0x1.b84bap-68f, 0.0f, 0x1.90b37cp-50f,
     0.0f, 0x1.ec5f6ap-71f, 0x1.23bca2p-88f, 0x1.70a19cp-29f, 0.0f, 0x1.66c73p-76f,
     0x1.d78f8cp-94f, 0.0f, 0.0f, 0x1.a4baep-54f, 0x1.7738a6p-56f, 0x1.d5f15ap-111f,
     0.0f, 0.0f, 0x1.48e88ap-117f, 0.0f, 0x1.1e396ep-85f, 0x1.7e06a2p-40f,
     0x1.e173dep-123f, 0.0f, 0x1.7a37a4p-90f, 0.0f, 0x1.709d3ap-45f, 0x1.b5abfcp-120f,
     0.0f, 0x1.5aa89p-111f, 0.0f, 0.0f, 0x1.d919e4p-52f, 0.0f, 0.0f, 0.0f,
     0x1.a1065ap-29f, 0.0f, 0.0f, 0.0f, 0x1.c87b9ep-112f, 0.0f, 0x1.1113fap-102f,
     0x1.1f55eap-8f, 0x1.685fcp-120f, 0x1.c76b9ap-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b072ap-39f, 0.0f, 0x1.573e88p-81f, 0x1.edcdfcp-22f, 0.0f, 0x1.3f7aep-93f,
     0.0f, 0x1.fbc8cap-7f, 0.0f, 0.0f, 0x1.e7df08p-25f, 0x1.ec9b82p-6f, 0.0f, 0.0f,
     0x1.273dd2p-2f, 0x1.65f56cp-20f, 0.0f, 0x1.e8a944p-117f, 0x1.0edb28p-122f,
     0x1.e754d8p-111f, 0x1.35e48p-126f, 0.0f, 0.0f, 0.0f, 0x1.a34422p-91f,
     0x1.70b352p-104f, 0x1.0f1f2ep-80f, 0.0f, 0x1.3a0108p-2f, 0.0f, 0x1.476d74p-51f,
     0.0f, 0.0f, 0x1.8ecb98p-63f, 0x1.db7808p-99f, 0.0f, 0x1.65f7b4p-41f,
     0x1.5c9f7ap-75f, 0x1.690478p-95f, 0x1.e62596p-118f, 0x1.564b58p-124f,
     0x1.1d7a94p-65f, 0x1.125732p-36f, 0.0f, 0.0f, 0.0f, 0x1.73d2c4p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ed616cp-96f, 0.0f, 0.0f, 0x1.3a6dd8p-50f, 0x1.1ee18ep-60f,
     0.0f, 0x1.2d864p-97f, 0.0f, 0x1.779dacp-116f, 0.0f, 0.0f, 0x1.d78a8ap-52f,
     0x1.c7170ap-38f, 0.0f, 0.0f, 0x1.22215p-8f, 0.0f, 0.0f, 0.0f, 0x1.cf7f72p-11f,
     0x1.52f94ep-3f, 0x1.d45fdap-61f, 0.0f, 0x1.42d89cp-7f, 0x1.55061ep-109f, 0.0f,
     0x1.d2226cp-78f, 0x1.44db56p-19f, 0x1.03f41cp-46f, 0.0f, 0x1.9762aep-72f,
     0x1.dc7e5cp-13f, 0x1.aa9fa4p-82f, 0.0f, 0x1.1181aep-83f, 0x1.a60372p-93f, 0.0f,
     0.0f, 0x1.fa69bap-115f, 0.0f, 0.0f, 0x1.0bf568p-78f, 0x1.67289ep-103f, 0.0f,
     0.0f, 0x1.8916b6p-17f, 0x1.d036e2p-1f, 0x1.a5272ap-3f, 0.0f, 0x1.f639e8p-38f,
     0x1p0f, 0.0f, 0x1.34401p-26f, 0.0f, 0.0f, 0x1.43fbe6p-125f, 0.0f, 0.0f,
     0x1.e81d9p-91f, 0x1.a01a6ep-69f, 0.0f, 0x1.967b26p-13f, 0x1.2207eap-29f, 0.0f,
     0x1.20d7dp-26f, 0x1.6fda6ep-115f, 0.0f, 0x1.79e5eap-96f, 0.0f, 0.0f,
     0x1.2a1658p-3f, 0.0f, 0x1.10a998p-77f, 0.0f, 0.0f, 0x1.9e6576p-7f,
     0x1.9a801ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb30a6p-117f, 0.0f,
     0x1.aa0002p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.79294p-6f, 0x1.a37472p-7f, 0.0f,
     0x1.0954fp-24f, 0.0f, 0.0f, 0.0f, 0x1.b4f688p-69f, 0.0f, 0x1.03984cp-54f, 0.0f,
     0.0f, 0x1.0af8e8p-92f, 0.0f, 0.0f, 0x1.81d38p-58f, 0.0f, 0x1.e56588p-64f, 0.0f,
     0x1.7b6bf4p-124f, 0.0f, 0x1.54d63p-13f, 0x1.4e2e1ep-20f, 0.0f, 0x1.37595cp-21f,
     0x1.58addp-82f, 0x1.19d64cp-7f, 0x1.ce109p-55f, 0.0f, 0x1.1b74e6p-86f,
     0x1.b37b58p-112f, 0.0f, 0x1.50f1dcp-64f, 0x1.03e618p-67f, 0x1.178a96p-31f, 0.0f,
     0x1.80bccap-47f, 0.0f, 0.0f, 0x1.983758p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.28ee9ap-93f, 0.0f, 0.0f, 0x1.8e7854p-97f, 0.0f,
     0x1.6ebfb2p-49f, 0.0f, 0x1.5dfa92p-116f, 0.0f, 0x1.dcabdap-100f, 0x1.7e3fb2p-60f,
     0x1.b14b4ap-55f, 0.0f, 0.0f, 0x1.6d233cp-70f, 0x1.af5a5p-63f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6187d8p-29f, 0x1.e6701ep-77f,
     0x1.85a9e8p-94f, 0.0f, 0x1.65fc7cp-43f, 0x1.91935ep-121f, 0.0f, 0x1.f6449ep-35f,
     0x1.5e01e2p-125f, 0.0f, 0.0f, 0x1.ab4962p-109f, 0.0f, 0.0f, 0x1.69317ep-82f,
     0.0f, 0.0f, 0x1.a4917cp-31f, 0x1.a41afep-75f, 0.0f, 0x1.4c71ccp-119f, 0.0f, 0.0f,
     0x1.4c91e4p-39f, 0x1.314018p-60f, 0.0f, 0.0f, 0.0f, 0x1.3b8114p-110f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.83db76p-112f, 0.0f, 0.0f, 0x1.5375bcp-50f, 0.0f,
     0x1.530f8ap-121f, 0x1.b252fap-20f, 0.0f, 0x1.489c6cp-84f, 0.0f, 0x1.7b1f54p-108f,
     0x1.72096p-53f, 0.0f, 0x1.ad3882p-64f, 0x1.136ce4p-51f
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
            tmp2 = Sleef_finz_fminf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_fminf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fminf1_purecfma bench acc %a\n", global_bench_acc);
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
