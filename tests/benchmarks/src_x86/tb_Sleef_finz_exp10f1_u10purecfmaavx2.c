/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10f1_u10purecfma.c --function \
 *     Sleef_finz_exp10f1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
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
     0.0f, 0x1.9020dep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.578a42p-9f, 0.0f,
     0x1.91aaeep-74f, 0.0f, 0x1.b7c1b8p-13f, 0x1.453c56p-12f, 0.0f, 0.0f,
     0x1.da0896p-115f, 0x1.4717cap-58f, 0x1.e7bd1cp-60f, 0x1.3f7e68p-118f, 0.0f,
     0x1.e0bfecp-105f, 0x1.e094ccp-88f, 0.0f, 0x1.3b676p-65f, 0.0f, 0.0f, 0.0f,
     0x1.6ae014p-82f, 0.0f, 0.0f, 0x1.92cadcp-30f, 0x1.05b73p-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a2415p-87f, 0x1.09c582p-106f, 0.0f, 0.0f, 0.0f, 0x1.908d32p-97f,
     0x1.659938p-119f, 0.0f, 0x1.406a36p-26f, 0.0f, 0x1.c49ecap-123f,
     0x1.f5ed6cp-114f, 0.0f, 0.0f, 0x1.c7632p-123f, 0.0f, 0.0f, 0x1.c8fcfp-81f,
     0x1.b73d68p-111f, 0x1.6ddf22p-114f, 0.0f, 0.0f, 0.0f, 0x1.9a47c8p-60f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddc914p-125f, 0x1.32045ap-43f, 0.0f,
     0.0f, 0.0f, 0x1.2b1194p-23f, 0.0f, 0x1.800542p-123f, 0x1.6a2e2cp-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4743f2p-65f, 0x1.162ba6p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8242dap-99f, 0.0f, 0.0f, 0.0f, 0x1.5a9636p-94f, 0x1.d6cb76p-124f, 0.0f,
     0x1.630858p-37f, 0x1.b8d284p-38f, 0x1.139a0ap-22f, 0x1.648666p-57f,
     0x1.549ff6p-31f, 0.0f, 0x1.18ea8ep-67f, 0x1.e3ebb2p-90f, 0.0f, 0x1.4e8246p-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2b344p-85f, 0x1.2d1514p-34f, 0.0f, 0x1.8728eap-40f,
     0x1.26a05ep-49f, 0x1.d2501ap-105f, 0.0f, 0x1.30f874p-78f, 0x1.3fb00ap-70f, 0.0f,
     0.0f, 0x1.bae5ap-108f, 0x1.3c15c6p-21f, 0x1.d548f4p-82f, 0x1.09aa2ep-3f,
     0x1.8be8e4p-109f, 0.0f, 0x1.0edd9p-83f, 0.0f, 0x1.ea9f28p-117f, 0.0f, 0.0f, 0.0f,
     0x1.f905d4p-121f, 0.0f, 0x1.1f9b64p-121f, 0.0f, 0.0f, 0x1.712f3p-19f,
     0x1.0beb2ep-111f, 0x1.e3dae6p-107f, 0.0f, 0x1.e00088p-24f, 0.0f, 0x1.e93daap-7f,
     0x1.839d8cp-78f, 0x1.fcd356p-39f, 0x1.9e4b9cp-31f, 0.0f, 0x1.b805b2p-50f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5412cp-3f, 0.0f, 0.0f, 0.0f, 0x1.7e03acp-46f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e8adfep-95f, 0x1.7c43c6p-48f, 0.0f, 0.0f,
     0x1.9a0734p-24f, 0.0f, 0.0f, 0x1.20972p-97f, 0.0f, 0x1.55f718p-38f,
     0x1.a79858p-19f, 0x1.a5841cp-72f, 0x1.374e7cp-21f, 0x1.2d5d52p-9f,
     0x1.86bf1cp-43f, 0x1.9e0b8cp-113f, 0.0f, 0.0f, 0x1.66e268p-55f, 0.0f,
     0x1.663f74p-27f, 0x1.14452ap-38f, 0.0f, 0.0f, 0.0f, 0x1.90b2a6p-35f, 0.0f, 0.0f,
     0x1.f27c1ep-65f, 0x1.824a18p-59f, 0x1.9298d4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.b6d452p-65f, 0x1.576986p-1f, 0.0f, 0.0f, 0x1.e26c42p-57f, 0.0f,
     0x1.3c1dc6p-22f, 0x1.db2d14p-68f, 0.0f, 0x1.082dccp-69f, 0x1.aad058p-32f, 0.0f,
     0x1.d406aep-56f, 0.0f, 0x1.31bb46p-76f, 0.0f, 0.0f, 0x1.e15614p-107f, 0.0f, 0.0f,
     0x1.432ac8p-101f, 0x1.50e164p-48f, 0.0f, 0.0f, 0x1.588216p-53f, 0.0f,
     0x1.927ad2p-124f, 0x1.1b4f26p-62f, 0.0f, 0x1.d7af8ep-103f, 0.0f, 0x1.f62934p-21f,
     0.0f, 0x1.5e38c2p-29f, 0.0f, 0x1.99409p-116f, 0.0f, 0x1.d7cde2p-32f, 0.0f,
     0x1.83adb2p-118f, 0.0f, 0x1.a236c6p-74f, 0.0f, 0x1.04d118p-22f, 0x1.c8e738p-59f,
     0x1.e0670cp-52f, 0x1.366772p-57f, 0x1.7334dp-14f, 0x1.933e64p-120f,
     0x1.467972p-112f, 0x1.8d615cp-25f, 0.0f, 0x1.090e6p-68f, 0x1.e5a124p-125f,
     0x1.e489ap-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed0b84p-119f, 0x1.f356acp-67f,
     0x1.fe222cp-101f, 0.0f, 0.0f, 0x1.6e42eap-73f, 0x1.c668f8p-11f, 0.0f, 0.0f,
     0x1.b5c3f2p-75f, 0.0f, 0x1.5a7744p-36f, 0.0f, 0.0f, 0x1.4516f4p-63f, 0.0f, 0.0f,
     0x1.338f9ap-47f, 0x1.ff648p-85f, 0.0f, 0x1.def90cp-22f, 0x1.2aec42p-46f,
     0x1.e702b6p-6f, 0x1.01080ep-125f, 0.0f, 0.0f, 0x1.64a93cp-33f, 0.0f,
     0x1.a12584p-83f, 0.0f, 0.0f, 0.0f, 0x1.7f307ep-126f, 0x1.310ba4p-24f,
     0x1.2de4a6p-43f, 0.0f, 0.0f, 0x1.30fa26p-39f, 0x1.04538p-53f, 0.0f, 0.0f, 0.0f,
     0x1.6276e8p-51f, 0.0f, 0x1.6f6becp-24f, 0.0f, 0.0f, 0x1.5939e2p-118f,
     0x1.03d466p-1f, 0.0f, 0x1.98525cp-86f, 0x1.8f3deep-21f, 0x1.04a0aap-31f,
     0x1.44a892p-118f, 0x1.b92a0ap-105f, 0x1.83643ep-3f, 0.0f, 0.0f, 0x1.f4ffb2p-44f,
     0x1.576dfcp-11f, 0.0f, 0.0f, 0.0f, 0x1.d1c0ap-37f, 0x1.2806d8p-70f, 0.0f,
     0x1.fbb31p-94f, 0x1.89b14cp-123f, 0.0f, 0.0f, 0x1.b03592p-119f, 0.0f,
     0x1.7786bep-97f, 0.0f, 0x1.16b0acp-31f, 0.0f, 0x1.bad1fep-31f, 0.0f, 0.0f,
     0x1.0f5d2cp-47f, 0.0f, 0x1.ca44dp-17f, 0x1.73724ep-112f, 0.0f, 0.0f,
     0x1.a2f198p-72f, 0x1.99d15ap-16f, 0x1.aee38ap-93f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.35267cp-51f, 0.0f, 0x1.3995a6p-35f, 0.0f, 0.0f, 0.0f, 0x1.19b626p-59f, 0.0f,
     0x1.66f1fcp-27f, 0x1.c8c6fap-69f, 0x1.e0da7cp-73f, 0x1.5dd1cep-28f,
     0x1.a11e7cp-43f, 0.0f, 0x1.449a02p-96f, 0x1.62a566p-42f, 0x1.ed8fbp-109f,
     0x1.b8436ap-84f, 0x1.0a310ep-88f, 0x1.10f182p-101f, 0x1.3cbf08p-18f, 0.0f, 0.0f,
     0.0f, 0x1.400dd6p-87f, 0x1.f9af16p-48f, 0x1.ef68fap-71f, 0x1.5efd74p-22f,
     0x1.ad9ba2p-53f, 0.0f, 0.0f, 0x1.51861ap-22f, 0.0f, 0x1.822d4cp-72f,
     0x1.49d778p-113f, 0.0f, 0x1.26c1dp-38f, 0x1.09f8bp-84f, 0.0f, 0.0f,
     0x1.d52116p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad75a6p-110f, 0.0f, 0.0f, 0.0f,
     0x1.6fd24ep-42f, 0.0f, 0.0f, 0.0f, 0x1.e5a1a6p-39f, 0.0f, 0x1.895e12p-11f,
     0x1.02b3e4p-86f, 0.0f, 0.0f, 0.0f, 0x1.3fd22cp-118f, 0.0f, 0x1.1d78f2p-94f, 0.0f,
     0x1.195e98p-71f, 0x1.a4c6f4p-59f, 0.0f, 0.0f, 0x1.f8a8f4p-42f, 0x1.79683p-5f,
     0x1.ef72dap-99f, 0x1.182abep-108f, 0.0f, 0x1.738946p-24f, 0x1.7a1b4ap-34f, 0.0f,
     0.0f, 0.0f, 0x1.e62e24p-91f, 0x1.10baa2p-36f, 0x1.5246b8p-76f, 0.0f,
     0x1.c89a3ap-7f, 0x1.faa472p-121f, 0x1.0416bp-122f, 0.0f, 0x1.558b5ep-95f, 0.0f,
     0x1.0a359p-41f, 0x1.5792c6p-2f, 0.0f, 0x1.85e10cp-96f, 0x1.d38258p-1f,
     0x1.22f402p-57f, 0.0f, 0x1.fa7e38p-115f, 0x1.cf19ecp-91f, 0.0f, 0x1.7a75a4p-112f,
     0x1.44cddep-21f, 0x1.a578d8p-126f, 0.0f, 0.0f, 0x1.0e0d4p-21f, 0x1.23d496p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f8a3p-115f, 0x1.c10b72p-96f, 0x1.4a7942p-2f,
     0x1.663a26p-78f, 0.0f, 0x1.cb12dcp-98f, 0x1.79d7a2p-25f, 0.0f, 0x1.76c4b4p-12f,
     0x1.591a8ap-66f, 0x1.c80532p-35f, 0x1.453262p-105f, 0.0f, 0.0f, 0x1.34ec5p-60f,
     0x1.52754ep-32f, 0x1.24dc5ep-47f, 0x1.1821c2p-71f, 0x1.3b369ap-19f, 0.0f, 0.0f,
     0x1.eee6f8p-61f, 0.0f, 0.0f, 0.0f, 0x1.ed1f06p-78f, 0x1.4479ap-63f,
     0x1.b4a494p-118f, 0.0f, 0x1.71ba2ep-124f, 0x1.168fd4p-32f, 0.0f, 0x1.5d4f4ap-39f,
     0x1.994f12p-56f, 0.0f, 0x1.828fc6p-36f, 0x1.2f4fe6p-41f, 0x1.be3574p-42f, 0.0f,
     0.0f, 0.0f, 0x1.85bcfap-125f, 0.0f, 0.0f, 0.0f, 0x1.a24476p-100f,
     0x1.08702ap-122f, 0x1.fbe964p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cfc716p-110f,
     0x1.63bfccp-104f, 0x1.5f0b4p-41f, 0x1.8f5da6p-21f, 0x1.3f75dp-1f,
     0x1.19d6bcp-66f, 0x1.579bbp-100f, 0x1.0dcc1p-33f, 0.0f, 0x1.693f62p-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.008b9cp-68f, 0x1.e12e0ap-6f, 0x1.827f34p-68f, 0.0f, 0.0f,
     0x1.3ece4ep-27f, 0x1.ec7ec6p-60f, 0.0f, 0.0f, 0x1.e5511ap-44f, 0.0f, 0.0f,
     0x1.2f545p-70f, 0x1.a37698p-27f, 0x1.b6ef0ep-41f, 0x1.916a5cp-97f, 0.0f,
     0x1.14155ep-79f, 0x1.b8a86ep-9f, 0.0f, 0x1.6f73d8p-83f, 0x1.555978p-30f,
     0x1.eddeeap-9f, 0.0f, 0.0f, 0x1.d9c90ap-70f, 0.0f, 0x1.13bb1ap-64f, 0.0f,
     0x1.5e19acp-73f, 0x1.f672b4p-99f, 0.0f, 0x1.04967ep-125f, 0x1.c0237ep-91f, 0.0f,
     0.0f, 0.0f, 0x1.046822p-14f, 0x1.d82178p-99f, 0.0f, 0.0f, 0x1.06240ap-4f,
     0x1.bc8c56p-126f, 0x1.d59cdep-112f, 0.0f, 0x1.19b1ep-94f, 0x1.7b747ap-98f,
     0x1.03e914p-124f, 0x1.0998c6p-97f, 0.0f, 0.0f, 0x1.cc4e9ap-30f, 0.0f, 0.0f,
     0x1.1aa3b6p-106f, 0x1.71052p-64f, 0x1.70b8d4p-120f, 0.0f, 0x1.68298cp-40f,
     0x1.4baebep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9485d2p-19f, 0.0f, 0x1.27249ap-122f,
     0.0f, 0x1.efcef6p-73f, 0x1.85960ep-18f, 0.0f, 0.0f, 0x1.7ddc2ep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47339p-114f, 0x1.65bc2cp-102f, 0x1.2366ap-72f, 0.0f, 0.0f,
     0.0f, 0x1.f8070ep-45f, 0.0f, 0.0f, 0x1.17a774p-52f, 0.0f, 0.0f, 0x1.bbf7b2p-65f,
     0x1.0953dap-6f, 0.0f, 0.0f, 0.0f, 0x1.f6968ep-63f, 0.0f, 0.0f, 0x1.961006p-68f,
     0x1.d2a89p-49f, 0.0f, 0.0f, 0x1.78017ep-88f, 0.0f, 0x1.6ea984p-88f, 0.0f,
     0x1.fafd5p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.852d0ap-40f, 0x1.a9a5a6p-84f,
     0.0f, 0.0f, 0.0f, 0x1.db5f0ep-58f, 0x1.33b986p-10f, 0x1.bad10ep-77f,
     0x1.aac21p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.082daep-101f, 0x1.7f4c44p-18f,
     0x1.2c0c12p-18f, 0.0f, 0x1.9851d8p-54f, 0.0f, 0x1.99a8p-70f, 0x1.52e8fp-33f,
     0x1.6dc6d4p-105f, 0x1.e3f3bap-93f, 0.0f, 0x1.520f9ap-78f, 0x1.65583ep-29f, 0.0f,
     0.0f, 0x1.aef7aap-86f, 0x1.7f03e4p-68f, 0x1.dec63cp-82f, 0.0f, 0x1.36eb0ap-51f,
     0.0f, 0.0f, 0x1.66e40ap-80f, 0x1.80aec8p-85f, 0.0f, 0.0f, 0.0f, 0x1.27e66cp-4f,
     0x1.fb71cp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fa75dcp-5f, 0.0f, 0.0f, 0.0f,
     0x1.73361ap-90f, 0.0f, 0x1.3a6de8p-103f, 0x1.e9b954p-39f, 0.0f, 0.0f,
     0x1.9e21f8p-53f, 0x1.fab9f6p-110f, 0.0f, 0x1.6eaeaap-74f, 0.0f, 0x1.8c9266p-122f,
     0.0f, 0x1.c0aep-9f, 0x1.9999b2p-17f, 0x1.f812a4p-94f, 0.0f, 0x1.8c7e8p-5f,
     0x1.4fe5d8p-56f, 0x1.86f738p-119f, 0.0f, 0x1.747b8cp-98f, 0x1.366f48p-38f,
     0x1.cbba06p-31f, 0x1.056e78p-54f, 0x1.29278ap-69f, 0x1.46c87cp-120f, 0.0f, 0.0f,
     0x1.7c58e8p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f4578p-94f,
     0x1.10ce5ap-82f, 0.0f, 0.0f, 0x1.117c32p-18f, 0x1.f16fcep-49f, 0.0f,
     0x1.b6e1fap-107f, 0x1.dc5926p-45f, 0x1.d7270ep-115f, 0.0f, 0x1.43da58p-49f,
     0x1.f6633ap-28f, 0.0f, 0.0f, 0x1.9875cp-115f, 0.0f, 0x1.daf15p-20f, 0.0f, 0.0f,
     0x1.e8876ep-84f, 0.0f, 0x1.3b6688p-23f, 0.0f, 0.0f, 0x1.6049e8p-51f,
     0x1.f5b792p-4f, 0x1.7c20bep-32f, 0x1.2b22a6p-106f, 0x1.6c5038p-62f,
     0x1.03ae7ep-97f, 0.0f, 0x1.6a985p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f634cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.441f32p-78f, 0x1.825252p-55f, 0.0f,
     0x1.27b772p-58f, 0.0f, 0x1.0dc6bcp-88f, 0x1.814026p-34f, 0.0f, 0x1.7cf42p-20f,
     0x1.f23202p-115f, 0x1.b8e2fcp-46f, 0.0f, 0x1.ab96bep-53f, 0x1.b4eb0ep-117f,
     0x1.d00178p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.9a0f72p-19f, 0x1.066a3p-56f, 0.0f, 0.0f, 0x1.36a136p-103f, 0.0f,
     0x1.01019cp-117f, 0x1.7bc7f4p-111f, 0x1.514d5cp-58f, 0x1.740b68p-92f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d6232p-87f, 0x1.50b71ep-18f, 0x1.e3d5b2p-82f, 0x1.b3005ep-34f,
     0x1.f58f7p-36f, 0x1.324d6ap-118f, 0.0f, 0.0f, 0x1.3a4c5ep-1f, 0x1.a2d024p-17f,
     0x1.127d48p-14f, 0x1.3c2c08p-101f, 0x1.7dd722p-57f, 0x1.866a88p-40f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.44b83ap-42f, 0.0f, 0.0f, 0x1.e4275p-50f, 0.0f, 0.0f,
     0x1.540cb2p-43f, 0x1.d85894p-51f, 0.0f, 0x1.891acep-57f, 0.0f, 0.0f,
     0x1.f9d2bcp-40f, 0.0f, 0x1.30782cp-89f, 0.0f, 0x1.dd19bep-110f, 0x1.748026p-121f,
     0.0f, 0x1.e246e8p-96f, 0x1.6ee4ap-88f, 0.0f, 0x1.c6f772p-11f, 0.0f,
     0x1.f9cd52p-33f, 0.0f, 0x1.1d22dp-24f, 0x1.da5a04p-1f, 0x1.dc939cp-124f, 0.0f,
     0.0f, 0.0f, 0x1.7912e8p-110f, 0.0f, 0.0f, 0.0f, 0x1.cecfa6p-92f, 0x1.08ce94p-95f,
     0x1.37ae04p-125f, 0.0f, 0x1.a40bd2p-32f, 0x1.d77138p-13f, 0x1.400d8p-29f,
     0x1.7c4f06p-108f, 0.0f, 0.0f, 0x1.7e54eap-89f, 0x1.fd5dd4p-56f, 0x1.bc26b2p-114f,
     0x1.cd8048p-59f, 0x1.029ba6p-41f, 0x1.561b8p-18f, 0.0f, 0x1.eed934p-55f, 0.0f,
     0.0f, 0x1.f4b802p-65f, 0x1.f0a79ep-26f, 0x1.eace62p-121f, 0.0f, 0x1.1753aep-121f,
     0.0f, 0x1.87f37cp-68f, 0.0f, 0.0f, 0x1.13c9bp-67f, 0.0f, 0.0f, 0.0f,
     0x1.8f2da4p-106f, 0x1.55ce1p-6f, 0x1.48e494p-32f, 0x1.0360d4p-100f, 0.0f, 0.0f,
     0.0f, 0x1.be6e8p-53f, 0x1.c56d28p-40f, 0.0f, 0x1.f8d856p-8f, 0x1.f9d8e8p-63f,
     0x1.88765ap-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c2d7ap-45f, 0.0f, 0x1.505e7ap-94f,
     0.0f, 0x1.ef8cfep-36f, 0.0f, 0.0f, 0x1.3c1a74p-121f, 0x1.1113cep-39f,
     0x1.c88d58p-118f, 0x1.a6af3ap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f68bp-39f,
     0x1.53e39ep-80f, 0x1.414c4ap-69f, 0x1.ebc7f4p-21f, 0.0f, 0.0f, 0.0f,
     0x1.9a146ep-50f, 0.0f, 0x1.f4448p-56f, 0.0f, 0.0f, 0x1.79476ap-48f, 0.0f,
     0x1.d2e78p-86f, 0.0f, 0x1.2ee4c2p-60f, 0.0f, 0x1.ef911ap-125f, 0x1.4ec7fp-61f,
     0.0f, 0x1.ef8192p-122f, 0.0f, 0.0f, 0x1.ac18cep-75f, 0.0f, 0.0f, 0x1.8dfb9p-20f,
     0x1.031a98p-42f, 0.0f, 0x1.2bb518p-13f, 0.0f, 0x1.8186d2p-75f, 0x1.c3246p-74f,
     0.0f, 0x1.529612p-37f, 0.0f, 0.0f, 0x1.13aaap-45f, 0.0f, 0.0f, 0.0f,
     0x1.791c1cp-61f, 0x1.95p-120f, 0.0f, 0x1.01124p-119f, 0x1.f6bf22p-84f, 0.0f,
     0x1.31836ep-91f, 0x1.a190bap-43f, 0x1.c41aep-9f, 0x1.259a9ap-67f, 0.0f, 0.0f,
     0.0f, 0x1.0fbab8p-29f, 0.0f, 0x1.332d9ep-104f, 0.0f, 0x1.671a24p-112f, 0.0f,
     0.0f, 0.0f, 0x1.51d564p-115f, 0x1.791ec2p-75f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.120edap-68f, 0x1.01946ep-102f, 0x1.2785dcp-91f, 0x1.fa0834p-19f, 0.0f,
     0x1.417c68p-4f, 0x1.ad65d4p-108f, 0.0f, 0.0f
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
            tmp1 = Sleef_finz_exp10f1_u10purecfma(tmp0);
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
    printf("Sleef_finz_exp10f1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10f1_u10purecfma bench acc %a\n", global_bench_acc);
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
