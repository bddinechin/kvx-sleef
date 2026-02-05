/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fmodf1_purecfma.c --function \
 *     Sleef_finz_fmodf1_purecfma --arity 2 --headers \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa944p-67f, 0.0f, 0.0f, 0x1.6365dp-91f, 0.0f,
     0.0f, 0x1.96371ep-31f, 0.0f, 0x1.edbc52p-123f, 0x1.137478p-97f, 0x1.2739fap-77f,
     0.0f, 0x1.998a4cp-83f, 0x1.c51652p-29f, 0.0f, 0.0f, 0.0f, 0x1.eae254p-106f,
     0x1.22fcc2p-6f, 0.0f, 0x1.974b4ap-67f, 0.0f, 0x1.c4ba16p-111f, 0.0f,
     0x1.a2891ap-106f, 0.0f, 0.0f, 0.0f, 0x1.03d478p-12f, 0.0f, 0.0f, 0.0f,
     0x1.46def6p-10f, 0.0f, 0x1.0d1a8ep-18f, 0.0f, 0.0f, 0.0f, 0x1.65c09ep-36f,
     0x1.725cp-69f, 0x1.118bbcp-106f, 0.0f, 0x1.8d85acp-96f, 0x1.9c0b14p-106f,
     0x1.7f7958p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c7cd6cp-24f, 0x1.411632p-6f,
     0x1.6344ccp-100f, 0.0f, 0x1.d7675ep-40f, 0.0f, 0x1.09509ap-82f, 0.0f,
     0x1.ad3952p-105f, 0x1.24b2cep-104f, 0.0f, 0.0f, 0x1.43505p-93f, 0.0f, 0.0f, 0.0f,
     0x1.4e805p-83f, 0x1.dfeb28p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.77c8e4p-68f,
     0x1.e4b0bep-110f, 0.0f, 0.0f, 0.0f, 0x1.149e9ap-10f, 0.0f, 0x1.b1887ap-50f, 0.0f,
     0x1.e9e11cp-39f, 0x1.42780cp-6f, 0.0f, 0.0f, 0.0f, 0x1.af3854p-49f,
     0x1.7f25fp-68f, 0x1.5d200ep-1f, 0x1.866ee6p-17f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f,
     0.0f, 0x1.32f196p-89f, 0x1.4dc9aep-5f, 0x1.f2fa14p-31f, 0x1.b3bbd4p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba65acp-70f, 0x1.6a09bap-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d1a5eep-80f, 0.0f, 0.0f, 0.0f,
     0x1.6d8798p-55f, 0x1.6b9d4ap-49f, 0.0f, 0x1.e25c14p-2f, 0x1.dd1496p-48f, 0.0f,
     0.0f, 0x1.f40a36p-58f, 0x1.c1114p-23f, 0.0f, 0x1.3dcebcp-78f, 0.0f,
     0x1.3515p-80f, 0x1.9e84bp-5f, 0x1.69eb1p-65f, 0.0f, 0x1.fa007ep-63f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.df17d6p-116f, 0.0f, 0.0f, 0x1.ecdecap-29f, 0x1.c947bep-22f,
     0.0f, 0x1.492fc4p-96f, 0x1.427f98p-50f, 0.0f, 0.0f, 0x1.13e7e6p-20f,
     0x1.92afap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.573408p-102f, 0.0f, 0.0f,
     0x1.449bf8p-14f, 0x1.1a8728p-124f, 0x1.53a986p-28f, 0x1.9455bap-27f,
     0x1.26a8f8p-112f, 0x1.b1029p-120f, 0x1.e3bfacp-98f, 0x1.5e1fcep-121f, 0.0f, 0.0f,
     0x1.be1e82p-13f, 0.0f, 0x1.a13108p-76f, 0x1.729edap-124f, 0.0f, 0x1.394b16p-92f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b1dabep-119f, 0.0f, 0x1.9c56acp-115f,
     0x1.f0aed2p-74f, 0x1.cd405ap-89f, 0x1.32508ap-29f, 0.0f, 0.0f, 0.0f,
     0x1.5297e8p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11adcap-3f, 0.0f, 0.0f, 0.0f,
     0x1.b71efcp-99f, 0.0f, 0.0f, 0x1.af034p-45f, 0x1.dc08b4p-55f, 0.0f,
     0x1.0e5168p-20f, 0x1.3f72b8p-106f, 0.0f, 0x1.2b40ccp-101f, 0.0f,
     0x1.77068ep-122f, 0x1.3f9868p-37f, 0x1.4ac612p-94f, 0.0f, 0.0f, 0.0f,
     0x1.129912p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96aa1ep-5f, 0.0f, 0x1.b9d468p-45f,
     0.0f, 0.0f, 0x1.4f654ap-35f, 0x1.b16c02p-123f, 0.0f, 0.0f, 0x1.ed796p-7f,
     0x1.05e20cp-84f, 0.0f, 0.0f, 0x1.b9ce2cp-6f, 0x1.16519ep-77f, 0.0f, 0.0f,
     0x1.c69b2ap-6f, 0x1.82ff88p-6f, 0.0f, 0.0f, 0.0f, 0x1.8694d4p-47f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.73b982p-83f, 0x1.c20b6ep-85f, 0.0f, 0.0f, 0x1.e5fd86p-82f,
     0x1.1f9982p-18f, 0x1.ec79dep-71f, 0x1.536a36p-12f, 0x1.d184f6p-111f,
     0x1.d28a02p-12f, 0.0f, 0x1.1553ecp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.842cc2p-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7005b6p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff8eb4p-26f, 0x1.1f50b4p-57f, 0.0f, 0.0f, 0x1.108c1ap-113f, 0x1.3f2ff6p-90f,
     0.0f, 0x1.2212c6p-56f, 0.0f, 0.0f, 0.0f, 0x1.dc36f2p-90f, 0.0f, 0.0f,
     0x1.ee1402p-10f, 0x1.fa903cp-70f, 0.0f, 0x1.4894c4p-45f, 0.0f, 0x1.c95b7cp-44f,
     0.0f, 0.0f, 0x1.e032eap-93f, 0.0f, 0x1.eb83b6p-61f, 0x1.f57ed8p-121f, 0.0f,
     0x1.575f2p-123f, 0x1.9fc788p-73f, 0x1.bbeb56p-46f, 0.0f, 0.0f, 0x1.33eaa2p-81f,
     0x1.d1f5bep-72f, 0x1.4daf84p-18f, 0x1.d8a8e4p-39f, 0.0f, 0x1.2d354ep-68f, 0.0f,
     0x1.b3f92ep-24f, 0.0f, 0.0f, 0.0f, 0x1.f2b9c4p-15f, 0x1.8c2d04p-99f,
     0x1.634fe2p-88f, 0.0f, 0.0f, 0.0f, 0x1.850774p-69f, 0x1.5b167ap-20f,
     0x1.d0525ep-87f, 0x1.2cffd6p-112f, 0.0f, 0.0f, 0x1.1b4fc8p-28f, 0x1.13f092p-53f,
     0.0f, 0x1.fa53e6p-20f, 0x1.8cfcb6p-119f, 0.0f, 0.0f, 0.0f, 0x1.6b2154p-43f, 0.0f,
     0.0f, 0.0f, 0x1.ee5436p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f31554p-76f,
     0x1.87e76cp-118f, 0x1.cbd438p-119f, 0.0f, 0x1.2cdb1p-119f, 0x1.86b43ap-47f,
     0x1.12f3cp-67f, 0.0f, 0.0f, 0.0f, 0x1.698128p-13f, 0x1.75c262p-27f,
     0x1.cfe53ap-2f, 0x1.bac5e6p-33f, 0x1.277b2ep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e7c34cp-6f, 0x1.a74212p-13f, 0x1.460ffcp-104f, 0.0f, 0.0f, 0.0f,
     0x1.8ba642p-94f, 0x1.7c4d52p-108f, 0.0f, 0x1.b904dep-48f, 0.0f, 0.0f, 0.0f,
     0x1.72c12ap-11f, 0x1.bec1aap-7f, 0.0f, 0x1.03a704p-115f, 0.0f, 0x1.4144f8p-14f,
     0.0f, 0x1.8d304ap-85f, 0x1.3fedap-50f, 0x1.0e25dap-12f, 0x1.2aa94ep-19f, 0.0f,
     0x1.83f6ap-51f, 0.0f, 0x1.05bd9p-77f, 0.0f, 0x1.213628p-40f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.27f7c6p-62f, 0x1.f97a4p-105f, 0x1.25fc6cp-47f, 0x1.246dfp-50f, 0.0f,
     0.0f, 0.0f, 0x1.87cf8ap-82f, 0.0f, 0.0f, 0x1.e7d5c4p-88f, 0.0f, 0.0f,
     0x1.86aaeap-11f, 0.0f, 0x1p0f, 0.0f, 0x1.86bcbp-124f, 0.0f, 0x1.9319c2p-114f,
     0.0f, 0.0f, 0.0f, 0x1.7a2e14p-62f, 0.0f, 0x1.dace3cp-34f, 0.0f, 0.0f, 0.0f,
     0x1.8a238cp-35f, 0.0f, 0x1.683b78p-97f, 0x1.248ebcp-30f, 0.0f, 0.0f,
     0x1.979a1p-56f, 0.0f, 0.0f, 0x1.2607bap-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a0c912p-61f, 0x1.f4e3dap-48f, 0x1.703466p-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.840c72p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.827c56p-84f, 0.0f,
     0.0f, 0x1.645fbep-89f, 0x1.d24d3cp-63f, 0x1.cdbb56p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e4ffcp-42f, 0x1.5d254cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce28f2p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c61bb8p-105f, 0x1.6cedcp-27f, 0.0f, 0x1.be7688p-109f,
     0x1.080c4p-102f, 0.0f, 0.0f, 0x1.219a5ap-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.61a4c8p-67f, 0x1.cc1d9ep-92f, 0x1.9b3ccp-80f, 0x1.d3b456p-69f,
     0x1.2c8f48p-22f, 0x1.21804ap-33f, 0x1.968238p-15f, 0x1.5fb414p-111f,
     0x1.c61e3cp-114f, 0x1.c05dcap-20f, 0.0f, 0.0f, 0x1.226be8p-120f, 0x1.a1056cp-33f,
     0x1.e23934p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d0c2ap-60f, 0.0f, 0.0f,
     0x1.31b832p-52f, 0x1.0e5d2cp-91f, 0x1.0428c4p-38f, 0.0f, 0x1.1c7592p-124f, 0.0f,
     0x1.d4466cp-81f, 0.0f, 0x1.e0e2fcp-50f, 0x1.454d4ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.e6e226p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f94da4p-116f, 0x1.f07286p-18f, 0x1.9fd368p-73f, 0x1.9f4a3p-13f, 0.0f,
     0x1.95a2d8p-38f, 0.0f, 0.0f, 0.0f, 0x1.945cbp-107f, 0.0f, 0x1.b53a44p-41f,
     0x1.67f22p-24f, 0x1.b882e6p-83f, 0.0f, 0x1.8dcea8p-19f, 0x1.67bb84p-44f, 0.0f,
     0x1.125aa8p-88f, 0.0f, 0.0f, 0x1.a0f6ccp-114f, 0.0f, 0x1.75dfcep-125f,
     0x1.02d288p-66f, 0x1.9931d4p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d6416p-123f,
     0x1.81e4c2p-106f, 0.0f, 0.0f, 0.0f, 0x1.aa03fap-28f, 0.0f, 0x1.d93bbp-62f,
     0x1.a996aep-114f, 0.0f, 0.0f, 0x1.569efcp-73f, 0.0f, 0.0f, 0x1.2e901ep-52f, 0.0f,
     0.0f, 0x1.34245ap-69f, 0.0f, 0x1.7dca3cp-50f, 0.0f, 0x1.92e2ep-74f, 0.0f,
     0x1.1c5f1p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbc4bp-11f, 0x1.1d19fp-15f,
     0x1.5f869cp-64f, 0.0f, 0.0f, 0x1.e2429cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ebf7ap-10f, 0.0f, 0x1.6bf1p-39f, 0x1.e143e2p-46f, 0.0f, 0.0f,
     0x1.8603c8p-122f, 0x1.21f5eap-58f, 0x1.8b1d46p-60f, 0.0f, 0.0f, 0x1p0f,
     0x1.397044p-28f, 0.0f, 0.0f, 0x1.9084cp-16f, 0x1.9c59dep-102f, 0.0f, 0.0f, 0.0f,
     0x1.6c8c1ap-4f, 0x1.ff6466p-15f, 0x1.fb8c64p-118f, 0.0f, 0.0f, 0x1.a2085ep-61f,
     0.0f, 0x1.1bf7a8p-13f, 0x1.165324p-90f, 0.0f, 0x1.bb31cep-45f, 0.0f,
     0x1.e4512ap-87f, 0.0f, 0.0f, 0x1.43f4cep-106f, 0x1.d92474p-48f, 0.0f, 0.0f,
     0x1.5e5a7ep-92f, 0.0f, 0.0f, 0.0f, 0x1.a16f6p-121f, 0x1.4210f4p-47f,
     0x1.d2a8ccp-34f, 0x1.06b26p-5f, 0x1.aa2326p-25f, 0.0f, 0x1.060726p-44f, 0.0f,
     0.0f, 0x1.7a0f48p-9f, 0x1.698c36p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce536cp-88f,
     0.0f, 0x1.d6a99ap-14f, 0x1.90aafp-55f, 0.0f, 0.0f, 0x1.ecf484p-56f,
     0x1.719298p-2f, 0.0f, 0.0f, 0x1.34135ep-90f, 0x1.0791e4p-80f, 0.0f, 0.0f, 0.0f,
     0x1.aa3922p-121f, 0x1.905338p-65f, 0x1.34cad2p-81f, 0x1.6e5dd8p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f6303ap-93f, 0x1p0f, 0x1.20438p-83f, 0.0f, 0.0f, 0.0f,
     0x1.4caed4p-18f, 0.0f, 0.0f, 0.0f, 0x1.a16216p-39f, 0x1.757a6ap-84f,
     0x1.4e1ec2p-4f, 0x1.24b7dp-120f, 0.0f, 0x1.e433e2p-95f, 0x1.0b0c32p-109f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.beba1p-25f, 0x1.8485a4p-49f, 0.0f, 0x1.b2febcp-95f,
     0x1.a64202p-104f, 0x1.c495b2p-85f, 0x1.13188ap-103f, 0x1.d5e87ap-105f, 0.0f,
     0x1.8c959p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e08p-116f, 0x1.c461bp-95f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8b272p-109f, 0.0f, 0x1.857174p-75f,
     0x1.6c9a48p-101f, 0x1.195d54p-85f, 0.0f, 0.0f, 0x1.35c4f4p-28f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.89ecbcp-5f, 0.0f, 0.0f, 0.0f, 0x1.30fadep-109f, 0.0f,
     0x1.dc6138p-104f, 0.0f, 0x1.4adc84p-32f, 0.0f, 0x1.40f452p-53f, 0.0f,
     0x1.d90e84p-46f, 0.0f, 0x1.52298ep-51f, 0x1.85abb4p-33f, 0.0f, 0x1.3341c8p-96f,
     0.0f, 0x1.437dcep-36f, 0.0f, 0x1.091cfcp-18f, 0.0f, 0.0f, 0x1.23447ep-20f,
     0x1.98309p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc0e3p-7f, 0.0f, 0x1.876ff8p-43f,
     0x1.ff1716p-54f, 0.0f, 0x1.fbb7p-117f, 0x1.1f83b6p-63f, 0.0f, 0x1.da73cp-7f,
     0x1.87fd82p-28f, 0x1.08aecep-99f, 0.0f, 0.0f, 0x1.d2b20cp-36f, 0.0f, 0.0f,
     0x1.4fef78p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de14e8p-66f, 0.0f, 0x1.324f28p-11f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.128ea8p-122f, 0.0f, 0.0f, 0x1.6231a2p-104f,
     0x1.2f4cd2p-22f, 0x1.67512ep-116f, 0.0f, 0x1.111d5cp-30f, 0.0f, 0.0f, 0.0f,
     0x1.fb4d82p-26f, 0x1.084882p-45f, 0x1.d6904ap-50f, 0x1.d1132ep-35f,
     0x1.a59e76p-23f, 0.0f, 0.0f, 0x1.53e33p-13f, 0.0f, 0.0f, 0x1.0c1cf6p-13f, 0.0f,
     0x1.cc227ap-58f, 0x1.91daeep-39f, 0x1.501a7p-15f, 0.0f, 0x1.c99faap-79f,
     0x1.2a824ap-92f, 0x1.262ebp-49f, 0x1.bc80dap-80f, 0x1.acac28p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.bf4a78p-123f, 0.0f, 0x1.56aa2cp-1f, 0x1.5032a2p-68f,
     0x1.1ffd2ep-117f, 0x1.c7c588p-92f, 0x1.f0de28p-107f, 0x1.661ea2p-60f, 0.0f,
     0x1.682efp-105f, 0.0f, 0x1.48583ep-61f, 0x1.bbcb52p-26f, 0x1.8ff986p-93f,
     0x1.4d70b2p-104f, 0x1.afb676p-79f, 0.0f, 0.0f, 0x1.939956p-36f, 0x1.4ae7ap-91f,
     0.0f, 0x1.c5483ap-55f, 0.0f, 0x1.5e73eap-122f, 0.0f, 0.0f, 0x1.d4d966p-26f,
     0x1.c1a0c8p-125f, 0x1.1ecdep-113f, 0.0f, 0x1.b0da74p-69f, 0.0f, 0x1.e2c126p-89f,
     0x1.de6954p-9f, 0.0f, 0.0f, 0x1.71d96p-28f, 0x1.804d6cp-41f, 0.0f,
     0x1.479f8p-91f, 0x1.b3e452p-35f, 0.0f, 0.0f, 0x1.446b6cp-54f, 0.0f,
     0x1.8ea1ep-46f, 0x1.62910ep-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4fd4eap-99f, 0.0f,
     0x1.22fb36p-42f, 0x1.63d9eap-63f, 0.0f, 0x1.781118p-6f, 0x1.5333a2p-60f,
     0x1.f43f1cp-82f, 0x1.b56884p-13f, 0.0f, 0x1.d3aee2p-74f, 0.0f, 0x1.06ce16p-115f,
     0x1.b9710ap-80f, 0x1.71bf06p-28f, 0x1.8ce0bap-116f, 0x1.52c638p-124f,
     0x1.c29692p-43f, 0x1.b4b37ap-10f, 0.0f, 0x1.e60c72p-81f, 0x1.be8dfep-76f,
     0x1.75456cp-99f, 0.0f, 0.0f, 0x1.de8446p-99f, 0.0f, 0x1.1e53eep-4f,
     0x1.815346p-123f, 0.0f, 0x1.673838p-84f, 0.0f, 0x1.997ba4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.da7dfp-23f, 0x1.0d9df2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.cdde34p-3f, 0.0f, 0.0f, 0x1.4b11aap-97f, 0x1.d47c44p-75f,
     0x1.eb20eep-110f, 0.0f, 0x1.00efd8p-95f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.87dd6ep-119f, 0x1.cc32bcp-94f, 0x1.84189p-12f, 0.0f, 0.0f, 0.0f,
     0x1.ed05e6p-50f, 0x1.444918p-55f, 0x1.5f7dd2p-125f, 0.0f, 0.0f, 0x1.48b7bep-115f,
     0x1.60917p-123f, 0x1.4e6ec6p-82f, 0.0f, 0x1.2a54acp-95f, 0x1.c754cap-37f,
     0x1.9c0e7p-5f, 0.0f, 0.0f, 0x1.c5377ap-87f, 0.0f, 0x1.d7a9fp-76f,
     0x1.0c4af2p-84f, 0x1.2be65p-51f, 0x1.dfff04p-27f, 0x1.9706acp-2f, 0.0f, 0.0f,
     0x1.92c4acp-34f, 0x1.6000fep-80f, 0.0f, 0.0f, 0.0f, 0x1.5c92b6p-7f, 0.0f,
     0x1.92ce32p-113f, 0x1.84864p-16f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0.0f, 0x1.fa4052p-95f, 0x1.925706p-37f, 0x1.90e532p-16f, 0.0f, 0x1.d70422p-83f,
     0.0f, 0.0f, 0x1.aec7cp-79f, 0.0f, 0.0f, 0x1.78ccbep-104f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.460f64p-56f, 0.0f, 0.0f, 0x1.0e202cp-35f, 0x1.b7cbf4p-36f, 0.0f, 0.0f,
     0x1.be2062p-82f, 0.0f, 0x1.476722p-20f, 0x1.a21cfap-92f, 0x1.24aed4p-18f, 0.0f,
     0x1.d54e7ap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f4de4p-106f, 0.0f, 0x1.8bc33ap-29f,
     0.0f, 0x1.c5a69p-46f, 0.0f, 0.0f, 0x1.7d7124p-113f, 0.0f, 0x1.9c1502p-114f,
     0x1.b4e8cp-52f, 0x1.dc74e2p-41f, 0.0f, 0.0f, 0x1.1a0584p-117f, 0x1.087bfap-98f,
     0x1p0f, 0x1.405a9ep-119f, 0x1.068096p-17f, 0x1.e111fap-98f, 0.0f, 0.0f,
     0x1.d0cde8p-93f, 0.0f, 0.0f, 0.0f, 0x1.6c625ep-42f, 0.0f, 0x1.5b5416p-81f,
     0x1.983308p-104f, 0x1.bbea5cp-106f, 0.0f, 0x1.ee78c2p-89f, 0x1.f7a632p-42f,
     0x1.b329c6p-112f, 0x1.570cp-53f, 0.0f, 0x1.95872cp-57f, 0.0f, 0x1.42936cp-102f,
     0.0f, 0.0f, 0.0f, 0x1.4bd672p-11f, 0.0f, 0x1.1995e6p-46f, 0x1.bcf78p-94f,
     0x1.df151cp-114f, 0x1.71eca4p-116f, 0.0f, 0.0f, 0x1.b982c2p-39f, 0x1.454902p-5f,
     0.0f, 0x1.111b82p-37f, 0x1.56e46ep-98f, 0.0f, 0x1.244fd6p-29f, 0.0f,
     0x1.8ad1d6p-46f, 0x1.23631cp-104f, 0.0f, 0.0f, 0x1.bcf696p-78f, 0x1.c407dep-80f,
     0x1.8be576p-118f, 0.0f, 0x1.7e37aap-32f, 0x1.18fb5cp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.36d13p-11f, 0.0f, 0.0f, 0x1.93e8c2p-31f, 0x1.808684p-68f, 0x1.f9be5ep-123f,
     0.0f, 0x1.c3a98cp-17f, 0x1.626ee6p-2f, 0.0f, 0x1.be245p-74f, 0x1.1b3a34p-64f,
     0.0f, 0x1.558b9ap-1f, 0.0f, 0x1.f29004p-81f, 0.0f, 0.0f, 0x1.ba970ep-60f, 0.0f,
     0x1.7c0fb6p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a00374p-71f, 0.0f, 0.0f,
     0x1.a2e85p-54f, 0.0f, 0x1.6227dep-108f, 0x1.a58a5ap-27f, 0.0f, 0x1.2b402cp-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.86e8dap-12f, 0x1.a6da9p-61f,
     0x1.e7f01ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.138e76p-111f, 0.0f, 0x1.2037e4p-32f, 0.0f, 0x1.1d3e06p-102f, 0.0f, 0.0f,
     0x1.c965e2p-71f, 0x1.88239ap-76f, 0x1.b7a044p-42f, 0x1.d78d82p-19f, 0.0f,
     0x1.8aae8p-45f, 0x1.d3a8e6p-125f, 0.0f, 0.0f, 0.0f, 0x1.5ac78cp-53f,
     0x1.fd7b1cp-26f, 0x1.a888fp-73f, 0.0f, 0.0f, 0.0f, 0x1.021a6ap-57f, 0.0f,
     0x1.2c1456p-55f, 0x1.f9d5ap-51f, 0.0f, 0x1.16d0b4p-105f, 0.0f, 0x1.2060aep-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.526a8ep-60f, 0.0f, 0x1.d96678p-91f, 0.0f,
     0.0f, 0x1.dfb83ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eda69ep-92f, 0x1.7c2cd8p-67f,
     0.0f, 0x1.f55768p-65f, 0.0f, 0.0f, 0x1.bbc3dap-92f, 0x1.94ffdep-109f, 0.0f,
     0x1.efdbfap-97f, 0x1.4ee226p-13f, 0x1.a5f748p-42f, 0.0f, 0x1.935856p-33f,
     0x1.86f87cp-38f, 0.0f, 0x1.6934a4p-58f, 0.0f, 0x1.67e3d2p-101f, 0x1.14d5f2p-83f,
     0.0f, 0x1.b16628p-47f, 0.0f, 0x1.87c434p-21f, 0.0f, 0x1.984528p-91f,
     0x1.a96e64p-22f, 0x1.67de4ep-28f, 0.0f, 0x1.5afaf8p-96f, 0.0f, 0.0f,
     0x1.1ec952p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12dff2p-88f, 0.0f,
     0x1.febfc4p-76f, 0x1.a06266p-16f, 0x1.5745dep-84f, 0.0f, 0.0f, 0x1.92a4d4p-46f,
     0.0f, 0.0f, 0x1.64e0acp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd0224p-36f, 0.0f, 0.0f,
     0.0f, 0x1.310dc6p-32f, 0x1.6c5352p-122f, 0.0f, 0.0f, 0.0f, 0x1.c5305ep-50f, 0.0f,
     0.0f, 0x1.adf528p-95f, 0x1.22cc0ap-115f, 0x1.267e4cp-23f, 0x1.f197c8p-91f,
     0x1.77df6ap-124f, 0.0f, 0.0f, 0.0f, 0x1.b73c1p-102f, 0.0f, 0.0f, 0.0f,
     0x1.fbc78ap-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af009p-81f, 0x1.037bc6p-73f,
     0.0f, 0x1.dc3f54p-68f, 0.0f, 0.0f, 0x1.4d17aep-17f, 0.0f, 0x1.f06c6cp-3f, 0.0f,
     0.0f, 0.0f, 0x1.c68eeep-88f, 0x1.cfd9dep-13f, 0x1.3f959cp-109f, 0x1.df46bcp-11f,
     0x1.530ep-123f, 0.0f, 0.0f, 0x1.345516p-72f, 0x1.41df5cp-23f, 0.0f, 0.0f,
     0x1.78de6cp-123f, 0.0f, 0x1.913236p-32f, 0x1.9cec36p-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3db464p-51f, 0x1.80eaeep-113f, 0.0f,
     0x1.317888p-28f, 0.0f, 0.0f, 0.0f, 0x1.41b664p-52f, 0x1.fe8246p-111f, 0.0f,
     0x1.a71b88p-115f, 0.0f, 0.0f, 0.0f, 0x1.d17788p-40f, 0x1.65763cp-27f, 0.0f,
     0x1.22e34ep-123f, 0.0f, 0x1.c3e926p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.aee33p-80f, 0.0f, 0.0f, 0.0f, 0x1.1646ccp-52f, 0x1.47897p-104f,
     0x1.343798p-24f, 0x1.6ffda6p-86f, 0x1.deb7d2p-118f, 0x1.184212p-58f, 0.0f, 0.0f,
     0x1.cd6c3ep-60f, 0.0f, 0x1.8fa8a4p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6bbdap-122f, 0.0f, 0.0f, 0x1.4cc9aap-51f, 0.0f, 0.0f, 0x1.2a0f2ap-50f,
     0x1.769c7ap-77f, 0.0f, 0x1.e7c606p-97f, 0.0f, 0x1.f5676cp-28f, 0x1.49ae2cp-112f,
     0x1.af1adap-124f, 0.0f, 0x1.240d44p-59f, 0x1.4c3d8ap-118f, 0x1.2c7b66p-10f,
     0x1.80a638p-25f, 0x1.b729c6p-1f, 0x1.bb75e2p-83f, 0.0f, 0.0f, 0x1.62c226p-36f,
     0x1.4641a2p-91f, 0.0f, 0.0f, 0x1.d6af56p-3f, 0.0f, 0.0f, 0x1.ffb788p-19f,
     0x1.ed131p-92f, 0x1.ac3334p-101f, 0.0f, 0.0f, 0.0f, 0x1.1d3d48p-105f, 0.0f,
     0x1.385c6ap-71f, 0.0f, 0.0f, 0x1.69d9ep-46f, 0x1.859c66p-121f, 0x1.183432p-46f,
     0x1.c5bc56p-30f, 0x1.c7576ap-30f, 0x1.5b34p-8f, 0x1.b6c18cp-109f, 0.0f, 0.0f,
     0x1.9b1d68p-2f, 0.0f, 0x1.b168a4p-52f, 0.0f, 0x1.18cb24p-109f, 0x1.f5264cp-111f,
     0.0f, 0.0f, 0.0f, 0x1.9477cep-79f, 0x1.b185d4p-31f, 0x1.b9e45p-2f,
     0x1.4612b6p-120f, 0x1.242fbp-11f, 0.0f, 0x1.8735a6p-2f, 0.0f, 0.0f,
     0x1.4a315p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d011ap-78f, 0x1.2ced5ep-40f,
     0.0f, 0x1.18c938p-108f, 0.0f, 0.0f, 0x1.976c38p-103f, 0x1.ae2d4p-121f,
     0x1.eb7fc2p-5f, 0.0f, 0.0f, 0x1.29d904p-119f, 0.0f, 0x1.4196bep-66f,
     0x1.01606ep-85f, 0.0f, 0.0f, 0x1.c4b274p-24f, 0x1.87b9eep-86f, 0x1.c26498p-121f,
     0x1.b9b2cep-50f, 0x1.baac6cp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5a75ep-89f,
     0x1.b95132p-27f, 0x1.b93f9ap-50f, 0x1.fa24ccp-121f, 0x1.ce31ecp-78f, 0.0f,
     0x1.d03dc6p-84f, 0.0f, 0x1.42b17p-51f, 0x1.14fbbep-86f, 0x1.a87f36p-102f,
     0x1.b488aep-82f, 0.0f, 0x1.118bcap-42f, 0.0f, 0x1.385f8ap-29f, 0.0f,
     0x1.d82f54p-57f, 0.0f, 0x1.a7eee6p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8bf034p-77f,
     0.0f, 0.0f, 0.0f, 0x1.978cf4p-65f, 0x1.945ea8p-88f, 0x1.01be68p-1f, 0.0f,
     0x1.f73e3ap-29f, 0.0f, 0x1.50e32ep-100f, 0.0f, 0.0f, 0x1.dc1ff6p-100f, 0.0f,
     0x1.16d19ap-5f, 0x1.8f9e58p-8f, 0.0f, 0x1.4c11dep-92f, 0.0f, 0.0f, 0.0f,
     0x1.2fd466p-13f, 0.0f, 0x1.4b5284p-32f, 0.0f, 0x1.dfe2fcp-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.65fe32p-2f, 0.0f, 0x1.408622p-40f, 0x1.44c654p-65f, 0.0f,
     0x1.517b4ep-29f, 0.0f, 0.0f, 0x1.05a38cp-97f, 0x1.eae106p-77f, 0x1.2a31bp-62f,
     0.0f, 0x1.2d1ef8p-61f, 0.0f, 0x1.fdc26p-15f, 0x1.f4e618p-121f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.75268cp-109f, 0.0f, 0x1.24ec8p-35f, 0.0f, 0x1.04d33p-36f,
     0x1.8bb03cp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.789a7p-15f, 0.0f, 0x1.df4658p-67f,
     0.0f, 0x1.4d41ap-55f, 0x1.e664f4p-75f, 0.0f, 0x1.7e4804p-8f, 0.0f,
     0x1.85f79ep-98f, 0x1.442238p-65f, 0x1.70182ap-56f, 0.0f, 0x1.6c317ap-36f,
     0x1.2feacep-121f, 0.0f, 0x1.f180f8p-96f, 0x1.eb1966p-68f, 0.0f, 0x1.b684fap-71f,
     0.0f, 0x1.523628p-97f, 0x1.b8d3bp-46f, 0.0f, 0.0f, 0x1.69d686p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9f49f4p-106f, 0.0f, 0.0f, 0x1.6473f4p-11f, 0.0f,
     0x1.b17e9cp-125f, 0.0f, 0.0f, 0x1.a376bcp-83f, 0x1.6f5a3ep-13f, 0x1.931226p-7f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.0c3e6p-71f, 0x1.83ad7p-93f, 0x1.5b743ep-1f,
     0x1.7610cep-57f, 0.0f, 0x1.d5db92p-15f, 0.0f, 0.0f, 0x1.732414p-3f, 0.0f, 0.0f,
     0x1.e15f4ep-79f, 0.0f, 0x1.a3dc6p-108f, 0.0f, 0.0f, 0x1.a60adcp-65f, 0x1p0f,
     0.0f, 0x1.f07fecp-103f, 0.0f, 0.0f, 0.0f, 0x1.f8afa8p-112f, 0.0f,
     0x1.fc939ap-83f, 0x1.8578e2p-7f, 0x1.b5fd32p-87f, 0.0f, 0x1.47ce96p-101f,
     0x1.5202bap-18f, 0.0f, 0.0f, 0x1.6f84fp-27f, 0.0f, 0.0f, 0x1.846c3p-23f,
     0x1.ef6286p-77f, 0x1.3e501ep-85f, 0.0f, 0x1.5b2caap-96f, 0.0f, 0.0f,
     0x1.157358p-82f, 0x1.f49b5ep-78f, 0x1.461d42p-49f, 0x1.6142ccp-5f, 0.0f,
     0x1.db633ap-27f, 0x1.f8be28p-50f, 0x1.2e0daep-32f, 0x1.d536dap-89f,
     0x1.86bf74p-49f, 0x1.5018cap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1a7722p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ca478p-35f,
     0x1.35a546p-95f, 0x1.c4dc6ap-27f, 0.0f, 0x1.b1a2dcp-124f, 0x1.7fef04p-79f,
     0x1.e5cff2p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd8fb8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.2387b8p-98f, 0.0f, 0x1.2d4a48p-12f, 0.0f, 0x1.a54338p-42f, 0x1.9b8746p-12f,
     0.0f, 0.0f, 0x1.ad4f64p-122f, 0x1.d99b9cp-54f, 0x1.24be06p-14f, 0.0f,
     0x1.0c0914p-37f, 0.0f, 0x1.f09df6p-29f, 0x1.72ce4ep-108f, 0x1.dc45cp-89f,
     0x1.ffb01ap-107f, 0x1.fa0736p-58f, 0x1.9f92a6p-105f, 0x1.a8731cp-58f, 0.0f,
     0x1.dc1f3cp-21f, 0x1.f6a15cp-92f, 0x1.fd4384p-90f, 0x1.288f86p-124f,
     0x1.5d8956p-68f, 0x1.4f06fp-33f, 0x1.542d1ap-62f, 0x1.92f7ap-58f,
     0x1.9b60aap-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91a714p-21f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.5f6e96p-120f, 0.0f, 0.0f, 0x1.d7943ep-4f, 0x1.cf7f06p-64f,
     0x1.b94288p-26f, 0x1.a7d58ap-15f, 0.0f, 0x1.7856a4p-107f, 0.0f, 0.0f,
     0x1.f688eap-95f, 0x1.0ca896p-76f, 0.0f, 0x1.d07bep-21f, 0.0f, 0x1.e81036p-59f,
     0.0f, 0.0f, 0x1.87c6dp-97f, 0x1.e74f3ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77d6e6p-86f, 0.0f, 0x1.079a58p-89f, 0x1.bda808p-76f, 0.0f, 0.0f,
     0x1.b7b7cp-47f, 0.0f, 0x1.8c0b46p-105f, 0x1.839fb4p-106f, 0.0f, 0.0f,
     0x1.c69684p-50f, 0.0f, 0x1.49e46ap-51f, 0x1.4f7beap-39f, 0x1.a7d9fcp-48f,
     0x1.cf6ce4p-5f, 0x1.f402p-66f, 0x1.ae0ba6p-57f, 0x1.a3cefp-113f, 0.0f, 0.0f,
     0x1.570eb8p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6317aap-111f, 0x1.063a72p-29f, 0.0f,
     0x1.2e0c82p-5f, 0.0f, 0.0f, 0x1.96cc9ap-5f, 0x1.1a71c4p-58f, 0x1.87dcap-75f,
     0x1.b4165p-59f, 0x1.efdd7cp-40f, 0.0f, 0x1.b9b25cp-48f, 0x1.4f44fcp-54f, 0.0f,
     0x1.ea9334p-109f, 0x1.abd514p-76f, 0.0f, 0.0f, 0x1.471cc8p-9f, 0x1.0bf8e6p-106f,
     0.0f, 0x1.5f7c6p-11f, 0x1.66de8ep-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f4ee72p-14f, 0x1.8ea842p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.90563ep-38f, 0x1.7edce2p-85f, 0.0f, 0x1.8bf36p-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.12bc7p-60f, 0x1.71e96ap-22f, 0.0f, 0.0f, 0x1.088902p-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1bebf6p-72f, 0x1.625a3ep-65f, 0.0f, 0x1.901c8ap-94f,
     0x1.b9e11p-39f, 0x1.a08e2ep-80f, 0x1.0c4408p-110f, 0x1.eeee32p-120f,
     0x1.fb182p-4f, 0.0f, 0x1.bea754p-102f, 0.0f, 0x1.c8ec54p-36f, 0.0f,
     0x1.c9da32p-77f, 0.0f, 0x1.1c978cp-45f, 0.0f, 0x1.564644p-26f, 0x1.1d618p-3f,
     0.0f, 0x1.64df98p-20f, 0.0f, 0.0f, 0.0f, 0x1.e93ce6p-110f, 0x1.5b693cp-72f,
     0x1.1c69f2p-102f, 0x1.e75d02p-124f, 0.0f, 0.0f, 0x1.d286bcp-27f, 0.0f,
     0x1.fcd5f4p-60f, 0x1.304b84p-115f, 0.0f, 0.0f, 0.0f, 0x1.0fd55ap-52f,
     0x1.386bfcp-1f, 0x1.a6f3d8p-3f, 0x1.31fbacp-93f, 0x1.34d43p-1f, 0x1.cba6d2p-112f,
     0x1.17386cp-94f, 0.0f, 0.0f, 0.0f, 0x1.7c6e7ep-55f, 0x1.ab52dcp-27f,
     0x1.3ef532p-5f, 0.0f, 0.0f, 0.0f, 0x1.ba0e0ep-54f, 0.0f, 0.0f, 0x1.96a618p-63f,
     0x1.2e9e4ep-64f, 0x1.a7bce4p-45f, 0.0f, 0.0f, 0.0f, 0x1.54b8c4p-66f, 0.0f,
     0x1.b32a56p-117f, 0.0f, 0.0f, 0.0f, 0x1.b92adep-100f, 0.0f, 0x1.532266p-94f,
     0x1.bfe142p-68f, 0.0f, 0x1.727c02p-42f, 0x1.1dc0b2p-83f, 0x1.861944p-48f,
     0x1.d27ca8p-108f, 0.0f, 0x1.cc04dap-82f, 0x1.4287dap-85f, 0x1.af8f8p-88f, 0.0f,
     0x1.6d49fap-15f, 0x1.cd6f82p-49f, 0.0f, 0x1.670ffap-77f, 0.0f, 0.0f,
     0x1.c0ef66p-105f, 0.0f, 0x1.22507ap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a38cd6p-69f, 0.0f, 0.0f, 0.0f, 0x1.8e1056p-34f, 0.0f, 0x1.e3bb3ap-59f, 0.0f,
     0x1.2ca54p-2f, 0x1.b3644ep-121f, 0.0f, 0x1.56a858p-100f, 0x1.b84036p-96f, 0.0f,
     0x1.71b6e4p-31f, 0x1.512d7p-96f, 0x1.3e094ep-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8cf554p-30f, 0x1.1c1a4cp-36f, 0x1p0f, 0x1.9887c8p-34f, 0.0f, 0x1.fcea76p-30f,
     0.0f, 0x1.a4dfep-82f, 0x1.c02262p-47f, 0.0f, 0.0f, 0.0f, 0x1.69fcbep-22f,
     0x1.ce457cp-33f, 0x1.f0f30ap-45f, 0x1.01384ep-31f, 0.0f, 0x1.1472e6p-16f, 0.0f,
     0.0f, 0x1.043858p-18f, 0.0f, 0x1.b03fa6p-35f, 0.0f, 0.0f, 0x1.d0d88ep-85f, 0.0f,
     0x1.3224e8p-24f, 0x1.c40612p-42f, 0x1p0f, 0x1.616374p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91985ep-52f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_fmodf1_purecfma(tmp0, tmp1);
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
    printf("Sleef_finz_fmodf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fmodf1_purecfma bench acc %a\n", global_bench_acc);
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
