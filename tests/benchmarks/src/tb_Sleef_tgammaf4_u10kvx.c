/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammaf4_u10kvx.c --function Sleef_tgammaf4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0x1.fcc2aap-100f, 0x1.307dc4p-115f, 0.0f, 0.0f, 0x1.921558p-46f, 0.0f,
     0x1.bdc70cp-71f, 0x1.70d082p-8f, 0.0f, 0x1.e69dcap-60f, 0x1.77695p-112f,
     0x1.e95182p-7f, 0.0f, 0x1.2cfc64p-73f, 0.0f, 0x1.a12f7cp-67f, 0.0f, 0.0f,
     0x1.a6f15cp-109f, 0x1.5bd8f8p-66f, 0.0f, 0x1.2421ecp-95f, 0.0f, 0.0f,
     0x1.6fc82cp-2f, 0.0f, 0x1.d8ee36p-3f, 0x1.d2c998p-24f, 0.0f, 0x1.34dedcp-92f,
     0.0f, 0x1.ba5e76p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e1e7ep-114f,
     0x1.479614p-98f, 0x1.aaf73p-51f, 0.0f, 0x1.6527ccp-63f, 0.0f, 0.0f, 0.0f,
     0x1.fe73ecp-36f, 0x1.54953cp-111f, 0x1.03b38p-20f, 0x1.dda17cp-28f, 0.0f, 0.0f,
     0x1.52be74p-113f, 0.0f, 0.0f, 0x1.c50deep-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.30d852p-73f, 0x1.5d0ce2p-27f, 0x1.810c96p-106f,
     0x1.60e1c4p-29f, 0.0f, 0x1.ee6292p-101f, 0x1.f303ap-63f, 0.0f, 0.0f, 0.0f,
     0x1.88a69cp-7f, 0x1.c94502p-41f, 0.0f, 0x1.15d16ep-50f, 0.0f, 0x1.7e421cp-73f,
     0.0f, 0.0f, 0x1.beedf2p-4f, 0.0f, 0x1.89f994p-119f, 0x1.7b3826p-63f,
     0x1.2b98cap-32f, 0.0f, 0x1.4812c4p-25f, 0x1.1bddaep-119f, 0.0f, 0x1.848d1ap-84f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c892bcp-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ff054p-52f, 0.0f, 0x1.68b09cp-118f, 0x1.d77a4ep-107f, 0x1.ea406p-22f,
     0.0f, 0x1.e08bfp-48f, 0.0f, 0x1.9ddfe4p-35f, 0x1.dd82a4p-63f, 0x1.3e726cp-67f,
     0x1.e506d4p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daa2cp-76f, 0.0f,
     0x1.9a09e6p-44f, 0x1.4a1892p-14f, 0x1.4ba22ep-98f, 0.0f, 0x1.bff676p-60f,
     0x1.10061cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b784p-8f, 0x1.b14d2p-112f, 0.0f,
     0x1.ac377ep-43f, 0.0f, 0.0f, 0.0f, 0x1.efadb6p-65f, 0.0f, 0x1.3ccbccp-24f,
     0x1.16e4c6p-17f, 0.0f, 0x1.8c44bcp-82f, 0.0f, 0x1.2737dep-11f, 0x1.e20656p-20f,
     0.0f, 0x1.42a16ap-19f, 0x1.24ac5p-31f, 0x1.2076p-31f, 0.0f, 0x1.53185ep-9f,
     0x1.2477a2p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dab7bcp-123f, 0.0f, 0.0f,
     0x1.3b709p-69f, 0x1.a69c34p-22f, 0.0f, 0.0f, 0x1.6c094cp-112f, 0.0f,
     0x1.544296p-10f, 0.0f, 0x1.d73262p-3f, 0x1.cc31f8p-93f, 0.0f, 0x1.1742bap-122f,
     0x1.b0a2b4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.264fdp-91f, 0.0f, 0x1.77baf8p-126f,
     0x1.5e5baep-40f, 0x1.58b742p-12f, 0x1.6596acp-68f, 0.0f, 0.0f, 0x1.f01eeap-120f,
     0.0f, 0.0f, 0x1.f56ecap-32f, 0.0f, 0.0f, 0.0f, 0x1.58c7b4p-39f, 0.0f,
     0x1.89d3cp-80f, 0x1.d16074p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.764ca6p-113f,
     0x1.6c0cfp-19f, 0.0f, 0x1.0457dap-106f, 0x1.b6d178p-51f, 0.0f, 0x1.533f4p-79f,
     0.0f, 0x1.760b6cp-40f, 0.0f, 0x1.2f3938p-125f, 0.0f, 0x1.e9e35cp-41f,
     0x1.f98176p-56f, 0x1.95ccb4p-62f, 0x1.5283a2p-46f, 0.0f, 0.0f, 0x1.fe27c2p-9f,
     0.0f, 0.0f, 0.0f, 0x1.ffb73ep-38f, 0.0f, 0.0f, 0x1.a861p-101f, 0x1p0f,
     0x1.c3db12p-65f, 0.0f, 0x1.5c8404p-110f, 0.0f, 0x1.7569e2p-119f, 0.0f,
     0x1.e488e6p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c6616p-77f, 0.0f, 0x1.998cacp-120f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e63b38p-55f, 0x1.0467d6p-88f, 0.0f,
     0x1.4fa70ep-58f, 0x1.006dbp-84f, 0.0f, 0.0f, 0x1.ea4eacp-107f, 0x1.c571f8p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb8036p-47f, 0.0f, 0.0f,
     0x1.f8a6dcp-80f, 0.0f, 0x1.c6c69ep-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e46c8p-88f, 0x1.c35f82p-112f,
     0x1.151292p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6182a4p-16f, 0x1.ab49ccp-79f,
     0.0f, 0x1.f04abep-3f, 0x1.88100cp-83f, 0x1.f9b6c4p-46f, 0x1.05c8c8p-35f,
     0x1.d64aap-73f, 0.0f, 0x1.0d864cp-76f, 0x1.1d92b2p-57f, 0.0f, 0x1.49e502p-56f,
     0.0f, 0x1.85b2acp-102f, 0.0f, 0x1.1d6314p-79f, 0.0f, 0x1.ae4284p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9653dap-43f, 0.0f, 0.0f, 0.0f, 0x1.873044p-59f, 0.0f,
     0x1.5663e8p-75f, 0x1.8270bep-76f, 0x1.c85becp-89f, 0x1.f28d22p-64f,
     0x1.730e18p-27f, 0.0f, 0.0f, 0x1.d6782cp-124f, 0x1.1e415cp-36f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.dcd0e2p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bf7644p-59f, 0.0f,
     0.0f, 0x1.180534p-91f, 0x1.efc7d8p-65f, 0x1.9bd71cp-77f, 0x1.8bc112p-33f, 0.0f,
     0x1.a574ep-4f, 0.0f, 0x1.df6a7p-46f, 0.0f, 0x1.a44a82p-96f, 0x1.9bb3dep-116f,
     0.0f, 0x1.61043ap-30f, 0.0f, 0x1.0fb5a4p-86f, 0.0f, 0x1.fd547p-120f,
     0x1.99a99p-105f, 0.0f, 0x1.59c8d8p-29f, 0x1.3702cp-121f, 0.0f, 0x1.8951cp-85f,
     0x1.61e8d8p-2f, 0x1.8c1856p-112f, 0x1.439d92p-28f, 0.0f, 0x1.9b069ep-121f, 0.0f,
     0.0f, 0x1.a980c2p-94f, 0.0f, 0x1.254bccp-123f, 0x1.ef03fcp-45f, 0x1.b3f124p-67f,
     0x1.3449ep-20f, 0x1.bafea2p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f13ba6p-10f,
     0x1.9e0f4p-1f, 0x1.9dec54p-84f, 0.0f, 0.0f, 0.0f, 0x1.90929p-24f,
     0x1.e25b28p-33f, 0x1.2eb976p-103f, 0.0f, 0.0f, 0x1.370e5cp-12f, 0.0f, 0.0f,
     0x1.e6ba3ap-61f, 0x1.2f5864p-78f, 0x1.234a06p-97f, 0.0f, 0x1.710bfap-3f, 0.0f,
     0.0f, 0x1.128e08p-77f, 0x1.ddde0cp-42f, 0x1.3b87b2p-96f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.279f52p-29f, 0.0f, 0x1.3bc9bp-46f, 0.0f, 0x1.4926d2p-120f, 0x1.89742cp-21f,
     0x1.7b827ap-25f, 0.0f, 0.0f, 0x1.4abc98p-1f, 0.0f, 0.0f, 0x1.f74e4ep-36f, 0.0f,
     0.0f, 0x1.d39724p-21f, 0.0f, 0x1.e6d316p-35f, 0x1.caad9cp-123f, 0x1.b093c2p-13f,
     0.0f, 0.0f, 0.0f, 0x1.a304acp-108f, 0x1.bea35ep-65f, 0.0f, 0.0f, 0x1.7053f6p-63f,
     0.0f, 0.0f, 0x1.dc2f48p-122f, 0.0f, 0x1.a5e23cp-17f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e742eep-124f, 0x1.86a72ep-27f, 0x1.bf693ap-30f, 0x1.817e98p-39f,
     0x1.0e2ad6p-111f, 0x1.7d1ed4p-59f, 0.0f, 0.0f, 0x1.746a22p-95f, 0x1.3a136ap-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f322e6p-63f, 0x1.f994a2p-68f, 0x1.1a926ep-98f,
     0x1.7b9f44p-65f, 0x1.c3db2p-115f, 0.0f, 0.0f, 0.0f, 0x1.dd2b38p-13f,
     0x1.91ddfcp-117f, 0.0f, 0x1.8ee09ap-58f, 0.0f, 0.0f, 0x1.3c081ep-11f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fc8b1cp-35f, 0.0f, 0x1.697902p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d503bep-68f, 0x1.1c6476p-115f, 0x1.34951cp-23f, 0x1.202b88p-56f,
     0x1.492c78p-109f, 0x1.6d3bf4p-36f, 0.0f, 0.0f, 0x1.24406cp-37f, 0x1.4eb9fp-37f,
     0.0f, 0x1.da1ea4p-109f, 0.0f, 0x1.31e228p-23f, 0.0f, 0x1.42c332p-11f, 0.0f,
     0x1.cbb646p-94f, 0.0f, 0.0f, 0x1.0a235p-76f, 0x1.ee0c58p-116f, 0x1.b37b56p-90f,
     0.0f, 0.0f, 0x1.abeb68p-45f, 0x1.eb351p-57f, 0x1.5755c2p-53f, 0x1.ab3132p-105f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ec104p-70f, 0x1.c9b3aap-32f, 0.0f, 0.0f,
     0x1.1dff82p-69f, 0x1.677b2cp-85f, 0.0f, 0x1.e94a98p-36f, 0x1.914abap-63f, 0.0f,
     0.0f, 0.0f, 0x1.8ba2b4p-35f, 0x1.7acd96p-101f, 0.0f, 0x1.ed8806p-21f,
     0x1.26c4p-52f, 0x1.1b0b06p-51f, 0.0f, 0.0f, 0x1.2c650cp-62f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8cebeap-74f, 0.0f, 0x1.f8aa58p-52f, 0.0f, 0.0f, 0x1.b10792p-65f, 0.0f,
     0x1.d344fep-57f, 0x1.6b08fap-120f, 0.0f, 0.0f, 0.0f, 0x1.b83b1ep-123f,
     0x1.73d92cp-92f, 0.0f, 0.0f, 0.0f, 0x1.31867ep-92f, 0x1.127b4cp-65f, 0.0f,
     0x1.d58cdap-8f, 0x1.404aeep-26f, 0x1.b287fp-120f, 0x1.ffe5dep-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3ff10cp-101f, 0x1.7feb14p-75f, 0.0f, 0x1.b03398p-60f,
     0x1.59e37p-78f, 0x1.37bf04p-29f, 0x1.19064ep-24f, 0x1.b14eeap-75f,
     0x1.aaae06p-124f, 0x1.bbfbdp-85f, 0.0f, 0.0f, 0x1.aa7372p-70f, 0x1.83a8dcp-19f,
     0x1.6239a2p-113f, 0.0f, 0x1.a71792p-62f, 0x1.1f869ap-23f, 0.0f, 0x1.3377fp-97f,
     0x1.883daap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7bd88p-40f, 0.0f,
     0x1.1372f4p-8f, 0x1.515fc2p-51f, 0x1.a78332p-92f, 0x1.f76edp-89f,
     0x1.a41ebep-99f, 0x1.a38fep-47f, 0x1.0cae06p-13f, 0x1.eefebcp-32f, 0.0f,
     0x1.ae2e7p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.192478p-4f, 0x1.425af2p-106f,
     0x1.9d5f24p-41f, 0.0f, 0x1.377844p-49f, 0.0f, 0.0f, 0x1.78c11ep-4f, 0.0f,
     0x1.4ecfb8p-124f, 0x1.662e88p-21f, 0x1.ab34acp-115f, 0.0f, 0.0f,
     0x1.267792p-118f, 0x1.036ffp-52f, 0x1.c4a8e4p-17f, 0.0f, 0.0f, 0x1.d1094cp-26f,
     0x1.f0f0eep-115f, 0x1.827744p-56f, 0x1.4efcf8p-29f, 0.0f, 0.0f, 0x1.ee0202p-82f,
     0x1.b094d4p-118f, 0x1.92d276p-82f, 0x1.2cffd8p-52f, 0x1.7fc412p-31f,
     0x1.1cf5c8p-30f, 0x1.b39002p-72f, 0.0f, 0x1.bbbcf6p-48f, 0x1.a7f7a6p-81f,
     0x1.9ae2aep-116f, 0x1.5742fp-8f, 0.0f, 0.0f, 0x1.808b4ap-49f, 0x1.94a6b6p-38f,
     0x1.fb335ep-40f, 0.0f, 0x1.0ec344p-71f, 0x1.77138p-18f, 0.0f, 0x1.97ec48p-14f,
     0.0f, 0.0f, 0.0f, 0x1.9cd392p-17f, 0x1.55f2d8p-57f, 0x1.ecfe82p-63f,
     0x1.7710c4p-106f, 0.0f, 0x1.1d8b5ap-125f, 0x1.d9bac4p-58f, 0.0f, 0.0f,
     0x1.98efp-41f, 0.0f, 0x1.7fe7c4p-30f, 0x1.027f66p-126f, 0.0f, 0.0f, 0.0f,
     0x1.3a2b84p-59f, 0.0f, 0x1.779b72p-90f, 0x1.598326p-115f, 0x1.c064c4p-10f,
     0x1.6d3b3ap-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8b9b8p-12f, 0.0f,
     0x1.a5cf28p-19f, 0x1.402ee8p-20f, 0x1.ac1fd2p-57f, 0x1.92d654p-92f,
     0x1.d0067ep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6680d6p-27f, 0.0f, 0.0f, 0.0f,
     0x1.685d3ep-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63dc8ep-2f, 0x1.7ee44ep-83f,
     0x1.a96462p-7f, 0.0f, 0.0f, 0.0f, 0x1.d38b78p-32f, 0.0f, 0x1.8d61acp-78f, 0.0f,
     0x1.61ae2cp-119f, 0.0f, 0x1.ee64c6p-28f, 0.0f, 0.0f, 0x1.e014f6p-71f,
     0x1.00593ap-11f, 0.0f, 0x1.3d186p-60f, 0.0f, 0.0f, 0x1.4a5662p-100f, 0.0f,
     0x1.6c7422p-48f, 0x1.ade828p-4f, 0.0f, 0x1.ee452p-59f, 0x1.a2361p-31f, 0.0f,
     0x1.533262p-76f, 0.0f, 0.0f, 0x1.aa3a32p-9f, 0.0f, 0x1.fcccd4p-109f,
     0x1.3df98p-117f, 0x1.2753b4p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b974f4p-64f,
     0.0f, 0x1.39ee3p-68f, 0.0f, 0x1.4e2faap-25f, 0.0f, 0.0f, 0.0f, 0x1.8d7cb4p-56f,
     0x1.eae30ep-97f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.2c928ap-50f,
     0x1.a7c116p-30f, 0.0f, 0x1.c8035ep-70f, 0.0f, 0.0f, 0x1.a806e2p-15f,
     0x1.0f449p-55f, 0x1.4691fap-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d917a8p-47f,
     0x1.ca433ep-96f, 0x1.d4703p-122f, 0x1.4fa09p-11f, 0.0f, 0x1.03f8c2p-117f,
     0x1.ce0ffep-111f, 0.0f, 0x1.c2f2a2p-91f, 0.0f, 0x1.2e042cp-101f, 0.0f,
     0x1.733f0cp-89f, 0x1.56b58ap-8f, 0x1.78d4fap-64f, 0x1.dff92ap-111f,
     0x1.8d415cp-109f, 0x1.c179fep-100f, 0.0f, 0.0f, 0x1.38477p-120f, 0.0f,
     0x1.46a034p-103f, 0.0f, 0x1.89c984p-14f, 0x1.69add2p-125f, 0x1.f5a634p-101f,
     0x1.f93a9cp-121f, 0x1.9c2d84p-119f, 0.0f, 0x1.3c71dcp-103f, 0.0f,
     0x1.b735a8p-103f, 0.0f, 0x1.2d7d7cp-88f, 0x1.1335d8p-39f, 0x1.6c5aa2p-88f,
     0x1.406acep-67f, 0.0f, 0x1.c5e3eep-109f, 0.0f, 0x1.d3d7dep-41f, 0x1.09e8c2p-101f,
     0x1.2cf1dep-89f, 0.0f, 0.0f, 0x1.f5bc0cp-78f, 0.0f, 0x1.3344f6p-8f, 0.0f,
     0x1.670a46p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3d5a8p-123f, 0x1.01fa48p-90f,
     0x1.0810d8p-23f, 0.0f, 0x1.64889ap-30f, 0.0f, 0.0f, 0x1.65cb96p-80f,
     0x1.d160aep-23f, 0x1.19ae14p-94f, 0.0f, 0.0f, 0x1.efea94p-75f, 0.0f,
     0x1.a45036p-117f, 0x1.a6588cp-124f, 0x1.4b69p-59f, 0.0f, 0x1.f338c6p-72f, 0.0f,
     0x1.e4be9ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8ed4p-124f, 0x1.0567p-65f, 0.0f,
     0x1.fabff8p-86f, 0x1.9677e8p-62f, 0.0f, 0x1.2bd168p-99f, 0x1.f1d6acp-61f, 0.0f,
     0x1.9b7d4p-49f, 0x1.b66ed6p-39f, 0x1.6ba9a6p-115f, 0x1.b15dfap-5f, 0.0f, 0.0f,
     0.0f, 0x1.67f02ep-41f, 0.0f, 0x1.e7251cp-61f, 0.0f, 0.0f, 0.0f, 0x1.112e18p-72f,
     0x1.317d2ep-96f, 0x1.fe7752p-111f, 0x1.b394ap-44f, 0x1.58f552p-11f,
     0x1.2fd87p-82f, 0.0f, 0x1.b2bc12p-39f, 0x1.27e5e6p-71f, 0.0f, 0x1.979dbep-38f,
     0x1.c0169ap-85f, 0x1.46b1f6p-77f, 0x1.8dd564p-14f, 0.0f, 0.0f, 0x1.f2ee34p-117f,
     0x1.bcd8d8p-49f, 0.0f, 0.0f, 0x1.517986p-16f, 0x1.086076p-101f, 0x1.c07c64p-13f,
     0x1.f12f64p-78f, 0x1.418b2p-71f, 0.0f, 0x1.92a436p-82f, 0x1.c70e3cp-87f, 0.0f,
     0x1.d43428p-99f, 0.0f, 0.0f, 0x1.3b4d54p-62f, 0x1.d3ccdap-24f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c1294p-90f, 0.0f, 0x1.0faa3p-58f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.132694p-96f, 0x1.2d2796p-2f, 0.0f, 0x1.3cd996p-120f, 0.0f, 0.0f,
     0x1.66c52p-118f, 0.0f, 0x1.5ac2acp-125f, 0.0f, 0x1.5d14d8p-76f, 0x1.ef7c8cp-32f,
     0.0f, 0x1.06ef8p-85f, 0.0f, 0.0f, 0x1.86a3bcp-80f, 0x1.8fe786p-63f,
     0x1.9458ccp-53f, 0x1.5b44bap-53f, 0x1.27d9ecp-7f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c871fp-10f, 0x1.1b2228p-33f, 0.0f, 0.0f, 0.0f, 0x1.540ebap-44f, 0.0f,
     0x1.e5138p-69f, 0.0f, 0.0f, 0x1.fcb0e6p-33f, 0x1.39eacp-81f, 0x1.d35ff2p-33f,
     0.0f, 0.0f, 0.0f, 0x1.81a9a6p-17f, 0x1.6e85bp-86f, 0x1.e446c6p-110f,
     0x1.e4e8a8p-69f, 0x1.21132ap-106f, 0.0f, 0x1.a028b4p-2f, 0.0f, 0x1.9f9166p-88f,
     0.0f, 0x1.e8e15p-89f, 0.0f, 0x1.c30f08p-80f, 0.0f, 0x1.4994fcp-94f, 0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_tgammaf4_u10kvx(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_tgammaf4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tgammaf4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
