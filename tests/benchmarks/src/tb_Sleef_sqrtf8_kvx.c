/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf8_kvx.c --function Sleef_sqrtf8_kvx --headers \
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
     0x1.53b226p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e5be6p-94f, 0.0f, 0.0f, 0.0f,
     0x1.ef6484p-88f, 0x1.444914p-104f, 0.0f, 0x1.900bb4p-76f, 0.0f, 0x1.8bb9c8p-7f,
     0x1.951132p-27f, 0.0f, 0x1.690f98p-49f, 0x1.2c8a02p-84f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d313cap-79f, 0x1.48a3d4p-86f, 0x1.64e33ap-120f, 0.0f, 0x1.71ee72p-80f, 0.0f,
     0.0f, 0x1.4b1f08p-114f, 0x1.ec636ep-89f, 0.0f, 0x1.a8fad6p-79f, 0x1.d184eep-74f,
     0.0f, 0.0f, 0x1.673b26p-92f, 0.0f, 0x1.17e0c4p-111f, 0x1.3a5402p-17f, 0.0f,
     0x1.d7d522p-22f, 0.0f, 0x1.5fe1ecp-39f, 0.0f, 0.0f, 0x1.aad24p-14f, 0.0f,
     0x1.8f379cp-17f, 0.0f, 0x1.794cap-14f, 0x1.c69d8cp-94f, 0.0f, 0x1.43ec34p-90f,
     0x1.133decp-46f, 0.0f, 0.0f, 0x1.10d896p-21f, 0x1.ca1d98p-120f, 0x1.352cdcp-5f,
     0x1.d3c00ap-78f, 0x1.529642p-80f, 0x1.b781a8p-31f, 0.0f, 0x1.3a22f2p-6f, 0.0f,
     0.0f, 0.0f, 0x1.fef9f4p-45f, 0.0f, 0x1.59a0e8p-10f, 0.0f, 0x1.3a938ep-65f,
     0x1.aef9f4p-73f, 0x1.a6875ep-5f, 0x1.8df47cp-119f, 0x1.caab98p-36f,
     0x1.8ca3e2p-111f, 0x1.b73a38p-73f, 0x1.cf6b22p-25f, 0x1.b42c02p-51f,
     0x1.31551p-36f, 0.0f, 0x1.845f2ap-125f, 0.0f, 0.0f, 0.0f, 0x1.97cb24p-74f, 0.0f,
     0.0f, 0x1.50dc32p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8be486p-1f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.577dcp-12f, 0x1.d6c22p-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbb0dep-68f, 0.0f, 0.0f, 0x1.074036p-19f, 0x1.8e2d2p-91f, 0x1.0bf0eap-6f,
     0.0f, 0x1.dec728p-17f, 0.0f, 0x1.7eea3p-113f, 0.0f, 0.0f, 0x1.0ff2e2p-51f, 0.0f,
     0x1.ea286cp-118f, 0x1.cff538p-121f, 0.0f, 0.0f, 0x1.63512ap-92f, 0x1.a623bap-61f,
     0x1.8df50ap-29f, 0.0f, 0x1.c1d3f4p-63f, 0x1.d17b14p-77f, 0.0f, 0x1.5fa65ep-34f,
     0.0f, 0.0f, 0x1.ada0ap-44f, 0x1.a5e118p-95f, 0.0f, 0x1.194196p-3f, 0.0f,
     0x1.be7488p-76f, 0x1.cb90d4p-82f, 0.0f, 0.0f, 0.0f, 0x1.37b652p-42f, 0.0f,
     0x1.bd7998p-23f, 0.0f, 0x1.5ff996p-21f, 0.0f, 0.0f, 0x1.22ed02p-19f,
     0x1.84e438p-46f, 0x1.d1a71ep-1f, 0.0f, 0.0f, 0x1.2857a8p-82f, 0.0f,
     0x1.039f5ep-87f, 0x1.65e44ep-55f, 0.0f, 0x1.1d97b8p-124f, 0x1.fa555p-24f, 0.0f,
     0x1.316928p-114f, 0x1.0714f4p-33f, 0x1.6b4b3ap-116f, 0x1.e7a32ep-13f, 0.0f,
     0x1.325a6ep-102f, 0.0f, 0.0f, 0x1.38366p-16f, 0.0f, 0.0f, 0x1.b9fdf6p-51f, 0.0f,
     0x1.48d034p-38f, 0.0f, 0.0f, 0x1.5b8d1ep-19f, 0.0f, 0x1.715e24p-79f, 0.0f,
     0x1.22282ep-12f, 0x1.ca3594p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.951bb2p-47f,
     0x1.1d1e14p-21f, 0x1.0e755cp-87f, 0x1.a0618cp-119f, 0.0f, 0x1.f1df82p-25f,
     0x1.d9d47ap-95f, 0x1.a8dceep-62f, 0x1.0ec92ep-84f, 0x1.49facep-27f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.857c8p-115f, 0x1.d5e7bp-46f, 0.0f,
     0x1.cd1b5ep-126f, 0x1.655e78p-95f, 0.0f, 0x1.45d814p-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a97b7cp-24f, 0x1.dce5c8p-96f, 0x1.ad10dp-76f, 0.0f, 0x1.0d83dep-37f,
     0x1.5343dp-1f, 0.0f, 0x1.5c1bd4p-71f, 0.0f, 0.0f, 0x1.0d17fp-42f, 0.0f,
     0x1.c1ce92p-1f, 0x1.d87adcp-81f, 0.0f, 0x1.0079f4p-76f, 0.0f, 0x1.652f04p-112f,
     0x1.c5af8p-27f, 0x1.8b6d1ap-35f, 0x1.26801ep-25f, 0.0f, 0.0f, 0x1.590788p-9f,
     0x1.c2b94ep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.afb63ep-11f,
     0x1.0273dap-86f, 0.0f, 0.0f, 0x1.8fbc62p-87f, 0.0f, 0x1.d86c5ep-117f,
     0x1.999b4ap-53f, 0.0f, 0x1.5102a4p-44f, 0x1.ed6536p-88f, 0x1.6591dp-47f,
     0x1.0eb75ep-18f, 0x1.9c1b3p-100f, 0.0f, 0.0f, 0.0f, 0x1.32828ap-36f, 0.0f,
     0x1.cc869ep-10f, 0.0f, 0.0f, 0.0f, 0x1.fb6014p-124f, 0.0f, 0.0f, 0x1.e662bp-56f,
     0.0f, 0x1.ad20f4p-96f, 0x1.391a8ap-50f, 0x1.674a62p-1f, 0.0f, 0x1.759afp-31f,
     0.0f, 0x1p0f, 0x1.848a34p-115f, 0.0f, 0x1.f5ab7ep-4f, 0.0f, 0x1.1c705cp-119f,
     0.0f, 0x1.9f4d7cp-8f, 0.0f, 0.0f, 0x1.7701cp-40f, 0.0f, 0x1.911d84p-123f, 0.0f,
     0x1.33e168p-26f, 0x1.1773f8p-125f, 0.0f, 0.0f, 0.0f, 0x1.fb48d4p-114f, 0.0f,
     0x1.8e4aecp-71f, 0.0f, 0x1.bb0c8cp-78f, 0x1.394e98p-42f, 0x1.829da8p-63f,
     0x1.b81a8ap-5f, 0x1.7399dep-16f, 0x1.282f24p-111f, 0x1.e2a78p-65f,
     0x1.d8e582p-80f, 0.0f, 0.0f, 0.0f, 0x1.337f3ep-122f, 0.0f, 0x1.831a9ap-126f,
     0x1.5e14a2p-2f, 0x1.a93c9ap-56f, 0x1.66145ep-11f, 0.0f, 0x1.3cc55p-97f, 0.0f,
     0.0f, 0x1.b6cee6p-44f, 0.0f, 0x1.5ec68ep-58f, 0x1.5b45ecp-46f, 0x1.eea4dp-33f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.4abeecp-4f, 0x1.78e3ccp-71f, 0x1.1ecaccp-40f,
     0x1.d38a2cp-34f, 0x1.89c262p-30f, 0.0f, 0x1.090fcap-10f, 0x1.e0c44ap-46f, 0.0f,
     0.0f, 0x1.e1eaeep-61f, 0x1.bb14a6p-69f, 0x1.838098p-53f, 0x1.72e934p-22f,
     0x1.93270cp-56f, 0x1.1daf0ep-25f, 0.0f, 0.0f, 0x1.e823acp-75f, 0.0f,
     0x1.3eedeep-19f, 0x1.6b481ep-17f, 0x1.d4b0ccp-102f, 0x1.751f98p-49f,
     0x1.4eca96p-92f, 0.0f, 0x1.d55f34p-90f, 0x1.c31376p-111f, 0x1.4d8248p-119f,
     0x1.c3d41ap-92f, 0.0f, 0.0f, 0.0f, 0x1.c0e246p-70f, 0x1.1ed42cp-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.204586p-78f, 0.0f, 0.0f, 0x1.209bap-74f, 0x1.fe15bap-117f, 0.0f,
     0x1.353b54p-12f, 0x1.aa3fep-14f, 0x1.30c42p-1f, 0x1.8f160ep-43f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1p0f, 0x1.f4f6dcp-43f, 0x1.6b24bp-86f, 0.0f, 0x1.6ccaeap-74f,
     0x1.c604d8p-70f, 0x1.afac16p-103f, 0x1.cdabfep-10f, 0x1.a5b274p-68f,
     0x1.4adacap-52f, 0.0f, 0x1.548eeap-54f, 0.0f, 0x1.c88446p-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5696fep-8f, 0.0f, 0x1.231eacp-49f, 0.0f, 0x1.5002fep-27f,
     0x1.cdf49ap-5f, 0x1.e7b4eap-36f, 0x1.37b7cap-32f, 0x1.4cf288p-102f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.db21d8p-84f, 0.0f, 0x1.dbe588p-71f, 0.0f, 0x1.a9897p-7f,
     0x1.4b97dep-121f, 0x1.1c8214p-35f, 0.0f, 0.0f, 0.0f, 0x1.096478p-64f,
     0x1.8452a6p-57f, 0x1.9a5764p-29f, 0x1.a08f64p-124f, 0.0f, 0x1.4e3d5ap-18f, 0.0f,
     0x1.9f3d78p-6f, 0x1.4a3e9ep-56f, 0x1.533c48p-115f, 0.0f, 0x1.a00d4p-117f,
     0x1.10a3e4p-36f, 0.0f, 0x1.fca818p-89f, 0x1.1f80b6p-110f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.31541ep-75f, 0.0f, 0.0f, 0x1.a1df8p-110f, 0x1.7703aap-4f, 0x1.96ade2p-45f,
     0x1.6413dcp-103f, 0x1.8df59ep-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6e9bp-84f, 0.0f,
     0.0f, 0.0f, 0x1.f883bap-27f, 0x1.0899f2p-22f, 0x1.c60e74p-66f, 0.0f, 0.0f, 0.0f,
     0x1.d18136p-72f, 0x1.e9c71ap-107f, 0x1.6ad5ep-46f, 0x1.0d8dd2p-96f,
     0x1.b4bf3cp-34f, 0x1.fd762ap-80f, 0x1.85aa7ep-81f, 0x1.e5c184p-98f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0x1.97bb56p-26f, 0x1.1cadc2p-49f, 0.0f, 0x1.4dff44p-14f, 0.0f,
     0x1.97469ap-79f, 0.0f, 0.0f, 0.0f, 0x1.fe3522p-90f, 0x1.0d62d6p-32f,
     0x1.3e0c16p-55f, 0.0f, 0x1.13d1cep-67f, 0.0f, 0x1.75aff8p-37f, 0x1.372696p-126f,
     0.0f, 0.0f, 0x1.ab3ee4p-87f, 0.0f, 0.0f, 0.0f, 0x1.1286dep-11f, 0.0f,
     0x1.a3ac4cp-58f, 0x1.3a4a4p-119f, 0.0f, 0.0f, 0x1.143714p-104f, 0x1.39e654p-117f,
     0.0f, 0x1.4cd674p-19f, 0.0f, 0x1.5062f4p-124f, 0.0f, 0x1.5eb48cp-85f, 0.0f,
     0x1.b41a3ep-112f, 0.0f, 0.0f, 0x1.ee85b8p-29f, 0x1.47d66cp-33f, 0.0f,
     0x1.9aad94p-17f, 0.0f, 0.0f, 0.0f, 0x1.26cd4p-106f, 0.0f, 0x1.7da8cap-49f, 0.0f,
     0x1.54cb7p-55f, 0.0f, 0.0f, 0.0f, 0x1.44975ap-35f, 0x1.aa5d72p-27f, 0.0f,
     0x1.b972e2p-57f, 0x1.fabep-70f, 0x1.5d0814p-25f, 0x1.2f7f5p-38f,
     0x1.85d72ep-108f, 0.0f, 0.0f, 0.0f, 0x1.4eef58p-10f, 0.0f, 0x1.3fe73ap-15f,
     0x1.60ab5ep-122f, 0.0f, 0x1.c1ab14p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7fd874p-72f, 0.0f, 0.0f, 0.0f, 0x1.1ae1d4p-57f, 0.0f, 0.0f, 0x1.523a9ep-18f,
     0.0f, 0x1.8b9514p-72f, 0.0f, 0x1.0eb69ep-39f, 0.0f, 0.0f, 0x1.c09a6ap-74f,
     0x1.0f2428p-16f, 0x1.16cbcap-85f, 0x1.f89a4p-117f, 0x1.5eed04p-16f,
     0x1.9ded96p-23f, 0.0f, 0.0f, 0x1.13d26ep-85f, 0.0f, 0.0f, 0x1.d3433ap-125f,
     0x1.71441ap-125f, 0x1.b74e7p-58f, 0.0f, 0.0f, 0x1.bb6c9ap-61f, 0.0f,
     0x1.aa696ep-63f, 0.0f, 0x1.0a0d26p-12f, 0.0f, 0x1.95d012p-34f, 0.0f, 0.0f,
     0x1.ef66c4p-21f, 0.0f, 0.0f, 0x1.220d8ap-115f, 0x1.115bacp-44f, 0.0f,
     0x1.60be4ap-48f, 0x1.10b2cap-10f, 0.0f, 0.0f, 0x1.de6094p-113f, 0x1.f26c58p-15f,
     0x1.07064ap-39f, 0x1.a74f42p-94f, 0.0f, 0x1.c99968p-25f, 0.0f, 0x1.d9465ep-59f,
     0x1.2a8e22p-9f, 0x1.ff76f2p-29f, 0.0f, 0x1.4fa7dp-126f, 0x1.3e4132p-5f, 0.0f,
     0.0f, 0x1.2f6f7p-112f, 0.0f, 0.0f, 0x1.5ae7c2p-69f, 0.0f, 0x1.bee79ap-80f, 0.0f,
     0.0f, 0x1.2b2006p-117f, 0x1.d325b8p-122f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eeee98p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccccf2p-71f,
     0x1.7fdb56p-20f, 0.0f, 0.0f, 0x1.0f286cp-11f, 0x1.91997ep-18f, 0x1.7f634ep-61f,
     0.0f, 0.0f, 0.0f, 0x1.c9977ep-70f, 0.0f, 0x1.8f307ap-115f, 0x1.7234b6p-99f,
     0x1.91f5cap-56f, 0.0f, 0x1.52cc2ep-40f, 0x1.8cd92ap-74f, 0.0f, 0x1.45871p-57f,
     0x1.b28d58p-74f, 0x1.ec3124p-108f, 0.0f, 0x1.47bdccp-76f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f7f3fcp-35f, 0x1.4e1708p-2f, 0x1.c88f62p-15f, 0.0f, 0x1.7bb81ep-77f,
     0x1.3257fap-123f, 0x1.4590bep-118f, 0x1.4a248cp-13f, 0.0f, 0.0f, 0x1.4b85ep-54f,
     0.0f, 0x1.a2bb58p-125f, 0x1.92816p-100f, 0.0f, 0.0f, 0x1.ab6d9ep-21f, 0.0f,
     0x1.a9497ap-56f, 0x1.71313ep-120f, 0x1.e962bap-58f, 0x1.e307bcp-94f,
     0x1.27630ap-2f, 0.0f, 0x1.c12938p-100f, 0x1.cbd0d8p-95f, 0x1.fac58ap-78f, 0.0f,
     0.0f, 0x1.9eed4p-56f, 0.0f, 0.0f, 0x1.b1bfaap-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.09675ap-71f, 0.0f, 0.0f, 0x1.140242p-20f, 0x1.594672p-9f, 0.0f, 0.0f,
     0x1.660854p-57f, 0.0f, 0x1.314fd8p-29f, 0x1.f339a4p-83f, 0.0f, 0.0f,
     0x1.c8286ap-69f, 0x1.366d5ep-121f, 0.0f, 0x1.53d014p-37f, 0x1.ab9104p-37f,
     0x1.3a2bap-70f, 0.0f, 0.0f, 0x1.54d02ep-105f, 0x1.410b88p-7f, 0x1.964f38p-106f,
     0x1.6f52c8p-73f, 0x1.4dd56cp-89f, 0x1.f77bfp-81f, 0x1.f211f2p-49f,
     0x1.aea9b8p-70f, 0x1.49e1c4p-79f, 0.0f, 0x1.854eap-77f, 0.0f, 0.0f,
     0x1.652958p-48f, 0x1.98cce6p-84f, 0x1.d7104ep-111f, 0x1.1abb3ap-32f,
     0x1.3746b6p-111f, 0.0f, 0.0f, 0x1.35d10cp-25f, 0.0f, 0x1.dffc76p-22f,
     0x1.d712a4p-57f, 0x1.6e87a4p-28f, 0x1.f1d316p-96f, 0.0f, 0x1.87dda6p-7f, 0.0f,
     0x1.ab23dap-66f, 0x1.a79988p-13f, 0.0f, 0x1.0674ecp-45f, 0x1.3b4d64p-98f, 0.0f,
     0x1.f59caap-58f, 0.0f, 0x1.6c3f1ep-111f, 0.0f, 0x1.06b3f4p-28f, 0x1.3421a4p-39f,
     0x1.6e1e2ap-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c1c0fep-34f, 0x1.e4326ep-28f,
     0.0f, 0x1.8116e4p-63f, 0x1.79bb0ep-58f, 0.0f, 0x1.4fe346p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.58fbb6p-100f, 0.0f, 0x1.f279eep-83f, 0.0f, 0.0f, 0x1.5af988p-41f, 0.0f,
     0.0f, 0.0f, 0x1.882932p-71f, 0x1.b3b5cep-60f, 0x1.c443f8p-65f, 0x1.42032ap-31f,
     0.0f, 0.0f, 0x1.da803ap-107f, 0x1.a51c7ap-61f, 0x1.ce9cdcp-1f, 0x1.9269c2p-70f,
     0.0f, 0.0f, 0x1.9608dp-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.873ad2p-11f, 0.0f,
     0x1.360dap-5f, 0.0f, 0x1.84c014p-19f, 0.0f, 0.0f, 0.0f, 0x1.31d7cp-36f, 0.0f,
     0.0f, 0x1.cc9d6p-57f, 0.0f, 0x1.875cb8p-64f, 0x1.9e2d9ep-100f, 0.0f, 0.0f,
     0x1.f316e8p-114f, 0x1.f60194p-104f, 0.0f, 0.0f, 0x1.565394p-44f,
     0x1.1a87c8p-100f, 0x1.034e5ep-33f, 0x1.7b269cp-95f, 0x1.1b313ep-84f,
     0x1.09d28ap-18f, 0.0f, 0.0f, 0x1.90b85cp-98f, 0x1.ca7874p-107f, 0.0f,
     0x1.9cab9ap-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.92a8ecp-8f, 0x1.07ab9ap-114f,
     0x1.80ab2cp-23f, 0x1.68962ep-121f, 0x1.e15be2p-73f, 0x1.9e3952p-98f,
     0x1.bcf88p-120f, 0x1.a6f02cp-21f, 0x1.e60a22p-33f, 0.0f, 0x1.b1011ep-1f, 0.0f,
     0.0f, 0.0f, 0x1.13879cp-94f, 0x1.680212p-52f, 0x1.e0914ap-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.7f34dep-73f, 0x1.6585d8p-93f, 0.0f, 0x1.8633dp-69f, 0x1.6a4c3ep-33f,
     0x1.c757eap-36f, 0x1.dee4e8p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a597p-61f, 0.0f,
     0x1.651de8p-60f, 0x1.e980e4p-81f, 0.0f, 0x1.69680ap-45f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.67815ep-96f, 0.0f, 0x1.6cedep-124f, 0x1.4fef3p-66f, 0.0f,
     0x1.f5f958p-20f, 0x1.3f86d6p-48f, 0x1.07241ep-83f, 0x1.bdbbp-61f, 0.0f, 0.0f,
     0x1.846c5cp-88f, 0x1.f6a3e4p-108f, 0x1.33363ep-62f, 0x1.4dcab4p-81f, 0.0f,
     0x1.975372p-73f, 0x1.b486c6p-107f, 0x1.76378ap-57f, 0x1.139cd4p-16f, 0.0f,
     0x1.1fbdf8p-45f, 0x1.6d1236p-112f, 0x1.5a9044p-48f, 0.0f, 0x1.d871b8p-122f, 0.0f,
     0.0f, 0.0f, 0x1.27c96ep-49f, 0.0f, 0x1.eb105p-52f, 0.0f, 0.0f, 0.0f,
     0x1.e469f6p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8e989ep-37f, 0x1.f5d34ap-96f, 0x1.0dbe8ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1898bap-89f, 0.0f, 0x1.dff3p-2f, 0x1p0f, 0x1.8df86ap-97f, 0.0f,
     0x1.f73d8ap-77f, 0.0f, 0.0f, 0x1.a5a5p-41f, 0x1.19ff88p-25f, 0.0f, 0.0f,
     0x1.f76ea6p-108f, 0.0f, 0x1.bb3834p-79f, 0x1.2b8b06p-17f, 0x1.648652p-9f,
     0x1.7184b6p-71f, 0.0f, 0.0f, 0.0f, 0x1.c08258p-113f, 0x1.ddb232p-9f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aff21ep-105f, 0x1.6c3ca2p-74f, 0.0f,
     0x1.955f1cp-34f, 0x1.768c2p-125f, 0.0f, 0x1.23239cp-9f, 0x1.8ea5b6p-88f,
     0x1.48432ep-49f, 0.0f, 0.0f, 0.0f, 0x1.fdcddep-86f, 0x1.63998p-2f, 0.0f,
     0x1.02619p-44f
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
            tmp1 = Sleef_sqrtf8_kvx(tmp0);
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
    printf("Sleef_sqrtf8_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sqrtf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
