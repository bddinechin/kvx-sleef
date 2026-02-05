/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fmaxf1_purecfma.c --function Sleef_fmaxf1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.091ebp-21f, 0.0f, 0x1.d9f822p-107f, 0x1.8cb338p-3f, 0x1.3a9e7ep-65f,
     0x1.08045ap-112f, 0x1.8bfe9ep-46f, 0x1.4a95eep-100f, 0.0f, 0.0f, 0x1.6c414ap-39f,
     0.0f, 0.0f, 0.0f, 0x1.80e4e8p-124f, 0.0f, 0x1.4c98aep-80f, 0x1.41a53cp-7f, 0.0f,
     0.0f, 0x1.c39674p-10f, 0x1.29655cp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bebc2ep-30f,
     0.0f, 0.0f, 0x1.c97e24p-15f, 0x1.095bfap-4f, 0.0f, 0x1.d9014ap-41f,
     0x1.70f674p-99f, 0.0f, 0.0f, 0x1.84076ep-21f, 0.0f, 0x1.01beep-119f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2525d6p-20f, 0x1.9e767cp-71f, 0x1.56fa24p-118f, 0x1.45a04cp-3f,
     0x1.0a58fap-42f, 0x1.511db8p-100f, 0.0f, 0.0f, 0x1.05ca0ap-60f, 0.0f, 0.0f,
     0x1.4a715ep-117f, 0x1.723a74p-122f, 0x1.05c6cep-126f, 0.0f, 0x1.1a756ap-102f,
     0.0f, 0x1.9cbcp-42f, 0x1.fe65eep-109f, 0x1.83a2p-16f, 0.0f, 0x1.3a4e82p-7f,
     0x1.139954p-72f, 0x1.19fe82p-10f, 0.0f, 0x1.616a12p-89f, 0x1.e3bf6ep-65f,
     0x1.ab19b2p-58f, 0x1.34efb8p-87f, 0.0f, 0x1.493a1p-41f, 0x1.4db96ep-101f, 0.0f,
     0x1.b73f5cp-48f, 0.0f, 0x1.35472p-73f, 0x1.862672p-64f, 0.0f, 0x1.00a89ap-120f,
     0x1.e80772p-79f, 0.0f, 0x1.0bad8p-91f, 0x1.eef7fap-86f, 0.0f, 0x1.6948a2p-107f,
     0.0f, 0x1.163ea4p-109f, 0x1.09c0cap-39f, 0x1.af4beep-86f, 0x1.86ea96p-2f, 0.0f,
     0.0f, 0x1.d9083cp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ceaa66p-114f, 0.0f,
     0x1.257ee2p-5f, 0.0f, 0x1.12751p-23f, 0x1.0762f2p-80f, 0x1.0a900cp-80f,
     0x1.ce38fep-37f, 0.0f, 0x1.0077cep-40f, 0x1.78a668p-112f, 0x1.06a0ccp-8f, 0.0f,
     0.0f, 0.0f, 0x1.e24cdcp-30f, 0.0f, 0.0f, 0x1.965f24p-113f, 0.0f, 0.0f,
     0x1.1bd4b2p-23f, 0.0f, 0x1.daded6p-36f, 0x1.6c742ep-3f, 0.0f, 0x1.7d085ep-51f,
     0.0f, 0.0f, 0x1.fd9fe2p-10f, 0x1.6f5592p-53f, 0.0f, 0x1.07ca86p-35f, 0.0f,
     0x1.52c8d8p-83f, 0.0f, 0.0f, 0x1.d63c02p-23f, 0x1.7094e4p-49f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d81582p-16f, 0x1.04312ap-69f, 0.0f, 0.0f, 0x1.271e8cp-99f,
     0.0f, 0.0f, 0x1.50aaf4p-118f, 0.0f, 0.0f, 0x1.a0ab9ep-123f, 0.0f,
     0x1.acbb56p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.46dd06p-124f, 0x1.5afe94p-87f, 0.0f,
     0x1.776b5cp-2f, 0x1.5daba2p-35f, 0.0f, 0.0f, 0x1.5468acp-81f, 0x1.2d41acp-18f,
     0.0f, 0.0f, 0x1.8532e2p-115f, 0x1.75eb1ap-109f, 0.0f, 0.0f, 0x1.d8bd56p-50f,
     0x1.7b7bd2p-89f, 0x1.f13fe4p-51f, 0x1.b6d6dp-12f, 0x1.63d506p-124f,
     0x1.ecb3e6p-37f, 0.0f, 0x1.e3c2d8p-40f, 0.0f, 0.0f, 0x1.9c5c46p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6ec5bp-116f, 0.0f, 0x1.8c8c14p-58f, 0.0f, 0x1.683d2cp-24f,
     0x1.c4cf48p-126f, 0.0f, 0x1.90b6e4p-13f, 0.0f, 0x1.ba21dcp-96f, 0.0f,
     0x1.3011fcp-74f, 0x1.189d16p-23f, 0x1.f518f4p-104f, 0x1.b7d4fp-42f,
     0x1.5ad4a4p-58f, 0.0f, 0x1.d69a8cp-1f, 0.0f, 0.0f, 0x1.af7bfep-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.052b0cp-116f, 0x1.806e5ap-108f, 0x1.310beep-3f, 0.0f, 0.0f,
     0.0f, 0x1.60e7ccp-7f, 0x1.c11ep-28f, 0x1.22590ep-54f, 0.0f, 0x1.c6d2c2p-17f,
     0x1.b8dfeep-35f, 0.0f, 0x1.53be68p-39f, 0x1.3f1b8ap-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.540446p-124f, 0.0f, 0.0f, 0x1.b21f88p-70f, 0.0f, 0.0f, 0x1.ac3a16p-30f,
     0.0f, 0x1.275fap-123f, 0.0f, 0.0f, 0x1.65cb7cp-47f, 0.0f, 0x1.d224d2p-13f,
     0x1.afd1dep-5f, 0.0f, 0.0f, 0x1.292726p-10f, 0.0f, 0x1.bfdf44p-10f,
     0x1.1c3c9p-121f, 0x1.53dd9ap-80f, 0x1.138a3cp-126f, 0x1.53d51cp-98f, 0.0f, 0.0f,
     0x1.c454b6p-59f, 0.0f, 0.0f, 0x1.9c2feep-79f, 0x1.355ed6p-113f, 0.0f,
     0x1.2efea8p-60f, 0.0f, 0.0f, 0x1.b91908p-117f, 0x1.90f8e6p-94f, 0x1.7d2228p-105f,
     0x1.99f926p-109f, 0x1.968176p-17f, 0x1.26cd24p-100f, 0x1.8fd5eap-91f, 0.0f,
     0x1.9741e2p-88f, 0x1.bf7f5ep-36f, 0x1.be7edp-48f, 0.0f, 0x1.3537b2p-77f, 0.0f,
     0x1.03a5e8p-59f, 0.0f, 0.0f, 0.0f, 0x1.3d481p-18f, 0x1.1d3f1cp-61f, 0.0f, 0.0f,
     0x1.c4363ep-38f, 0.0f, 0.0f, 0.0f, 0x1.b99b48p-74f, 0.0f, 0x1.1aa588p-71f,
     0x1.9ffdb8p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa4a24p-33f, 0x1.793e2p-120f,
     0x1.4a04dep-97f, 0.0f, 0.0f, 0x1.987ab4p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.47a81p-86f, 0.0f, 0.0f, 0x1.d4ac82p-12f, 0x1.bd0a9ep-34f, 0.0f, 0.0f,
     0x1.ed217cp-123f, 0.0f, 0.0f, 0.0f, 0x1.861aecp-85f, 0x1.664b6cp-45f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d906a6p-50f, 0.0f, 0x1.c776b4p-106f, 0.0f, 0.0f,
     0x1.1fb254p-103f, 0.0f, 0.0f, 0x1.6ffa3ep-125f, 0.0f, 0x1.a769f8p-68f,
     0x1.ec41f8p-3f, 0x1.532938p-57f, 0x1.bfdc42p-85f, 0x1.c9e7c8p-84f, 0.0f, 0.0f,
     0x1.83627ep-7f, 0.0f, 0.0f, 0x1.84ae2p-115f, 0.0f, 0x1.9ba93cp-102f, 0.0f,
     0x1.bef312p-11f, 0x1.c049c4p-125f, 0.0f, 0x1.b31ceap-2f, 0x1.fe39ccp-126f, 0.0f,
     0.0f, 0.0f, 0x1.9962c2p-16f, 0.0f, 0.0f, 0x1.5d8e44p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.c0cd78p-57f, 0x1.42b496p-13f, 0x1.803bd8p-54f, 0.0f, 0.0f,
     0x1.860388p-9f, 0.0f, 0x1.e3beeep-35f, 0x1.54abaap-54f, 0x1.469124p-97f, 0.0f,
     0x1.ecff12p-74f, 0.0f, 0.0f, 0x1.acf302p-55f, 0x1.254f06p-124f, 0x1.ddd52ep-77f,
     0x1.ef615ep-89f, 0.0f, 0x1.6bc11cp-18f, 0.0f, 0.0f, 0x1.233decp-114f,
     0x1.fac52ap-55f, 0.0f, 0.0f, 0x1.f37852p-64f, 0x1.8ffaep-7f, 0.0f, 0.0f, 0.0f,
     0x1.92fb38p-56f, 0x1.67d54p-57f, 0.0f, 0x1.14719ap-72f, 0x1.ed56aap-71f, 0.0f,
     0.0f, 0x1.49b08p-93f, 0x1.066114p-47f, 0x1.cc83e8p-87f, 0.0f, 0.0f,
     0x1.fa2d08p-120f, 0.0f, 0x1.d9dd64p-20f, 0.0f, 0x1.ab6e6p-55f, 0x1.796892p-91f,
     0x1.7e94c2p-67f, 0x1.e2fdccp-35f, 0.0f, 0.0f, 0x1.97a20ep-51f, 0.0f, 0.0f,
     0x1.d94f48p-36f, 0x1.35d322p-40f, 0.0f, 0x1.1dec78p-48f, 0.0f, 0.0f, 0.0f,
     0x1.ddee4ap-1f, 0x1.ee168ep-39f, 0x1.8202dep-66f, 0x1.8e5e0ap-3f,
     0x1.ea17f4p-116f, 0x1.d3336ep-96f, 0.0f, 0x1.2455b6p-14f, 0.0f, 0x1.a49ba8p-25f,
     0.0f, 0x1.8a132cp-25f, 0x1.89e738p-67f, 0.0f, 0x1.5c8ca8p-36f, 0x1.e3d04ep-60f,
     0.0f, 0.0f, 0x1.b762f6p-49f, 0.0f, 0x1.939e4ap-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c42d9cp-112f, 0.0f, 0x1.94e2a2p-43f, 0.0f,
     0x1.e6a2acp-105f, 0x1.92f282p-50f, 0x1.5c7778p-93f, 0x1.c8b0b8p-41f, 0.0f, 0.0f,
     0x1.66ff56p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c62d36p-76f, 0x1.5ba30cp-6f, 0x1.8214f8p-11f, 0.0f, 0x1.ec7a5p-17f,
     0x1.28bc56p-100f, 0.0f, 0x1.10d826p-9f, 0x1.4621ccp-99f, 0x1.3cb2ecp-13f,
     0x1.807344p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f0f6b2p-32f, 0.0f, 0x1.d84304p-114f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.31a6b8p-49f, 0x1.bcd056p-13f, 0x1.a0282ep-47f, 0.0f,
     0x1.25fa36p-96f, 0x1.6b106cp-84f, 0.0f, 0x1.ce7d9ap-29f, 0.0f, 0x1.da051p-104f,
     0x1.f8bb02p-85f, 0.0f, 0x1.96eea6p-76f, 0.0f, 0x1.3d6d4ap-45f, 0.0f,
     0x1.0d8f26p-83f, 0x1p0f, 0x1.909dd6p-65f, 0x1.ae5f5ep-93f, 0x1.c14402p-23f,
     0x1.5b5c3ap-100f, 0.0f, 0.0f, 0x1.daecaap-4f, 0.0f, 0.0f, 0.0f, 0x1.17f82p-76f,
     0x1.6c6098p-119f, 0.0f, 0x1.fc7c88p-3f, 0x1.9955f8p-3f, 0x1.02d0c6p-57f,
     0x1.2b2ee8p-48f, 0.0f, 0.0f, 0x1.545eacp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a8bbeep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ec318p-44f, 0x1.83e69p-71f,
     0x1.839c32p-79f, 0x1.a9a94cp-115f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.073ebep-102f,
     0.0f, 0x1.b9d8a8p-1f, 0.0f, 0x1.0b8148p-50f, 0x1.a3c8b4p-57f, 0x1.e9a77ep-1f,
     0x1.84a88ep-14f, 0x1.5ef9ap-4f, 0x1.535dbcp-124f, 0x1.d2aa66p-17f,
     0x1.b24aa8p-109f, 0.0f, 0x1.84d7a8p-2f, 0.0f, 0.0f, 0x1.5ae326p-14f,
     0x1.9c8296p-71f, 0.0f, 0.0f, 0x1.d757eap-71f, 0x1.c4affep-55f, 0.0f, 0.0f, 0.0f,
     0x1.d29df2p-13f, 0x1.6d7be2p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.750daap-107f,
     0.0f, 0.0f, 0x1.b74344p-105f, 0x1.f7056ep-66f, 0x1.c9cbaep-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.42ee68p-30f, 0x1.b6269ep-56f, 0x1.d55712p-84f, 0.0f, 0.0f,
     0x1.843754p-85f, 0x1.dafdeap-48f, 0x1.8e0418p-34f, 0.0f, 0x1.0cf87ap-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88cdb2p-69f, 0x1.1c56fep-2f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.466f02p-103f, 0x1.2242c8p-31f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.981d8ap-71f, 0x1.319ce4p-98f, 0x1.946e42p-120f, 0x1.453b36p-100f,
     0x1.37f8e2p-61f, 0.0f, 0x1.5aeb6p-41f, 0.0f, 0x1.43075p-92f, 0x1.2a3346p-87f,
     0x1.501226p-6f, 0x1.6e525cp-19f, 0x1.6f757cp-92f, 0x1.0110b2p-64f,
     0x1.fdee5ep-118f, 0.0f, 0.0f, 0x1.8ba142p-100f, 0x1.b2a508p-17f, 0x1.114dap-78f,
     0.0f, 0.0f, 0x1.73f5bep-8f, 0.0f, 0.0f, 0.0f, 0x1.88dadcp-88f, 0.0f, 0.0f,
     0x1.e39296p-47f, 0.0f, 0.0f, 0.0f, 0x1.e328a4p-1f, 0.0f, 0x1.28c55p-99f,
     0x1.6e9458p-108f, 0.0f, 0x1.8c1c46p-61f, 0x1.5f1c7ap-24f, 0x1.7897aep-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.18a59cp-4f, 0x1.11e46ep-55f, 0x1.4d2a0ap-2f,
     0x1.e398bep-115f, 0.0f, 0x1.50743ep-15f, 0x1.b12782p-87f, 0.0f, 0.0f, 0.0f,
     0x1.52a4a2p-100f, 0.0f, 0.0f, 0x1.a4a6e4p-46f, 0.0f, 0x1.c536e4p-51f, 0.0f,
     0x1.ea5156p-61f, 0.0f, 0x1.c76e5ap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.122c4ep-107f, 0.0f, 0.0f, 0.0f, 0x1.a5da26p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3b8078p-105f, 0x1.c6a7d4p-31f, 0x1.19a52p-54f,
     0x1.15002ap-110f, 0.0f, 0.0f, 0x1.f5625ep-10f, 0.0f, 0.0f, 0.0f, 0x1.7a959p-61f,
     0x1.373cd8p-46f, 0x1.c8aa8cp-12f, 0.0f, 0x1.01c14ap-104f, 0.0f, 0.0f, 0.0f,
     0x1.84326cp-122f, 0x1.8066ecp-75f, 0.0f, 0x1.94d40ap-63f, 0.0f, 0x1.284efep-45f,
     0.0f, 0x1.a138fp-76f, 0x1.386096p-110f, 0x1.1d47d6p-116f, 0x1.094614p-25f,
     0x1.b8452p-118f, 0x1.c48936p-79f, 0.0f, 0.0f, 0.0f, 0x1.878c42p-102f, 0x1p0f,
     0x1.415b0ep-18f, 0x1.d4473cp-64f, 0x1.160ap-46f, 0.0f, 0x1.91909p-115f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e6659ap-114f, 0.0f, 0x1.b2c5aep-119f, 0x1.a2cbc6p-18f,
     0x1.85893ap-3f, 0.0f, 0.0f, 0x1.e1615ap-75f, 0.0f, 0x1.c3f1acp-33f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0x1.1eddap-50f, 0x1.d89fe4p-111f, 0.0f, 0x1.c4127ap-30f,
     0x1.24eba8p-41f, 0.0f, 0x1.43b5f6p-66f, 0.0f, 0x1.d8747cp-68f, 0x1.0ba38ep-25f,
     0x1.cacd8ep-76f, 0.0f, 0.0f, 0x1.f8cc9ep-9f, 0x1.12a09ep-45f, 0x1.3f4f42p-123f,
     0x1.f56ddap-75f, 0x1.e4060ap-63f, 0.0f, 0x1.448c54p-16f, 0x1.6d7708p-14f, 0.0f,
     0.0f, 0.0f, 0x1.c68aacp-8f, 0x1.6de9eep-80f, 0.0f, 0x1.8d779p-38f, 0.0f,
     0x1.d40d84p-109f, 0x1.582b3ap-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fd563ap-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d57b6p-52f, 0x1.c40aap-123f, 0x1.a3eb08p-10f, 0.0f,
     0.0f, 0x1.fb16d8p-75f, 0x1.77f3e6p-22f, 0.0f, 0.0f, 0x1.cc34cep-70f, 0.0f,
     0x1.100b54p-86f, 0x1.01d33cp-78f, 0.0f, 0.0f, 0.0f, 0x1.6fa05ep-63f,
     0x1.c7ce46p-20f, 0x1.6bd5cap-15f, 0x1.596d82p-12f, 0.0f, 0x1.db327cp-57f, 0.0f,
     0x1.c766e4p-83f, 0x1.25648cp-80f, 0x1.15fa5ap-50f, 0.0f, 0.0f, 0x1.fc41acp-73f,
     0x1.c0257p-69f, 0.0f, 0.0f, 0x1.fd22a6p-42f, 0.0f, 0.0f, 0.0f, 0x1.a0b846p-84f,
     0.0f, 0x1.187ea8p-31f, 0x1.cde608p-100f, 0x1.1c7412p-61f, 0x1.e83148p-84f, 0.0f,
     0.0f, 0x1.383d4p-3f, 0x1.3fde5ep-99f, 0x1.b841d4p-25f, 0.0f, 0.0f,
     0x1.85eb72p-12f, 0x1.8c8ba4p-41f, 0.0f, 0.0f, 0x1.85f076p-96f, 0x1.2ffffap-118f,
     0.0f, 0x1.1101cp-100f, 0x1.54cc06p-17f, 0.0f, 0x1.e91666p-119f, 0x1.856dfp-110f,
     0x1.47965p-77f, 0x1.db4308p-88f, 0x1.11c128p-82f, 0.0f, 0x1.aa943ap-48f, 0.0f,
     0.0f, 0.0f, 0x1.cc5c4cp-79f, 0x1.4dc59ep-71f, 0x1.d935fep-31f, 0.0f,
     0x1.bf7c58p-71f, 0.0f, 0x1.6d8124p-47f, 0.0f, 0x1.550fc6p-77f, 0.0f,
     0x1.fdd1b6p-74f, 0.0f, 0.0f, 0.0f, 0x1.f1a4e6p-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.141fcep-48f, 0.0f, 0x1.02e94ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0efb1p-43f, 0x1.c8d032p-36f, 0.0f, 0.0f, 0.0f, 0x1.2079fep-62f, 0.0f, 0.0f,
     0x1.dc9a14p-114f, 0.0f, 0.0f, 0x1.d6b6a4p-56f, 0x1.ac4b12p-95f, 0.0f,
     0x1.23e82cp-2f, 0x1.33f8f6p-122f, 0x1.2c168p-75f, 0.0f, 0.0f, 0x1.5a94bcp-35f,
     0.0f, 0x1.f9c462p-29f, 0x1.91d2dp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.986a3ep-35f,
     0.0f, 0x1.61dc78p-19f, 0.0f, 0x1.b84c06p-12f, 0.0f, 0.0f, 0.0f, 0x1.122e8p-115f,
     0x1.7b2b02p-122f, 0x1.0762ep-90f, 0.0f, 0.0f, 0.0f, 0x1.0cde2ap-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f4d7f8p-38f, 0.0f, 0x1.34fdd4p-7f, 0x1.bc4692p-51f, 0.0f,
     0x1.b00e5ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30c7e8p-1f, 0x1.f59186p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93138cp-63f, 0.0f, 0x1.c1ab32p-111f, 0.0f,
     0x1.8790c2p-98f, 0x1.65b218p-109f, 0x1.e908ap-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4068ecp-6f, 0x1.3658aep-126f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.98e4e4p-32f, 0x1.0fbb42p-86f, 0x1.a1b6eap-40f, 0x1.ced22p-23f,
     0x1.ab445cp-116f, 0.0f, 0x1p0f, 0.0f, 0x1.911bdcp-107f, 0x1.8c9ddp-115f,
     0x1.008aeap-78f, 0x1.e1b0b8p-85f, 0.0f, 0.0f, 0.0f, 0x1.3105d4p-91f,
     0x1.bcf892p-48f, 0x1.78bbp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b404b2p-96f,
     0x1.b54386p-52f, 0.0f, 0.0f, 0.0f, 0x1.261d9ap-67f, 0x1.f279dcp-25f, 0.0f,
     0x1.26eb72p-79f, 0x1.72b93p-2f, 0.0f, 0.0f, 0x1.c5745ep-31f, 0x1.d8f988p-4f,
     0x1.2e12aep-122f, 0x1.b9f9bcp-56f, 0.0f, 0x1.b00854p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.407494p-65f, 0x1.95dd6ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ef6c88p-60f, 0.0f, 0.0f, 0x1.5374e6p-83f, 0.0f, 0x1.4e41fep-97f,
     0x1.f68786p-104f, 0x1.f1b4dep-104f, 0.0f, 0x1.138d1cp-86f, 0x1.ab2a08p-34f,
     0x1.5f516cp-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b68ae4p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.16201ep-36f, 0.0f, 0x1.ffd82cp-20f, 0x1.5b8218p-49f, 0x1.82226cp-112f, 0.0f,
     0.0f, 0.0f, 0x1.fdcd1ep-106f, 0.0f, 0.0f, 0.0f, 0x1.351f5cp-48f, 0.0f,
     0x1.9b8858p-115f, 0x1.061504p-114f, 0x1.e5d07ep-101f, 0x1.bd4af6p-103f,
     0x1.6260b8p-86f, 0x1.d7e1cp-124f, 0.0f, 0.0f, 0x1.1386dcp-42f, 0.0f, 0.0f,
     0x1.6c9052p-39f, 0x1.9e8428p-93f, 0x1.b89f7p-90f, 0x1p0f, 0x1.7581b2p-5f, 0.0f,
     0x1.908554p-20f, 0.0f, 0x1.3ecb98p-61f, 0.0f, 0.0f, 0x1.4a4caep-66f,
     0x1.99ef1ep-122f, 0x1.7c59cep-118f, 0.0f, 0x1.86718cp-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff5daep-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e7294p-22f, 0.0f,
     0x1.5d584ap-120f, 0x1.04c9aap-74f, 0x1.1db224p-82f, 0x1.0f4172p-83f, 0.0f,
     0x1.0d5f66p-86f, 0.0f, 0.0f, 0x1.7cb854p-34f, 0x1.f09c44p-110f, 0x1.781d4p-47f,
     0x1.62a066p-69f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.5be8dap-33f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.02b6d8p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c6aa4p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b4876p-93f,
     0.0f, 0x1.ab0278p-78f, 0.0f, 0x1.d86266p-45f, 0.0f, 0x1.a59b92p-100f, 0.0f,
     0x1.ae23dp-126f, 0x1.a23d34p-60f, 0.0f, 0x1.05db8ap-70f, 0.0f, 0.0f,
     0x1.33619p-31f, 0.0f, 0x1.54a4ap-42f, 0x1.963cd6p-103f, 0.0f, 0x1.691ce8p-5f,
     0x1.8c3d34p-7f, 0.0f, 0.0f, 0.0f, 0x1.ea5da6p-80f, 0x1.a3e828p-2f, 0.0f,
     0x1.d9bcc2p-72f, 0.0f, 0x1.b66fep-29f, 0.0f, 0.0f, 0x1.fe0648p-70f,
     0x1.90e7d2p-28f, 0x1.7dadbep-13f, 0x1.c4a7fcp-10f, 0x1.e13502p-85f,
     0x1.b8947cp-112f, 0x1.647944p-69f, 0.0f, 0x1.00272ep-25f, 0x1.565976p-7f, 0.0f,
     0.0f, 0.0f, 0x1.506482p-118f, 0.0f, 0x1.e1952p-45f, 0.0f, 0.0f, 0x1.030e5cp-104f,
     0x1.0a98dap-63f, 0x1.15d3ap-29f, 0x1.8cd6bp-11f, 0.0f, 0.0f, 0.0f,
     0x1.3b7566p-97f, 0x1.5b276p-79f, 0.0f, 0x1.759a24p-36f, 0x1.ff675p-117f, 0.0f,
     0x1.e01be8p-70f, 0.0f, 0.0f, 0x1.b4e974p-115f, 0.0f, 0x1.e3d066p-2f,
     0x1.337852p-38f, 0x1.018c94p-83f, 0.0f, 0x1.fef2c4p-101f, 0x1.7c678cp-98f,
     0x1.acc55ep-68f, 0.0f, 0x1.f32c08p-51f, 0.0f, 0x1.e9b31cp-75f, 0.0f,
     0x1.0c5d7ap-29f, 0.0f, 0x1.50229ep-11f, 0.0f, 0.0f, 0x1.915c56p-100f, 0.0f,
     0x1.f4605p-58f, 0x1.890fbap-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.43f038p-98f,
     0.0f, 0.0f, 0x1.5c1208p-67f, 0.0f, 0x1.24f41cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e4462p-12f, 0.0f, 0.0f, 0x1.093654p-118f, 0.0f, 0.0f, 0x1.2da7e4p-5f,
     0x1.6d4fc4p-122f, 0x1.9a880ep-52f, 0x1.c3e0a4p-39f, 0x1.ad2d56p-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.289cap-40f, 0.0f, 0x1.5f8aacp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17188ap-99f, 0x1.188d4ep-121f, 0.0f, 0x1.534762p-82f, 0.0f, 0.0f, 0.0f,
     0x1.487e2p-47f, 0.0f, 0x1.932dccp-76f, 0.0f, 0.0f, 0x1.529772p-85f, 0.0f, 0.0f,
     0x1.016568p-73f, 0x1.feb568p-112f, 0x1.20421p-16f, 0x1.5efcdp-87f,
     0x1.30e0b2p-1f, 0x1.7df0e8p-89f, 0x1.82055ep-21f, 0x1.1d35fep-3f, 0.0f, 0.0f,
     0.0f, 0x1.1be7f8p-101f, 0.0f, 0x1.8e5adcp-21f, 0x1.59b238p-18f, 0x1.7621d8p-118f,
     0x1.5a3cfcp-43f, 0x1.e8d932p-45f, 0x1.14656ep-86f, 0.0f, 0x1.9b5adp-94f, 0.0f,
     0x1.57d1e6p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.addf28p-11f, 0.0f,
     0x1.97d698p-15f, 0.0f, 0.0f, 0.0f, 0x1.72ae62p-113f, 0x1.8dcb4p-76f,
     0x1.1dad2p-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a7c48p-66f, 0x1.90934ep-100f,
     0x1.8e4dfp-14f, 0x1.c3a17cp-72f, 0x1.ec8ce6p-43f, 0x1.54a35ep-100f,
     0x1.0bfe1ap-46f, 0x1.dd2028p-71f, 0x1.1da26ap-17f, 0x1.38e3p-46f,
     0x1.1b2da8p-50f, 0x1.136562p-37f, 0x1.469e1cp-121f, 0.0f, 0x1.382faap-95f, 0.0f,
     0x1.9fc97cp-126f, 0.0f, 0.0f, 0.0f, 0x1.c1030ap-66f, 0x1.a039c8p-60f, 0.0f,
     0x1.e6ad24p-44f, 0.0f, 0.0f, 0x1.e81412p-6f, 0x1.59f502p-62f, 0.0f, 0.0f,
     0x1.7c40bp-125f, 0x1.c8cd44p-58f, 0x1.4a8a16p-124f, 0x1.0dab06p-45f,
     0x1.37d90ep-8f, 0x1.138794p-40f, 0.0f, 0.0f, 0x1.5018f2p-37f, 0.0f, 0.0f,
     0x1.a7fd8ep-75f, 0.0f, 0.0f, 0x1.e289fcp-110f, 0.0f, 0x1.e086ep-94f, 0.0f,
     0x1.97bfbcp-48f, 0.0f, 0x1.b516cep-30f, 0.0f, 0.0f, 0.0f, 0x1.3f4e78p-84f,
     0x1.c1005ap-120f, 0.0f, 0x1.92d7f4p-124f, 0.0f, 0x1.35c9a6p-120f,
     0x1.738924p-22f, 0.0f, 0.0f, 0.0f, 0x1.df125ap-48f, 0.0f, 0x1.ab9f5ep-17f,
     0x1.aa2668p-81f, 0.0f, 0x1.245d6p-13f, 0.0f, 0x1.8aac6ap-113f, 0.0f,
     0x1.e59bf8p-48f, 0.0f, 0x1.9aff7ap-41f, 0x1.fa0f8ap-73f, 0x1.72d896p-103f,
     0x1.188022p-94f, 0x1.6cc242p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f82914p-27f, 0x1.db1af2p-85f, 0x1.cabb76p-97f, 0x1.e1e74ep-28f,
     0.0f, 0x1.6a446cp-36f, 0.0f, 0x1.a7b708p-94f, 0x1.ee5d5ap-70f, 0x1.9c5f1ap-14f,
     0x1.7bd96ep-14f, 0x1.c19faep-60f, 0x1.4d9404p-50f, 0.0f, 0x1.37fd88p-9f,
     0x1.17782cp-108f, 0x1.b6074cp-39f, 0x1.4bb8aap-44f, 0x1.1c1ac6p-72f,
     0x1.88ff72p-35f, 0x1.a9947ep-9f, 0.0f, 0x1.3105c2p-38f, 0.0f, 0x1.8ab644p-36f,
     0x1.a89f48p-124f, 0.0f, 0x1.05a03cp-121f, 0x1.f8c71p-122f, 0x1.ce51dap-67f,
     0x1.efe70cp-108f, 0x1.8f4064p-23f, 0.0f, 0x1.1592b4p-46f, 0.0f, 0x1.c55e4ap-29f,
     0x1.ab5516p-111f, 0.0f, 0.0f, 0x1.6c1e0ap-59f, 0x1.c4801cp-52f, 0x1.859ccap-69f,
     0x1.daab6ep-17f, 0x1.bbcb4ap-34f, 0.0f, 0.0f, 0x1.c784aap-81f, 0x1.d80aap-9f,
     0x1.55feaep-27f, 0x1.49d76ap-110f, 0x1.79d83p-51f, 0x1.331abep-9f,
     0x1.ca0622p-70f, 0.0f, 0x1.775d7ep-33f, 0.0f, 0.0f, 0x1.310d0ap-76f, 0.0f, 0.0f,
     0x1.6e02c8p-48f, 0.0f, 0x1.c5ce1p-50f, 0.0f, 0x1.f34fbcp-99f, 0.0f,
     0x1.7432aap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.28db54p-89f, 0.0f, 0x1.e42bdap-124f,
     0x1.fdc73cp-52f, 0x1.700568p-43f, 0x1.78c6cep-47f, 0.0f, 0.0f, 0x1.1c29f2p-90f,
     0.0f, 0x1.50ff92p-95f, 0.0f, 0.0f, 0x1.cf3b1ep-56f, 0x1.885232p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e88b2p-74f, 0x1.c5a1cp-81f, 0.0f, 0.0f,
     0.0f, 0x1.848af6p-35f, 0x1.2f8ce4p-86f, 0x1.f059e6p-116f, 0.0f, 0x1.6cd2bp-48f,
     0x1.7d0eb2p-105f, 0.0f, 0x1.264d6ep-106f, 0x1.5b41c8p-99f, 0x1.647ec4p-7f, 0.0f,
     0x1.84b538p-73f, 0.0f, 0x1.da54ccp-34f, 0.0f, 0.0f, 0x1.0261ecp-11f, 0.0f,
     0x1.5b558ep-106f, 0.0f, 0.0f, 0x1.6a8fcep-120f, 0.0f, 0.0f, 0.0f,
     0x1.1e4a6cp-46f, 0x1.d55c9p-30f, 0x1.076936p-33f, 0.0f, 0.0f, 0x1.5f5b54p-110f,
     0x1.5064ep-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37d9cp-109f, 0.0f,
     0x1.5b4018p-98f, 0x1.d3176cp-58f, 0x1.6af322p-19f, 0.0f, 0x1.b18fe8p-120f,
     0x1.f09ccap-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b4af8p-32f, 0x1.e91e86p-114f,
     0x1.0762c8p-71f, 0.0f, 0x1.7a220ep-40f, 0.0f, 0x1.563a92p-20f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.63661cp-111f, 0.0f, 0x1.ffc25p-108f, 0.0f, 0x1.ead688p-87f, 0.0f,
     0x1.a7b84ep-1f, 0x1.b90798p-46f, 0.0f, 0.0f, 0.0f, 0x1.7d7a2p-50f,
     0x1.24c8a2p-73f, 0.0f, 0.0f, 0x1.940c8ep-82f, 0.0f, 0.0f, 0x1.627e4ap-4f,
     0x1.5ef608p-36f, 0x1.f17762p-116f, 0.0f, 0.0f, 0x1.1a1064p-39f, 0x1.8918aap-63f,
     0x1.b6d57cp-92f, 0x1.0ff90ep-39f, 0x1.7e1d1cp-93f, 0x1.2f3aa4p-42f, 0.0f,
     0x1.79a42cp-43f, 0x1.e11f64p-70f, 0x1.0249b4p-68f, 0x1.30adfep-58f,
     0x1.bba788p-29f, 0.0f, 0x1.e50116p-21f, 0.0f, 0x1.926fd2p-101f, 0.0f,
     0x1.c7d2d6p-66f, 0x1.f7c556p-3f, 0.0f, 0.0f, 0.0f, 0x1.79a06cp-109f,
     0x1.e7b404p-110f, 0x1.ee8756p-28f, 0x1.b6b2eap-27f, 0x1.91bcacp-95f,
     0x1.ecfedap-5f, 0.0f, 0x1.53fdeep-124f, 0x1.392b54p-114f, 0x1.a16b2cp-46f, 0.0f,
     0x1.6933e4p-50f, 0x1.9d7002p-117f, 0x1.65b6c2p-52f, 0x1.92eb4ap-99f, 0.0f, 0.0f,
     0x1.7360ap-68f, 0x1.54a62ep-49f, 0.0f, 0.0f, 0x1.a8bc1ep-34f, 0.0f,
     0x1.57d8e2p-12f, 0.0f, 0x1.7f4344p-37f, 0.0f, 0x1.224184p-45f, 0x1.7955ecp-114f,
     0x1.11007ep-23f, 0x1.a26d0ap-17f, 0.0f, 0.0f, 0.0f, 0x1.c4ffb6p-103f,
     0x1.5efa78p-55f, 0.0f, 0x1.d6e1e6p-11f, 0x1.3a4e66p-5f, 0.0f, 0.0f,
     0x1.26874p-10f, 0x1.6d2ed2p-39f, 0.0f, 0x1.be41eep-122f, 0.0f, 0.0f,
     0x1.b51216p-70f, 0x1.ef7cd8p-59f, 0x1.7e7ca8p-123f, 0x1.dda14ap-55f, 0.0f, 0.0f,
     0x1.a0851p-10f, 0.0f, 0.0f, 0x1.d2498cp-59f, 0x1.81461cp-106f, 0x1.d635c4p-60f,
     0.0f, 0x1.ffcfd4p-111f, 0x1.7b5622p-61f, 0x1.6946e8p-44f, 0x1.27066cp-46f,
     0x1.e3e28p-15f, 0.0f, 0x1.1786e6p-20f, 0x1.7eca96p-125f, 0.0f, 0.0f, 0.0f,
     0x1.8d95b8p-58f, 0.0f, 0x1.a3dc5cp-3f, 0.0f, 0.0f, 0x1.85e53ap-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cae3e6p-35f, 0x1.7b6f04p-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86f996p-21f, 0x1.c3ef2cp-79f, 0x1.13ac4p-69f, 0x1.c8e02p-29f,
     0x1.4d5134p-12f, 0.0f, 0.0f, 0.0f, 0x1.f1f08ap-79f, 0x1.166f9ap-2f,
     0x1.72ba18p-33f, 0x1.ff178cp-3f, 0.0f, 0x1.29012ep-110f, 0x1.3e9efcp-10f, 0.0f,
     0.0f, 0x1.d5f654p-91f, 0.0f, 0.0f, 0x1.ca6a62p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.197a14p-111f, 0x1.0be854p-35f, 0.0f, 0x1.3ddd74p-99f, 0x1.944bap-102f,
     0x1.85318ap-124f, 0.0f, 0x1.e72da6p-116f, 0.0f, 0.0f, 0x1.9c2c3ep-16f, 0.0f,
     0x1.7bfa44p-60f, 0x1.295688p-78f, 0.0f, 0x1.7a9e02p-121f, 0.0f, 0x1.83a83cp-56f,
     0x1.5ba1bcp-48f, 0x1.9c1d74p-18f, 0x1.a23e3ap-100f, 0.0f, 0x1.4b5e26p-106f,
     0x1.5cfebp-23f, 0x1.f8a44p-99f, 0x1.1d3218p-23f, 0x1.d5644ep-5f, 0x1.60e98cp-46f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5997c8p-120f, 0x1.20a222p-5f, 0x1.fa793cp-100f,
     0x1.5f901p-91f, 0x1.f8906cp-107f, 0.0f, 0.0f, 0x1.acbf5cp-60f, 0x1.1e4c6cp-125f,
     0x1.5b5414p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfd542p-2f, 0.0f, 0.0f,
     0x1.409302p-124f, 0.0f, 0.0f, 0x1.0e823p-91f, 0x1.450538p-4f, 0x1.70e7fp-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8302f6p-85f, 0.0f, 0.0f, 0.0f, 0x1.d525d6p-48f,
     0x1.c01ap-99f, 0x1.3906bcp-23f, 0x1.cb7a12p-120f, 0x1.d7ac86p-106f, 0.0f,
     0x1.b11316p-117f, 0.0f, 0.0f, 0.0f, 0x1.f354cap-119f, 0x1.daa6c6p-81f, 0.0f,
     0.0f, 0.0f, 0x1.0ac4bp-116f, 0x1p0f, 0.0f, 0x1.f8a80ep-45f, 0.0f, 0.0f,
     0x1.31789p-28f, 0x1.f3b766p-32f, 0x1.1e4076p-121f, 0x1.5d42cep-57f,
     0x1.8244a2p-7f, 0x1.1d742cp-122f, 0.0f, 0x1.0f78fcp-105f, 0x1.080edap-73f, 0.0f,
     0x1.73418ap-81f, 0x1.0c2ed2p-98f, 0.0f, 0.0f, 0x1.6c04ccp-32f, 0.0f,
     0x1.086a38p-61f, 0x1.c71a7p-24f, 0x1.a84dbap-45f, 0x1.a1fc8cp-73f,
     0x1.c58d12p-69f, 0.0f, 0.0f, 0.0f, 0x1.327388p-94f, 0.0f, 0x1.e70db8p-68f, 0.0f,
     0x1.32b6dcp-82f, 0x1.8e0afep-85f, 0.0f, 0x1.436d52p-49f, 0x1.9e003ap-126f,
     0x1.3ee678p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4e06p-48f, 0.0f,
     0x1.2abb8ep-27f, 0x1.d6c7ap-73f, 0x1.15d0c6p-100f, 0.0f, 0x1.563dd4p-64f, 0.0f,
     0x1.9c8b7ep-32f, 0x1.144d5p-16f, 0.0f, 0x1.046284p-102f, 0.0f, 0x1.5ddd1ap-125f,
     0x1.1197b2p-17f, 0.0f, 0x1.af17ep-114f, 0x1.287352p-42f, 0.0f, 0x1.edd22cp-104f,
     0.0f, 0.0f, 0.0f, 0x1.79bfaap-71f, 0.0f, 0x1.c7a89p-11f, 0x1.bd9886p-126f,
     0x1.e2706ep-60f, 0.0f, 0.0f, 0x1.28788ep-39f, 0x1.89ee58p-81f, 0x1.63f478p-78f,
     0.0f, 0.0f, 0x1.3596ep-72f, 0x1.e62e88p-6f, 0.0f, 0.0f, 0.0f, 0x1.28195cp-73f,
     0.0f, 0.0f, 0x1.42da12p-68f, 0x1.24cea4p-59f, 0.0f, 0.0f, 0x1.6c24aap-17f,
     0x1.1648a8p-16f, 0x1.fe536p-86f, 0.0f, 0.0f, 0x1.2b0f92p-8f, 0x1.cc8e38p-94f,
     0x1.5e4a32p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a5e76p-16f, 0x1.cdeb94p-62f, 0.0f,
     0x1.d4fcf2p-115f, 0x1.a6b3cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74631ep-104f,
     0x1.7b4306p-69f, 0x1.fe113ap-75f, 0x1.03d0bap-44f, 0.0f, 0x1.16ce56p-66f,
     0x1.ee9bc8p-78f, 0x1.c07812p-32f, 0.0f, 0.0f, 0x1.bd8e5ap-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d711dp-120f, 0x1.5d9258p-66f, 0x1.85fdb2p-41f, 0.0f, 0.0f, 0.0f,
     0x1.736ae6p-80f, 0.0f, 0.0f, 0.0f, 0x1.ab9f8ap-66f, 0.0f, 0x1.6204e8p-57f, 0.0f,
     0x1.760d9ap-60f, 0x1.436912p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93ee34p-79f,
     0x1.832ab2p-91f, 0x1.8111c2p-38f, 0.0f, 0x1.66f86cp-109f, 0x1.b52c94p-9f,
     0x1.fd221ep-109f, 0.0f, 0.0f, 0x1.f478cp-103f, 0.0f, 0.0f, 0.0f, 0x1.7b381ap-65f,
     0x1.7892f6p-80f, 0.0f, 0x1.15cbbap-114f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_fmaxf1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp2);
            carg2 = _mm_add_ss(carg, carg1);
            tmp3 = _mm_cvtss_f32(carg2);
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_fmaxf1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fmaxf1_purecfma bench acc %a\n", global_bench_acc);
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
