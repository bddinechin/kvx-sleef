/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhf8_u10kvx.c --function \
 *     Sleef_finz_sinhf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.482ff4p-110f, 0.0f, 0x1.c179a6p-86f, 0.0f, 0x1.cf2e34p-24f, 0x1.e3a01ep-28f,
     0.0f, 0x1.242d76p-75f, 0.0f, 0x1.10ad92p-60f, 0.0f, 0x1.741f58p-53f,
     0x1.1db25cp-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4ba8ccp-123f, 0x1.f18fbp-73f, 0.0f,
     0x1.60f316p-66f, 0.0f, 0.0f, 0.0f, 0x1.49200ap-100f, 0x1.d3ac4ep-103f,
     0x1.3fe79p-97f, 0x1.6dede6p-41f, 0.0f, 0.0f, 0.0f, 0x1.d8091ap-63f, 0.0f, 0.0f,
     0.0f, 0x1.6ce158p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.943348p-27f, 0.0f, 0.0f,
     0x1.0507dap-3f, 0x1.82ab86p-31f, 0.0f, 0.0f, 0x1.65d46p-107f, 0x1.00ed94p-38f,
     0.0f, 0x1.c0bde4p-23f, 0x1.11678cp-14f, 0.0f, 0.0f, 0.0f, 0x1.4066a2p-126f, 0.0f,
     0x1.4b8304p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c7ececp-57f, 0x1.edbde6p-109f, 0.0f, 0x1.24dd64p-30f, 0x1.0dfc48p-93f, 0.0f,
     0.0f, 0x1.7df3d8p-116f, 0.0f, 0x1.f9f9d8p-83f, 0.0f, 0x1.93f3a2p-105f, 0.0f,
     0x1.56ebbp-5f, 0.0f, 0.0f, 0x1.d0f166p-105f, 0.0f, 0x1.994d94p-23f,
     0x1.f60d6p-68f, 0.0f, 0x1.49555cp-87f, 0x1.59fcc2p-107f, 0x1.fa106ap-42f, 0.0f,
     0x1.dbb5eep-96f, 0.0f, 0.0f, 0x1.b43e0ep-120f, 0.0f, 0.0f, 0x1.4e155ep-71f, 0.0f,
     0.0f, 0x1.fa0928p-52f, 0.0f, 0.0f, 0x1.50d286p-76f, 0x1.18bdbep-20f, 0.0f, 0.0f,
     0.0f, 0x1.830c44p-126f, 0x1.87d0aap-90f, 0x1.f6422ep-112f, 0.0f,
     0x1.2b1c1cp-122f, 0x1.95493ap-93f, 0x1.553c44p-36f, 0x1.f02f14p-50f, 0.0f, 0.0f,
     0x1.b1943cp-28f, 0x1.6975aap-71f, 0.0f, 0x1.34f42ap-62f, 0.0f, 0x1.f08e12p-16f,
     0.0f, 0.0f, 0x1.f8c3eep-73f, 0x1.8c76c4p-102f, 0x1.bd6042p-11f, 0.0f,
     0x1.724c44p-78f, 0x1.42996ep-94f, 0.0f, 0x1.bfde02p-76f, 0.0f, 0x1.2a9606p-5f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a84552p-118f, 0.0f, 0x1.41fac4p-58f,
     0.0f, 0x1.ee19bp-47f, 0.0f, 0.0f, 0.0f, 0x1.a034f6p-2f, 0x1.9f36a6p-105f,
     0x1.3ea648p-21f, 0.0f, 0x1.edf96ep-3f, 0x1.70a5bcp-110f, 0x1.5b4942p-101f, 0.0f,
     0x1.f5e314p-36f, 0x1.d1dbacp-41f, 0x1.6d0f88p-101f, 0.0f, 0x1.be0384p-51f, 0.0f,
     0.0f, 0.0f, 0x1.db52dp-42f, 0x1.adeeaap-102f, 0x1.2bdc16p-95f, 0x1.c3f27cp-2f,
     0x1.51224p-34f, 0x1.d9de0cp-15f, 0.0f, 0x1.5c3216p-54f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f5d59cp-109f, 0x1.c212f4p-25f, 0.0f, 0.0f, 0x1.74a4fap-89f, 0x1.ab9232p-26f,
     0x1.c88b5cp-120f, 0x1.329958p-2f, 0x1.519c18p-18f, 0.0f, 0x1.e73df2p-29f, 0.0f,
     0.0f, 0.0f, 0x1.45130ap-44f, 0x1.ca90a6p-65f, 0x1.45b186p-48f, 0.0f,
     0x1.16974p-61f, 0x1.82c3f6p-84f, 0x1.c0d6p-70f, 0x1.8e1fa8p-91f, 0x1.1598dap-97f,
     0.0f, 0x1.0cbb86p-72f, 0.0f, 0x1.1faf8cp-110f, 0.0f, 0x1.4f7608p-26f,
     0x1.6f0e8cp-39f, 0.0f, 0x1.61502cp-14f, 0x1.832cc4p-109f, 0.0f, 0x1.a5cc42p-3f,
     0.0f, 0x1.075eb2p-107f, 0x1.5d68cep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f9bb14p-125f, 0.0f, 0x1.abdb94p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0cf40ap-102f, 0x1.497b16p-56f, 0x1.257bbep-36f, 0.0f, 0x1.366888p-51f, 0.0f,
     0.0f, 0x1.c75d0ap-10f, 0x1.2032f8p-69f, 0x1.c7c8dcp-6f, 0x1.73ab38p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ccd1f6p-103f, 0x1.9a5768p-116f, 0x1.90de7cp-25f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a364ep-62f, 0x1.c6802p-29f, 0.0f, 0.0f, 0.0f,
     0x1.6080aap-33f, 0.0f, 0.0f, 0x1.dfabdep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8eb752p-25f, 0.0f, 0x1.ae2daap-43f, 0.0f,
     0x1.053e58p-111f, 0x1.5ac968p-45f, 0.0f, 0.0f, 0x1.2340c2p-6f, 0.0f, 0.0f, 0.0f,
     0x1.573e78p-60f, 0x1.6be18ap-45f, 0.0f, 0x1.48de1ap-122f, 0.0f, 0x1.ded4dap-20f,
     0x1.c6982ep-123f, 0.0f, 0x1.048af2p-126f, 0x1.98de7p-6f, 0x1.dea182p-103f,
     0x1.e1e48ep-22f, 0.0f, 0x1.c1cf7p-63f, 0x1.490f38p-62f, 0x1.900cbcp-69f, 0.0f,
     0.0f, 0x1.198186p-33f, 0x1.9a5886p-89f, 0x1.c4ab5ap-100f, 0x1.388106p-84f,
     0x1.89963cp-49f, 0.0f, 0x1.a076d2p-34f, 0x1.1e8886p-86f, 0x1.563936p-124f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7d02e8p-112f, 0x1.9fe6c6p-21f, 0.0f, 0.0f,
     0x1.c35f4ep-101f, 0.0f, 0.0f, 0x1.78d168p-58f, 0.0f, 0x1.8edacep-87f, 0.0f, 0.0f,
     0.0f, 0x1.68bc78p-69f, 0x1.d2f8ccp-4f, 0.0f, 0.0f, 0x1.b7dc7ep-36f, 0.0f,
     0x1.55c128p-43f, 0.0f, 0x1.5ef1bp-112f, 0.0f, 0.0f, 0x1.f237bap-41f,
     0x1.4b4c18p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.82a06cp-92f,
     0x1.4f6866p-102f, 0.0f, 0x1.f1efdcp-56f, 0x1.d075ap-116f, 0x1.3e9664p-79f, 0.0f,
     0.0f, 0x1.90dad8p-87f, 0x1.486dc8p-12f, 0x1.a3ff96p-94f, 0x1.f2c8cp-15f,
     0x1.2124bap-126f, 0.0f, 0.0f, 0x1.dc96eap-62f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d87e6p-109f, 0.0f, 0.0f, 0.0f, 0x1.7038d2p-55f, 0.0f, 0x1.9e180cp-84f, 0.0f,
     0x1.b6165cp-95f, 0x1.efba6cp-126f, 0x1.4ff46ep-81f, 0.0f, 0x1.0bd7cep-41f, 0.0f,
     0x1.658efap-108f, 0.0f, 0x1.9eaeb8p-42f, 0x1.582bdap-90f, 0.0f, 0x1.419edap-114f,
     0.0f, 0.0f, 0x1.50dbap-5f, 0x1.ce061p-54f, 0.0f, 0x1.22f39ap-31f, 0.0f,
     0x1.8c6d88p-99f, 0.0f, 0x1.1ed5dap-64f, 0x1.6b6332p-33f, 0x1.82bc26p-50f,
     0x1.9e2032p-59f, 0x1.c8d7d6p-30f, 0x1.811bcep-117f, 0x1.689d14p-11f, 0.0f, 0.0f,
     0.0f, 0x1.e3036cp-125f, 0x1.d95e82p-99f, 0.0f, 0.0f, 0x1.453bd4p-22f,
     0x1.55320ep-123f, 0.0f, 0.0f, 0.0f, 0x1.a07ddp-66f, 0x1.fbe93p-16f, 0.0f,
     0x1.8d5c44p-106f, 0x1.13157ap-119f, 0x1.cdbd3cp-92f, 0x1.e63342p-61f,
     0x1.4ff808p-10f, 0.0f, 0x1.cf63bcp-109f, 0.0f, 0x1.96dd06p-100f, 0.0f,
     0x1.977278p-120f, 0x1.269828p-106f, 0x1.6a1c68p-1f, 0x1.b8ddp-67f,
     0x1.ddf226p-21f, 0.0f, 0x1.bc902cp-74f, 0x1.2b8492p-51f, 0.0f, 0x1.d26a26p-27f,
     0x1.19fd9p-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e628ap-78f, 0x1.01f204p-50f,
     0x1.5b68p-116f, 0.0f, 0.0f, 0x1.4d556ep-41f, 0.0f, 0.0f, 0.0f, 0x1.d26e3ep-7f,
     0.0f, 0x1.df1866p-7f, 0x1.0977b6p-24f, 0x1.9d5172p-116f, 0.0f, 0x1.d9c1b2p-3f,
     0.0f, 0x1.efeb98p-70f, 0x1.fbc96ep-80f, 0x1.1440c8p-57f, 0.0f, 0.0f, 0.0f,
     0x1.52e834p-118f, 0x1.9709a6p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.260acep-50f,
     0x1.c10024p-80f, 0.0f, 0x1.077e74p-115f, 0x1.59258ep-59f, 0.0f, 0.0f, 0.0f,
     0x1.9a704ep-32f, 0.0f, 0.0f, 0x1.bbf816p-103f, 0x1.b64c3p-1f, 0x1.12f9c6p-2f,
     0x1.73067ap-69f, 0x1.a1019p-69f, 0x1.99d82ep-36f, 0.0f, 0.0f, 0x1.5b8b9p-84f,
     0x1.43017ep-52f, 0.0f, 0.0f, 0x1.79c30ap-85f, 0x1.43b7bp-61f, 0x1.831c1p-19f,
     0.0f, 0x1.70b4b6p-6f, 0.0f, 0x1.67b442p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e2fc86p-114f, 0x1.e4fa68p-85f, 0x1.9706d2p-111f, 0x1p0f,
     0.0f, 0x1.8a4e9ap-45f, 0.0f, 0x1.824234p-110f, 0.0f, 0.0f, 0x1.f1bad8p-58f, 0.0f,
     0.0f, 0x1.73941ep-39f, 0x1.0f6e36p-59f, 0.0f, 0x1.14d48p-20f, 0x1.96fb2ap-46f,
     0x1.a4bc04p-107f, 0x1.7c5966p-107f, 0.0f, 0.0f, 0x1.dba564p-12f, 0.0f,
     0x1.cfdba6p-69f, 0x1.6cb1f8p-30f, 0x1.671be6p-5f, 0x1.223cacp-1f, 0.0f, 0.0f,
     0x1.6b03ccp-50f, 0x1.dad87ap-10f, 0x1.0b948ap-123f, 0.0f, 0.0f, 0.0f,
     0x1.9ac6f6p-39f, 0x1.cadd7ep-28f, 0x1.3b0986p-23f, 0.0f, 0.0f, 0x1.de09b2p-35f,
     0.0f, 0.0f, 0.0f, 0x1.e1b9a2p-24f, 0.0f, 0x1.970468p-9f, 0x1.fe670cp-95f,
     0x1.41957p-17f, 0x1.4095cep-109f, 0x1.dcc6d8p-114f, 0.0f, 0x1.85705p-68f, 0.0f,
     0x1.8cb7ccp-100f, 0x1.d08fd8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10e47p-91f,
     0x1.1e85d6p-38f, 0.0f, 0x1.1b22eap-51f, 0.0f, 0x1.2322f6p-46f, 0x1.841f82p-39f,
     0x1.e475f4p-111f, 0.0f, 0.0f, 0x1.4a7804p-102f, 0.0f, 0x1.567292p-98f, 0.0f,
     0.0f, 0x1.294ed6p-8f, 0x1.1060c6p-124f, 0.0f, 0x1.f549e8p-78f, 0x1.6b79ap-77f,
     0x1.1ce84ep-97f, 0.0f, 0x1.1f9feep-117f, 0x1.2cc4bap-17f, 0x1.22d1bp-76f, 0.0f,
     0x1.ac9a22p-99f, 0.0f, 0.0f, 0.0f, 0x1.d1a498p-34f, 0.0f, 0.0f, 0x1.d31fb4p-88f,
     0x1.c43cacp-93f, 0x1.3ec126p-121f, 0x1.7b94aap-99f, 0.0f, 0x1.01136ep-55f,
     0x1.a160bcp-22f, 0x1.dcefep-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.209596p-17f,
     0x1.a8222p-9f, 0x1.8fca32p-72f, 0x1.444e58p-5f, 0.0f, 0x1.6dfe08p-32f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.631cp-113f, 0x1.004e42p-64f, 0.0f, 0x1.3c0cccp-70f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.733c8ep-38f, 0x1.41da52p-41f, 0x1.d29c92p-36f,
     0x1.e15068p-50f, 0x1.c36a7cp-111f, 0x1.e13126p-117f, 0.0f, 0x1.2683b8p-83f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.545782p-76f, 0x1.7f1894p-117f, 0x1.f2cfaap-77f,
     0x1.3013d8p-75f, 0x1.410498p-12f, 0x1.b881f4p-74f, 0x1.708fdp-70f, 0.0f,
     0x1.ee7df8p-63f, 0x1.2fc7dcp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.27182p-82f, 0.0f, 0.0f, 0.0f, 0x1.ad0276p-124f, 0x1.7d18d2p-43f, 0.0f, 0.0f,
     0x1.e67206p-15f, 0x1.3c47c6p-115f, 0x1.0392p-37f, 0x1.05114ep-110f, 0.0f,
     0x1.09cc3ep-97f, 0x1.35190ap-44f, 0x1.d780d6p-52f, 0x1.0f90eap-117f,
     0x1.75fc9p-102f, 0.0f, 0x1.ee7d52p-124f, 0.0f, 0.0f, 0.0f, 0x1.7e7992p-114f,
     0x1.85e06ep-42f, 0x1.153efp-22f, 0x1.3c4e64p-61f, 0.0f, 0x1.309aacp-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b196d4p-77f, 0x1.4b483ap-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.512f24p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.46f2eep-2f, 0.0f, 0x1.76cedp-60f, 0.0f, 0.0f, 0x1.843ca2p-20f,
     0x1.3cbd3p-97f, 0x1.b05b4ap-35f, 0x1.01b64p-16f, 0x1.7feceep-61f, 0.0f,
     0x1.579c1ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.232cf6p-12f, 0.0f, 0x1.ebff04p-68f,
     0x1.d0a156p-54f, 0.0f, 0x1.780c02p-26f, 0.0f, 0x1.9403f6p-62f, 0.0f,
     0x1.58b7a2p-120f, 0x1.638ebep-93f, 0x1.6e94cap-74f, 0x1.0d126ap-23f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.765628p-55f, 0.0f, 0x1.e66ad6p-15f, 0x1.f40e48p-97f, 0.0f,
     0x1.e84116p-41f, 0x1.c5a75ap-105f, 0x1.d4e9d6p-47f, 0.0f, 0x1.e67352p-98f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e376ccp-103f, 0x1.28eb0ep-98f, 0.0f, 0.0f, 0x1.23303ep-4f,
     0.0f, 0x1p0f, 0x1.c09f4ep-76f, 0x1.d4c92p-114f, 0.0f, 0.0f, 0x1.76a548p-23f,
     0.0f, 0.0f, 0x1.a3226p-24f, 0.0f, 0x1.74d7f2p-126f, 0x1p0f, 0x1.05f97ap-66f,
     0.0f, 0x1.61cd7cp-72f, 0.0f, 0x1.016aaap-56f, 0x1.a4c2dep-120f, 0.0f,
     0x1.6a646ap-116f, 0.0f, 0x1.48d472p-23f, 0x1.060456p-43f, 0x1.1b5a9ap-73f, 0.0f,
     0.0f, 0.0f, 0x1.2e20d2p-108f, 0.0f, 0x1.55e5c2p-79f, 0.0f, 0.0f, 0x1.58281p-112f,
     0.0f, 0x1.046a88p-59f, 0.0f, 0x1.0a713ap-116f, 0x1.68e78p-119f, 0x1.3a3ba4p-116f,
     0x1.fcbc9p-63f, 0.0f, 0x1.fdade2p-35f, 0x1.534114p-114f, 0x1.2342dap-123f,
     0x1.079c38p-27f, 0x1.75c846p-11f, 0x1.9698f4p-106f, 0.0f, 0x1.5099f6p-68f, 0.0f,
     0.0f, 0x1.5ab178p-65f, 0.0f, 0x1.c4c1bcp-7f, 0.0f, 0x1.8adc4cp-36f, 0.0f, 0.0f,
     0x1.a46bfcp-59f, 0x1.47d474p-64f, 0x1.6633ep-118f, 0.0f, 0x1.2d7296p-63f, 0.0f,
     0x1.cb929ep-110f, 0.0f, 0.0f, 0x1.56cc96p-15f, 0.0f, 0x1.fe7a06p-86f, 0.0f,
     0x1.fb58fap-13f, 0.0f, 0x1.0b89fap-50f, 0x1.88d536p-117f, 0x1.4e958cp-9f,
     0x1.1b5d32p-99f, 0x1.0b6678p-95f, 0.0f, 0.0f, 0x1.1fb476p-99f, 0.0f, 0.0f,
     0x1.11e2d6p-10f, 0.0f, 0x1.56986ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d777bp-93f, 0x1.82edf2p-83f, 0x1.2ad634p-92f, 0x1.25be6p-79f,
     0x1.524ba2p-116f, 0.0f, 0.0f, 0.0f, 0x1.e8bdep-32f, 0x1.9e232ap-78f,
     0x1.84dec2p-4f, 0x1.f5e91ep-1f, 0.0f, 0.0f, 0.0f, 0x1.9ff07cp-50f, 0.0f, 0.0f,
     0x1.df0e9ap-76f, 0.0f, 0x1.b7dd9ep-47f, 0x1.36a6ep-122f, 0.0f, 0.0f,
     0x1.9316eap-31f, 0x1.f22074p-53f, 0.0f, 0.0f, 0x1.ab24ccp-107f, 0x1.6c923ep-91f,
     0x1.f79a88p-103f, 0.0f, 0x1.6cb5aep-25f, 0x1.7eaeeap-12f, 0x1.49186ap-13f, 0.0f,
     0.0f, 0x1.5944b4p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.131e7ap-82f, 0x1.3d2b76p-88f,
     0x1.43ea6p-76f, 0x1.9fd8aap-11f, 0.0f, 0.0f, 0x1.85de72p-11f, 0x1.f06468p-75f,
     0.0f, 0.0f, 0x1.4a4e2ap-89f, 0x1.968d1ep-100f, 0x1.7d48bap-46f, 0x1.202168p-110f,
     0.0f, 0x1.f33f4p-103f, 0x1.969c48p-16f, 0.0f, 0x1.88f5fep-7f, 0x1.8d2b68p-120f,
     0x1.1aae3ap-17f, 0x1.b17cb4p-9f, 0x1.7d6816p-14f, 0.0f, 0.0f, 0.0f,
     0x1.8e03ccp-43f, 0x1.abff9ap-26f, 0.0f, 0.0f, 0.0f, 0x1.3935cap-45f,
     0x1.05a26p-72f, 0x1.bca758p-21f, 0x1.0715d8p-93f, 0.0f, 0x1.9e995ap-5f,
     0x1.bed03p-9f, 0x1.165e42p-26f, 0.0f, 0x1.43f0eep-115f, 0.0f, 0.0f, 0.0f,
     0x1.622aacp-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.48d67ep-108f,
     0x1.95f2fp-55f, 0x1.458d54p-60f, 0.0f, 0x1.9c326p-11f, 0x1.d1fbbp-9f, 0.0f, 0.0f,
     0.0f, 0x1.c0ab42p-60f, 0x1.9c12b6p-36f, 0.0f, 0x1.e290d6p-114f, 0x1.5b3b4ap-49f,
     0.0f, 0x1.977982p-7f, 0.0f, 0.0f, 0x1.d91d66p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.77c3eep-31f, 0.0f, 0x1.c84c9ap-32f, 0x1.ed974ep-98f, 0x1.197cbep-10f,
     0x1.0e141p-10f, 0x1.864182p-84f, 0.0f, 0x1.1c1496p-46f, 0x1.c36ab4p-126f, 0.0f,
     0x1.d857fep-87f, 0x1.0eb776p-10f, 0.0f, 0x1.35023ep-113f, 0.0f, 0.0f,
     0x1.53632p-98f, 0x1.3ac846p-119f, 0x1.0b6118p-18f, 0.0f, 0x1.4e0138p-13f, 0.0f,
     0x1.fc6592p-121f, 0.0f, 0.0f, 0x1.114eaap-124f, 0x1.a205cp-93f
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
            tmp1 = Sleef_finz_sinhf8_u10kvx(tmp0);
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
    printf("Sleef_finz_sinhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sinhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
