/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospif1_u05purecfma.c --function \
 *     Sleef_sincospif1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --precision sleef_sf2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float_2 external_bench_wrapper_cst = {.x = 0.0f, .y = 0.0f};
static const Sleef_float_2 external_bench_wrapper_cst1 = {.x = 0.0f, .y = 0.0f};
volatile Sleef_float_2 external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.28ad54p-76f, 0.0f, 0x1.c6c12ep-48f, 0.0f, 0.0f, 0x1.d1a654p-49f,
     0x1.14749p-30f, 0x1.0f0c38p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.61a1a8p-42f, 0x1.9786aep-43f, 0x1.1daa28p-107f,
     0x1.d69bbcp-125f, 0x1.1da8eap-2f, 0x1.a7399ep-25f, 0.0f, 0.0f, 0x1.443f8ap-47f,
     0x1.ea5972p-91f, 0x1.338b2ep-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0083ecp-84f,
     0.0f, 0.0f, 0x1.874e56p-114f, 0.0f, 0.0f, 0x1.72c62ep-118f, 0x1.9bbe2ep-126f,
     0.0f, 0x1.c8d094p-70f, 0.0f, 0x1.41976cp-36f, 0x1.0c621ap-32f, 0x1.121118p-27f,
     0.0f, 0.0f, 0x1.83df2p-92f, 0x1.efee4ep-53f, 0.0f, 0.0f, 0x1.a3db8ap-74f,
     0x1.27d64ap-38f, 0.0f, 0.0f, 0x1.773736p-9f, 0x1.763bd4p-34f, 0.0f,
     0x1.788ea6p-41f, 0.0f, 0x1.963fccp-103f, 0x1.788a0ap-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b75e8ap-58f, 0.0f, 0.0f, 0.0f, 0x1.a9dd14p-8f, 0.0f, 0x1.750844p-67f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dbae3cp-97f, 0x1.6607a2p-23f, 0.0f, 0.0f,
     0x1.95eeep-94f, 0x1.8e100cp-79f, 0.0f, 0.0f, 0x1.302a1ep-48f, 0x1.ee57ccp-110f,
     0x1.b33adcp-49f, 0x1.f756d2p-106f, 0.0f, 0x1.07b73p-23f, 0.0f, 0x1.b0ab0ep-57f,
     0.0f, 0x1.8aba3p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05c474p-104f, 0.0f,
     0x1.e371fap-50f, 0x1.790452p-102f, 0.0f, 0x1.79d27ap-44f, 0.0f, 0x1.7710c6p-96f,
     0.0f, 0.0f, 0.0f, 0x1.f1ef2cp-110f, 0x1.079d18p-24f, 0x1.a3f1e8p-96f,
     0x1.33173p-41f, 0x1.7b9b3cp-10f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.969154p-108f, 0.0f, 0x1.7407dap-78f, 0.0f, 0x1.77152ap-19f, 0x1.4695b8p-123f,
     0.0f, 0x1.4b9902p-25f, 0x1.3a7e08p-5f, 0.0f, 0.0f, 0x1.8a3da6p-55f,
     0x1.9471ap-14f, 0x1.055b6cp-71f, 0x1.aa0eep-82f, 0x1.c77b1p-110f, 0.0f,
     0x1.237d6ap-70f, 0.0f, 0.0f, 0x1.5551fp-48f, 0.0f, 0x1.5e6024p-58f,
     0x1.58d7c2p-125f, 0x1.24dffp-40f, 0x1.14216ep-81f, 0.0f, 0x1.5edd4p-90f,
     0x1.422e48p-114f, 0x1.579fd2p-64f, 0x1.16d44p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8dd17p-13f, 0x1.93c5a2p-19f, 0.0f, 0.0f, 0x1.7b425p-43f, 0.0f, 0.0f, 0.0f,
     0x1.1bb2cp-94f, 0x1.49c6fap-3f, 0x1.e6405ap-62f, 0.0f, 0.0f, 0x1.2a4e6p-77f,
     0x1.d443ep-124f, 0x1.0ad13p-29f, 0.0f, 0x1.58a02ep-93f, 0.0f, 0x1.7a0ac2p-111f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcf1a4p-89f, 0.0f, 0x1.e6dcp-38f, 0.0f, 0.0f,
     0x1.ce760ep-75f, 0x1.02d43p-35f, 0.0f, 0x1.acf5bap-46f, 0.0f, 0x1.d6c748p-73f,
     0.0f, 0x1.178ac6p-126f, 0.0f, 0.0f, 0x1.3279f8p-3f, 0x1.fa4a24p-98f, 0.0f, 0.0f,
     0x1.7001aep-102f, 0.0f, 0.0f, 0.0f, 0x1.711cd2p-119f, 0x1.0494cep-37f, 0.0f,
     0x1.63fb2cp-14f, 0x1.424facp-32f, 0.0f, 0x1.810f82p-53f, 0x1.156518p-79f,
     0x1.fca1aep-112f, 0x1.2fb33p-7f, 0.0f, 0.0f, 0x1.34eae6p-3f, 0.0f,
     0x1.b75edp-121f, 0.0f, 0x1.c721d8p-91f, 0x1.190502p-95f, 0.0f, 0.0f,
     0x1.7a6a3p-119f, 0.0f, 0.0f, 0.0f, 0x1.b06b8ep-59f, 0x1.6783b2p-64f,
     0x1.3133c6p-108f, 0.0f, 0x1.91eacep-117f, 0.0f, 0x1.eb6366p-20f, 0x1.ac061ep-43f,
     0x1.5d618cp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9aa98p-14f, 0x1.5d238p-106f,
     0.0f, 0.0f, 0.0f, 0x1.a61504p-11f, 0.0f, 0x1.f3edf2p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.474fap-126f, 0x1.942d34p-106f, 0.0f, 0x1.139df8p-119f, 0x1.51e3fep-21f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba3498p-12f, 0x1.4f1734p-84f, 0.0f, 0.0f,
     0.0f, 0x1.aba726p-55f, 0x1.eecb9cp-88f, 0.0f, 0x1.a8502p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ff3878p-83f, 0x1.b38918p-76f, 0.0f, 0.0f, 0x1.d0004cp-65f,
     0x1.c242bp-71f, 0x1.2ab2eep-107f, 0x1.56e316p-81f, 0.0f, 0.0f, 0.0f,
     0x1.c67668p-121f, 0.0f, 0x1.46c806p-12f, 0x1.308126p-43f, 0.0f, 0.0f, 0.0f,
     0x1.ff8064p-107f, 0.0f, 0x1.52873ep-52f, 0.0f, 0x1.1f481ap-32f, 0x1.73b80ep-94f,
     0.0f, 0.0f, 0x1.101cp-100f, 0.0f, 0x1.d7b54ep-87f, 0x1.82262cp-88f, 0.0f,
     0x1.e95ccap-56f, 0x1.cc94f2p-119f, 0x1.578994p-39f, 0x1.37b774p-32f,
     0x1.c72f6cp-70f, 0x1.7f44fap-111f, 0.0f, 0x1.bb8a58p-120f, 0.0f, 0.0f,
     0x1.a99fdp-90f, 0x1.159c6ep-81f, 0.0f, 0.0f, 0.0f, 0x1.f8224p-44f, 0.0f,
     0x1.e44a7cp-53f, 0x1.fce762p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a1842p-26f, 0.0f, 0.0f, 0.0f, 0x1.85184cp-37f, 0x1.07fa2ap-63f,
     0x1.4eeed8p-86f, 0.0f, 0x1.e277b4p-21f, 0x1.23a4p-41f, 0x1.f791p-92f,
     0x1.1aad04p-29f, 0x1.cc858ep-30f, 0x1.96ab62p-31f, 0.0f, 0x1.0f282p-85f, 0.0f,
     0x1.8a3ep-119f, 0x1.dca248p-20f, 0.0f, 0.0f, 0x1.46d228p-28f, 0.0f, 0.0f,
     0x1.a81fb2p-25f, 0x1.3880dap-18f, 0x1.7d326ap-45f, 0.0f, 0.0f, 0x1.c5fe12p-87f,
     0x1.f04408p-77f, 0.0f, 0x1.5e8d4ep-75f, 0x1.d97ce4p-15f, 0.0f, 0.0f,
     0x1.6fcddep-35f, 0.0f, 0.0f, 0.0f, 0x1.510e7cp-98f, 0.0f, 0.0f, 0x1.7aa1dcp-87f,
     0.0f, 0x1.7795fp-16f, 0.0f, 0x1.bfd97p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.63c8dep-27f, 0.0f, 0x1.53bep-96f, 0.0f, 0x1.cb10acp-35f, 0.0f,
     0x1.26cd84p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.504bap-40f, 0.0f, 0x1.fe8506p-2f,
     0.0f, 0.0f, 0.0f, 0x1.037998p-112f, 0x1.c2c73cp-18f, 0.0f, 0x1.efe554p-61f,
     0x1.225a38p-115f, 0.0f, 0x1.ce011ap-19f, 0.0f, 0.0f, 0.0f, 0x1.b3867ap-75f,
     0x1.3c93d8p-52f, 0x1.dcbab2p-118f, 0.0f, 0.0f, 0x1.71d1f6p-79f, 0.0f, 0.0f,
     0x1.8d7e6ep-105f, 0x1.9375e8p-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8e64cp-8f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.190d7cp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1d2eb6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.058854p-79f, 0.0f,
     0x1.e6956cp-116f, 0x1.904d08p-86f, 0.0f, 0x1.280bcap-114f, 0.0f, 0.0f, 0.0f,
     0x1.f00946p-14f, 0x1.d159aep-22f, 0.0f, 0.0f, 0x1.c04e7ap-7f, 0.0f,
     0x1.9521b4p-2f, 0x1.3cde3cp-101f, 0.0f, 0x1.78cf14p-45f, 0x1.a99b4cp-33f,
     0x1.510464p-78f, 0x1.506962p-70f, 0x1.36698ap-37f, 0x1.f10576p-72f, 0.0f,
     0x1.d8a4c2p-57f, 0.0f, 0.0f, 0.0f, 0x1.8c928ep-112f, 0x1.1244c4p-85f,
     0x1.5433c6p-6f, 0x1.3dc878p-30f, 0.0f, 0x1.829d48p-77f, 0x1.e72db4p-35f, 0.0f,
     0x1.389ebcp-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d84ca2p-29f,
     0x1.10c3c2p-106f, 0.0f, 0x1.75da56p-7f, 0x1.468876p-54f, 0x1.7b367p-103f, 0.0f,
     0x1.198c66p-56f, 0x1.984c2ep-110f, 0x1.f5cc04p-80f, 0.0f, 0.0f, 0.0f,
     0x1.530744p-116f, 0x1.52650ap-107f, 0x1.7ed468p-108f, 0x1.3f305ap-111f,
     0x1.ade57ep-44f, 0.0f, 0.0f, 0x1.db291cp-4f, 0x1.c2601cp-4f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.4a29cep-82f, 0x1.2d94dcp-5f, 0x1.3e8ea2p-122f, 0x1.2a78c2p-76f, 0.0f,
     0x1.3a6b18p-87f, 0x1.e19b8p-89f, 0x1.ed20c4p-26f, 0.0f, 0x1.cb1808p-14f, 0.0f,
     0.0f, 0x1.34458p-72f, 0x1.e6498ap-38f, 0.0f, 0.0f, 0x1.088b44p-74f, 0.0f, 0.0f,
     0x1.44b5acp-84f, 0x1.3a5daap-115f, 0.0f, 0x1.332984p-5f, 0.0f, 0x1.c02ad6p-100f,
     0x1.d00e9p-70f, 0x1.468eaap-79f, 0x1.7e6e68p-12f, 0.0f, 0.0f, 0x1.9b2d34p-41f,
     0.0f, 0x1.8327c8p-71f, 0.0f, 0x1.e22bbap-122f, 0x1.559eep-115f, 0x1.7b4192p-90f,
     0x1.be2c8p-66f, 0.0f, 0x1.5a0a3ep-50f, 0x1.b4a39cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.78730ap-36f, 0x1.a8371p-91f, 0x1.62a128p-10f, 0x1.126feep-92f,
     0x1.3a5428p-83f, 0.0f, 0.0f, 0.0f, 0x1.ac29dcp-2f, 0.0f, 0x1.bf31fcp-73f,
     0x1.61131p-12f, 0.0f, 0x1.f0f4cp-120f, 0.0f, 0x1.9cdbf6p-106f, 0.0f,
     0x1.ec3812p-105f, 0.0f, 0x1.e3e42ap-43f, 0x1.d62ffep-77f, 0.0f, 0x1.e9ae62p-83f,
     0x1.0ab0d6p-82f, 0x1.1e688p-108f, 0.0f, 0.0f, 0.0f, 0x1.ae09a8p-59f,
     0x1.a9a896p-19f, 0.0f, 0.0f, 0.0f, 0x1.d51f1ap-98f, 0x1.ae186ep-115f,
     0x1.a2358cp-119f, 0x1.667f96p-121f, 0x1.206614p-95f, 0x1.5e1a74p-40f,
     0x1.9caa8ap-47f, 0x1.21ea18p-51f, 0.0f, 0.0f, 0.0f, 0x1.4fda62p-62f, 0.0f, 0.0f,
     0x1.7a9fbp-98f, 0x1.324542p-58f, 0x1.33118cp-6f, 0x1.fd0f4p-48f, 0.0f, 0.0f,
     0.0f, 0x1.2d8838p-60f, 0.0f, 0.0f, 0.0f, 0x1.d4a902p-82f, 0x1.1aee28p-19f,
     0x1.264576p-21f, 0.0f, 0x1.625c6cp-26f, 0.0f, 0x1.a3e45cp-92f, 0x1.0897a6p-114f,
     0.0f, 0x1.d4758cp-115f, 0x1.5e87f6p-92f, 0.0f, 0x1.a36124p-92f, 0x1.d4c58cp-78f,
     0.0f, 0x1.e19454p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cc0a62p-2f, 0x1.99b652p-25f,
     0x1.5d2fdap-109f, 0x1.f148eap-78f, 0x1.88bfe4p-23f, 0.0f, 0.0f, 0x1.67d28cp-111f,
     0x1.8264e4p-116f, 0x1.f8fb6ap-46f, 0.0f, 0.0f, 0x1.db303ap-97f, 0x1.6efcf6p-46f,
     0.0f, 0x1.d40f08p-17f, 0x1.5fedbcp-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8e49cp-54f, 0x1.77b712p-8f, 0x1.67a9d2p-123f, 0x1.08e3ecp-38f, 0.0f, 0.0f,
     0.0f, 0x1.ba0436p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f49d8p-6f, 0x1.fa45a8p-22f,
     0.0f, 0.0f, 0x1.67db66p-7f, 0.0f, 0.0f, 0x1.bf9832p-97f, 0.0f, 0x1.4c36c2p-56f,
     0.0f, 0x1.d915ecp-35f, 0x1.de3a8ap-100f, 0.0f, 0.0f, 0x1.e119ccp-112f,
     0x1.b271cap-64f, 0x1.357bbcp-71f, 0x1.aefce6p-65f, 0x1.d8ec32p-17f,
     0x1.179d5cp-40f, 0x1.dbe88cp-62f, 0.0f, 0x1.f7959p-41f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.7beefap-31f, 0.0f, 0.0f, 0x1.ca5028p-32f, 0.0f, 0x1.b21fep-50f, 0.0f,
     0x1.630692p-29f, 0x1.69e84cp-107f, 0.0f, 0.0f, 0.0f, 0x1.8053f6p-78f, 0.0f,
     0x1.a4046cp-91f, 0x1.bc1d66p-86f, 0.0f, 0.0f, 0x1.822fd2p-57f, 0x1.a74c7ep-41f,
     0.0f, 0.0f, 0x1.aa08eep-110f, 0.0f, 0x1.838fecp-87f, 0.0f, 0.0f, 0x1.5f7e8p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.421b4ep-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5005a2p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a65246p-113f, 0x1.b681e8p-82f,
     0x1.5baee8p-113f, 0x1.451678p-35f, 0x1.de3ecep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b3a7cep-99f, 0x1.54056ap-122f, 0x1.1a2448p-54f, 0.0f, 0.0f, 0x1.e1da4p-48f,
     0.0f, 0x1.3483cp-117f, 0.0f, 0.0f, 0x1.7fe806p-19f, 0x1.69d5d4p-116f,
     0x1.c8c856p-101f, 0.0f, 0x1.4ef242p-109f, 0x1.7a5002p-80f, 0x1.f8ab6cp-126f,
     0.0f, 0.0f, 0x1.e9cf3p-91f, 0.0f, 0.0f, 0.0f, 0x1.33de5ep-78f, 0x1.445032p-84f,
     0.0f, 0x1.524332p-92f, 0.0f, 0.0f, 0x1.efb896p-10f, 0.0f, 0.0f, 0.0f,
     0x1.a59b22p-116f, 0x1.11ac02p-6f, 0x1.3ac7b2p-100f, 0x1.e773b6p-53f,
     0x1.bd0024p-116f, 0x1.a82d9ap-29f, 0.0f, 0.0f, 0x1.972688p-48f, 0.0f, 0.0f,
     0x1.2c62b4p-12f, 0x1.3952ecp-62f, 0x1.cb61aap-55f, 0.0f, 0x1.3e23eep-19f,
     0x1.7e5676p-93f, 0x1.5416ap-47f, 0x1.72cea4p-35f, 0.0f, 0.0f, 0x1.abe4a6p-76f,
     0x1.fbe324p-16f, 0x1.638facp-100f, 0x1.458546p-111f, 0.0f, 0x1.7bbd16p-125f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.baa654p-56f, 0.0f, 0x1.bd2cfp-13f, 0x1.5c7c0ap-30f,
     0x1.dda216p-32f, 0.0f, 0x1.807568p-12f, 0x1.dc20dp-37f, 0x1.f1f744p-114f,
     0x1.a5b096p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5cd54p-76f, 0.0f,
     0x1.2afccap-54f, 0.0f, 0x1.7deb32p-80f, 0.0f, 0x1.865d92p-14f, 0x1.df0f9ap-35f,
     0x1p0f, 0x1.aebffap-27f, 0.0f, 0.0f, 0x1.0bed02p-112f, 0x1.cc20c8p-108f, 0.0f,
     0x1.dbb3c8p-117f, 0.0f, 0x1.2542acp-38f, 0x1.154616p-11f, 0x1.d5f592p-101f,
     0x1.5c355cp-83f, 0x1.ecf3d4p-38f, 0x1.17b4a2p-103f, 0.0f, 0.0f, 0.0f,
     0x1.1bec54p-91f, 0x1.391692p-80f, 0.0f, 0x1.c08b18p-59f, 0x1.ab9e46p-5f,
     0x1.a41186p-105f, 0.0f, 0.0f, 0.0f, 0x1.ccf632p-63f, 0.0f, 0.0f, 0.0f,
     0x1.43c4d4p-108f, 0.0f, 0.0f, 0.0f, 0x1.dffa1p-43f, 0.0f, 0.0f, 0.0f,
     0x1.b001eap-21f, 0.0f, 0.0f, 0.0f, 0x1.a6e638p-9f, 0.0f, 0.0f, 0x1.4eb1dcp-12f,
     0x1.f413f4p-46f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8107b4p-2f, 0.0f, 0.0f,
     0x1.3073a2p-114f, 0x1.6237bap-62f, 0x1.16bfap-35f, 0x1.435f4ap-119f, 0.0f, 0.0f,
     0x1.6a57bep-101f, 0x1.7fac92p-119f, 0.0f, 0x1.e81406p-66f, 0x1.13301cp-54f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0b875ap-33f, 0.0f, 0x1.861ce8p-95f, 0x1.e695e2p-116f,
     0x1.2d1e72p-34f, 0.0f, 0x1.03f01p-31f, 0.0f, 0x1.a00bcap-27f, 0x1.8ab8fp-21f,
     0x1.e670a4p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9f052p-80f, 0.0f, 0x1.b1365p-62f,
     0.0f, 0x1.fc9288p-26f, 0x1.bf9572p-75f, 0x1.8293cep-115f, 0.0f, 0x1.0c0a6cp-48f,
     0.0f, 0.0f, 0x1.e9e352p-112f, 0.0f, 0x1.045526p-43f, 0.0f, 0x1.73492ep-40f, 0.0f,
     0.0f, 0x1.d03ccp-57f, 0.0f, 0x1.502324p-124f, 0x1.dc896ap-98f, 0x1.a2b1d2p-90f,
     0.0f, 0.0f, 0x1.c5364ep-30f, 0x1.db7c96p-89f, 0x1.8444dp-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0629a2p-100f, 0x1.8644bcp-19f, 0.0f, 0x1.9ca4f8p-108f, 0.0f,
     0x1.5e6d94p-125f, 0x1.c81b52p-109f, 0x1.e8190cp-87f, 0x1.f27802p-10f,
     0x1.68e3a4p-110f, 0.0f, 0.0f, 0.0f, 0x1.cdbe5p-114f, 0.0f, 0x1.c07352p-21f,
     0x1.e0eb3ep-66f, 0x1.3df276p-76f, 0x1.4ec816p-45f, 0x1.1eafc8p-47f, 0.0f, 0.0f,
     0x1.9fad5ep-21f, 0x1.7d308cp-65f, 0.0f, 0x1.00a2a4p-97f, 0.0f, 0x1.8ce64ep-34f,
     0x1.b213bep-75f, 0x1.38488ap-101f, 0x1.dba522p-12f, 0.0f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float_2 global_bench_acc;
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
        Sleef_float_2 bench_acc;
        int32_t i;
        float tmp0;
        float tmp1;
        float tmp2;
        float tmp3;
        float tmp4;
        float tmp5;
        Sleef_float_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            float tmp0;
            Sleef_float_2 tmp1;
            float tmp2;
            float tmp3;
            float tmp4;
            float tmp5;
            float tmp6;
            float tmp7;
            Sleef_float_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincospif1_u05purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincospif1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospif1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
