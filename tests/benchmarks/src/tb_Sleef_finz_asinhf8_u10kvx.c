/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhf8_u10kvx.c --function \
 *     Sleef_finz_asinhf8_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.c2f1b2p-12f, 0.0f, 0x1.6715d4p-38f, 0x1.c384eap-64f, 0x1.2d1bdap-62f,
     0x1.0d928p-56f, 0.0f, 0x1.ac35eep-4f, 0x1.aab44p-101f, 0x1.5ee2b6p-26f,
     0x1.74991p-103f, 0x1.a990ccp-113f, 0x1.8e051ap-20f, 0.0f, 0x1.c0777ep-15f, 0.0f,
     0.0f, 0x1.307458p-68f, 0x1.8eb6f8p-79f, 0x1.125c28p-1f, 0.0f, 0x1.f0f418p-5f,
     0.0f, 0x1.416b04p-77f, 0x1.ac0452p-107f, 0.0f, 0.0f, 0x1.e2d4aep-76f,
     0x1.7bf574p-57f, 0.0f, 0x1.195596p-115f, 0x1.02f5f6p-13f, 0x1.9b41dap-58f, 0.0f,
     0.0f, 0x1.74da4ep-29f, 0x1.e6d822p-102f, 0x1.d9cca8p-120f, 0x1.750306p-43f,
     0x1.e8af04p-23f, 0.0f, 0x1.5bc58ep-42f, 0x1.3a28ap-59f, 0.0f, 0.0f,
     0x1.5abe1cp-103f, 0.0f, 0x1.bdb678p-56f, 0x1.f5bb94p-14f, 0x1.f0f062p-87f, 0.0f,
     0x1.7e6a7cp-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c172ep-56f,
     0x1.3642fap-3f, 0.0f, 0.0f, 0x1.85e078p-29f, 0x1.2303e6p-100f, 0.0f,
     0x1.80fcaep-70f, 0x1.0e2c7cp-48f, 0.0f, 0x1.26d002p-75f, 0.0f, 0x1.c47234p-25f,
     0x1.10607cp-80f, 0.0f, 0.0f, 0.0f, 0x1.b8f23cp-88f, 0.0f, 0.0f, 0x1.25404ap-66f,
     0x1.63947cp-116f, 0.0f, 0x1.978b36p-118f, 0.0f, 0.0f, 0x1.fbb5dap-12f,
     0x1.384f2ep-121f, 0x1.4d6896p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0341dp-37f, 0x1.7109p-22f, 0x1.a4b328p-58f, 0.0f, 0.0f,
     0x1.b9f7a8p-122f, 0.0f, 0.0f, 0x1.49f11ap-106f, 0.0f, 0x1.a30888p-22f,
     0x1.4b680ap-43f, 0x1.e76afp-25f, 0.0f, 0x1.91a334p-57f, 0x1.aa939p-36f,
     0x1.ddf40ap-65f, 0.0f, 0x1.36aa9p-97f, 0x1.eeap-112f, 0.0f, 0x1.2c97b4p-14f,
     0x1.a431f8p-41f, 0.0f, 0.0f, 0x1.d64398p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e9d3d2p-13f, 0.0f, 0x1.ad6da4p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5218ep-49f,
     0x1.116d2cp-28f, 0x1.760ab8p-120f, 0x1.097728p-69f, 0x1.35ee96p-28f, 0.0f,
     0x1.b1c1c8p-34f, 0x1.b14c16p-109f, 0x1.17b4b2p-57f, 0.0f, 0x1.caa3e2p-25f,
     0x1.4ca20ap-49f, 0x1.15a9c8p-37f, 0x1.69405ap-22f, 0x1.44a06ap-62f, 0x1p0f, 0.0f,
     0x1.4a61dp-64f, 0.0f, 0x1.f15d94p-9f, 0x1.99439ap-116f, 0x1.7a059p-73f,
     0x1.3aa3dcp-55f, 0x1.ec9ce6p-55f, 0.0f, 0x1.1f9536p-105f, 0.0f, 0.0f, 0.0f,
     0x1.261be4p-65f, 0x1.f79d88p-40f, 0.0f, 0x1.512494p-108f, 0.0f, 0x1.2df788p-117f,
     0x1.9ce2d4p-68f, 0.0f, 0.0f, 0.0f, 0x1.4b0402p-80f, 0x1.9cc36ap-115f,
     0x1.725982p-23f, 0.0f, 0.0f, 0x1.0aad1cp-22f, 0x1.e36e88p-76f, 0.0f, 0.0f,
     0x1.97f172p-121f, 0.0f, 0.0f, 0.0f, 0x1.78eb0ep-121f, 0x1.421936p-12f, 0.0f,
     0x1.2a49fep-43f, 0.0f, 0.0f, 0x1.cf85aap-103f, 0.0f, 0x1.8d0668p-100f, 0.0f,
     0.0f, 0.0f, 0x1.048b94p-125f, 0.0f, 0.0f, 0.0f, 0x1.12226ep-113f,
     0x1.5e3b98p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd6762p-123f, 0.0f,
     0x1.4900dcp-58f, 0.0f, 0.0f, 0x1.2b063p-21f, 0.0f, 0x1.05f20ap-10f,
     0x1.bd79e8p-81f, 0x1.662618p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f2b94cp-107f,
     0x1.a83398p-92f, 0x1.cce228p-3f, 0.0f, 0.0f, 0.0f, 0x1.c57534p-45f,
     0x1.14ffeap-88f, 0.0f, 0.0f, 0.0f, 0x1.ae3c9p-85f, 0.0f, 0.0f, 0x1.9eec78p-98f,
     0.0f, 0.0f, 0.0f, 0x1.589c6ep-8f, 0x1.598a9cp-89f, 0.0f, 0x1.658a0cp-106f, 0.0f,
     0.0f, 0x1.9f8d24p-83f, 0x1.a2ab7ep-21f, 0x1.f30886p-48f, 0.0f, 0.0f, 0.0f,
     0x1.226e34p-28f, 0.0f, 0.0f, 0.0f, 0x1.cd97e4p-43f, 0.0f, 0.0f, 0.0f,
     0x1.bc0f7ap-22f, 0x1.c8812p-85f, 0x1.e52ed8p-74f, 0x1.ac25dep-119f,
     0x1.298db2p-13f, 0x1.8897fcp-121f, 0.0f, 0.0f, 0x1.477748p-71f, 0x1.307eeap-64f,
     0.0f, 0x1.009842p-48f, 0.0f, 0.0f, 0.0f, 0x1.2c6d2cp-46f, 0.0f, 0x1.fb7e9cp-38f,
     0.0f, 0x1.9806a8p-106f, 0.0f, 0.0f, 0.0f, 0x1.ce86c8p-57f, 0x1.697396p-42f,
     0x1.9af19p-50f, 0.0f, 0.0f, 0x1.493e56p-98f, 0.0f, 0x1.d7290cp-23f,
     0x1.43706cp-45f, 0.0f, 0x1.288ae8p-46f, 0x1.8f0226p-30f, 0.0f, 0x1.15519ap-120f,
     0.0f, 0.0f, 0x1.f0c3b2p-57f, 0.0f, 0x1.25116ap-78f, 0.0f, 0x1.293486p-5f,
     0x1.2610dcp-90f, 0.0f, 0.0f, 0x1.5b3c26p-88f, 0x1.2820fp-75f, 0x1.78148ep-12f,
     0.0f, 0.0f, 0x1.4fd5a2p-100f, 0.0f, 0x1.5e1a4ep-113f, 0x1.8b59dep-12f,
     0x1.0f0a96p-90f, 0x1.20252cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.234a1p-12f,
     0x1.2054aap-90f, 0x1.3cad5p-107f, 0x1.9eead2p-35f, 0x1.afcac2p-125f,
     0x1.90a06p-15f, 0x1.8b882cp-111f, 0.0f, 0.0f, 0x1.c934d8p-62f, 0x1.cbecf2p-103f,
     0.0f, 0x1.1d1554p-125f, 0x1.9553p-96f, 0.0f, 0.0f, 0x1.b9cc7ap-1f, 0.0f, 0.0f,
     0x1.37b04p-15f, 0.0f, 0x1.e4ad9ep-104f, 0.0f, 0.0f, 0x1.83b3bap-112f, 0.0f,
     0x1.1b87b8p-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.929c24p-19f, 0x1.c23a4ep-74f,
     0x1.e49f9cp-59f, 0x1.f8e50ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6552ap-40f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7ffc34p-103f, 0x1.0bee44p-36f, 0x1.83bf84p-8f,
     0x1.a88ed8p-10f, 0.0f, 0.0f, 0x1.504a12p-5f, 0x1.706b66p-68f, 0.0f,
     0x1.3f17cap-101f, 0x1.e50932p-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ae11cp-65f,
     0.0f, 0x1.89d4e8p-37f, 0x1.18b732p-116f, 0x1.b8b25cp-109f, 0.0f, 0x1.038418p-51f,
     0.0f, 0.0f, 0x1.29bb44p-103f, 0.0f, 0x1.a78536p-80f, 0x1.b3ef82p-43f, 0.0f,
     0x1.09ffe2p-123f, 0.0f, 0.0f, 0x1.7bb226p-40f, 0x1.ba61ap-25f, 0x1.5e2974p-42f,
     0.0f, 0.0f, 0.0f, 0x1.861c4p-12f, 0.0f, 0x1.c3c5fep-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.de0e94p-15f, 0x1.05d704p-53f, 0x1.b96e3ep-96f, 0x1.18b124p-59f,
     0x1.c80fe4p-13f, 0.0f, 0x1.1fe994p-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c57bfp-58f, 0.0f, 0.0f, 0.0f, 0x1.f1ba16p-15f, 0.0f, 0x1.78cca2p-40f, 0.0f,
     0.0f, 0.0f, 0x1.4e0f1p-86f, 0.0f, 0x1.603fcap-55f, 0.0f, 0.0f, 0.0f,
     0x1.f503b2p-113f, 0.0f, 0x1.3fad2p-86f, 0x1.40941p-3f, 0.0f, 0x1.a31096p-47f,
     0x1.28f88p-88f, 0.0f, 0.0f, 0.0f, 0x1.52fcfap-105f, 0.0f, 0.0f, 0x1.2a9aacp-106f,
     0.0f, 0x1.3e8d5cp-38f, 0x1.899398p-104f, 0x1.62dacap-13f, 0x1.849a6ep-71f,
     0x1.ed72dp-11f, 0x1.0aa0acp-67f, 0x1.5b1382p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08b378p-61f, 0.0f, 0.0f, 0.0f, 0x1.1a1f5p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a822aep-95f, 0x1.a831bcp-58f, 0.0f, 0x1.5dea2ep-73f, 0x1.35a494p-23f,
     0x1.0afdaep-107f, 0.0f, 0.0f, 0x1.a1ec98p-28f, 0.0f, 0.0f, 0.0f, 0x1.a39258p-45f,
     0x1.3bb204p-5f, 0x1.d5b15ep-93f, 0x1.73a8bcp-15f, 0x1.b6ec2cp-102f,
     0x1.30c456p-30f, 0.0f, 0.0f, 0x1.d85e14p-64f, 0x1.c3e6b6p-88f, 0x1.3ebdfap-10f,
     0x1.20e5f4p-62f, 0.0f, 0.0f, 0x1.ae4174p-119f, 0.0f, 0.0f, 0x1.5b0fc2p-57f,
     0x1.010b2ap-112f, 0.0f, 0x1.3b266cp-40f, 0.0f, 0.0f, 0.0f, 0x1.2d0294p-58f,
     0x1.e66b24p-103f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.002148p-4f,
     0x1.78328cp-37f, 0.0f, 0x1.60f18ep-112f, 0.0f, 0.0f, 0x1.ef3dd2p-63f,
     0x1.d1cc9cp-22f, 0x1.fa916ep-63f, 0.0f, 0x1.9f0088p-125f, 0.0f, 0x1.c3ccecp-83f,
     0.0f, 0x1.9ca8dap-103f, 0x1.3b2aap-42f, 0x1.dddaaep-16f, 0.0f, 0x1.630de4p-79f,
     0.0f, 0.0f, 0.0f, 0x1.013488p-85f, 0x1.e93f64p-3f, 0.0f, 0x1.fe0ee2p-5f,
     0x1.ec9142p-4f, 0.0f, 0.0f, 0x1.61770cp-112f, 0x1.193afp-68f, 0.0f, 0.0f,
     0x1.75205ep-112f, 0x1.71f806p-38f, 0x1.ab6454p-51f, 0.0f, 0.0f, 0x1.1bd416p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fc4ad6p-102f, 0x1.2d1576p-28f, 0x1.b6fc68p-84f,
     0.0f, 0.0f, 0x1.1732acp-7f, 0.0f, 0x1.3505eap-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.935086p-2f, 0.0f, 0.0f, 0x1.fedf0ep-88f, 0x1.11c7e4p-13f, 0.0f, 0.0f,
     0x1.7afbcep-120f, 0.0f, 0x1.f5539ep-30f, 0.0f, 0x1.031012p-24f, 0x1.4f42acp-82f,
     0.0f, 0x1.a2cf2cp-107f, 0.0f, 0.0f, 0x1.e552fap-38f, 0.0f, 0x1.8f0382p-101f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.ae05c6p-20f, 0x1.318a3ep-17f, 0x1.ef0766p-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.33b756p-121f, 0x1.c9983cp-28f, 0x1.d9f208p-67f, 0.0f,
     0.0f, 0x1.2057cap-102f, 0x1.88fc9ap-8f, 0.0f, 0.0f, 0x1.295988p-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a2744ap-51f, 0x1p0f, 0.0f, 0.0f, 0x1.a8820ap-109f, 0.0f,
     0x1.93fa08p-78f, 0x1.1d5936p-64f, 0x1.ed1d7cp-111f, 0x1.daa80ap-113f, 0.0f,
     0x1.60939p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.baa686p-21f,
     0x1.c3aec2p-81f, 0.0f, 0.0f, 0x1.4865fp-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6ee64ep-110f, 0.0f, 0x1.51a068p-13f, 0.0f, 0.0f, 0x1.baa43cp-46f, 0.0f, 0.0f,
     0x1.c8bcdap-58f, 0x1.138e0ap-50f, 0x1.21a3b4p-57f, 0.0f, 0x1.4c0e5ep-122f,
     0x1.8f852ap-123f, 0.0f, 0.0f, 0.0f, 0x1.36015cp-16f, 0x1.006922p-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7f434p-100f,
     0x1.c03a36p-64f, 0x1.f4e9e8p-97f, 0.0f, 0.0f, 0x1.aeda6cp-92f, 0x1.2dd3f2p-7f,
     0.0f, 0x1.d2f0e8p-26f, 0.0f, 0.0f, 0x1.dd69b2p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.46616p-67f, 0x1.a368f6p-25f, 0x1.7c7a98p-107f, 0.0f, 0x1.d76ed8p-86f,
     0x1.308ac2p-72f, 0x1.3fb47p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fe7b1cp-7f, 0.0f,
     0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.b79fbap-49f, 0x1.a0af02p-27f, 0.0f,
     0x1.8be5bcp-15f, 0x1.5f7af2p-65f, 0x1.640fap-119f, 0.0f, 0x1.0b9766p-79f, 0.0f,
     0x1.42b74ap-2f, 0x1.0d5ae2p-88f, 0.0f, 0.0f, 0x1.5c0062p-40f, 0.0f,
     0x1.911f98p-55f, 0x1.cfe326p-70f, 0x1.820258p-82f, 0x1.6ea35p-110f,
     0x1.40676ep-52f, 0x1.54d89ep-114f, 0.0f, 0x1.3c7f7cp-107f, 0x1.20c534p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a348eap-37f, 0.0f, 0x1.d722f4p-125f, 0x1.bb7b12p-7f, 0.0f,
     0x1.4db672p-35f, 0x1.8c8c2p-38f, 0.0f, 0.0f, 0.0f, 0x1.967608p-36f, 0.0f,
     0x1.051502p-7f, 0x1.d57a2p-70f, 0x1.b941cp-91f, 0.0f, 0x1.970172p-77f,
     0x1.56498ep-10f, 0x1.a414a2p-126f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.4d7cf6p-124f,
     0x1.bb7c3cp-56f, 0x1.b138f8p-57f, 0.0f, 0x1.78aa5cp-98f, 0x1.49814ap-69f, 0.0f,
     0x1.b5aa9ap-41f, 0x1.66c618p-85f, 0.0f, 0.0f, 0x1.4fc842p-36f, 0.0f,
     0x1.81197p-63f, 0x1.5bfbb8p-70f, 0x1.86ffdp-16f, 0x1.93610cp-105f,
     0x1.a257dcp-45f, 0.0f, 0x1.bb75bp-116f, 0x1.8d1856p-94f, 0x1.a82ac8p-9f,
     0x1.82c9p-108f, 0.0f, 0.0f, 0.0f, 0x1.885614p-126f, 0x1.be8784p-63f,
     0x1.abdf4ep-95f, 0x1.cf24d2p-2f, 0.0f, 0.0f, 0x1.2aa00ap-2f, 0x1.d172f4p-28f,
     0x1.9cd2e8p-51f, 0.0f, 0.0f, 0.0f, 0x1.14b898p-40f, 0.0f, 0.0f, 0x1.947f8ep-98f,
     0.0f, 0.0f, 0.0f, 0x1.59e3a2p-81f, 0x1.c4d454p-82f, 0.0f, 0x1.462f92p-27f, 0.0f,
     0.0f, 0x1.3c498cp-6f, 0x1.8e23cp-35f, 0.0f, 0x1.baea1ep-89f, 0x1.f43c66p-2f,
     0.0f, 0.0f, 0x1.8093bp-33f, 0x1.943f9ep-109f, 0.0f, 0.0f, 0.0f, 0x1.2a5d1ap-87f,
     0.0f, 0.0f, 0.0f, 0x1.116e3ap-39f, 0x1.6b8c24p-65f, 0.0f, 0x1.c7017cp-43f, 0.0f,
     0x1.e542fep-1f, 0.0f, 0x1.9978cep-80f, 0x1.eb155ap-72f, 0.0f, 0.0f,
     0x1.fb12fap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8e6dep-3f, 0x1.8a4566p-117f,
     0x1.4258f4p-6f, 0.0f, 0.0f, 0x1.f5f024p-4f, 0.0f, 0.0f, 0x1.c402c8p-12f, 0.0f,
     0.0f, 0.0f, 0x1.28c1c2p-126f, 0.0f, 0.0f, 0.0f, 0x1.a31892p-79f, 0x1.b16ff4p-11f,
     0.0f, 0x1.33324p-53f, 0.0f, 0.0f, 0x1.dc0afep-126f, 0.0f, 0.0f, 0.0f,
     0x1.7a8adep-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b73b0ep-82f, 0.0f,
     0x1.13b3d8p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2eade2p-5f, 0x1p0f, 0.0f, 0.0f,
     0.0f, 0x1.7f124ap-119f, 0x1.69752ep-25f, 0x1.0db892p-48f, 0.0f, 0.0f,
     0x1.aef7e6p-115f, 0.0f, 0.0f, 0.0f, 0x1.8b2188p-83f, 0x1.b3aff8p-111f,
     0x1.6d316ep-107f, 0.0f, 0x1.36f8p-18f, 0x1.d2b83p-74f, 0.0f, 0.0f,
     0x1.d85f7ap-122f, 0.0f, 0x1.9062a2p-17f, 0.0f, 0x1.30aa88p-26f, 0x1.175e36p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c941ep-50f, 0x1.0ea3aap-10f,
     0x1.d93d4cp-120f, 0x1.30314ep-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4a064ep-10f, 0.0f, 0x1.593238p-19f, 0x1.7a0e3cp-107f, 0x1.08bbb4p-105f, 0.0f,
     0.0f, 0x1.4a030ep-11f, 0x1.769f72p-85f, 0.0f, 0.0f, 0x1.36173p-101f,
     0x1.74cc64p-45f, 0.0f, 0.0f, 0.0f, 0x1.047a62p-35f, 0.0f, 0x1.f751bap-117f,
     0x1.be47fcp-49f, 0x1.cc955ep-95f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c1d26p-6f,
     0x1.d5b464p-103f, 0x1.025fcap-62f, 0x1.bdd5b6p-60f, 0x1.8126a8p-39f, 0.0f,
     0x1.9654a2p-109f, 0x1.48e74ep-63f, 0x1.ad72bcp-9f, 0x1.a65f1ap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.59c784p-99f, 0.0f, 0x1.3fb4ep-97f, 0.0f, 0x1.3856cap-44f,
     0x1.d0a606p-26f, 0x1.c02a4ep-69f, 0x1.5487fp-6f, 0x1.8e94d2p-80f, 0.0f, 0.0f,
     0x1.d0207cp-76f, 0x1.800c98p-7f, 0x1.b78cbp-86f, 0x1.7ada28p-116f,
     0x1.449b4cp-4f, 0x1.a7afdep-104f, 0x1.521eeep-50f, 0.0f, 0.0f, 0.0f,
     0x1.c46a5ap-1f, 0x1.901a84p-41f, 0.0f, 0x1.abc892p-28f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f
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
            tmp1 = Sleef_finz_asinhf8_u10kvx(tmp0);
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
    printf("Sleef_finz_asinhf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_asinhf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
