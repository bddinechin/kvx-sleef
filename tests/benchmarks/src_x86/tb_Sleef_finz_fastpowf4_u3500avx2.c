/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastpowf4_u3500avx2128.c --function \
 *     Sleef_finz_fastpowf4_u3500avx2128 --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0f, 0.0f, 0x1.d5a74ap-125f, 0x1.fa106ep-75f, 0.0f, 0x1.795d68p-125f,
     0x1.0bcb4p-28f, 0x1.25f36ep-59f, 0.0f, 0x1.6c3e84p-17f, 0x1.f3d4a8p-75f,
     0x1.e77872p-89f, 0.0f, 0.0f, 0.0f, 0x1.4ff644p-18f, 0.0f, 0.0f, 0.0f,
     0x1.3f225ap-54f, 0.0f, 0x1.0b6b36p-101f, 0x1.2e1338p-37f, 0.0f, 0x1.31b0c6p-64f,
     0x1.266128p-51f, 0.0f, 0.0f, 0x1.f09f88p-124f, 0x1.0d6b58p-59f, 0.0f,
     0x1.aff664p-117f, 0x1.e21478p-95f, 0.0f, 0x1.602a3cp-66f, 0x1.a51c12p-67f,
     0x1.59cdfp-95f, 0x1.e77cb4p-115f, 0x1p0f, 0.0f, 0.0f, 0x1.acc788p-105f,
     0x1.5fa296p-43f, 0x1.b8a6cp-79f, 0x1.b66434p-49f, 0x1.e05504p-74f, 0.0f, 0.0f,
     0x1.3d2288p-125f, 0x1.50c9f4p-11f, 0.0f, 0x1.786334p-3f, 0x1.189d0ap-45f,
     0x1.3cc57cp-104f, 0x1.9af8f6p-28f, 0x1.0462bep-123f, 0.0f, 0.0f, 0x1.b26e98p-1f,
     0.0f, 0x1.d4977ap-40f, 0x1.4b2cbp-10f, 0x1.1a0b54p-79f, 0x1.30d3fcp-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.688002p-43f, 0x1.c9b25cp-58f, 0x1.debf58p-123f, 0.0f,
     0x1.119736p-39f, 0x1.d21e64p-86f, 0x1.7eabbcp-98f, 0x1.a7dc1p-21f,
     0x1.ee2864p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e6b9ap-3f, 0.0f, 0x1.5fc9c2p-57f,
     0.0f, 0x1.6ed814p-43f, 0x1.258264p-52f, 0x1.dfdddcp-14f, 0.0f, 0x1.ef9e08p-8f,
     0x1.e95db6p-118f, 0x1.14cf0cp-95f, 0.0f, 0.0f, 0.0f, 0x1.c0426ap-93f,
     0x1.5e7d1ap-94f, 0.0f, 0x1.04d446p-12f, 0x1.d5aeacp-65f, 0.0f, 0x1.49108p-82f,
     0x1.64ad7p-108f, 0x1.6794aap-87f, 0.0f, 0x1.74607cp-28f, 0.0f, 0.0f,
     0x1.63f91p-31f, 0.0f, 0.0f, 0x1.e6c054p-104f, 0x1.4a401ap-6f, 0.0f, 0.0f,
     0x1.a51734p-20f, 0x1.d9cbfp-90f, 0x1.19e36ap-50f, 0.0f, 0x1.533c4ep-39f, 0.0f,
     0x1.77e90cp-90f, 0.0f, 0x1.dfe346p-92f, 0.0f, 0.0f, 0.0f, 0x1.f39884p-67f,
     0x1.8782aap-27f, 0x1.b4cbd8p-100f, 0.0f, 0.0f, 0x1.4a5042p-71f, 0x1.2ac078p-105f,
     0x1.bf5ab4p-53f, 0.0f, 0x1.7832fcp-5f, 0x1.b4d5bap-34f, 0x1.871222p-23f,
     0x1.f757fp-15f, 0.0f, 0.0f, 0x1.4f577ep-122f, 0.0f, 0.0f, 0x1.3229cap-84f,
     0x1.452a58p-115f, 0.0f, 0x1.562752p-23f, 0x1.dcdc3p-56f, 0x1.478fa2p-105f, 0.0f,
     0x1.00caf8p-103f, 0x1.bee61cp-57f, 0x1.1a831p-59f, 0.0f, 0.0f, 0x1.a8aff2p-35f,
     0.0f, 0.0f, 0.0f, 0x1.85620ep-72f, 0x1.fa426p-78f, 0x1.30545ep-6f,
     0x1.55ac64p-13f, 0x1.be375ap-57f, 0x1.0d1b4cp-79f, 0.0f, 0.0f, 0x1.d37148p-48f,
     0x1.f32fdap-11f, 0.0f, 0x1.68f1dep-29f, 0.0f, 0x1.877dep-50f, 0x1.6f9ef4p-55f,
     0.0f, 0x1.491cd2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65de9p-109f, 0x1.bdd834p-81f,
     0x1.931fcep-68f, 0.0f, 0x1.63de0ep-13f, 0x1.3b43dcp-122f, 0.0f, 0.0f,
     0x1.972f32p-109f, 0.0f, 0x1.38a7c8p-120f, 0.0f, 0x1.621de6p-123f, 0.0f,
     0x1.e776dep-32f, 0x1.c195e6p-120f, 0.0f, 0.0f, 0.0f, 0x1.8f0668p-14f,
     0x1.09a17cp-17f, 0x1.01da16p-47f, 0.0f, 0x1.842452p-94f, 0x1.52c7dap-97f, 0.0f,
     0.0f, 0x1.5bb4f4p-107f, 0x1.5c9e84p-63f, 0x1.9bb474p-82f, 0x1.556b76p-110f, 0.0f,
     0.0f, 0x1.e6b83p-48f, 0x1.7d5c0ep-90f, 0x1.6c05fap-11f, 0x1.12c06ep-99f, 0.0f,
     0.0f, 0.0f, 0x1.d21696p-92f, 0.0f, 0x1.4c26b6p-26f, 0.0f, 0x1.6d78f6p-19f,
     0x1.20913p-126f, 0.0f, 0.0f, 0x1.4f351ep-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.075948p-70f, 0.0f, 0.0f, 0x1.9c8cd8p-117f, 0x1.3c40a6p-46f, 0x1.04701ap-81f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3fa2d2p-105f, 0x1.9dd35ep-114f,
     0x1.5e614cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a4346p-101f, 0x1.4f54dp-36f, 0.0f,
     0.0f, 0x1.7f2c5ap-69f, 0x1.177954p-38f, 0x1.10f6bep-77f, 0.0f, 0x1.42888ep-39f,
     0.0f, 0.0f, 0x1.e05134p-75f, 0x1.a4a334p-41f, 0.0f, 0x1.21b0cap-2f, 0.0f, 0.0f,
     0x1.2d1c8ap-62f, 0x1.466906p-94f, 0.0f, 0x1.39d02p-84f, 0.0f, 0.0f,
     0x1.d9a1fep-118f, 0x1.5263d6p-12f, 0x1.bb9dc4p-39f, 0.0f, 0x1.9c7ae2p-55f, 0.0f,
     0.0f, 0x1.4a0002p-35f, 0x1.abc196p-23f, 0x1.bc6288p-9f, 0x1.64794ap-107f, 0.0f,
     0.0f, 0.0f, 0x1.bf05cep-59f, 0x1.293014p-93f, 0.0f, 0x1.10bc8cp-60f, 0.0f,
     0x1.d86fc4p-72f, 0.0f, 0x1.4ee0ecp-50f, 0.0f, 0.0f, 0x1.687742p-94f, 0.0f, 0.0f,
     0.0f, 0x1.117294p-99f, 0x1.3e655ep-122f, 0.0f, 0.0f, 0x1.5c0504p-110f, 0.0f,
     0.0f, 0x1.0d69ecp-99f, 0x1.11c03p-46f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.02235ap-47f,
     0x1.748f9cp-106f, 0x1.8b4246p-81f, 0.0f, 0.0f, 0x1.ce053p-78f, 0.0f,
     0x1.ee10e6p-89f, 0.0f, 0.0f, 0x1.af4254p-124f, 0.0f, 0.0f, 0.0f, 0x1.892306p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.53d3eep-2f, 0x1.98517ap-120f, 0x1.e685f4p-29f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.69aa1p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c72c72p-62f, 0.0f, 0.0f, 0.0f, 0x1.4884a4p-112f, 0.0f, 0x1.561a3ep-20f,
     0x1.cb5f08p-38f, 0.0f, 0x1.7f361ap-42f, 0x1.e89cap-126f, 0.0f, 0x1.464a36p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.836a58p-6f, 0x1.a72b86p-125f, 0x1.f40424p-122f,
     0.0f, 0.0f, 0x1.73924ap-7f, 0.0f, 0x1.333e8p-40f, 0x1.d365fep-60f, 0.0f,
     0x1.029bfcp-83f, 0x1.73a374p-111f, 0x1.e91554p-34f, 0x1.65fd7p-77f, 0.0f, 0.0f,
     0x1.525fc4p-56f, 0x1.ed313ap-63f, 0x1.a0e3d6p-73f, 0.0f, 0x1.5ce404p-102f,
     0x1.87d5b4p-70f, 0x1.5ad3eap-2f, 0.0f, 0.0f, 0x1.fa96a4p-8f, 0.0f,
     0x1.c8ea58p-14f, 0.0f, 0x1.b4158p-59f, 0x1.9c9f6ep-12f, 0.0f, 0.0f,
     0x1.5f6e42p-64f, 0.0f, 0.0f, 0x1.b7b168p-51f, 0x1.cf99f6p-120f, 0x1.d236e8p-80f,
     0.0f, 0.0f, 0.0f, 0x1.f96ecp-119f, 0x1.7f67c2p-71f, 0.0f, 0x1.1eb828p-82f,
     0x1.316e34p-15f, 0x1.64c3c8p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd36d4p-54f, 0x1.6130dcp-120f, 0x1.0cb1b6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.bb533cp-106f, 0x1.b5de06p-94f, 0.0f, 0.0f, 0.0f, 0x1.8642cp-4f, 0.0f, 0.0f,
     0.0f, 0x1.bccbfcp-73f, 0x1.daffacp-106f, 0.0f, 0x1.f2b278p-29f, 0x1.455f3ap-88f,
     0.0f, 0x1.e9bfacp-102f, 0.0f, 0.0f, 0.0f, 0x1.2534dep-11f, 0.0f, 0x1.bda342p-89f,
     0.0f, 0x1.cd34bp-56f, 0x1.978a42p-78f, 0x1.279efep-99f, 0x1.ed308cp-23f,
     0x1.67862ap-107f, 0.0f, 0x1.e04c6p-21f, 0.0f, 0x1.efc612p-9f, 0x1.197d0ap-114f,
     0.0f, 0x1.6fe0d4p-28f, 0x1.0d64ccp-55f, 0.0f, 0x1.937428p-21f, 0.0f, 0.0f,
     0x1.9e6c4ap-36f, 0x1.e88652p-23f, 0x1.265224p-103f, 0.0f, 0x1.fb20aap-126f, 0.0f,
     0x1.271d7ep-72f, 0x1.28ea3cp-126f, 0x1.cf16dep-49f, 0x1.4f8f3cp-28f, 0.0f, 0.0f,
     0.0f, 0x1.5d372ap-18f, 0x1.85b056p-65f, 0.0f, 0.0f, 0x1.816afcp-88f,
     0x1.529af2p-24f, 0x1.a7e8cep-103f, 0x1.590868p-9f, 0x1.1aa14ep-89f,
     0x1.e0389ap-63f, 0.0f, 0.0f, 0.0f, 0x1.573c1p-9f, 0x1.e54c88p-12f, 0.0f,
     0x1.e05956p-63f, 0.0f, 0.0f, 0x1.bf953p-17f, 0x1.98686p-33f, 0.0f,
     0x1.24c296p-87f, 0x1.c67996p-3f, 0x1.c42afap-103f, 0x1.e04f1ep-123f,
     0x1.8ed052p-52f, 0x1.70e3fap-17f, 0x1.4f9c9ap-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.88eeaep-30f, 0x1.c277dep-73f, 0x1.20f10ep-45f, 0.0f, 0.0f,
     0x1.f0acf2p-12f, 0x1.6f7378p-39f, 0x1.080504p-34f, 0.0f, 0.0f, 0x1.418c24p-35f,
     0x1.6b7356p-113f, 0x1.0e77f4p-29f, 0.0f, 0.0f, 0x1.b99826p-19f, 0.0f,
     0x1.a17078p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6c1828p-114f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9b0372p-110f, 0.0f, 0.0f, 0x1.c13a4ep-18f, 0.0f, 0x1.c49e26p-16f,
     0x1.45aeaep-104f, 0x1.cfd51p-44f, 0.0f, 0.0f, 0x1.0bb33ap-92f, 0x1.10b2bep-27f,
     0x1.b39de8p-40f, 0x1.73ec92p-102f, 0.0f, 0x1.f131dcp-91f, 0.0f, 0.0f,
     0x1.a1bc44p-4f, 0x1.1f0786p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.667f52p-87f,
     0x1.ad92d8p-88f, 0x1.bd7e0ep-50f, 0x1.6bac4ep-125f, 0x1.0fcd6cp-118f, 0.0f,
     0x1.3f2ef4p-47f, 0.0f, 0x1.e7f408p-111f, 0.0f, 0.0f, 0x1.6ae15ap-33f, 0.0f, 0.0f,
     0x1.9372ccp-105f, 0x1.e5dec2p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9ba6cp-21f, 0.0f, 0x1.957574p-123f, 0x1.22f054p-72f, 0.0f,
     0.0f, 0x1.f622aap-26f, 0.0f, 0.0f, 0x1.99f59ap-84f, 0x1.32222cp-65f,
     0x1.4c4262p-113f, 0x1.b4c2dep-25f, 0.0f, 0.0f, 0x1.8ab6a8p-80f, 0x1.ee551cp-34f,
     0x1.b2d5d2p-78f, 0x1.83e94ap-61f, 0x1.5802p-108f, 0.0f, 0x1.221822p-79f, 0.0f,
     0.0f, 0x1.885142p-92f, 0x1.5f3074p-114f, 0x1.b8393ap-84f, 0x1.377b96p-63f, 0.0f,
     0.0f, 0x1.d64288p-99f, 0.0f, 0.0f, 0.0f, 0x1.9203c4p-25f, 0.0f, 0x1.e931acp-38f,
     0.0f, 0.0f, 0x1.86856cp-88f, 0.0f, 0x1.6e5b72p-25f, 0.0f, 0x1.5b382p-113f,
     0x1.da4a78p-37f, 0.0f, 0.0f, 0.0f, 0x1.96b864p-35f, 0x1.23b46p-60f, 0.0f,
     0x1.5cd99ap-92f, 0x1.5b6c9cp-12f, 0x1.2932a4p-65f, 0.0f, 0.0f, 0x1.5b2fcap-45f,
     0x1.0c090ep-39f, 0x1.f46a4ap-97f, 0x1.0d92ecp-7f, 0x1.5b1b3p-72f,
     0x1.033298p-91f, 0x1.59c692p-12f, 0x1.6cfd6cp-116f, 0.0f, 0x1.a331b6p-33f,
     0x1.1be412p-45f, 0x1.93095p-17f, 0.0f, 0x1.a424c6p-120f, 0.0f, 0x1.8e507ep-117f,
     0.0f, 0x1.fed9f4p-118f, 0.0f, 0.0f, 0.0f, 0x1.9f1572p-100f, 0.0f, 0.0f,
     0x1.1b982p-108f, 0x1.4d2818p-101f, 0x1.570188p-103f, 0x1.3dcb64p-13f,
     0x1.b8534ep-83f, 0.0f, 0.0f, 0x1.4f3766p-83f, 0x1.4b32dep-92f, 0x1.d380e4p-113f,
     0x1.d414c6p-86f, 0x1.e3e9b6p-54f, 0.0f, 0x1.3c002ep-100f, 0.0f, 0x1.b0e1a2p-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbc3aap-48f, 0.0f,
     0x1.bf0eacp-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0df0cp-118f, 0.0f,
     0x1.383ac2p-55f, 0x1.49bc46p-14f, 0x1.d4da7cp-11f, 0x1.2b9226p-73f,
     0x1.9cdaf2p-46f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.6353dep-70f, 0x1.ae43cep-52f,
     0.0f, 0.0f, 0x1.16b11p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a34184p-120f,
     0.0f, 0.0f, 0x1.0ad4bcp-126f, 0.0f, 0x1.8bdae8p-111f, 0.0f, 0.0f, 0x1.1e8a9p-25f,
     0.0f, 0x1.4841d6p-80f, 0.0f, 0.0f, 0x1.35f66p-101f, 0x1.4b287ap-70f,
     0x1.e333fap-71f, 0x1.f9d598p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.347408p-125f, 0x1.d9057ap-20f, 0x1.8c66dep-104f, 0x1.c38c98p-40f,
     0x1.2220ep-26f, 0.0f, 0x1.c65cep-122f, 0.0f, 0.0f, 0.0f, 0x1.c34f42p-95f,
     0x1.a115ccp-31f, 0.0f, 0x1.ee7088p-91f, 0x1.18e838p-25f, 0x1.1ce1eep-58f,
     0x1.7dd18ap-70f, 0x1.a44e2ap-13f, 0x1.ab37fcp-99f, 0.0f, 0x1.671746p-39f, 0.0f,
     0.0f, 0.0f, 0x1.815498p-116f, 0.0f, 0.0f, 0.0f, 0x1.243cccp-89f, 0.0f,
     0x1.64edeap-61f, 0.0f, 0x1.fee7f6p-86f, 0x1.444c64p-67f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9044dep-61f, 0.0f, 0.0f, 0x1.efc26ap-60f, 0x1.ad5304p-55f, 0.0f, 0.0f,
     0x1.517d0ep-75f, 0x1.9e914p-48f, 0x1.04a4f6p-82f, 0x1.6fdca2p-14f, 0.0f, 0.0f,
     0x1.0151ep-12f, 0x1.baf8bp-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2c0e2p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fcdab2p-103f, 0x1.e60ffcp-87f, 0x1.ee12ap-36f, 0.0f, 0.0f,
     0.0f, 0x1.22d882p-125f, 0.0f, 0x1.c88398p-59f, 0.0f, 0.0f, 0x1.affd5ap-7f,
     0x1.03be6ap-66f, 0x1.15f004p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7cc498p-88f,
     0x1.ddfcd2p-102f, 0x1.97530cp-2f, 0.0f, 0.0f, 0x1.67442ep-61f, 0.0f, 0.0f,
     0x1.3a84b8p-61f, 0.0f, 0.0f, 0.0f, 0x1.46f8f4p-11f, 0x1.ca6696p-112f, 0.0f,
     0x1.128912p-93f, 0x1.2c2054p-50f, 0.0f, 0.0f, 0x1.8c71ecp-120f, 0x1.a4d832p-56f,
     0x1.24c23cp-116f, 0x1.3f3424p-2f, 0.0f, 0.0f, 0.0f, 0x1.623352p-28f,
     0x1.1da368p-32f, 0x1.952d84p-30f, 0x1.e8e00ep-107f, 0x1.aad11ep-109f,
     0x1.c94922p-119f, 0.0f, 0.0f, 0.0f, 0x1.075e66p-116f, 0.0f, 0x1.397108p-37f,
     0x1.03306p-76f, 0x1.d7e8d8p-65f, 0.0f, 0.0f, 0x1.148ce4p-47f, 0.0f,
     0x1.7f48bcp-81f, 0x1.cad1e8p-3f, 0.0f, 0.0f, 0.0f, 0x1.871e7ap-106f, 0.0f, 0.0f,
     0x1.1d1944p-116f, 0x1.7059e6p-86f, 0.0f, 0x1.3136c2p-48f, 0x1.8a2a2ep-82f, 0.0f,
     0x1.d316ap-123f, 0x1.44c858p-124f, 0.0f, 0x1.3ed81ap-115f, 0x1.0eee12p-98f,
     0x1.faba64p-18f, 0.0f, 0.0f, 0.0f, 0x1.2bc458p-17f, 0.0f, 0x1.cd4132p-23f,
     0x1.35d4a2p-73f, 0.0f, 0x1.f426ccp-116f, 0.0f, 0.0f, 0.0f, 0x1.e1225ep-61f,
     0x1.358922p-105f, 0.0f, 0x1.ed38ecp-7f, 0.0f, 0.0f, 0x1.4d866ep-35f,
     0x1.73b2dap-115f, 0x1.858386p-116f, 0x1.1b118cp-29f, 0x1.6ed554p-6f, 0.0f,
     0x1.56dc34p-8f, 0.0f, 0x1.76847ap-111f, 0.0f, 0x1.a52336p-103f, 0x1.bd1598p-50f,
     0x1.5621a4p-36f, 0x1.93db08p-63f, 0.0f, 0x1.a50362p-5f, 0x1.989d9ep-32f, 0.0f,
     0x1.dbd8e6p-34f, 0x1.d7597p-74f, 0.0f, 0.0f, 0x1.bba2e8p-120f, 0.0f,
     0x1.b10bcep-72f, 0.0f, 0x1.7e788p-2f, 0x1.1096b4p-18f, 0x1.d101b6p-123f, 0.0f,
     0x1.d35502p-97f, 0x1.d3df42p-54f, 0x1.64f404p-118f, 0.0f, 0x1.a69576p-54f,
     0x1.eece0cp-69f, 0x1.f98b1p-23f, 0.0f, 0.0f, 0x1.e435e2p-16f, 0.0f,
     0x1.020e98p-115f, 0.0f, 0x1.6edcdp-121f, 0.0f, 0x1.94550ep-24f, 0x1.a23eecp-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.329e08p-64f, 0x1.7bf444p-106f, 0.0f,
     0x1.b558aep-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2be482p-10f, 0.0f, 0.0f, 0.0f,
     0x1.c637dp-91f, 0x1.4f5ae4p-109f, 0x1.021936p-33f, 0x1.50a28p-43f,
     0x1.e897cp-34f, 0x1.befdd4p-64f, 0x1.d48deep-124f, 0x1.b6a8dap-41f, 0.0f, 0.0f,
     0x1.b61da8p-32f, 0x1.aa0742p-37f, 0x1.e8932ep-22f, 0.0f, 0x1.d5115cp-49f, 0.0f,
     0x1.923434p-67f, 0x1.cf881ap-96f, 0.0f, 0x1.5a6aeap-66f, 0x1.2ef0cep-114f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.a6f54ap-74f, 0x1.5bbdcap-116f, 0.0f, 0x1.e9ffc4p-68f, 0.0f,
     0x1.6007ecp-117f, 0x1.ca9868p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f1c6dp-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a7c0ep-34f, 0x1.9b2ddp-10f,
     0.0f, 0.0f, 0.0f, 0x1.8052dcp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7dfa8p-42f,
     0x1.9a8944p-28f, 0x1.0e1d6ap-116f, 0x1.016572p-57f, 0.0f, 0.0f, 0.0f,
     0x1.58ebcp-97f, 0.0f, 0.0f, 0.0f, 0x1.42dcfp-25f, 0x1.3a0eecp-54f,
     0x1.3d123cp-100f, 0x1.e9330ep-107f, 0.0f, 0x1.0a7932p-56f, 0x1.acff12p-107f,
     0x1.d8584ep-93f, 0.0f, 0.0f, 0x1.df2122p-110f, 0.0f, 0x1.780666p-41f,
     0x1.761072p-103f, 0.0f, 0.0f, 0x1.10044ep-115f, 0.0f, 0.0f, 0.0f,
     0x1.3e4a14p-124f, 0x1.5d2592p-47f, 0x1.16bbecp-112f, 0.0f, 0x1.7fa178p-85f,
     0x1.3fc288p-76f, 0x1.f629fcp-106f, 0x1.531634p-125f, 0x1.765084p-24f,
     0x1.375674p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.09605ap-98f,
     0x1.d5eb92p-74f, 0.0f, 0.0f, 0.0f, 0x1.20c856p-97f, 0x1.5a000ap-21f, 0.0f, 0.0f,
     0x1.22258ep-17f, 0.0f, 0.0f, 0x1.b58a3ap-105f, 0x1.6c806cp-70f, 0x1.5a4b0ep-18f,
     0.0f, 0x1.898304p-53f, 0.0f, 0x1.e4312p-50f, 0x1.91bc72p-56f, 0x1.145206p-35f,
     0x1.4bb8f4p-95f, 0x1.a5b3dep-99f, 0x1.36db86p-113f, 0x1.bd47f4p-43f,
     0x1.69cc84p-7f, 0x1.3980bep-57f, 0x1.111a78p-125f, 0x1.2feab4p-77f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.90765p-94f, 0.0f, 0.0f, 0.0f, 0x1.1f0c0ep-94f, 0.0f, 0.0f,
     0.0f, 0x1.817f14p-38f, 0.0f, 0.0f, 0x1.c1fe9ep-100f, 0.0f, 0.0f, 0x1.b6ed64p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3956e6p-64f, 0x1.a2d06p-124f, 0x1.b98acep-65f, 0.0f,
     0.0f, 0x1.ffdf94p-1f, 0.0f, 0x1.4ea704p-9f, 0.0f, 0.0f, 0.0f, 0x1.280186p-79f,
     0x1.4d3894p-113f, 0x1.b39468p-84f, 0x1.7b9d98p-68f, 0x1.781f66p-93f, 0.0f, 0.0f,
     0x1.f3dd52p-89f, 0.0f, 0x1.734ec8p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c20572p-67f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.bfab4ap-37f, 0.0f,
     0x1.2e7448p-76f, 0x1.2856f8p-32f, 0.0f, 0.0f, 0.0f, 0x1.7fb622p-34f,
     0x1.0ad17p-54f, 0x1.4a2d82p-39f, 0x1.3701a8p-52f, 0x1.e88176p-11f, 0.0f,
     0x1.ff634ap-93f, 0.0f, 0.0f, 0.0f, 0x1.53f8c6p-42f, 0x1.405fecp-49f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bdb226p-110f, 0.0f, 0.0f, 0x1.d4262ap-51f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d30cf2p-17f, 0.0f, 0x1.561cc4p-116f, 0.0f, 0x1.c32bbep-4f,
     0x1.3b92a6p-81f, 0.0f, 0.0f, 0x1.86cab8p-94f, 0x1.7d5804p-92f, 0x1.76034ep-55f,
     0x1.9b914ep-64f, 0.0f, 0x1.05ef54p-14f, 0.0f, 0x1.9cdee6p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8941ap-73f, 0x1.f85ef6p-96f, 0.0f, 0.0f,
     0x1.1e8444p-79f, 0x1.9ceabep-105f, 0.0f, 0.0f, 0x1.e6c9aep-64f, 0x1.d210acp-85f,
     0x1.5c7648p-3f, 0x1.2f5cp-79f, 0.0f, 0.0f, 0x1.14199p-30f, 0.0f, 0.0f, 0.0f,
     0x1.d7d67cp-95f, 0x1.d41cd6p-100f, 0x1.bb9958p-18f, 0x1.c50a66p-91f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f3b4b4p-74f, 0.0f, 0.0f, 0x1.b129bap-24f, 0x1.965de4p-51f, 0.0f,
     0.0f, 0x1.15a57ap-2f, 0.0f, 0x1.61b998p-102f, 0.0f, 0.0f, 0x1.437e36p-90f,
     0x1.688ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d0dc6p-77f, 0.0f, 0.0f,
     0x1.dad8d6p-45f, 0.0f, 0x1.84c03ap-126f, 0.0f, 0x1.8abf0cp-57f, 0x1.fc45c8p-17f,
     0.0f, 0x1.1ec352p-78f, 0.0f, 0.0f, 0x1.cccf5p-34f, 0x1.5bf3cap-95f, 0.0f,
     0x1.8f78a2p-112f, 0.0f, 0.0f, 0x1.b47846p-58f, 0x1.1e279p-57f, 0.0f, 0.0f, 0.0f,
     0x1.bde974p-8f, 0x1.e133b6p-46f, 0.0f, 0.0f, 0x1.ccf3a2p-25f, 0x1.c5f102p-20f,
     0x1.0947ep-105f, 0x1.eec29p-45f, 0x1.da47aap-27f, 0x1.e63bap-94f,
     0x1.1db006p-94f, 0.0f, 0.0f, 0.0f, 0x1.fd2a36p-3f, 0.0f, 0x1.ac548ap-78f, 0.0f,
     0x1.232768p-42f, 0.0f, 0x1.06c5ep-33f, 0.0f, 0x1.169f3ap-85f, 0.0f,
     0x1.8cd5f8p-41f, 0.0f, 0.0f, 0x1.c7082cp-80f, 0x1.73dd58p-22f, 0x1.610b9ap-83f,
     0.0f, 0.0f, 0x1.f32574p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a7d62p-6f,
     0x1.1ee3dep-108f, 0x1.d605b4p-45f, 0x1.e339cep-84f, 0.0f, 0x1.ac2666p-124f, 0.0f,
     0x1.a30bf4p-84f, 0x1.0afe56p-50f, 0x1.62d2fep-66f, 0.0f, 0.0f, 0.0f,
     0x1.930a08p-78f, 0.0f, 0.0f, 0x1.fe0d34p-4f, 0.0f, 0.0f, 0.0f, 0x1.c4c4e2p-56f,
     0x1.d17e9ep-126f, 0x1.a0295ep-18f, 0x1.7cc192p-4f, 0x1.7636dp-24f,
     0x1.4474f4p-56f, 0x1.9aa91cp-59f, 0x1.a037bap-1f, 0.0f, 0x1.6c0afap-118f, 0.0f,
     0.0f, 0x1.9c3d1ap-66f, 0.0f, 0x1.7fc79ap-35f, 0x1.258016p-30f, 0x1.efe898p-58f,
     0.0f, 0.0f, 0.0f, 0x1.3d401ep-83f, 0.0f, 0.0f, 0.0f, 0x1.44acdp-101f,
     0x1.abd992p-79f, 0x1.37a39ap-76f, 0x1.0ac2b2p-57f, 0x1.b2406ap-122f,
     0x1.2d33d8p-101f, 0.0f, 0.0f, 0x1.b77386p-33f, 0x1.1b39dp-46f, 0.0f,
     0x1.a0a4a4p-101f, 0x1.940fa4p-115f, 0.0f, 0x1.7d3088p-100f, 0.0f,
     0x1.037f94p-97f, 0x1.7804e4p-57f, 0.0f, 0.0f, 0.0f, 0x1.a8301ep-17f,
     0x1.c6b10ep-14f, 0.0f, 0x1.7809a2p-30f, 0.0f, 0.0f, 0x1.90213ep-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.73f152p-7f, 0.0f, 0x1.c0394p-44f, 0.0f, 0.0f, 0.0f,
     0x1.0cdfc2p-78f, 0x1.543f56p-47f, 0.0f, 0.0f, 0x1.8daabp-106f, 0x1.15d88p-62f,
     0.0f, 0.0f, 0.0f, 0x1.44d124p-107f, 0x1.af67e2p-88f, 0.0f, 0x1.8be78ap-95f, 0.0f,
     0.0f, 0x1.ce462ep-91f, 0x1.2dac68p-111f, 0.0f, 0x1.13643cp-117f, 0.0f,
     0x1.2fc37ap-122f, 0x1.f3a81cp-91f, 0.0f, 0.0f, 0.0f, 0x1.17e59ep-94f, 0.0f,
     0x1.90d8bp-42f, 0.0f, 0x1.c844bep-46f, 0.0f, 0.0f, 0x1.b9b6d8p-71f,
     0x1.5b0decp-113f, 0x1.738938p-65f, 0x1.55ca82p-8f, 0.0f, 0x1.5f4f48p-104f, 0.0f,
     0x1.888276p-97f, 0x1.a15b36p-30f, 0.0f, 0x1.531faap-11f, 0x1.0e5934p-58f, 0.0f,
     0x1.11a2f2p-5f, 0x1.ea024p-120f, 0x1.8d226cp-40f, 0.0f, 0x1.dc5602p-4f, 0.0f,
     0x1.e4c3f6p-76f, 0x1.31bf72p-116f, 0.0f, 0.0f, 0x1.d5fee4p-14f, 0x1.e25638p-80f,
     0x1.6096d6p-40f, 0x1.d42ce6p-107f, 0.0f, 0x1.6233dp-106f, 0.0f, 0.0f,
     0x1.be1c6ep-80f, 0.0f, 0.0f, 0.0f, 0x1.70f9cp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94d486p-20f, 0x1.7446cap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c19d72p-12f, 0x1.7a1e7ap-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ac32ep-48f, 0x1.012ef4p-31f, 0x1.493426p-17f, 0x1.b8f11p-46f, 0.0f, 0.0f,
     0x1.581deep-42f, 0.0f, 0.0f, 0x1.80ba3cp-19f, 0.0f, 0x1.01a648p-38f, 0.0f,
     0x1.b345e2p-109f, 0x1.95c988p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3e95ep-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14786ap-61f,
     0x1.da902cp-18f, 0.0f, 0x1.d035c6p-71f, 0.0f, 0x1.7b808cp-4f, 0.0f, 0.0f, 0.0f,
     0x1.3e7d34p-100f, 0x1.e4cacep-24f, 0x1.fc8b14p-50f, 0x1.fcfc9cp-61f, 0.0f,
     0x1.d0f954p-115f, 0.0f, 0.0f, 0.0f, 0x1.35c75ep-105f, 0x1.a60bcp-10f, 0.0f, 0.0f,
     0.0f, 0x1.8ca0fcp-93f, 0x1.2ae566p-67f, 0x1.510db6p-121f, 0x1.9e9c78p-75f, 0.0f,
     0.0f, 0x1.70a54ap-14f, 0x1.0fe86cp-63f, 0x1.00ab7ep-51f, 0x1.9e4dfep-16f,
     0x1.dd8b38p-36f, 0x1.6170bcp-18f, 0x1.0a31dep-50f, 0x1.ef6d82p-30f,
     0x1.ea964ep-32f, 0.0f, 0x1.4807aap-104f, 0x1.7b8b82p-98f, 0x1.943456p-82f, 0.0f,
     0x1.d43876p-97f, 0x1.7561a6p-118f, 0.0f, 0x1.f8a95ap-88f, 0.0f, 0x1.cc2b4p-108f,
     0.0f, 0.0f, 0x1.34400cp-16f, 0.0f, 0.0f, 0x1.08cb4ep-108f, 0x1.5473dcp-68f, 0.0f,
     0.0f, 0x1.196ac6p-93f, 0.0f, 0.0f, 0x1.3eecfp-37f, 0.0f, 0.0f, 0x1.d71358p-8f,
     0.0f, 0.0f, 0x1.903a5cp-94f, 0.0f, 0x1.803eb4p-110f, 0.0f, 0x1.d237fap-38f, 0.0f,
     0x1.0f91bcp-82f, 0x1.520e8p-25f, 0.0f, 0x1.a53248p-30f, 0.0f, 0x1.a262ccp-108f,
     0.0f, 0x1.87c70ep-9f, 0x1.6971aap-11f, 0.0f, 0x1.bcac24p-101f, 0.0f, 0.0f, 0.0f,
     0x1.632adp-5f, 0x1.22102ap-22f, 0x1.f1c70cp-18f, 0.0f, 0x1.2f74a8p-21f,
     0x1.969c9ep-60f, 0.0f, 0x1.172ae2p-13f, 0x1.3f6ce2p-93f, 0x1.4f97aap-109f, 0.0f,
     0x1.03f818p-124f, 0x1.c9f5ep-91f, 0.0f, 0x1.1b8612p-75f, 0x1.50196ep-100f,
     0x1.a3208cp-51f, 0.0f, 0x1.6c15d2p-107f, 0.0f, 0x1.ec1792p-114f, 0x1.598e02p-91f,
     0x1.15aaa2p-117f, 0.0f, 0x1.62fd98p-45f, 0.0f, 0.0f, 0.0f, 0x1.d01c2p-31f,
     0x1.5cee6p-111f, 0x1.8e4da4p-71f, 0.0f, 0x1.a240f2p-103f, 0.0f, 0x1.82a6ecp-22f,
     0x1.9514fap-95f, 0.0f, 0x1.f2331cp-119f, 0x1.c71d5ap-82f, 0.0f, 0x1.98403p-9f,
     0.0f, 0.0f, 0x1.2a2a18p-7f, 0x1.9cde84p-32f, 0.0f, 0.0f, 0x1.335652p-63f, 0.0f,
     0.0f, 0x1.5976d2p-100f, 0.0f, 0x1.11bed4p-101f, 0.0f, 0x1.c3728ep-4f, 0.0f, 0.0f,
     0x1.381bbp-108f, 0x1.d437dcp-33f, 0x1.0a932ap-81f, 0x1.84713ap-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1b58acp-106f, 0x1.1cd4e4p-10f, 0x1.8e020ep-69f, 0x1.84904ap-87f,
     0x1.26032ap-15f, 0x1.429e86p-61f, 0x1.07bba6p-119f, 0x1.ba5052p-97f,
     0x1.01498ap-50f, 0.0f, 0.0f, 0x1.4e79eep-125f, 0.0f, 0x1.670d16p-94f,
     0x1.c2344ap-91f, 0x1.efc832p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.47798ap-76f, 0.0f,
     0.0f, 0x1.7a445ep-53f, 0.0f, 0x1.f63842p-76f, 0x1.bbfd64p-53f, 0x1.dc7414p-110f,
     0x1.14adeap-23f, 0x1.5a05d8p-92f, 0.0f, 0.0f, 0x1.956368p-36f, 0x1.80a9cp-32f,
     0x1.23def6p-5f, 0x1.2f4984p-112f, 0.0f, 0x1.8abf82p-6f, 0x1.708164p-105f, 0.0f,
     0x1.471facp-74f, 0x1.9c3388p-74f, 0x1.9c02d8p-91f, 0.0f, 0x1.81b674p-80f, 0.0f,
     0x1.cbc51cp-113f, 0.0f, 0.0f, 0x1.28d84p-67f, 0x1.e65b42p-47f, 0x1.a3096cp-3f,
     0x1.d2d6b6p-103f, 0.0f, 0x1.61b642p-57f, 0.0f, 0x1.993c8ap-30f, 0x1.79ee14p-115f,
     0.0f, 0x1.64824cp-19f, 0.0f, 0x1.75748ep-16f, 0x1.760124p-24f, 0x1.e37076p-19f,
     0x1.139084p-120f, 0x1.e2a5e6p-107f, 0.0f, 0.0f, 0x1.02d79ap-21f, 0x1.55b404p-82f,
     0.0f, 0.0f, 0.0f, 0x1.890fb4p-82f, 0.0f, 0x1.4fd5a4p-112f, 0.0f, 0x1.508fa2p-5f,
     0x1.36b5c4p-120f, 0x1.a8276ap-124f, 0x1.f6f5f8p-109f, 0.0f, 0x1.e73e82p-68f,
     0.0f, 0x1.c511fep-23f, 0x1.1b554p-57f, 0x1.05b93ep-106f, 0.0f, 0x1.181b7cp-122f,
     0x1.a7e7d4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.074aa2p-58f,
     0x1.fbd18ep-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6fa3bcp-98f, 0.0f,
     0x1.abf06ap-49f, 0.0f, 0x1.68b858p-102f, 0.0f, 0x1.2ed2bp-12f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58d12ap-67f, 0x1.99016ap-118f, 0x1.2570fep-73f, 0x1.996e96p-88f,
     0x1.b2f1bep-104f, 0.0f, 0x1.83711ap-33f, 0.0f, 0x1.118214p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4adbc4p-72f, 0.0f, 0x1.2973ccp-101f, 0x1.d4d7c6p-123f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb1aaep-87f, 0.0f, 0x1.ad36cep-116f,
     0.0f, 0x1.5d97e2p-23f, 0x1.ca9e18p-10f, 0x1.c7975ep-71f, 0.0f, 0.0f,
     0x1.078c5ep-32f, 0.0f, 0x1.5d22cep-61f, 0x1.f5c54p-44f, 0.0f, 0x1.2ed99ap-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.bae406p-98f, 0.0f, 0x1.e75afp-67f, 0x1.d5053cp-98f,
     0.0f, 0x1.f511dap-94f, 0x1.b95d96p-106f, 0x1.f14f82p-112f, 0x1.19ae2cp-87f,
     0x1.af5936p-21f, 0x1.3b5efp-123f, 0x1.5e4e72p-50f, 0.0f, 0.0f, 0x1.b809a2p-111f,
     0.0f, 0x1.a18fep-43f, 0.0f, 0x1.d41dfap-109f, 0x1.423616p-123f, 0.0f,
     0x1.e22a46p-123f, 0.0f, 0.0f, 0x1.e45cap-28f, 0x1.920af2p-58f, 0x1.c8a3d2p-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ce45ap-37f, 0.0f, 0.0f, 0x1.30f8dap-54f,
     0x1.897192p-47f, 0x1.bab98p-100f, 0x1.0c2f4cp-55f, 0.0f, 0x1.1a9beap-81f, 0.0f,
     0x1.e41744p-27f, 0.0f, 0.0f, 0x1.5da7c8p-20f, 0x1.0223p-94f, 0.0f, 0.0f,
     0x1.782b8p-66f, 0x1.8e291p-70f, 0x1.dc9b02p-64f, 0.0f, 0.0f, 0.0f,
     0x1.eafa54p-59f, 0.0f, 0.0f, 0x1.9a620cp-32f, 0.0f, 0.0f, 0.0f, 0x1.2228a6p-116f,
     0x1.28419p-124f, 0x1.be87bap-52f, 0x1.f0eb1cp-83f, 0.0f, 0x1.d84c94p-101f,
     0x1.ee3a32p-120f, 0x1.c0e846p-67f, 0x1.1ea7dp-66f, 0.0f, 0x1.0d8688p-121f,
     0x1.13e618p-75f, 0.0f, 0x1.c3889ap-90f, 0.0f, 0.0f, 0x1.049a2ap-60f,
     0x1.a8a99cp-71f, 0.0f, 0x1.f834b2p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.168deap-35f, 0.0f, 0x1.a70a4p-23f, 0x1.eaa86p-32f, 0x1.b2b12ap-78f, 0.0f,
     0.0f, 0.0f, 0x1.05ef5ep-88f, 0x1.ddab74p-118f, 0.0f, 0x1.c7601cp-106f,
     0x1.37815ap-56f, 0x1.1b47c8p-51f, 0.0f, 0.0f, 0.0f, 0x1.e4afc4p-109f, 0.0f,
     0x1.c9ec26p-26f, 0.0f, 0x1.6f02ap-28f, 0.0f, 0.0f, 0x1.fe861ap-11f,
     0x1.624688p-22f, 0.0f, 0x1.15262ep-62f, 0x1.931a98p-82f, 0x1.90231cp-105f, 0.0f,
     0.0f, 0x1.4d5e9p-56f, 0.0f, 0.0f, 0x1.30a314p-117f, 0.0f, 0.0f, 0x1.f0aefp-107f,
     0x1.57be34p-79f, 0x1.7b6p-29f, 0x1.0d3e66p-81f, 0x1.3ff116p-74f,
     0x1.09c092p-104f, 0x1.142238p-16f, 0.0f, 0.0f, 0x1.0749d2p-83f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87452ap-1f, 0.0f, 0.0f, 0x1.36de66p-108f, 0x1.78a72ap-40f, 0.0f,
     0x1.7cd51ap-42f, 0x1.87c5cap-28f, 0.0f, 0.0f, 0x1.aeac5ap-89f, 0x1.498f58p-38f,
     0.0f, 0x1.62da5p-91f, 0.0f, 0.0f, 0x1.f63ee2p-89f, 0.0f, 0.0f, 0x1p0f,
     0x1.128892p-12f, 0.0f, 0x1.2b540ep-30f, 0.0f, 0.0f
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_fastpowf4_u3500avx2128(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_finz_fastpowf4_u3500avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fastpowf4_u3500avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
