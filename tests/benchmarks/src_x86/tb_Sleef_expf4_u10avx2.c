/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expf4_u10avx2128.c --function Sleef_expf4_u10avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5b6f92p-78f, 0.0f, 0x1.22a1eap-118f,
     0x1.f4f3cep-41f, 0.0f, 0x1.34a3ecp-2f, 0x1.b703dcp-65f, 0x1.4e91b8p-84f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a3db3p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53945ap-84f, 0x1.3d0244p-68f, 0.0f, 0x1.fa31c2p-34f, 0x1.7b5c4cp-107f,
     0x1.21b706p-104f, 0.0f, 0.0f, 0x1.2ffd2cp-35f, 0.0f, 0x1.95499p-67f,
     0x1.40a45p-12f, 0x1.4eb006p-53f, 0x1.27cb4ep-93f, 0x1.53b026p-82f, 0.0f,
     0x1.0e0096p-55f, 0.0f, 0x1.382f9ep-4f, 0.0f, 0.0f, 0x1.c25404p-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e58ac4p-29f, 0x1.34db44p-73f, 0.0f, 0.0f, 0.0f, 0x1.b38acep-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8b5192p-51f, 0.0f, 0.0f, 0x1.b202f4p-91f, 0.0f, 0.0f,
     0x1.5c069cp-116f, 0x1.b74206p-114f, 0x1.58523p-49f, 0.0f, 0.0f, 0x1.b65968p-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.278776p-27f, 0x1.06ad1ap-95f, 0.0f, 0.0f,
     0x1.61c2f4p-76f, 0x1.28f2ccp-81f, 0.0f, 0.0f, 0x1.d11accp-53f, 0.0f,
     0x1.c25238p-57f, 0x1.55adfcp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.743406p-62f,
     0x1.3302d6p-15f, 0x1.5be916p-90f, 0x1.2e9092p-87f, 0.0f, 0x1.943c16p-35f,
     0x1.78986ap-75f, 0.0f, 0x1.962efap-4f, 0.0f, 0x1.94d32ap-83f, 0x1.f68f92p-77f,
     0x1.1a2bc8p-3f, 0x1.ead188p-24f, 0x1.70bce8p-30f, 0.0f, 0x1.bf4878p-33f,
     0x1.abf836p-124f, 0.0f, 0.0f, 0.0f, 0x1.37800ap-67f, 0x1.67d38ep-73f,
     0x1.4e0c58p-62f, 0x1.ca5b7ap-82f, 0.0f, 0.0f, 0.0f, 0x1.edac88p-126f,
     0x1.71bf42p-81f, 0.0f, 0.0f, 0x1.d70dc6p-31f, 0.0f, 0.0f, 0x1.b7c222p-125f,
     0x1.5b1acap-9f, 0.0f, 0.0f, 0x1.fe65b6p-118f, 0.0f, 0x1.10ccd6p-22f,
     0x1.2b78c6p-13f, 0x1.5b552ap-70f, 0x1.938d4ep-67f, 0.0f, 0x1.060c8ep-98f, 0.0f,
     0.0f, 0x1.97917ep-4f, 0x1.61af7ap-90f, 0x1.05f628p-85f, 0x1.977708p-3f,
     0x1.a6df0cp-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0869c8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.0a75b8p-9f, 0.0f, 0.0f, 0x1.6046cp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.daf4dep-34f, 0x1.4ba2f8p-122f, 0.0f, 0.0f, 0x1.0488eap-27f, 0.0f,
     0x1.8083a8p-53f, 0x1.a66f2ap-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00cbf8p-2f,
     0x1.a1ca96p-10f, 0x1.87677ap-56f, 0.0f, 0x1.ee6fcp-76f, 0.0f, 0.0f,
     0x1.b32ea2p-17f, 0x1.061cd2p-34f, 0x1.377f76p-85f, 0.0f, 0.0f, 0x1.5c316cp-29f,
     0x1.d2fdb2p-109f, 0.0f, 0x1.e8698p-81f, 0.0f, 0.0f, 0x1.4fc8d2p-18f, 0.0f, 0.0f,
     0.0f, 0x1.f290ccp-99f, 0x1.52d882p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5271a2p-96f,
     0x1.3e86aep-107f, 0.0f, 0x1.ea6056p-126f, 0x1p0f, 0.0f, 0.0f, 0x1.3caa8p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49bd58p-125f, 0x1.b5f606p-114f, 0.0f,
     0x1.b854a8p-31f, 0.0f, 0.0f, 0x1.afb43cp-94f, 0.0f, 0.0f, 0.0f, 0x1.0b1dfep-37f,
     0.0f, 0x1.ccd2b6p-37f, 0x1.2d040ap-50f, 0x1.3a662ap-20f, 0.0f, 0x1.946ba6p-87f,
     0x1.9b8cdap-92f, 0.0f, 0.0f, 0x1.b1835cp-105f, 0.0f, 0.0f, 0x1.c53a6ap-91f, 0.0f,
     0x1.56bf66p-44f, 0x1.eb2eb8p-82f, 0x1.5028bap-26f, 0.0f, 0.0f, 0.0f,
     0x1.4746e6p-114f, 0x1.cd7cdcp-34f, 0x1.db6246p-3f, 0x1.574c5cp-112f,
     0x1.75b978p-17f, 0.0f, 0x1.9bca8p-104f, 0x1.fff87cp-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9383c8p-119f, 0x1.6caf0ap-111f, 0x1.c708fap-74f, 0.0f, 0.0f, 0.0f,
     0x1.8bf06ep-60f, 0x1.a8af14p-31f, 0x1.066b1cp-122f, 0.0f, 0.0f, 0x1.a3017cp-75f,
     0x1.e3d78ep-51f, 0.0f, 0x1.f03e3p-101f, 0x1.a2c91cp-23f, 0x1.8679c6p-85f, 0.0f,
     0.0f, 0x1.acb1bap-35f, 0x1.fcd182p-81f, 0x1.91c344p-9f, 0.0f, 0.0f, 0.0f,
     0x1.e4eb0cp-116f, 0.0f, 0x1.b485bap-41f, 0x1.10dd4cp-63f, 0x1.02720cp-85f,
     0x1.5cca34p-50f, 0x1.386b2ep-1f, 0.0f, 0x1.27cd9cp-33f, 0x1.b3239p-90f,
     0x1.9fdd3ap-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a14db2p-109f, 0x1.9c5baap-51f,
     0x1.a6f76cp-41f, 0.0f, 0x1.74b77ap-92f, 0x1.e0ec04p-41f, 0.0f, 0.0f,
     0x1.dadbeap-71f, 0x1.855a28p-106f, 0.0f, 0.0f, 0x1.c34ecap-80f, 0x1.fc1d74p-60f,
     0.0f, 0x1.d5032ap-13f, 0.0f, 0x1.4e2abep-109f, 0x1.9a90c8p-21f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0120b4p-81f, 0x1.49d8e2p-94f, 0x1p0f, 0x1.5c1936p-13f, 0.0f,
     0x1.9cbc98p-18f, 0.0f, 0.0f, 0.0f, 0x1.b348a8p-61f, 0.0f, 0x1.bb338ep-5f, 0.0f,
     0.0f, 0.0f, 0x1.e887bcp-19f, 0x1.8a08e6p-14f, 0.0f, 0x1.c51bep-112f,
     0x1.5956e4p-5f, 0x1.e96b7p-15f, 0x1.f85874p-71f, 0x1.7fd3p-50f, 0.0f, 0.0f,
     0x1.4f28d2p-54f, 0.0f, 0x1.07f904p-58f, 0x1.46a002p-77f, 0x1.046486p-54f, 0.0f,
     0x1.0cca12p-52f, 0x1.5efc0ap-74f, 0.0f, 0x1.418a7ep-40f, 0.0f, 0.0f, 0.0f,
     0x1.39d87ep-97f, 0.0f, 0x1.ab2d94p-124f, 0.0f, 0.0f, 0x1.12f36ep-27f,
     0x1.b9c89ep-22f, 0.0f, 0x1.0dac42p-74f, 0x1.e50118p-116f, 0x1.a3da4ap-117f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e5ebe6p-89f, 0.0f, 0.0f, 0x1.76a62ap-69f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.94893ap-104f, 0.0f, 0.0f, 0x1.c99b62p-79f, 0.0f,
     0x1.ba5e18p-124f, 0x1.f87802p-21f, 0.0f, 0.0f, 0x1.ce3368p-20f, 0.0f, 0.0f,
     0x1.4966acp-35f, 0x1.26faap-125f, 0.0f, 0.0f, 0x1.48848ep-95f, 0x1.3f8616p-6f,
     0x1.210182p-76f, 0x1.5dd7p-63f, 0.0f, 0.0f, 0.0f, 0x1.c765e8p-115f,
     0x1.186374p-95f, 0x1.abde9cp-46f, 0.0f, 0.0f, 0x1.43d146p-14f, 0.0f, 0.0f, 0.0f,
     0x1.a63f86p-16f, 0.0f, 0x1.59a532p-116f, 0x1.7eef2cp-72f, 0.0f, 0x1.3b7f56p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.383218p-27f, 0x1.cdb3c4p-85f, 0.0f, 0.0f, 0.0f,
     0x1.351bb4p-43f, 0x1.67b4dep-84f, 0x1.421154p-112f, 0x1.30ca44p-25f, 0.0f, 0.0f,
     0x1.1a8b0ap-35f, 0x1.48dd38p-25f, 0x1.071ac6p-69f, 0x1.c32f1p-111f,
     0x1.10b34cp-56f, 0x1.f510c6p-84f, 0x1.24299p-97f, 0.0f, 0x1.27efdap-37f,
     0x1.ed6804p-6f, 0x1.8a02e4p-121f, 0x1.43e70cp-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a53a92p-100f,
     0x1.99ed6cp-77f, 0.0f, 0x1.cab148p-68f, 0.0f, 0.0f, 0.0f, 0x1.3412f6p-22f, 0.0f,
     0.0f, 0.0f, 0x1.65093ep-121f, 0x1.4d8e46p-120f, 0x1.e5d34p-74f, 0.0f, 0.0f,
     0x1.f00ddp-102f, 0.0f, 0x1.ac5e0ep-63f, 0x1.4b6d8p-14f, 0.0f, 0x1.428436p-77f,
     0.0f, 0x1.729b36p-107f, 0.0f, 0.0f, 0x1.21df76p-85f, 0.0f, 0.0f, 0.0f,
     0x1.eec7cep-5f, 0x1.10d23ep-61f, 0.0f, 0x1.50db24p-59f, 0.0f, 0.0f,
     0x1.b82a5ep-76f, 0x1.180d78p-108f, 0.0f, 0x1.b42db2p-54f, 0.0f, 0.0f,
     0x1.cce91ep-73f, 0.0f, 0.0f, 0.0f, 0x1.a052f4p-101f, 0.0f, 0x1.245e4p-14f,
     0x1.d980f6p-63f, 0.0f, 0.0f, 0x1.a090e6p-45f, 0.0f, 0x1.40a4fcp-71f, 0.0f, 0.0f,
     0.0f, 0x1.35fa0ep-101f, 0x1.ddf93p-9f, 0x1.d979bcp-19f, 0x1.ff1782p-55f, 0.0f,
     0x1.8b7356p-60f, 0x1.a16cfp-50f, 0.0f, 0x1.04601ep-68f, 0.0f, 0x1.f0339cp-103f,
     0x1.6bc9cap-113f, 0x1.5c9bep-89f, 0.0f, 0.0f, 0.0f, 0x1.b213ap-61f,
     0x1.f74f9p-44f, 0.0f, 0x1.0e428ap-123f, 0x1.45e9b8p-29f, 0.0f, 0x1.7bf322p-93f,
     0.0f, 0x1.333c02p-45f, 0x1.701cf2p-94f, 0x1.b2aff8p-56f, 0x1.a6731p-49f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ac97cp-105f, 0x1.da7306p-51f,
     0x1.970be6p-120f, 0x1.133e12p-57f, 0x1.10e974p-94f, 0x1.89f232p-48f,
     0x1.030b98p-71f, 0x1.c00b7p-54f, 0.0f, 0x1.88b8dap-59f, 0.0f, 0.0f,
     0x1.7f881ap-125f, 0.0f, 0x1.e3f3aap-102f, 0x1.d62bfcp-41f, 0x1.950848p-62f, 0.0f,
     0x1.3b485cp-5f, 0x1.0fbd62p-101f, 0.0f, 0.0f, 0x1.5587d6p-55f, 0x1.cb504cp-27f,
     0.0f, 0.0f, 0x1.1596aep-10f, 0.0f, 0x1.d15d48p-111f, 0x1.7dae28p-36f,
     0x1.97c03p-3f, 0x1.cdc152p-82f, 0.0f, 0x1.a1f8dcp-46f, 0x1.292758p-20f, 0.0f,
     0x1.e8208ep-26f, 0.0f, 0.0f, 0x1.5339ccp-62f, 0x1.090868p-33f, 0.0f, 0.0f, 0.0f,
     0x1.acb774p-125f, 0.0f, 0.0f, 0x1.8ec7dep-75f, 0.0f, 0.0f, 0x1.70b58cp-18f, 0.0f,
     0x1.2769e6p-58f, 0x1.e8caa8p-63f, 0.0f, 0x1.fc121ap-33f, 0x1.6c7ba2p-17f,
     0x1.9f732p-70f, 0.0f, 0x1.ddca66p-15f, 0.0f, 0x1.3818b4p-40f, 0.0f,
     0x1.cca94ep-68f, 0.0f, 0.0f, 0.0f, 0x1.e49b4cp-8f, 0.0f, 0.0f, 0x1.063dc2p-119f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25b758p-12f, 0x1.8182a8p-125f,
     0x1.67e1dp-10f, 0.0f, 0x1.502f26p-62f, 0x1.35a97p-1f, 0x1.8a28a4p-26f, 0.0f,
     0x1.e3672p-30f, 0.0f, 0.0f, 0x1.9e13e6p-117f, 0x1.9f7304p-9f, 0.0f, 0.0f,
     0x1.501ef2p-24f, 0.0f, 0.0f, 0.0f, 0x1.4a88fp-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.560c24p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f8d962p-1f, 0.0f,
     0.0f, 0.0f, 0x1.ce333ap-74f, 0x1.2622b2p-86f, 0.0f, 0.0f, 0x1.b52facp-77f,
     0x1.ed8e98p-4f, 0.0f, 0.0f, 0x1.13cafep-20f, 0.0f, 0.0f, 0.0f, 0x1.1864b8p-48f,
     0x1.a8fc96p-59f, 0x1.9d1f38p-10f, 0.0f, 0.0f, 0.0f, 0x1.97a18p-6f, 0.0f,
     0x1.c07ee8p-66f, 0x1.2ed1a8p-6f, 0x1.af9d84p-117f, 0.0f, 0x1.0b3d4ap-43f, 0.0f,
     0x1.bcc08ap-91f, 0x1.1505a6p-75f, 0.0f, 0x1.813982p-121f, 0x1.bd7c18p-14f, 0.0f,
     0x1.3488d4p-7f, 0.0f, 0.0f, 0x1.a60dfcp-35f, 0x1.da38b6p-60f, 0.0f,
     0x1.c2a934p-35f, 0x1.173cc6p-37f, 0x1.026f92p-108f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.94c2bcp-126f, 0.0f, 0.0f, 0.0f, 0x1.9e102cp-120f, 0.0f, 0.0f,
     0x1.de45c8p-71f, 0.0f, 0x1.b73b7ep-35f, 0x1.e96feap-48f, 0.0f, 0.0f,
     0x1.9c22bp-35f, 0.0f, 0.0f, 0.0f, 0x1.76fbd2p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.872b5ep-16f, 0.0f, 0x1.ae3418p-77f, 0.0f, 0x1.26eb06p-48f,
     0.0f, 0.0f, 0x1.9ef1fep-72f, 0.0f, 0.0f, 0.0f, 0x1.bfed3cp-6f, 0x1.3d1ffap-79f,
     0.0f, 0x1.12a7bap-92f, 0x1.640748p-38f, 0.0f, 0.0f, 0x1.692702p-75f,
     0x1.c5288cp-80f, 0.0f, 0x1.bc8594p-64f, 0.0f, 0.0f, 0x1.8fffd8p-23f,
     0x1.72d568p-94f, 0.0f, 0.0f, 0x1.3c85b6p-37f, 0x1.81e76p-30f, 0.0f,
     0x1.4832e2p-61f, 0x1.89207ep-115f, 0.0f, 0x1.61d348p-115f, 0.0f, 0x1.13f3eap-9f,
     0x1.452186p-1f, 0.0f, 0x1.f9b84ep-59f, 0x1.dc0dd2p-55f, 0x1.649d52p-18f,
     0x1.354dbap-55f, 0x1.ed4b74p-51f, 0.0f, 0x1.ce6326p-95f, 0.0f, 0x1.389a7cp-30f,
     0x1.7260b8p-55f, 0x1.2d65fep-112f, 0x1.c2b5cap-38f, 0.0f, 0x1.a2ff5ap-86f, 0.0f,
     0x1.989e76p-90f, 0x1.f73a6ap-76f, 0x1.e0d336p-106f, 0x1.ec1db8p-31f, 0.0f, 0.0f,
     0.0f, 0x1.2c9f1ap-122f, 0.0f, 0.0f, 0x1.5c82b2p-59f, 0x1.827712p-102f, 0.0f,
     0x1.bd634p-123f, 0x1.bf17acp-15f, 0x1.99cf3ep-66f, 0.0f, 0x1.9f69a4p-37f,
     0x1.00d99ep-12f, 0.0f, 0.0f, 0x1.c1fe56p-75f, 0.0f, 0.0f, 0x1.a4104p-56f, 0.0f,
     0x1.c8e91p-11f, 0.0f, 0x1.74ed34p-69f, 0x1.406d1ep-27f, 0.0f, 0x1.933bb2p-12f,
     0x1.dc8d3ep-29f, 0x1.a863a4p-36f, 0.0f, 0x1.19ecfcp-75f, 0.0f, 0.0f,
     0x1.0457aap-81f, 0x1.398b34p-35f, 0x1.557252p-54f, 0.0f, 0x1.2f6a52p-120f, 0.0f,
     0x1.22573ap-52f, 0.0f, 0x1.a06b04p-55f, 0x1.e9691cp-17f, 0x1.a5e82p-122f,
     0x1.b8c54ap-121f, 0x1.6e1d4p-42f, 0x1.6de51p-116f, 0x1.94c46ep-81f,
     0x1.a0f30ep-91f, 0.0f, 0.0f, 0.0f, 0x1.36d4b4p-79f, 0.0f, 0x1.64c2b8p-23f,
     0x1.9b5cf4p-18f, 0x1.c0d04ep-83f, 0x1.106e92p-84f, 0.0f, 0x1.85132cp-61f, 0.0f,
     0x1.d1d6ap-119f, 0.0f, 0x1.26de6cp-37f, 0.0f, 0x1.3055dep-122f, 0x1.018414p-14f,
     0x1.027d14p-76f, 0x1.a7e148p-111f, 0.0f, 0x1.7d0d12p-67f, 0.0f, 0x1.dae91cp-100f,
     0x1.abfec4p-51f, 0.0f, 0x1.0059f6p-31f, 0x1.f22be4p-11f, 0x1.ad11d6p-76f,
     0x1.dc469ep-35f, 0.0f, 0x1.33ff84p-101f, 0x1.8b7256p-38f, 0.0f, 0x1.8c133p-105f,
     0x1.49cbd6p-4f, 0x1.92b31p-82f, 0x1.0d2fbap-77f, 0x1.e504e2p-13f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.57f16p-19f, 0.0f, 0.0f, 0x1.9d3cbp-58f,
     0x1.7d9c62p-114f, 0.0f, 0.0f, 0x1.ef015p-1f, 0.0f, 0x1.1dae24p-87f, 0.0f,
     0x1.37c6bep-22f, 0.0f, 0x1.687cc6p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.851762p-44f,
     0x1.2fe372p-109f, 0.0f, 0.0f, 0x1.82b722p-91f, 0x1.035f6ap-81f, 0x1.78970ap-79f,
     0.0f, 0.0f, 0x1.a5e00ap-101f, 0x1.dfe794p-56f, 0.0f, 0.0f, 0x1.41a95ep-123f,
     0.0f, 0x1.d8e4eap-119f, 0x1.c556aep-97f, 0x1.1be14ep-40f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.656aacp-8f, 0x1.a83de6p-37f, 0x1.830624p-55f, 0x1.4f4e98p-60f, 0.0f,
     0x1.b965c8p-91f, 0.0f, 0x1.f31f84p-110f, 0x1.7587f6p-94f, 0x1.27754p-112f,
     0x1.5cda5cp-101f, 0x1.ffffc8p-117f, 0.0f, 0x1.acf2p-12f, 0.0f, 0x1.20c1cap-111f,
     0x1.675ff2p-19f, 0x1.4a9d08p-40f, 0.0f, 0x1.704dbep-107f, 0.0f, 0.0f,
     0x1.c9eca2p-13f, 0.0f, 0x1.6f4aeap-12f, 0.0f, 0x1.bf5d9p-91f, 0.0f,
     0x1.fb57d6p-46f, 0.0f, 0.0f, 0.0f, 0x1.09508ap-92f, 0x1.43071ep-22f, 0.0f,
     0x1.c5ef6p-54f, 0x1.73536cp-67f, 0x1.bdd746p-121f, 0x1.ad7cb2p-60f, 0.0f, 0.0f,
     0x1.216e12p-114f, 0x1.8df5cp-110f, 0x1.eefb7ap-71f, 0.0f, 0.0f, 0x1.d8f994p-73f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b0c732p-44f, 0.0f, 0x1.50266ap-21f,
     0x1.693af8p-4f, 0x1.5e4c46p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e293aap-99f,
     0x1.9cf77ap-46f, 0x1.d82e08p-65f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_float4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_float4_t local_acc;
        int32_t i;
        ml_float4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_float4_t tmp0;
            ml_float4_t tmp1;
            ml_float4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_expf4_u10avx2128(tmp0);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_expf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
