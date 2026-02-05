/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expf8_u10kvx.c --function Sleef_expf8_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 8 \
 *     --function-input-vector-size 8 --bench --no-embedded-bin --target kv3
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
     0.0f, 0.0f, 0.0f, 0x1.d17eb8p-3f, 0.0f, 0.0f, 0x1.68c408p-62f, 0.0f, 0.0f, 0.0f,
     0x1p0f, 0x1.d5ce0ep-118f, 0.0f, 0.0f, 0x1.7ed2eap-28f, 0.0f, 0x1.343ba8p-65f,
     0x1.56277ep-16f, 0.0f, 0x1.ed208ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.50f08ap-26f,
     0.0f, 0x1.bdb514p-111f, 0x1.bea4c6p-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a66f42p-55f, 0x1.689aaep-16f, 0.0f, 0x1.076d44p-117f, 0x1.dd391ap-45f,
     0x1.a7e6c4p-94f, 0x1.c590e6p-72f, 0x1.a1b616p-38f, 0x1.26d7e2p-26f,
     0x1.ddc042p-11f, 0x1.d87adep-27f, 0.0f, 0x1.a338c6p-8f, 0x1.3f56a4p-58f, 0.0f,
     0x1.b24b42p-110f, 0x1.9d865ap-17f, 0x1.bc8ebcp-78f, 0x1.6cd932p-22f, 0.0f,
     0x1.68d154p-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.201e88p-100f,
     0x1.1bd4cep-43f, 0x1.6bf772p-45f, 0.0f, 0.0f, 0x1.bbeaf8p-14f, 0x1.281ae2p-103f,
     0.0f, 0x1.140422p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.affe96p-126f, 0x1.ec7e2ep-123f,
     0.0f, 0x1.dfbc24p-20f, 0x1.7a090cp-43f, 0.0f, 0x1.fdcdbap-14f, 0x1.d80d34p-42f,
     0.0f, 0x1.b3a9f2p-108f, 0.0f, 0x1.5b4366p-93f, 0x1.40d4fp-51f, 0.0f,
     0x1.0ef334p-59f, 0.0f, 0x1.1c1a3ap-24f, 0.0f, 0.0f, 0x1.bf541cp-9f, 0.0f, 0.0f,
     0x1.288172p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65dc6cp-65f, 0.0f, 0.0f,
     0x1.1a2204p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b2cc4p-82f, 0x1.cb91d2p-11f,
     0x1.0b066ap-64f, 0x1.de6cccp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.4b9e92p-124f, 0.0f, 0x1.6b196p-118f, 0x1.89f5f6p-22f, 0.0f, 0x1.8d4f84p-102f,
     0x1.7cc8d4p-16f, 0x1.d6a9a6p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d28eaap-97f, 0x1.f6e79cp-68f, 0x1.ec0684p-36f, 0x1.298ddep-37f,
     0x1.efcfdep-99f, 0.0f, 0.0f, 0x1.95d1f4p-75f, 0.0f, 0.0f, 0x1.740ee4p-83f, 0.0f,
     0.0f, 0x1.b35452p-103f, 0x1.ef26dap-97f, 0.0f, 0x1.392892p-46f, 0x1.25899ep-47f,
     0.0f, 0.0f, 0x1.d2b35p-87f, 0x1.3f64b6p-76f, 0x1.a86c2p-92f, 0x1.a67458p-18f,
     0.0f, 0.0f, 0.0f, 0x1.37f94ep-74f, 0.0f, 0x1.b93ef4p-47f, 0x1.ee090cp-12f,
     0x1.e1e0fep-107f, 0x1.a7c654p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8ce4ep-75f, 0.0f, 0x1.20bf98p-103f, 0.0f, 0.0f, 0.0f, 0x1.0bc5bap-22f,
     0x1.e596fcp-91f, 0.0f, 0.0f, 0.0f, 0x1.e85aa2p-2f, 0x1.c8493cp-32f, 0.0f, 0.0f,
     0x1.c8c964p-59f, 0x1.ebe76cp-43f, 0.0f, 0x1.02164p-93f, 0x1.9723fap-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6e9ce4p-9f, 0x1.4f73bcp-101f, 0.0f, 0x1.aba64ap-60f,
     0x1.36bd8ap-118f, 0x1.9cd676p-83f, 0x1.19cd28p-63f, 0x1.5d887ap-4f, 0.0f,
     0x1.e2d452p-19f, 0.0f, 0x1.b981b8p-27f, 0x1.41951ap-106f, 0.0f, 0x1.10255ap-102f,
     0x1.9fb9dep-15f, 0.0f, 0.0f, 0x1.ae4dc8p-40f, 0x1.2cc0d4p-22f, 0x1.ffbc72p-78f,
     0.0f, 0x1.99615ap-42f, 0x1.5ccd46p-111f, 0.0f, 0.0f, 0x1.077996p-40f,
     0x1.58253ap-122f, 0x1.b97af6p-96f, 0.0f, 0x1p0f, 0x1.76e08cp-34f, 0x1.267ecp-13f,
     0x1p0f, 0x1.d0a99p-59f, 0x1.20a204p-111f, 0.0f, 0x1.f8dc3ap-119f,
     0x1.317512p-88f, 0x1.1a16d2p-24f, 0.0f, 0x1.44a446p-107f, 0x1.0d27c8p-20f, 0.0f,
     0x1.eff644p-37f, 0.0f, 0x1.49be9ep-95f, 0.0f, 0.0f, 0.0f, 0x1.1da602p-125f,
     0x1.d9725cp-19f, 0.0f, 0x1.ace13ep-74f, 0x1.61be3ap-5f, 0x1.8e37cap-102f,
     0x1.c6ffa8p-74f, 0.0f, 0x1.6c058p-58f, 0.0f, 0x1.28d23ap-86f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ef2e18p-111f, 0x1.62b42cp-9f, 0x1.879c26p-2f, 0.0f, 0.0f, 0.0f,
     0x1.b76f18p-16f, 0.0f, 0x1.296a8cp-64f, 0x1.18d128p-32f, 0x1.1d3fc4p-15f,
     0x1.4d9d94p-31f, 0x1.a299ecp-95f, 0x1.b55b8p-59f, 0.0f, 0x1.7df686p-23f,
     0x1.d48cd8p-5f, 0x1.874c6p-51f, 0x1.e1c342p-113f, 0x1.c43c16p-83f, 0.0f,
     0x1.7e1c0cp-103f, 0.0f, 0x1.6a589cp-90f, 0x1.0e1d94p-70f, 0x1.103cf6p-51f,
     0x1.f093cep-36f, 0x1.022dbcp-123f, 0.0f, 0x1.9d13bp-8f, 0x1.f3240ep-72f,
     0x1.e0edc4p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b51ea8p-16f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f0392p-72f, 0x1.8e957cp-125f, 0.0f, 0.0f, 0.0f,
     0x1.5ddfeap-38f, 0.0f, 0x1.332b0ap-56f, 0x1.7a9e34p-1f, 0x1.c09348p-41f,
     0x1.f8e07ep-115f, 0x1.c40ff4p-88f, 0x1.9090fp-5f, 0.0f, 0.0f, 0.0f,
     0x1.8624a4p-20f, 0.0f, 0.0f, 0x1.d1fd3cp-41f, 0.0f, 0.0f, 0x1.88abbcp-105f,
     0x1.2f2692p-30f, 0.0f, 0.0f, 0.0f, 0x1.ea9db6p-94f, 0x1.c65cbcp-30f,
     0x1.e63d04p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec88dap-22f, 0x1.32482p-89f, 0.0f,
     0x1.38b48ap-85f, 0.0f, 0x1.edc9ecp-20f, 0x1.438eb6p-84f, 0.0f, 0x1.fb9fe8p-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc17fcp-13f, 0x1.71f40ep-126f, 0x1.92b3bep-23f,
     0x1.9a6c74p-103f, 0x1.373bdcp-38f, 0.0f, 0.0f, 0x1.dde2fcp-86f, 0x1.a41cdp-96f,
     0.0f, 0x1.49fbf6p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e127acp-83f, 0x1.80634ep-60f,
     0x1.6b76fap-61f, 0.0f, 0x1.dc4d62p-125f, 0.0f, 0.0f, 0x1.5efd0ep-7f,
     0x1.631a5p-20f, 0x1.6b4432p-74f, 0.0f, 0x1.2c9954p-72f, 0x1.7e3386p-116f,
     0x1.970d5ap-41f, 0x1.84c416p-11f, 0x1.c56fdep-121f, 0.0f, 0.0f, 0x1.1feeecp-67f,
     0.0f, 0.0f, 0x1.a9e886p-4f, 0x1.689f4p-63f, 0.0f, 0x1.312cdap-43f, 0.0f, 0.0f,
     0x1.b7401cp-31f, 0x1.0db996p-42f, 0.0f, 0.0f, 0.0f, 0x1.abf89p-123f,
     0x1.f9436cp-58f, 0x1.bcba0ap-18f, 0.0f, 0.0f, 0x1.e8463ap-28f, 0x1.f5221ap-89f,
     0x1.72ca3ap-116f, 0x1.4f029p-88f, 0x1.65e826p-18f, 0.0f, 0x1.88ec4ap-31f, 0.0f,
     0x1.46b58p-2f, 0.0f, 0x1.0c9abcp-125f, 0.0f, 0x1.81208ap-87f, 0x1.b7e0eep-8f,
     0.0f, 0.0f, 0x1.5b47e6p-66f, 0x1.44b712p-124f, 0.0f, 0.0f, 0.0f, 0x1.d03bb4p-76f,
     0x1.cc02bap-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9355f4p-16f, 0x1.fc6f36p-74f,
     0x1.4e920ep-101f, 0.0f, 0.0f, 0.0f, 0x1.6e0d42p-61f, 0x1.da722p-72f, 0.0f, 0.0f,
     0x1.fa21cap-71f, 0.0f, 0x1.a0079ep-45f, 0.0f, 0.0f, 0.0f, 0x1.b2c644p-44f,
     0x1.846106p-107f, 0x1.d3cfbcp-105f, 0.0f, 0.0f, 0x1.264a24p-117f, 0.0f,
     0x1.0fd56ap-126f, 0.0f, 0.0f, 0.0f, 0x1.578deap-12f, 0x1.6839f4p-109f,
     0x1.78c5b4p-77f, 0x1.a95cf2p-60f, 0x1.96c78p-41f, 0.0f, 0.0f, 0.0f,
     0x1.daaa36p-108f, 0.0f, 0x1.bcc4cap-125f, 0x1.ad53cep-50f, 0x1.fb5948p-36f, 0.0f,
     0x1.7f3c1ap-112f, 0.0f, 0.0f, 0x1.3ff1bap-68f, 0.0f, 0.0f, 0.0f, 0x1.0e1568p-11f,
     0.0f, 0.0f, 0x1.9e7aaap-68f, 0.0f, 0x1.a906e8p-7f, 0.0f, 0.0f, 0.0f,
     0x1.32c9ap-42f, 0.0f, 0x1.a75bfep-18f, 0x1.4d2506p-37f, 0x1.54b3b4p-73f,
     0x1.fbb2c6p-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d498dep-94f, 0x1.eb633ep-21f,
     0x1.fd35b6p-94f, 0.0f, 0.0f, 0x1.12862cp-101f, 0x1.95eb7ep-16f, 0x1.1005dap-70f,
     0x1.184218p-125f, 0x1.026768p-73f, 0x1.689df8p-30f, 0x1.7b867ep-93f,
     0x1.725eeap-83f, 0.0f, 0x1.2cd76ap-93f, 0x1.eb4d34p-119f, 0x1.f16c4ap-3f, 0.0f,
     0x1.550c7p-101f, 0.0f, 0.0f, 0x1.01dfcap-46f, 0x1.f0dd24p-112f, 0x1.cacc16p-5f,
     0x1.5a3c88p-104f, 0x1.ba82e4p-27f, 0x1.6e05b4p-29f, 0.0f, 0.0f, 0.0f,
     0x1.ec6b12p-28f, 0x1.3c5b12p-90f, 0.0f, 0x1.085fbep-67f, 0.0f, 0.0f,
     0x1.f6ff1ap-15f, 0.0f, 0.0f, 0.0f, 0x1.07d0e2p-14f, 0x1.93be34p-57f, 0.0f,
     0x1.357a32p-98f, 0.0f, 0.0f, 0x1.16ac5cp-46f, 0.0f, 0x1.71f0dep-63f,
     0x1.820688p-39f, 0.0f, 0.0f, 0.0f, 0x1.6faf84p-62f, 0.0f, 0.0f, 0x1.3de7c6p-57f,
     0x1.dac1b8p-124f, 0.0f, 0.0f, 0x1.adb66ep-121f, 0x1.907dd4p-3f, 0x1.bd18e2p-12f,
     0x1.be1bcep-45f, 0.0f, 0x1.5eedb8p-100f, 0x1.504534p-27f, 0x1.0935c6p-11f,
     0x1.cb7a56p-53f, 0.0f, 0x1.2ba30ap-103f, 0x1.95469ep-24f, 0.0f, 0.0f,
     0x1.d296eep-41f, 0x1.f899b8p-37f, 0.0f, 0x1.d55a02p-102f, 0x1.af7152p-107f, 0.0f,
     0x1.377cbcp-106f, 0.0f, 0x1.560a62p-74f, 0x1.47a71ep-58f, 0x1.69a118p-124f, 0.0f,
     0x1.6a1434p-92f, 0x1.5bff9ep-115f, 0x1.98cf7cp-69f, 0x1.487c4ap-63f, 0.0f,
     0x1.d8efbp-34f, 0x1.7b44cep-30f, 0x1.2f728cp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0d34d2p-120f, 0.0f, 0.0f, 0x1.8f9fa2p-72f, 0.0f, 0x1.3b8322p-35f, 0.0f, 0.0f,
     0.0f, 0x1.5632acp-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfd1bp-51f, 0x1.483894p-34f,
     0x1.4c6bfcp-121f, 0.0f, 0x1.c26ed4p-70f, 0.0f, 0.0f, 0.0f, 0x1.bea8aap-62f,
     0x1.2f1be6p-60f, 0.0f, 0x1.3c485cp-71f, 0x1.18706ap-86f, 0.0f, 0x1.c42afep-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e1ac0cp-15f, 0x1.898a18p-28f, 0x1.3a76c6p-70f,
     0x1.b8712cp-113f, 0x1.06fb92p-53f, 0x1.c058a8p-3f, 0x1.0f1056p-114f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a8715p-41f, 0x1.4bc604p-114f, 0.0f, 0x1.0fea86p-112f, 0.0f,
     0.0f, 0.0f, 0x1.c9a8b6p-112f, 0.0f, 0.0f, 0x1.1f1fd4p-80f, 0x1.db5088p-98f,
     0x1.c5352p-109f, 0x1.e11e86p-29f, 0x1.497784p-47f, 0.0f, 0.0f, 0x1.746934p-51f,
     0.0f, 0.0f, 0x1.57e688p-99f, 0.0f, 0x1.b33576p-1f, 0.0f, 0.0f, 0.0f,
     0x1.19aa8cp-17f, 0x1.7aa144p-117f, 0.0f, 0x1.ab8ca4p-110f, 0.0f, 0x1.1bcdb6p-18f,
     0x1.589064p-47f, 0x1.b4ef1ep-90f, 0x1.2b3288p-15f, 0x1.274702p-26f, 0.0f, 0.0f,
     0x1.c89e64p-83f, 0x1.a5ea4ep-22f, 0x1.21f03ap-1f, 0.0f, 0x1.598a32p-58f,
     0x1.1a54a6p-79f, 0.0f, 0x1.6a4e6cp-10f, 0x1.ea6296p-77f, 0.0f, 0x1.a65b2cp-29f,
     0x1.6a74b8p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.610412p-113f, 0.0f,
     0.0f, 0x1.5c3392p-118f, 0x1.53394ep-21f, 0.0f, 0x1.31b1c4p-96f, 0x1.46554ep-86f,
     0x1.cc4e26p-70f, 0.0f, 0.0f, 0.0f, 0x1.aa064ep-65f, 0.0f, 0.0f, 0x1.b89d52p-72f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5dfb9ep-18f, 0.0f, 0.0f, 0x1.8cc728p-27f, 0.0f,
     0x1.d3661p-93f, 0.0f, 0x1.a596cp-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1c90cp-67f,
     0.0f, 0x1.2e9acap-63f, 0.0f, 0x1.24dc8ap-62f, 0.0f, 0x1.50dc56p-124f,
     0x1.91a4cap-49f, 0.0f, 0x1.885ddp-48f, 0.0f, 0x1.fc3d38p-39f, 0.0f,
     0x1.42e3c2p-104f, 0.0f, 0.0f, 0x1.3f5e6p-110f, 0.0f, 0x1.a3749ap-121f, 0.0f,
     0x1.954eb2p-120f, 0x1.27a2c6p-48f, 0x1.53a0e2p-79f, 0.0f, 0.0f, 0x1.d73ae8p-62f,
     0.0f, 0.0f, 0x1.c28a32p-48f, 0x1.bb69d4p-45f, 0x1.d20b1ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.b574ccp-64f, 0x1.db01dap-71f, 0x1.fa2d1cp-116f, 0x1.0e5b4ap-7f,
     0x1.764518p-21f, 0x1.5eec1cp-125f, 0x1.bd28bep-106f, 0.0f, 0.0f, 0.0f,
     0x1.fc6302p-6f, 0x1.19d73ep-58f, 0x1.f9336ap-111f, 0x1.3a0bfep-28f, 0.0f, 0.0f,
     0x1.f8318ep-75f, 0x1.708a2ap-31f, 0.0f, 0x1.9bf572p-80f, 0x1.04a7c4p-19f,
     0x1.f0956ap-121f, 0.0f, 0.0f, 0x1.95595p-64f, 0.0f, 0x1.3c9404p-35f,
     0x1.889b08p-93f, 0.0f, 0x1.fd0f7cp-100f, 0x1.dd3dd4p-12f, 0x1.26b58p-1f, 0.0f,
     0.0f, 0x1.2da84p-66f, 0x1.1ec218p-90f, 0x1.0d3e42p-31f, 0x1.a41752p-116f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dfbfccp-27f, 0.0f, 0.0f, 0.0f, 0x1.99b938p-58f, 0.0f,
     0x1.856672p-8f, 0.0f, 0.0f, 0x1.b72e76p-83f, 0x1.4ef8dcp-80f, 0x1.9ad7b4p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f42a0ap-96f, 0x1.130d5ap-3f, 0.0f, 0x1.8c6b0ep-90f,
     0.0f, 0x1.7ee1bp-76f, 0.0f, 0.0f, 0x1.3c0e9cp-110f, 0.0f, 0x1.fcb04ep-7f,
     0x1.dcf122p-13f, 0.0f, 0x1.d8a9ccp-34f, 0x1.922294p-59f, 0.0f, 0.0f, 0.0f,
     0x1.74d09ap-95f, 0.0f, 0x1.051734p-92f, 0x1.ef94a4p-45f, 0.0f, 0.0f,
     0x1.bf4fap-119f, 0x1.853628p-81f, 0x1.e4e146p-1f, 0.0f, 0.0f, 0x1.77deccp-10f,
     0.0f, 0x1.4cdf2ep-119f, 0x1.ecc916p-34f, 0.0f, 0.0f, 0x1.d6905ep-22f, 0.0f, 0.0f,
     0x1.42cd96p-11f, 0.0f, 0x1.5b9a56p-35f, 0.0f, 0x1.2a9b62p-12f, 0x1.349df8p-65f,
     0x1.202676p-40f, 0x1.fd913ep-101f, 0x1.023e3p-9f, 0x1.c6d35ap-109f, 0.0f,
     0x1.3d7bdcp-26f, 0.0f, 0.0f, 0.0f, 0x1.117248p-57f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e65fcp-61f, 0x1.043464p-5f, 0x1.69eee8p-69f, 0.0f, 0x1.42ba7p-77f,
     0x1.a0df28p-55f, 0.0f, 0x1.380c18p-6f, 0.0f, 0.0f, 0.0f, 0x1.3c6b48p-22f,
     0x1.546958p-79f, 0.0f, 0x1.b857c6p-36f, 0.0f, 0x1.383a1p-53f, 0.0f,
     0x1.dced6ap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.276f58p-113f, 0.0f,
     0x1.b94fc6p-40f, 0x1.d88406p-120f, 0x1.a909a6p-95f, 0x1.50a358p-39f, 0.0f,
     0x1.fad9b2p-86f, 0x1.494d24p-121f, 0x1.199614p-26f, 0x1.d42edcp-121f,
     0x1.e2e08ap-48f, 0x1.f75f8ap-41f, 0.0f, 0x1.16e20cp-79f, 0.0f, 0x1.3186fp-76f,
     0.0f, 0x1.00366ap-113f, 0.0f, 0x1.98f8p-126f, 0.0f, 0.0f, 0x1.0c22dep-113f, 0.0f,
     0.0f, 0x1.1ee644p-19f, 0.0f, 0.0f, 0x1.e7660ep-58f, 0.0f, 0x1.c9359ap-74f, 0.0f,
     0.0f, 0x1.b2011ep-36f, 0.0f, 0.0f, 0x1.b31af2p-89f, 0x1.12cdc2p-5f,
     0x1.8585b8p-87f, 0x1.a45efcp-42f, 0.0f, 0.0f, 0x1.bce27ap-124f, 0.0f,
     0x1.de3e28p-113f, 0.0f, 0.0f, 0x1.edf896p-44f, 0x1.ee2a7ep-80f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2a7b3ap-99f, 0x1.ed92b6p-3f, 0.0f, 0.0f, 0x1.6777eap-86f,
     0x1.c26eaap-32f, 0x1.110c36p-58f, 0.0f, 0.0f, 0x1.cbfe1p-2f, 0x1.7508a2p-57f,
     0x1.d6d7c2p-34f, 0x1.9bfe78p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6e59cp-79f, 0.0f, 0x1.d2169cp-110f, 0x1.c4f46cp-44f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e60892p-11f, 0.0f, 0x1.23045p-89f, 0x1.5c69bcp-48f,
     0.0f, 0x1.56e4eap-77f, 0.0f, 0.0f, 0x1.75e118p-58f
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
            tmp1 = Sleef_expf8_u10kvx(tmp0);
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
    printf("Sleef_expf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_expf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
