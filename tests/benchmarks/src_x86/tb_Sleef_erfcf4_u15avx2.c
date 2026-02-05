/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcf4_u15avx2128.c --function Sleef_erfcf4_u15avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
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
     0x1.8e8f0ep-50f, 0x1.911b56p-18f, 0.0f, 0.0f, 0x1.09f5f4p-110f, 0.0f, 0.0f,
     0x1.186ea6p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.770c16p-59f, 0x1.a4e9c6p-35f, 0.0f,
     0.0f, 0x1.a4c14ap-72f, 0x1.29d0cap-9f, 0x1.6a373p-12f, 0x1.897c4ep-6f,
     0x1.eab6fep-37f, 0x1.f4537ap-9f, 0.0f, 0x1.6bb158p-64f, 0x1.ec4db4p-80f,
     0x1.1b644cp-49f, 0.0f, 0x1.81df42p-71f, 0x1.152202p-95f, 0.0f, 0x1.ac6b1cp-76f,
     0x1.71d116p-16f, 0.0f, 0.0f, 0x1.61d32ep-1f, 0x1.f3779ep-16f, 0.0f, 0.0f,
     0x1.b8e8dcp-35f, 0.0f, 0.0f, 0x1.f0bd36p-108f, 0.0f, 0x1.ffc794p-117f,
     0x1.40d31cp-99f, 0x1.c70d5p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.58229p-52f,
     0x1.f50916p-34f, 0x1.204f8ap-24f, 0x1.a4bd24p-95f, 0.0f, 0x1.56d714p-108f, 0.0f,
     0.0f, 0x1.db9a94p-50f, 0.0f, 0x1.2661fep-10f, 0.0f, 0x1.fdb788p-84f, 0.0f,
     0x1.c1fe2ap-27f, 0x1.d4b222p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1b5156p-16f, 0.0f,
     0.0f, 0.0f, 0x1.89c55ap-103f, 0.0f, 0x1.0f6132p-9f, 0x1.282e6ap-8f,
     0x1.03dddp-25f, 0.0f, 0x1.7bbc28p-116f, 0x1.ac4956p-28f, 0x1.27a744p-9f, 0.0f,
     0.0f, 0.0f, 0x1.91f94ep-18f, 0x1.c17556p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e68eb8p-45f, 0.0f, 0.0f, 0.0f, 0x1.8c4e34p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.809b3ep-25f, 0.0f, 0.0f, 0x1.52fbbcp-109f, 0x1.c528b2p-67f, 0.0f,
     0x1.ab2376p-83f, 0.0f, 0x1.c463ap-68f, 0.0f, 0x1.84c5p-61f, 0x1.c4fc74p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.15b732p-49f, 0.0f, 0.0f, 0x1.5cee94p-86f, 0.0f, 0.0f,
     0x1.fb4a94p-109f, 0.0f, 0.0f, 0.0f, 0x1.787d38p-114f, 0x1.7ac598p-125f,
     0x1.46be1ep-126f, 0.0f, 0.0f, 0.0f, 0x1.1dc002p-58f, 0.0f, 0.0f, 0x1.82212cp-79f,
     0.0f, 0x1.eda524p-101f, 0x1.935beap-102f, 0x1.5eaffcp-125f, 0.0f,
     0x1.5c04eap-76f, 0.0f, 0x1.667f82p-56f, 0x1.c65868p-103f, 0x1.be5a16p-44f,
     0x1.35e372p-39f, 0x1.bf59b2p-4f, 0.0f, 0.0f, 0x1.267f9ap-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8af764p-36f, 0x1.9c393cp-39f, 0x1.f17116p-63f, 0.0f, 0x1.34b292p-33f,
     0.0f, 0.0f, 0x1.e6a9aep-30f, 0.0f, 0.0f, 0x1.3e35fp-102f, 0.0f, 0.0f, 0.0f,
     0x1.28a2c2p-94f, 0x1.09c5dp-44f, 0.0f, 0x1.10ec8ap-76f, 0.0f, 0x1.01c25ep-81f,
     0.0f, 0.0f, 0.0f, 0x1.73c3f6p-66f, 0x1.844a46p-6f, 0.0f, 0x1.bc5c76p-18f, 0.0f,
     0x1.8738dcp-61f, 0.0f, 0x1.b0e004p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cf3ac8p-118f, 0x1.dff29p-84f, 0.0f, 0.0f, 0.0f, 0x1.76d492p-14f, 0.0f, 0.0f,
     0x1p0f, 0x1.fd3d78p-29f, 0x1.418508p-82f, 0x1.f9a048p-77f, 0x1.46a534p-83f,
     0x1.8cc44cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.012194p-15f, 0x1.2ef42ap-83f, 0.0f, 0.0f, 0x1.34a6bep-117f, 0.0f,
     0x1.56d23p-98f, 0.0f, 0.0f, 0x1.1728p-20f, 0.0f, 0x1.3642f4p-42f,
     0x1.e9e1b2p-115f, 0.0f, 0x1.3df43ap-121f, 0x1.15a7bap-85f, 0x1.708122p-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.afd068p-22f, 0x1.1e4e12p-29f, 0x1.468abcp-92f, 0.0f, 0.0f,
     0x1.100894p-55f, 0.0f, 0.0f, 0x1.64274ap-117f, 0.0f, 0.0f, 0x1.49cb74p-6f,
     0x1.3f128p-48f, 0.0f, 0.0f, 0x1.67c74ap-56f, 0x1.c80be6p-53f, 0x1.f3cbc2p-46f,
     0x1.6bc0cep-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7e7f6p-28f, 0.0f, 0.0f,
     0x1.7db6dap-50f, 0x1.370e4p-9f, 0x1.616a08p-79f, 0x1.a7cf2p-60f, 0.0f,
     0x1.23337p-32f, 0.0f, 0x1.ad6734p-101f, 0.0f, 0x1.3b5bfp-3f, 0x1.4b349ep-120f,
     0x1.62aa88p-87f, 0x1.d2fc9p-34f, 0x1.63e8d8p-34f, 0x1.136318p-72f, 0.0f, 0.0f,
     0.0f, 0x1.f20f0ap-87f, 0.0f, 0x1.cb3bb2p-59f, 0.0f, 0x1.467c8p-47f,
     0x1.69489p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e3b52p-33f, 0x1.2fae56p-66f,
     0.0f, 0x1.6b2d34p-10f, 0.0f, 0x1.dc5188p-39f, 0x1.27f242p-126f, 0x1.32db48p-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.898186p-100f, 0x1.4f5fd8p-111f,
     0x1.906c2ep-59f, 0x1.3f84dp-19f, 0x1.13f002p-36f, 0x1.b00e24p-5f, 0x1.20ca9ep-5f,
     0x1.302802p-86f, 0.0f, 0.0f, 0.0f, 0x1.615736p-92f, 0x1.56e938p-67f, 0.0f, 0.0f,
     0x1.e884cp-71f, 0.0f, 0x1.99c778p-123f, 0x1.d3db54p-95f, 0.0f, 0.0f,
     0x1.c9ce5ep-63f, 0x1.241062p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.07bb46p-73f, 0x1.25c266p-120f, 0x1.6f43cp-64f, 0.0f, 0x1.03abc8p-36f, 0.0f,
     0.0f, 0x1.e71952p-67f, 0x1.c46e3cp-50f, 0x1.12fdfap-24f, 0x1.f05618p-120f, 0.0f,
     0.0f, 0x1.2c4344p-75f, 0.0f, 0.0f, 0x1.9ae42ap-66f, 0.0f, 0x1.683ed4p-110f,
     0x1.b5ff84p-23f, 0x1.afbf0ap-14f, 0x1.f26eb6p-63f, 0.0f, 0x1.dbd71ep-70f,
     0x1.a5cbdp-102f, 0.0f, 0.0f, 0x1.f3af5ap-42f, 0x1.d0198ap-51f, 0.0f, 0.0f,
     0x1.73bd74p-92f, 0x1.9597d2p-84f, 0x1.55699ep-37f, 0x1.7433c2p-65f,
     0x1.02aeb2p-8f, 0x1.a78154p-78f, 0.0f, 0.0f, 0x1.3e586ap-63f, 0.0f, 0.0f,
     0x1.33458p-102f, 0.0f, 0.0f, 0x1.ff50f2p-49f, 0.0f, 0.0f, 0.0f, 0x1.bad9d8p-12f,
     0x1.35db36p-21f, 0x1.cfdfd6p-120f, 0x1.4d5f4p-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b901ep-52f, 0x1.ff83dep-104f, 0x1.a4563p-9f, 0.0f, 0.0f, 0.0f,
     0x1.750c8ap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6acb68p-31f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b4fbc8p-33f, 0.0f, 0x1.aef14ep-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0be164p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.05b69ep-84f, 0x1.19204cp-63f,
     0x1.f6fc4p-66f, 0x1.723226p-53f, 0x1.3e9edcp-98f, 0.0f, 0.0f, 0x1.4240e2p-86f,
     0.0f, 0x1.e3bf6cp-20f, 0.0f, 0.0f, 0x1.02a2p-29f, 0x1.8cd262p-118f, 0.0f, 0.0f,
     0.0f, 0x1.a6e2dep-83f, 0x1.421254p-105f, 0x1.04ec32p-53f, 0.0f, 0x1.d51d98p-36f,
     0x1.4222b8p-77f, 0.0f, 0x1.354584p-75f, 0x1.8bfcap-64f, 0x1.bb08d6p-14f,
     0x1.52893ep-37f, 0x1.d24a14p-122f, 0x1.9ebdf4p-25f, 0x1.6bf8cp-48f, 0.0f,
     0x1.2518dcp-2f, 0x1.d5c8c4p-57f, 0.0f, 0x1.c363f4p-54f, 0x1.3f2032p-62f,
     0x1.de91e2p-59f, 0x1.26204p-16f, 0.0f, 0x1.23f7c2p-97f, 0x1.ff4eccp-1f,
     0x1.b65164p-64f, 0x1.d24d06p-29f, 0.0f, 0x1.19262cp-60f, 0.0f, 0x1.681616p-31f,
     0.0f, 0.0f, 0.0f, 0x1.0fd2fap-87f, 0x1.238c7ap-87f, 0.0f, 0x1p0f, 0.0f, 0.0f,
     0x1.ed14eap-4f, 0.0f, 0.0f, 0x1.745cdap-39f, 0x1.158aep-20f, 0x1.0c5756p-98f,
     0x1.09af3cp-1f, 0x1.f70d4p-35f, 0.0f, 0x1.307f1cp-20f, 0x1.f4aec6p-106f,
     0x1.08319ep-80f, 0x1.7597fcp-78f, 0.0f, 0x1.1e6304p-109f, 0x1.e40b44p-110f, 0.0f,
     0.0f, 0x1.3f5ab8p-56f, 0.0f, 0.0f, 0.0f, 0x1.e2cb1cp-82f, 0x1.190d12p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9df712p-67f, 0x1.726594p-125f, 0.0f,
     0x1.6a6ea6p-98f, 0x1.d7fd76p-37f, 0.0f, 0x1.f15cd2p-71f, 0x1.434632p-115f,
     0x1.8fce2ap-95f, 0.0f, 0x1.24257ap-100f, 0x1.6e01fcp-93f, 0.0f, 0x1.2076b8p-108f,
     0.0f, 0.0f, 0x1.c2bdd6p-35f, 0.0f, 0x1.8e9f66p-29f, 0x1.325824p-67f,
     0x1.68791p-101f, 0x1.819fcp-91f, 0x1.79076p-95f, 0x1.55c34ep-120f, 0.0f,
     0x1.8f9eeep-89f, 0x1.3640bcp-66f, 0x1.546d04p-77f, 0.0f, 0.0f, 0x1.18b5d6p-75f,
     0.0f, 0.0f, 0x1.4f41d6p-98f, 0x1.046392p-25f, 0.0f, 0.0f, 0x1.dc14bcp-1f,
     0x1.2ddf82p-35f, 0x1.44b18p-41f, 0x1.5feddap-84f, 0x1.a0c688p-93f, 0.0f, 0.0f,
     0x1.a77676p-1f, 0.0f, 0x1.e790ep-7f, 0.0f, 0.0f, 0.0f, 0x1.abdcacp-1f, 0.0f,
     0x1.ecee44p-3f, 0x1.76245p-64f, 0x1.851e1cp-80f, 0x1.5f008cp-22f, 0.0f,
     0x1.1ecb9p-11f, 0.0f, 0.0f, 0.0f, 0x1.fe2cb6p-18f, 0x1.4aaf02p-90f, 0.0f, 0.0f,
     0x1.15597ep-118f, 0x1.78a6bcp-15f, 0.0f, 0x1.8ba38ap-112f, 0.0f, 0x1.1a2584p-57f,
     0x1.10ddap-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c7808p-95f, 0x1.5a25c8p-27f,
     0.0f, 0x1.cbf67p-9f, 0x1.bd3258p-55f, 0.0f, 0x1.8a6d3cp-17f, 0.0f,
     0x1.5ac3e2p-30f, 0x1.2e81b8p-45f, 0x1p0f, 0x1.f0b062p-107f, 0x1.c0c814p-94f,
     0x1.b1b26cp-108f, 0x1.bf28p-23f, 0.0f, 0.0f, 0x1.16bea4p-79f, 0x1.580f22p-52f,
     0.0f, 0.0f, 0x1.19b63p-82f, 0x1.670168p-8f, 0x1.41e8cep-86f, 0.0f,
     0x1.ea61c4p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.965c5cp-105f, 0.0f,
     0x1.6ee09ap-29f, 0x1.194a12p-57f, 0.0f, 0x1.090cfp-118f, 0x1.0075d6p-117f, 0.0f,
     0x1.c4cec4p-77f, 0.0f, 0.0f, 0.0f, 0x1.a5b2fap-116f, 0.0f, 0.0f, 0x1.c175ccp-86f,
     0x1.b81af2p-64f, 0x1.ec9a9p-125f, 0.0f, 0.0f, 0x1.d0ccfap-12f, 0x1.1347c6p-66f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea2188p-118f, 0.0f, 0.0f,
     0x1.c9a0f8p-45f, 0x1.eee5ecp-63f, 0.0f, 0.0f, 0x1.50d6e4p-76f, 0x1.c0ea1p-68f,
     0x1.3401fep-9f, 0x1.88e9cap-110f, 0x1.1d291p-12f, 0x1.ad33ap-86f,
     0x1.d73172p-97f, 0x1.5a45fep-123f, 0.0f, 0x1.5eb366p-102f, 0.0f, 0.0f, 0.0f,
     0x1.90a978p-13f, 0.0f, 0x1.ad25d8p-32f, 0.0f, 0x1.343318p-38f, 0.0f,
     0x1.2e00eep-53f, 0x1.efa544p-109f, 0.0f, 0x1.c11044p-119f, 0x1.168c12p-86f, 0.0f,
     0x1.c5e6fep-75f, 0.0f, 0x1.8adeccp-111f, 0x1.8e3fbcp-103f, 0x1.4ebabep-78f, 0.0f,
     0.0f, 0x1.7c9d92p-9f, 0x1.9ebd5p-117f, 0.0f, 0x1.09c65p-78f, 0.0f,
     0x1.ee9f7cp-49f, 0.0f, 0x1.9438p-9f, 0x1.3a43fap-38f, 0x1.5f8c3p-74f, 0.0f,
     0x1.fc9cfep-26f, 0x1.efa522p-92f, 0.0f, 0x1.3d34bp-22f, 0x1.169358p-17f,
     0x1.a3e92p-64f, 0.0f, 0x1.08301p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.221996p-38f, 0x1p0f, 0.0f, 0x1.55d2d2p-35f, 0x1.aa6f04p-31f, 0.0f, 0.0f,
     0x1.6dea96p-54f, 0x1.a118eep-112f, 0x1.5561d2p-46f, 0x1.e29b9ep-89f,
     0x1.ab9cdp-13f, 0.0f, 0.0f, 0x1.afe2a2p-67f, 0.0f, 0x1.b422cap-101f,
     0x1.4d0566p-86f, 0x1.e86fecp-73f, 0x1.1d72d4p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f7d74p-105f, 0.0f, 0x1.3b3028p-10f, 0x1.aaad92p-75f, 0.0f, 0.0f,
     0x1.acdff6p-86f, 0x1.f8375cp-20f, 0x1.df89e8p-57f, 0x1.57c37ap-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.17b94cp-59f, 0x1.ad0fdcp-70f, 0.0f, 0x1.07c262p-76f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3e3d7ap-89f, 0.0f, 0.0f, 0x1.e385d8p-78f, 0.0f, 0.0f, 0.0f,
     0x1.3fbcep-72f, 0.0f, 0x1.f2104p-33f, 0.0f, 0.0f, 0.0f, 0x1.e133e8p-121f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9fd288p-33f, 0.0f, 0.0f, 0.0f, 0x1.cba5p-55f, 0.0f,
     0x1.9281cep-80f, 0x1.bb8ac2p-11f, 0.0f, 0x1.4cb542p-54f, 0x1.b78d18p-102f, 0.0f,
     0x1.50937cp-114f, 0.0f, 0.0f, 0x1.94e544p-59f, 0x1.a1effep-87f, 0x1.6b0c34p-28f,
     0.0f, 0x1.d40578p-83f, 0x1p0f, 0x1.f8db9p-44f, 0.0f, 0x1.899f6ap-123f, 0.0f,
     0x1.872c8cp-107f, 0.0f, 0.0f, 0x1.66af5p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb2a0cp-124f, 0x1.089676p-118f, 0.0f, 0.0f, 0.0f, 0x1.9645e2p-24f,
     0x1.501d6ap-40f, 0x1.eaf1dp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc28c6p-30f,
     0x1.34a4ap-49f, 0.0f, 0.0f, 0x1.59641cp-14f, 0x1.b5985p-11f, 0x1.b1c318p-3f,
     0x1.badaf8p-74f, 0.0f, 0x1.9b75c2p-93f, 0.0f, 0.0f, 0.0f, 0x1.648b22p-61f,
     0x1.983e32p-126f, 0.0f, 0x1.ae3552p-72f, 0x1.0b9c38p-101f, 0x1.10caacp-65f, 0.0f,
     0.0f, 0.0f, 0x1.ffe30ap-10f, 0x1.46f9fp-46f, 0.0f, 0.0f, 0x1.77c7ccp-37f, 0.0f,
     0x1.d6f034p-45f, 0x1.343c8cp-66f, 0.0f, 0x1.dd611ap-117f, 0.0f, 0.0f,
     0x1.027bd2p-55f, 0.0f, 0.0f, 0.0f, 0x1.ac40cp-29f, 0.0f, 0x1.2d094p-5f,
     0x1.d88d1ep-60f, 0.0f, 0.0f, 0x1.3e81e8p-73f, 0.0f, 0x1.71ac9p-30f,
     0x1.3c2548p-57f, 0.0f, 0.0f, 0x1.8645b2p-77f, 0x1.be3bcp-65f, 0x1.0f98dep-23f,
     0.0f, 0.0f, 0.0f, 0x1.652784p-59f, 0x1.a9ea36p-9f, 0x1.b249fap-63f, 0.0f,
     0x1.97524ap-15f, 0.0f, 0x1.05f56ap-94f, 0.0f, 0.0f, 0x1.fdb9f6p-32f,
     0x1.e437dcp-80f, 0x1.384596p-96f, 0.0f, 0.0f, 0x1.5e42ecp-52f, 0x1.11b10ep-17f,
     0.0f, 0x1.f65646p-44f, 0x1.e3175ap-126f, 0.0f, 0.0f, 0x1.c5e87ap-59f,
     0x1.30c45ep-13f, 0x1.eafa0ap-36f, 0x1.46356ap-3f, 0x1.64cd46p-33f,
     0x1.5619acp-59f, 0x1.3cb404p-22f, 0.0f, 0x1.d9c1ep-29f, 0x1.e94beap-26f,
     0x1.9c65c2p-41f, 0x1.d70eeap-88f, 0.0f, 0x1.e0c0bcp-6f, 0.0f, 0x1.042542p-98f,
     0.0f, 0x1.fa44bp-26f, 0.0f, 0x1.6f1ea4p-100f, 0x1.3847c4p-79f, 0.0f,
     0x1.16e88cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea1bd2p-91f, 0.0f,
     0x1.13ba62p-122f, 0.0f, 0x1.010b28p-20f, 0x1.779e62p-40f, 0.0f, 0x1.bcc9ccp-23f,
     0x1.9d2ff4p-26f, 0.0f, 0x1.360b4ap-117f, 0x1.e6324ep-118f, 0.0f, 0.0f,
     0x1.6f8594p-55f, 0x1.ada14ap-118f, 0.0f, 0x1.b21b1cp-103f, 0x1.f1321ep-32f, 0.0f,
     0x1.595612p-77f, 0x1.10885p-100f, 0x1.41288p-21f, 0x1.653298p-75f, 0.0f, 0.0f,
     0.0f, 0x1.435026p-28f, 0.0f, 0x1.2c5462p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41e262p-60f, 0.0f, 0x1.f04dd4p-82f, 0x1.927cecp-1f, 0.0f, 0.0f,
     0x1.b160a4p-122f, 0x1.1378b2p-96f, 0x1.9563a4p-55f, 0.0f, 0x1.f593dp-102f, 0.0f,
     0x1.5a6e42p-6f, 0x1.111fdcp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d31e9ep-97f,
     0x1.47b86p-4f, 0.0f, 0x1.383fc8p-120f, 0.0f, 0.0f, 0x1.9d9862p-74f, 0.0f, 0.0f,
     0.0f, 0x1.a8163cp-15f, 0x1.199a82p-32f, 0.0f, 0.0f, 0x1.aca1e6p-114f,
     0x1.72f6p-23f, 0.0f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_erfcf4_u15avx2128(tmp0);
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
    printf("Sleef_erfcf4_u15avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erfcf4_u15avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
