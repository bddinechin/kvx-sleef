/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2f8_u35kvx.c --function Sleef_exp2f8_u35kvx \
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
     0x1.fe5e76p-99f, 0x1.94ff28p-47f, 0.0f, 0x1.33fcfep-93f, 0x1p0f,
     0x1.73dbe6p-94f, 0x1.09a074p-108f, 0.0f, 0x1.b3159ep-100f, 0x1.d68dacp-82f,
     0x1.1614cap-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bde9bcp-53f, 0.0f, 0.0f,
     0.0f, 0x1.fb2af2p-49f, 0x1.d017fep-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ddbfc2p-62f,
     0.0f, 0x1.ff9efp-52f, 0x1.ca0314p-27f, 0x1.6ca4d6p-37f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.10ea66p-3f, 0x1.079f4ep-60f, 0x1.20c764p-72f, 0x1.4ac534p-78f, 0.0f,
     0.0f, 0x1p0f, 0x1.bf4b02p-29f, 0.0f, 0.0f, 0x1.9494dcp-113f, 0.0f,
     0x1.d342dep-41f, 0x1.cdc10ap-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b37fap-84f,
     0x1.77028cp-71f, 0.0f, 0x1.e1c326p-2f, 0.0f, 0.0f, 0x1.b996cep-61f, 0.0f,
     0x1.45d1a6p-99f, 0.0f, 0x1.82b448p-124f, 0x1.551498p-66f, 0.0f, 0.0f, 0.0f,
     0x1.c0373cp-75f, 0x1.44ccc6p-35f, 0x1.34401ep-93f, 0x1.4c4792p-87f, 0.0f,
     0x1.aa9ea6p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e790a4p-68f,
     0x1.87418cp-108f, 0.0f, 0x1.b5eed4p-73f, 0x1.12df1p-91f, 0x1.b9a328p-70f,
     0x1.dbb1d8p-31f, 0x1.55f6bp-104f, 0x1.7439f2p-97f, 0x1.95495ap-120f,
     0x1.3ecb4p-16f, 0x1.dda954p-86f, 0x1.e0f9dap-46f, 0x1.a0ef8ep-50f,
     0x1.c7cecap-101f, 0x1.235bbp-101f, 0x1.f8acbep-8f, 0.0f, 0x1.08d14cp-51f,
     0x1.38ecccp-114f, 0x1.9fef52p-122f, 0.0f, 0.0f, 0.0f, 0x1.501f66p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f85d6p-39f, 0x1.99d28ep-50f,
     0x1.906134p-31f, 0x1.924a68p-10f, 0.0f, 0.0f, 0x1.707c3ap-67f, 0.0f, 0.0f, 0.0f,
     0x1.9853c8p-92f, 0x1.67f9a2p-36f, 0x1.f0fe9p-65f, 0x1.cba112p-78f,
     0x1.f340fep-44f, 0x1.ca9c66p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13fdeep-37f, 0x1.c0de8cp-62f, 0x1.71d4d6p-114f, 0x1.777a74p-82f,
     0x1.0922e4p-105f, 0x1.a9321cp-72f, 0x1.c14306p-3f, 0x1.737b04p-72f,
     0x1.2902c2p-98f, 0.0f, 0.0f, 0x1.76eb46p-82f, 0.0f, 0x1.f5f5ep-8f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d0dd86p-12f, 0x1.6f22b2p-36f, 0x1.26c4aep-40f, 0x1.c4d11cp-11f,
     0x1.bc173cp-84f, 0x1.9b8ap-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74086ep-53f, 0.0f,
     0x1.7878fap-87f, 0.0f, 0x1.387fd2p-86f, 0x1.b34996p-41f, 0x1.dce148p-6f, 0.0f,
     0.0f, 0.0f, 0x1.05de16p-122f, 0.0f, 0x1.176c08p-35f, 0.0f, 0x1.905638p-117f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.6225dp-74f, 0.0f, 0x1.23cc78p-112f, 0.0f, 0.0f,
     0x1.93d15ap-9f, 0x1.5bbbeap-89f, 0.0f, 0x1.2fb8p-93f, 0x1.56b49ap-11f,
     0x1.d7b89cp-29f, 0.0f, 0x1.9b4f9ap-110f, 0x1.437f14p-54f, 0.0f, 0x1.75664ep-5f,
     0x1.202da8p-65f, 0.0f, 0x1.e35d86p-77f, 0.0f, 0x1.44af64p-70f, 0x1.d1ced4p-35f,
     0x1.2e3b2ap-29f, 0.0f, 0x1.d19506p-67f, 0.0f, 0x1.6c32fcp-20f, 0x1.d7f628p-31f,
     0.0f, 0.0f, 0x1.e63a94p-62f, 0.0f, 0x1.db776cp-24f, 0x1.4a6666p-76f,
     0x1.ffc35ap-118f, 0x1.d9c96p-110f, 0.0f, 0x1.2ac596p-105f, 0x1.7bff76p-87f, 0.0f,
     0.0f, 0.0f, 0x1.7d5ac4p-79f, 0.0f, 0x1.95ddeap-39f, 0.0f, 0x1.83b194p-57f,
     0x1.9c485ap-13f, 0.0f, 0x1.9cfcd4p-45f, 0.0f, 0.0f, 0x1.29bbaap-96f, 0.0f, 0.0f,
     0x1.e355bap-110f, 0.0f, 0.0f, 0.0f, 0x1.5aa428p-19f, 0x1.486328p-104f,
     0x1.0c3b6cp-1f, 0.0f, 0x1.3cb4bap-103f, 0x1.b6eb48p-18f, 0.0f, 0.0f, 0.0f,
     0x1.496f32p-89f, 0.0f, 0x1.ed6d12p-79f, 0.0f, 0x1.858208p-46f, 0x1.3ce542p-72f,
     0.0f, 0x1.fddf2cp-15f, 0.0f, 0x1.06d426p-113f, 0x1.a3594ep-27f, 0x1.2c6b4ep-26f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b70adp-9f, 0.0f, 0x1.2aaeecp-28f, 0x1.4fac1ap-120f,
     0x1.82bd3p-47f, 0.0f, 0x1.af0dap-64f, 0.0f, 0x1.a4ecf4p-110f, 0.0f,
     0x1.20a0bcp-16f, 0.0f, 0x1.9b0504p-37f, 0.0f, 0x1.ff3394p-52f, 0x1.6d6456p-22f,
     0x1.c5c7bcp-2f, 0x1.529fep-44f, 0.0f, 0x1.bd8b38p-52f, 0x1.01408ep-112f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.565522p-121f, 0x1.88adfcp-10f, 0.0f, 0.0f, 0.0f,
     0x1.26a782p-104f, 0x1.f31326p-67f, 0.0f, 0x1.3ae75ep-1f, 0.0f, 0x1.6f6f42p-67f,
     0.0f, 0x1.75b316p-90f, 0.0f, 0x1.d58ffp-84f, 0.0f, 0x1.ad573ep-55f,
     0x1.8cad6ep-23f, 0.0f, 0x1.9b40a4p-99f, 0x1.fdfc32p-50f, 0.0f, 0x1.091dbp-72f,
     0.0f, 0.0f, 0x1.339adp-110f, 0x1.f355ccp-105f, 0x1.69ce92p-24f, 0x1.996602p-86f,
     0x1.d01542p-76f, 0x1.8a7d1cp-92f, 0.0f, 0x1.2eafdp-45f, 0.0f, 0x1.b89202p-101f,
     0x1.0e0288p-65f, 0x1.e42c8p-80f, 0x1.379b6ap-70f, 0.0f, 0x1.a064b2p-87f, 0.0f,
     0x1.a14b38p-80f, 0.0f, 0.0f, 0x1.e5b932p-88f, 0x1.6c16f2p-107f, 0x1.fb59d4p-111f,
     0x1.32c90ep-39f, 0x1.ea08acp-8f, 0.0f, 0x1.4583b2p-50f, 0x1.f6870cp-15f,
     0x1.d0f0c4p-105f, 0x1.ef7192p-40f, 0x1.8f389p-115f, 0.0f, 0x1.3ea084p-3f,
     0x1.4b5fdp-49f, 0x1.d25eb6p-4f, 0.0f, 0.0f, 0x1.a0b65ap-50f, 0.0f, 0.0f,
     0x1.e877ecp-53f, 0.0f, 0.0f, 0x1.25c80ap-67f, 0.0f, 0x1.663f86p-53f,
     0x1.e7186ep-122f, 0.0f, 0x1.071376p-104f, 0x1.7fd432p-48f, 0x1.f387d6p-83f,
     0x1.4b41f4p-98f, 0.0f, 0.0f, 0x1.d7e0acp-32f, 0.0f, 0.0f, 0.0f, 0x1.a681cap-49f,
     0x1.7f8ca8p-76f, 0x1.8afe62p-62f, 0x1.71a24ap-49f, 0x1.2b87fp-4f,
     0x1.cf5af2p-31f, 0x1.6bf45ep-109f, 0x1.2c419ep-7f, 0.0f, 0.0f, 0x1.2068c8p-63f,
     0.0f, 0.0f, 0x1.3b6952p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.65f8bap-45f,
     0x1.0448a2p-77f, 0x1.4eef22p-35f, 0.0f, 0x1.c6cf08p-64f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75d35ep-35f, 0x1.9fca14p-28f,
     0x1.3790eep-99f, 0x1.ff7d94p-41f, 0x1.738dacp-37f, 0.0f, 0x1.9c494cp-45f,
     0x1.73c9e6p-54f, 0x1.4a9f0ep-57f, 0.0f, 0x1.c0acfcp-64f, 0.0f, 0.0f, 0.0f,
     0x1.ef993ep-50f, 0.0f, 0.0f, 0x1.ebbe3cp-76f, 0.0f, 0x1.d1f74p-60f, 0.0f, 0.0f,
     0x1.f2414ap-11f, 0.0f, 0x1.9424fcp-24f, 0.0f, 0x1.cff414p-113f, 0.0f,
     0x1.c12354p-66f, 0.0f, 0.0f, 0.0f, 0x1.d1b092p-40f, 0x1.1f2156p-78f,
     0x1.986108p-95f, 0x1.a60804p-104f, 0x1.009d34p-63f, 0x1.abacdep-106f, 0.0f,
     0x1.c7ee54p-28f, 0.0f, 0.0f, 0x1.5bdb7cp-50f, 0x1.272ef4p-84f, 0.0f,
     0x1.ebc644p-99f, 0x1.27b5fep-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c305ap-8f,
     0x1.25458ap-125f, 0x1.f9b674p-116f, 0.0f, 0x1.173de6p-17f, 0x1.2ca68cp-119f,
     0.0f, 0.0f, 0x1.6527eap-123f, 0.0f, 0.0f, 0x1.1e8af4p-27f, 0.0f,
     0x1.fe40dep-113f, 0.0f, 0x1.18b5e6p-51f, 0x1.288484p-38f, 0.0f, 0x1.a3e01ep-62f,
     0x1.bd15ecp-124f, 0.0f, 0x1.d8458cp-82f, 0.0f, 0x1.19ef64p-123f, 0x1.032552p-53f,
     0.0f, 0.0f, 0x1.f600e4p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.127c86p-81f, 0.0f,
     0x1.6028fcp-36f, 0.0f, 0.0f, 0x1.95102cp-91f, 0.0f, 0.0f, 0x1.a5e234p-23f,
     0x1p0f, 0x1.23545ap-75f, 0.0f, 0.0f, 0.0f, 0x1.a3ea1ep-17f, 0x1.2885e4p-21f,
     0.0f, 0.0f, 0.0f, 0x1.d489b6p-50f, 0x1.ed9dc4p-117f, 0x1.787a88p-51f, 0.0f, 0.0f,
     0.0f, 0x1.808598p-46f, 0x1.2be9d8p-35f, 0x1.5462a4p-91f, 0x1.ceeb36p-99f, 0.0f,
     0.0f, 0.0f, 0x1.7b35eep-7f, 0x1.127264p-17f, 0.0f, 0x1.e81a9cp-58f, 0.0f,
     0x1.5897a6p-94f, 0x1.a3b9d6p-31f, 0.0f, 0x1.4e0164p-10f, 0.0f, 0.0f,
     0x1.ebe272p-95f, 0x1.8af002p-114f, 0x1.dfa43p-70f, 0x1.32c74ap-19f,
     0x1.9d254p-104f, 0.0f, 0x1.44563p-56f, 0.0f, 0x1.ea50ecp-84f, 0.0f,
     0x1.597732p-58f, 0x1.964372p-27f, 0.0f, 0x1.e87bbap-58f, 0x1.3a4da2p-72f, 0.0f,
     0.0f, 0x1.469ea6p-91f, 0x1.4c0818p-126f, 0x1.3cb72cp-51f, 0.0f, 0.0f,
     0x1.9689e2p-98f, 0.0f, 0.0f, 0.0f, 0x1.604516p-74f, 0.0f, 0x1.708a4ap-75f, 0.0f,
     0x1.a673c4p-72f, 0.0f, 0x1.38f6p-14f, 0x1.8aa7eap-25f, 0x1.c75cf6p-115f,
     0x1.f126f8p-93f, 0x1.974f9cp-13f, 0x1.aa22f6p-37f, 0.0f, 0.0f, 0.0f,
     0x1.e48aap-18f, 0.0f, 0.0f, 0x1.30eadap-3f, 0.0f, 0x1.8bebdp-113f,
     0x1.b7ffd8p-43f, 0x1.4e96ap-99f, 0.0f, 0x1.0b815ap-13f, 0x1.68e0e8p-80f,
     0x1.d86b16p-17f, 0.0f, 0x1.61264p-121f, 0.0f, 0x1.b0d206p-26f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1e8868p-55f, 0x1.994cdep-77f, 0.0f, 0x1.02a032p-116f,
     0x1.a3679ap-79f, 0x1.9ff748p-11f, 0.0f, 0.0f, 0x1.0ce3dap-106f, 0x1.f674dap-112f,
     0.0f, 0x1.2b0c4ep-72f, 0.0f, 0x1.dae67p-121f, 0x1.70c87cp-87f, 0.0f, 0.0f,
     0x1.75e33ap-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d3caep-42f, 0.0f, 0x1.60bbacp-68f,
     0x1.99fccp-71f, 0.0f, 0x1.a55718p-82f, 0.0f, 0x1.e84b18p-3f, 0x1.ed1d26p-37f,
     0x1.fc66a4p-41f, 0x1.765736p-30f, 0.0f, 0x1.2f57aap-66f, 0.0f, 0.0f,
     0x1.ed52d4p-90f, 0x1.2fb6b8p-106f, 0.0f, 0x1.d20658p-54f, 0x1.c7ba42p-84f,
     0x1.7bdd4cp-56f, 0.0f, 0.0f, 0x1.3e3804p-61f, 0x1.3e50f6p-98f, 0x1p0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.1099e2p-109f, 0.0f, 0.0f, 0x1.b4d304p-71f, 0x1.94d41cp-66f,
     0x1.78b152p-7f, 0x1.0a73fcp-107f, 0.0f, 0x1.7ffafap-17f, 0x1.171606p-67f,
     0x1.36711p-104f, 0.0f, 0x1.739e34p-108f, 0.0f, 0x1.7bb56ap-124f, 0.0f,
     0x1.0585ap-104f, 0x1.95c802p-9f, 0.0f, 0.0f, 0x1.f5b1c8p-36f, 0x1.1d9edp-115f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f4fbep-48f, 0.0f, 0x1.97b9eep-81f, 0.0f,
     0x1.d187c2p-96f, 0x1.93260cp-35f, 0x1.e5f93p-81f, 0x1.8f72e2p-15f, 0.0f,
     0x1.a247cp-94f, 0x1.0baa0ap-39f, 0x1p0f, 0x1.0d1894p-59f, 0.0f, 0x1.4c0b22p-32f,
     0.0f, 0x1.4c1c4ap-119f, 0.0f, 0x1.daf7d2p-50f, 0.0f, 0x1.d6069cp-44f, 0.0f, 0.0f,
     0x1.77c14ep-74f, 0x1.7eac7p-37f, 0.0f, 0.0f, 0.0f, 0x1.58fd86p-24f, 0.0f, 0.0f,
     0x1.53f554p-37f, 0.0f, 0x1.925352p-66f, 0x1.f5962ep-63f, 0x1.a5a5b4p-22f, 0.0f,
     0.0f, 0.0f, 0x1.5a4f8p-83f, 0.0f, 0.0f, 0.0f, 0x1.2ff8f8p-40f, 0x1.14869ap-105f,
     0x1.a01258p-28f, 0x1.6b872cp-100f, 0x1.6aef9p-8f, 0.0f, 0x1.b9ce08p-21f,
     0x1.d0b268p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.41edd2p-74f,
     0.0f, 0x1.78262ep-19f, 0.0f, 0.0f, 0.0f, 0x1.17ce0ep-2f, 0.0f, 0.0f, 0.0f,
     0x1.42404cp-74f, 0x1.fdeebap-74f, 0.0f, 0x1.a634f2p-42f, 0.0f, 0x1.3cd066p-79f,
     0x1.707a26p-109f, 0.0f, 0x1.ca3646p-81f, 0x1.1fe014p-96f, 0.0f, 0x1.9326ccp-12f,
     0x1.fc4738p-15f, 0.0f, 0x1.238c4p-102f, 0x1.6b1f3ap-27f, 0.0f, 0x1.f5d638p-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a9c58cp-85f, 0x1.ba6ab4p-32f, 0.0f,
     0x1.4f47cep-75f, 0x1.d33e5ap-100f, 0x1.9af448p-63f, 0x1.4a154cp-111f,
     0x1.862834p-13f, 0.0f, 0.0f, 0.0f, 0x1.fef6b8p-41f, 0.0f, 0x1.a43efp-114f, 0.0f,
     0x1.9d8dfcp-14f, 0.0f, 0x1.f27e9ep-67f, 0x1.838e82p-94f, 0.0f, 0.0f, 0.0f,
     0x1.6495bap-44f, 0x1.2d069ep-60f, 0x1.5a116ap-67f, 0x1.273c56p-57f,
     0x1.598428p-31f, 0.0f, 0x1.14e5a6p-70f, 0x1.d53066p-23f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ee5cc4p-47f, 0x1.b8ca72p-118f, 0.0f, 0x1.ca87f2p-41f, 0.0f, 0x1.2ca674p-24f,
     0x1.dd043p-86f, 0.0f, 0.0f, 0x1.26bc72p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.74fa52p-31f, 0.0f, 0x1.85c868p-87f, 0x1.fc5c6p-3f, 0x1.e5ba0ep-65f, 0.0f,
     0x1.a77702p-34f, 0.0f, 0.0f, 0.0f, 0x1.82cc04p-93f, 0.0f, 0.0f, 0x1.0c644ep-21f,
     0x1.ca797p-81f, 0x1.c386fep-87f, 0x1.52751ap-16f, 0x1.5034dp-79f,
     0x1.5f83cp-100f, 0.0f, 0x1.e0ada2p-4f, 0x1.9e1f78p-24f, 0.0f, 0x1.2efc1ap-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.339278p-71f, 0x1.de7f66p-25f, 0x1.a856a2p-102f,
     0x1.0c06f2p-93f, 0.0f, 0.0f, 0x1.883ccp-58f, 0.0f, 0.0f, 0.0f, 0x1.8581b4p-23f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c0a0dcp-52f, 0.0f, 0x1.ea2a7ap-56f, 0.0f,
     0x1.573c2ep-110f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.b8e924p-101f, 0x1.abf53cp-21f,
     0x1.f7d6aep-107f, 0.0f, 0x1.87e2e2p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.33bf88p-19f,
     0.0f, 0.0f, 0x1.5d7234p-93f, 0x1.2c6a4ap-75f, 0x1.719a04p-26f, 0x1.fc1796p-18f,
     0x1.52fad4p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4076a4p-97f, 0.0f, 0x1.533dc8p-33f,
     0.0f, 0.0f, 0x1.75eadap-118f, 0.0f, 0x1.5ce56p-102f, 0x1.60608cp-116f,
     0x1.4cc82p-26f, 0.0f, 0x1.3a4404p-46f, 0x1.4ac40ep-115f, 0x1.99399cp-32f,
     0x1.9f6072p-31f, 0x1.82b00ap-72f, 0.0f, 0x1.5c927p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53afc8p-88f, 0x1.26b3cap-27f, 0x1.4b3abcp-126f,
     0x1.6bb808p-61f, 0.0f, 0.0f, 0.0f, 0x1.47d8f4p-9f, 0.0f, 0x1.6779ap-25f,
     0x1.909b7p-117f, 0x1.5d660ap-26f, 0.0f, 0.0f, 0x1.2a7094p-123f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.8dfaf8p-54f, 0.0f, 0.0f, 0.0f, 0x1.713704p-50f, 0.0f, 0x1.7d4b8ep-99f,
     0x1p0f, 0.0f, 0.0f, 0x1.e088fcp-92f, 0x1.0f2f5p-32f, 0x1.dea9fcp-7f,
     0x1.d2f326p-58f, 0x1.a5d346p-30f, 0.0f, 0x1.d0790ap-89f, 0.0f, 0.0f,
     0x1.35b896p-126f, 0.0f, 0x1.98620ap-62f, 0x1.ea35ap-117f, 0.0f, 0.0f,
     0x1.96cb02p-106f, 0.0f, 0.0f, 0x1.36b698p-115f, 0.0f, 0x1.bfe1bcp-28f,
     0x1.5c90ep-95f, 0.0f, 0.0f, 0.0f, 0x1.3f758ep-78f, 0x1.a889a8p-43f,
     0x1.9395e4p-35f, 0x1.74bc9cp-83f, 0x1.c70cfcp-4f, 0x1.35493ap-122f, 0.0f,
     0x1.081dbap-113f, 0x1.08e084p-66f, 0.0f, 0x1.6f013p-96f, 0.0f, 0.0f,
     0x1.e823bcp-38f, 0x1.38fc64p-64f, 0x1.61198p-33f, 0.0f, 0.0f, 0x1.c59238p-95f,
     0.0f, 0x1.914516p-113f, 0.0f, 0x1.dc8e54p-56f, 0x1.133e76p-112f, 0.0f, 0.0f,
     0.0f, 0x1.440e1p-120f, 0x1.f0feccp-79f, 0x1.acde6cp-69f, 0.0f, 0.0f, 0.0f,
     0x1.8bc732p-19f, 0x1.f2f5ecp-51f, 0.0f, 0.0f
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
            tmp1 = Sleef_exp2f8_u35kvx(tmp0);
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
    printf("Sleef_exp2f8_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_exp2f8_u35kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
