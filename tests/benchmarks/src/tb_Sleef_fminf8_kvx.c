/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fminf8_kvx.c --function Sleef_fminf8_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0x1.249f8ap-62f, 0x1.4a3744p-48f, 0.0f, 0x1.535be2p-39f, 0x1.7e828p-108f,
     0x1.950844p-93f, 0.0f, 0.0f, 0x1.a2e95cp-6f, 0.0f, 0x1.a22a3p-114f,
     0x1.8ff55ep-73f, 0.0f, 0.0f, 0x1.f806ecp-88f, 0x1.02a9aap-16f, 0x1.37afp-113f,
     0x1.46ca74p-55f, 0.0f, 0.0f, 0x1.303b1p-105f, 0x1.fd5cacp-28f, 0x1.f74328p-92f,
     0.0f, 0.0f, 0x1.11dd5p-92f, 0x1.0368b4p-68f, 0.0f, 0x1.2985fap-97f, 0.0f,
     0x1.073eb4p-81f, 0x1.e4a854p-57f, 0.0f, 0x1.8b47eap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.892d0ep-5f, 0x1.552856p-122f, 0x1.99b44p-91f, 0.0f, 0.0f, 0x1.ecdb86p-27f,
     0.0f, 0x1.43b122p-21f, 0x1.c68e24p-54f, 0.0f, 0.0f, 0x1.63932ep-9f,
     0x1.28b108p-80f, 0x1.983efep-111f, 0.0f, 0.0f, 0x1.8078ep-103f, 0x1.655c84p-10f,
     0x1.8258e4p-88f, 0.0f, 0x1.95e8bap-41f, 0.0f, 0x1.ac6848p-98f, 0x1.17136p-111f,
     0.0f, 0x1.d0e52ap-35f, 0x1p0f, 0x1.7b2032p-24f, 0.0f, 0x1.35f2e8p-119f, 0.0f,
     0x1.ac4844p-58f, 0.0f, 0x1.a888cp-112f, 0.0f, 0x1.af024ap-53f, 0.0f,
     0x1.688d3ep-68f, 0.0f, 0.0f, 0.0f, 0x1.8254dap-16f, 0.0f, 0x1.e0a776p-5f, 0.0f,
     0.0f, 0x1.70b2p-121f, 0.0f, 0.0f, 0x1.7f1dc4p-104f, 0x1.d5a0ecp-71f,
     0x1.b5f006p-113f, 0x1.e07564p-36f, 0x1.29829cp-27f, 0x1.0b6dep-121f,
     0x1.3687f2p-27f, 0.0f, 0.0f, 0x1.3f79ep-19f, 0x1.d97ab2p-10f, 0x1.64f842p-84f,
     0x1.f3b8fp-103f, 0.0f, 0.0f, 0x1.118762p-64f, 0.0f, 0.0f, 0.0f, 0x1.e65bacp-60f,
     0.0f, 0.0f, 0x1.08dep-39f, 0.0f, 0.0f, 0x1.ba6946p-80f, 0.0f, 0x1.10b4dep-117f,
     0x1.449a02p-94f, 0x1.428892p-36f, 0x1.287f8p-27f, 0.0f, 0x1.2dae4ap-46f,
     0x1.dc1088p-111f, 0x1.f5911cp-120f, 0.0f, 0.0f, 0.0f, 0x1.e29b72p-97f,
     0x1.d0d6f8p-117f, 0.0f, 0.0f, 0x1.d9176p-125f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.bbe7aep-72f, 0x1.188dd4p-72f, 0x1.53cea4p-104f, 0.0f, 0.0f,
     0x1.09dddcp-19f, 0x1.fe0c56p-73f, 0.0f, 0x1.41d224p-68f, 0x1.d1717ap-92f,
     0x1.c1c51ep-70f, 0x1.9acc78p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ca862p-58f,
     0x1.f192c2p-62f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ff1396p-13f, 0.0f,
     0x1.8c6892p-84f, 0x1.56211p-71f, 0x1.e44602p-96f, 0x1.bf911p-68f, 0.0f, 0.0f,
     0.0f, 0x1.e1d362p-97f, 0x1.2c898ep-30f, 0.0f, 0.0f, 0x1.55c9aap-60f, 0.0f, 0.0f,
     0x1.1428acp-39f, 0.0f, 0x1.52a35ep-28f, 0x1.b7e6eap-78f, 0x1.1fdf6ep-107f,
     0x1.1e83f6p-112f, 0.0f, 0x1.0e4176p-19f, 0.0f, 0x1.98c9fp-31f, 0x1.c9e184p-52f,
     0x1.502236p-60f, 0x1.26d42p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e2ed2ep-115f,
     0x1.ded8dep-68f, 0.0f, 0x1.7de81ap-4f, 0.0f, 0.0f, 0.0f, 0x1.2c82b8p-43f,
     0x1.49af3p-81f, 0.0f, 0.0f, 0.0f, 0x1.80b5a4p-68f, 0x1.cb349ep-67f, 0.0f,
     0x1.dcc48ap-125f, 0x1.c34b6cp-71f, 0.0f, 0.0f, 0x1.e138fep-11f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.137812p-48f, 0.0f, 0.0f, 0x1.7f3558p-15f, 0x1.8d8298p-70f, 0.0f,
     0x1.ee187cp-82f, 0.0f, 0.0f, 0x1.2861d8p-95f, 0.0f, 0.0f, 0.0f, 0x1.f9d2e6p-106f,
     0.0f, 0x1.d4a508p-55f, 0.0f, 0.0f, 0x1.20707p-65f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c454bcp-114f, 0.0f, 0.0f, 0.0f, 0x1.15f09ap-93f, 0.0f, 0x1.13956p-107f,
     0x1.098c3ap-126f, 0.0f, 0.0f, 0x1.467cc4p-30f, 0x1.39f93ap-126f, 0x1.149ce2p-90f,
     0.0f, 0x1.b34f4ep-97f, 0x1.57c49p-117f, 0x1.d88f84p-10f, 0x1.f25994p-85f,
     0x1.8597f8p-85f, 0x1.77447cp-56f, 0.0f, 0x1.8e2d64p-2f, 0.0f, 0.0f,
     0x1.cb35b2p-16f, 0.0f, 0x1.9d05bp-72f, 0.0f, 0.0f, 0x1.11a1a6p-97f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f7daaap-119f, 0x1.f3afb6p-124f, 0.0f, 0.0f, 0.0f,
     0x1.061102p-46f, 0x1.ea55dap-68f, 0.0f, 0x1.2677c8p-79f, 0.0f, 0x1.c5460cp-43f,
     0.0f, 0x1.27ce92p-65f, 0.0f, 0x1.f487d8p-31f, 0.0f, 0x1.31dde8p-69f, 0.0f,
     0x1.f8210ap-26f, 0x1p0f, 0x1.77013cp-42f, 0x1.03f914p-96f, 0x1.cd57dcp-98f, 0.0f,
     0.0f, 0x1.9682fep-65f, 0x1.5c3d4ep-59f, 0x1.00058ep-89f, 0x1.159676p-77f,
     0x1.863dp-43f, 0x1.2bed36p-60f, 0x1.abf4bap-108f, 0.0f, 0.0f, 0x1.61d078p-63f,
     0.0f, 0x1.660bdep-43f, 0x1.b602b6p-95f, 0.0f, 0x1.8af11cp-35f, 0.0f,
     0x1.e444b2p-10f, 0.0f, 0.0f, 0x1.111056p-74f, 0x1.861f18p-112f, 0.0f, 0.0f,
     0x1.a4f9d2p-18f, 0.0f, 0.0f, 0x1.da2bd6p-17f, 0.0f, 0.0f, 0x1.7d4e0ap-4f, 0.0f,
     0x1.63e76cp-88f, 0.0f, 0x1.0e3c26p-63f, 0.0f, 0x1.40a226p-118f, 0.0f,
     0x1.d96694p-62f, 0x1.636f2ap-30f, 0.0f, 0.0f, 0x1.09424p-34f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.60df12p-42f, 0x1.ec7376p-111f, 0.0f, 0x1.99045ap-71f,
     0x1.252098p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1a29c6p-8f, 0.0f, 0.0f,
     0x1.11d50ap-30f, 0.0f, 0x1.a1fbcap-32f, 0.0f, 0x1.f0b846p-106f, 0x1.e707fap-82f,
     0x1.ef0ed6p-26f, 0.0f, 0x1.fda9b4p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.69eaeap-54f,
     0.0f, 0x1.00129cp-125f, 0x1.6b1cdcp-102f, 0x1.0238a2p-24f, 0.0f, 0.0f, 0.0f,
     0x1.2a7056p-35f, 0x1.dc371cp-23f, 0.0f, 0x1.e8c4bep-56f, 0.0f, 0x1.5f9dbcp-21f,
     0x1.3f2daep-82f, 0x1.ee74ccp-86f, 0x1.4d6b28p-54f, 0x1.2d9eaep-105f,
     0x1.3cb57p-57f, 0x1.df64dp-111f, 0x1.03574ap-3f, 0.0f, 0.0f, 0x1.f92476p-119f,
     0.0f, 0x1.25df44p-100f, 0.0f, 0.0f, 0.0f, 0x1.2dfcd8p-121f, 0x1.a5d2aep-76f,
     0.0f, 0x1.3a303p-97f, 0.0f, 0.0f, 0x1.a82de4p-123f, 0x1.7c19dp-65f,
     0x1.c4b314p-115f, 0x1.284a48p-41f, 0x1.69c19ap-86f, 0x1.3f105p-100f, 0.0f, 0.0f,
     0x1.56808cp-112f, 0.0f, 0.0f, 0x1.e307b4p-53f, 0.0f, 0.0f, 0.0f,
     0x1.b1e03ep-106f, 0.0f, 0.0f, 0x1.01302ap-121f, 0x1.35bf44p-84f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.961bfep-58f, 0x1.78064p-64f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.62bea6p-108f, 0.0f, 0.0f, 0.0f, 0x1.d79f04p-9f,
     0x1.0d4e2ap-83f, 0x1.dfd1f6p-107f, 0.0f, 0x1.6b86a8p-49f, 0.0f, 0.0f,
     0x1.37aae6p-26f, 0.0f, 0.0f, 0.0f, 0x1.51b916p-70f, 0.0f, 0.0f, 0.0f,
     0x1.a1bfb8p-52f, 0.0f, 0x1.8cb4bcp-98f, 0.0f, 0x1.840464p-67f, 0x1.c49f86p-112f,
     0x1.5d7db8p-49f, 0.0f, 0x1.aa0c8ap-46f, 0.0f, 0x1.8f358cp-100f, 0x1.0dcce8p-105f,
     0.0f, 0.0f, 0x1.d94736p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f6b2c6p-40f,
     0x1.151e3ep-69f, 0.0f, 0x1.166176p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d1966p-83f,
     0x1.8c043ep-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0c76p-76f, 0x1.d09c46p-124f,
     0x1.b0216p-112f, 0.0f, 0.0f, 0.0f, 0x1.60f04p-74f, 0x1.884978p-72f, 0.0f,
     0x1.69d562p-2f, 0x1.bda90cp-122f, 0x1.b866b6p-54f, 0.0f, 0.0f, 0.0f,
     0x1.eb04d6p-78f, 0x1.4b8a72p-115f, 0.0f, 0.0f, 0x1.c4ae7ep-96f, 0.0f,
     0x1.adf78ap-111f, 0x1.3f4c1ep-55f, 0.0f, 0.0f, 0x1.d2ec1ap-26f, 0x1.ddb116p-106f,
     0x1.60268cp-99f, 0.0f, 0.0f, 0x1.ecdd9ap-58f, 0x1.64569ap-70f, 0x1.2973b8p-13f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ec1202p-33f, 0.0f, 0x1.e5a932p-36f, 0.0f,
     0.0f, 0.0f, 0x1.a918dap-76f, 0.0f, 0.0f, 0x1.af61p-74f, 0x1.452036p-107f, 0.0f,
     0.0f, 0x1.f48752p-57f, 0.0f, 0x1.dc5118p-90f, 0x1.e3b0b2p-79f, 0.0f,
     0x1.a326ccp-4f, 0.0f, 0.0f, 0.0f, 0x1.b6da76p-95f, 0.0f, 0x1.5f52cep-100f,
     0x1.a7d748p-3f, 0.0f, 0.0f, 0.0f, 0x1.29d52p-115f, 0.0f, 0x1.2766e8p-75f,
     0x1.d63672p-70f, 0x1.1e82ecp-61f, 0.0f, 0x1.852e8ep-5f, 0.0f, 0x1.f5ecfp-9f,
     0x1.951242p-62f, 0.0f, 0x1.3d6beap-30f, 0x1.6e721ep-3f, 0.0f, 0x1.daa564p-83f,
     0.0f, 0.0f, 0.0f, 0x1.51e538p-42f, 0x1.3cc212p-28f, 0.0f, 0x1.114864p-18f,
     0x1.720d2ep-45f, 0.0f, 0x1.8dd818p-71f, 0x1.c24fa6p-86f, 0.0f, 0x1.f5cf1p-122f,
     0x1.1731ecp-117f, 0x1.d987d6p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9c2ebep-61f, 0x1.2634a8p-123f, 0x1.e7129cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fc7e56p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f05324p-97f, 0x1.a46f18p-117f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d3e3fap-59f, 0.0f, 0x1.405382p-10f, 0.0f,
     0x1.9227dp-10f, 0x1.bbadbap-25f, 0.0f, 0.0f, 0x1.050c52p-25f, 0x1.b50988p-124f,
     0x1.a327a6p-5f, 0x1.62ec1ap-76f, 0x1.d051a6p-3f, 0.0f, 0x1.21c48ep-97f, 0.0f,
     0x1.1e764ep-107f, 0.0f, 0x1.8f51d2p-51f, 0.0f, 0x1.99544ap-88f, 0x1.78732ap-99f,
     0.0f, 0x1.eef544p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.238fa2p-17f, 0.0f,
     0x1.415d54p-68f, 0x1.585e18p-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b369dap-34f, 0.0f, 0x1.882ae8p-71f, 0x1.077774p-86f, 0.0f, 0x1.45201ap-67f,
     0.0f, 0.0f, 0.0f, 0x1.b71048p-109f, 0.0f, 0.0f, 0x1.c3106cp-22f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.00b276p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2464ap-111f, 0x1.ffd612p-79f, 0x1.0194b4p-54f, 0.0f,
     0.0f, 0x1.3802fp-12f, 0x1.3676acp-94f, 0x1.8fa8a8p-68f, 0.0f, 0x1.25a5ecp-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.55a014p-41f, 0x1.91bd1cp-6f, 0x1.b90ffap-58f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.c3fb4ep-47f, 0.0f, 0x1.607cf6p-57f, 0x1.9fce56p-12f,
     0x1.3d6608p-91f, 0x1.f2a028p-30f, 0.0f, 0.0f, 0x1.0bb3aap-95f, 0x1.9f57c4p-79f,
     0x1.492ed4p-45f, 0.0f, 0x1.09758p-25f, 0x1.6b56ecp-28f, 0x1.a3008ep-36f,
     0x1.89cc1p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3d7af4p-26f,
     0x1.8dc37ep-59f, 0.0f, 0x1.adf436p-33f, 0.0f, 0x1.132e4cp-78f, 0x1.7b4f92p-3f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ce215p-122f, 0.0f, 0.0f, 0x1.9ff00cp-90f,
     0x1.fe1612p-111f, 0x1.6ba41ap-125f, 0x1.1a765ep-63f, 0.0f, 0.0f, 0x1.5c1936p-23f,
     0x1.d567d2p-123f, 0.0f, 0.0f, 0.0f, 0x1.0c93aap-122f, 0.0f, 0x1.ce1e78p-16f,
     0.0f, 0x1.4efb6ap-21f, 0x1.55c66p-42f, 0.0f, 0x1.c79482p-4f, 0x1.a3c2bcp-54f,
     0x1.e4ed4p-124f, 0.0f, 0x1.d1f3a2p-117f, 0x1.87a1b6p-73f, 0.0f, 0x1.e9a508p-65f,
     0x1.75098ep-12f, 0.0f, 0x1.7b1a42p-75f, 0x1.397d8ep-104f, 0.0f, 0x1.54d692p-33f,
     0.0f, 0.0f, 0x1.36c892p-55f, 0.0f, 0x1.126c38p-66f, 0x1.e1e488p-103f,
     0x1.26009p-37f, 0.0f, 0x1.bcf5f6p-74f, 0x1.abdf3p-30f, 0x1.67a39ap-123f,
     0x1.82980ap-62f, 0x1.570a1ep-117f, 0x1.fda026p-92f, 0.0f, 0x1.3e99cep-3f,
     0x1.42884ep-117f, 0x1.9a55f6p-124f, 0.0f, 0x1.681c6cp-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1439bep-57f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.eeb9bep-61f, 0x1.d2edf6p-13f, 0.0f, 0x1.2be47p-42f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b6760ap-126f, 0.0f, 0.0f, 0.0f,
     0x1.a9900cp-95f, 0x1.f2ee18p-42f, 0.0f, 0.0f, 0x1.7fe0e2p-114f, 0.0f, 0.0f,
     0x1.0e6cd6p-37f, 0.0f, 0x1.6c6ff2p-46f, 0.0f, 0.0f, 0.0f, 0x1.4397dp-49f,
     0x1.6e214ap-47f, 0.0f, 0.0f, 0x1.5743aap-60f, 0x1.18739ap-13f, 0.0f, 0.0f, 0.0f,
     0x1.7dd316p-16f, 0x1.c10e64p-73f, 0x1.a7ef8ep-35f, 0.0f, 0.0f, 0x1.c331e8p-69f,
     0x1.acd478p-123f, 0x1.da800ep-126f, 0x1.8fe02cp-38f, 0.0f, 0x1.59d40ep-99f, 0.0f,
     0.0f, 0.0f, 0x1.e2d90cp-90f, 0.0f, 0.0f, 0x1.0b179p-79f, 0x1.be221ap-13f, 0.0f,
     0x1.32f0e2p-70f, 0x1.6226bap-74f, 0.0f, 0.0f, 0x1.93e68cp-66f, 0.0f, 0.0f,
     0x1.808c7p-22f, 0.0f, 0x1.eaa22cp-46f, 0x1.6bd0aep-42f, 0.0f, 0x1.77ffeap-16f,
     0.0f, 0x1.294f5p-38f, 0x1.6fee2ap-91f, 0.0f, 0.0f, 0x1.2db79ap-79f, 0.0f,
     0x1.a41b74p-84f, 0x1.eda07p-112f, 0x1.835c3cp-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.83b0e6p-111f, 0x1.5e6db2p-93f, 0.0f, 0x1.c57baep-90f, 0x1.c9e46ep-4f, 0.0f,
     0x1.d0c546p-8f, 0x1.b292f2p-56f, 0x1.f55154p-85f, 0x1.b5b4f8p-79f, 0.0f,
     0x1.386642p-13f, 0x1.8a84b4p-77f, 0x1.9d6002p-17f, 0.0f, 0.0f, 0x1.3e799cp-72f,
     0.0f, 0x1.6b823cp-31f, 0x1.d6cee6p-35f, 0.0f, 0x1.3dd22p-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.b766f4p-43f, 0.0f, 0.0f, 0.0f, 0x1.8d12f6p-91f,
     0x1.3f1ae8p-44f, 0.0f, 0.0f, 0x1.4ae0f8p-12f, 0.0f, 0x1.ea08c8p-66f, 0.0f,
     0x1.f7344p-5f, 0.0f, 0.0f, 0x1.4d879p-64f, 0x1.79b4e4p-3f, 0.0f,
     0x1.116ee2p-124f, 0x1.6fede4p-122f, 0x1.01605ap-4f, 0.0f, 0x1.48b896p-89f, 0.0f,
     0.0f, 0x1.767e0cp-49f, 0.0f, 0x1.37c4c6p-10f, 0x1.1ebbbep-46f, 0.0f,
     0x1.c147c4p-16f, 0.0f, 0.0f, 0.0f, 0x1.283178p-101f, 0.0f, 0.0f, 0.0f,
     0x1.29a47ap-3f, 0.0f, 0x1.433478p-45f, 0.0f, 0x1.e25ebcp-125f, 0.0f, 0.0f, 0.0f,
     0x1.dd962ep-90f, 0x1.d4e83p-95f, 0.0f, 0.0f, 0x1.4bd52p-111f, 0.0f, 0.0f, 0.0f,
     0x1.10b42ep-108f, 0x1.9fa854p-11f, 0.0f, 0.0f, 0x1.1e452ap-81f, 0.0f,
     0x1.8fd17ep-124f, 0x1.ff9adep-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.485842p-79f,
     0x1.a83cd8p-104f, 0x1.d9ffc4p-65f, 0x1.3d1146p-108f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f
};
static const float external_bench_wrapper_input_table_arg1[1008]  = {
     0x1.4ec14ap-104f, 0.0f, 0x1.45b41ep-115f, 0x1.f8fb26p-83f, 0.0f,
     0x1.2a3016p-96f, 0x1.52f57ep-80f, 0.0f, 0x1.f29c84p-75f, 0.0f, 0.0f,
     0x1.e63454p-75f, 0.0f, 0.0f, 0x1.469344p-38f, 0x1.be9f58p-29f, 0.0f,
     0x1.57fca8p-75f, 0.0f, 0.0f, 0.0f, 0x1.d2f7dcp-27f, 0.0f, 0.0f, 0x1.f89872p-87f,
     0.0f, 0.0f, 0x1.5612cp-58f, 0x1.8f3036p-70f, 0x1.e4947ap-121f, 0.0f, 0.0f,
     0x1.89c7ap-63f, 0.0f, 0x1.47f4d2p-111f, 0x1.b236p-7f, 0.0f, 0.0f, 0x1.3f959p-82f,
     0x1.33a8f8p-121f, 0x1.b12ba4p-74f, 0x1.02a08p-68f, 0x1.a4815cp-5f, 0.0f, 0.0f,
     0x1.b2ea16p-70f, 0.0f, 0.0f, 0.0f, 0x1.6bd296p-56f, 0x1.7dabbp-7f, 0.0f,
     0x1.0bba4p-19f, 0.0f, 0x1.733a9ep-123f, 0x1.e9c3c4p-58f, 0x1.2fc078p-27f, 0.0f,
     0.0f, 0x1.c3c39p-77f, 0.0f, 0.0f, 0x1.ced65ap-111f, 0x1.829a96p-53f,
     0x1.630402p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ea909p-3f, 0x1.b49224p-12f,
     0.0f, 0.0f, 0.0f, 0x1.3f0c6p-112f, 0.0f, 0.0f, 0.0f, 0x1.891b3p-93f, 0.0f, 0.0f,
     0x1.68ccf8p-94f, 0.0f, 0x1.c2640ep-16f, 0.0f, 0.0f, 0x1.0e6da6p-73f,
     0x1.95f0f6p-70f, 0.0f, 0.0f, 0x1.93a994p-98f, 0.0f, 0.0f, 0x1.e9195ap-54f,
     0x1.f80decp-82f, 0x1.7b1a9ep-98f, 0.0f, 0x1.4088c2p-74f, 0x1.5955cap-121f,
     0x1.149184p-62f, 0x1.e0d658p-67f, 0x1.cc204ap-24f, 0x1.18c98cp-34f,
     0x1.35a50ep-29f, 0.0f, 0.0f, 0x1.653ba4p-99f, 0x1.d64f66p-102f, 0.0f, 0.0f,
     0x1.33e8f6p-42f, 0.0f, 0x1.b537dap-50f, 0.0f, 0.0f, 0.0f, 0x1.8a9246p-110f,
     0x1.815016p-92f, 0x1.045928p-111f, 0.0f, 0.0f, 0x1.6ba86ep-75f, 0.0f,
     0x1.4fd62cp-51f, 0x1.31d582p-126f, 0.0f, 0.0f, 0x1.e340e6p-108f, 0x1.10aa6p-93f,
     0.0f, 0x1.b4cedp-83f, 0.0f, 0x1.d38bp-6f, 0.0f, 0x1.f62d08p-45f,
     0x1.5173a4p-115f, 0x1.c5388ap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f4f4ep-58f, 0.0f,
     0.0f, 0x1.2688e8p-34f, 0.0f, 0x1.8caa82p-27f, 0x1.e8943ap-124f, 0x1.226ccap-109f,
     0.0f, 0.0f, 0x1.f15488p-70f, 0x1.6baf76p-80f, 0x1.0abd6p-95f, 0x1.2ebd92p-80f,
     0x1.f3f10ap-29f, 0.0f, 0x1.d0663ep-44f, 0x1.a2d58p-65f, 0x1.9c798ep-44f,
     0x1.2abfdcp-92f, 0x1.fa6624p-8f, 0.0f, 0x1.244b56p-100f, 0x1.70a604p-103f, 0.0f,
     0.0f, 0x1.c60568p-61f, 0x1.076b6cp-27f, 0x1.183f3ap-45f, 0x1.f834fcp-68f, 0.0f,
     0x1.e25088p-42f, 0x1.f049b2p-83f, 0x1.4b1998p-111f, 0.0f, 0x1.cf3464p-7f, 0.0f,
     0.0f, 0x1.1fc508p-56f, 0x1.7de26ap-125f, 0.0f, 0.0f, 0x1.1f205cp-42f,
     0x1.2afe3ap-43f, 0x1.b3d1cep-125f, 0.0f, 0x1.ba1e9p-85f, 0.0f, 0.0f, 0.0f,
     0x1.90dbaep-123f, 0x1.8cf25p-126f, 0.0f, 0x1.0057c8p-88f, 0.0f, 0x1.bc273ap-82f,
     0.0f, 0.0f, 0.0f, 0x1.18b464p-117f, 0x1.63393ep-112f, 0x1.0e92d6p-108f, 0.0f,
     0x1.021dbep-24f, 0.0f, 0.0f, 0.0f, 0x1.6529bcp-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2a499ap-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b175ep-121f, 0x1.6227cep-119f, 0x1.38e814p-117f, 0x1.97b892p-36f, 0.0f,
     0.0f, 0x1.6ea52ap-70f, 0x1.482448p-118f, 0x1.6ffd2ep-31f, 0x1.b643dep-71f, 0.0f,
     0x1.9d9734p-19f, 0x1.de94b2p-31f, 0.0f, 0.0f, 0x1.cdbe7p-125f, 0.0f, 0.0f,
     0x1.35471ap-25f, 0x1.132098p-105f, 0x1.a5d8ep-33f, 0.0f, 0x1.2b9776p-21f, 0.0f,
     0.0f, 0x1.07a59p-43f, 0x1.fd8f26p-16f, 0.0f, 0x1.2f0deep-22f, 0x1.3313d6p-112f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.133682p-74f, 0.0f, 0x1.a6fc06p-53f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.da1d8ap-15f, 0x1.17eefep-113f, 0x1.e09d68p-113f,
     0x1.8345b4p-81f, 0.0f, 0x1.d3084cp-31f, 0x1.ef2922p-57f, 0.0f, 0x1.b5d368p-13f,
     0.0f, 0.0f, 0x1.6552dap-85f, 0.0f, 0.0f, 0x1.1c2bcap-17f, 0.0f, 0.0f,
     0x1.b6215p-82f, 0.0f, 0x1.ae06fp-57f, 0x1.ddd832p-5f, 0x1.08de34p-88f, 0.0f,
     0x1.21f10ep-95f, 0.0f, 0.0f, 0x1.d7fb68p-114f, 0.0f, 0.0f, 0x1.d6b4b8p-100f,
     0x1.b3e3eep-93f, 0.0f, 0x1.7ba9dcp-94f, 0.0f, 0x1.aeb54ap-4f, 0.0f, 0.0f,
     0x1.373034p-112f, 0x1.3f005ap-68f, 0x1.a25e18p-57f, 0.0f, 0.0f, 0x1.de2a68p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.270da4p-4f, 0.0f, 0.0f,
     0.0f, 0x1.172c7ep-55f, 0.0f, 0.0f, 0x1.26f3bap-17f, 0.0f, 0x1.81e5fap-83f,
     0x1.820baap-114f, 0.0f, 0.0f, 0x1.25dcf4p-21f, 0.0f, 0.0f, 0x1.0a7bd2p-76f, 0.0f,
     0.0f, 0.0f, 0x1.c712bap-18f, 0.0f, 0.0f, 0x1.c9bef2p-69f, 0.0f, 0.0f,
     0x1.0a0248p-5f, 0.0f, 0x1.b6435ep-3f, 0x1.03abeep-77f, 0.0f, 0.0f,
     0x1.d6b022p-62f, 0x1.69d624p-52f, 0.0f, 0.0f, 0x1.f08a74p-18f, 0x1.d05f5p-52f,
     0.0f, 0x1.d5f6dp-50f, 0x1.7fc03p-21f, 0x1.4f71ep-89f, 0.0f, 0.0f, 0.0f,
     0x1.edb83cp-40f, 0x1.9a3fbep-101f, 0x1.463d8ap-111f, 0x1.126384p-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e3b9dp-104f, 0x1.793266p-71f, 0.0f, 0.0f, 0.0f, 0x1.ccde34p-48f,
     0x1.9d1b74p-73f, 0.0f, 0.0f, 0x1.191dfep-39f, 0x1.f8e9bp-95f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.79aba4p-104f, 0x1.168b2cp-126f, 0.0f, 0.0f, 0.0f, 0x1.fd0412p-7f,
     0x1.b3066cp-47f, 0x1.33b89p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.050b1p-57f,
     0x1.0ae67ap-71f, 0x1.3585e4p-44f, 0x1.82fa9p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ec4506p-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.36f07cp-23f, 0x1.473914p-37f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a7b94cp-76f, 0x1.d351b2p-121f, 0.0f, 0x1.a929acp-60f,
     0x1.e1b242p-16f, 0.0f, 0x1.e6e96cp-39f, 0.0f, 0.0f, 0x1.75de96p-114f, 0.0f, 0.0f,
     0x1.fd3d32p-54f, 0x1.0f1ff8p-16f, 0x1.23365ap-85f, 0.0f, 0x1.a68ae2p-22f,
     0x1.c9ac56p-57f, 0.0f, 0.0f, 0.0f, 0x1.54cc0cp-24f, 0.0f, 0x1.5aeef2p-99f, 0.0f,
     0.0f, 0x1.ca23c8p-58f, 0.0f, 0x1.b0e566p-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d3c65cp-67f, 0.0f, 0x1.15a72p-36f, 0.0f, 0x1.ecc4d8p-61f, 0x1.9f675ap-21f,
     0x1p0f, 0.0f, 0x1.71f7dcp-31f, 0.0f, 0.0f, 0.0f, 0x1.5a199p-86f, 0.0f,
     0x1.7e7c5cp-29f, 0x1.b2ad24p-124f, 0.0f, 0.0f, 0x1.4a645ep-89f, 0x1.d7e496p-79f,
     0.0f, 0x1.e551bap-73f, 0.0f, 0x1.c3e8d8p-56f, 0x1.dcfeb6p-90f, 0.0f, 0.0f,
     0x1.ebddaap-47f, 0x1.31a0ccp-15f, 0x1.737acp-21f, 0.0f, 0.0f, 0.0f,
     0x1.bf99bep-93f, 0x1.4c4d8ap-19f, 0.0f, 0x1.58c06ap-93f, 0.0f, 0.0f, 0.0f,
     0x1.f71818p-77f, 0x1.885d42p-90f, 0.0f, 0.0f, 0.0f, 0x1.f1a5b8p-86f, 0.0f, 0.0f,
     0.0f, 0x1.ff602p-35f, 0.0f, 0x1.4a0196p-67f, 0.0f, 0.0f, 0.0f, 0x1.af3c54p-10f,
     0x1.bfa1bap-19f, 0x1.194328p-4f, 0x1.b41a62p-78f, 0x1.cd5386p-68f, 0.0f,
     0x1.18839cp-50f, 0x1.aaa124p-94f, 0x1.1bc108p-44f, 0.0f, 0x1.3bde0ep-117f, 0.0f,
     0.0f, 0.0f, 0x1.a2a21ep-60f, 0.0f, 0x1.d5a11ap-82f, 0x1.a98f1ep-104f,
     0x1.c8bd9ep-27f, 0x1.55de2ep-95f, 0x1.8f8c54p-29f, 0x1.eceecp-17f, 0.0f, 0.0f,
     0.0f, 0x1.361316p-10f, 0x1.45d7cep-90f, 0x1.dd62c4p-96f, 0.0f, 0x1.46e58p-49f,
     0.0f, 0x1.acf3fap-5f, 0x1.571d58p-33f, 0.0f, 0x1.06fb3ap-98f, 0x1.531d7cp-118f,
     0x1.88ff62p-75f, 0x1.3269fep-51f, 0.0f, 0.0f, 0.0f, 0x1.1f23fp-49f,
     0x1.927614p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.061ee6p-52f, 0x1.49d68ep-104f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce7448p-1f, 0x1.48f604p-4f, 0.0f, 0x1.21004p-96f, 0.0f,
     0.0f, 0x1.3fcc94p-116f, 0x1.f04c5ap-97f, 0x1.5877f8p-67f, 0.0f, 0x1.77e748p-111f,
     0x1.604e4p-70f, 0.0f, 0x1.31f098p-124f, 0x1.fe2a7cp-107f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.58097ep-48f, 0x1.e1f89p-25f, 0x1.f40c28p-51f, 0x1.32d20cp-46f,
     0x1.04ff82p-5f, 0.0f, 0x1.835f3cp-113f, 0x1.d5d6dp-21f, 0x1.14edf6p-41f,
     0x1.3b9bd6p-27f, 0.0f, 0x1.2bad58p-50f, 0.0f, 0x1.26c114p-24f, 0x1.bf4ef2p-23f,
     0.0f, 0x1.6f80acp-38f, 0.0f, 0x1.a332a4p-7f, 0.0f, 0.0f, 0x1.182d96p-65f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.002bb8p-60f, 0x1.362202p-90f, 0.0f, 0x1.d6f6bep-25f,
     0x1.4c8514p-83f, 0.0f, 0x1p0f, 0x1.f1b506p-69f, 0x1.dda176p-80f, 0x1.e79a6cp-32f,
     0x1.9ed374p-50f, 0x1.dd590ap-122f, 0.0f, 0.0f, 0.0f, 0x1.6b2a4cp-102f,
     0x1.48825p-84f, 0.0f, 0x1.91f1bp-119f, 0.0f, 0.0f, 0x1.cf15a8p-34f,
     0x1.079daep-42f, 0x1.40afecp-32f, 0x1p0f, 0x1.ffc0a6p-69f, 0x1.ae93e6p-82f, 0.0f,
     0.0f, 0x1.a127b2p-69f, 0x1.bb4496p-109f, 0.0f, 0x1.e1a042p-116f, 0x1.b9f04p-99f,
     0x1.a21654p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.96240ep-110f, 0x1.48fff6p-71f,
     0x1.bedf8ep-21f, 0x1.b4ba96p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.00458p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.387fc2p-93f, 0.0f, 0x1.73d542p-43f,
     0x1.8ee3d4p-6f, 0.0f, 0.0f, 0x1.ed2594p-60f, 0x1.f3f242p-13f, 0x1.9a4552p-63f,
     0.0f, 0x1.b42eb8p-99f, 0x1.bc959ep-89f, 0.0f, 0.0f, 0x1.fab75ap-15f,
     0x1.4403a4p-101f, 0x1.fde084p-58f, 0x1.b5284p-10f, 0x1.4a7236p-91f,
     0x1.d4a7fap-58f, 0.0f, 0x1.2c0b16p-100f, 0.0f, 0x1.691a7p-37f, 0.0f,
     0x1.cbf33cp-117f, 0.0f, 0x1.1fdd4ep-12f, 0x1.803852p-106f, 0.0f, 0.0f, 0.0f,
     0x1.df8b9ep-17f, 0.0f, 0x1.5263a8p-117f, 0x1.87a062p-36f, 0.0f, 0.0f, 0.0f,
     0x1.d0f1e4p-107f, 0.0f, 0.0f, 0x1.258b42p-113f, 0x1.a84996p-47f, 0x1.84380cp-44f,
     0x1.62d218p-87f, 0.0f, 0x1.9fd5f4p-75f, 0.0f, 0.0f, 0.0f, 0x1p0f,
     0x1.424ce8p-109f, 0x1.9ca27p-36f, 0.0f, 0.0f, 0x1.c5b212p-5f, 0.0f,
     0x1.6a4ed2p-83f, 0.0f, 0x1.9b17bap-26f, 0.0f, 0.0f, 0x1.4d6212p-52f, 0.0f,
     0x1.c70a1p-13f, 0.0f, 0.0f, 0x1.a1990cp-36f, 0x1.85ebfep-14f, 0.0f,
     0x1.586716p-29f, 0.0f, 0.0f, 0x1.81988ep-41f, 0x1.f95a96p-11f, 0.0f, 0.0f,
     0x1.5fb644p-119f, 0.0f, 0x1.838a3ap-94f, 0x1.47ceeep-83f, 0x1.a9df86p-67f,
     0x1.be287cp-14f, 0x1.4b4574p-55f, 0x1.e27952p-74f, 0x1.030f9p-33f,
     0x1.8137a8p-104f, 0.0f, 0.0f, 0.0f, 0x1.f2b924p-112f, 0.0f, 0x1.5b56e8p-21f,
     0.0f, 0.0f, 0x1.f5c88p-59f, 0.0f, 0x1.f39edp-115f, 0x1.b516eep-119f,
     0x1.ee7d06p-82f, 0.0f, 0.0f, 0x1.8a9b6cp-8f, 0x1.80d3e4p-75f, 0x1.22906ep-8f,
     0x1.aa509ep-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2bdba6p-38f, 0.0f, 0.0f,
     0x1.ef598cp-32f, 0x1.5528a2p-58f, 0.0f, 0x1.a856e8p-90f, 0.0f, 0x1.7abeb6p-73f,
     0x1.faf54ap-85f, 0x1.d524ecp-68f, 0x1.92a84cp-27f, 0.0f, 0x1.a48f96p-123f,
     0x1.0db866p-92f, 0.0f, 0.0f, 0.0f, 0x1.e101p-44f, 0.0f, 0.0f, 0x1.b8962cp-101f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.266188p-41f, 0x1.4e7556p-25f, 0x1.c7a224p-87f,
     0x1.8244c4p-45f, 0x1.d5b546p-18f, 0x1.10e8f6p-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c26f5cp-40f, 0x1.79298cp-90f, 0x1.c76196p-28f, 0x1.8e76bp-37f,
     0x1.efdd94p-82f, 0x1.1c74f4p-51f, 0x1.2404d6p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.0113p-101f, 0.0f, 0.0f, 0x1.41fff2p-16f, 0x1.f0dd12p-2f,
     0x1.88505cp-125f, 0.0f, 0.0f, 0x1.38f06p-47f, 0.0f, 0.0f, 0.0f, 0x1.1b2e6ep-43f,
     0x1.d12d6p-98f, 0x1.d7729p-74f, 0x1.cf7704p-21f, 0x1.f23f92p-15f, 0x1.5d2072p-8f,
     0.0f, 0x1.5fb506p-82f, 0.0f, 0x1.2760bep-102f, 0x1p0f, 0.0f, 0x1.807318p-17f,
     0x1.883546p-122f, 0x1.0853b4p-92f, 0x1.a77b4p-92f, 0x1.4e49c8p-49f,
     0x1.bac83p-18f, 0.0f, 0x1.28ee92p-89f, 0x1.1d17f2p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2c506ep-124f, 0.0f, 0x1.ef564ap-48f, 0.0f, 0.0f, 0x1.574ccep-29f, 0.0f,
     0x1.a5eecap-126f, 0.0f, 0.0f, 0.0f, 0x1.8ef4a4p-5f, 0.0f, 0x1.bf22a8p-93f, 0.0f,
     0x1.a20e0cp-110f, 0x1.3e642p-50f, 0.0f, 0x1.b1d44ap-81f, 0.0f, 0.0f, 0.0f,
     0x1.d3c04ap-68f, 0x1.8b46fp-74f, 0.0f, 0.0f, 0.0f, 0x1.eab8bcp-6f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.866a7ep-30f, 0x1.6f31ep-100f, 0.0f, 0x1.c5f054p-115f,
     0.0f, 0.0f, 0x1.f8008cp-112f, 0.0f, 0x1.b3f3fep-58f, 0.0f, 0x1.c659f8p-42f,
     0x1.ca5e04p-97f, 0.0f, 0.0f, 0x1.6d2e2p-102f, 0.0f, 0.0f, 0x1.1dd47ep-114f,
     0x1.ee707ep-91f, 0x1.9e173ep-102f, 0x1.5ab986p-11f, 0x1.dc803cp-52f,
     0x1.b5fd54p-90f, 0.0f, 0.0f, 0x1.26cd4ap-30f, 0x1.043844p-35f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0x1.a1fd02p-48f, 0.0f, 0x1.0e3b6cp-69f, 0x1.e94ad8p-90f,
     0x1.8ac9ep-73f, 0.0f, 0.0f, 0.0f, 0x1.a8d6f6p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.13e95ap-9f, 0.0f, 0.0f, 0x1.6e54b6p-73f, 0x1.290906p-121f, 0x1.e564a4p-69f,
     0.0f, 0x1.60dcp-82f, 0.0f, 0x1.508b72p-32f, 0.0f, 0x1.4e47b4p-43f,
     0x1.6478dp-21f, 0x1.d7ae9cp-114f, 0x1.f93d9p-7f, 0.0f, 0.0f, 0x1.ab73cep-68f,
     0.0f, 0x1.837eb8p-1f, 0x1.ee1866p-44f, 0.0f, 0.0f, 0x1.032c0cp-100f, 0x1p0f,
     0x1.b312dep-103f, 0x1.44bbd4p-43f, 0.0f, 0.0f, 0.0f, 0x1.6eeb2p-24f,
     0x1.0af4f8p-23f, 0x1.d31ce8p-21f, 0x1.36e832p-84f, 0x1.afe3b6p-46f,
     0x1.ef284ap-55f, 0x1.e8ff2cp-91f, 0.0f, 0x1.5b933cp-31f, 0x1.56846ep-112f, 0.0f,
     0x1.c5a4a6p-76f, 0.0f, 0.0f, 0x1.cbdbb2p-98f, 0x1.875e82p-114f, 0.0f,
     0x1.42adb4p-3f, 0x1.e4faf4p-86f, 0.0f, 0x1.37dde2p-87f, 0.0f, 0x1.67edb4p-7f,
     0x1.f81218p-59f, 0.0f, 0x1.e6316ap-22f, 0x1.e54d56p-124f, 0x1.1203d4p-84f, 0.0f,
     0x1.77424ap-39f, 0x1.9bf39ep-110f, 0x1.39032ep-31f, 0.0f, 0.0f, 0.0f,
     0x1.3cebbap-105f, 0x1.f14d4cp-53f, 0.0f, 0.0f, 0x1.a8b9b2p-53f
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
            ml_float8_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float8_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_float8_t*)(external_bench_wrapper_input_table_arg1+ i)), 32);
            tmp2 = Sleef_fminf8_kvx(tmp0, tmp1);
            memcpy(((ml_float8_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(8);
            i = tmp4;
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
    printf("Sleef_fminf8_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_fminf8_kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
