/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtf4_u35kvx.c --function Sleef_cbrtf4_u35kvx \
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
     0x1.9c2b9cp-118f, 0x1.7b2fa8p-11f, 0.0f, 0.0f, 0.0f, 0x1.73631cp-18f, 0.0f,
     0x1.692606p-18f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69090cp-51f,
     0x1.168ce2p-31f, 0x1.347796p-13f, 0.0f, 0.0f, 0.0f, 0x1.35ed7p-17f,
     0x1.e5e6a2p-64f, 0.0f, 0x1.0ed94cp-96f, 0.0f, 0.0f, 0.0f, 0x1.dd0b9cp-40f,
     0x1.bc0c1cp-6f, 0x1.277abep-105f, 0x1.f81f5p-94f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bdbddcp-73f, 0x1.1d3022p-16f, 0.0f, 0.0f, 0.0f, 0x1.372e42p-9f, 0.0f, 0.0f,
     0x1.e6d608p-12f, 0.0f, 0x1.595358p-87f, 0.0f, 0x1p0f, 0x1.78c414p-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0be1b2p-4f, 0.0f, 0x1.69baf8p-77f, 0x1.5d36ep-124f, 0.0f,
     0.0f, 0.0f, 0x1.212bd8p-108f, 0x1.93ff38p-44f, 0.0f, 0.0f, 0.0f, 0x1.e02be6p-1f,
     0.0f, 0x1.7640a8p-37f, 0.0f, 0x1.4d60a4p-120f, 0x1.ee4f3ep-116f, 0.0f,
     0x1.26e2b2p-59f, 0x1.b079f6p-50f, 0x1.d08c1cp-9f, 0.0f, 0x1.8b2d72p-65f,
     0x1.f4a83cp-86f, 0x1.c9f84p-43f, 0x1p0f, 0x1.cbc9cap-110f, 0.0f, 0.0f,
     0x1.6fc5a6p-123f, 0x1.72aa86p-86f, 0.0f, 0.0f, 0.0f, 0x1.ece404p-77f,
     0x1.9e5ac4p-24f, 0x1.84dbdcp-42f, 0x1.89d6fep-87f, 0.0f, 0x1.d783f6p-53f,
     0x1.f89da6p-88f, 0x1.f45d76p-68f, 0x1.a621b8p-60f, 0.0f, 0x1.6cff7ep-62f,
     0x1.eefd2ep-73f, 0.0f, 0x1.af4884p-99f, 0x1.bafcb4p-18f, 0.0f, 0x1.ddc9fcp-19f,
     0.0f, 0x1.03cf42p-6f, 0.0f, 0.0f, 0.0f, 0x1.e0e9a8p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bce622p-121f, 0x1.424c32p-117f, 0.0f, 0.0f, 0x1.5a230ap-96f, 0x1.710258p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ede6cp-3f, 0.0f, 0x1.f31d32p-57f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab7982p-67f, 0x1.8c52ep-116f, 0x1.d9df28p-42f,
     0x1.14a4b6p-23f, 0.0f, 0x1.53693p-16f, 0.0f, 0.0f, 0x1.371bdcp-121f,
     0x1.f006c2p-117f, 0.0f, 0x1.e551b4p-120f, 0.0f, 0x1.78037ep-96f, 0x1.d1f4e8p-98f,
     0.0f, 0x1.ff7d9ep-64f, 0x1.78d16ep-42f, 0x1.74b87cp-27f, 0.0f, 0x1.fd5818p-112f,
     0x1.d510a2p-30f, 0x1.fca4c6p-101f, 0x1.2e595cp-35f, 0x1.f6e00ap-111f,
     0x1.cf8fd2p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c02c3ep-111f, 0x1.c11b36p-50f,
     0x1.642f46p-19f, 0x1.b2c944p-59f, 0.0f, 0x1.8c96cep-56f, 0x1.1103bcp-69f,
     0x1.23a312p-86f, 0x1.823362p-59f, 0.0f, 0.0f, 0x1.659a72p-47f, 0x1.a4109ap-37f,
     0x1.d314fp-125f, 0x1.a73bdp-38f, 0.0f, 0.0f, 0.0f, 0x1.db04c8p-10f,
     0x1.136a8cp-18f, 0x1.5d5bbap-106f, 0x1.244c28p-1f, 0x1.b33456p-62f,
     0x1.ecd2p-117f, 0x1.e5ad48p-20f, 0x1.b5a7p-111f, 0x1.dd4f6ap-83f, 0.0f, 0.0f,
     0.0f, 0x1.337f54p-19f, 0x1.78a7f6p-28f, 0.0f, 0.0f, 0.0f, 0x1.11bf9ep-60f,
     0x1.e3891ap-79f, 0x1.febb2cp-27f, 0x1.1b2714p-114f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74c4ccp-112f, 0x1.7f99dcp-80f, 0x1.ddc9c6p-42f, 0.0f, 0.0f, 0.0f,
     0x1.e1fea2p-47f, 0x1.f1f2e6p-117f, 0x1.276f08p-20f, 0x1.857fbap-86f, 0.0f,
     0x1.c2c234p-73f, 0.0f, 0x1.b99268p-121f, 0x1.b93d18p-28f, 0.0f, 0x1.af89f2p-18f,
     0x1.80afaap-38f, 0.0f, 0x1.f09a3ap-99f, 0x1.088516p-65f, 0x1.6e8854p-39f,
     0x1.88d19ap-100f, 0x1.ce25ap-79f, 0x1.1ba78ep-63f, 0x1.00cd52p-76f,
     0x1.dce1d4p-118f, 0.0f, 0.0f, 0x1.25c824p-7f, 0x1.0d5c7cp-32f, 0x1.c66278p-85f,
     0.0f, 0x1.1d5b3ap-62f, 0x1.73dfd6p-90f, 0x1.fb9948p-22f, 0.0f, 0x1.773b92p-82f,
     0x1.e74bfp-64f, 0.0f, 0x1.f240bcp-20f, 0x1.844f74p-82f, 0x1.fb7634p-99f, 0.0f,
     0.0f, 0x1.59dc04p-124f, 0.0f, 0x1.a36892p-67f, 0.0f, 0.0f, 0x1.db0392p-63f,
     0x1.cbe7fcp-19f, 0x1.d5cf6ep-74f, 0x1.30ae62p-64f, 0.0f, 0x1.c30ff6p-75f, 0.0f,
     0x1.e620fap-46f, 0x1.96ef6ep-48f, 0x1.ccad4ap-54f, 0.0f, 0x1.c647d4p-63f,
     0x1.c56454p-14f, 0x1.27a216p-95f, 0x1.5ac24ep-36f, 0.0f, 0.0f, 0x1.ca9dp-7f,
     0x1.669cf6p-7f, 0x1.d1eef6p-105f, 0x1.a9d76ep-125f, 0x1.25905ap-13f, 0.0f,
     0x1.41844cp-114f, 0.0f, 0x1.7cda66p-56f, 0x1.db20bp-61f, 0.0f, 0.0f,
     0x1.ed1996p-81f, 0x1.eafc92p-53f, 0x1.b5c2d6p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a05f8p-12f, 0.0f, 0x1.b2b65ap-5f, 0.0f, 0.0f, 0x1.5a99aap-114f, 0.0f, 0.0f,
     0.0f, 0x1.eb2f6ep-67f, 0.0f, 0x1.ca683ap-85f, 0x1.db1482p-1f, 0.0f,
     0x1.0a2edcp-78f, 0.0f, 0.0f, 0x1.f191aep-69f, 0x1.b29fd8p-47f, 0x1.1e36d8p-5f,
     0.0f, 0x1.5c244ap-30f, 0.0f, 0x1.9bd8d4p-64f, 0x1.1f623p-81f, 0x1.245c28p-31f,
     0x1.4598f8p-7f, 0.0f, 0.0f, 0x1.169f1p-16f, 0x1.28bf9ep-122f, 0x1.95e4f4p-88f,
     0x1.ff8ebcp-66f, 0x1.8125eep-55f, 0x1.082422p-68f, 0.0f, 0x1.5e159p-8f,
     0x1.849be2p-26f, 0.0f, 0.0f, 0x1.bc9bacp-115f, 0x1.6e701ap-125f, 0x1.ddd67ep-80f,
     0.0f, 0x1.5b89dap-20f, 0x1.495d38p-80f, 0.0f, 0x1.ee38bap-106f, 0x1.2b583cp-96f,
     0.0f, 0x1.45a0e6p-33f, 0.0f, 0.0f, 0.0f, 0x1.f9d23p-2f, 0x1.a9042p-54f,
     0x1.40a7fap-80f, 0x1.0b7caep-72f, 0x1.f8c5e6p-95f, 0x1.ca80cep-21f,
     0x1.4f76c6p-84f, 0.0f, 0x1.7488e4p-4f, 0x1.479648p-85f, 0.0f, 0x1.1a5f4ap-65f,
     0x1.6e9754p-58f, 0x1.8ef0aep-117f, 0.0f, 0x1.0c4b8ep-2f, 0x1.3412dap-34f, 0.0f,
     0x1.e958bcp-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaa58ap-76f,
     0x1.8638bcp-34f, 0.0f, 0x1.6065cep-45f, 0x1.6c7076p-68f, 0.0f, 0x1.6cee86p-5f,
     0.0f, 0.0f, 0x1.4b52a4p-24f, 0.0f, 0.0f, 0x1.4fcff8p-59f, 0x1.62d2a8p-93f, 0.0f,
     0.0f, 0x1.397efp-43f, 0x1.a763d4p-4f, 0.0f, 0.0f, 0x1.065c7p-52f, 0.0f,
     0x1.3c0e9ep-34f, 0.0f, 0x1.6548a4p-111f, 0.0f, 0.0f, 0.0f, 0x1.c00b8p-111f,
     0x1.0d65bep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e709e4p-58f, 0.0f, 0.0f,
     0x1.68cbdp-71f, 0x1.8c5e8cp-123f, 0.0f, 0x1.2d1f12p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.82ae82p-52f, 0.0f, 0.0f, 0.0f, 0x1.e6f5a8p-72f, 0x1.4a8092p-116f,
     0.0f, 0.0f, 0x1.b8d4a8p-45f, 0x1.5eb47ep-105f, 0x1.cae0dap-49f, 0.0f, 0.0f, 0.0f,
     0x1.414c0ep-18f, 0x1.c5a71ap-1f, 0x1.a104dp-56f, 0.0f, 0x1.c9d7ap-79f, 0.0f,
     0x1.ca7c32p-80f, 0x1.fe79fp-87f, 0.0f, 0x1.92355ep-116f, 0.0f, 0.0f, 0.0f,
     0x1.b1312p-96f, 0x1.715596p-72f, 0.0f, 0.0f, 0x1.006a2p-90f, 0.0f,
     0x1.450d1p-125f, 0x1.2a2368p-50f, 0x1.e3b3eep-72f, 0.0f, 0.0f, 0x1.2c4752p-62f,
     0.0f, 0.0f, 0.0f, 0x1.e2259ap-16f, 0x1.961316p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d9ca4p-37f, 0.0f, 0.0f, 0.0f, 0x1.ee07bp-25f, 0.0f, 0x1.46f31ap-125f,
     0x1.970a68p-65f, 0x1.d3fd76p-109f, 0.0f, 0x1.93a284p-96f, 0.0f, 0x1.86b384p-41f,
     0x1.8f1ce8p-122f, 0x1.0a94bp-18f, 0x1.4066fep-83f, 0.0f, 0x1.cbf17cp-115f,
     0x1.2bfad2p-113f, 0x1.6de3bap-107f, 0.0f, 0.0f, 0x1.04988p-57f, 0.0f,
     0x1.1025aap-104f, 0x1.400556p-70f, 0.0f, 0x1.1016d6p-85f, 0x1.f5f36ap-1f,
     0x1.abf45ap-52f, 0.0f, 0.0f, 0.0f, 0x1.6e132ap-88f, 0.0f, 0.0f, 0x1.8b637p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a2a38p-96f, 0x1.9ea04p-12f, 0.0f,
     0x1.640bfep-84f, 0.0f, 0x1.816d0ap-46f, 0.0f, 0x1.b4feap-119f, 0x1.03a9a4p-16f,
     0x1.8d71a4p-82f, 0x1.2918e4p-60f, 0.0f, 0.0f, 0.0f, 0x1.d8807ap-114f, 0.0f,
     0x1.285764p-1f, 0x1.25f324p-59f, 0.0f, 0x1.4f2092p-26f, 0x1.17f056p-83f, 0.0f,
     0.0f, 0.0f, 0x1.7228fap-90f, 0.0f, 0.0f, 0x1.7c7bdep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.612db4p-39f, 0x1.fabb5ep-16f, 0x1.529d92p-47f, 0.0f, 0x1.3d3298p-85f, 0.0f,
     0x1.a58f9ap-66f, 0.0f, 0.0f, 0.0f, 0x1.90093ep-13f, 0.0f, 0x1.4d5d08p-121f,
     0x1.04f2e4p-107f, 0x1.54cb92p-116f, 0x1.cc9302p-73f, 0.0f, 0x1.84dde4p-63f,
     0x1.f338c2p-96f, 0x1.ab51e6p-78f, 0x1.96bd94p-37f, 0x1.217b1p-67f, 0.0f, 0.0f,
     0x1.ee279cp-57f, 0x1.967fcap-124f, 0.0f, 0x1.36db48p-42f, 0.0f, 0x1.f03812p-11f,
     0.0f, 0.0f, 0x1.cec11cp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.009266p-81f,
     0x1.2f73cep-40f, 0.0f, 0x1.8e8b26p-114f, 0x1.a1042p-107f, 0x1.0d58ep-12f, 0.0f,
     0x1.608c4cp-56f, 0.0f, 0x1.561092p-9f, 0x1.50ca4ap-54f, 0.0f, 0x1.9212d8p-7f,
     0.0f, 0x1.4df21ap-76f, 0x1.785188p-28f, 0.0f, 0x1.ef1a1ap-51f, 0x1.499774p-34f,
     0.0f, 0x1.cb1a84p-107f, 0.0f, 0x1.e09fb4p-74f, 0x1.1305eep-47f, 0x1.36b76ap-14f,
     0.0f, 0.0f, 0x1.84364p-66f, 0x1.22c1e8p-13f, 0.0f, 0x1.432556p-100f, 0.0f, 0.0f,
     0x1.04d1cep-16f, 0.0f, 0.0f, 0x1.50d0d6p-78f, 0x1.a19ceep-28f, 0x1.3665bep-86f,
     0x1.9e5c6cp-123f, 0.0f, 0.0f, 0.0f, 0x1.33ec22p-117f, 0.0f, 0x1.1c7f56p-62f,
     0x1.2943bcp-6f, 0x1.391d36p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.870b4p-61f,
     0x1.8d2a36p-65f, 0.0f, 0x1.d88742p-5f, 0.0f, 0.0f, 0x1.1d2cfep-92f, 0.0f,
     0x1.860a0ep-29f, 0x1.bee16cp-39f, 0.0f, 0.0f, 0.0f, 0x1.c14da4p-65f,
     0x1.a2e7e2p-2f, 0x1.6696dp-43f, 0x1.44d23ap-50f, 0.0f, 0x1.399ffcp-15f, 0.0f,
     0x1.4beffcp-101f, 0x1.d78f24p-92f, 0.0f, 0.0f, 0x1.37ae4cp-47f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e54f6p-30f, 0.0f, 0x1.36f55ap-62f, 0x1.c11812p-74f,
     0x1.00242p-86f, 0x1.5e7f78p-61f, 0.0f, 0x1.935dbap-13f, 0.0f, 0.0f,
     0x1.c3187ap-110f, 0x1.25fc9ep-1f, 0x1.d62e98p-52f, 0x1.7dca34p-71f,
     0x1.e1faa6p-75f, 0x1.c8c024p-35f, 0.0f, 0x1.f0a6b2p-115f, 0.0f, 0x1.972b6cp-26f,
     0x1.3b2288p-108f, 0x1.63eb16p-73f, 0x1.7652dep-23f, 0.0f, 0.0f, 0x1.09854cp-88f,
     0.0f, 0.0f, 0x1.ed7146p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8df3fep-39f,
     0x1.da7caap-30f, 0x1.1c8f3ap-19f, 0x1.ac763ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b4d878p-53f, 0x1.04ce7ep-78f, 0x1.072e96p-101f, 0x1.03de8cp-22f,
     0x1.c41f5ep-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.585894p-29f, 0.0f, 0.0f,
     0x1.d60052p-22f, 0.0f, 0x1.a21ebcp-93f, 0x1.839d38p-28f, 0.0f, 0.0f, 0.0f,
     0x1.d28468p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19c454p-99f, 0.0f,
     0x1.8a0da4p-23f, 0x1.fe59f8p-111f, 0.0f, 0x1.16c7bep-92f, 0.0f, 0.0f,
     0x1.39a06p-104f, 0x1.b06c2p-5f, 0.0f, 0.0f, 0x1.1e1986p-126f, 0.0f,
     0x1.e6d02cp-122f, 0.0f, 0x1.70fd38p-111f, 0.0f, 0.0f, 0.0f, 0x1.91e8e4p-125f,
     0x1.f8e3a4p-19f, 0.0f, 0.0f, 0.0f, 0x1.e84a7ep-4f, 0.0f, 0x1.122f68p-68f,
     0x1.9bbafep-51f, 0x1.c668ecp-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.544a5cp-103f, 0.0f, 0.0f, 0.0f, 0x1.133ee2p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a1638cp-51f, 0x1.8aa652p-58f, 0x1.f00c78p-4f, 0.0f, 0x1.a1b662p-119f, 0.0f,
     0.0f, 0x1.9fdd32p-95f, 0.0f, 0x1.e2482cp-94f, 0.0f, 0x1.2b9846p-29f,
     0x1.71e838p-105f, 0x1.57ee8cp-21f, 0.0f, 0.0f, 0x1.6bce84p-90f, 0x1.d05d14p-22f,
     0x1.1e18p-16f, 0.0f, 0x1.0194bap-85f, 0x1.e3843p-111f, 0x1.b101fap-20f, 0.0f,
     0x1.f516dcp-106f, 0x1.440dd2p-36f, 0.0f, 0x1.d64c64p-62f, 0.0f, 0.0f,
     0x1.5059a2p-40f, 0x1.06e598p-33f, 0.0f, 0.0f, 0x1.73a99cp-24f, 0x1.3b39f2p-115f,
     0x1.ae5de8p-34f, 0x1.cd8cacp-34f, 0x1.096072p-61f, 0.0f, 0.0f, 0.0f,
     0x1.5b5802p-114f, 0x1.fafa6ap-25f, 0x1.d7bc68p-52f, 0.0f, 0x1.0af2dp-66f, 0.0f,
     0.0f, 0x1.71ef5p-74f, 0.0f, 0x1.6b1d6ap-104f, 0x1.4d632ap-83f, 0x1.fc593ep-77f,
     0x1.d955bap-83f, 0.0f, 0x1.14a404p-16f, 0x1.b3014ep-13f, 0.0f, 0x1.f5c988p-122f,
     0x1.ccf92p-120f, 0.0f, 0x1.e8c286p-50f, 0x1.4b1a9ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.0dd89ep-44f, 0.0f, 0x1.9c351ap-22f, 0.0f, 0x1.b1f3bcp-119f, 0.0f, 0.0f,
     0x1.3942d4p-50f, 0.0f, 0x1.35ef7p-98f, 0.0f, 0.0f, 0x1.0bf74cp-92f, 0.0f,
     0x1.eb8124p-37f, 0.0f, 0x1.4198e6p-114f, 0x1.33aabap-11f, 0x1.ed4bfap-8f, 0.0f,
     0x1.e6abbcp-49f, 0x1.ff24a8p-106f, 0.0f, 0.0f, 0x1.30b0d6p-120f, 0.0f, 0.0f,
     0x1.facf7p-113f, 0.0f, 0.0f, 0x1.7929bp-108f, 0x1.e2b156p-125f, 0x1.19f43ap-41f,
     0.0f, 0.0f, 0.0f, 0x1.e026p-53f, 0x1.41b5dp-65f, 0.0f, 0x1.0d5328p-75f,
     0x1.267278p-11f, 0.0f, 0.0f, 0.0f, 0x1.346004p-40f, 0.0f, 0.0f, 0x1.2c77cp-122f,
     0x1.3f895ep-66f, 0x1.0d4048p-39f, 0x1.a2391ap-4f, 0.0f, 0.0f, 0x1.6b9de2p-121f,
     0.0f, 0.0f, 0.0f, 0x1.353276p-44f, 0x1.f6356p-48f, 0.0f, 0x1.86999ap-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1d88aap-50f, 0x1.804adcp-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9bab04p-96f, 0x1.2b6fe2p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c8d1cp-47f, 0x1.21ac02p-45f, 0x1.f16898p-102f, 0x1.39641p-115f,
     0x1.b665dep-28f, 0.0f, 0.0f, 0x1.cd88fcp-125f, 0x1.1f5f84p-16f, 0x1.ce2612p-4f,
     0.0f, 0x1.518506p-77f, 0x1.181ffep-18f, 0x1.be8aep-105f, 0x1.eef20ep-24f, 0.0f,
     0x1.43e12ap-11f, 0x1.1235a2p-53f, 0.0f, 0x1.848abap-86f, 0.0f, 0.0f, 0.0f,
     0x1.7e9b4p-106f, 0x1.6a9682p-85f, 0.0f, 0x1.3e6746p-26f, 0.0f, 0x1.d580e2p-89f,
     0x1.464f74p-45f, 0x1.8524fp-88f, 0x1.38e5bap-12f, 0x1.d9df5ep-27f,
     0x1.35a318p-54f, 0.0f, 0x1.bd1424p-10f, 0.0f, 0x1.f184f4p-40f, 0.0f,
     0x1.7911bep-107f, 0.0f, 0.0f, 0.0f, 0x1.de0644p-22f, 0x1.16a8a2p-16f,
     0x1.fdee5ep-89f, 0.0f, 0x1.228d06p-27f, 0.0f, 0.0f, 0x1.2d8bfp-89f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8ac49ap-93f, 0.0f, 0.0f, 0x1.f8130ep-111f, 0x1.4fe23cp-47f, 0.0f,
     0x1.682f1ap-126f, 0x1.ad3096p-57f, 0.0f, 0x1.e910fap-104f, 0x1.984098p-46f,
     0x1.a80586p-95f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_cbrtf4_u35kvx(tmp0);
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
    printf("Sleef_cbrtf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cbrtf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
