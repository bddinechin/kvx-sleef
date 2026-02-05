/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinf8_u10kvx.c --function \
 *     Sleef_finz_asinf8_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --vector-size 8 --function-input-vector-size \
 *     8 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float8_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float8_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1008];
static const float external_bench_wrapper_input_table_arg0[1008]  = {
     0x1.b68b4p-13f, 0.0f, 0.0f, 0x1.68dcfap-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.687c6ep-68f, 0x1.9f9facp-96f, 0x1.6e9c9p-70f, 0.0f, 0x1.1cd21ap-65f,
     0x1.22037ap-57f, 0x1.fdb454p-38f, 0x1.9e9978p-2f, 0x1.6893b4p-67f,
     0x1.dcc682p-48f, 0.0f, 0.0f, 0x1.6f5a04p-52f, 0.0f, 0.0f, 0x1.109a08p-9f, 0.0f,
     0x1.7f8a78p-26f, 0.0f, 0x1.60268p-123f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.12e984p-117f, 0x1.33c6aap-68f, 0x1.62730ep-43f, 0.0f, 0x1.d39b8ap-93f,
     0x1.98375ep-118f, 0x1.4e4fdap-64f, 0x1.dada98p-90f, 0.0f, 0.0f, 0x1.bdd842p-82f,
     0x1.1ff2fcp-84f, 0x1.c3e152p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ecc16p-67f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90f0cp-15f, 0.0f, 0.0f, 0x1.cd2b7p-108f,
     0x1.528c92p-6f, 0.0f, 0.0f, 0x1.3b534ap-30f, 0.0f, 0x1.7a6f64p-45f,
     0x1.87696cp-66f, 0x1.c6e428p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5738a8p-114f, 0x1.a4580cp-50f, 0x1.28f436p-33f, 0.0f, 0.0f, 0x1.74e222p-34f,
     0x1.633b5ep-35f, 0x1.fde146p-119f, 0.0f, 0.0f, 0.0f, 0x1.2c4cb2p-126f,
     0x1.bc9a2p-77f, 0x1.1f0266p-99f, 0.0f, 0.0f, 0.0f, 0x1.a72584p-123f,
     0x1.d31f08p-44f, 0x1.93b264p-122f, 0x1.51743p-96f, 0x1.623166p-51f, 0.0f,
     0x1.f86024p-58f, 0x1.9a097ep-15f, 0x1.a81adep-5f, 0x1.6f1474p-33f, 0.0f,
     0x1.f51d8ap-71f, 0x1.5d2594p-123f, 0x1.9c999p-13f, 0x1.7fddbap-46f, 0.0f,
     0x1.2b784p-60f, 0x1.7a484ap-120f, 0x1.a53eb6p-76f, 0.0f, 0.0f, 0x1.18f44ap-63f,
     0.0f, 0x1.088f5ap-34f, 0.0f, 0x1.0f5334p-88f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.86143cp-107f, 0.0f, 0.0f, 0x1.48b76ep-4f, 0x1.afaaf4p-57f, 0x1.40b254p-28f,
     0.0f, 0x1.3eeec2p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a36f26p-104f, 0.0f, 0.0f, 0x1.22b6c6p-14f, 0.0f, 0x1.10d41p-83f,
     0x1.a39b7cp-21f, 0x1.580d92p-19f, 0.0f, 0x1.39c6fcp-66f, 0x1.9cf9f8p-103f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.606692p-15f, 0.0f, 0x1.957fa4p-59f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d195f2p-125f, 0.0f, 0x1.fc7a8cp-91f, 0x1.7a5d44p-38f, 0x1.28d42cp-116f,
     0.0f, 0x1.b15036p-13f, 0.0f, 0x1.7d5804p-35f, 0x1.7575fp-3f, 0.0f,
     0x1.06fdfp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e73bcp-31f, 0.0f, 0.0f,
     0x1.947b7p-23f, 0x1.a834eap-47f, 0x1.7d1b02p-53f, 0x1.c5c19cp-102f,
     0x1.c88f2p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ea472p-31f, 0.0f,
     0x1.d8b77ep-52f, 0x1.38ddc8p-107f, 0.0f, 0x1.8bba54p-111f, 0.0f, 0.0f, 0.0f,
     0x1.5e87b2p-118f, 0x1.c83016p-7f, 0x1.66d1cep-100f, 0x1.79f1c6p-2f,
     0x1.9a90acp-64f, 0.0f, 0.0f, 0x1.0935ap-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2f2bc6p-116f, 0x1.33daecp-25f, 0x1.ec250cp-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f5cdcep-118f, 0x1.5f5a9ap-12f, 0.0f, 0.0f, 0x1.a61374p-111f,
     0x1.ec0ebep-114f, 0.0f, 0.0f, 0x1.a30b2p-35f, 0.0f, 0x1.96d43p-98f, 0.0f, 0.0f,
     0x1.4685f2p-91f, 0x1.05419ep-116f, 0x1.d1daf2p-72f, 0x1.12d5b2p-55f,
     0x1.1c8dc2p-102f, 0x1.abeed8p-33f, 0.0f, 0x1.02a1p-51f, 0x1.64381ap-123f, 0x1p0f,
     0x1.df334cp-87f, 0.0f, 0.0f, 0.0f, 0x1.d7b27cp-114f, 0x1.2dcddp-69f,
     0x1.4ed36ep-77f, 0.0f, 0x1.c05046p-48f, 0x1.be3a0ep-49f, 0x1.cfe828p-22f, 0.0f,
     0.0f, 0x1.5161fcp-126f, 0.0f, 0x1.7e6528p-98f, 0.0f, 0x1.30a80ap-11f,
     0x1.dd702p-111f, 0x1.929a68p-67f, 0x1.ad0c4cp-86f, 0.0f, 0.0f, 0x1.27b5dep-102f,
     0.0f, 0x1.3a69b8p-12f, 0.0f, 0x1.40518p-80f, 0.0f, 0.0f, 0.0f, 0x1.699d4ap-54f,
     0.0f, 0.0f, 0x1.77ed58p-89f, 0.0f, 0x1.02ea2ap-36f, 0.0f, 0.0f, 0x1.8a1d9cp-37f,
     0x1.bbdfap-102f, 0x1.f1e61cp-84f, 0x1.c3daf4p-73f, 0.0f, 0x1.bf5c1ap-57f,
     0x1.a60556p-102f, 0.0f, 0.0f, 0.0f, 0x1.efd93p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f7ba1p-7f, 0x1.a00d38p-19f, 0.0f, 0.0f, 0.0f, 0x1.1c89bp-124f,
     0x1.4d0ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bf244p-36f,
     0x1.2cb0b8p-59f, 0.0f, 0.0f, 0.0f, 0x1.be5a1ep-104f, 0x1.867dbcp-120f,
     0x1.5c90c4p-14f, 0.0f, 0.0f, 0.0f, 0x1.7985cp-58f, 0.0f, 0x1.8185bap-49f,
     0x1.a6c6a2p-96f, 0x1.408188p-123f, 0.0f, 0x1.65ddd2p-46f, 0x1.954d9ep-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.727dd2p-5f, 0.0f, 0x1.dfa012p-63f, 0x1.356af4p-49f,
     0x1.617454p-73f, 0.0f, 0x1.858624p-32f, 0.0f, 0x1.91171cp-63f, 0.0f, 0.0f,
     0x1.5876b8p-89f, 0.0f, 0x1.0ec284p-58f, 0x1.b2539ep-35f, 0.0f, 0x1.ffb9dap-94f,
     0x1.3fe308p-44f, 0.0f, 0x1.b34628p-62f, 0.0f, 0.0f, 0x1.19f166p-95f, 0.0f,
     0x1.53262p-24f, 0x1.4c65ecp-105f, 0.0f, 0.0f, 0.0f, 0x1.c062f4p-44f,
     0x1.3ff282p-113f, 0x1.61acecp-79f, 0x1.acf738p-47f, 0.0f, 0.0f, 0x1.c7337ap-22f,
     0.0f, 0x1.8f0812p-81f, 0.0f, 0x1.da61e2p-93f, 0.0f, 0.0f, 0x1.81a1b6p-18f,
     0x1.feff2ep-83f, 0x1.e678bcp-53f, 0x1.5b740ap-23f, 0x1.eae58ap-97f, 0.0f,
     0x1.bdcb52p-111f, 0x1.ca7e58p-2f, 0x1.a826b4p-104f, 0x1.a45ca6p-18f, 0.0f,
     0x1.75beep-113f, 0.0f, 0x1.615172p-40f, 0.0f, 0x1.989adap-80f, 0x1.a630ccp-32f,
     0x1.5f5008p-6f, 0x1.18f11ep-123f, 0x1.671748p-11f, 0.0f, 0x1.3fd91p-29f,
     0x1.5581f8p-57f, 0x1.9e7fdp-48f, 0.0f, 0x1.9fd622p-63f, 0x1.54b72ap-89f, 0.0f,
     0x1.7ac476p-97f, 0.0f, 0.0f, 0x1.b95b06p-29f, 0.0f, 0.0f, 0x1.6a433p-20f,
     0x1.003266p-89f, 0.0f, 0x1.1e30ecp-33f, 0.0f, 0.0f, 0.0f, 0x1.1cfc0ap-40f, 0.0f,
     0.0f, 0x1.043d9ap-3f, 0x1.d14ffcp-2f, 0x1.ea5cc6p-25f, 0x1.706da6p-11f, 0.0f,
     0x1.a8b848p-71f, 0.0f, 0x1.09d132p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e82dap-98f,
     0x1.64340cp-105f, 0.0f, 0.0f, 0.0f, 0x1.55a2cep-7f, 0x1.124464p-104f, 0.0f,
     0x1.ce5ba6p-112f, 0x1.85502cp-78f, 0x1.751b5p-59f, 0.0f, 0x1.620408p-65f,
     0x1.cf1332p-55f, 0x1.61fb6ap-40f, 0.0f, 0.0f, 0x1.fcc07cp-53f, 0x1.d9dc34p-40f,
     0.0f, 0x1.301ebap-72f, 0.0f, 0x1.bdf754p-87f, 0.0f, 0x1.8ce998p-10f, 0.0f,
     0x1.b4ff4ap-77f, 0x1.86d73p-42f, 0x1.f194e4p-57f, 0.0f, 0x1.18e68cp-98f, 0.0f,
     0.0f, 0x1.68971ep-123f, 0x1.348788p-99f, 0.0f, 0.0f, 0x1.d3d678p-103f,
     0x1.1938a4p-51f, 0.0f, 0.0f, 0x1.4b8bp-43f, 0x1.18ef64p-38f, 0.0f,
     0x1.3aac9p-115f, 0.0f, 0x1.3cdac8p-37f, 0.0f, 0.0f, 0x1.c3a534p-90f,
     0x1.789b4p-63f, 0.0f, 0.0f, 0x1.90da32p-54f, 0x1.afcd4ap-124f, 0.0f,
     0x1.4fbd6cp-79f, 0.0f, 0.0f, 0x1.cd38e4p-38f, 0x1.505dbep-34f, 0.0f,
     0x1.7a0d5ep-32f, 0x1.195602p-36f, 0.0f, 0x1.999232p-34f, 0x1.92f638p-2f,
     0x1.279fdep-66f, 0x1.dbb8cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.21612ep-62f, 0x1.033e34p-59f, 0.0f, 0x1.57efbep-49f, 0.0f, 0x1.decb58p-31f,
     0.0f, 0x1.597be4p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af38a8p-114f, 0x1.fa4e0cp-72f,
     0.0f, 0x1.33388ap-65f, 0.0f, 0.0f, 0x1.eae0f8p-72f, 0.0f, 0x1.71a612p-39f, 0.0f,
     0x1.2689f4p-93f, 0.0f, 0.0f, 0x1.6742dap-75f, 0.0f, 0.0f, 0.0f, 0x1.1d6ad8p-116f,
     0.0f, 0x1.3cc56ep-21f, 0x1.d6a76p-110f, 0.0f, 0x1.f29a9ep-98f, 0x1.188c3ep-7f,
     0x1.6146p-123f, 0x1.0bd6fap-68f, 0x1.679b06p-39f, 0x1.6cab4ep-9f, 0.0f, 0.0f,
     0x1.166d9cp-63f, 0.0f, 0x1.7cec54p-118f, 0.0f, 0.0f, 0x1.a19ceap-9f,
     0x1.4573fep-44f, 0.0f, 0.0f, 0x1.4ad472p-24f, 0.0f, 0.0f, 0.0f, 0x1.a2f1fp-62f,
     0x1.1b3b8ap-68f, 0x1.cb37bcp-13f, 0.0f, 0x1.c10346p-93f, 0.0f, 0x1.e30ccep-109f,
     0x1.c464ccp-58f, 0.0f, 0x1.95290ap-15f, 0.0f, 0.0f, 0x1.95b0f4p-126f,
     0x1.6d58bep-4f, 0x1.c80e0ep-63f, 0x1.bc94a8p-96f, 0x1.e4d06ep-111f, 0.0f, 0.0f,
     0x1.2a8d2cp-121f, 0.0f, 0x1.4cb6b8p-88f, 0.0f, 0x1.8e8baap-47f, 0x1.344a14p-20f,
     0x1.3f998cp-85f, 0.0f, 0x1.7a944cp-55f, 0.0f, 0.0f, 0x1.41c3e2p-46f,
     0x1.81bc4ap-1f, 0.0f, 0x1.0aff64p-16f, 0.0f, 0x1.ebab3p-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ddc244p-84f, 0.0f, 0x1.0ec07p-111f, 0x1.98acbcp-75f,
     0x1.911658p-71f, 0.0f, 0.0f, 0x1.9fc3eep-58f, 0.0f, 0x1.31c2p-117f,
     0x1.013deap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf75bcp-55f, 0.0f, 0x1.f4f342p-70f,
     0.0f, 0x1.cd65fp-23f, 0x1.ce1b56p-20f, 0.0f, 0x1.2e2734p-7f, 0.0f,
     0x1.57cfd6p-116f, 0.0f, 0x1.da1284p-103f, 0x1.2fda34p-72f, 0x1.bbc0bcp-73f,
     0x1.8bff92p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4cae4p-69f, 0x1.17eaeep-125f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc04ep-124f, 0.0f, 0x1.c62b76p-5f,
     0x1.c94984p-25f, 0x1.ced552p-4f, 0.0f, 0.0f, 0x1.cbb97ap-54f, 0x1.93318p-27f,
     0.0f, 0x1.229caep-29f, 0x1.2ac55ap-82f, 0x1.ceb03cp-88f, 0x1.730d12p-90f, 0.0f,
     0.0f, 0.0f, 0x1.9a2f62p-61f, 0x1.6cf94cp-28f, 0x1.db0392p-113f, 0.0f, 0.0f, 0.0f,
     0x1.c6d8d8p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.050a3p-116f,
     0x1.59f13ep-43f, 0.0f, 0x1.69a286p-57f, 0.0f, 0.0f, 0x1.65d12ep-92f,
     0x1.35d72ep-15f, 0.0f, 0.0f, 0x1.a35c94p-109f, 0.0f, 0.0f, 0.0f, 0x1.21db4p-41f,
     0x1.b4cd98p-29f, 0.0f, 0.0f, 0x1.3c67c4p-100f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c0278cp-33f, 0x1.9364a2p-89f, 0x1.3890dcp-8f, 0x1p0f, 0.0f, 0.0f,
     0x1.126c16p-62f, 0.0f, 0x1.cb8c54p-102f, 0.0f, 0.0f, 0x1.a814f8p-12f, 0.0f, 0.0f,
     0x1.038494p-112f, 0.0f, 0x1.69f3e2p-59f, 0x1.41d6a4p-115f, 0x1.01755p-49f, 0.0f,
     0.0f, 0x1.c1dcfep-115f, 0.0f, 0x1.02496p-122f, 0.0f, 0x1.cc8a64p-39f,
     0x1.60f546p-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.efab12p-7f, 0.0f, 0.0f,
     0.0f, 0x1.94214cp-94f, 0x1.381c5cp-7f, 0x1.308e66p-78f, 0x1.c835b6p-103f, 0.0f,
     0.0f, 0.0f, 0x1.69d4cap-63f, 0x1.b74dc4p-69f, 0x1.f6cb96p-60f, 0.0f,
     0x1.d28192p-81f, 0.0f, 0x1.727a4p-94f, 0x1.ffc86ep-42f, 0.0f, 0x1.c27352p-13f,
     0.0f, 0x1.805e46p-17f, 0.0f, 0.0f, 0x1.9530cp-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7419b6p-99f, 0x1.9cd22ap-65f, 0x1.2002d2p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fae6e8p-78f, 0.0f, 0x1.9183f2p-20f, 0x1.dbdeb6p-52f, 0.0f, 0x1.8834dp-16f,
     0.0f, 0x1.0d7d8p-5f, 0x1.dafc04p-57f, 0.0f, 0x1.4bae24p-9f, 0x1.79309ap-7f,
     0x1.3df982p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a3e92p-43f, 0.0f, 0x1.08c8f8p-118f,
     0x1.9fadbap-100f, 0x1.13a636p-65f, 0.0f, 0x1.edeccp-53f, 0x1.5a227p-82f, 0.0f,
     0.0f, 0.0f, 0x1.24744ep-114f, 0.0f, 0x1.a942b6p-73f, 0x1.1c2636p-7f,
     0x1.7da7bp-32f, 0.0f, 0x1.794df2p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91c294p-120f,
     0.0f, 0x1.a95d0cp-46f, 0x1.91b1dp-19f, 0.0f, 0x1.b932f6p-111f, 0x1.35aa26p-83f,
     0x1.851ad4p-28f, 0x1.3cf234p-86f, 0x1.30b41ap-89f, 0.0f, 0.0f, 0.0f,
     0x1.be6cf6p-103f, 0.0f, 0.0f, 0x1.27c6b2p-3f, 0x1.162bb6p-22f, 0x1.0f893cp-56f,
     0x1.b34d5p-91f, 0x1.f819bp-94f, 0.0f, 0x1.3ad69ap-7f, 0.0f, 0x1.06f688p-125f,
     0.0f, 0.0f, 0x1.93c63cp-7f, 0.0f, 0x1.3ee596p-60f, 0.0f, 0x1.6419eep-35f, 0.0f,
     0x1.df17b4p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a6168p-121f, 0.0f, 0x1.d7f51cp-94f,
     0.0f, 0x1.8ee1ecp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73abe8p-31f, 0.0f,
     0.0f, 0x1.e4308cp-23f, 0.0f, 0.0f, 0x1.9fc7f4p-37f, 0.0f, 0.0f, 0x1.9bd646p-107f,
     0.0f, 0x1.bd396ep-21f, 0x1.cb4ba8p-24f, 0.0f, 0x1.a1c8fp-75f, 0x1.9164bap-47f,
     0.0f, 0x1.2efa04p-21f, 0x1.e3aeaep-40f, 0x1.e8113ep-106f, 0.0f, 0x1.4e0cdep-111f,
     0x1.c154f6p-114f, 0x1.a81534p-124f, 0x1.02c1fep-113f, 0x1.285632p-109f,
     0x1.d4f2eep-98f, 0x1.598f7cp-107f, 0x1.1e34aap-125f, 0.0f, 0x1.cc463ap-22f, 0.0f,
     0.0f, 0x1.67268ap-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45a3e2p-3f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a7670ap-39f, 0.0f, 0x1.047d8cp-16f, 0.0f, 0x1.5e512p-19f,
     0x1.10f3dp-107f, 0.0f, 0.0f, 0.0f, 0x1.7d51fap-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.72b384p-21f, 0x1.7b94c8p-87f, 0x1.6059acp-17f, 0.0f, 0.0f, 0x1.7d8a4cp-117f,
     0x1.d88c06p-23f, 0x1.051bp-5f, 0x1.35d8eep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.93adfcp-30f, 0x1.bccbc6p-103f, 0.0f, 0x1.313a96p-90f, 0x1.46dae4p-112f, 0.0f,
     0.0f, 0x1.52c92ap-118f, 0.0f, 0x1.96dd0ap-82f, 0.0f, 0x1.67d6p-125f, 0.0f,
     0x1.ab4e2ep-100f, 0.0f, 0.0f, 0x1.c7042p-36f, 0x1.cfe54p-68f, 0.0f,
     0x1.447b32p-76f, 0x1.25edfp-14f, 0x1.58a6bcp-56f, 0.0f, 0x1.ffa01p-36f, 0.0f,
     0x1.d801eep-29f, 0x1.9c7ef8p-11f, 0.0f, 0.0f, 0x1.51585p-62f, 0.0f,
     0x1.e3e8dp-37f, 0.0f, 0x1.a8b08ap-21f, 0x1.d7b764p-107f, 0.0f, 0x1.58cac8p-86f,
     0.0f, 0.0f, 0.0f, 0x1.54ba5p-63f, 0x1.84a89ep-51f, 0x1.487d7cp-29f,
     0x1.17c322p-24f, 0x1.9c2c12p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d31442p-78f,
     0.0f, 0x1.9a0e62p-117f, 0x1.afe294p-69f, 0.0f, 0.0f, 0x1.f02f08p-17f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.22a0bep-46f, 0.0f, 0x1.81032p-103f, 0x1.69973ep-72f,
     0x1.d104a8p-5f, 0.0f, 0x1.e6f7a6p-120f, 0.0f, 0x1.15a37ep-68f, 0x1.05f57ep-104f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float8_t global_bench_acc;
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
        ml_float8_t local_acc;
        int32_t i;
        ml_float8_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1008));){
            ml_float8_t tmp0;
            ml_float8_t tmp1;
            ml_float8_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_asinf8_u10kvx(tmp0);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(8);
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
    cpe_measure = id_tmp / 10080000.0;
    printf("Sleef_finz_asinf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_asinf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
