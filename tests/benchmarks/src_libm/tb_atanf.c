/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_atanf.c --function atanf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.3bffbep-31f, 0.0f, 0x1.23147p-39f, 0x1.4c152ep-97f, 0.0f, 0.0f,
     0x1.bea628p-4f, 0x1.c56f2ep-97f, 0.0f, 0.0f, 0x1.7704cep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.453d8cp-29f, 0.0f, 0x1.c82644p-33f, 0x1.bff7dep-69f, 0.0f,
     0x1.39beecp-93f, 0.0f, 0x1.8f367ep-11f, 0.0f, 0x1.6dc8d8p-88f, 0.0f,
     0x1.451628p-93f, 0x1.b8c56ep-58f, 0x1.65be92p-8f, 0x1.95161ap-85f,
     0x1.313cfap-53f, 0x1.9b85b8p-14f, 0x1.73e258p-43f, 0.0f, 0.0f, 0x1.ef67acp-35f,
     0x1.aa2726p-123f, 0x1.502b4p-63f, 0.0f, 0x1.bf624p-98f, 0x1.3e0e6ap-70f, 0.0f,
     0x1.a753fp-3f, 0x1.fe727p-84f, 0x1.202658p-8f, 0x1.5823e4p-89f, 0x1.e03fd8p-61f,
     0x1.4a030cp-55f, 0x1.4f1958p-80f, 0x1.694cb8p-92f, 0x1.4edf58p-52f, 0.0f,
     0x1.de915ap-7f, 0x1.b808d2p-11f, 0x1.b3a002p-122f, 0.0f, 0x1.2315fap-18f, 0.0f,
     0.0f, 0.0f, 0x1.42d764p-90f, 0.0f, 0.0f, 0x1.e48252p-117f, 0x1.b129bep-22f,
     0x1.552938p-83f, 0.0f, 0.0f, 0x1.3165c2p-81f, 0.0f, 0.0f, 0x1.81a8a4p-110f, 0.0f,
     0.0f, 0x1.9d5fdp-58f, 0.0f, 0.0f, 0x1.cd8bcp-26f, 0.0f, 0.0f, 0x1.12e9c2p-51f,
     0.0f, 0x1.1019p-2f, 0x1.4c3f84p-80f, 0.0f, 0.0f, 0x1.0ee878p-20f,
     0x1.f151b6p-114f, 0.0f, 0.0f, 0x1.8744eep-24f, 0x1.94f8b6p-16f, 0.0f, 0.0f,
     0x1.03cdd6p-46f, 0x1.5d8604p-57f, 0.0f, 0.0f, 0.0f, 0x1.4056d6p-26f,
     0x1.8d77ep-77f, 0.0f, 0.0f, 0x1.cec85p-124f, 0x1.223cfp-21f, 0.0f,
     0x1.505a26p-69f, 0.0f, 0.0f, 0.0f, 0x1.868142p-34f, 0.0f, 0x1.760024p-73f,
     0x1.c86eaep-106f, 0x1.f9a7fp-51f, 0.0f, 0.0f, 0x1.27e304p-18f, 0.0f,
     0x1.3f5d1p-55f, 0x1.7a4a26p-85f, 0x1.ce56acp-71f, 0x1.336648p-14f, 0.0f,
     0x1.583e12p-44f, 0.0f, 0x1.c6a8a8p-53f, 0x1.3c81f8p-64f, 0.0f, 0x1.38f68ap-1f,
     0x1.334298p-13f, 0x1.1d11b8p-11f, 0x1.da0198p-106f, 0.0f, 0.0f, 0.0f,
     0x1.f40f06p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6201c2p-113f, 0.0f, 0.0f,
     0x1.03abbp-125f, 0x1.45a7fap-11f, 0x1.d9bdacp-35f, 0.0f, 0x1.979a6p-70f, 0.0f,
     0x1p0f, 0.0f, 0x1.3e798p-35f, 0x1.f0af4ep-97f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2782dp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.09d17cp-19f, 0x1.32a51p-59f, 0x1.db257cp-110f, 0.0f, 0x1.a6eff6p-13f,
     0x1.b7945cp-40f, 0x1.73ea7ap-120f, 0.0f, 0.0f, 0x1.0544dep-105f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.113dp-14f, 0x1.4127cep-81f, 0.0f, 0.0f,
     0x1.82b4fp-14f, 0x1.d3a264p-33f, 0.0f, 0x1.4fabaep-125f, 0x1.57412ep-5f,
     0x1.89608ap-125f, 0.0f, 0.0f, 0.0f, 0x1.b207acp-80f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f46eap-20f, 0x1.294156p-65f, 0.0f, 0x1.6207p-107f, 0x1.7ff06p-49f,
     0x1.05d04cp-119f, 0x1.32395ep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c78a3p-113f,
     0.0f, 0x1.2dc98cp-35f, 0.0f, 0x1.cb4c14p-73f, 0x1.c185cp-56f, 0.0f,
     0x1.197ca4p-126f, 0x1.227da4p-94f, 0.0f, 0x1.87359ep-89f, 0x1.64f9ap-85f, 0.0f,
     0x1.4a23a2p-50f, 0.0f, 0x1.f69c98p-6f, 0x1.0a6a0cp-2f, 0.0f, 0.0f,
     0x1.2011a4p-126f, 0x1.d11a2ap-17f, 0x1.8a4134p-83f, 0x1.85fc5cp-65f, 0.0f, 0.0f,
     0.0f, 0x1.1f12c4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a25416p-57f, 0x1.0d12eep-40f,
     0x1.625b14p-4f, 0x1.19a6a8p-77f, 0x1.4f657ep-58f, 0x1.1d5c3cp-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.686152p-46f, 0x1.155c02p-67f,
     0x1.11cc78p-79f, 0.0f, 0x1.03c788p-47f, 0x1.d5be78p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.56c8a2p-43f, 0.0f, 0x1.6cf418p-22f, 0x1.c708d4p-25f, 0.0f, 0.0f, 0.0f,
     0x1.aa4d52p-44f, 0.0f, 0.0f, 0x1.668ef2p-121f, 0.0f, 0x1.aaa96cp-126f,
     0x1.ea4b84p-45f, 0x1.cefa56p-38f, 0x1.df767ap-73f, 0.0f, 0x1.3f8d9cp-31f,
     0x1.641b26p-14f, 0.0f, 0x1.1f747ep-49f, 0.0f, 0.0f, 0.0f, 0x1.ccc5ep-23f, 0.0f,
     0.0f, 0x1.feb2ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.972962p-89f, 0.0f,
     0x1.5dbba4p-26f, 0x1.d137cep-49f, 0.0f, 0x1.3cd23ep-86f, 0x1.4139f6p-91f, 0.0f,
     0x1.e80b56p-5f, 0.0f, 0x1.b7f342p-112f, 0x1.af2ae8p-38f, 0x1.e33c2ap-124f,
     0x1.228adap-18f, 0x1.8f18a8p-27f, 0.0f, 0x1.4db184p-101f, 0x1.5c545ep-23f,
     0x1.06da22p-7f, 0.0f, 0x1.420582p-5f, 0.0f, 0.0f, 0x1.39b786p-73f, 0.0f,
     0x1.b001fp-60f, 0.0f, 0x1.46ba16p-100f, 0x1.03b6fap-37f, 0.0f, 0.0f,
     0x1.4632cep-11f, 0x1.d970e8p-33f, 0.0f, 0x1.9f0c44p-12f, 0.0f, 0.0f,
     0x1.995026p-114f, 0x1.fef316p-74f, 0x1.afeabcp-47f, 0x1.4bcdd2p-95f, 0.0f,
     0x1.d7940ep-23f, 0.0f, 0x1.f515a8p-40f, 0x1.04ed38p-16f, 0.0f, 0.0f,
     0x1.6290bep-30f, 0.0f, 0.0f, 0x1.e7b3fp-39f, 0.0f, 0x1.4a4762p-94f,
     0x1.45f8bcp-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d0cadcp-88f, 0.0f, 0.0f, 0.0f,
     0x1.25b6f8p-48f, 0x1.731c22p-6f, 0x1.03067ap-51f, 0x1.449d9ep-103f, 0.0f, 0.0f,
     0x1.b3060ap-27f, 0.0f, 0x1.5d67aap-30f, 0x1.7f2672p-110f, 0.0f, 0.0f,
     0x1.ec551p-59f, 0x1.6b555cp-123f, 0x1.083164p-72f, 0.0f, 0x1.83911p-101f, 0.0f,
     0x1.9a052p-86f, 0x1.381eap-1f, 0x1.618eap-40f, 0.0f, 0.0f, 0x1.830dd8p-34f, 0.0f,
     0x1.0243cap-123f, 0.0f, 0x1.f9c856p-43f, 0.0f, 0.0f, 0.0f, 0x1.30a59ep-61f, 0.0f,
     0x1.efe412p-32f, 0x1.369716p-8f, 0.0f, 0x1.8c2526p-96f, 0x1.d9fedep-79f, 0.0f,
     0x1.664d1ap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7dd5ep-6f, 0x1.e26c2p-17f, 0x1.f580f8p-84f, 0x1.9966dp-58f, 0x1.98d926p-70f,
     0x1.21732ep-17f, 0.0f, 0.0f, 0x1.214438p-63f, 0.0f, 0.0f, 0.0f, 0x1.50e11ep-37f,
     0.0f, 0.0f, 0.0f, 0x1.1a5fcep-54f, 0.0f, 0x1.6346cap-55f, 0.0f, 0x1.afbebcp-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6af4b8p-115f, 0.0f, 0x1.5b042cp-97f,
     0x1.031b72p-82f, 0.0f, 0.0f, 0.0f, 0x1.5cfaf4p-62f, 0x1.e17972p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.096836p-49f, 0.0f, 0.0f, 0x1.3c7b2ap-89f, 0x1.a58af4p-12f,
     0x1.f15bcep-114f, 0.0f, 0x1.0a157ap-84f, 0.0f, 0.0f, 0x1.8f10b8p-76f,
     0x1.466b56p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3a1e2p-62f, 0.0f, 0x1.52e166p-88f,
     0.0f, 0.0f, 0x1.d2c31p-118f, 0x1.baae22p-25f, 0x1.ec8634p-126f, 0.0f, 0.0f,
     0x1.1b16f2p-117f, 0x1.39f444p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.058dbep-65f, 0x1.bb22a2p-86f, 0.0f, 0x1.cad23cp-112f, 0x1.f08c2p-74f, 0.0f,
     0x1.a85b1cp-42f, 0.0f, 0x1.5a3506p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9b282p-97f, 0.0f, 0.0f, 0.0f, 0x1.467abep-8f, 0x1.fe4374p-43f,
     0x1.b32382p-13f, 0.0f, 0x1.05a9b2p-71f, 0.0f, 0x1.11b5bap-76f, 0.0f, 0.0f, 0.0f,
     0x1.ade6f6p-104f, 0.0f, 0.0f, 0x1.96709cp-43f, 0.0f, 0.0f, 0x1.9b136cp-89f,
     0x1.2efb52p-120f, 0x1.d501fep-4f, 0x1.3d7756p-82f, 0x1.eafe9ap-87f, 0.0f, 0.0f,
     0x1.c6a70ap-124f, 0x1.8c8172p-83f, 0x1.3e4f3p-105f, 0.0f, 0x1.2b3ff4p-67f, 0.0f,
     0x1.a53fbap-30f, 0.0f, 0.0f, 0x1.8273bp-76f, 0x1.ee152p-111f, 0x1.d724c8p-122f,
     0.0f, 0.0f, 0.0f, 0x1.58bfd8p-23f, 0.0f, 0x1.4cf0ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.6cc02ap-119f, 0x1.5e3d56p-35f, 0x1.f2762ep-102f, 0x1.68a624p-52f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e27d72p-7f, 0x1.8de3dp-4f, 0x1.b5f1bcp-125f, 0.0f,
     0x1.9cc5c4p-29f, 0.0f, 0x1.283576p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.becfc4p-37f,
     0x1.b85ac2p-107f, 0.0f, 0x1.d87d06p-14f, 0.0f, 0x1.b662f2p-12f, 0.0f, 0.0f, 0.0f,
     0x1.feb2e2p-66f, 0x1.503812p-122f, 0x1.22f7acp-58f, 0x1.c5bf34p-50f,
     0x1.b047dp-126f, 0.0f, 0.0f, 0.0f, 0x1.beeb7p-43f, 0.0f, 0.0f, 0x1.5a8384p-72f,
     0x1.131cecp-58f, 0x1.d62bccp-59f, 0.0f, 0x1.4fdae4p-44f, 0x1.120b26p-20f,
     0x1.10cb16p-85f, 0.0f, 0x1.38255ap-2f, 0x1.5f5b1ap-25f, 0x1.3430bcp-106f,
     0x1.f610bp-111f, 0x1.d8942ap-121f, 0x1.f90474p-119f, 0x1.7894f6p-100f,
     0x1.e8833cp-16f, 0x1.9971e8p-125f, 0x1.2e7f8ep-102f, 0x1.88f0d6p-26f,
     0x1.d97b1ep-85f, 0.0f, 0x1.3c3436p-101f, 0.0f, 0.0f, 0x1.2f5b62p-100f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e95dp-99f, 0.0f, 0x1.95ce7p-2f, 0x1.867c46p-48f,
     0.0f, 0x1.887974p-29f, 0x1.986ee2p-54f, 0.0f, 0x1.68312ep-121f, 0x1.42862ep-58f,
     0.0f, 0x1.a801e8p-13f, 0.0f, 0x1.c0764cp-49f, 0.0f, 0x1.10b74cp-104f, 0.0f,
     0x1.7835f2p-19f, 0x1.943734p-56f, 0x1.a1641cp-96f, 0.0f, 0x1.8188cp-78f,
     0x1.54f4fp-11f, 0.0f, 0x1.f493e8p-75f, 0x1.6c357cp-83f, 0x1.32dadp-43f,
     0x1.bd24b6p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b34a96p-43f, 0x1.052fbap-51f,
     0x1.ac0d8cp-8f, 0.0f, 0.0f, 0x1.9c79fap-10f, 0.0f, 0.0f, 0x1.a46ff8p-94f, 0.0f,
     0x1.4d21a6p-28f, 0x1.0dd206p-50f, 0x1.9d06dep-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.721caep-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c974cp-73f, 0x1.0aac4ep-102f, 0.0f,
     0.0f, 0x1.69c05ap-54f, 0.0f, 0x1.de1932p-126f, 0x1.62ecep-5f, 0x1.a514dep-52f,
     0x1.10e234p-98f, 0x1.935d6cp-71f, 0.0f, 0.0f, 0x1.cb7026p-34f, 0.0f, 0.0f,
     0x1.4c81fp-70f, 0.0f, 0.0f, 0.0f, 0x1.37c846p-114f, 0.0f, 0.0f, 0.0f,
     0x1.67cc16p-125f, 0x1.8a03e2p-6f, 0x1.b68704p-66f, 0x1.deeb48p-78f,
     0x1.2f9fe4p-73f, 0x1.374a3ep-8f, 0x1.0f4434p-87f, 0x1.7f5adap-90f, 0.0f, 0.0f,
     0x1.d0e1b2p-8f, 0x1.15ab38p-59f, 0.0f, 0.0f, 0x1.d66158p-63f, 0.0f, 0.0f,
     0x1.728a78p-122f, 0.0f, 0x1.112f04p-60f, 0x1.f7dcaep-84f, 0x1.380124p-44f,
     0x1.987dfap-103f, 0.0f, 0.0f, 0x1.802814p-44f, 0.0f, 0x1.9027bcp-94f, 0.0f, 0.0f,
     0x1.6dfe2cp-102f, 0.0f, 0x1.d3b39ep-34f, 0.0f, 0x1.07dfc4p-92f, 0.0f,
     0x1.b92c54p-79f, 0.0f, 0x1.7fdcc8p-99f, 0.0f, 0.0f, 0x1.f1dc92p-83f,
     0x1.ff36bep-113f, 0x1.1ad2fp-121f, 0.0f, 0.0f, 0x1.dbf78cp-99f, 0x1.b2af72p-65f,
     0x1.f24678p-83f, 0x1.f071d4p-82f, 0x1.a9806p-20f, 0.0f, 0x1.04e642p-26f, 0.0f,
     0x1.2932ap-77f, 0.0f, 0x1.c736a2p-7f, 0x1.adadc8p-9f, 0.0f, 0x1.c4865ap-84f,
     0x1.5fda0ep-49f, 0.0f, 0x1.636198p-29f, 0.0f, 0.0f, 0.0f, 0x1.52469ap-111f, 0.0f,
     0x1.55b4fp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.765568p-62f, 0x1.ebb8bcp-84f,
     0x1.622a7p-4f, 0x1.5ce398p-10f, 0x1.147d68p-6f, 0.0f, 0x1.b9dea6p-11f, 0.0f,
     0x1.00c71cp-122f, 0.0f, 0x1.9dbfa6p-111f, 0x1.ab26c8p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.949f2ap-31f, 0.0f, 0x1.a5c7b4p-75f, 0.0f, 0.0f,
     0x1.ccf104p-90f, 0x1.441a0ap-11f, 0.0f, 0x1.5a72d6p-95f, 0.0f, 0.0f, 0.0f,
     0x1.d098bap-44f, 0x1.8f7422p-74f, 0x1.ad1076p-53f, 0x1.be4cd2p-77f,
     0x1.5cc5f8p-43f, 0x1.b13ceap-94f, 0x1.3bcd3cp-53f, 0x1.96fba4p-49f,
     0x1.6970ecp-64f, 0x1.78c0ecp-28f, 0.0f, 0.0f, 0x1.26b774p-112f, 0x1.4e2d8cp-72f,
     0.0f, 0x1.7cc6bcp-96f, 0x1.b4901cp-125f, 0x1.804a58p-8f, 0.0f, 0x1.fb1c72p-34f,
     0.0f, 0.0f, 0.0f, 0x1.412566p-49f, 0.0f, 0x1.be527ep-87f, 0.0f, 0.0f,
     0x1.14b74ap-76f, 0.0f, 0x1.b5d33ap-8f, 0x1.f1103ep-14f, 0.0f, 0.0f,
     0x1.9a783cp-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbfa8ap-65f, 0x1.71eb78p-9f,
     0x1.49e58cp-80f, 0.0f, 0x1.e2b158p-25f, 0x1.f972d8p-40f, 0x1.fea858p-20f, 0.0f,
     0.0f, 0x1.238392p-37f, 0.0f, 0.0f, 0x1.b8ba7cp-78f, 0.0f, 0.0f, 0.0f,
     0x1.116ec6p-23f, 0.0f, 0.0f, 0x1.41356p-84f, 0x1.e89d5p-124f, 0x1.562156p-68f,
     0.0f, 0x1.86555cp-101f, 0.0f, 0.0f, 0x1.963d1ap-77f, 0.0f, 0.0f,
     0x1.51b00cp-112f, 0.0f, 0x1.84c5f4p-38f, 0.0f, 0x1.7c621ep-73f, 0x1.8f7b7cp-121f,
     0.0f, 0x1.bf0164p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4556ep-115f, 0.0f,
     0x1.f445f2p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b31afep-66f, 0x1.609324p-69f,
     0.0f, 0x1.b918e4p-111f, 0x1.e387cap-26f, 0x1.98cce8p-55f, 0x1.44a348p-123f,
     0x1.c35854p-109f, 0x1.3205aap-48f, 0.0f, 0.0f, 0x1.313f68p-5f, 0x1.dbda2cp-20f,
     0x1.066baep-49f, 0.0f, 0x1.c7ff86p-117f, 0x1.e6bb1cp-32f, 0x1.1b6fc2p-21f,
     0x1.d30872p-81f, 0.0f, 0.0f, 0x1.192a14p-78f, 0x1.d0c632p-103f, 0.0f,
     0x1.8aaa9ap-7f, 0.0f, 0x1.0a9abp-104f, 0.0f, 0.0f, 0x1.57b6p-70f,
     0x1.e3bd5ap-76f, 0x1.e030acp-48f, 0.0f, 0.0f, 0.0f, 0x1.798d5ep-110f,
     0x1.e7124ep-56f, 0x1.0f9b88p-38f, 0x1.eb06bap-54f, 0x1.b2755ap-78f, 0.0f, 0.0f,
     0x1.edab48p-124f, 0x1.ed28f6p-112f, 0.0f, 0x1.a7cacp-117f, 0x1.0a67f6p-98f,
     0x1.76a312p-121f, 0x1.c34614p-70f, 0.0f, 0x1.8b4484p-82f, 0.0f, 0x1.f6706ep-118f,
     0.0f, 0.0f, 0x1.fdee2p-30f, 0x1.962f96p-19f, 0x1.aacfd6p-116f, 0x1.f00684p-72f,
     0x1.3f372ep-104f, 0x1.548842p-28f, 0x1.9fbe88p-123f, 0x1.1ad568p-122f,
     0x1.80df48p-10f, 0x1.7137e2p-29f, 0x1.4513bcp-113f, 0.0f, 0x1.26ac4p-74f,
     0x1.8a4884p-122f, 0x1.5598e6p-54f, 0x1.a6a4d2p-45f, 0x1.fffc42p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.683908p-85f, 0.0f, 0.0f, 0x1.a24c7ap-126f, 0.0f, 0x1.4b5702p-20f,
     0.0f, 0x1.ff3d3ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e9a8ap-9f,
     0x1.11f3d2p-47f, 0x1.652d52p-105f, 0x1.3fb60cp-3f, 0x1.cfbb42p-41f, 0.0f,
     0x1.67a5ap-74f, 0x1.a91e5ep-58f, 0.0f, 0x1.fc75b2p-66f, 0x1.822fap-83f, 0.0f,
     0x1.395c92p-53f, 0.0f, 0x1.32309ap-23f, 0x1.dac4f2p-87f
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
            tmp1 = atanf(tmp0);
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
    printf("atanf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("atanf bench acc %a\n", global_bench_acc);
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
