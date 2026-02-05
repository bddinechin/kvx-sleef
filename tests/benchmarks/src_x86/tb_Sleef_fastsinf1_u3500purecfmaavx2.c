/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fastsinf1_u3500purecfma.c --function \
 *     Sleef_fastsinf1_u3500purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.bcfcf8p-33f, 0.0f, 0x1.e394dep-3f, 0.0f, 0x1.c238b2p-121f, 0.0f,
     0x1.b41b5ap-51f, 0x1.c5118p-16f, 0x1.ea0ffp-114f, 0x1.c881aap-88f, 0.0f, 0.0f,
     0x1.535aaep-13f, 0.0f, 0.0f, 0.0f, 0x1.1ee24cp-93f, 0x1.c81eaap-44f,
     0x1.3792d4p-57f, 0x1.10baf6p-52f, 0.0f, 0x1.1bd144p-2f, 0.0f, 0x1.8da6dap-10f,
     0x1.8aca24p-41f, 0x1.b95912p-35f, 0x1.c10f7ep-119f, 0x1.2d585cp-118f, 0.0f, 0.0f,
     0.0f, 0x1.eca46cp-41f, 0.0f, 0x1.905222p-125f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e57928p-64f, 0x1.cf2352p-5f, 0x1.2a8c62p-120f,
     0x1.0c9d56p-95f, 0.0f, 0x1.d881e4p-43f, 0.0f, 0.0f, 0.0f, 0x1.42737ep-62f,
     0x1.9a0f92p-41f, 0x1.e9545p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb609cp-8f,
     0.0f, 0x1.23e68ep-125f, 0x1.ac1b2ap-63f, 0x1.e93c9p-78f, 0x1.ce8f9ep-21f,
     0x1.a3c9b4p-69f, 0x1.c61faep-126f, 0x1.c72be2p-16f, 0x1.8a405cp-50f,
     0x1.cd71bep-78f, 0x1.822294p-1f, 0.0f, 0x1.4682b4p-83f, 0.0f, 0.0f,
     0x1.a5dd42p-49f, 0.0f, 0.0f, 0.0f, 0x1.13dff6p-37f, 0x1.d4e64ap-90f,
     0x1.33af18p-95f, 0x1.50dbdcp-45f, 0x1.59ccp-2f, 0x1.000cf6p-31f, 0.0f, 0x1p0f,
     0x1.47b73cp-81f, 0.0f, 0.0f, 0x1.ee415ap-11f, 0.0f, 0.0f, 0x1.c6ff0ep-71f, 0.0f,
     0x1.6d2bep-13f, 0.0f, 0.0f, 0.0f, 0x1.6cfbb2p-30f, 0x1.c72e68p-70f, 0.0f, 0.0f,
     0x1.14eeep-106f, 0x1.6839b2p-126f, 0x1.5d2ca2p-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4cd942p-53f, 0.0f, 0x1.604d2cp-7f, 0x1.2433p-116f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ebe416p-50f, 0x1.ee5096p-20f, 0x1.01be3ep-103f, 0.0f, 0.0f, 0.0f,
     0x1.e00918p-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ce002p-30f,
     0x1.fb6012p-44f, 0x1.8c0a6ap-6f, 0.0f, 0.0f, 0x1.36883p-19f, 0.0f, 0.0f, 0.0f,
     0x1.172202p-118f, 0.0f, 0.0f, 0x1.143326p-56f, 0x1.a31066p-90f, 0x1.4a0416p-79f,
     0x1.f05ba6p-74f, 0x1.071488p-38f, 0.0f, 0x1.7ad24p-46f, 0.0f, 0.0f, 0.0f,
     0x1.575afap-56f, 0x1.f273f8p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cb670ap-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5e1758p-28f, 0x1.fd138p-40f, 0x1.af454ap-17f, 0.0f,
     0x1.1857aep-7f, 0x1.a89424p-76f, 0.0f, 0x1.9833aap-98f, 0x1.d3b336p-48f,
     0x1.849808p-114f, 0x1.7d098ep-47f, 0.0f, 0x1.aaaa1ep-54f, 0x1.f11f1p-56f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.15fb4ap-14f, 0.0f, 0.0f, 0.0f, 0x1.6af18ap-23f,
     0x1.eee84cp-3f, 0.0f, 0.0f, 0x1.d79936p-61f, 0x1.0cc0ap-105f, 0x1.0c160ap-84f,
     0x1.6e04cap-46f, 0x1.58610cp-97f, 0.0f, 0x1.0f0ae8p-14f, 0.0f, 0x1.6a10a6p-106f,
     0x1.8c5cb6p-67f, 0.0f, 0.0f, 0x1.ac3966p-53f, 0x1.56356ap-72f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.103c16p-92f, 0.0f, 0x1.da778cp-20f, 0x1.b8a58cp-54f, 0.0f,
     0x1.219decp-81f, 0x1.1937e4p-19f, 0.0f, 0x1.dffaf4p-68f, 0x1.440e9ep-70f, 0.0f,
     0.0f, 0.0f, 0x1.efee8ep-44f, 0x1.ed16dp-36f, 0x1.557a58p-101f, 0.0f, 0.0f,
     0x1.66143p-73f, 0x1.11384p-16f, 0.0f, 0x1.ccc8f4p-64f, 0.0f, 0x1.5e0c3cp-77f,
     0x1.d81ac6p-23f, 0.0f, 0.0f, 0x1p0f, 0x1.c61428p-7f, 0x1.adff6ap-80f,
     0x1.bfaf78p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.de87f8p-66f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.fb6cdp-110f, 0.0f, 0x1.6db8dp-5f, 0x1.177d32p-40f, 0.0f,
     0x1.6503c8p-126f, 0x1.202f0ep-10f, 0x1.d0b044p-47f, 0x1.ffab4ep-24f,
     0x1.473c04p-12f, 0.0f, 0.0f, 0.0f, 0x1.9433fap-91f, 0x1.a32cc8p-107f, 0.0f, 0.0f,
     0x1.2c8ce8p-112f, 0x1.3769bcp-111f, 0x1.e3325p-44f, 0x1.cc5f04p-85f,
     0x1.96aed4p-120f, 0.0f, 0x1.7bf578p-58f, 0x1.b54284p-99f, 0x1.7ff332p-17f, 0.0f,
     0x1.8e3984p-43f, 0.0f, 0.0f, 0x1.39ccecp-64f, 0x1.aa4266p-100f, 0.0f,
     0x1.608c18p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5bbab6p-38f, 0.0f, 0.0f,
     0.0f, 0x1.34c9cp-93f, 0.0f, 0x1.2f782p-23f, 0.0f, 0x1.0982f4p-15f, 0.0f,
     0x1.6678c2p-87f, 0.0f, 0.0f, 0.0f, 0x1.35f7a2p-35f, 0x1.e9efaep-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.cd18c2p-115f, 0.0f, 0x1.e9ee26p-44f, 0x1.b4d4e2p-70f,
     0x1.1d6266p-102f, 0x1.cc5644p-77f, 0x1.1d9bd8p-64f, 0.0f, 0x1.88e85cp-102f, 0.0f,
     0x1.dce1bcp-51f, 0x1.7f96fcp-28f, 0.0f, 0.0f, 0.0f, 0x1.619f98p-19f, 0.0f,
     0x1.6ac60ap-86f, 0x1.e4438ep-68f, 0x1.f90bd8p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b6e6eap-45f, 0x1.56084p-77f, 0x1.bbd0fap-23f, 0x1.1c00a2p-99f,
     0x1.be9624p-95f, 0.0f, 0.0f, 0x1.feaaa8p-63f, 0.0f, 0x1.edba7ap-32f,
     0x1.ff9398p-74f, 0x1.e82712p-102f, 0.0f, 0x1.f941cp-83f, 0x1.f58c5ap-107f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d86f06p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a2e43ep-100f, 0.0f, 0.0f, 0x1.cefd6cp-29f, 0x1.44a9d6p-30f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.1cd892p-32f, 0x1.40adb2p-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.08bdc4p-74f, 0x1.3f920cp-111f, 0.0f, 0.0f, 0x1.5f07f2p-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d6590cp-19f, 0.0f, 0x1.996cbap-15f, 0x1.b0c1c2p-9f, 0.0f,
     0x1.bf778cp-102f, 0x1.5060eap-124f, 0.0f, 0x1.bd76a4p-56f, 0.0f, 0.0f,
     0x1.f38b0ep-2f, 0.0f, 0.0f, 0x1.f04996p-69f, 0x1.e7b366p-70f, 0x1.95d4f6p-51f,
     0.0f, 0.0f, 0.0f, 0x1.2a7238p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.b51ce2p-32f, 0.0f, 0.0f, 0x1.2fb0f8p-121f, 0x1.2ef75cp-37f, 0.0f, 0.0f,
     0x1.f68bc4p-45f, 0x1.daede4p-64f, 0x1.c70524p-62f, 0x1.fa9062p-71f,
     0x1.ff067p-30f, 0x1.cfa3d8p-4f, 0.0f, 0.0f, 0x1.01e96ep-39f, 0x1.cf90c8p-123f,
     0.0f, 0x1.89f4fep-7f, 0x1.15b91cp-18f, 0.0f, 0x1.eb25a8p-50f, 0x1.529382p-10f,
     0.0f, 0.0f, 0x1.8113fep-113f, 0x1.0ecb0ep-95f, 0.0f, 0x1.404696p-46f, 0.0f, 0.0f,
     0x1.051a84p-62f, 0x1.f55f18p-18f, 0.0f, 0.0f, 0.0f, 0x1.1d5f44p-82f,
     0x1.c79752p-101f, 0x1.2f435ap-126f, 0.0f, 0x1.dbf0e8p-41f, 0x1.f685c8p-16f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79f05ap-123f, 0.0f, 0x1.5d5fe2p-35f, 0.0f,
     0x1.e28798p-109f, 0x1.c75272p-89f, 0.0f, 0x1.6cb16cp-7f, 0.0f, 0.0f,
     0x1.8b899ap-123f, 0.0f, 0.0f, 0x1.705c4ap-75f, 0x1.36f568p-20f, 0.0f,
     0x1.6f526ep-98f, 0.0f, 0x1.ee0414p-107f, 0x1.3c747ap-10f, 0x1.0e1144p-4f,
     0x1.448db6p-107f, 0x1.05e8ccp-107f, 0x1.cddc7ap-2f, 0.0f, 0x1.ad6172p-24f,
     0x1.618612p-40f, 0.0f, 0x1.7f5252p-5f, 0.0f, 0x1.e7c5b8p-21f, 0x1.02e092p-101f,
     0.0f, 0x1.deaf2p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.67cf82p-107f, 0x1.b42d2cp-61f,
     0.0f, 0x1.b60b22p-111f, 0x1.bdd5ap-97f, 0.0f, 0x1.e22ab4p-104f, 0x1.c84e6ep-10f,
     0x1.8796bap-120f, 0.0f, 0.0f, 0x1.7ea5aep-89f, 0x1.c8632ap-3f, 0.0f, 0.0f,
     0x1.64aa5p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ab93ep-20f, 0x1.f0d356p-31f, 0.0f,
     0x1.29708cp-11f, 0x1.642272p-92f, 0x1.ba6654p-122f, 0x1.04e46ap-42f, 0.0f, 0.0f,
     0x1.5bde5ep-57f, 0x1.1e3174p-52f, 0.0f, 0x1.315cb4p-72f, 0x1.8d357cp-53f,
     0x1.ab932p-80f, 0.0f, 0x1.265076p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c25148p-119f,
     0.0f, 0.0f, 0.0f, 0x1.2dcd98p-77f, 0.0f, 0x1.48bbc2p-18f, 0x1.6d96bp-93f, 0.0f,
     0x1.350578p-59f, 0x1.84e6a6p-106f, 0x1.204d7ep-14f, 0.0f, 0x1.f43086p-46f,
     0x1.cd95dap-114f, 0.0f, 0x1.e8746p-57f, 0x1.1fe1aap-122f, 0.0f, 0.0f,
     0x1.c2b1cep-108f, 0.0f, 0x1.88ef2cp-76f, 0.0f, 0.0f, 0x1.290eacp-62f,
     0x1.a331c6p-44f, 0x1.b4b17p-96f, 0x1.2a0402p-95f, 0.0f, 0x1.30f57cp-46f,
     0x1.57134cp-95f, 0.0f, 0x1.a06786p-116f, 0x1.2ed4b4p-90f, 0.0f, 0.0f, 0.0f,
     0x1.8f61d4p-92f, 0x1.5359a6p-95f, 0x1p0f, 0x1.9ae61p-104f, 0x1.54ad32p-87f, 0.0f,
     0.0f, 0x1.25a9b2p-70f, 0.0f, 0x1.defp-7f, 0x1.8352bep-40f, 0.0f, 0.0f,
     0x1.b96df8p-66f, 0.0f, 0.0f, 0x1.e6dafap-74f, 0x1.9cc59p-84f, 0.0f, 0.0f,
     0x1.e09144p-92f, 0.0f, 0x1.b54eacp-104f, 0x1.dc55a2p-89f, 0x1.ec1582p-95f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ab289ep-18f, 0x1.4003fap-45f, 0x1.c6d562p-73f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a07a22p-125f, 0.0f, 0x1.d51386p-93f, 0x1.714f8cp-66f, 0.0f, 0.0f,
     0.0f, 0x1.8fe506p-24f, 0x1.7b4e06p-126f, 0.0f, 0x1.2bf3e2p-21f, 0.0f,
     0x1.cb807cp-52f, 0.0f, 0x1.97656p-118f, 0x1.d0c944p-83f, 0x1.2012e6p-20f,
     0x1.e41fa8p-99f, 0.0f, 0x1.8b0514p-20f, 0x1.f96ba6p-70f, 0x1.0e3d86p-65f,
     0x1.e56ee8p-23f, 0.0f, 0x1.8d032ap-70f, 0.0f, 0.0f, 0x1.9291eep-102f,
     0x1.441316p-111f, 0x1.0f1ef6p-110f, 0.0f, 0x1.a49e92p-15f, 0x1.612ca2p-97f,
     0x1.f87534p-58f, 0x1.872602p-77f, 0.0f, 0x1.a6800cp-55f, 0x1.3471e4p-22f, 0.0f,
     0x1.51e532p-11f, 0.0f, 0.0f, 0x1.b03e74p-87f, 0x1.ae138cp-34f, 0x1.6919eep-7f,
     0x1.1ff2fp-72f, 0x1.ddbf74p-120f, 0x1.31b0c8p-124f, 0x1.f4b38ap-85f, 0.0f, 0.0f,
     0.0f, 0x1.54e642p-53f, 0x1.794e48p-99f, 0x1.37ae9ap-121f, 0x1.ad0ad2p-14f, 0.0f,
     0x1.b35cap-1f, 0x1.5b6544p-74f, 0.0f, 0.0f, 0x1.39b0bcp-32f, 0x1.f2b564p-14f,
     0.0f, 0.0f, 0x1.e7dff8p-124f, 0.0f, 0x1.48898ap-50f, 0.0f, 0.0f, 0.0f,
     0x1.d02436p-14f, 0x1.93e3a6p-90f, 0x1.5592e2p-24f, 0.0f, 0x1.7ec85ap-58f,
     0x1.3d7414p-57f, 0x1.5903cp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b64ddcp-58f, 0.0f,
     0x1.5b792p-87f, 0.0f, 0x1.bd97fap-94f, 0x1.5388aep-122f, 0x1.787bfp-80f,
     0x1.e4649ap-123f, 0x1.d7e718p-29f, 0.0f, 0.0f, 0.0f, 0x1.a29696p-42f, 0.0f, 0.0f,
     0x1.f35536p-39f, 0x1.b6ce96p-89f, 0.0f, 0.0f, 0x1.2cd5fap-117f, 0x1.d4e47cp-60f,
     0.0f, 0.0f, 0x1.b8c5f6p-79f, 0x1.e5d09cp-46f, 0.0f, 0.0f, 0x1.d37adap-33f, 0.0f,
     0x1.9d7fa2p-8f, 0.0f, 0.0f, 0x1.b1aef6p-14f, 0x1.a68d8ap-94f, 0.0f, 0.0f,
     0x1.d077e8p-93f, 0x1.7733f8p-89f, 0.0f, 0.0f, 0.0f, 0x1.4aa566p-80f,
     0x1.6eb6f8p-126f, 0x1.707c0ep-41f, 0x1.dce14p-126f, 0x1.4e0a02p-76f,
     0x1.3c0bdcp-71f, 0x1.b5ee04p-68f, 0x1.b6beap-81f, 0.0f, 0x1.f3507ep-119f,
     0x1.f1ad7ap-74f, 0.0f, 0.0f, 0.0f, 0x1.9f8accp-4f, 0.0f, 0.0f, 0x1.5258f4p-72f,
     0.0f, 0x1.1c1342p-110f, 0x1.0d0af2p-50f, 0x1.27ad8ep-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0a5366p-114f, 0.0f, 0x1.6fe73p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9599c2p-86f, 0.0f, 0x1.5333f6p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9b2468p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6ade8p-70f, 0.0f, 0.0f,
     0x1.96f64ap-118f, 0x1.3384ap-70f, 0.0f, 0x1.b7a272p-41f, 0x1.313c9p-41f,
     0x1.488d28p-113f, 0x1.ee73a4p-54f, 0x1.21e15ep-122f, 0x1.adacaep-116f,
     0x1.a49acep-100f, 0.0f, 0x1.680c0ap-46f, 0x1.bb5224p-74f, 0x1.e85962p-9f,
     0x1.e04ebp-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5557d4p-109f, 0x1.d30adcp-94f,
     0x1.45297p-99f, 0.0f, 0.0f, 0x1.f6d0bp-46f, 0.0f, 0.0f, 0.0f, 0x1.b2e552p-27f,
     0x1.a93648p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11e098p-30f, 0x1.05027cp-54f, 0.0f,
     0.0f, 0.0f, 0x1.248044p-36f, 0.0f, 0x1.717968p-124f, 0x1.06174p-117f,
     0x1.436588p-40f, 0x1.82cc4p-78f, 0x1.2892eap-54f, 0.0f, 0.0f, 0.0f,
     0x1.c4e4ccp-18f, 0x1.9d1b6p-86f, 0x1.15f44p-17f, 0.0f, 0x1.2b6f1ep-89f, 0.0f,
     0.0f, 0x1.c56438p-75f, 0x1.93507ap-31f, 0.0f, 0x1.812762p-14f, 0.0f,
     0x1.2eaca4p-16f, 0x1.ac9794p-1f, 0x1.7f4018p-103f, 0x1.c72f82p-74f,
     0x1.6f891ep-36f, 0.0f, 0x1.d9fa1ap-99f, 0x1.082de6p-80f, 0x1.18e56ep-81f,
     0x1.e926ep-63f, 0x1.eff01p-5f, 0.0f, 0x1.c54fa2p-3f, 0x1.7009f2p-39f, 0.0f,
     0x1.06f418p-27f, 0x1.baf284p-33f, 0x1.17d17ep-55f, 0x1p0f, 0x1.ac6dc8p-112f,
     0.0f, 0x1.e45798p-38f, 0x1.4025eep-80f, 0.0f, 0.0f, 0x1.7ce4acp-60f,
     0x1.cb319ep-21f, 0.0f, 0.0f, 0x1.5afd36p-75f, 0.0f, 0x1.c7beb8p-43f,
     0x1.816214p-22f, 0.0f, 0x1.1d7556p-27f, 0x1.fbb5f8p-31f, 0x1.fcdfd8p-45f, 0.0f,
     0.0f, 0.0f, 0x1.0862b6p-71f, 0x1.0b8d8ap-2f, 0x1.4b4e66p-22f, 0x1.ae0d6p-110f,
     0.0f, 0.0f, 0x1.7a3b32p-82f, 0.0f, 0x1.b4192p-33f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2a514p-55f, 0.0f, 0.0f, 0x1.c431ep-63f, 0x1.71da0cp-48f, 0x1.53de14p-94f,
     0.0f, 0.0f, 0x1.dfda74p-65f, 0x1.a462b8p-43f, 0.0f, 0.0f, 0.0f, 0x1.c138eap-33f,
     0x1.8ec01ap-104f, 0.0f, 0.0f, 0x1.b0a388p-49f, 0x1.2eb84p-79f, 0.0f,
     0x1.e2b35cp-32f, 0.0f, 0x1.252772p-93f, 0x1.27cfc8p-124f, 0x1.47f8d4p-40f,
     0x1.4b273ep-63f, 0x1.ff6856p-89f, 0.0f, 0.0f, 0.0f, 0x1.79db84p-18f,
     0x1.35112ep-74f, 0.0f, 0x1.1183bp-77f, 0x1.bc1e92p-31f, 0x1.3a27cap-115f, 0.0f,
     0.0f, 0x1.38ac0ep-63f, 0.0f, 0x1.ce6388p-70f, 0x1.1c444cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.426d52p-61f, 0x1.623b38p-29f, 0.0f, 0.0f, 0.0f, 0x1.7aa734p-99f,
     0x1.e57956p-12f, 0.0f, 0.0f, 0.0f, 0x1.b74828p-16f, 0.0f, 0.0f, 0.0f,
     0x1.c2ae48p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b9eeap-101f, 0.0f,
     0x1.b4de56p-66f, 0.0f, 0x1.8646acp-36f, 0.0f, 0x1.964938p-57f, 0x1.2566a6p-67f,
     0x1.d13d76p-30f, 0x1.068c4ap-91f, 0.0f, 0.0f, 0x1.16e5dcp-81f, 0x1.2bbf28p-113f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbc1a6p-40f, 0x1.4a19dp-39f, 0x1.e274p-58f,
     0x1.f244fep-59f, 0.0f
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
            tmp1 = Sleef_fastsinf1_u3500purecfma(tmp0);
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
    printf("Sleef_fastsinf1_u3500purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fastsinf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
