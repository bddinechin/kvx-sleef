/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsf1_purecfma.c --function Sleef_fabsf1_purecfma \
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
     0x1.394c7ep-117f, 0.0f, 0.0f, 0x1.55448ep-121f, 0x1.b04292p-122f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.62552p-61f, 0.0f, 0x1.ec251ap-47f, 0.0f, 0.0f,
     0x1.eae4p-85f, 0.0f, 0.0f, 0x1.6258c8p-71f, 0.0f, 0.0f, 0x1.e17284p-81f,
     0x1.558d0ep-112f, 0.0f, 0x1.7e5fdep-23f, 0x1.76c66ap-105f, 0.0f, 0x1.9330d4p-24f,
     0x1.8a6f4cp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5d3188p-12f, 0.0f,
     0x1.03ba4ap-21f, 0x1.9d0ebp-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.068084p-116f,
     0x1.eedd88p-32f, 0x1.16d23ap-85f, 0x1.9b12bp-84f, 0.0f, 0x1.add63p-41f,
     0x1.60d742p-70f, 0.0f, 0x1.c0897cp-7f, 0x1.172f1cp-18f, 0x1.58a27ap-14f,
     0x1.7e9146p-30f, 0.0f, 0.0f, 0.0f, 0x1.f8638cp-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42306p-118f, 0.0f, 0x1.1e01ccp-39f, 0x1.c04eb6p-78f, 0x1.aae6d6p-120f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.488d5ap-86f, 0x1.0d6512p-16f, 0x1.601fd8p-6f,
     0x1.f2707p-39f, 0.0f, 0x1.86b66ep-98f, 0x1.f21874p-109f, 0x1.e8e558p-7f,
     0x1.cfd566p-44f, 0x1.112822p-58f, 0x1.5cf5c6p-113f, 0.0f, 0x1.67494ep-80f,
     0x1.b9329cp-74f, 0.0f, 0x1.5f0f32p-70f, 0x1.b1a52cp-46f, 0.0f, 0x1.6b125ep-98f,
     0x1.cc9bf6p-83f, 0.0f, 0.0f, 0.0f, 0x1.6e4f6ap-116f, 0x1.3fad4ep-76f, 0.0f,
     0x1.dcefb2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d89eep-35f, 0x1.aae8c8p-77f,
     0x1.1aa80ap-126f, 0x1.f01f4ap-104f, 0x1.58c312p-26f, 0.0f, 0.0f, 0x1.aa36f4p-67f,
     0.0f, 0.0f, 0x1.f22a3p-20f, 0x1.d52adp-86f, 0x1.3fae52p-125f, 0.0f, 0.0f,
     0x1.987ff6p-111f, 0x1.35e002p-57f, 0.0f, 0x1.2a1148p-61f, 0.0f, 0x1.c6bd4cp-41f,
     0.0f, 0x1.f8a844p-86f, 0.0f, 0.0f, 0x1.b3141ep-66f, 0x1.7f4422p-20f,
     0x1.ac52acp-51f, 0.0f, 0x1.429eep-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e9dacp-23f,
     0x1.1939b4p-28f, 0.0f, 0x1.767bd4p-104f, 0.0f, 0x1.0696b8p-92f, 0.0f, 0.0f, 0.0f,
     0x1.6c5f02p-84f, 0x1.9d6cb6p-94f, 0x1.e4d1f2p-31f, 0x1.ea5ee6p-112f,
     0x1.383e2ep-53f, 0x1.22e568p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.703e14p-112f,
     0x1.6d6f82p-102f, 0.0f, 0x1.2cc752p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.212b42p-69f,
     0x1.9943bcp-112f, 0.0f, 0x1.90e988p-122f, 0x1.ebc5dp-116f, 0.0f,
     0x1.d77deap-125f, 0x1.4e0b34p-96f, 0.0f, 0x1.3f996ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.c55dcp-73f, 0x1.607c12p-17f, 0x1.dbf0aep-21f, 0.0f, 0x1.848898p-76f, 0.0f,
     0x1.7edc36p-107f, 0x1.e76eccp-45f, 0.0f, 0x1.128338p-33f, 0x1.500562p-103f,
     0x1.a471c2p-22f, 0.0f, 0.0f, 0x1.87d53cp-121f, 0x1.b2b48ap-28f, 0.0f,
     0x1.8456b8p-51f, 0.0f, 0x1.4b1ce4p-79f, 0x1.fae964p-6f, 0x1.5a5cdp-97f, 0.0f,
     0x1.0cc42p-99f, 0x1.a90bf8p-123f, 0x1.665df6p-40f, 0.0f, 0x1.3847b4p-124f, 0.0f,
     0x1.6d5bdcp-38f, 0.0f, 0x1.ebb7f8p-102f, 0x1.c26f8ap-16f, 0.0f, 0.0f,
     0x1.630ab6p-67f, 0.0f, 0.0f, 0x1.b9d676p-20f, 0.0f, 0.0f, 0x1.2124fp-46f, 0.0f,
     0.0f, 0.0f, 0x1.0cc622p-19f, 0.0f, 0.0f, 0.0f, 0x1.38a17cp-14f, 0.0f,
     0x1.c1ab9ap-80f, 0x1.1628fep-34f, 0x1.d60d58p-67f, 0x1.f5927p-70f,
     0x1.0cc236p-56f, 0x1.ad088p-77f, 0x1.27c54cp-95f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd9b3cp-97f, 0x1.2c427cp-74f, 0x1.c7f7d6p-21f, 0x1.968886p-58f,
     0x1.8e9a82p-22f, 0x1.f75dcp-118f, 0x1.4b57a6p-7f, 0.0f, 0.0f, 0.0f,
     0x1.a292ap-95f, 0x1.638d3ap-60f, 0x1.a5d68p-114f, 0x1.1bb31cp-53f,
     0x1.bad4acp-93f, 0.0f, 0x1.502dcep-57f, 0x1.0d788cp-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0834fep-118f, 0x1.70ff38p-85f, 0x1.ffe7eap-114f, 0x1.11af48p-38f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.35609ep-119f, 0x1.32315cp-59f,
     0x1.129dbp-36f, 0x1.e86076p-42f, 0.0f, 0x1.5e72cep-36f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e48f8p-44f, 0.0f, 0.0f, 0.0f, 0x1.535dd6p-102f, 0.0f, 0x1.cb6f8p-15f, 0.0f,
     0x1.6caf82p-2f, 0.0f, 0.0f, 0x1.e8b8fep-73f, 0.0f, 0x1.f30a1ap-8f,
     0x1.ffa80cp-51f, 0x1.d3c354p-111f, 0x1.bb26f4p-2f, 0.0f, 0x1.198a86p-125f, 0.0f,
     0x1.fc859cp-19f, 0x1.9f2d1p-21f, 0x1.32de54p-122f, 0.0f, 0.0f, 0x1.b44412p-20f,
     0x1.cbbd1p-101f, 0x1.f08f7p-14f, 0.0f, 0x1.435a62p-29f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bc4ec2p-66f, 0x1.7c6a0ep-21f, 0x1.7f8d3cp-116f, 0.0f, 0x1.fc7384p-19f,
     0x1.1c8fdap-8f, 0x1.dfb2c8p-35f, 0x1.1f6588p-72f, 0.0f, 0.0f, 0x1.aa1f96p-34f,
     0x1.7f1798p-41f, 0.0f, 0.0f, 0x1.48e01ap-115f, 0x1.08b25ap-86f, 0x1.34e4e8p-111f,
     0x1.c67c3ap-78f, 0x1.ba7988p-82f, 0.0f, 0x1.20e05ep-35f, 0.0f, 0x1.75083p-17f,
     0x1.efedap-67f, 0.0f, 0.0f, 0.0f, 0x1.ca66e8p-36f, 0x1.f8be12p-51f,
     0x1.a9754ap-18f, 0x1.7da022p-109f, 0x1p0f, 0.0f, 0.0f, 0x1.aa7408p-87f,
     0x1.3ca93ap-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.589de6p-20f, 0.0f, 0.0f, 0.0f,
     0x1.df12eep-48f, 0.0f, 0.0f, 0x1.beb8dcp-24f, 0x1.8c5a3ap-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fa1bcep-22f, 0x1.350ebp-63f, 0x1.4416e8p-91f, 0x1.6086ccp-23f,
     0x1.362798p-86f, 0x1.434d4ap-109f, 0x1.4dab44p-93f, 0x1.40a6e2p-118f, 0.0f, 0.0f,
     0.0f, 0x1.8fffeep-126f, 0x1.02773ep-78f, 0x1.18eb2p-55f, 0x1.437474p-115f, 0.0f,
     0x1.222268p-90f, 0x1.ff22c4p-91f, 0x1.f38ea4p-107f, 0x1.017f5ap-43f, 0.0f, 0.0f,
     0.0f, 0x1.37e988p-67f, 0x1.0bbcd8p-24f, 0x1.bf3282p-50f, 0x1.603f5p-53f,
     0x1.392278p-83f, 0.0f, 0.0f, 0x1.b91d8ap-1f, 0x1.2e41e2p-39f, 0x1.87f13p-118f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9b5e8p-88f, 0.0f, 0.0f, 0.0f, 0x1.5b72b6p-68f,
     0x1.cc98f4p-24f, 0x1.852f58p-57f, 0x1.b0630cp-25f, 0.0f, 0x1.e0d5f8p-94f, 0.0f,
     0x1.0dca8p-110f, 0x1.fadep-38f, 0x1.5ef9eep-93f, 0x1.2f33dp-92f, 0.0f,
     0x1.5f94ap-33f, 0.0f, 0x1.fd1e64p-27f, 0x1.79c39ep-57f, 0x1.1d0f4ep-105f,
     0x1.0cfa0cp-112f, 0x1.da887ap-10f, 0x1.98948cp-86f, 0x1.75aba6p-47f,
     0x1.be7528p-25f, 0.0f, 0.0f, 0x1.7fd7e6p-44f, 0x1.457712p-71f, 0x1.8f4196p-57f,
     0x1.20fbacp-84f, 0x1.b9e94ep-96f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.73e3b4p-115f,
     0.0f, 0x1.c342a2p-29f, 0x1.562022p-1f, 0x1.99c63p-33f, 0.0f, 0x1.8426dp-59f,
     0x1.d65db6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b5384p-51f, 0x1.a9d2a2p-39f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4130e4p-36f, 0x1.f72b08p-66f, 0x1.d0f8a6p-106f,
     0x1.621f6ap-35f, 0.0f, 0x1.31a726p-52f, 0x1.e4f43p-42f, 0.0f, 0.0f,
     0x1.3babdp-14f, 0x1.94a6a2p-5f, 0x1.479e7ep-111f, 0x1.c78a54p-45f,
     0x1.6da6a2p-104f, 0x1.64d5b6p-68f, 0x1.e7a62cp-24f, 0.0f, 0x1.ad77ccp-14f, 0.0f,
     0.0f, 0.0f, 0x1.28f5dp-24f, 0x1.af8af4p-92f, 0.0f, 0x1.35bf48p-35f,
     0x1.eb6d4ap-83f, 0x1.4b64p-32f, 0.0f, 0x1.9ab496p-34f, 0.0f, 0.0f,
     0x1.735f8ap-69f, 0.0f, 0x1.51a75ap-18f, 0x1.868eb4p-84f, 0x1.d30a74p-43f, 0.0f,
     0.0f, 0x1.562b42p-62f, 0x1.5f92f6p-117f, 0.0f, 0.0f, 0x1.48fb5ap-86f, 0.0f, 0.0f,
     0x1.14805ep-3f, 0.0f, 0.0f, 0x1.cab05ap-100f, 0x1.5e7a26p-123f, 0x1.bed5ccp-120f,
     0.0f, 0.0f, 0x1.59ce9ap-34f, 0x1.ebbea8p-120f, 0.0f, 0.0f, 0.0f, 0x1.292756p-22f,
     0x1.2e9f9p-104f, 0x1.6b67a8p-16f, 0.0f, 0x1.26e3eep-66f, 0x1.7fc0dap-66f, 0.0f,
     0.0f, 0x1.6d433p-29f, 0x1.d6eb72p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc7492p-125f, 0x1.aaf52cp-62f, 0.0f, 0x1.c316d4p-89f, 0.0f, 0.0f,
     0x1.dd1acap-105f, 0.0f, 0x1.fdd21ep-44f, 0.0f, 0x1.6f34f6p-18f, 0.0f, 0.0f, 0.0f,
     0x1.f11816p-47f, 0.0f, 0.0f, 0x1.6fd8b2p-106f, 0x1.4bb204p-5f, 0x1.eb856ep-34f,
     0x1.1dd8bp-59f, 0x1.7cf48cp-113f, 0.0f, 0.0f, 0x1.0e065ap-79f, 0.0f, 0.0f, 0.0f,
     0x1.7f52acp-106f, 0x1.9ddf42p-115f, 0x1.0dbfdap-88f, 0x1.d9f024p-8f,
     0x1.91b92cp-44f, 0x1.8a83ccp-3f, 0.0f, 0x1.fa360ap-99f, 0x1.25789ap-69f, 0.0f,
     0x1.7a3a58p-30f, 0.0f, 0x1.14b31cp-21f, 0.0f, 0x1.f9743p-76f, 0x1.458a2cp-45f,
     0x1.20a176p-106f, 0x1.4eea84p-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b703cep-43f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.48bd78p-61f, 0x1.03fb5cp-24f, 0x1.869b28p-29f, 0x1p0f,
     0.0f, 0x1.1a66e2p-97f, 0.0f, 0x1.ea9b5ap-35f, 0x1.058066p-109f, 0.0f, 0.0f,
     0x1.2e47acp-55f, 0.0f, 0.0f, 0x1.7ed31cp-98f, 0x1.3e3d5ap-23f, 0x1.66a002p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.79addcp-13f, 0.0f, 0x1.a0cb96p-99f, 0.0f, 0.0f,
     0x1.1abb56p-80f, 0.0f, 0x1.1b7f6ep-108f, 0x1.2a88bp-40f, 0x1.dba0fp-96f, 0.0f,
     0x1.501fa2p-61f, 0x1.f858c4p-80f, 0x1.9e7d3ap-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97a4acp-69f, 0.0f, 0x1.0cb492p-89f, 0.0f, 0.0f, 0x1.e657e2p-14f,
     0x1.89fb4cp-59f, 0x1.08cf44p-88f, 0.0f, 0.0f, 0x1.0244c4p-99f, 0x1.40f1bep-50f,
     0x1.b1baep-74f, 0x1.c7e1d4p-46f, 0.0f, 0.0f, 0x1.e378bap-121f, 0x1.65e9bep-112f,
     0x1.11cf74p-115f, 0x1.976c86p-122f, 0.0f, 0.0f, 0x1.0e5b54p-116f, 0.0f,
     0x1.8f9554p-72f, 0.0f, 0x1.30090cp-32f, 0x1.8c2c1ap-64f, 0.0f, 0.0f,
     0x1.fce304p-9f, 0.0f, 0.0f, 0x1.058a5ap-3f, 0.0f, 0x1.26d60cp-31f,
     0x1.84cc2cp-98f, 0.0f, 0x1.89647cp-48f, 0x1.fe07c6p-88f, 0.0f, 0.0f, 0.0f,
     0x1.97d52cp-59f, 0.0f, 0x1.6b4a38p-20f, 0.0f, 0x1.ab868ap-13f, 0x1.24ca9cp-49f,
     0.0f, 0.0f, 0x1.aeee72p-83f, 0x1.4db93cp-14f, 0.0f, 0x1.67fffep-109f,
     0x1.eed2dp-98f, 0.0f, 0x1.4cc42p-45f, 0x1.dc85c4p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9695c2p-52f, 0x1.aa25d8p-91f, 0x1.a19f9cp-114f, 0.0f,
     0x1.f0669ep-35f, 0x1p0f, 0.0f, 0x1.515872p-30f, 0x1.d710a4p-53f, 0x1.57b17p-105f,
     0x1.bd37e6p-20f, 0x1.72decap-124f, 0x1.a669e4p-14f, 0.0f, 0x1.bff66cp-110f,
     0x1.116e7cp-54f, 0.0f, 0x1.c7e252p-77f, 0x1.308de6p-40f, 0.0f, 0.0f,
     0x1.32530ep-91f, 0.0f, 0.0f, 0x1.cc1bfep-25f, 0.0f, 0x1.870336p-53f,
     0x1.f5b3a2p-84f, 0.0f, 0x1.78535ap-82f, 0x1.60fdb6p-118f, 0.0f, 0x1.271c5ap-27f,
     0x1.ac9964p-62f, 0.0f, 0.0f, 0x1.c9a40cp-124f, 0x1.4836a4p-82f, 0x1.5869c8p-94f,
     0.0f, 0x1.256acep-101f, 0.0f, 0.0f, 0x1.92aeecp-10f, 0.0f, 0x1.36fb2cp-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6bb9a4p-17f, 0.0f, 0x1.e31456p-21f, 0x1.6d96d2p-41f,
     0x1.d58c4cp-51f, 0.0f, 0.0f, 0x1.81d896p-97f, 0x1.8e7372p-92f, 0.0f,
     0x1.1205a2p-16f, 0.0f, 0.0f, 0x1.244956p-18f, 0.0f, 0.0f, 0x1.c16bbap-84f,
     0x1.7e98f2p-18f, 0.0f, 0.0f, 0x1.783d44p-69f, 0.0f, 0x1.7bcaf2p-66f, 0.0f,
     0x1.0fbb62p-36f, 0.0f, 0.0f, 0x1.b6ddcp-58f, 0x1.c41e7ap-54f, 0.0f, 0.0f, 0.0f,
     0x1.e9257ep-86f, 0.0f, 0.0f, 0.0f, 0x1.358fb2p-69f, 0.0f, 0.0f, 0x1.515fa2p-112f,
     0x1.7ca77ep-28f, 0x1.9f4d3ap-87f, 0x1.6d16e2p-7f, 0.0f, 0x1.8d353ap-104f, 0.0f,
     0x1.60f7f2p-82f, 0x1.6a992ep-3f, 0x1.fa3496p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4097f4p-8f, 0.0f, 0.0f, 0.0f, 0x1.08d9e6p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d6617ap-92f, 0x1.ff4cb4p-50f, 0x1.e39d22p-81f, 0.0f, 0.0f, 0.0f,
     0x1.34c69ep-36f, 0x1.19c9ep-124f, 0.0f, 0.0f, 0x1.17660cp-15f, 0x1.5ef9cep-123f,
     0.0f, 0x1.8a5af6p-78f, 0x1.01e6dap-53f, 0x1.5e86b8p-5f, 0x1.bb81dep-36f, 0.0f,
     0x1.5e1a2ep-2f, 0x1.2c14fcp-51f, 0x1.49c3bp-15f, 0.0f, 0x1.fe033ap-47f, 0.0f,
     0x1.f62de8p-106f, 0x1.f40af8p-32f, 0x1.28c018p-13f, 0.0f, 0.0f, 0x1.a646ap-104f,
     0.0f, 0x1.95cd76p-24f, 0.0f, 0.0f, 0x1.e469b4p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b706ep-94f, 0x1.a67fccp-17f, 0x1.51abfp-50f, 0.0f, 0.0f, 0.0f,
     0x1.01d20ap-41f, 0.0f, 0x1.2b174ap-73f, 0.0f, 0x1.d2abd8p-120f, 0.0f,
     0x1.38ee28p-108f, 0x1.a56cep-60f, 0.0f, 0.0f, 0.0f, 0x1.10102p-51f, 0.0f, 0.0f,
     0x1.693f1cp-49f, 0x1.76648p-5f, 0x1.ce47fp-64f, 0x1.5e4b36p-86f, 0x1.58c3fep-78f,
     0x1.442308p-67f, 0.0f, 0x1.15512cp-40f, 0x1.eb08bcp-35f, 0x1.1bcba4p-61f, 0.0f,
     0x1.baa9b6p-37f, 0.0f, 0x1.20a01p-121f, 0.0f, 0.0f, 0x1.f7eb66p-18f,
     0x1.5deb1ep-106f, 0x1.d473dp-8f, 0.0f, 0.0f, 0x1.c0d414p-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4ec62ap-54f, 0x1.8281a2p-66f, 0x1.366366p-87f, 0.0f, 0.0f, 0.0f,
     0x1.135d2ap-9f, 0x1.711724p-125f, 0x1.e95cfp-55f, 0.0f, 0x1.08b7ccp-80f, 0.0f,
     0x1.43174ap-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1900d6p-100f,
     0x1.d8bfbcp-106f, 0x1.4e5238p-29f, 0x1.225086p-33f, 0x1.31f88ep-97f,
     0x1.0c874cp-94f, 0.0f, 0x1.e76e64p-50f, 0.0f, 0.0f, 0.0f, 0x1.68e828p-51f,
     0x1.c950e2p-60f, 0.0f, 0.0f, 0x1.005df6p-73f, 0x1.0c8f54p-55f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea068ep-64f, 0.0f, 0.0f, 0.0f, 0x1.7a3edep-83f, 0.0f,
     0.0f, 0x1.b99f02p-44f, 0x1.95c294p-83f, 0.0f, 0x1.67afaap-24f, 0x1.4c2e36p-120f,
     0.0f, 0x1.755c8cp-32f, 0x1.d268ccp-12f, 0x1.9650b2p-64f, 0.0f, 0.0f,
     0x1.6ae404p-33f, 0x1.c151p-50f, 0x1.7e8a12p-84f, 0x1.1f4fa2p-38f, 0.0f, 0.0f,
     0.0f, 0x1.747c26p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.89e0f8p-79f, 0x1.85485cp-11f,
     0x1.03f60ap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cffd78p-52f, 0.0f, 0x1.cea7e2p-44f,
     0x1.e558dp-33f, 0x1.b06d78p-106f, 0x1.599282p-36f, 0x1.6e02eep-118f,
     0x1.b8b768p-49f, 0x1.05eeaap-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.a389bep-13f, 0x1.caae08p-47f, 0x1.d2cd4cp-11f, 0.0f, 0.0f, 0x1.71c994p-26f,
     0.0f, 0x1.e40a18p-43f
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
            tmp1 = Sleef_fabsf1_purecfma(tmp0);
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
    printf("Sleef_fabsf1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fabsf1_purecfma bench acc %a\n", global_bench_acc);
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
