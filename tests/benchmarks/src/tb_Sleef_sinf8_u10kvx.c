/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinf8_u10kvx.c --function Sleef_sinf8_u10kvx --headers \
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
     0x1.4239acp-99f, 0.0f, 0.0f, 0x1.79e002p-77f, 0x1.19335p-22f, 0x1.e6822ep-67f,
     0x1.67f89ep-17f, 0x1.848e3p-125f, 0.0f, 0x1.ce967ap-24f, 0x1.398d6ap-54f,
     0x1.8183dcp-61f, 0.0f, 0x1.cfb60ep-71f, 0x1.16a952p-51f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.bd8808p-85f, 0x1.fb80acp-74f, 0.0f, 0x1.7557f4p-104f, 0x1.b73a7cp-66f,
     0x1.64dbfap-95f, 0.0f, 0.0f, 0x1.e7bed6p-2f, 0x1.8a4b44p-96f, 0x1.3fbb38p-84f,
     0.0f, 0x1.d2f0dp-68f, 0.0f, 0.0f, 0x1.9a567p-40f, 0.0f, 0x1.6a2804p-11f,
     0x1.97d882p-29f, 0x1.6e2258p-17f, 0x1.552618p-66f, 0.0f, 0.0f, 0x1.cfdff6p-104f,
     0x1.fb545p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b68532p-39f, 0x1.d4f934p-22f, 0.0f,
     0.0f, 0x1.6d0cdap-114f, 0x1.fd09ccp-104f, 0x1.24fe46p-68f, 0x1.00030ap-121f,
     0.0f, 0.0f, 0x1.7f9056p-116f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f8e9cp-31f,
     0.0f, 0x1.04bbc8p-84f, 0.0f, 0x1.69cf7p-24f, 0.0f, 0x1.c56b78p-86f,
     0x1.4c7552p-81f, 0x1.5e45bp-122f, 0x1.f134e2p-35f, 0.0f, 0x1.a39a76p-64f, 0.0f,
     0x1.923b02p-73f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ab1ecp-99f, 0.0f, 0x1.3c781ep-105f,
     0x1.ecfdfap-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d48068p-21f, 0x1.7c50dap-73f,
     0x1.f70ea8p-83f, 0.0f, 0.0f, 0.0f, 0x1.ff8fd8p-56f, 0.0f, 0x1.0f339cp-68f, 0.0f,
     0x1.e56652p-124f, 0x1.2c6b86p-91f, 0.0f, 0x1.a1bbd8p-119f, 0x1.43ebc4p-74f, 0.0f,
     0.0f, 0x1.5b6e42p-26f, 0x1.e5d2b2p-44f, 0x1.a153f8p-59f, 0.0f, 0x1.394f7p-98f,
     0x1.466ff6p-107f, 0.0f, 0x1.a87b3ap-41f, 0x1.3e7c6ep-61f, 0x1.dce39p-78f, 0.0f,
     0x1.4d2df8p-91f, 0x1.4b0a9ap-37f, 0x1.fd00dp-63f, 0x1.88a776p-112f,
     0x1.4da65ep-88f, 0.0f, 0x1.131f6ap-3f, 0x1.d8366ep-49f, 0x1.3eedecp-78f, 0.0f,
     0x1.b2a4cp-88f, 0.0f, 0x1.930ae2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.af714ap-88f,
     0x1.a4662ep-40f, 0.0f, 0x1.cbfdeep-5f, 0x1.f4503p-97f, 0x1.003a0cp-102f, 0.0f,
     0x1.1ea956p-22f, 0.0f, 0.0f, 0x1.73bab8p-86f, 0x1.5ea43cp-94f, 0.0f,
     0x1.9c6ad2p-44f, 0x1.817d6ep-103f, 0x1.7e7ddep-48f, 0x1.f45d56p-54f,
     0x1.ad0858p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d45b38p-98f, 0.0f, 0.0f,
     0x1.9d79bp-116f, 0x1.6c3e9ep-2f, 0.0f, 0.0f, 0.0f, 0x1.a24dc8p-84f, 0.0f,
     0x1.d0ea5ap-81f, 0x1.cbf716p-35f, 0.0f, 0x1.19cc3ap-107f, 0.0f, 0x1.dc67b4p-71f,
     0x1.94705ap-70f, 0x1.e2378cp-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f6892p-38f, 0.0f,
     0x1.f8e26p-15f, 0.0f, 0.0f, 0x1.ddfa56p-20f, 0x1.ef399cp-22f, 0x1.da11aap-79f,
     0.0f, 0x1.ea135p-110f, 0x1.5c3edap-16f, 0.0f, 0x1.2bab2ap-43f, 0x1.d1e1a4p-58f,
     0.0f, 0x1.687e1ap-75f, 0x1.741b42p-124f, 0x1.f70e42p-87f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.504d68p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3ddd2p-10f, 0.0f,
     0x1.c1a02ap-97f, 0.0f, 0x1.c21c6ep-112f, 0x1.fb88eep-93f, 0x1.8bfc94p-76f,
     0x1.1f1fc6p-97f, 0.0f, 0.0f, 0x1.c513c4p-48f, 0x1.43839cp-11f, 0.0f, 0.0f,
     0x1.4bbe02p-99f, 0x1.f1603ep-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.25345p-40f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.7b8edap-47f, 0.0f, 0.0f, 0x1.52563ap-58f, 0.0f, 0.0f,
     0x1.81bf14p-47f, 0x1.94fc6ep-64f, 0x1.121508p-59f, 0x1.1935c4p-49f,
     0x1.afdc54p-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c60f8p-8f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.98541p-24f, 0.0f, 0x1.f6cdb6p-51f, 0.0f, 0x1.33511ep-35f, 0.0f,
     0.0f, 0x1.2cfe4ep-98f, 0x1.5cf93cp-14f, 0x1.4ece68p-55f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.1cc634p-24f, 0.0f, 0x1.20a294p-80f, 0.0f, 0.0f, 0x1.78b034p-67f,
     0x1.0afb38p-17f, 0x1.153734p-6f, 0x1.9a454ap-52f, 0.0f, 0x1.e6099cp-72f, 0.0f,
     0.0f, 0.0f, 0x1.d2ae7ap-61f, 0.0f, 0x1.9647aep-125f, 0.0f, 0x1.6a8d5ep-28f, 0.0f,
     0x1.a4a506p-120f, 0.0f, 0x1.4fee68p-42f, 0x1.58cb7ep-83f, 0x1.072012p-37f,
     0x1.3dccd4p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3e889cp-114f, 0.0f, 0x1.38dcbcp-7f,
     0.0f, 0.0f, 0x1.c1bb52p-18f, 0x1.3ffd9ep-83f, 0x1.a3b532p-86f, 0.0f,
     0x1.d277d4p-4f, 0x1.ce6036p-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.705f46p-39f, 0.0f, 0.0f, 0.0f, 0x1.a0184ap-70f, 0x1.fa32aep-121f, 0.0f,
     0x1.fad98cp-70f, 0.0f, 0x1p0f, 0.0f, 0x1.fbf3cp-49f, 0x1.d4729ep-106f, 0.0f,
     0x1.98bd2cp-13f, 0.0f, 0x1.c03742p-74f, 0.0f, 0.0f, 0.0f, 0x1.7a292ep-14f, 0.0f,
     0x1.9a45aep-13f, 0x1.bcca62p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.821792p-16f,
     0x1.d30cfap-112f, 0x1.b32116p-1f, 0x1.bc6216p-113f, 0.0f, 0.0f, 0.0f,
     0x1.eb61d6p-80f, 0x1.3801acp-93f, 0x1.cb16ecp-79f, 0.0f, 0x1.b86228p-118f,
     0x1.98f3bep-110f, 0.0f, 0.0f, 0.0f, 0x1.992348p-73f, 0.0f, 0.0f,
     0x1.062fecp-109f, 0x1.705496p-71f, 0.0f, 0x1.7dda7cp-121f, 0x1.493114p-51f, 0.0f,
     0x1.c97ac4p-24f, 0x1.931ed6p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.265d7p-77f,
     0x1.4cea82p-56f, 0.0f, 0x1.0ffea4p-58f, 0x1.7a2ea8p-3f, 0x1.32159cp-115f, 0.0f,
     0.0f, 0x1.2261b8p-35f, 0.0f, 0x1.6ddfc8p-39f, 0.0f, 0.0f, 0.0f, 0x1.21b382p-49f,
     0x1.752c86p-110f, 0x1.8fa7e8p-126f, 0.0f, 0.0f, 0x1.19b576p-117f, 0x1.8c067p-90f,
     0.0f, 0x1.7b29bp-106f, 0.0f, 0x1.64576ap-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.94b328p-38f, 0.0f, 0.0f, 0.0f, 0x1.b640b4p-102f, 0.0f, 0.0f, 0.0f,
     0x1.25db22p-40f, 0.0f, 0x1.a6f65p-39f, 0.0f, 0x1.8ab3e4p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.5b1c5ep-33f, 0x1.293beap-103f, 0x1.b8e65ep-6f, 0x1.40c0eep-98f,
     0.0f, 0x1.cecf8p-16f, 0x1.ab5edap-46f, 0x1.7c1928p-88f, 0x1.09ac4p-89f,
     0x1.dba27ap-36f, 0.0f, 0x1.435a68p-44f, 0x1.c736dep-66f, 0.0f, 0x1.8167c8p-37f,
     0x1.d60f0ep-48f, 0.0f, 0x1.3b2ebp-23f, 0.0f, 0.0f, 0x1.be4e7ap-62f,
     0x1.503166p-24f, 0x1.6d76c6p-118f, 0.0f, 0x1.9c810cp-99f, 0x1.29dfcp-92f, 0.0f,
     0x1.d74346p-19f, 0x1.a5536cp-15f, 0x1.154fbp-1f, 0.0f, 0x1.74dd2ep-109f,
     0x1.d9de42p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7e8f52p-118f, 0x1.70849ep-102f,
     0.0f, 0x1.9365c2p-62f, 0x1.ca959cp-105f, 0.0f, 0x1.4bb15ap-126f, 0x1.71644ep-28f,
     0.0f, 0x1.365f3ap-9f, 0x1.51500cp-67f, 0x1.a280d4p-57f, 0x1.e2e412p-71f, 0.0f,
     0x1.bc6924p-31f, 0.0f, 0x1.9b239p-114f, 0x1.4c8edap-97f, 0.0f, 0.0f,
     0x1.9ddb26p-5f, 0.0f, 0x1.2bc322p-22f, 0.0f, 0x1.1c1afp-15f, 0x1.d32736p-126f,
     0x1.bdaff6p-88f, 0x1.83c172p-108f, 0.0f, 0x1.1fa382p-62f, 0.0f, 0.0f,
     0x1.bed8ecp-86f, 0.0f, 0x1.dc4becp-106f, 0x1.991c8ep-19f, 0x1.38b4bap-7f, 0.0f,
     0x1.6e1b98p-49f, 0x1.5ad76cp-44f, 0x1.85b95ep-21f, 0.0f, 0x1.d778dep-81f, 0.0f,
     0x1.02a2eap-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.070ep-52f, 0.0f, 0x1.50d60ap-120f,
     0x1.66cf7ap-91f, 0x1.23f5a4p-23f, 0.0f, 0x1.abc4e8p-37f, 0x1.4989b2p-40f,
     0x1.96aa34p-50f, 0x1.77035ep-47f, 0x1.98344cp-17f, 0.0f, 0x1p0f, 0x1.a2d878p-76f,
     0x1.3d48f2p-122f, 0x1.87f938p-76f, 0x1.158988p-90f, 0x1.5505b8p-47f, 0.0f,
     0x1.3bffc8p-25f, 0.0f, 0x1.6a1898p-119f, 0.0f, 0x1.5dbbc6p-116f, 0.0f,
     0x1.fb5502p-78f, 0x1.cfd676p-98f, 0.0f, 0.0f, 0x1.ab06bp-77f, 0.0f,
     0x1.fba3e2p-38f, 0.0f, 0x1.394f22p-94f, 0x1.bab6c2p-124f, 0.0f, 0.0f,
     0x1.2ae824p-58f, 0x1.09786p-46f, 0x1.3433c4p-50f, 0.0f, 0.0f, 0x1.8c7238p-88f,
     0x1.d2c71cp-121f, 0x1.648acep-111f, 0.0f, 0x1.724412p-122f, 0x1.5b46d6p-92f,
     0.0f, 0x1.129b7ep-87f, 0x1.ad1ec8p-90f, 0.0f, 0x1.03079cp-31f, 0x1.72216p-39f,
     0x1.0522ep-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc8dacp-4f, 0.0f,
     0x1.30e6bap-107f, 0x1.6ff422p-84f, 0.0f, 0x1.22c3cep-47f, 0.0f, 0x1.0ea964p-50f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.15c7bcp-50f, 0.0f, 0x1.07a12cp-68f,
     0.0f, 0.0f, 0.0f, 0x1.a02a0ap-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5c845ap-80f,
     0x1.09e92cp-81f, 0x1.964374p-24f, 0x1.31cb3cp-6f, 0x1.0f9896p-41f, 0.0f, 0.0f,
     0x1.e74a56p-110f, 0x1.fc63acp-115f, 0.0f, 0x1.d24b4ep-28f, 0.0f, 0x1.7a242cp-91f,
     0x1.c658cp-4f, 0x1.672b16p-72f, 0.0f, 0x1.9ea962p-61f, 0x1.f0552ap-28f,
     0x1.2ce9a4p-110f, 0.0f, 0.0f, 0.0f, 0x1.75f906p-24f, 0x1p0f, 0.0f, 0.0f,
     0x1.b6103cp-41f, 0x1.c7db1p-56f, 0x1.72b0cp-72f, 0.0f, 0x1.2dc156p-21f, 0.0f,
     0.0f, 0x1.dc2b3ep-34f, 0x1.cf351cp-95f, 0.0f, 0x1.51db14p-101f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.765f74p-67f, 0x1.225e44p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9d2bcp-108f,
     0.0f, 0x1.e8589p-89f, 0x1.e50c56p-110f, 0x1.d80068p-84f, 0.0f, 0x1.568494p-72f,
     0.0f, 0.0f, 0x1.41b85cp-41f, 0x1.fa98ecp-117f, 0x1.423e6p-76f, 0.0f,
     0x1.3912ap-110f, 0x1.781e06p-15f, 0x1.fddda8p-30f, 0.0f, 0.0f, 0x1.264ef4p-83f,
     0x1.101ae6p-102f, 0x1.0844dp-21f, 0.0f, 0.0f, 0x1.2dbdfcp-105f, 0.0f,
     0x1.9b0e6ap-36f, 0.0f, 0.0f, 0x1.173508p-5f, 0.0f, 0x1.336776p-40f, 0.0f, 0.0f,
     0x1.90fec4p-24f, 0x1.abe386p-87f, 0.0f, 0x1.add28cp-61f, 0.0f, 0.0f,
     0x1.2103fap-87f, 0.0f, 0x1.5102ep-14f, 0x1.f74028p-117f, 0.0f, 0x1.28ccc6p-62f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8808dp-56f, 0.0f, 0x1.356e6p-115f, 0.0f,
     0x1.f987eep-9f, 0.0f, 0.0f, 0.0f, 0x1.6f8c0ep-67f, 0.0f, 0.0f, 0.0f,
     0x1.b7d94p-96f, 0x1.b4f3fep-107f, 0.0f, 0.0f, 0x1.c50d26p-123f, 0x1.c40fc8p-43f,
     0.0f, 0x1.9f6e3ep-87f, 0x1.95e1c8p-104f, 0x1.02a9dp-110f, 0.0f, 0.0f, 0.0f,
     0x1.b8b922p-77f, 0x1.dfec5p-75f, 0.0f, 0x1.ea5dc4p-55f, 0.0f, 0.0f,
     0x1.010becp-8f, 0x1.3b0fa2p-68f, 0.0f, 0.0f, 0x1.0ff8e8p-49f, 0.0f,
     0x1.708cacp-87f, 0.0f, 0x1.94907ep-108f, 0x1.16a88cp-124f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7d910ep-21f, 0.0f, 0x1.b86062p-47f, 0x1.de67aep-97f,
     0x1.dbe0ecp-57f, 0.0f, 0x1.88b82cp-2f, 0x1.830fe2p-81f, 0.0f, 0.0f,
     0x1.78881p-86f, 0x1.814a84p-23f, 0x1.a4973cp-117f, 0x1.4d31dp-38f,
     0x1.c5cf78p-14f, 0.0f, 0.0f, 0x1.a9156ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fcf656p-81f, 0x1.d03b2ep-76f, 0x1.102d12p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b9415p-119f, 0x1.40227p-108f, 0.0f, 0x1.833a58p-100f, 0.0f, 0x1.44c1b4p-17f,
     0x1.6cb48cp-38f, 0x1.8c281ap-111f, 0x1.5969bcp-11f, 0x1.ade2bcp-116f, 0.0f,
     0x1.ef29dcp-83f, 0.0f, 0x1p0f, 0x1.6a1e94p-26f, 0x1.a7e10ap-72f, 0x1.46b66ep-65f,
     0.0f, 0.0f, 0.0f, 0x1.785294p-40f, 0x1.2cab24p-54f, 0.0f, 0x1.95bdf8p-12f,
     0x1.676622p-60f, 0.0f, 0.0f, 0x1.a7ab3ap-75f, 0x1.c8b028p-102f, 0x1.921342p-99f,
     0x1.06333ap-108f, 0.0f, 0.0f, 0x1.da991ap-101f, 0x1.6e5904p-108f, 0.0f, 0.0f,
     0.0f, 0x1.5d542ap-43f, 0.0f, 0.0f, 0x1.5920d8p-94f, 0x1.a043c4p-60f, 0.0f, 0.0f,
     0.0f, 0x1.84dc9ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.32ec76p-13f,
     0.0f, 0x1.9c0092p-74f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba96f2p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bfaadcp-126f, 0.0f, 0x1.d9125ap-96f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6e5cdp-79f, 0x1.9b926ep-7f, 0.0f, 0x1.2e6268p-6f,
     0.0f, 0.0f, 0x1.6df4f6p-77f, 0.0f, 0.0f, 0x1.80f0eep-61f, 0x1.5b9cdap-59f, 0.0f,
     0x1.4d6614p-51f, 0.0f, 0.0f, 0x1.845834p-64f, 0.0f, 0.0f, 0x1.c45fccp-1f, 0.0f,
     0x1.b050f4p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea02dap-11f, 0.0f, 0.0f,
     0x1.f38cdp-121f, 0x1.4d4c58p-45f, 0.0f, 0x1.f2ea3p-107f, 0.0f, 0x1.a77a32p-4f,
     0x1.45ad88p-18f, 0x1.e7648p-46f, 0x1.09b0f2p-75f, 0x1.d6c516p-86f,
     0x1.9ad42p-91f, 0x1.17310cp-31f, 0x1.be0cd4p-33f, 0.0f, 0x1.c65544p-118f,
     0x1.26d8cp-104f, 0.0f, 0x1.66b58ap-115f, 0x1.94ce94p-77f, 0.0f, 0.0f,
     0x1.a12b8p-77f, 0x1.d7e236p-39f, 0x1.4010eep-121f, 0.0f, 0x1.c55856p-115f,
     0x1.f334a2p-81f, 0.0f, 0x1.99f23p-23f, 0x1.b3a93p-29f, 0x1.0f9dccp-46f,
     0x1.a27b0cp-43f, 0x1.75bff6p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a1ce8p-22f,
     0x1.877dd8p-96f, 0.0f, 0.0f, 0x1.115664p-23f, 0x1.09fbf2p-53f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1p0f, 0x1.fcd128p-96f, 0.0f, 0x1.82a8b6p-52f, 0x1.b71616p-116f,
     0x1.436b5cp-5f, 0x1.1034dep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.063d96p-99f, 0x1.e82018p-71f, 0.0f, 0x1.e52ad4p-34f, 0.0f,
     0x1.6203e8p-57f, 0.0f, 0x1.511ad8p-50f, 0x1.28dd14p-100f, 0x1.e96c54p-47f, 0.0f,
     0x1.1c587cp-107f, 0x1.514326p-111f, 0x1.5807d2p-56f, 0x1.077138p-15f, 0.0f, 0.0f,
     0.0f, 0x1.1add26p-84f, 0x1.e42dacp-82f, 0x1.688346p-97f, 0.0f, 0.0f, 0.0f,
     0x1.9e7188p-59f, 0.0f, 0.0f, 0.0f, 0x1.28cf1ap-94f, 0.0f, 0x1.c1f1fp-5f, 0.0f,
     0.0f, 0x1.9ff09ap-74f, 0x1.7aa78cp-98f, 0x1.36619ep-119f, 0.0f, 0.0f,
     0x1.931554p-86f, 0.0f, 0x1.f7cd1ap-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.186908p-16f,
     0x1.54bfbep-80f, 0.0f, 0x1.6f38eep-86f, 0x1.f6fc5cp-68f, 0.0f, 0x1.9b4466p-68f,
     0x1.21a742p-41f, 0x1.1c2f18p-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b65fap-56f,
     0x1.5386eap-1f, 0x1.3848ecp-117f, 0x1.fbfabep-19f, 0.0f, 0x1.5e05f4p-35f,
     0x1.a2765cp-7f, 0.0f
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
            tmp1 = Sleef_sinf8_u10kvx(tmp0);
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
    printf("Sleef_sinf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_sinf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
