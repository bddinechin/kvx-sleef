/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2f8_u35kvx.c --function Sleef_log2f8_u35kvx \
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
     0.0f, 0x1.9e07p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aa0174p-67f, 0.0f, 0x1.e67eccp-15f, 0.0f, 0.0f, 0.0f, 0x1.e76b0ap-124f,
     0x1.033144p-106f, 0x1.824aacp-20f, 0x1.ce97dcp-58f, 0.0f, 0x1.23ae7p-60f, 0.0f,
     0.0f, 0x1.b031bcp-126f, 0x1.3a8a92p-50f, 0.0f, 0.0f, 0x1.69e47ap-35f, 0.0f,
     0x1.6c056p-76f, 0x1.add7c2p-49f, 0x1.79ce94p-90f, 0.0f, 0x1.a1d3f8p-60f, 0.0f,
     0x1.30e892p-30f, 0.0f, 0x1.120702p-58f, 0x1.156356p-101f, 0x1.d3395ep-44f,
     0x1.6c695cp-108f, 0x1.7a1f8ep-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a359fap-31f,
     0x1.d4dc44p-21f, 0x1.e0effep-49f, 0x1.67d6aap-95f, 0.0f, 0x1.3b4cc4p-35f,
     0x1.1d82c8p-88f, 0x1.5a1c36p-66f, 0x1.0c2fdep-101f, 0.0f, 0x1.35bd4ap-5f, 0.0f,
     0x1.c75616p-29f, 0x1.03d53ap-25f, 0x1.fd8206p-84f, 0.0f, 0x1.a6712ap-63f,
     0x1.f8f41p-39f, 0x1.fe4378p-101f, 0.0f, 0x1.30aa6ap-5f, 0x1.d281b8p-111f, 0.0f,
     0x1.a9ca5p-24f, 0.0f, 0.0f, 0x1.f95b7cp-18f, 0.0f, 0.0f, 0.0f, 0x1.8d8398p-80f,
     0.0f, 0.0f, 0.0f, 0x1.6fcd54p-126f, 0.0f, 0x1.4aef7cp-77f, 0.0f, 0x1.5892b2p-31f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2b965ap-15f, 0.0f, 0x1.d1b26ep-65f, 0x1.60e418p-107f,
     0x1.59b1d8p-53f, 0.0f, 0x1.392dc6p-41f, 0x1.82c28cp-94f, 0.0f, 0x1.f2a054p-110f,
     0.0f, 0.0f, 0x1.0714c8p-67f, 0x1.ca0d8cp-76f, 0x1.41e044p-109f, 0x1.343e3ep-111f,
     0x1.c1e524p-9f, 0.0f, 0.0f, 0.0f, 0x1.80cbbap-3f, 0x1.48026p-93f,
     0x1.67eb88p-75f, 0x1.eed74cp-6f, 0x1.6494e6p-121f, 0x1.0fd67ap-122f,
     0x1.8d3eap-107f, 0x1.50f0c4p-64f, 0.0f, 0x1.9d120cp-61f, 0x1.b7c7b6p-49f, 0.0f,
     0.0f, 0x1.297a8cp-83f, 0.0f, 0x1.7e75dep-96f, 0.0f, 0.0f, 0x1.b5d922p-54f,
     0x1.c7185cp-92f, 0.0f, 0x1.f40be4p-101f, 0.0f, 0.0f, 0x1.6bd1eap-68f,
     0x1.8d664cp-85f, 0.0f, 0.0f, 0.0f, 0x1.a338ap-20f, 0x1.e757ep-112f,
     0x1.88760ep-97f, 0x1.b6eb9ep-41f, 0.0f, 0x1.bbc588p-63f, 0x1.f399ap-124f,
     0x1.34803ep-106f, 0.0f, 0x1.df8638p-82f, 0.0f, 0.0f, 0x1.dd1172p-124f,
     0x1.0412bap-9f, 0.0f, 0.0f, 0x1.2aa9ap-70f, 0x1.32960ep-33f, 0x1.2e59ccp-89f,
     0.0f, 0x1.43ee9ep-108f, 0.0f, 0.0f, 0.0f, 0x1.dc0284p-47f, 0.0f, 0.0f, 0.0f,
     0x1.782d24p-120f, 0.0f, 0x1.a0f498p-18f, 0x1.7c4268p-40f, 0.0f, 0x1.a87b2ep-85f,
     0x1.04d2f6p-66f, 0.0f, 0x1.563b0cp-95f, 0x1.1ed66ep-72f, 0x1.7471dp-65f,
     0x1.ae45aep-7f, 0x1.c56276p-84f, 0.0f, 0x1.3518a8p-114f, 0x1.9df7e8p-62f, 0.0f,
     0x1.8b691ap-22f, 0.0f, 0.0f, 0x1.e175bp-66f, 0x1.83059p-26f, 0x1.280a48p-54f,
     0x1.b17f68p-104f, 0.0f, 0x1.efdf44p-77f, 0x1.f677dcp-112f, 0x1.593b1cp-29f,
     0x1.607174p-80f, 0.0f, 0x1.468ba8p-18f, 0x1.23a38cp-44f, 0x1.02b39ap-107f, 0.0f,
     0.0f, 0x1.0f7d44p-17f, 0.0f, 0.0f, 0x1.a4ddd4p-92f, 0x1.b31684p-65f,
     0x1.cb7c02p-21f, 0.0f, 0x1.ca98bp-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.05df16p-79f, 0x1.45e40ep-125f, 0.0f, 0x1.1f344cp-101f, 0x1.6ce35ep-1f,
     0x1.60c302p-32f, 0x1.2b3884p-14f, 0x1.1d4f9ap-44f, 0.0f, 0.0f, 0x1.3fd52ep-24f,
     0.0f, 0.0f, 0x1.b0841ep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2d811cp-2f,
     0x1.8bf31p-11f, 0x1.ae9182p-39f, 0x1.9de92ep-5f, 0.0f, 0.0f, 0.0f,
     0x1.57043cp-31f, 0.0f, 0x1.d87c96p-9f, 0x1.ee9f4cp-18f, 0x1.d52aap-62f,
     0x1.1b5bc4p-29f, 0.0f, 0.0f, 0x1.153b56p-56f, 0.0f, 0.0f, 0x1.c97e86p-26f,
     0x1.cffbcep-126f, 0.0f, 0x1.678908p-10f, 0.0f, 0x1.45f0dp-76f, 0x1.707d4ap-5f,
     0x1.da23e6p-93f, 0x1.2a4384p-44f, 0x1.0c4ae2p-17f, 0x1.cfef2ep-3f, 0.0f,
     0x1.149b24p-60f, 0x1.514538p-112f, 0x1.0c0f2p-11f, 0x1.b3a8e8p-111f,
     0x1.e9abbp-108f, 0x1.ae196ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ee7e2p-84f,
     0.0f, 0x1.a2853ap-27f, 0.0f, 0.0f, 0x1.2ec60ep-54f, 0.0f, 0x1.689db4p-38f,
     0x1.f0683cp-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.95a114p-80f, 0x1.c884d8p-9f,
     0x1.6f19dep-91f, 0x1.766c82p-28f, 0x1.875136p-89f, 0.0f, 0.0f, 0.0f,
     0x1.81725ap-38f, 0x1.f1a6bcp-67f, 0x1.e9956p-55f, 0.0f, 0x1.c7aa0ap-35f,
     0x1.da5312p-111f, 0x1.48f5f2p-4f, 0.0f, 0.0f, 0x1.620f2cp-104f, 0x1.316f7p-18f,
     0x1.4a8b8ap-107f, 0x1.ca18eap-124f, 0.0f, 0x1.04672ap-17f, 0.0f, 0x1.b8f13ap-57f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.df75d2p-68f, 0.0f, 0x1.483b04p-125f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f0ac0cp-96f, 0x1.8fdccp-51f, 0.0f, 0.0f, 0x1.ea6f18p-99f, 0.0f,
     0.0f, 0x1.9c924p-51f, 0x1.91a708p-47f, 0.0f, 0.0f, 0x1.aff96p-56f,
     0x1.51cc36p-89f, 0.0f, 0x1.e6a838p-93f, 0x1.8f29d4p-95f, 0.0f, 0x1.ed8e2p-48f,
     0.0f, 0.0f, 0x1.ec5708p-56f, 0.0f, 0x1.29ee68p-15f, 0x1.e36cfcp-45f,
     0x1.84c982p-80f, 0.0f, 0.0f, 0x1.6eba7ap-101f, 0x1.bb55f8p-56f, 0.0f, 0.0f, 0.0f,
     0x1.d51cp-55f, 0x1.4d8fdep-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6616a2p-98f, 0.0f,
     0x1.9aeefep-24f, 0.0f, 0x1.002506p-11f, 0.0f, 0.0f, 0x1.911be6p-26f, 0.0f, 0.0f,
     0.0f, 0x1.c0e60ep-116f, 0.0f, 0x1.11ae42p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8285aep-50f, 0x1.e60a86p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d7c87ep-68f, 0x1.fed0bep-122f, 0.0f, 0.0f, 0x1.3d64b6p-84f, 0.0f, 0.0f, 0.0f,
     0x1.05f044p-23f, 0x1.55dec4p-125f, 0x1.af66ecp-108f, 0.0f, 0.0f, 0x1.b17f9ep-13f,
     0.0f, 0x1.d41cb6p-22f, 0.0f, 0x1.e22018p-75f, 0x1.7cfc02p-80f, 0.0f,
     0x1.cf5452p-87f, 0x1.631646p-106f, 0x1.fc1a7cp-21f, 0.0f, 0x1.755d52p-107f, 0.0f,
     0x1.6d5c64p-118f, 0x1.2f83fap-89f, 0.0f, 0.0f, 0.0f, 0x1.2a38fep-69f,
     0x1.32621ep-77f, 0x1.3f94ccp-112f, 0x1.45f6cep-50f, 0.0f, 0x1.bff56p-32f,
     0x1.82150cp-101f, 0x1.b5e97p-15f, 0.0f, 0x1.1ed7c2p-118f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.49be0ap-107f, 0.0f, 0.0f, 0x1.1cc1f2p-6f, 0x1.4a7e6ap-100f,
     0x1.8430f4p-52f, 0x1.4eb73p-52f, 0.0f, 0x1.d6ad0cp-110f, 0.0f, 0x1.49dd0ep-12f,
     0x1.4a43cap-72f, 0x1.4bcf6ep-106f, 0.0f, 0x1.b9d302p-34f, 0x1.fa3526p-115f, 0.0f,
     0x1.5dd352p-87f, 0x1.64ee82p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5ca6f8p-31f, 0.0f, 0.0f, 0.0f, 0x1.5a46a4p-110f, 0.0f, 0x1.2b1c4p-102f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfb592p-116f, 0.0f, 0x1.969f2ap-90f,
     0x1.a130dp-33f, 0.0f, 0x1.480162p-115f, 0x1.bfcedp-31f, 0x1.867338p-119f,
     0x1.31f6dep-125f, 0.0f, 0x1.53eb86p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.f4dfdap-78f, 0x1.8a53fap-21f, 0x1.5bd8e2p-107f, 0.0f, 0.0f,
     0.0f, 0x1.9a194p-46f, 0.0f, 0x1.4c3816p-33f, 0x1.66245ap-65f, 0.0f,
     0x1.ff5a2ap-70f, 0x1.375076p-46f, 0.0f, 0x1.89321p-25f, 0x1.6ee792p-18f, 0.0f,
     0x1.e2c3d8p-75f, 0x1.4fa0c2p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.984d2ap-24f,
     0.0f, 0x1.8979fcp-81f, 0x1.06e0d4p-45f, 0x1.414eecp-55f, 0x1.9195b2p-87f,
     0x1.1092acp-5f, 0.0f, 0.0f, 0.0f, 0x1.6da3a4p-24f, 0.0f, 0x1.8cd238p-41f,
     0x1.776caap-65f, 0x1.9df11ap-122f, 0x1.9b5356p-13f, 0.0f, 0x1.dfc404p-78f,
     0x1.b5a524p-3f, 0x1.26473cp-118f, 0x1.499604p-19f, 0x1.37c05cp-63f, 0x1p0f,
     0x1.cfabdp-75f, 0.0f, 0.0f, 0.0f, 0x1.e4a4bp-60f, 0.0f, 0.0f, 0.0f,
     0x1.db37dp-43f, 0x1.473412p-116f, 0.0f, 0x1.10bbb6p-50f, 0x1.3cc8dap-46f, 0.0f,
     0.0f, 0x1.8a3328p-36f, 0x1.9c4432p-94f, 0.0f, 0.0f, 0x1.ee5636p-37f,
     0x1.5240c6p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7da34cp-82f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7863fp-112f, 0.0f, 0x1.834ee2p-101f,
     0x1.3a4916p-42f, 0.0f, 0x1.d0403ap-21f, 0x1.0939a8p-116f, 0.0f, 0.0f,
     0x1.918202p-19f, 0x1.c4371cp-61f, 0.0f, 0x1.ab618cp-31f, 0x1.33294ap-7f,
     0x1.391912p-58f, 0x1.bf2ab4p-79f, 0x1.dc40b8p-76f, 0.0f, 0.0f, 0x1.cb1a62p-7f,
     0.0f, 0x1.fadf82p-81f, 0x1.9b62b8p-43f, 0.0f, 0x1.c2b3ap-58f, 0.0f,
     0x1.93bba6p-116f, 0.0f, 0x1.d673aap-78f, 0x1.165528p-83f, 0.0f, 0.0f,
     0x1.cafb42p-83f, 0x1.cfceb8p-23f, 0x1.e206bap-13f, 0.0f, 0x1.303144p-27f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79fa0cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.9edd7ap-104f, 0.0f, 0x1.4d7d88p-37f, 0x1.edf17ep-106f, 0.0f,
     0x1.df4328p-112f, 0x1.60755ap-14f, 0x1p0f, 0x1.036d92p-37f, 0x1.72c33p-93f, 0.0f,
     0.0f, 0.0f, 0x1.54cfccp-34f, 0x1.d950cp-87f, 0x1.cada7cp-31f, 0x1.84e974p-62f,
     0x1.21510ap-101f, 0x1.4295f6p-89f, 0x1.50d0bap-21f, 0x1.f288p-25f,
     0x1.bc6b1cp-105f, 0x1.26212ep-61f, 0x1.4f0d9p-117f, 0x1.15f6ep-7f,
     0x1.c4ce68p-68f, 0x1.ebc3c4p-77f, 0.0f, 0x1.1a0e82p-57f, 0.0f, 0x1.503ad8p-35f,
     0.0f, 0x1.da44a6p-108f, 0.0f, 0.0f, 0x1.9578b4p-108f, 0x1.45183cp-63f, 0.0f,
     0x1.46f392p-116f, 0.0f, 0x1.66175cp-2f, 0.0f, 0x1.887604p-89f, 0x1.592c4p-79f,
     0x1.ee98f6p-118f, 0x1.7c27bap-21f, 0x1.cac60cp-4f, 0.0f, 0.0f, 0.0f,
     0x1.07544ap-70f, 0.0f, 0.0f, 0x1.bb5de8p-39f, 0x1.71e316p-42f, 0.0f,
     0x1.e3d6e8p-94f, 0.0f, 0.0f, 0x1.3b9436p-28f, 0.0f, 0x1.c3a7a6p-66f,
     0x1.aba224p-14f, 0x1.4ac1fep-8f, 0x1.4f5f86p-83f, 0.0f, 0.0f, 0.0f,
     0x1.e2bc94p-1f, 0.0f, 0.0f, 0x1.310bb2p-40f, 0x1.db37cp-8f, 0.0f, 0.0f, 0.0f,
     0x1.5b1c2p-86f, 0x1p0f, 0.0f, 0x1.cfe49cp-23f, 0.0f, 0.0f, 0x1.f56ff2p-116f,
     0.0f, 0x1.bacb3ap-84f, 0x1.5e2a7ep-110f, 0.0f, 0x1.9fd83ep-46f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.53b532p-91f, 0.0f, 0.0f, 0x1.8c53dep-111f,
     0x1.93869p-102f, 0x1.259f94p-123f, 0x1.c373e8p-6f, 0x1.0af964p-69f, 0.0f, 0.0f,
     0.0f, 0x1.c4f97cp-98f, 0x1.d1e81ep-116f, 0.0f, 0.0f, 0.0f, 0x1.3da6ecp-14f, 0.0f,
     0x1.6b6a44p-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8ec834p-79f, 0.0f, 0.0f,
     0x1.a665cap-113f, 0.0f, 0x1.86c72ap-101f, 0x1.f8720cp-6f, 0.0f, 0.0f,
     0x1.7e1112p-48f, 0x1.922c8p-71f, 0x1.db611ap-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4bcdd2p-114f, 0x1.bf143ep-27f, 0.0f, 0.0f, 0x1.23d6cp-21f, 0.0f,
     0x1.9b7e2ap-34f, 0.0f, 0.0f, 0x1.c6991p-42f, 0.0f, 0.0f, 0.0f, 0x1.85d108p-120f,
     0x1.816374p-4f, 0.0f, 0.0f, 0.0f, 0x1.f26f06p-38f, 0.0f, 0.0f, 0.0f,
     0x1.644a66p-45f, 0x1.893edp-123f, 0x1.44a626p-66f, 0.0f, 0.0f, 0.0f,
     0x1.cf1c18p-47f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.90944ep-26f, 0x1.788f58p-44f,
     0x1.505026p-80f, 0x1.4b9078p-124f, 0x1.d9d7b8p-39f, 0.0f, 0x1.201beep-55f,
     0x1.3ee1cp-75f, 0.0f, 0.0f, 0x1.29b49p-44f, 0x1.911c46p-67f, 0x1.b01974p-11f,
     0x1.5d903ep-30f, 0x1.ad163p-108f, 0.0f, 0x1.b521e8p-53f, 0.0f, 0.0f, 0.0f,
     0x1.2f621ep-96f, 0x1.38f53p-30f, 0.0f, 0x1.3cc48ap-9f, 0x1.0d2888p-104f, 0.0f,
     0.0f, 0x1.3b9404p-19f, 0x1.141e04p-108f, 0.0f, 0x1.36a1fep-97f, 0.0f, 0.0f, 0.0f,
     0x1.4d49b6p-17f, 0.0f, 0x1.fd1f4p-66f, 0x1.f2fedep-46f, 0x1.94817p-2f, 0.0f,
     0x1.c83b8ap-39f, 0.0f, 0.0f, 0x1.d8990ep-47f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3c7598p-23f, 0x1.b40b94p-104f, 0.0f, 0x1.5051cep-45f, 0.0f, 0x1.da57e2p-29f,
     0x1.8eaeaep-98f, 0x1.324faap-120f, 0x1.6d1b6p-61f, 0.0f, 0x1.789fc4p-6f, 0.0f,
     0x1.85f2c6p-83f, 0x1.1b48f2p-59f, 0x1.5daeap-33f, 0x1.ea7136p-77f,
     0x1.df53fap-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.88b4fep-116f, 0x1.183804p-46f,
     0x1.9eb7bap-4f, 0x1.453caep-8f, 0.0f, 0.0f, 0.0f, 0x1.7b9136p-124f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.84abc8p-106f, 0x1.c44d9ap-125f, 0.0f, 0.0f, 0x1.20a804p-37f,
     0x1.ffa7aep-87f, 0x1.7442ccp-100f, 0.0f, 0x1.dc4ffcp-16f, 0x1.b15c66p-80f, 0.0f,
     0x1.e5d58cp-27f, 0.0f, 0.0f, 0x1.3c53dcp-92f, 0x1.6fa564p-113f, 0x1.b2d1c2p-27f,
     0.0f, 0.0f, 0x1.dee994p-5f, 0.0f, 0x1.f8712cp-9f, 0.0f, 0.0f, 0x1.bb0dfp-52f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d8d24p-78f, 0.0f, 0x1.0d12fcp-105f, 0.0f,
     0.0f, 0x1.6e2938p-115f, 0x1.3d3db4p-88f, 0x1.79960ep-43f, 0x1.b3edbep-58f,
     0x1.49d6f4p-77f, 0x1.a6f216p-13f, 0.0f, 0.0f, 0x1.2f585p-70f, 0x1.1df2b8p-28f,
     0x1.6738c8p-6f, 0.0f, 0x1.8c047p-1f, 0x1.32a84cp-87f, 0.0f, 0.0f, 0.0f,
     0x1.035dc2p-69f, 0x1.bafe1cp-35f, 0x1.63bb38p-18f, 0.0f, 0x1.6a5ab8p-55f,
     0x1.dcc9fp-92f, 0.0f, 0x1.9b175p-124f, 0x1.7c8b98p-62f, 0x1.ad6e36p-95f,
     0x1.5329aap-41f, 0.0f, 0.0f, 0.0f, 0x1.0387e2p-124f, 0.0f, 0.0f, 0x1.54dc3cp-41f,
     0x1.77641cp-108f, 0x1.fde6b4p-39f, 0.0f, 0.0f, 0x1.bf158ap-24f, 0x1.2a3506p-36f,
     0x1.414d4p-69f, 0.0f, 0x1.6f62b4p-33f, 0.0f, 0x1.d81822p-38f, 0x1.25d424p-21f,
     0.0f, 0x1.11ed6p-63f, 0x1.a69d18p-20f, 0x1.946d32p-28f, 0x1.a0a658p-73f, 0.0f,
     0.0f, 0.0f, 0x1.8d8b08p-25f, 0x1.2c0d7cp-119f, 0x1.26c1ep-74f, 0x1.44bccep-39f,
     0.0f, 0x1.fa7a28p-111f, 0.0f, 0.0f, 0x1.630dacp-66f, 0x1.0d3858p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e10b8p-10f, 0x1.55f4ap-81f, 0.0f,
     0x1.0a19fcp-76f, 0.0f, 0x1.ab5666p-125f, 0x1.1f5764p-92f, 0x1.a30192p-60f, 0.0f,
     0.0f, 0.0f, 0x1.caf45ap-44f, 0x1.36b804p-8f, 0x1.76491ap-105f, 0x1.56fbcap-34f,
     0.0f, 0x1.9a61bp-1f, 0.0f, 0x1.0f99d2p-57f, 0.0f, 0x1.246bbcp-123f,
     0x1.0956bap-25f, 0x1.270818p-81f
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
            tmp1 = Sleef_log2f8_u35kvx(tmp0);
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
    printf("Sleef_log2f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_log2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
