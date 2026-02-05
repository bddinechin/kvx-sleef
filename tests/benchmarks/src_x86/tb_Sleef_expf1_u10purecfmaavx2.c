/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expf1_u10purecfma.c --function Sleef_expf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.8a20bcp-12f, 0.0f, 0x1.2fc46cp-86f, 0x1.e6ffa2p-34f, 0.0f, 0x1.8009bep-101f,
     0x1.f87626p-125f, 0.0f, 0.0f, 0.0f, 0x1.27de1ep-53f, 0x1.9f9f6ep-28f,
     0x1.0bc9bep-17f, 0x1.0f48a2p-110f, 0.0f, 0x1.67152cp-46f, 0.0f, 0x1.a4850ep-116f,
     0x1.f27744p-66f, 0.0f, 0.0f, 0.0f, 0x1.735c12p-4f, 0.0f, 0x1.3a4fap-2f, 0.0f,
     0.0f, 0.0f, 0x1.e6ee54p-80f, 0.0f, 0.0f, 0.0f, 0x1.a4f59ap-18f, 0x1.9f4e6ep-36f,
     0x1.12dd1ap-27f, 0.0f, 0.0f, 0.0f, 0x1.801a26p-44f, 0.0f, 0.0f, 0x1.e38142p-112f,
     0x1.9f6c46p-42f, 0x1.9c7c04p-48f, 0.0f, 0x1.264358p-54f, 0x1.81fd6cp-83f, 0.0f,
     0x1.86b1dep-17f, 0x1.322a6ep-40f, 0x1.b30998p-118f, 0.0f, 0x1.7871c8p-1f,
     0x1.ee1cb8p-81f, 0.0f, 0x1.b6c6eap-74f, 0x1.42db02p-21f, 0x1.793d7ep-74f, 0.0f,
     0x1.1de93p-11f, 0x1.3fa2b6p-50f, 0x1.09295ap-31f, 0.0f, 0x1.e7df8ap-126f, 0.0f,
     0x1.63dcbp-33f, 0.0f, 0x1.31b47ap-82f, 0x1.987794p-103f, 0x1.5fea06p-12f,
     0x1.7d6698p-31f, 0.0f, 0x1.68875ep-122f, 0.0f, 0.0f, 0x1.bbbb88p-35f, 0.0f,
     0x1.c1bf86p-15f, 0x1.00ba5p-62f, 0x1.a251b6p-6f, 0.0f, 0x1.140f92p-18f,
     0x1.499192p-57f, 0.0f, 0.0f, 0x1.3cb716p-81f, 0x1.f2378ep-23f, 0x1.2b3dap-43f,
     0x1.6f4e6ep-12f, 0.0f, 0x1.e713b2p-89f, 0x1.5bb97ap-74f, 0x1.8b32eap-72f,
     0x1.e69276p-110f, 0x1.09b808p-59f, 0x1.279e7p-20f, 0.0f, 0x1.aa2e1cp-16f,
     0x1.c6920ap-35f, 0.0f, 0x1.cb91d2p-114f, 0x1.1bcf96p-53f, 0.0f, 0x1.6512f4p-79f,
     0.0f, 0x1.eb9ef4p-114f, 0x1.76628cp-22f, 0x1.10cb66p-27f, 0x1.500a7p-22f, 0.0f,
     0.0f, 0x1.fef796p-102f, 0.0f, 0.0f, 0x1.6b314ep-105f, 0.0f, 0x1.8385ap-114f,
     0.0f, 0.0f, 0x1.b22a8ap-122f, 0.0f, 0.0f, 0x1.a98a1ep-38f, 0.0f, 0.0f, 0.0f,
     0x1.2bc2ccp-67f, 0.0f, 0.0f, 0x1.3016e6p-69f, 0.0f, 0x1.943c36p-59f, 0.0f, 0.0f,
     0x1.a3f2c2p-99f, 0x1.5449eep-11f, 0.0f, 0x1.bbbaacp-69f, 0x1.63d804p-111f,
     0x1.a327ccp-69f, 0.0f, 0.0f, 0x1.f9a36ap-107f, 0x1.a29b9ep-76f, 0.0f, 0.0f,
     0x1.0face4p-98f, 0x1.4811e4p-125f, 0.0f, 0.0f, 0x1.48dcbep-27f, 0.0f,
     0x1.0129eep-115f, 0x1.3cbe02p-119f, 0x1.b68c62p-16f, 0.0f, 0x1.f869c8p-45f, 0.0f,
     0.0f, 0.0f, 0x1.710744p-114f, 0.0f, 0x1.4a5364p-107f, 0.0f, 0x1.4184dcp-91f,
     0x1.60c1fep-61f, 0x1.d3c388p-55f, 0.0f, 0.0f, 0x1.11ba42p-33f, 0.0f,
     0x1.534d9cp-41f, 0.0f, 0x1.e9f172p-38f, 0x1.33d85p-37f, 0x1.69ed16p-59f,
     0x1.ab1d42p-21f, 0.0f, 0x1.227f94p-27f, 0.0f, 0x1.ab7912p-37f, 0x1.d5dec4p-73f,
     0x1.1afb62p-73f, 0.0f, 0x1.164404p-70f, 0.0f, 0x1.05521cp-97f, 0.0f, 0.0f, 0.0f,
     0x1.3f6e7ep-70f, 0.0f, 0.0f, 0.0f, 0x1.6dd3cp-79f, 0.0f, 0.0f, 0x1.4d8e4ap-14f,
     0.0f, 0x1.89140ep-73f, 0x1.73c728p-119f, 0x1.83e3fep-116f, 0x1.fe9ep-67f,
     0x1.b057cep-114f, 0x1.f5000ap-16f, 0x1.3619d4p-86f, 0.0f, 0.0f, 0x1.129c5p-72f,
     0.0f, 0.0f, 0x1.d0c74cp-74f, 0.0f, 0x1.9d55dep-24f, 0x1.2c6de8p-79f,
     0x1.1e672ep-19f, 0x1.7ea3cep-80f, 0x1.ab3042p-113f, 0x1.e86536p-38f, 0.0f,
     0x1.e979ecp-126f, 0.0f, 0.0f, 0x1.194596p-123f, 0.0f, 0x1.5c6114p-96f, 0.0f,
     0x1.3c7a1ep-87f, 0x1.14667cp-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c8698p-98f, 0x1.52114cp-18f, 0.0f, 0.0f, 0x1.46f3dep-4f, 0.0f,
     0x1.ca4182p-52f, 0.0f, 0.0f, 0x1.278cccp-18f, 0.0f, 0.0f, 0.0f, 0x1.1f368ap-4f,
     0x1.afa57ep-47f, 0x1.785006p-26f, 0.0f, 0.0f, 0.0f, 0x1.8af07p-106f,
     0x1.c5c564p-108f, 0.0f, 0.0f, 0.0f, 0x1.291a9p-30f, 0x1.f24a4ep-112f, 0.0f,
     0x1.c84714p-46f, 0x1.ee1a4cp-125f, 0.0f, 0.0f, 0x1.60fc16p-97f, 0x1.5e61a4p-119f,
     0.0f, 0x1.af07fp-83f, 0.0f, 0.0f, 0x1.9f8a02p-75f, 0.0f, 0x1.3c222p-22f,
     0x1.cec6c4p-32f, 0x1.097ddep-61f, 0.0f, 0.0f, 0.0f, 0x1.2186b6p-16f,
     0x1.59c142p-105f, 0x1.ccb2dep-27f, 0x1.c28252p-70f, 0x1.afc25ep-93f,
     0x1.d327b8p-116f, 0x1.6255aep-74f, 0.0f, 0.0f, 0x1.582fe8p-113f, 0.0f,
     0x1.c600f4p-12f, 0.0f, 0x1.83a152p-105f, 0.0f, 0.0f, 0x1.5122e2p-102f, 0.0f,
     0.0f, 0x1.ec9b7ap-11f, 0x1.378318p-12f, 0x1.9c2fd6p-81f, 0x1.47d192p-63f,
     0x1.432226p-49f, 0x1.3ba3cp-69f, 0.0f, 0.0f, 0x1.9c4624p-106f, 0x1.e5ff8ep-40f,
     0.0f, 0.0f, 0x1.1a1e4p-65f, 0x1.701312p-24f, 0x1.a02718p-8f, 0.0f,
     0x1.581acap-71f, 0x1.5997fp-86f, 0.0f, 0.0f, 0.0f, 0x1.0feb2ap-42f, 0.0f, 0.0f,
     0.0f, 0x1.fb8806p-49f, 0x1.dfe8b4p-34f, 0x1.d82ff4p-81f, 0x1.84bf1ep-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6dc8e2p-43f, 0x1.8faf16p-26f, 0x1.cd3e24p-70f,
     0.0f, 0.0f, 0x1.fcc88p-81f, 0x1.294cb4p-21f, 0x1.3b978p-73f, 0x1.389696p-90f,
     0x1.2bd30cp-96f, 0.0f, 0.0f, 0x1.34f996p-80f, 0x1.8878e2p-67f, 0x1.a9b482p-111f,
     0.0f, 0x1.261c84p-89f, 0.0f, 0.0f, 0x1.17e26ep-75f, 0x1.7c5418p-89f, 0.0f,
     0x1.8169d2p-82f, 0.0f, 0x1.28ae1cp-22f, 0x1.5b143p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdcf0cp-50f, 0x1.e7dc3cp-122f, 0x1.770b7ep-25f, 0x1.31e81p-31f, 0.0f,
     0x1.197364p-5f, 0x1.f60038p-110f, 0x1.d0bec4p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0b16d6p-126f, 0x1.99ac94p-95f, 0.0f, 0x1.13028ep-40f, 0x1.ee885ep-3f,
     0x1.655916p-1f, 0.0f, 0.0f, 0x1.dbd93cp-52f, 0x1.0e69ccp-68f, 0.0f,
     0x1.cb99c4p-85f, 0x1.7ea088p-118f, 0.0f, 0x1.8af4aep-86f, 0x1.a8298ap-101f, 0.0f,
     0.0f, 0x1.2b0a1cp-50f, 0x1.30a47cp-108f, 0x1.75d552p-121f, 0.0f, 0.0f,
     0x1.86b802p-98f, 0x1.687dc4p-91f, 0.0f, 0x1.b458bp-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1aea1ap-46f, 0x1.f0881ep-119f, 0.0f, 0.0f, 0x1.887634p-37f,
     0x1.5947d2p-26f, 0x1.5cfd9cp-97f, 0.0f, 0.0f, 0.0f, 0x1.ff3c84p-26f,
     0x1.34f5f4p-4f, 0x1.65200ap-97f, 0.0f, 0x1.968d8cp-105f, 0.0f, 0.0f,
     0x1.3e9a72p-76f, 0x1p0f, 0.0f, 0.0f, 0x1.57936cp-111f, 0x1.79d86cp-84f, 0.0f,
     0.0f, 0x1.4d89eep-104f, 0.0f, 0x1.5b4f62p-27f, 0x1.7901aap-62f, 0x1.4e08dap-102f,
     0.0f, 0x1.1dca8cp-107f, 0.0f, 0x1.46d6cep-106f, 0x1.d23868p-29f, 0.0f,
     0x1.8c672ap-23f, 0.0f, 0x1.58dac4p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ab5f2p-44f, 0x1.78adep-83f, 0x1.0a9d38p-42f, 0x1.53def2p-40f,
     0x1.922126p-27f, 0x1.b218bap-43f, 0x1.56a9aap-21f, 0x1.ac936cp-110f,
     0x1.927e08p-51f, 0x1.551846p-84f, 0.0f, 0x1.063c72p-69f, 0x1.8fba8p-103f, 0.0f,
     0.0f, 0.0f, 0x1.b24894p-99f, 0.0f, 0x1.85722ap-66f, 0x1.e21b7p-60f,
     0x1.37365cp-36f, 0.0f, 0.0f, 0x1.68a8eap-17f, 0.0f, 0.0f, 0.0f, 0x1.19b4cap-97f,
     0x1.c758bp-86f, 0x1.3aa19cp-80f, 0x1.af70bap-10f, 0x1.3bf486p-28f, 0.0f, 0.0f,
     0x1.dc3396p-38f, 0.0f, 0x1.0f65e2p-114f, 0.0f, 0x1.021cc6p-78f, 0x1.cb989p-44f,
     0.0f, 0.0f, 0.0f, 0x1.eb6d6ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.17d6a2p-30f, 0.0f, 0x1.1240dep-126f, 0.0f, 0x1.c0901ap-53f, 0x1.909c36p-67f,
     0x1.3b93a6p-8f, 0x1.9f0fcep-11f, 0.0f, 0x1.aefcbcp-103f, 0.0f, 0.0f,
     0x1.2b88acp-44f, 0.0f, 0.0f, 0x1.71a4ap-90f, 0x1.13fcb8p-45f, 0x1.f4a996p-85f,
     0x1.33d51cp-30f, 0.0f, 0x1.8bda84p-106f, 0.0f, 0.0f, 0x1.2280dep-55f,
     0x1.407304p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2abfd4p-86f, 0x1.4e8e8ap-17f,
     0x1.16c582p-60f, 0.0f, 0.0f, 0.0f, 0x1.61ad12p-64f, 0x1.0e28acp-92f, 0.0f, 0.0f,
     0x1.ec7e2ep-92f, 0x1.01260ap-126f, 0x1.2e5f56p-64f, 0.0f, 0.0f, 0x1.687fb2p-19f,
     0x1.2e5392p-57f, 0.0f, 0.0f, 0x1.3383c8p-23f, 0x1.4c118cp-50f, 0.0f,
     0x1.57d5d6p-62f, 0.0f, 0.0f, 0.0f, 0x1.a81142p-126f, 0x1.f518d2p-8f, 0.0f,
     0x1.cf15a4p-33f, 0x1.94629ap-35f, 0x1.f70b18p-109f, 0.0f, 0.0f, 0x1.93c01ap-60f,
     0.0f, 0x1.14fad8p-125f, 0.0f, 0.0f, 0x1.85d352p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2759p-45f, 0x1.3c4808p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d377cp-85f,
     0x1.fcb86ap-47f, 0x1.7470b4p-103f, 0.0f, 0.0f, 0x1.e79832p-55f, 0.0f, 0.0f,
     0x1.375886p-100f, 0x1.3715bep-122f, 0x1.a2dc7cp-48f, 0.0f, 0.0f, 0x1.52d10ap-34f,
     0x1.b8342ap-32f, 0.0f, 0x1.a9459cp-76f, 0x1.e7c28ap-27f, 0x1.bfacbp-30f, 0.0f,
     0x1.be3342p-27f, 0x1.6d72fap-97f, 0.0f, 0.0f, 0x1.08f274p-85f, 0.0f, 0.0f,
     0x1.90fc76p-80f, 0.0f, 0x1.13d3acp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92f32ep-119f,
     0.0f, 0.0f, 0x1.b7958ep-124f, 0x1.2b62bp-9f, 0x1.227b24p-85f, 0x1.cf7d3cp-25f,
     0.0f, 0x1.28c84cp-42f, 0.0f, 0x1.1b6ed8p-56f, 0.0f, 0x1.349bfep-91f, 0.0f,
     0x1.57f9c2p-125f, 0.0f, 0x1.cb814p-38f, 0x1.1134ep-50f, 0x1.5c02f4p-106f, 0.0f,
     0x1.6d553cp-52f, 0x1.1eea32p-61f, 0x1.87c5e8p-97f, 0x1.753036p-25f, 0.0f, 0.0f,
     0.0f, 0x1.505da2p-78f, 0.0f, 0x1.25efcp-19f, 0.0f, 0x1.fe94a6p-38f, 0.0f, 0.0f,
     0x1.0eaa38p-83f, 0.0f, 0x1.1e9a0ap-87f, 0x1.b5d528p-35f, 0x1.d0122ep-75f, 0.0f,
     0x1.8b99acp-2f, 0.0f, 0.0f, 0.0f, 0x1.bd5dc4p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8352bap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.14e496p-17f, 0.0f,
     0.0f, 0x1.6c587ep-102f, 0.0f, 0x1.bddceap-59f, 0.0f, 0.0f, 0x1.dcdef2p-81f,
     0x1.c26656p-13f, 0.0f, 0x1.a28cc6p-47f, 0.0f, 0x1.ebfccep-34f, 0.0f,
     0x1.34e878p-59f, 0.0f, 0.0f, 0x1.f2ef54p-87f, 0x1.402c08p-74f, 0x1.beca7ep-124f,
     0.0f, 0x1.943222p-48f, 0x1.19c602p-71f, 0.0f, 0x1.3629cp-63f, 0.0f,
     0x1.97b3eap-101f, 0x1.0a8858p-122f, 0x1.6d983ap-46f, 0x1.6394c2p-122f,
     0x1.54a50cp-9f, 0.0f, 0.0f, 0x1.8e16cap-53f, 0.0f, 0.0f, 0x1.a0e27p-117f,
     0x1.27f87ep-68f, 0.0f, 0x1.f003dep-45f, 0x1.ed20dcp-37f, 0.0f, 0.0f, 0.0f,
     0x1.c356d4p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccd7fp-111f, 0.0f, 0x1.3f2b1ep-89f,
     0x1.ecfa46p-48f, 0.0f, 0x1.67448ap-81f, 0.0f, 0.0f, 0x1.f10062p-78f, 0.0f,
     0x1.25ba8ep-10f, 0x1.66fd2ap-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90bc7cp-11f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.09bdbp-38f, 0x1.21d5b2p-93f, 0.0f, 0.0f, 0x1.ecc7ap-43f,
     0.0f, 0x1.67a4e2p-5f, 0.0f, 0.0f, 0x1.cb019ep-8f, 0.0f, 0.0f, 0x1.d74ecap-25f,
     0x1.0cddbep-90f, 0.0f, 0x1.775ad6p-20f, 0.0f, 0.0f, 0.0f, 0x1.5ccb52p-115f,
     0x1.e1e0acp-84f, 0x1.7bcabcp-82f, 0.0f, 0.0f, 0.0f, 0x1.427a14p-99f, 0.0f,
     0x1.b6399ap-6f, 0x1.2d3e3ap-108f, 0.0f, 0x1.36d25cp-119f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1f17p-84f, 0x1.6b64cp-92f, 0.0f, 0x1.f8e732p-68f, 0.0f, 0.0f,
     0x1.4ab214p-10f, 0x1.a065f4p-30f, 0x1.cbdb54p-46f, 0.0f, 0.0f, 0.0f,
     0x1.834602p-96f, 0.0f, 0.0f, 0x1.53ec1ap-61f, 0x1.663fcap-90f, 0.0f,
     0x1.4885f2p-102f, 0.0f, 0x1.070cbcp-44f, 0x1.c1857ap-79f, 0x1.ff88fp-126f,
     0x1.9fa156p-10f, 0x1.74f764p-28f, 0.0f, 0x1.f0d154p-83f, 0x1.fb5116p-17f,
     0x1.e7d142p-48f, 0x1.30037cp-20f, 0x1.7fd36cp-115f, 0x1.6b99fap-7f,
     0x1.b7e11p-7f, 0.0f, 0x1.ae01d6p-105f, 0.0f, 0.0f, 0x1.618fe4p-68f,
     0x1.9487aep-112f, 0x1.88d802p-104f, 0.0f, 0.0f, 0x1.dbd27ep-84f, 0x1.dfc91p-27f,
     0.0f, 0.0f, 0x1.311728p-26f, 0.0f, 0x1.7b22c6p-62f, 0x1.e8b62p-79f, 0.0f,
     0x1.d57facp-25f, 0.0f, 0.0f, 0x1.80e734p-33f, 0x1.3b12e2p-105f, 0x1.b7954p-75f,
     0x1.6a22a2p-98f, 0.0f, 0x1.ecba5cp-41f, 0x1.765132p-107f, 0x1.bbc41ep-108f, 0.0f,
     0x1.eacbdep-85f, 0x1.eb3eaap-59f, 0x1.f0b592p-3f, 0.0f, 0.0f, 0x1.84f278p-62f,
     0x1.b83e9ep-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5929e8p-33f,
     0x1.14bbfcp-37f, 0.0f, 0x1.35ec66p-96f, 0x1.66038cp-80f, 0x1.8275dep-97f,
     0x1.bd23f6p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e88bc2p-57f, 0.0f, 0.0f,
     0x1.eabff6p-67f, 0.0f, 0x1.7a9996p-87f, 0x1.f17342p-16f, 0x1.a384f2p-66f,
     0x1.48b954p-116f, 0x1.d62254p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3179a4p-59f, 0.0f,
     0x1.593d94p-108f, 0x1.f33a92p-58f, 0x1.6544f8p-43f, 0.0f, 0x1.c087p-31f,
     0x1.8c7fd2p-55f, 0x1.a8f74ap-59f, 0.0f, 0.0f, 0x1.4044d8p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.211cf4p-72f, 0.0f, 0x1.b7e38ep-99f, 0x1.dd0eacp-91f, 0x1.12456p-108f,
     0.0f, 0x1.bf3d76p-52f, 0x1.c8869ap-116f, 0x1.07571ep-19f, 0.0f, 0.0f,
     0x1.9055fp-6f, 0.0f, 0x1.81abfp-87f, 0x1.213e06p-78f, 0x1.f0194cp-75f, 0.0f,
     0x1.35dc0ap-118f, 0x1.f35caap-25f, 0.0f, 0x1.cadee6p-34f, 0x1.46e9f8p-70f,
     0x1.54ec4ap-6f, 0.0f, 0.0f, 0.0f, 0x1.4319c6p-47f, 0.0f, 0.0f, 0x1.7c494ap-22f,
     0.0f, 0.0f, 0x1.c0ac26p-77f, 0x1.98d65cp-40f, 0x1.90f5dap-31f, 0.0f,
     0x1.a807b6p-98f, 0.0f, 0.0f, 0x1.0bea0ep-90f, 0.0f, 0.0f, 0.0f, 0x1.0b725ap-97f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.859f4ep-69f, 0x1.fdbbb2p-17f, 0.0f, 0x1.b1724ap-15f,
     0x1.4b528cp-4f, 0.0f, 0.0f, 0x1.1b1adap-45f, 0x1.0ce964p-42f, 0.0f, 0.0f,
     0x1.fa41e2p-110f, 0x1.fb8fep-113f, 0x1.7edd3p-110f, 0x1.e8ada8p-124f,
     0x1.d727f8p-93f, 0x1.e76c9cp-62f, 0.0f, 0x1.9e50dap-20f, 0.0f, 0.0f,
     0x1.9d7dc6p-79f, 0x1.6d16c6p-72f, 0x1.8a0478p-97f, 0x1.3ae96ap-71f,
     0x1.38ef1ap-61f, 0x1.d8e4acp-68f, 0.0f, 0.0f, 0x1.eb047cp-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8189cap-17f, 0.0f, 0x1.1a01b4p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2ed408p-110f, 0.0f, 0x1.211a58p-21f, 0.0f, 0x1.ebd6aap-53f,
     0x1.763722p-49f
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
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_expf1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
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
    printf("Sleef_expf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expf1_u10purecfma bench acc %a\n", global_bench_acc);
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
