/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10f8_u10kvx.c --function Sleef_log10f8_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 8 --function-input-vector-size 8 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0f, 0x1.00488ep-112f, 0.0f, 0.0f, 0x1.58855ep-100f, 0x1.612ef8p-109f, 0.0f,
     0x1.6c2f74p-63f, 0.0f, 0.0f, 0x1.db2638p-120f, 0x1.ab741ep-65f, 0x1.2d734cp-78f,
     0x1.2b5e36p-13f, 0x1.79f55cp-54f, 0x1.1134e4p-25f, 0.0f, 0.0f, 0x1.a56bccp-60f,
     0x1.58e716p-106f, 0.0f, 0x1.58a79ep-21f, 0x1.b0e95p-116f, 0.0f, 0x1.3f16ecp-31f,
     0.0f, 0.0f, 0x1.1bf1c8p-112f, 0x1.96ee76p-102f, 0.0f, 0.0f, 0x1.c7590ep-30f,
     0.0f, 0.0f, 0x1.101c26p-1f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5559fap-11f,
     0x1.ebbb36p-16f, 0.0f, 0.0f, 0x1.f7baaap-30f, 0x1.85f822p-26f, 0.0f,
     0x1.779f5cp-2f, 0.0f, 0x1.f4b77ep-77f, 0.0f, 0x1.dfd20ap-68f, 0x1.faf346p-83f,
     0.0f, 0.0f, 0.0f, 0x1.5cb1ep-45f, 0.0f, 0x1.d86b28p-3f, 0.0f, 0x1.d11fc8p-68f,
     0x1.4a9f2ap-2f, 0.0f, 0.0f, 0x1.0d6d7ap-28f, 0x1.df8b0ep-36f, 0.0f,
     0x1.4fd7a4p-35f, 0x1.ed9cd8p-43f, 0x1.d50122p-56f, 0x1.4d568cp-71f,
     0x1.332f44p-73f, 0.0f, 0.0f, 0x1.165e56p-83f, 0x1.d1f4aap-14f, 0.0f, 0.0f,
     0x1.20e17ap-67f, 0x1.43225p-73f, 0x1.08ac74p-21f, 0x1.c9dcbp-109f, 0.0f, 0.0f,
     0x1.0d2672p-13f, 0.0f, 0x1.8b1048p-37f, 0.0f, 0.0f, 0x1.aebd86p-5f,
     0x1.fa93ap-73f, 0.0f, 0.0f, 0x1.d462ep-103f, 0.0f, 0.0f, 0x1.124ap-94f,
     0x1.e7f846p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.45dffap-3f, 0.0f,
     0x1.158baap-53f, 0x1.056eep-79f, 0.0f, 0.0f, 0x1.d4353p-68f, 0x1.583f34p-61f,
     0x1.511aacp-126f, 0x1.a5cb2cp-12f, 0.0f, 0.0f, 0x1.c114cap-67f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87b9bp-50f, 0.0f, 0.0f, 0.0f, 0x1.51d7ccp-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d263dep-4f, 0.0f, 0.0f, 0x1.f290bap-69f,
     0x1.d5b414p-6f, 0.0f, 0.0f, 0.0f, 0x1.dd077ap-30f, 0x1.80126cp-52f,
     0x1.9cd034p-87f, 0x1.c6dd48p-43f, 0x1.9a9aep-109f, 0.0f, 0x1.4ac3d8p-53f,
     0x1.332948p-113f, 0.0f, 0x1.bb44cep-102f, 0x1.02e8e4p-36f, 0x1.86935cp-76f, 0.0f,
     0.0f, 0.0f, 0x1.8f77ccp-2f, 0x1.edf216p-92f, 0.0f, 0x1.74e786p-94f,
     0x1.579364p-66f, 0x1.37e2c2p-49f, 0x1p0f, 0x1.8c6edap-67f, 0x1.2b59cep-78f, 0.0f,
     0x1.b4c6cap-74f, 0.0f, 0x1.a441dap-91f, 0.0f, 0x1.ac5842p-70f, 0.0f, 0.0f,
     0x1.422fbap-48f, 0x1.2fac8cp-95f, 0x1.26237cp-13f, 0x1.d45e1p-55f, 0.0f, 0.0f,
     0.0f, 0x1.3eb502p-28f, 0x1.3bc87ap-112f, 0.0f, 0x1.232ec6p-30f, 0.0f, 0.0f, 0.0f,
     0x1.d3e23ep-88f, 0.0f, 0x1.4b8a6ap-52f, 0.0f, 0x1.c34654p-61f, 0x1.16a832p-91f,
     0x1.588deep-101f, 0.0f, 0x1.d614dp-79f, 0.0f, 0x1.3cd154p-107f, 0x1.7cf3fcp-89f,
     0.0f, 0.0f, 0x1.f8ce2p-41f, 0x1.dccbcp-112f, 0x1.6341ap-33f, 0.0f, 0.0f, 0.0f,
     0x1.06eeap-62f, 0.0f, 0.0f, 0x1.449d5p-23f, 0x1.26d69p-50f, 0x1.7552eep-82f,
     0.0f, 0.0f, 0x1.830e02p-2f, 0x1.93c26ep-33f, 0x1.ec7008p-87f, 0x1.ab3464p-48f,
     0.0f, 0.0f, 0x1.58cd9ap-74f, 0x1.19b1bap-108f, 0.0f, 0x1.b5cf8ep-16f, 0.0f,
     0x1.1fdefcp-11f, 0x1.80b168p-87f, 0.0f, 0.0f, 0x1.f1bfep-101f, 0.0f,
     0x1.28a46cp-79f, 0x1.a9a2cep-79f, 0x1.afcb44p-60f, 0.0f, 0x1.d0aa6ep-26f,
     0x1.9958b8p-93f, 0.0f, 0x1.4e96bcp-40f, 0x1.b961ecp-66f, 0.0f, 0x1.d811e8p-115f,
     0x1.d8a94ap-45f, 0x1.29a9a4p-68f, 0x1.f20df4p-85f, 0x1.52b45ep-4f,
     0x1.36951p-89f, 0.0f, 0x1.ae44bap-41f, 0.0f, 0x1.0f4556p-43f, 0.0f,
     0x1.7363bcp-120f, 0.0f, 0x1.2525e8p-39f, 0.0f, 0x1.5101ap-76f, 0x1.d922fcp-97f,
     0.0f, 0.0f, 0.0f, 0x1.8413b4p-43f, 0.0f, 0x1.8876bcp-103f, 0.0f, 0.0f,
     0x1.5f9c42p-59f, 0.0f, 0x1.9933b2p-82f, 0x1.6b8962p-25f, 0.0f, 0.0f, 0.0f,
     0x1.9f84cap-71f, 0.0f, 0x1.92281p-57f, 0x1.2e9f8ep-15f, 0x1.988fecp-38f,
     0x1.f97892p-95f, 0x1.62f112p-70f, 0x1.f690dep-89f, 0.0f, 0x1.ee7d6p-48f,
     0x1.c123eap-76f, 0.0f, 0x1.4f2a76p-30f, 0.0f, 0.0f, 0x1.1f8fd2p-77f, 0.0f, 0.0f,
     0x1.0c61f8p-23f, 0x1.39332cp-70f, 0.0f, 0.0f, 0x1.7eb99p-19f, 0x1.bf7adep-89f,
     0x1.3b8c48p-116f, 0x1.1f8fap-10f, 0x1.6a8a2cp-87f, 0x1.9a206p-100f, 0.0f,
     0x1.ee1cb8p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ec20ep-55f, 0x1.5125f8p-60f,
     0x1.50f416p-52f, 0x1.56d598p-51f, 0x1.4251a2p-4f, 0.0f, 0.0f, 0.0f,
     0x1.ea6b84p-109f, 0x1.476e72p-11f, 0x1.ca5494p-52f, 0x1.8fe2ep-20f,
     0x1.9d60c2p-55f, 0x1.b40abcp-6f, 0x1.341f6ap-106f, 0.0f, 0x1.bcf73ep-67f,
     0x1.cd0876p-28f, 0x1.c7b12ep-48f, 0.0f, 0.0f, 0.0f, 0x1.73a4cep-35f, 0.0f, 0.0f,
     0x1.a62262p-84f, 0.0f, 0x1.5cc034p-105f, 0.0f, 0.0f, 0x1.f0d33p-92f,
     0x1.cee3dep-57f, 0x1.214612p-37f, 0.0f, 0x1.d9e19cp-102f, 0.0f, 0x1.ee89e8p-60f,
     0.0f, 0x1.e1f676p-56f, 0.0f, 0.0f, 0.0f, 0x1.37ca98p-42f, 0x1.217964p-28f, 0.0f,
     0x1.11d4e8p-94f, 0.0f, 0x1.a930dcp-14f, 0x1.4a7852p-80f, 0x1.35de4ap-74f,
     0x1.76a67ap-32f, 0x1.dc2966p-117f, 0.0f, 0.0f, 0.0f, 0x1.1db9c8p-19f,
     0x1.d45ba4p-50f, 0.0f, 0x1.9ef708p-78f, 0x1.56f188p-90f, 0x1.673362p-10f,
     0x1.1be808p-58f, 0x1p0f, 0x1.4b16c4p-76f, 0.0f, 0.0f, 0.0f, 0x1.ab7e7cp-31f,
     0x1.ff3822p-52f, 0x1.952406p-64f, 0.0f, 0x1.d7cd86p-111f, 0.0f, 0x1.f619c6p-35f,
     0x1.3954a6p-63f, 0.0f, 0x1.2373p-24f, 0x1.ad4e4p-111f, 0x1.44d576p-67f, 0.0f,
     0.0f, 0x1.0b8b0ap-5f, 0x1.9027d8p-83f, 0x1.499dd2p-112f, 0.0f, 0x1.9630a2p-5f,
     0x1.af9992p-11f, 0x1.83b4b6p-57f, 0x1.b40e0ap-72f, 0x1.158a3ep-24f, 0.0f, 0.0f,
     0x1.b97b84p-1f, 0x1.a88b72p-115f, 0x1.791862p-72f, 0.0f, 0x1.eb27aep-114f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4ca374p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.75726ap-119f, 0x1.91b93ep-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9cd08p-28f,
     0x1.9886a8p-65f, 0x1.00c722p-78f, 0x1.1fe352p-11f, 0.0f, 0.0f, 0x1.32c5cap-113f,
     0x1.ab26b4p-124f, 0x1.102102p-81f, 0.0f, 0.0f, 0x1.f3eecp-27f, 0.0f,
     0x1.cc4fbp-87f, 0.0f, 0x1.f449dep-125f, 0.0f, 0x1.17db4p-92f, 0x1.9b342ap-100f,
     0.0f, 0x1.b1020ep-10f, 0.0f, 0x1.030498p-125f, 0x1.1279bap-85f, 0.0f, 0.0f, 0.0f,
     0x1.6a7864p-3f, 0x1.a73e6ep-68f, 0.0f, 0x1.b708eep-105f, 0.0f, 0.0f,
     0x1.7ea0dp-25f, 0x1.a2f8e8p-33f, 0.0f, 0x1.8946aap-46f, 0.0f, 0x1.058c82p-88f,
     0x1.bfe104p-88f, 0.0f, 0.0f, 0.0f, 0x1.da74b8p-27f, 0.0f, 0x1.14099ep-126f, 0.0f,
     0x1.ea2ee8p-87f, 0x1.035406p-105f, 0x1.44a204p-1f, 0x1.7787bp-97f, 0.0f,
     0x1.a28098p-99f, 0x1.8e7d3cp-115f, 0.0f, 0x1.d1aebep-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0fe5dp-29f, 0.0f, 0.0f, 0.0f, 0x1.406d84p-62f, 0x1.5c3612p-108f,
     0x1.f1970ep-106f, 0.0f, 0x1.7f2ba6p-123f, 0.0f, 0x1.d705ecp-119f,
     0x1.edb054p-47f, 0.0f, 0x1.e30ba2p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ee8d98p-34f,
     0.0f, 0x1.5ebb02p-32f, 0x1.6adfd6p-43f, 0.0f, 0.0f, 0x1.fdb574p-79f, 0.0f, 0.0f,
     0.0f, 0x1.3fb562p-79f, 0.0f, 0.0f, 0x1.d789eep-25f, 0.0f, 0x1.ae0de6p-97f, 0.0f,
     0x1.c886e6p-45f, 0.0f, 0.0f, 0.0f, 0x1.887034p-28f, 0.0f, 0x1.b65f62p-13f,
     0x1.6ef0d2p-125f, 0.0f, 0.0f, 0x1.9ba6dp-88f, 0x1.9d5154p-97f, 0x1.7fc81cp-126f,
     0x1.54877cp-88f, 0x1.c82a74p-30f, 0x1.5d59bp-47f, 0x1.0d0864p-68f,
     0x1.77209ap-76f, 0x1.df67p-99f, 0.0f, 0.0f, 0x1.bcdedep-21f, 0x1.65ea9cp-15f,
     0x1.d10d56p-56f, 0x1.cc373ep-11f, 0x1.1437aep-55f, 0.0f, 0x1.7bd44cp-51f, 0.0f,
     0x1.25632ap-118f, 0.0f, 0.0f, 0.0f, 0x1.7171p-124f, 0x1.6b383ap-28f, 0.0f,
     0x1.ef24b8p-63f, 0x1.c81f4ap-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53afcp-20f, 0.0f,
     0x1.cb03fcp-106f, 0.0f, 0x1.0a668ap-109f, 0.0f, 0.0f, 0x1.8d3276p-110f,
     0x1.6f886cp-80f, 0.0f, 0.0f, 0x1.801c46p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.af9642p-73f, 0x1.ed0414p-109f, 0x1.57082p-17f, 0.0f, 0.0f, 0x1.594d2ap-75f,
     0.0f, 0.0f, 0x1.d4264cp-80f, 0x1p0f, 0x1.b40c54p-107f, 0.0f, 0x1.5ee688p-42f,
     0x1.f4f4c2p-7f, 0x1.e8c68ap-109f, 0x1.fca9f6p-94f, 0x1.aff704p-29f, 0.0f,
     0x1.37d87p-113f, 0.0f, 0x1.634f9p-112f, 0.0f, 0x1.1ba6ccp-103f, 0.0f,
     0x1.73e66ep-26f, 0x1.02ac9ep-38f, 0.0f, 0x1.72ed28p-102f, 0x1.a91396p-13f,
     0x1.430b6cp-98f, 0.0f, 0.0f, 0x1.7feb12p-25f, 0.0f, 0x1.de6fe8p-109f, 0.0f,
     0x1.71269cp-114f, 0.0f, 0x1.4e687cp-16f, 0x1.c5daccp-120f, 0.0f, 0x1.48eeaep-32f,
     0x1.6974c4p-69f, 0x1.8ee10cp-7f, 0.0f, 0.0f, 0x1.9fd79ep-35f, 0.0f,
     0x1.972df6p-105f, 0x1.c6bdcp-111f, 0.0f, 0x1.ffc0f2p-35f, 0.0f, 0x1.3b7beep-76f,
     0.0f, 0.0f, 0.0f, 0x1.d18a26p-29f, 0x1.7b6c52p-103f, 0x1.9e2412p-14f, 0.0f, 0.0f,
     0x1.fa9ddep-107f, 0x1.d5e22ap-119f, 0x1.f37e76p-97f, 0.0f, 0.0f, 0x1.901604p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.000a94p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c9fe86p-18f, 0.0f, 0x1.a5ffc6p-116f, 0.0f, 0.0f, 0x1.8d6ceap-19f,
     0x1.dd6bap-72f, 0x1.6204f8p-59f, 0.0f, 0x1.406806p-67f, 0.0f, 0.0f,
     0x1.117bbp-63f, 0x1.69c518p-105f, 0.0f, 0.0f, 0x1.0edeep-42f, 0x1.910362p-105f,
     0.0f, 0x1.b286e6p-110f, 0x1.fc5dbep-18f, 0x1.0ab72ap-55f, 0.0f, 0.0f,
     0x1.9dcc46p-109f, 0.0f, 0.0f, 0x1.9d9df4p-15f, 0.0f, 0.0f, 0x1.067842p-96f, 0.0f,
     0x1.637b0ep-51f, 0.0f, 0.0f, 0x1.ef3c18p-14f, 0.0f, 0.0f, 0x1.72d138p-11f, 0.0f,
     0x1.4ffdc6p-35f, 0x1.f0f746p-29f, 0x1.ed8cd8p-103f, 0.0f, 0x1.f7458cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.4a98e8p-49f, 0x1.9bc944p-93f, 0x1.ff2e1p-7f, 0.0f, 0.0f,
     0x1.01181ep-109f, 0x1.0f613cp-103f, 0.0f, 0x1.6802a4p-126f, 0x1.5cde52p-45f,
     0.0f, 0x1.82fa7p-121f, 0x1.3050f8p-79f, 0x1.4451aap-15f, 0x1.332e6ep-79f,
     0x1.fbe23p-79f, 0.0f, 0x1.c7809ep-33f, 0x1.32072ap-36f, 0x1.bb5e6cp-89f,
     0x1.0a968p-112f, 0.0f, 0x1.5b480ep-109f, 0x1.8630dap-76f, 0x1.2e43fap-12f, 0.0f,
     0x1.50965p-22f, 0.0f, 0.0f, 0x1.116892p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c415p-47f, 0.0f, 0.0f, 0x1.c0729cp-90f, 0x1.e3d44p-79f, 0.0f,
     0x1.138e74p-15f, 0.0f, 0.0f, 0x1.37b5b4p-114f, 0.0f, 0x1.535d4ep-12f,
     0x1.4f0468p-88f, 0x1.e5fec2p-71f, 0.0f, 0.0f, 0x1.49591ap-57f, 0.0f,
     0x1.ca7c32p-104f, 0.0f, 0.0f, 0x1.5495d6p-49f, 0x1.7be656p-59f, 0x1.874d9ep-24f,
     0.0f, 0.0f, 0.0f, 0x1.e74368p-21f, 0x1.402b66p-54f, 0.0f, 0x1.6dee48p-124f,
     0x1.d54aeep-82f, 0x1.a6d67cp-100f, 0.0f, 0x1.4f779cp-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.128e46p-67f, 0.0f, 0x1.57170ap-31f, 0x1.efc0f6p-101f, 0.0f, 0.0f,
     0x1.2dc6e2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dee38cp-125f, 0x1.5ed59cp-98f,
     0x1.a70954p-115f, 0x1.fa791p-61f, 0.0f, 0.0f, 0x1.8e102ep-20f, 0x1.b88228p-12f,
     0.0f, 0.0f, 0x1.df466ep-100f, 0x1.5d8964p-43f, 0x1.84de52p-7f, 0x1.447dfap-27f,
     0.0f, 0x1.b435f4p-124f, 0x1.bae842p-32f, 0.0f, 0.0f, 0.0f, 0x1.d36a7ap-16f,
     0x1.a881a4p-39f, 0x1.ce0176p-111f, 0x1.3c07f4p-31f, 0.0f, 0.0f, 0x1.bbaac8p-32f,
     0.0f, 0.0f, 0.0f, 0x1.dcd2e4p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c93c4ap-33f, 0.0f, 0x1.f9c78cp-69f, 0x1.c74fcp-61f, 0x1.a8ecc8p-9f, 0.0f,
     0.0f, 0x1.edb4d4p-57f, 0.0f, 0x1.71d744p-19f, 0x1.d49968p-17f, 0x1.a17b3ep-27f,
     0x1.14c356p-54f, 0.0f, 0x1.d6e54p-113f, 0.0f, 0x1.07e63ap-19f, 0x1.1f271ep-78f,
     0.0f, 0.0f, 0x1.900e9p-40f, 0x1.3bbc4ap-99f, 0.0f, 0.0f, 0.0f, 0x1.f862f8p-126f,
     0.0f, 0.0f, 0.0f, 0x1.cb52dap-47f, 0.0f, 0x1.817ee4p-112f, 0.0f, 0x1.348e8ap-21f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8d8d4p-78f, 0.0f, 0.0f, 0x1.5efe0cp-33f, 0.0f,
     0x1.d4767cp-87f, 0.0f, 0x1.88651ep-120f, 0x1.df3364p-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.aa04f8p-27f, 0.0f, 0x1.82cc4cp-99f, 0x1.427e06p-85f,
     0x1.aebcdap-124f, 0.0f, 0x1.db7b7p-39f, 0.0f, 0.0f, 0x1.a80d12p-70f,
     0x1.19a3bep-76f, 0.0f, 0x1.867c28p-50f, 0.0f, 0x1.60d53p-76f, 0x1.019b66p-62f,
     0x1.b2a53p-69f, 0x1.c46d78p-67f, 0.0f, 0.0f, 0x1.5441f6p-91f, 0.0f,
     0x1.3bf494p-22f, 0x1.61a102p-33f, 0x1.17c6e8p-26f, 0x1.8d43cep-49f, 0.0f, 0.0f,
     0x1.6b53ccp-121f, 0.0f, 0x1.79043ep-123f, 0x1.febd22p-32f, 0x1.f5ffdep-109f,
     0.0f, 0.0f, 0.0f, 0x1.b4473cp-85f, 0x1.a8128ep-29f, 0.0f, 0.0f, 0.0f,
     0x1.925456p-94f, 0x1.722e7cp-12f, 0.0f, 0x1.e6191p-59f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c90c78p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b8e804p-26f, 0.0f, 0.0f, 0.0f,
     0x1.d4028ep-118f, 0x1.3df068p-55f, 0x1.c531bep-74f, 0x1.c3eca4p-41f, 0.0f,
     0x1.52f6bp-67f, 0.0f, 0x1.3fe7fcp-23f, 0x1.a67932p-28f, 0x1.18017ap-19f, 0.0f,
     0.0f, 0x1.34p-110f, 0x1.4e4ad4p-99f, 0.0f, 0.0f, 0x1.bbd824p-116f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4e07b4p-40f, 0x1.399cc8p-41f, 0x1.5631acp-68f, 0.0f, 0.0f,
     0x1.1f84c4p-29f, 0.0f, 0.0f, 0.0f, 0x1.2cbbdp-51f, 0.0f, 0x1.b88238p-75f, 0.0f,
     0.0f, 0x1.fc57aep-40f, 0x1.ad0d22p-126f, 0x1.6cfe6cp-117f, 0.0f, 0x1.78f116p-17f,
     0x1.c3d178p-27f, 0.0f, 0.0f, 0x1.82953cp-115f, 0.0f, 0x1.82c064p-28f,
     0x1.166ba6p-73f, 0.0f, 0x1.e33746p-7f, 0.0f, 0.0f, 0x1.de5192p-105f,
     0x1.9d62f6p-79f, 0.0f, 0.0f, 0x1.f44ffap-94f, 0x1.83ff12p-104f, 0x1.4fce88p-33f,
     0.0f, 0x1.9a5c2ap-111f, 0x1.a15032p-16f, 0x1.26a04ap-16f, 0x1.d43fd2p-35f,
     0x1.76a99ap-46f, 0.0f
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
            tmp1 = Sleef_log10f8_u10kvx(tmp0);
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
    printf("Sleef_log10f8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_log10f8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
