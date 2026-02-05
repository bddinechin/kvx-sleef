/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanf1_u10purecfma.c --function Sleef_tanf1_u10purecfma \
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
     0x1.41bbbep-63f, 0.0f, 0.0f, 0x1.afff44p-126f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1db13p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d74baep-33f, 0x1.834d08p-15f,
     0x1.e57e24p-50f, 0x1.63d38ep-87f, 0.0f, 0.0f, 0.0f, 0x1.65f974p-111f, 0.0f,
     0x1.69f9p-117f, 0x1.5b64d2p-123f, 0x1.43ead2p-78f, 0x1.b0791p-84f,
     0x1.c3005p-118f, 0x1.d61716p-82f, 0x1.cd148cp-36f, 0.0f, 0x1.eb4cccp-120f,
     0x1.d74608p-122f, 0.0f, 0x1.a0e6a4p-97f, 0.0f, 0x1.08b6aap-49f, 0.0f,
     0x1.f4cec4p-54f, 0.0f, 0.0f, 0x1.393bcep-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bfcdccp-63f, 0x1.31fcdep-36f, 0.0f, 0x1.ac575cp-47f, 0.0f, 0.0f,
     0x1.fcb586p-64f, 0.0f, 0.0f, 0.0f, 0x1.ee03dep-72f, 0.0f, 0x1.097cb8p-80f,
     0x1.cd6076p-113f, 0x1.da4eb4p-11f, 0x1.b89a2cp-4f, 0.0f, 0x1.980078p-111f,
     0x1.c3183cp-38f, 0x1.36ebcep-29f, 0.0f, 0.0f, 0.0f, 0x1.29f5fp-87f, 0.0f, 0.0f,
     0x1.76206cp-6f, 0x1.e0667ep-57f, 0x1.8c6792p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.058f8cp-36f, 0x1.5a9cb8p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1f2cbep-99f, 0x1.ab275ep-9f, 0.0f, 0.0f, 0x1.60e1c2p-120f, 0x1.d60546p-26f,
     0.0f, 0x1.992174p-62f, 0.0f, 0x1.c76446p-38f, 0x1.99ebd4p-24f, 0.0f, 0.0f,
     0x1.c41da6p-35f, 0x1.2dfdeap-6f, 0x1.acea48p-48f, 0.0f, 0x1.acb808p-76f,
     0x1.13c0a8p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ac0cd8p-112f, 0x1.ca50f8p-64f,
     0x1.e23a2ep-47f, 0x1.836582p-26f, 0.0f, 0x1.f2814p-102f, 0x1.7a4fdcp-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4915p-65f, 0.0f, 0.0f, 0.0f,
     0x1.85d18ep-89f, 0.0f, 0.0f, 0x1.eefb72p-49f, 0x1.ea2c1p-25f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.de8a0ap-13f, 0.0f, 0.0f, 0x1.3daf06p-93f, 0x1.0bea42p-16f,
     0x1.5a13cep-125f, 0x1.7ca90cp-99f, 0.0f, 0.0f, 0x1.2c0934p-75f, 0.0f,
     0x1.1dcd5cp-69f, 0x1.be752ap-1f, 0x1.76a09ap-63f, 0.0f, 0.0f, 0x1.9942dep-25f,
     0x1.21de3cp-43f, 0.0f, 0x1.c5c9bap-14f, 0.0f, 0.0f, 0x1.0dd862p-38f,
     0x1.84d82ap-111f, 0x1.d7fbe4p-33f, 0x1.b5da4ap-24f, 0x1.e203f2p-57f,
     0x1.eb113p-123f, 0.0f, 0x1.0a4012p-31f, 0.0f, 0.0f, 0x1.e9838p-79f,
     0x1.69f10ap-71f, 0.0f, 0.0f, 0x1.140862p-15f, 0x1.499258p-100f, 0x1.964486p-99f,
     0x1.b4d4c6p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.44e1ecp-27f, 0x1.4c763ap-85f,
     0x1.5ad952p-23f, 0.0f, 0.0f, 0.0f, 0x1.8db3fp-107f, 0x1.855f1cp-77f,
     0x1.a558d2p-52f, 0x1.f3faacp-39f, 0x1.9a9ef6p-71f, 0.0f, 0.0f, 0x1.90b39p-29f,
     0x1.ad51e4p-74f, 0x1.03ea44p-58f, 0x1.b5a168p-125f, 0.0f, 0.0f, 0x1.d8d962p-98f,
     0x1.d8a81cp-31f, 0x1.8f4894p-8f, 0.0f, 0.0f, 0x1.ec2148p-84f, 0x1.a0bb1p-14f,
     0x1.772418p-72f, 0x1.89bfap-120f, 0x1.b769fep-108f, 0x1.03461ep-74f, 0.0f,
     0x1.965116p-61f, 0.0f, 0.0f, 0x1.3d804p-74f, 0.0f, 0.0f, 0.0f, 0x1.6d557cp-32f,
     0.0f, 0x1.df500cp-48f, 0.0f, 0.0f, 0x1.47ce7cp-62f, 0x1.8fd8e6p-103f, 0.0f, 0.0f,
     0.0f, 0x1.0f7f3ap-40f, 0x1.813538p-49f, 0.0f, 0.0f, 0x1.48b9b6p-36f,
     0x1.c427ecp-11f, 0x1.1c8cfp-91f, 0x1.2c9d6p-120f, 0.0f, 0.0f, 0x1.599032p-114f,
     0x1.76d298p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2d4ep-3f, 0.0f, 0x1.b19bc2p-40f,
     0x1.4d386ap-13f, 0x1.eb5aap-8f, 0x1.5d6782p-55f, 0.0f, 0.0f, 0x1.81108p-81f,
     0.0f, 0.0f, 0x1.89879ap-97f, 0x1.55e4cep-97f, 0.0f, 0.0f, 0x1.a80c54p-126f, 0.0f,
     0.0f, 0.0f, 0x1.ab0546p-70f, 0x1.813fdp-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf734cp-1f, 0.0f, 0x1.ac6108p-21f, 0.0f, 0.0f, 0x1.5ec7a6p-65f, 0.0f,
     0x1.4e08f6p-105f, 0x1.183c36p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.581022p-119f,
     0x1.8fba64p-92f, 0x1.88420ep-51f, 0x1.fe3ffp-117f, 0x1.c761e6p-28f,
     0x1.da73c4p-23f, 0.0f, 0.0f, 0x1.089f5ap-47f, 0.0f, 0.0f, 0.0f, 0x1.70a67ep-112f,
     0x1.c6857p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41a7dcp-92f, 0.0f, 0.0f, 0.0f,
     0x1.b8aa58p-49f, 0x1.8749f8p-84f, 0x1.8bcf7ep-23f, 0.0f, 0.0f, 0x1.4f7c34p-102f,
     0.0f, 0x1.5e4b58p-57f, 0x1.9e9756p-15f, 0.0f, 0.0f, 0x1.b551cap-76f,
     0x1.e555eap-36f, 0.0f, 0x1.1b8934p-3f, 0x1.90f256p-26f, 0x1.16217p-47f, 0.0f,
     0x1.b548e4p-60f, 0.0f, 0.0f, 0x1.36131ap-30f, 0x1.24bb2cp-111f, 0.0f,
     0x1.b3fcdcp-101f, 0x1.a83e22p-43f, 0.0f, 0x1.51067ap-81f, 0.0f, 0.0f,
     0x1.6feca4p-62f, 0.0f, 0x1.9b549p-42f, 0x1.64b7c8p-48f, 0.0f, 0x1.e1677cp-2f,
     0.0f, 0.0f, 0x1.59c1e4p-18f, 0x1.c7872ap-90f, 0.0f, 0x1.8cd114p-89f, 0.0f, 0.0f,
     0x1.2fff52p-89f, 0x1.f3b4bcp-9f, 0x1.c805a8p-66f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.087b5p-87f, 0x1.539f2ap-30f, 0x1.92a8p-59f, 0.0f, 0x1.e55216p-123f, 0.0f,
     0.0f, 0.0f, 0x1.e33efep-29f, 0.0f, 0x1.f5606p-28f, 0x1.d0837ap-97f, 0.0f,
     0x1.0c8728p-87f, 0x1.9d3736p-77f, 0x1.768918p-2f, 0.0f, 0x1.d1d9bep-84f,
     0x1.383252p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3beff4p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.25b214p-30f, 0x1.54f446p-124f, 0.0f, 0x1.46b2fap-11f,
     0x1.89db5ap-97f, 0.0f, 0.0f, 0.0f, 0x1.74d9ccp-27f, 0x1.12904ep-11f,
     0x1.d2f3cp-72f, 0x1.b49fb6p-6f, 0x1.177a68p-105f, 0x1.835e7ap-62f,
     0x1.039f74p-20f, 0x1.e2d352p-84f, 0x1.716b9p-39f, 0.0f, 0.0f, 0x1.7169bp-44f,
     0x1.d82d84p-14f, 0.0f, 0x1.0956ap-50f, 0.0f, 0x1.e1f234p-22f, 0.0f,
     0x1.ad39b4p-65f, 0x1.c4e9dp-12f, 0x1.5c214ap-62f, 0x1.62a50ep-79f, 0.0f,
     0x1.429aaap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5f8ecp-47f, 0.0f, 0x1.242deep-51f,
     0x1.36c51cp-124f, 0x1.c798fcp-87f, 0x1.187938p-21f, 0.0f, 0.0f, 0x1.4ca966p-9f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32952cp-114f, 0x1.64a506p-40f, 0.0f,
     0.0f, 0x1.85b6ap-51f, 0x1.889612p-111f, 0x1.2d3466p-108f, 0x1.f36f86p-107f, 0.0f,
     0x1.e3c51ap-103f, 0.0f, 0x1.5bf08cp-5f, 0.0f, 0x1.0c6468p-75f, 0x1.c9788cp-51f,
     0.0f, 0.0f, 0x1.9e4d94p-121f, 0x1.80939ap-57f, 0.0f, 0.0f, 0.0f, 0x1.e95a22p-87f,
     0.0f, 0.0f, 0x1.8809b8p-89f, 0x1.e55426p-87f, 0x1.c6dadap-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eba472p-7f, 0.0f, 0x1.abceecp-105f, 0.0f, 0.0f,
     0x1.87226ep-65f, 0x1.fcbd2ep-88f, 0x1.0f544ep-40f, 0x1.8d88f6p-69f, 0x1p0f,
     0x1.d4b216p-87f, 0x1.528baap-103f, 0x1.56b52p-38f, 0.0f, 0x1.c7c32cp-61f,
     0x1.77135ep-15f, 0.0f, 0.0f, 0x1.129558p-109f, 0x1.1d8dfcp-92f, 0.0f,
     0x1.b6fp-4f, 0.0f, 0.0f, 0x1.13cd4p-122f, 0x1.37f20cp-69f, 0x1.c3686ep-30f,
     0x1.0950a8p-44f, 0x1.93e308p-67f, 0.0f, 0x1.03a4c4p-51f, 0x1.ac17bap-74f, 0.0f,
     0.0f, 0x1.9bf466p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a0b0ap-97f, 0.0f, 0.0f,
     0x1.75b17ap-27f, 0.0f, 0x1.0eec7ap-113f, 0.0f, 0x1.910f62p-85f, 0.0f,
     0x1.60b594p-64f, 0.0f, 0x1.8bd20cp-43f, 0.0f, 0x1.6f952ap-94f, 0x1.86b79ap-108f,
     0x1.be2ff6p-53f, 0x1.3704acp-126f, 0x1.e3c2a2p-33f, 0.0f, 0x1.e92236p-62f,
     0x1.8d3baap-90f, 0x1.559328p-57f, 0.0f, 0x1.088f54p-1f, 0x1.bf322ap-79f,
     0x1.093f7p-21f, 0.0f, 0x1.df33d2p-87f, 0x1.4c5dap-28f, 0.0f, 0x1.0eeb58p-101f,
     0x1.d076f8p-115f, 0.0f, 0.0f, 0x1.bf7892p-35f, 0x1.67adbcp-125f, 0.0f,
     0x1.6197a6p-85f, 0.0f, 0x1.a70c6ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa848cp-78f,
     0x1.6a0676p-114f, 0.0f, 0.0f, 0x1.b10d2p-25f, 0.0f, 0.0f, 0x1.f1ad5ap-58f,
     0x1.622c06p-35f, 0.0f, 0.0f, 0.0f, 0x1.a90572p-82f, 0.0f, 0x1.616a46p-93f, 0.0f,
     0.0f, 0.0f, 0x1.7647p-57f, 0x1.8b2f26p-105f, 0.0f, 0.0f, 0.0f, 0x1.e42e0ap-80f,
     0.0f, 0.0f, 0x1.765c78p-56f, 0x1.21c1bp-41f, 0.0f, 0x1.5dfbb4p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d1056p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93c7f2p-81f,
     0.0f, 0.0f, 0.0f, 0x1.f99bf8p-15f, 0x1.782f8p-56f, 0x1.e37c9cp-63f,
     0x1.5a6b5p-68f, 0x1.974cacp-118f, 0x1.7284eep-117f, 0x1.b35706p-111f,
     0x1.fc8596p-33f, 0.0f, 0x1.af71d2p-54f, 0.0f, 0.0f, 0.0f, 0x1.852d04p-101f, 0.0f,
     0.0f, 0x1.f748f8p-17f, 0x1.807d74p-18f, 0.0f, 0.0f, 0x1.3b9902p-86f,
     0x1.a5e41p-101f, 0.0f, 0x1.3a5416p-112f, 0x1.eb73bep-53f, 0.0f, 0.0f, 0.0f,
     0x1.c9de94p-114f, 0.0f, 0.0f, 0x1.c97fb6p-42f, 0.0f, 0x1.0753fp-38f, 0.0f,
     0x1.e8a0fcp-93f, 0.0f, 0.0f, 0x1.be8dfep-62f, 0x1.8925c2p-117f, 0.0f,
     0x1.505b52p-68f, 0x1.416aa2p-125f, 0.0f, 0.0f, 0x1.ab7ee6p-53f, 0x1.9dd3dep-101f,
     0x1.0b8fcep-23f, 0x1.b4fa3ep-20f, 0x1.6417a2p-32f, 0x1.755e82p-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d7772p-86f, 0x1.b504d6p-120f, 0x1.d51cbp-15f, 0.0f,
     0x1.223684p-109f, 0.0f, 0.0f, 0x1.a3aaa2p-4f, 0x1.9bb71p-103f, 0.0f, 0.0f,
     0x1.1725f6p-44f, 0x1.a2aecap-38f, 0x1.ba9a32p-49f, 0x1.d7906ep-37f, 0.0f, 0.0f,
     0x1.558626p-100f, 0.0f, 0x1.0cd3eap-41f, 0x1.96880ap-94f, 0x1.534cf2p-112f, 0.0f,
     0.0f, 0.0f, 0x1.bdc5e2p-95f, 0x1.2a6f6p-102f, 0x1.f80b36p-81f, 0x1.7cff0ap-32f,
     0x1.7be35p-66f, 0x1.85bb56p-62f, 0.0f, 0x1.bf26cp-61f, 0x1.2d857cp-122f,
     0x1.4a76d6p-95f, 0x1.d80a7p-55f, 0x1.c265e8p-115f, 0x1.3fc54ep-50f,
     0x1.1f13d6p-27f, 0.0f, 0.0f, 0x1.3cc594p-101f, 0x1.6188b2p-7f, 0x1.121c12p-28f,
     0.0f, 0x1.db929ep-73f, 0x1.83eaeap-39f, 0x1.e365f6p-24f, 0x1.4b3ac8p-77f, 0.0f,
     0.0f, 0x1.50d54p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c662cp-1f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b2d54p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a9aec8p-92f, 0.0f, 0.0f, 0x1.33eee6p-80f, 0x1.365f3cp-10f, 0x1.797e5ap-26f,
     0x1.64d97ep-82f, 0x1.c0843cp-119f, 0.0f, 0.0f, 0x1.b9c762p-69f, 0.0f, 0.0f,
     0x1.0fd65p-65f, 0x1.9d8a0cp-19f, 0.0f, 0.0f, 0x1.da9adap-96f, 0.0f,
     0x1.7fa856p-98f, 0.0f, 0x1.dc8124p-87f, 0.0f, 0.0f, 0x1.046518p-101f,
     0x1.9b7e6ep-33f, 0.0f, 0x1.94c97cp-60f, 0.0f, 0.0f, 0x1.068194p-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6b44f8p-50f, 0x1.0b8068p-50f, 0x1.cdf7bp-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.296f18p-14f, 0.0f, 0x1.d32812p-118f, 0.0f, 0x1.3d033ep-57f,
     0x1.bb268ep-64f, 0x1.eceef4p-108f, 0x1.3312cp-101f, 0x1.daed0ep-79f,
     0x1.50a274p-36f, 0x1.b15a98p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.697476p-89f,
     0x1.6f06a6p-61f, 0.0f, 0x1.60ac8p-34f, 0x1.aeb94ap-114f, 0x1.a9a53ep-2f,
     0x1.7f393cp-80f, 0x1.72f566p-110f, 0.0f, 0x1.2650c6p-100f, 0.0f, 0.0f,
     0x1.c7d432p-85f, 0.0f, 0x1.d98ce4p-91f, 0.0f, 0.0f, 0.0f, 0x1.de9acep-41f, 0.0f,
     0x1.ac76bcp-73f, 0x1.9deae4p-120f, 0.0f, 0x1.0f225ep-47f, 0x1.27e36cp-54f,
     0x1.660e32p-38f, 0.0f, 0.0f, 0x1.bb1d12p-61f, 0.0f, 0x1.c08f0ap-94f, 0x1p0f,
     0x1.dc070ep-60f, 0.0f, 0.0f, 0x1.7e5878p-66f, 0x1.57f4cp-18f, 0x1.8c3014p-116f,
     0.0f, 0x1.ce185ep-102f, 0.0f, 0x1.f2ab62p-116f, 0.0f, 0.0f, 0.0f,
     0x1.0b4894p-123f, 0.0f, 0x1.63ddcap-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6ae496p-99f, 0.0f, 0.0f, 0x1.1b5b2ep-103f, 0.0f, 0.0f, 0x1.c7ae9ap-60f,
     0.0f, 0x1.3d844ep-63f, 0.0f, 0.0f, 0x1.9a2fd8p-53f, 0.0f, 0.0f, 0x1.5a418cp-36f,
     0x1.975ac8p-85f, 0x1.c05bc2p-58f, 0x1.6dd878p-33f, 0.0f, 0x1.ba98eap-4f,
     0x1.922a14p-92f, 0.0f, 0x1.a588a6p-44f, 0.0f, 0x1.de42dcp-123f, 0.0f, 0.0f,
     0x1.fc248p-78f, 0.0f, 0x1.8a5dd8p-61f, 0.0f, 0.0f, 0x1.2431b8p-121f,
     0x1.b22d74p-23f, 0x1.81e0fep-103f, 0x1.3dc4b4p-45f, 0x1.bfbf3ap-9f,
     0x1.e34078p-32f, 0.0f, 0x1.d6fd5p-97f, 0x1.7a9252p-3f, 0.0f, 0x1.f53d8p-34f,
     0x1.59ca36p-101f, 0x1.693422p-123f, 0x1.ab501ap-108f, 0x1.f985b6p-109f, 0.0f,
     0x1.a2713ep-85f, 0.0f, 0.0f, 0x1.a65908p-91f, 0.0f, 0.0f, 0x1.edfef8p-121f, 0.0f,
     0.0f, 0.0f, 0x1.2ede3ep-96f, 0x1.fc2faep-14f, 0.0f, 0.0f, 0x1.26ef0ap-126f,
     0x1.95ac8ep-91f, 0.0f, 0x1.58332cp-66f, 0.0f, 0x1.7cb13ap-111f, 0x1.b6992ep-112f,
     0x1.c4a7f2p-98f, 0x1.74be6ep-6f, 0.0f, 0.0f, 0x1.54cbf6p-35f, 0x1.fc1496p-68f,
     0x1.f8e0a2p-123f, 0x1.ad5f0ep-121f, 0.0f, 0x1.2270e8p-45f, 0x1.81cc16p-92f,
     0x1.89006p-16f, 0.0f, 0x1.a71baep-78f, 0x1.91a61p-123f, 0.0f, 0x1p0f, 0.0f,
     0x1.35e47ep-83f, 0x1.334914p-116f, 0.0f, 0x1.47dc58p-71f, 0x1.51897ep-85f, 0.0f,
     0x1.cb65a8p-30f, 0.0f, 0x1.18048ap-20f, 0.0f, 0.0f, 0.0f, 0x1.360f0cp-31f, 0.0f,
     0x1.c664f4p-48f, 0x1.a5cbf2p-34f, 0x1.5dc124p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.50795p-20f, 0.0f, 0.0f, 0x1.1248cap-5f, 0x1.d57f0ap-53f, 0x1.bacedap-91f,
     0x1.ebcdd4p-29f, 0.0f, 0.0f, 0.0f, 0x1.d73cfep-35f, 0x1.e38282p-21f,
     0x1.60c972p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.881228p-3f, 0.0f, 0.0f,
     0x1.7e4174p-24f, 0x1.da662cp-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6a4ep-57f,
     0x1.552a3ep-28f, 0x1.1a3c98p-30f, 0x1.404dc6p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eb0d7cp-44f, 0.0f, 0.0f, 0.0f, 0x1.1de688p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_tanf1_u10purecfma(tmp0);
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
    printf("Sleef_tanf1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanf1_u10purecfma bench acc %a\n", global_bench_acc);
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
