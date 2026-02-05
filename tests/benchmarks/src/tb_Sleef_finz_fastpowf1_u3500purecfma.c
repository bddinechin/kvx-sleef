/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fastpowf1_u3500purecfma.c --function \
 *     Sleef_finz_fastpowf1_u3500purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.f43624p-97f, 0.0f, 0.0f, 0x1.9fd024p-19f, 0x1.7de7bep-8f, 0.0f, 0.0f,
     0x1.ed977p-3f, 0x1.d9189ap-101f, 0x1.1e350ep-125f, 0x1.8a5ba8p-68f,
     0x1.820ba6p-74f, 0x1.976352p-123f, 0x1.8f0f28p-25f, 0.0f, 0x1.0d63c4p-57f,
     0x1.17d13ap-90f, 0.0f, 0x1.5ddfdap-120f, 0.0f, 0.0f, 0x1.f1184ap-107f,
     0x1.e3423cp-24f, 0.0f, 0x1.503a16p-90f, 0.0f, 0x1.bdfb9ep-123f, 0.0f,
     0x1.ac9a72p-45f, 0.0f, 0.0f, 0x1.68fe2ap-108f, 0x1.4db5b4p-8f, 0.0f, 0.0f,
     0x1.070a0ap-99f, 0x1.868af2p-62f, 0.0f, 0x1.095b72p-66f, 0.0f, 0.0f, 0.0f,
     0x1.a2f74p-115f, 0x1.e3dbd2p-19f, 0.0f, 0.0f, 0x1.f31ffp-76f, 0.0f, 0.0f,
     0x1.95ee36p-48f, 0.0f, 0.0f, 0.0f, 0x1.e8208ep-100f, 0x1.97331ep-24f, 0.0f,
     0x1.9c70c2p-67f, 0x1.780046p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a0c7c6p-8f,
     0x1.057746p-83f, 0.0f, 0x1.cdfe4ep-125f, 0x1.a69682p-40f, 0x1.a16e5ap-56f, 0.0f,
     0.0f, 0x1.dc8b18p-41f, 0.0f, 0x1.ff8c82p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.123f6ep-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9440cp-95f, 0.0f,
     0x1.6e1b8ap-15f, 0x1.91abccp-14f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.6acb6ep-9f,
     0x1.5b083ap-17f, 0.0f, 0x1.c74d36p-70f, 0x1.4bb1d4p-122f, 0.0f, 0x1.d7c53cp-99f,
     0.0f, 0x1.e0d668p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6d383ap-12f,
     0x1.440e5ep-123f, 0x1.ca1b96p-98f, 0.0f, 0x1.f5ce18p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.87907cp-97f, 0x1.906cf4p-115f, 0.0f, 0x1.6f68d2p-57f, 0x1.1d3be2p-114f,
     0.0f, 0x1.5a38e4p-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.db9f28p-66f, 0x1.f16cdap-92f,
     0x1.cb06dcp-31f, 0x1.88733ep-67f, 0x1.6e7f4cp-23f, 0x1.18f37cp-1f,
     0x1.a7254ap-40f, 0.0f, 0.0f, 0x1.f080cap-6f, 0x1.e4ad2p-95f, 0x1.eac1aap-104f,
     0x1.45fa6cp-50f, 0x1.19ed54p-15f, 0.0f, 0x1.ac603p-12f, 0x1.fc93d6p-86f, 0.0f,
     0x1.7fd40ap-93f, 0x1.324c6p-61f, 0.0f, 0x1.82fc1ep-70f, 0x1.96b1a8p-43f,
     0x1.53d5eap-32f, 0x1.66c6f2p-101f, 0x1.aa185ep-86f, 0.0f, 0x1.ffec0cp-12f, 0.0f,
     0x1.950c4cp-84f, 0.0f, 0x1.66cc5p-71f, 0x1.16d7ap-33f, 0x1.b0df7cp-7f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c2f226p-54f, 0.0f, 0.0f, 0.0f, 0x1.32c0c2p-43f,
     0x1.5a773p-15f, 0x1.b61f1cp-14f, 0x1.807cfap-43f, 0x1.688d18p-104f, 0.0f,
     0x1.8f7208p-82f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e81e62p-95f, 0x1.63d2a4p-53f,
     0x1.cf535ap-110f, 0.0f, 0x1.168b56p-25f, 0x1.335998p-109f, 0.0f, 0x1.d762b8p-35f,
     0x1.d77c8cp-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b67812p-73f, 0.0f, 0.0f,
     0x1.69179ep-15f, 0x1.e7a008p-50f, 0x1.913c7cp-77f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.752d4cp-69f, 0x1.edd0dap-116f, 0.0f, 0.0f, 0x1.3a2c9ep-15f, 0.0f,
     0x1.6c2e1ap-51f, 0.0f, 0.0f, 0.0f, 0x1.ed2356p-91f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4c9efcp-105f, 0.0f, 0.0f, 0x1.7d7b3cp-5f, 0x1.a7c80cp-62f, 0.0f,
     0x1.67f65cp-65f, 0x1.89815ap-26f, 0.0f, 0.0f, 0x1.c5a06cp-30f, 0x1.01551cp-61f,
     0x1.ac2d94p-33f, 0x1.0c6f4ap-74f, 0.0f, 0x1.406d4cp-12f, 0.0f, 0x1.106814p-94f,
     0.0f, 0.0f, 0x1.4db2d2p-74f, 0x1.a2bd3cp-50f, 0.0f, 0.0f, 0x1.40d78cp-87f,
     0x1.9e613ap-34f, 0x1.2b314p-51f, 0.0f, 0x1.2274fep-26f, 0.0f, 0.0f,
     0x1.724dccp-94f, 0x1.e0fb8ap-102f, 0.0f, 0x1.cf829ap-55f, 0.0f, 0x1.3c01bp-109f,
     0x1.2b76cap-58f, 0x1.506996p-119f, 0x1.2c467p-124f, 0x1.d8e92cp-96f,
     0x1.0e6a92p-89f, 0.0f, 0x1.c436b8p-125f, 0x1.77e17p-74f, 0.0f, 0.0f, 0.0f,
     0x1.a90d88p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83488cp-52f, 0x1.e68e72p-14f,
     0x1.523fcap-108f, 0.0f, 0.0f, 0.0f, 0x1.e84ce2p-16f, 0.0f, 0x1.4ea9a2p-18f,
     0x1.ab7218p-43f, 0x1.c99e7ap-39f, 0.0f, 0.0f, 0.0f, 0x1.c3a2c4p-47f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.407d98p-25f, 0x1.afc656p-102f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c8cea4p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.471978p-13f, 0.0f, 0.0f, 0.0f,
     0x1.00869p-97f, 0x1.7098e2p-64f, 0x1.4cb78p-50f, 0.0f, 0x1.ad96acp-37f, 0.0f,
     0.0f, 0.0f, 0x1.f5fa3cp-15f, 0x1.e8529ap-40f, 0.0f, 0.0f, 0x1.9feae2p-23f, 0.0f,
     0.0f, 0x1.5be93ep-25f, 0x1.1f70e8p-125f, 0.0f, 0x1.5c84d6p-6f, 0.0f,
     0x1.79753p-22f, 0x1.9fb0cap-57f, 0x1.d85ee6p-69f, 0.0f, 0x1.f67c14p-125f,
     0x1.ea9cb4p-19f, 0.0f, 0x1.5689aep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6d5dacp-121f, 0.0f, 0.0f, 0x1.34fe9p-27f, 0.0f, 0x1.c60714p-95f,
     0x1.4db9e2p-96f, 0x1.799ae4p-39f, 0x1.d34852p-74f, 0x1.047324p-73f,
     0x1.e8e276p-29f, 0x1.d1a3a2p-9f, 0.0f, 0x1.49972ep-16f, 0x1.5178c4p-43f, 0.0f,
     0x1.a39dfap-24f, 0x1.e9453cp-3f, 0.0f, 0.0f, 0x1.2f2c34p-112f, 0x1.1fda7ap-68f,
     0x1.b47138p-44f, 0.0f, 0x1.0520c8p-2f, 0.0f, 0x1.4b2fcap-63f, 0.0f,
     0x1.73e252p-89f, 0x1.325d0cp-73f, 0x1.c3416p-29f, 0x1.e33b06p-99f,
     0x1.cf5e36p-126f, 0x1.c37d74p-20f, 0.0f, 0.0f, 0x1.aac3bcp-60f, 0.0f,
     0x1.6b4806p-95f, 0x1.e8482ap-97f, 0x1.490eeap-28f, 0.0f, 0x1.26f96p-34f,
     0x1.ca60eep-82f, 0x1.7c5d82p-102f, 0.0f, 0x1.f9f8d2p-102f, 0.0f, 0x1.37ac2p-67f,
     0.0f, 0.0f, 0.0f, 0x1.16f322p-38f, 0x1.34e368p-70f, 0x1.76c7fp-38f,
     0x1.265e26p-3f, 0x1.6cc89ep-3f, 0.0f, 0.0f, 0x1.d749fp-71f, 0.0f, 0.0f, 0.0f,
     0x1.3ebc8ep-65f, 0x1.99facap-10f, 0x1.adda92p-108f, 0x1.60762ep-115f,
     0x1.a50774p-88f, 0x1.533bd8p-25f, 0.0f, 0.0f, 0x1.d19dd6p-70f, 0x1.e031d6p-49f,
     0x1.2f136p-117f, 0.0f, 0.0f, 0x1.b5926cp-25f, 0x1.0ccd4ep-69f, 0.0f, 0.0f,
     0x1.1fcdfp-33f, 0.0f, 0x1.0290eep-32f, 0.0f, 0.0f, 0.0f, 0x1.7242ep-114f,
     0x1.a98cecp-54f, 0x1.9b0b9cp-18f, 0.0f, 0x1.11536p-39f, 0.0f, 0x1.db4b4p-14f,
     0.0f, 0.0f, 0x1.1e53f4p-30f, 0x1.e80e3cp-31f, 0.0f, 0x1.ddf3b2p-51f, 0.0f,
     0x1.443ba6p-46f, 0x1.4c66f4p-76f, 0.0f, 0.0f, 0x1.b1aab4p-35f, 0x1.a64b5p-80f,
     0x1.e88a0cp-23f, 0x1.7ca4a4p-72f, 0.0f, 0.0f, 0.0f, 0x1.210142p-112f, 0.0f, 0.0f,
     0.0f, 0x1.64b88ap-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.19f1acp-66f, 0x1.62ec5cp-81f,
     0.0f, 0.0f, 0x1.228132p-83f, 0x1.ad2e92p-74f, 0x1.acb2bcp-63f, 0x1.e43168p-89f,
     0x1.ebfc16p-28f, 0.0f, 0x1.b05e7p-121f, 0x1.46ea1p-35f, 0x1.5a3a4ap-59f,
     0x1.965a3p-62f, 0.0f, 0.0f, 0x1.7d9e7cp-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f660dcp-120f, 0.0f, 0.0f, 0x1.b8e21cp-7f, 0x1.2cf276p-55f, 0x1.39c03ap-118f,
     0.0f, 0.0f, 0x1.50316p-41f, 0x1.d0e114p-93f, 0x1.27a33cp-99f, 0x1.068b56p-17f,
     0.0f, 0.0f, 0x1.aac476p-117f, 0.0f, 0.0f, 0x1.9bcadp-52f, 0x1.ab14bep-82f, 0.0f,
     0x1.3e8ba6p-77f, 0x1.a9c86cp-7f, 0.0f, 0x1.4b29ecp-115f, 0.0f, 0.0f,
     0x1.7e808ep-19f, 0.0f, 0.0f, 0x1.b96158p-19f, 0.0f, 0x1.c0a876p-21f, 0.0f,
     0x1.e15366p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ecbb28p-79f, 0.0f, 0x1.2f6d0ap-120f,
     0.0f, 0x1.b6e23ep-48f, 0.0f, 0x1.7ca2a4p-64f, 0x1.d99004p-125f, 0.0f, 0.0f, 0.0f,
     0x1.50d606p-4f, 0x1.11264ep-126f, 0x1.3ed196p-66f, 0x1.9321b6p-91f,
     0x1.b3bc78p-59f, 0x1.f22092p-32f, 0.0f, 0x1.9f89e8p-66f, 0x1.f48cf6p-113f,
     0x1.5c6972p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.97378ep-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7d4ed2p-71f, 0x1.b91234p-7f,
     0x1.ce2bdp-92f, 0.0f, 0.0f, 0.0f, 0x1.6b391ap-3f, 0.0f, 0.0f, 0.0f,
     0x1.0b8bbp-113f, 0x1.d2fe5cp-28f, 0x1.75642ap-33f, 0.0f, 0x1.b8f2fap-117f,
     0x1.3a8f86p-116f, 0.0f, 0x1.db2356p-82f, 0x1.e791c2p-68f, 0x1.8aa7ap-82f, 0.0f,
     0.0f, 0x1.112728p-69f, 0.0f, 0x1.989d28p-113f, 0.0f, 0x1.e14002p-91f, 0.0f, 0.0f,
     0.0f, 0x1.6acd88p-29f, 0.0f, 0.0f, 0x1.546c98p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.feafep-36f, 0x1.e9cf94p-56f, 0x1.3b7ae8p-110f, 0x1.284316p-85f,
     0x1.02aa92p-95f, 0x1.0a6206p-83f, 0x1.59debp-115f, 0x1.f66374p-118f,
     0x1.594f42p-69f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.5bb198p-112f, 0x1.1d0248p-77f,
     0x1.29956cp-125f, 0x1.0a9cdp-88f, 0.0f, 0x1.1b159ep-12f, 0x1.d9589ep-85f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5c7e2p-115f, 0.0f, 0x1.74aefap-51f, 0.0f,
     0x1.c7fa98p-20f, 0.0f, 0.0f, 0x1.f5515ep-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.345f8p-2f, 0.0f, 0x1.1dfd82p-53f, 0x1.636cf2p-1f, 0.0f, 0x1.7842dap-56f,
     0.0f, 0x1.23170cp-49f, 0x1p0f, 0x1.27734ap-101f, 0x1.e92fa4p-49f, 0.0f, 0.0f,
     0x1.6e622ep-57f, 0.0f, 0.0f, 0.0f, 0x1.7af3d4p-108f, 0x1.207a32p-44f, 0.0f,
     0x1.621386p-104f, 0.0f, 0x1.93b15cp-23f, 0x1.89933p-37f, 0.0f, 0.0f,
     0x1.ca8ae6p-17f, 0.0f, 0.0f, 0x1.01a216p-56f, 0.0f, 0x1.21e12p-67f, 0.0f,
     0x1.2de1dep-115f, 0x1.669816p-42f, 0.0f, 0.0f, 0x1.0c234cp-14f, 0x1.e463f6p-85f,
     0x1.63ef98p-104f, 0x1.294fb2p-60f, 0.0f, 0.0f, 0x1.e25c8ep-10f, 0x1.e58dbep-124f,
     0.0f, 0.0f, 0x1.8e7332p-103f, 0.0f, 0.0f, 0x1.1cf7dep-28f, 0x1.412c04p-17f,
     0x1.798a92p-123f, 0x1.0ba5acp-5f, 0.0f, 0x1.e44236p-92f, 0x1.1763d2p-109f,
     0x1.829a86p-23f, 0.0f, 0x1.45f6ep-103f, 0.0f, 0.0f, 0.0f, 0x1.8334fcp-15f, 0.0f,
     0.0f, 0.0f, 0x1.763792p-113f, 0x1.efbc64p-39f, 0x1.f229eep-114f, 0x1.5b8448p-40f,
     0x1.95dbf4p-74f, 0.0f, 0.0f, 0.0f, 0x1.67c938p-79f, 0x1.743972p-52f,
     0x1.be73dcp-78f, 0x1.e47232p-39f, 0.0f, 0x1.7b1f5ap-70f, 0x1.ebb458p-75f,
     0x1.433cc8p-103f, 0.0f, 0x1.3677dp-122f, 0x1.94422cp-50f, 0.0f, 0x1.d42246p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c5dap-39f, 0.0f, 0.0f, 0.0f, 0x1.a3e0d8p-70f,
     0x1.ffcap-89f, 0x1.8fe008p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6d464p-21f, 0.0f,
     0.0f, 0x1.1bdb9ep-57f, 0.0f, 0x1.6b3d1ap-90f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.94934ap-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b62a7p-106f, 0.0f, 0x1.33da18p-28f, 0x1.90512ap-50f, 0x1.79c0dp-70f,
     0x1.2da392p-105f, 0.0f, 0x1.81c25cp-25f, 0.0f, 0x1.b0be34p-108f, 0x1.6bd986p-97f,
     0.0f, 0x1.15d1f2p-9f, 0.0f, 0x1.e6cea4p-28f, 0.0f, 0x1.04dba2p-99f, 0.0f, 0.0f,
     0x1.b95122p-66f, 0.0f, 0x1.47d9e8p-30f, 0.0f, 0.0f, 0.0f, 0x1.b9b406p-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.838c1ap-99f, 0x1.e315acp-102f, 0.0f, 0.0f,
     0x1.50fa1ep-105f, 0.0f, 0x1.d7ac3cp-38f, 0x1.10703p-125f, 0x1.2706a4p-119f, 0.0f,
     0x1.1885bap-76f, 0.0f, 0x1.4ba11ep-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc052cp-119f,
     0x1.1223b2p-32f, 0.0f, 0x1.7a4f54p-65f, 0.0f, 0x1.6d2ebep-38f, 0x1.8b0cc6p-123f,
     0x1.b635f2p-86f, 0x1.bbdb8p-13f, 0x1.cbcb78p-45f, 0.0f, 0x1.fd0c44p-109f,
     0x1.46f0d6p-102f, 0.0f, 0x1.e54946p-3f, 0.0f, 0x1.a1e2fap-90f, 0x1.78a488p-51f,
     0.0f, 0.0f, 0.0f, 0x1.61bb18p-94f, 0.0f, 0x1.39452ap-64f, 0.0f, 0.0f, 0.0f,
     0x1.0beafp-88f, 0x1.347cdap-81f, 0x1.f543d4p-19f, 0x1.45889cp-125f,
     0x1.73e3acp-115f, 0.0f, 0.0f, 0x1.524b22p-48f, 0.0f, 0.0f, 0x1.623912p-78f,
     0x1.eae228p-66f, 0x1.076d96p-29f, 0.0f, 0x1.afe9d6p-96f, 0x1.b5e76ap-44f, 0.0f,
     0x1.eb6908p-98f, 0x1.7bcf14p-2f, 0x1.8a07a6p-43f, 0x1.39c804p-45f,
     0x1.7ca3aap-14f, 0x1.ff21fep-17f, 0x1.f5009cp-123f, 0.0f, 0.0f, 0.0f,
     0x1.d73a2ap-2f, 0.0f, 0x1.9e5f7ep-69f, 0x1.11ebd2p-84f, 0x1.dc90fap-67f, 0.0f,
     0.0f, 0.0f, 0x1.70231ap-37f, 0.0f, 0x1.21be52p-104f, 0x1.c0c996p-86f,
     0x1.8677c8p-117f, 0x1.3f79a6p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d25822p-62f,
     0x1.0962b8p-88f, 0x1.11a47ap-106f, 0x1.bb7d38p-57f, 0.0f, 0.0f, 0x1.344098p-64f,
     0x1.6de348p-71f, 0x1.bd8e52p-3f, 0.0f, 0.0f, 0x1.6b86dep-25f, 0.0f,
     0x1.a61f62p-18f, 0.0f, 0x1.20f9d4p-66f, 0.0f, 0.0f, 0.0f, 0x1.3d2c86p-31f, 0.0f,
     0.0f, 0x1.63c154p-124f, 0.0f, 0.0f, 0x1.233354p-114f, 0.0f, 0x1.361ceap-104f,
     0.0f, 0x1.065492p-72f, 0x1.da61bap-47f, 0x1.ea14c2p-30f, 0.0f, 0.0f, 0.0f,
     0x1.c2c80ep-56f, 0.0f, 0x1.8ce6c4p-15f, 0.0f, 0x1.03104ap-59f, 0.0f, 0.0f,
     0x1.e910dep-37f, 0x1.75d9f2p-116f, 0x1.c655dap-86f, 0.0f, 0x1.c8aabep-112f,
     0x1.f91f1ep-24f, 0x1.681a6ap-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c4a4ep-62f, 0.0f,
     0x1.736e08p-25f, 0.0f, 0x1.7820c6p-34f, 0.0f, 0x1.fc0a38p-8f, 0.0f, 0.0f,
     0x1.99f406p-95f, 0.0f, 0x1.dc9e98p-62f, 0x1p0f, 0x1.9d81bap-58f, 0x1.147a6p-29f,
     0.0f, 0.0f, 0.0f, 0x1.b9b782p-106f, 0.0f, 0x1.97126ep-105f, 0x1.fc533ap-88f,
     0.0f, 0.0f, 0x1.a1ec56p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ed7f6p-55f,
     0x1.4ab77ap-109f, 0.0f, 0.0f, 0.0f, 0x1.c239eep-48f, 0x1.3899b6p-38f,
     0x1.261cdp-59f, 0.0f, 0.0f, 0x1.7ca416p-37f, 0.0f, 0x1.ce07fap-88f, 0.0f, 0.0f,
     0.0f, 0x1.ea1daap-113f, 0x1.c5e988p-78f, 0x1.53dba8p-4f, 0x1.8ede7ap-18f,
     0x1.4f11aep-12f, 0x1.ac5e26p-85f, 0x1.be79dep-112f, 0x1.1ff274p-98f, 0.0f, 0.0f,
     0x1.8c9e5cp-107f, 0.0f, 0x1.ff766cp-18f, 0x1.e009cep-81f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9a9032p-117f, 0x1.9a45a2p-33f, 0.0f, 0x1.39a7b2p-103f
};
static const float external_bench_wrapper_input_table_arg1[1001]  = {
     0x1.3bcfc2p-14f, 0x1.0d10bap-74f, 0x1.c90ddcp-70f, 0.0f, 0x1.66b474p-100f,
     0x1.301ca2p-62f, 0.0f, 0x1.6b84e6p-41f, 0.0f, 0.0f, 0.0f, 0x1.cce646p-75f, 0.0f,
     0.0f, 0x1.06d2a2p-51f, 0.0f, 0x1.6b179ap-16f, 0.0f, 0x1.340f28p-104f, 0.0f,
     0x1.d986f4p-95f, 0.0f, 0x1.003f0ep-58f, 0.0f, 0x1.22d554p-62f, 0x1.e85d74p-92f,
     0.0f, 0.0f, 0x1.835b7cp-12f, 0x1.654abp-68f, 0x1.17354cp-92f, 0.0f,
     0x1.ced60cp-106f, 0x1.2c7918p-56f, 0x1.ddeabp-5f, 0x1.61c55ep-102f,
     0x1.af3c62p-39f, 0x1.e4a29p-31f, 0.0f, 0x1.715eb8p-43f, 0.0f, 0.0f,
     0x1.52f70ep-37f, 0x1.78d3f8p-86f, 0x1.5d7e5p-124f, 0x1.cdf75cp-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3caf8p-108f, 0.0f, 0.0f, 0x1.c40b22p-76f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.62cff8p-29f, 0.0f, 0x1.b73fb2p-90f, 0.0f, 0.0f, 0.0f, 0x1.2fb276p-106f,
     0x1.4ff1a6p-1f, 0.0f, 0.0f, 0x1.3b5f2ep-38f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3813dep-70f, 0.0f, 0x1.0ff8d2p-123f, 0x1.a2314p-58f, 0.0f, 0.0f,
     0x1.f58004p-4f, 0x1.1ebc8cp-26f, 0.0f, 0x1.08faf8p-78f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8a8c56p-39f, 0.0f, 0x1.fd2cc2p-45f, 0.0f, 0x1.a472dep-84f, 0.0f, 0.0f,
     0x1.e88874p-126f, 0x1.0a45eep-61f, 0x1.9b38fap-15f, 0x1.13620ap-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.589c86p-3f, 0.0f, 0x1.c59facp-97f, 0x1.6d9d2ep-16f,
     0x1.a8132cp-38f, 0.0f, 0.0f, 0x1.377808p-21f, 0.0f, 0.0f, 0x1.6d3242p-56f, 0.0f,
     0x1.f0a77cp-78f, 0.0f, 0.0f, 0.0f, 0x1.1b6b72p-79f, 0x1.b512e6p-78f,
     0x1.1fb18ap-90f, 0.0f, 0.0f, 0x1.912c26p-26f, 0.0f, 0x1.106d22p-32f, 0.0f,
     0x1.eaef48p-22f, 0.0f, 0x1.ed8674p-77f, 0x1.bed274p-32f, 0.0f, 0x1.0ed8cep-126f,
     0x1.a2a14cp-78f, 0x1.75213cp-103f, 0x1.d9a562p-10f, 0x1.6811dap-39f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41578ap-96f, 0x1.9ebbp-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2868b8p-117f, 0.0f, 0.0f, 0x1.0cbfdcp-99f,
     0x1.68df8cp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e4bb8p-108f, 0.0f, 0.0f,
     0x1.dbffeep-22f, 0.0f, 0x1.7dc66p-36f, 0x1.ad1588p-125f, 0x1.7c216cp-56f,
     0x1.ce181p-15f, 0.0f, 0.0f, 0x1.51914ep-34f, 0.0f, 0x1.20ffbep-94f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.190c48p-83f, 0x1.a7144ap-102f, 0x1.0b61b6p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.2fe05ep-24f, 0x1.53f1d2p-102f, 0x1.79744ap-62f,
     0x1.cc6d1ep-87f, 0.0f, 0.0f, 0x1.f0e692p-86f, 0x1.770c08p-85f, 0x1.ab29fep-107f,
     0x1.dab564p-59f, 0.0f, 0.0f, 0x1.df946cp-93f, 0x1.7be8bcp-19f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b2474p-16f, 0x1.06eea6p-4f, 0x1.95bbcep-124f,
     0.0f, 0.0f, 0x1.4a437cp-93f, 0x1.aacf2ep-92f, 0.0f, 0x1.72e81ep-109f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c99c12p-89f, 0.0f, 0x1.8bfe92p-3f, 0x1.636e6cp-3f, 0.0f,
     0x1.33cc3p-93f, 0.0f, 0x1.140e9ep-20f, 0.0f, 0.0f, 0x1.18930ap-111f, 0.0f, 0.0f,
     0x1.3d5f32p-88f, 0.0f, 0.0f, 0x1.17434ap-74f, 0x1.dd1aeep-89f, 0x1.a00ae4p-8f,
     0x1.60a6a8p-45f, 0x1.d664p-61f, 0.0f, 0.0f, 0x1.62799p-66f, 0x1.e1ee1ep-126f,
     0x1.b05cdap-76f, 0.0f, 0x1.6766e2p-113f, 0.0f, 0.0f, 0.0f, 0x1.d45824p-1f, 0.0f,
     0.0f, 0x1.fcdadep-24f, 0x1.92d75ep-100f, 0.0f, 0x1.898e36p-84f, 0x1.d23bb8p-89f,
     0.0f, 0x1.903b3p-118f, 0.0f, 0x1.98254cp-17f, 0.0f, 0x1.6846b8p-6f, 0.0f,
     0x1.f18786p-13f, 0x1.0dacbep-10f, 0x1.a74d62p-15f, 0x1.b2198ep-48f,
     0x1.8facf6p-26f, 0.0f, 0x1.eef4a4p-67f, 0x1.c06686p-14f, 0x1.f51edap-38f,
     0x1.5ed79cp-102f, 0x1.786252p-75f, 0.0f, 0.0f, 0x1.6a587ap-10f, 0x1.954fb6p-113f,
     0x1.8832a2p-71f, 0x1.10dedcp-104f, 0.0f, 0x1.efcf68p-116f, 0.0f,
     0x1.9e3444p-114f, 0x1.afdb44p-10f, 0x1.69085ep-114f, 0.0f, 0.0f,
     0x1.645dbep-126f, 0.0f, 0x1.c82754p-30f, 0.0f, 0x1.91a9aap-38f, 0x1.08b04ep-122f,
     0x1.86df98p-52f, 0x1.6b994cp-42f, 0x1.5b05ecp-124f, 0x1.b73df6p-74f,
     0x1.97d092p-37f, 0x1.015ceep-91f, 0x1.2cbe42p-97f, 0.0f, 0.0f, 0x1.c2165p-119f,
     0.0f, 0.0f, 0.0f, 0x1.bb3c38p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6f1876p-22f,
     0x1.a198c4p-119f, 0.0f, 0.0f, 0.0f, 0x1.c470dap-92f, 0x1.4b88c2p-27f,
     0x1.e07074p-7f, 0x1.79bdf6p-68f, 0.0f, 0x1.377234p-29f, 0.0f, 0x1.e0c598p-32f,
     0.0f, 0.0f, 0x1.411f6ap-60f, 0x1.508246p-52f, 0x1.0cbfaep-106f, 0x1.e4c0d4p-82f,
     0.0f, 0x1.1874e6p-118f, 0.0f, 0x1.1942aep-50f, 0x1.51b38cp-19f, 0x1.866fdep-52f,
     0x1.6f49c6p-1f, 0.0f, 0.0f, 0.0f, 0x1.1b82eep-51f, 0x1.cf6f5ep-106f,
     0x1.ba179cp-56f, 0x1.8a497ap-100f, 0x1.cdb1bap-54f, 0.0f, 0.0f, 0x1.aa74f4p-124f,
     0.0f, 0x1.38606ep-88f, 0.0f, 0x1.366326p-2f, 0x1.6710ap-45f, 0.0f,
     0x1.28ca56p-24f, 0.0f, 0.0f, 0x1.10541ep-109f, 0x1.3e2426p-19f, 0.0f, 0.0f,
     0x1.3bb93p-91f, 0x1.e96e86p-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bb91ep-30f, 0.0f,
     0x1.bac1a4p-123f, 0.0f, 0x1.23dea6p-7f, 0x1.5142b2p-12f, 0x1.65cbb8p-13f,
     0x1.ecc7acp-103f, 0.0f, 0.0f, 0x1.c09c7ap-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb3f3ep-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ccfaep-116f, 0.0f, 0.0f,
     0x1.5c8f9ap-110f, 0.0f, 0x1.996baep-125f, 0.0f, 0.0f, 0x1.a10312p-15f, 0.0f,
     0.0f, 0.0f, 0x1.8c6dcap-6f, 0.0f, 0x1.35ba72p-5f, 0x1.c6e17cp-59f, 0.0f, 0.0f,
     0.0f, 0x1.dd05acp-25f, 0.0f, 0x1.fb6c82p-29f, 0x1.13faecp-65f, 0x1.f5b58p-8f,
     0x1.4188c6p-17f, 0x1.ab74e6p-87f, 0x1.88da6p-23f, 0x1.e0c03ep-21f, 0.0f,
     0x1.8707acp-64f, 0.0f, 0x1.b5c3b8p-6f, 0x1.70661cp-82f, 0x1.397a9cp-109f, 0.0f,
     0x1.9c341cp-125f, 0.0f, 0.0f, 0.0f, 0x1.0e4344p-18f, 0.0f, 0x1.9699d2p-66f, 0.0f,
     0.0f, 0.0f, 0x1.273c24p-103f, 0x1.d34e06p-14f, 0x1.f8788ep-27f, 0.0f,
     0x1.479982p-124f, 0.0f, 0x1.ecb21ep-7f, 0.0f, 0x1.6b038cp-34f, 0x1.81368ap-50f,
     0x1.42f466p-95f, 0.0f, 0.0f, 0x1.00a78ap-99f, 0.0f, 0.0f, 0x1.0c3bfcp-75f,
     0x1.46094p-20f, 0.0f, 0x1.0802ecp-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.06611ep-86f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f602d8p-18f, 0.0f, 0x1.f6beap-82f, 0.0f, 0.0f, 0.0f,
     0x1.71ec2ap-96f, 0.0f, 0x1.0a8002p-3f, 0x1.b06108p-118f, 0.0f, 0x1.87f18ap-121f,
     0x1.d85918p-62f, 0.0f, 0.0f, 0x1.1cadbcp-23f, 0.0f, 0x1.7e97a2p-45f,
     0x1.775aa4p-107f, 0.0f, 0x1.74b98ep-93f, 0x1.4936aep-48f, 0.0f, 0x1.0cc362p-107f,
     0.0f, 0.0f, 0x1.ce3fcp-116f, 0x1.59e11ap-59f, 0.0f, 0.0f, 0x1.787ba8p-109f,
     0x1.fa0beap-102f, 0.0f, 0x1.8a6d68p-38f, 0x1.5e41e2p-23f, 0x1.26f6dap-90f,
     0x1.25393p-22f, 0x1.058ec6p-48f, 0x1.668176p-109f, 0x1p0f, 0x1.e2297p-1f,
     0x1.7de73cp-86f, 0.0f, 0.0f, 0x1.e46256p-99f, 0.0f, 0x1.164ffp-38f, 0.0f, 0.0f,
     0.0f, 0x1.d3626ap-103f, 0.0f, 0.0f, 0x1.a3056p-125f, 0x1.69fce4p-9f,
     0x1.570bdep-56f, 0x1.b81652p-104f, 0.0f, 0x1.549acp-115f, 0.0f, 0x1.ad248ep-77f,
     0.0f, 0x1.e5b8dap-51f, 0x1.8dd9aap-99f, 0.0f, 0x1.a089b4p-59f, 0.0f, 0.0f,
     0x1.3731b6p-116f, 0.0f, 0x1.bf4d72p-125f, 0.0f, 0.0f, 0.0f, 0x1.5e84acp-112f,
     0.0f, 0.0f, 0x1.c606dap-57f, 0.0f, 0x1.01c53p-64f, 0.0f, 0x1.69180ep-41f,
     0x1.719624p-44f, 0.0f, 0x1.18ce7cp-120f, 0x1.cd8a52p-15f, 0x1.28278p-102f,
     0x1.81c59cp-76f, 0.0f, 0x1.47cbfep-34f, 0.0f, 0.0f, 0x1.ff5424p-112f, 0.0f, 0.0f,
     0x1.468d14p-111f, 0x1.497d5ep-9f, 0x1.509bbp-65f, 0.0f, 0.0f, 0x1.10be0ap-28f,
     0.0f, 0.0f, 0x1.5d5436p-117f, 0x1.4aa9e6p-99f, 0x1.53b69ap-104f, 0.0f, 0.0f,
     0.0f, 0x1.9018bap-88f, 0.0f, 0.0f, 0.0f, 0x1.c8d66p-26f, 0.0f, 0x1.cfc92p-18f,
     0x1.8f0326p-63f, 0x1.b9bc06p-40f, 0x1.4a65a4p-121f, 0.0f, 0.0f, 0x1.2c55a4p-90f,
     0.0f, 0.0f, 0x1.79fc1p-76f, 0x1.6964f4p-62f, 0x1.0dffap-26f, 0.0f,
     0x1.20b49ep-57f, 0.0f, 0.0f, 0x1.cbcc2p-77f, 0x1.1ecd3p-30f, 0.0f,
     0x1.2e7cdep-16f, 0.0f, 0x1.2a3a74p-90f, 0.0f, 0.0f, 0x1.cf4f58p-74f, 0.0f,
     0x1.a5c268p-85f, 0x1.c39bb2p-89f, 0.0f, 0x1.2b531p-82f, 0.0f, 0.0f,
     0x1.6d71c4p-74f, 0.0f, 0x1.7c068ap-19f, 0.0f, 0x1.2f9d36p-25f, 0x1.51c1d4p-14f,
     0x1p0f, 0x1.0f89p-51f, 0x1.7173dep-91f, 0.0f, 0.0f, 0x1.c2aa6cp-3f,
     0x1.04fa88p-90f, 0.0f, 0x1.96f0f6p-92f, 0x1.296474p-14f, 0.0f, 0.0f,
     0x1.9a2942p-53f, 0x1.42fb36p-20f, 0.0f, 0x1.53051p-76f, 0x1.5dd27ap-9f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.87e184p-66f, 0x1.4148dep-98f, 0.0f, 0.0f,
     0x1.6a5bdp-106f, 0x1.4499c8p-100f, 0x1.df139ep-92f, 0x1.a7febp-113f, 0.0f, 0.0f,
     0x1.2c8e2p-89f, 0x1.a111dap-65f, 0.0f, 0x1.cca054p-15f, 0.0f, 0x1.18c57p-27f,
     0x1.ec5bbp-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6bdc8p-56f, 0.0f, 0x1.b6e84cp-74f,
     0x1.910c58p-82f, 0x1.904f56p-85f, 0.0f, 0x1.16729ap-37f, 0.0f, 0.0f,
     0x1.d35fb4p-113f, 0.0f, 0.0f, 0.0f, 0x1.cf5892p-95f, 0.0f, 0x1.29a5a6p-103f,
     0x1.c71d86p-49f, 0x1.9807aep-85f, 0.0f, 0.0f, 0x1.9111dap-101f, 0.0f, 0.0f,
     0x1.65df5ap-90f, 0x1.fa497ep-41f, 0x1.87eeb6p-34f, 0x1.a44e62p-103f, 0.0f, 0.0f,
     0x1.8d353ep-106f, 0.0f, 0x1.27be8p-10f, 0x1.02ce36p-106f, 0x1.b00114p-119f,
     0x1.fdb27ap-17f, 0.0f, 0.0f, 0x1.fd0452p-56f, 0x1.ba3a1ap-115f, 0.0f,
     0x1.de3782p-37f, 0.0f, 0x1.f4d2f6p-96f, 0.0f, 0x1.b0e188p-121f, 0.0f,
     0x1.d10a1p-51f, 0x1.c4881ep-33f, 0.0f, 0x1.59cb86p-10f, 0x1.534dcp-2f,
     0x1.e3fa52p-41f, 0x1.56c4c2p-50f, 0.0f, 0x1.d0ab2cp-102f, 0.0f, 0x1.b9d538p-79f,
     0x1.936fcap-49f, 0.0f, 0.0f, 0x1.87b9f2p-23f, 0x1.9fbadcp-35f, 0x1.937c74p-10f,
     0.0f, 0.0f, 0x1.db5cdap-10f, 0.0f, 0x1.25d88ep-4f, 0x1.5abff2p-49f,
     0x1.72fb8p-7f, 0.0f, 0.0f, 0x1.2e477ep-21f, 0.0f, 0x1.688048p-79f,
     0x1.98ce14p-93f, 0.0f, 0x1.de0504p-33f, 0.0f, 0.0f, 0.0f, 0x1.fd234cp-105f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6a01d2p-109f, 0x1.344938p-60f, 0x1.8fd604p-52f,
     0.0f, 0x1.41db2ep-24f, 0x1.e744dap-5f, 0.0f, 0x1.b567cep-112f, 0.0f,
     0x1.f3a1bp-100f, 0x1.540a8p-81f, 0x1.6fa564p-43f, 0x1.4bb83p-94f, 0.0f,
     0x1.1f6a16p-36f, 0.0f, 0x1.2fcccap-110f, 0x1.3fd7fp-117f, 0x1.f5b56ep-2f, 0.0f,
     0x1.27103ep-7f, 0x1.15455cp-105f, 0x1.b82de8p-20f, 0x1.dfa3dep-14f,
     0x1.9bf522p-94f, 0x1.e46e2ap-3f, 0x1.b56af6p-3f, 0x1.4ede1p-25f, 0.0f, 0.0f,
     0.0f, 0x1.5c8904p-71f, 0x1.3273d8p-57f, 0x1.b2e9dcp-49f, 0x1.044008p-48f,
     0x1.6c98f2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d8938ep-25f, 0x1.db001ep-90f, 0.0f,
     0.0f, 0.0f, 0x1.f574f4p-22f, 0x1.8f81ecp-116f, 0.0f, 0x1.3402c2p-90f, 0.0f, 0.0f,
     0x1.0442a4p-81f, 0.0f, 0.0f, 0.0f, 0x1.61e97ep-98f, 0.0f, 0x1.284626p-52f, 0.0f,
     0.0f, 0x1.cf5946p-71f, 0.0f, 0x1.ace8a6p-32f, 0x1.43f36ap-119f, 0.0f,
     0x1.922762p-50f, 0x1.6b74d6p-29f, 0x1.b4d038p-18f, 0.0f, 0x1.03cc62p-82f,
     0x1.50a71cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3101p-39f, 0.0f, 0.0f,
     0x1.5e0d76p-74f, 0x1.a55162p-79f, 0x1.31765p-49f, 0x1.644cd6p-67f,
     0x1.4159c8p-87f, 0x1.009afp-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4009bap-106f, 0.0f,
     0x1.362518p-78f, 0x1.9d4a4cp-101f, 0.0f, 0.0f, 0.0f, 0x1.f5a574p-64f,
     0x1.ca716ep-2f, 0x1.175fb2p-92f, 0x1.2b5d68p-92f, 0x1.a97a9ep-13f, 0.0f,
     0x1.304b88p-57f, 0.0f, 0.0f, 0x1.cd009ap-52f, 0.0f, 0x1.bcdb84p-101f, 0.0f,
     0x1.6dcd5p-104f, 0.0f, 0x1.e74918p-21f, 0x1.28da02p-103f, 0.0f, 0x1.109c7ep-113f,
     0.0f, 0x1.cada6cp-38f, 0.0f, 0x1.2ea28cp-51f, 0x1.cf2966p-79f, 0.0f, 0.0f,
     0x1.b41e5ep-100f, 0.0f, 0.0f, 0x1.17644ap-41f, 0.0f, 0x1.a7be86p-83f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d189f4p-30f, 0.0f, 0.0f, 0x1.46e64ep-77f, 0.0f,
     0x1.facd14p-53f, 0x1.33486p-77f, 0x1.368af6p-100f, 0x1.bdc2d4p-82f, 0.0f,
     0x1.119c9ep-112f, 0x1.dadc12p-1f, 0x1.691542p-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.311f54p-117f, 0.0f, 0.0f, 0x1.7fcb8p-70f, 0x1.5ba7fap-16f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6e2e52p-109f, 0x1.1c5542p-41f, 0x1.b297cap-110f, 0.0f,
     0.0f, 0x1.2e380ep-86f, 0.0f, 0x1.e25dd4p-72f, 0.0f, 0x1.fc4dd8p-80f,
     0x1.cd35c4p-87f, 0.0f, 0x1.8a5a16p-50f, 0.0f, 0.0f, 0x1.7d9f5p-10f, 0.0f, 0.0f,
     0x1.d5ff22p-105f, 0.0f, 0x1.f54e92p-85f, 0.0f, 0x1.8bc1b6p-6f, 0x1.4ad47p-11f,
     0x1.e9fe24p-97f, 0x1.4b240cp-77f, 0x1.4487eep-28f, 0.0f, 0x1.312f58p-83f,
     0x1.d596e4p-49f, 0.0f, 0x1.c321dp-92f, 0x1.44c428p-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ad85eap-80f, 0.0f, 0.0f, 0x1.b28d4ap-4f, 0.0f, 0x1.6506ecp-102f, 0.0f,
     0x1.42ce5ap-64f, 0x1.4f0ec4p-49f, 0.0f, 0.0f, 0x1.bdb278p-110f, 0.0f,
     0x1.adf994p-123f, 0x1.0fdac8p-46f, 0.0f, 0.0f, 0x1.5158c4p-94f, 0.0f,
     0x1.7dddc4p-34f, 0.0f, 0x1.365faap-23f, 0.0f, 0x1.19d632p-27f, 0.0f,
     0x1.04457cp-18f, 0x1.2d2aaep-88f, 0.0f, 0.0f, 0.0f, 0x1.f14ad6p-52f,
     0x1.72e3c4p-47f, 0x1.05b9e2p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.275a62p-125f, 0.0f,
     0.0f, 0x1.bd296p-70f, 0.0f, 0x1.35e328p-14f, 0x1.dfdb88p-58f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            float tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_fastpowf1_u3500purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_fastpowf1_u3500purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fastpowf1_u3500purecfma bench acc %a\n", global_bench_acc);
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
