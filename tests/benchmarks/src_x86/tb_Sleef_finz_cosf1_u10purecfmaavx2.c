/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosf1_u10purecfma.c --function \
 *     Sleef_finz_cosf1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0f, 0.0f, 0x1.443d92p-80f, 0.0f, 0.0f, 0x1.9c1afp-116f, 0x1.51ba9ep-24f, 0.0f,
     0x1.bf08b6p-110f, 0.0f, 0.0f, 0.0f, 0x1.7a1f32p-80f, 0x1.6555f6p-15f,
     0x1.420016p-48f, 0x1.bd49c6p-44f, 0x1.62d1a2p-89f, 0.0f, 0x1.4c1756p-119f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.85f86ep-1f, 0x1.55b872p-107f, 0.0f, 0.0f, 0.0f,
     0x1.24eb9cp-24f, 0x1.71587p-93f, 0x1.17504ap-19f, 0.0f, 0x1.fa1bd6p-29f,
     0x1.905a98p-10f, 0.0f, 0.0f, 0.0f, 0x1.2d7554p-64f, 0.0f, 0.0f, 0x1.7eaa62p-5f,
     0.0f, 0x1.e5c26cp-15f, 0x1.70d6ccp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.643268p-68f, 0x1.421fc2p-63f, 0.0f, 0.0f, 0x1.72b282p-119f, 0x1.bd48d8p-91f,
     0.0f, 0.0f, 0.0f, 0x1.dc56d4p-37f, 0x1.95aba8p-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9d326ap-118f, 0x1.190714p-83f, 0x1.dbecbcp-93f, 0.0f, 0x1.09f62ap-73f,
     0x1.6e906ep-121f, 0.0f, 0.0f, 0x1.6ce942p-80f, 0.0f, 0x1.410ebp-5f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d13ebap-99f, 0x1.9a9b6p-23f, 0x1.15c144p-75f,
     0.0f, 0x1.a2250ap-39f, 0.0f, 0x1.a512ep-62f, 0x1.a80994p-23f, 0x1.6daecep-62f,
     0.0f, 0x1.6b96a4p-4f, 0.0f, 0.0f, 0x1.15393ep-114f, 0x1.b5460ap-74f,
     0x1.9109bep-74f, 0.0f, 0x1.c057ap-85f, 0.0f, 0x1.312e0ap-126f, 0x1.e6611ap-53f,
     0.0f, 0.0f, 0.0f, 0x1.af8fcp-126f, 0x1.2e9c3ep-83f, 0.0f, 0.0f, 0.0f,
     0x1.8f3018p-104f, 0.0f, 0x1.4484ccp-78f, 0x1.628e8ap-38f, 0x1.e282f2p-76f,
     0x1.81d94ep-120f, 0.0f, 0.0f, 0x1.052668p-20f, 0.0f, 0.0f, 0x1.045d86p-117f,
     0x1.f48c98p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccc412p-19f, 0.0f,
     0x1.9a5bdp-45f, 0.0f, 0.0f, 0x1.ce1fd6p-73f, 0x1.74848ep-100f, 0x1.ea02bep-9f,
     0x1.33d16ep-66f, 0.0f, 0.0f, 0x1.cf1f0ap-32f, 0x1.32974ep-42f, 0.0f,
     0x1.9600a4p-76f, 0x1.18b75p-101f, 0x1.503b36p-67f, 0x1.a33bdcp-22f, 0.0f, 0.0f,
     0x1.e45b6ep-60f, 0.0f, 0.0f, 0.0f, 0x1.9970bap-43f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.15efp-51f, 0.0f, 0.0f, 0x1.d5a48cp-80f, 0x1.af92fep-96f, 0x1.3596bap-22f,
     0.0f, 0x1.fd8512p-12f, 0.0f, 0x1.68af18p-113f, 0x1.42bacep-57f, 0.0f,
     0x1.efd416p-39f, 0.0f, 0x1.4e023ap-6f, 0.0f, 0.0f, 0x1.c3efacp-47f, 0.0f,
     0x1.0a6946p-117f, 0x1.d9531cp-89f, 0.0f, 0x1.6f5594p-104f, 0.0f, 0x1.74d4aap-30f,
     0x1.b2f50ep-39f, 0.0f, 0.0f, 0x1.bb45c4p-37f, 0.0f, 0.0f, 0x1.7c3e16p-120f,
     0x1.59851ap-38f, 0.0f, 0x1.21473cp-94f, 0.0f, 0x1.d40e6cp-24f, 0x1.e129d2p-92f,
     0.0f, 0.0f, 0.0f, 0x1.7f51e8p-126f, 0x1.99d64p-100f, 0x1.93aaeep-27f,
     0x1.5522dap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d756dap-125f, 0.0f, 0x1.87a318p-72f,
     0x1.490fep-32f, 0.0f, 0x1.5df07ap-78f, 0.0f, 0.0f, 0x1.0e08bcp-120f, 0.0f, 0.0f,
     0x1.825f9ep-56f, 0.0f, 0x1.c731ecp-78f, 0x1.16f8fep-88f, 0x1.5db04ap-32f, 0.0f,
     0x1.6ef392p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11d4f4p-38f, 0x1.66d7bcp-56f,
     0x1.f92a06p-83f, 0.0f, 0x1.a289e2p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dce65ap-51f,
     0x1.ae9ffcp-23f, 0x1.cecd5ap-18f, 0x1.7a6d4ep-36f, 0.0f, 0x1.ad1f76p-29f,
     0x1.225a12p-49f, 0x1.0befe4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.8691ap-2f, 0x1.aa2264p-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.30a98cp-33f, 0.0f, 0.0f, 0x1.b374ecp-7f, 0x1.4fc14ap-3f, 0x1.5e2e34p-38f,
     0x1.92f992p-59f, 0.0f, 0x1.fc664ep-13f, 0x1.8d7212p-85f, 0x1.1925p-61f, 0.0f,
     0x1.b89d5p-122f, 0.0f, 0x1.563e14p-108f, 0x1.2b2c24p-57f, 0x1.3aaac4p-34f, 0.0f,
     0x1.753ee8p-12f, 0.0f, 0.0f, 0.0f, 0x1.af13a8p-17f, 0.0f, 0.0f, 0x1.a60ffp-55f,
     0x1.919928p-114f, 0.0f, 0x1.de643ap-114f, 0.0f, 0.0f, 0x1.b602fap-45f, 0.0f,
     0.0f, 0x1.fbc686p-72f, 0x1.4e848ep-40f, 0x1.36efdep-34f, 0x1.64807ap-59f,
     0x1.e0f6dep-120f, 0.0f, 0.0f, 0x1.6c5172p-98f, 0.0f, 0x1.08c9a2p-125f, 0.0f,
     0x1.200abcp-45f, 0.0f, 0x1.a17f22p-37f, 0.0f, 0.0f, 0.0f, 0x1.577b18p-79f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d63e52p-19f, 0x1.f1ed3ap-28f, 0x1.3ac5f2p-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e7568p-8f, 0x1.bd682p-94f, 0x1.f12d84p-57f, 0.0f,
     0x1.18833cp-12f, 0.0f, 0.0f, 0.0f, 0x1.2baac8p-59f, 0.0f, 0x1.aab318p-119f,
     0x1.3e80aap-30f, 0x1.9751a6p-27f, 0.0f, 0.0f, 0x1.b2890ap-62f, 0.0f,
     0x1.849cd6p-34f, 0.0f, 0x1.313cd4p-71f, 0.0f, 0x1.6854a4p-49f, 0x1.07c9aap-74f,
     0.0f, 0.0f, 0.0f, 0x1.e962eap-38f, 0x1.740024p-70f, 0.0f, 0x1.f36bccp-101f, 0.0f,
     0.0f, 0.0f, 0x1.2754bp-59f, 0x1.2995f4p-85f, 0.0f, 0x1.27fc22p-1f, 0.0f,
     0x1.ca936cp-89f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5f4baap-45f, 0.0f,
     0.0f, 0x1.b7a7f2p-3f, 0x1.488666p-106f, 0x1.145382p-61f, 0x1.0509a2p-123f, 0.0f,
     0x1.c1eed8p-33f, 0.0f, 0x1.f4d9b4p-15f, 0x1.a37ae4p-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b2dfa2p-31f, 0.0f, 0x1.097da2p-45f, 0x1.725d86p-97f, 0x1.77e42ep-59f,
     0x1.d3be9cp-100f, 0.0f, 0.0f, 0x1.5f471cp-57f, 0x1.1e534ap-28f, 0x1.d92f64p-45f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b6296p-11f, 0x1.e3c06ap-110f,
     0x1.ae5c6cp-38f, 0x1.2f67cap-51f, 0.0f, 0x1.e8bbb8p-17f, 0.0f, 0x1.50f17p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bd93ep-29f, 0x1.f8f9ccp-112f, 0.0f,
     0.0f, 0x1.1083fep-95f, 0x1.1b3372p-31f, 0x1.0e2bcp-79f, 0.0f, 0.0f,
     0x1.b3ee28p-119f, 0.0f, 0.0f, 0.0f, 0x1.a3ca4ep-126f, 0.0f, 0x1.27a8cp-100f,
     0x1.9beeacp-123f, 0.0f, 0x1.b090b4p-5f, 0.0f, 0x1.2fd42ap-101f, 0x1.e7dcd2p-11f,
     0x1.373e16p-6f, 0.0f, 0x1.8514e2p-106f, 0x1.be92e6p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.266a5p-63f, 0x1.78162ap-57f, 0x1.ff0ff6p-40f, 0x1.e5847p-125f, 0.0f, 0.0f,
     0.0f, 0x1.36b3b6p-117f, 0x1.b57446p-103f, 0.0f, 0x1.878f86p-116f,
     0x1.8ae1a8p-28f, 0.0f, 0.0f, 0x1.72f9dp-87f, 0x1.14731ap-27f, 0.0f, 0.0f,
     0x1.c9ee0cp-24f, 0x1.7a3f3p-77f, 0.0f, 0x1.0596e8p-89f, 0.0f, 0.0f, 0.0f,
     0x1.c62a76p-6f, 0x1.e98058p-47f, 0x1.e40fc8p-27f, 0x1.8938e8p-106f,
     0x1.040ea8p-117f, 0.0f, 0.0f, 0.0f, 0x1.3f99bap-62f, 0.0f, 0.0f, 0x1.a54238p-55f,
     0.0f, 0x1.b3ec36p-10f, 0.0f, 0.0f, 0.0f, 0x1.9ac9ep-112f, 0x1.5296dp-62f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.06c03ap-16f, 0.0f, 0.0f, 0x1.867496p-13f,
     0x1.1997p-85f, 0x1.817088p-11f, 0x1.e99514p-47f, 0.0f, 0.0f, 0.0f,
     0x1.b72d8cp-98f, 0.0f, 0.0f, 0.0f, 0x1.0a6874p-42f, 0x1.269e52p-46f, 0.0f,
     0x1.97b10cp-30f, 0.0f, 0x1.c19392p-74f, 0.0f, 0x1.476b1p-33f, 0.0f, 0.0f, 0.0f,
     0x1.57870ap-125f, 0.0f, 0.0f, 0x1.2b755cp-63f, 0x1.e95ae4p-31f, 0x1.209c9ap-77f,
     0x1.6e6132p-74f, 0.0f, 0x1.6b0e4p-65f, 0x1.077122p-58f, 0.0f, 0x1.f93c6cp-18f,
     0x1.f16ff4p-13f, 0.0f, 0x1.d57ef6p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b2835ep-46f, 0x1.107834p-117f, 0.0f, 0.0f, 0x1.db9a86p-60f, 0x1.75ffd2p-69f,
     0.0f, 0x1.ff5562p-123f, 0x1.40c3f2p-117f, 0.0f, 0x1.95ef4cp-51f, 0.0f,
     0x1.9bf472p-50f, 0.0f, 0.0f, 0x1.0018fcp-62f, 0x1.d87902p-116f, 0x1.11d366p-26f,
     0x1.5cb34p-74f, 0x1.79e74p-9f, 0x1.a5bcccp-37f, 0.0f, 0.0f, 0.0f,
     0x1.a6ffccp-16f, 0.0f, 0.0f, 0x1.493314p-23f, 0x1.e39366p-85f, 0x1.71329cp-97f,
     0.0f, 0x1.2250ecp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cb5676p-121f, 0x1.c40f2p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0195ep-113f, 0x1.3df8e2p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c3e694p-60f, 0x1.1a233p-97f, 0x1.c85e66p-115f, 0x1.05e0a4p-65f,
     0x1.d2e5c8p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e44c8p-65f, 0.0f, 0.0f,
     0x1.eb007p-89f, 0.0f, 0.0f, 0.0f, 0x1.6a052ep-112f, 0x1.d0f69p-88f, 0.0f, 0.0f,
     0x1.438abep-121f, 0x1.b09314p-1f, 0x1.b9042ap-102f, 0x1.db6dacp-116f,
     0x1.4e8f22p-71f, 0x1.8f4184p-21f, 0x1.123754p-63f, 0x1.fc5114p-74f,
     0x1.84d5dep-10f, 0x1.a175dcp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9c7d8p-51f,
     0x1.5d1664p-116f, 0x1.e15106p-95f, 0x1.88fcaep-99f, 0x1.12a26ep-27f, 0.0f, 0.0f,
     0x1.65714ep-43f, 0x1.bbab98p-86f, 0.0f, 0.0f, 0.0f, 0x1.8f770cp-103f, 0.0f, 0.0f,
     0x1.6835b4p-27f, 0x1.154994p-23f, 0.0f, 0x1.dd112p-18f, 0x1.431caep-60f, 0.0f,
     0x1.4a8e46p-48f, 0.0f, 0x1.2e48d2p-73f, 0x1.614c04p-69f, 0.0f, 0x1.7c1894p-23f,
     0.0f, 0x1.d989cep-90f, 0x1.decafep-121f, 0x1.37694ap-30f, 0.0f, 0.0f, 0.0f,
     0x1.8b56c4p-68f, 0.0f, 0.0f, 0.0f, 0x1.5b039cp-108f, 0x1.50fd6cp-86f,
     0x1.dc3cd6p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.081a24p-118f, 0.0f,
     0x1.de7e7p-126f, 0.0f, 0x1.68e746p-13f, 0x1.aac038p-79f, 0x1.9ba99p-31f, 0.0f,
     0.0f, 0x1.d1cef6p-120f, 0.0f, 0x1.6530f4p-117f, 0x1.679ecep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.83dc1cp-98f, 0x1.79597ep-4f, 0x1.118986p-66f, 0.0f, 0.0f,
     0.0f, 0x1.42f1cp-96f, 0.0f, 0x1.bf839ep-46f, 0x1.7520aep-12f, 0.0f, 0.0f,
     0x1.a70d26p-120f, 0x1.cd5f4p-104f, 0x1.f07cbp-81f, 0x1.5a493ap-9f,
     0x1.b6cfc8p-75f, 0.0f, 0x1.a44172p-82f, 0x1.405938p-10f, 0.0f, 0x1.4612e6p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4cc274p-83f, 0.0f, 0x1.ec16b2p-95f, 0.0f,
     0x1.dba90cp-90f, 0x1.74986cp-73f, 0.0f, 0.0f, 0.0f, 0x1.cc7e2p-60f, 0.0f,
     0x1.eb3938p-7f, 0x1.bc211cp-42f, 0.0f, 0x1.602324p-39f, 0.0f, 0x1.b90c26p-121f,
     0.0f, 0.0f, 0x1.13cb8ap-50f, 0x1.e0061ep-49f, 0x1.cfff6cp-52f, 0.0f, 0.0f,
     0x1.0ff44cp-68f, 0x1.74483ap-35f, 0.0f, 0.0f, 0.0f, 0x1.bd694ap-62f, 0.0f, 0.0f,
     0.0f, 0x1.c60726p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4e357ap-18f, 0.0f,
     0x1.db827cp-56f, 0x1.13d5f4p-6f, 0x1.862ep-38f, 0.0f, 0.0f, 0x1.3d7a02p-13f,
     0x1.ba996cp-20f, 0.0f, 0x1.26ff68p-118f, 0.0f, 0.0f, 0.0f, 0x1.364d38p-89f, 0.0f,
     0x1.f3adc2p-60f, 0.0f, 0x1.49ad84p-123f, 0x1.e0baaap-17f, 0x1.d1d7b2p-92f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.72f75cp-32f, 0x1.312744p-102f,
     0x1.b380a8p-81f, 0.0f, 0.0f, 0x1.4c2b54p-87f, 0.0f, 0.0f, 0x1.e7def6p-36f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.26fa02p-34f, 0.0f, 0.0f, 0x1.c3e8b2p-10f,
     0x1.95586cp-110f, 0.0f, 0.0f, 0.0f, 0x1.560316p-58f, 0x1.389ed8p-126f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.901566p-90f, 0.0f, 0x1.9306c6p-99f,
     0x1.141a82p-110f, 0.0f, 0x1.e2af9cp-97f, 0x1.3cb8a2p-29f, 0.0f, 0x1.9feddcp-27f,
     0x1.18a1ccp-56f, 0x1.7c1294p-95f, 0x1.f08fe6p-114f, 0.0f, 0x1.42f008p-75f, 0.0f,
     0.0f, 0.0f, 0x1.caaa8cp-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c60404p-14f, 0x1.8efc2ap-64f, 0.0f, 0x1.f5bfecp-31f, 0x1.000bf8p-111f, 0.0f,
     0x1.a4fa74p-29f, 0.0f, 0x1.dea6e2p-48f, 0x1.b5a186p-104f, 0x1.f2374ap-106f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.242c1ep-89f, 0x1.ee116ap-76f, 0.0f, 0x1.c6125ap-72f,
     0x1p0f, 0x1.a08c8p-74f, 0x1.187774p-118f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.c8eda6p-88f, 0x1.2bc8aep-24f, 0.0f, 0.0f, 0.0f, 0x1.eee094p-24f,
     0x1.901d9p-78f, 0.0f, 0.0f, 0x1.6a202ap-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.000b8p-35f, 0x1.2d56eep-29f, 0.0f, 0x1.1e987ap-60f, 0x1.b92b82p-125f,
     0x1.17601ap-66f, 0.0f, 0x1.d77ccap-93f, 0x1.0912b2p-94f, 0x1.b03758p-20f, 0.0f,
     0x1.0cabbp-16f, 0x1.713376p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db73cp-90f,
     0x1.2a8e46p-109f, 0.0f, 0.0f, 0.0f, 0x1.a733cap-70f, 0.0f, 0.0f, 0x1.d1fb3ap-16f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9f166cp-50f, 0x1.a68006p-52f, 0.0f,
     0x1.53e626p-60f, 0.0f, 0x1.46755p-86f, 0.0f, 0.0f, 0x1.1938c2p-98f,
     0x1.aceddp-83f, 0x1.58e3b4p-28f, 0.0f, 0.0f, 0.0f, 0x1.a6ccdcp-55f, 0.0f, 0.0f,
     0.0f, 0x1.67ae9ap-50f, 0.0f, 0x1.079fc4p-94f, 0x1.41baf2p-44f, 0x1.630b38p-79f,
     0.0f, 0x1.d36bb4p-56f, 0x1.8b2a06p-86f, 0x1.15d43p-18f, 0x1.f2f6e4p-23f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.838128p-123f, 0x1.256b6p-24f, 0x1.061ebap-73f, 0.0f,
     0x1.f6e78cp-64f, 0x1.8aa0acp-94f, 0x1.1e19c6p-33f, 0x1.9fbe1ap-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d6385ap-57f, 0.0f, 0.0f, 0x1.bcf02ep-123f, 0.0f,
     0x1.d9e636p-3f, 0x1.69bb2ap-28f, 0x1.572ab8p-125f, 0.0f, 0.0f, 0x1.e305b8p-80f,
     0x1p0f, 0x1.4d6ad8p-115f, 0x1.f81ce4p-71f, 0x1.02afa6p-1f, 0.0f, 0x1.ace696p-66f,
     0x1.13073ep-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.be58b6p-114f,
     0.0f, 0x1.da967p-3f, 0.0f, 0x1.98c97ap-13f, 0.0f
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
            tmp1 = Sleef_finz_cosf1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
