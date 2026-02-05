/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinf8_u10kvx.c --function Sleef_finz_sinf8_u10kvx \
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
     0.0f, 0.0f, 0.0f, 0x1.56155ep-124f, 0x1.2454b2p-45f, 0.0f, 0x1.b8202ep-68f,
     0x1.2bd12ep-87f, 0.0f, 0x1.e2655cp-96f, 0.0f, 0x1.36fa02p-4f, 0.0f,
     0x1.7a72b6p-96f, 0.0f, 0.0f, 0x1.2ba518p-117f, 0.0f, 0x1.14b158p-120f, 0.0f,
     0x1.c6ef6cp-29f, 0x1.c5b05ap-113f, 0.0f, 0x1.7f0844p-38f, 0.0f, 0.0f, 0.0f,
     0x1.f61662p-71f, 0x1.1963b8p-5f, 0x1.687fd2p-80f, 0.0f, 0x1.a22e7ep-102f,
     0x1.925ff4p-85f, 0x1.024f28p-98f, 0x1.7aff3ep-92f, 0.0f, 0x1.8863a2p-10f, 0.0f,
     0x1.ced1p-20f, 0.0f, 0.0f, 0x1.ab249p-23f, 0x1.10951cp-1f, 0.0f, 0.0f, 0.0f,
     0x1.77f64ep-45f, 0x1.9a7fep-51f, 0x1.551e0ap-76f, 0x1.9959d4p-20f, 0.0f,
     0x1.7d2818p-69f, 0.0f, 0.0f, 0x1.c1ccep-30f, 0x1.cb7f9p-104f, 0.0f, 0.0f,
     0x1.6d1988p-67f, 0x1.700f94p-71f, 0.0f, 0.0f, 0x1.447c26p-115f, 0x1.452a62p-10f,
     0.0f, 0x1.9bf7cap-31f, 0.0f, 0.0f, 0x1.23645cp-25f, 0x1.d20df6p-1f, 0.0f, 0.0f,
     0x1.436e2ap-102f, 0.0f, 0x1.c7b316p-116f, 0x1.576a1ap-63f, 0x1.3e643p-43f,
     0x1.94c9d8p-81f, 0x1.6e705ap-90f, 0.0f, 0.0f, 0.0f, 0x1.1eef64p-17f, 0.0f, 0.0f,
     0x1.f69096p-126f, 0x1.4fe606p-102f, 0x1.48e7dp-60f, 0x1.424014p-34f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1875bep-115f, 0.0f, 0.0f, 0x1.175bep-19f,
     0x1.b10dfcp-73f, 0x1.9f741cp-102f, 0.0f, 0x1.a3e686p-67f, 0.0f, 0x1.63e46p-54f,
     0.0f, 0.0f, 0.0f, 0x1.9f6446p-95f, 0.0f, 0x1.fb2484p-69f, 0.0f, 0.0f, 0.0f,
     0x1.b47156p-13f, 0x1.f65eb2p-106f, 0x1.b191bcp-4f, 0x1.94dde4p-4f,
     0x1.b0109cp-14f, 0.0f, 0.0f, 0x1.6c951p-106f, 0x1.72af3p-44f, 0.0f,
     0x1.120534p-55f, 0.0f, 0.0f, 0x1.958afp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.6a4184p-24f, 0x1.e1f3dcp-116f, 0.0f, 0x1.e7339cp-64f, 0x1.15d33ap-6f,
     0x1.e4122ap-4f, 0x1.36f608p-35f, 0x1.ea1ea4p-116f, 0x1.42e94ep-58f,
     0x1.42d292p-10f, 0x1.5f59b2p-57f, 0x1.745afep-49f, 0.0f, 0x1.fe773ep-43f, 0.0f,
     0x1.5f9d62p-44f, 0x1.c55166p-34f, 0.0f, 0.0f, 0x1.13ba64p-94f, 0.0f, 0.0f,
     0x1.966574p-82f, 0x1.fe15c6p-112f, 0x1.1c743p-28f, 0.0f, 0.0f, 0.0f,
     0x1.8c0bfp-21f, 0x1.4e3c6ap-35f, 0x1.da66d2p-19f, 0x1.f7e498p-64f,
     0x1.dcc694p-12f, 0.0f, 0x1.5528p-16f, 0.0f, 0x1.13d4b2p-116f, 0x1.df942ep-115f,
     0.0f, 0.0f, 0x1.06b952p-121f, 0.0f, 0x1.c1a07p-90f, 0x1.63680ap-41f,
     0x1.1cb252p-26f, 0.0f, 0.0f, 0.0f, 0x1.fc2334p-67f, 0x1.8d0bfep-74f, 0.0f,
     0x1.e1a466p-20f, 0x1.bb9e64p-107f, 0.0f, 0x1.9e74a6p-110f, 0.0f, 0.0f,
     0x1.a94888p-25f, 0x1.0496eap-57f, 0x1.44fd84p-98f, 0x1.2da49cp-23f,
     0x1.760c14p-27f, 0.0f, 0.0f, 0.0f, 0x1.155382p-40f, 0x1.b8ab9ap-63f,
     0x1.38295ep-31f, 0x1.c2125ap-108f, 0.0f, 0.0f, 0x1.f04d46p-120f, 0.0f, 0.0f,
     0x1.c4a8d2p-121f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e5da6ap-108f, 0.0f, 0.0f, 0.0f,
     0x1.e00e9cp-75f, 0.0f, 0x1.2aefcep-124f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37eeb6p-13f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4ad1p-124f, 0.0f,
     0x1.33c668p-26f, 0x1.0056dep-123f, 0x1.435caap-105f, 0x1.8116e2p-101f,
     0x1.79d5f6p-122f, 0.0f, 0x1.dbd6eap-11f, 0.0f, 0x1.64bee2p-40f, 0.0f,
     0x1.e0c242p-121f, 0.0f, 0x1.9b8f3p-55f, 0.0f, 0.0f, 0x1.d9eb66p-2f, 0.0f,
     0x1.26fee6p-51f, 0x1.b31c2ap-72f, 0x1.f4d04p-56f, 0x1.083dd2p-51f, 0.0f, 0.0f,
     0x1.68f946p-9f, 0x1.341772p-15f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d65118p-86f, 0.0f, 0x1.bedbe2p-79f, 0.0f,
     0x1.01b3dcp-94f, 0.0f, 0x1.7bc5a4p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e56eep-33f,
     0x1.5b34bp-40f, 0x1.c3ee2p-81f, 0.0f, 0.0f, 0x1.47ed38p-22f, 0.0f,
     0x1.fbae28p-4f, 0x1.3b3d94p-14f, 0.0f, 0x1.6b7aa4p-50f, 0x1.3a6a5cp-115f,
     0x1.eae454p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e4c04p-3f, 0.0f, 0x1.d128b2p-85f,
     0x1.1b577ap-111f, 0x1.852744p-86f, 0.0f, 0.0f, 0.0f, 0x1.54444ap-25f, 0.0f, 0.0f,
     0x1.38cb04p-88f, 0x1.6b3cep-72f, 0x1.719b58p-58f, 0x1.233222p-93f, 0.0f, 0.0f,
     0x1.cfe1a4p-2f, 0x1.12c216p-77f, 0x1.9f785ap-88f, 0x1.7b450cp-119f, 0.0f, 0.0f,
     0.0f, 0x1.b36362p-118f, 0x1.272656p-79f, 0.0f, 0.0f, 0.0f, 0x1.c98fd6p-60f,
     0x1.0dcfcap-57f, 0x1.22d0e4p-108f, 0x1.0f0ec4p-74f, 0x1.ed0902p-84f, 0.0f, 0.0f,
     0.0f, 0x1.cf794cp-48f, 0.0f, 0.0f, 0.0f, 0x1.483decp-68f, 0x1.7a91b4p-117f, 0.0f,
     0.0f, 0.0f, 0x1.824e04p-11f, 0x1.2721e4p-62f, 0x1.c34e96p-114f, 0x1.42449p-1f,
     0.0f, 0.0f, 0.0f, 0x1.ad20a6p-40f, 0.0f, 0x1.49fe46p-12f, 0x1.d60212p-82f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.966b86p-53f, 0x1.6780d8p-47f, 0x1.f3c48ep-119f,
     0x1.7b3b1ep-6f, 0.0f, 0x1.9a619p-75f, 0.0f, 0x1.98679ap-34f, 0.0f,
     0x1.8c3cc6p-23f, 0.0f, 0x1.674a1ep-17f, 0.0f, 0.0f, 0.0f, 0x1.035b98p-8f, 0.0f,
     0.0f, 0.0f, 0x1.c945a6p-47f, 0.0f, 0x1.1c6022p-82f, 0.0f, 0.0f, 0.0f,
     0x1.ec99b2p-78f, 0x1.efa8a2p-126f, 0.0f, 0.0f, 0x1.1640aap-65f, 0x1.a41dap-21f,
     0.0f, 0x1p0f, 0x1.a9166ep-123f, 0.0f, 0.0f, 0x1.b59f14p-12f, 0.0f,
     0x1.ae2f86p-24f, 0x1.4e8c1ep-119f, 0.0f, 0x1.28c1d2p-61f, 0.0f, 0x1.66fef4p-33f,
     0.0f, 0x1.10d7b4p-38f, 0x1.5dd422p-122f, 0x1.44d1d6p-120f, 0x1.7facaap-21f, 0.0f,
     0.0f, 0.0f, 0x1.fff8fep-101f, 0.0f, 0.0f, 0.0f, 0x1.673414p-30f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.4754aep-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.432438p-43f,
     0.0f, 0x1.060886p-3f, 0.0f, 0.0f, 0x1.d93482p-69f, 0x1.54b65cp-52f, 0.0f,
     0x1.bd862cp-119f, 0.0f, 0.0f, 0x1.f0c15ap-26f, 0.0f, 0x1.46c10ap-103f, 0.0f,
     0x1.931802p-80f, 0.0f, 0.0f, 0x1.28229ap-47f, 0x1.a31058p-25f, 0x1.a1476ap-41f,
     0x1.1bc8dep-31f, 0.0f, 0.0f, 0x1.1a83d6p-26f, 0.0f, 0x1.6a1c5ep-46f,
     0x1.bb7dbap-105f, 0x1.4dd0b4p-109f, 0.0f, 0.0f, 0.0f, 0x1.78d9e2p-121f,
     0x1.8317e8p-43f, 0x1.28db0ap-32f, 0.0f, 0x1.9865dap-60f, 0.0f, 0x1.993138p-35f,
     0.0f, 0.0f, 0.0f, 0x1.e39f54p-84f, 0.0f, 0.0f, 0.0f, 0x1.a2293cp-90f,
     0x1.0c6756p-71f, 0.0f, 0x1.97bfbcp-114f, 0x1.391afap-91f, 0x1.32e0a6p-34f,
     0x1.caef44p-53f, 0.0f, 0.0f, 0x1.ffc068p-87f, 0x1.54bfeep-7f, 0.0f, 0.0f,
     0x1.c97a82p-36f, 0.0f, 0x1.ca9432p-76f, 0x1.bbfb78p-53f, 0x1.938becp-122f, 0.0f,
     0x1.bbf8dep-29f, 0.0f, 0x1.3ddbe8p-76f, 0x1.c23584p-42f, 0.0f, 0x1.37899ap-11f,
     0x1.e759f8p-71f, 0.0f, 0.0f, 0.0f, 0x1.6b9616p-104f, 0x1.3eb95ap-31f,
     0x1.d97652p-116f, 0x1.7c6a74p-93f, 0.0f, 0.0f, 0x1.baf17cp-31f, 0x1.071efcp-16f,
     0x1.d3b24ep-32f, 0.0f, 0x1.fa7d28p-80f, 0x1.9579e8p-102f, 0.0f, 0.0f,
     0x1.e39142p-117f, 0x1.d14352p-53f, 0.0f, 0x1.b80468p-114f, 0.0f, 0x1.bab408p-73f,
     0.0f, 0x1.c58198p-119f, 0.0f, 0x1.7a1308p-76f, 0.0f, 0.0f, 0.0f, 0x1.c80a8p-9f,
     0x1.4da52ep-51f, 0.0f, 0x1.7a25c4p-59f, 0x1.4e76e8p-24f, 0.0f, 0.0f,
     0x1.a03602p-72f, 0x1.3a3978p-1f, 0x1.85b03ep-50f, 0x1.aee89ap-2f,
     0x1.b71168p-99f, 0.0f, 0.0f, 0x1.091bcp-75f, 0x1.db37bap-9f, 0.0f,
     0x1.e6ae14p-117f, 0.0f, 0x1.7f44bp-98f, 0x1.bd104p-19f, 0x1.7be3ccp-41f, 0.0f,
     0x1.d48abcp-123f, 0.0f, 0.0f, 0.0f, 0x1.207126p-116f, 0x1.510014p-14f,
     0x1.cf0954p-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2576bp-42f,
     0x1.9f085p-22f, 0.0f, 0x1.058f34p-105f, 0.0f, 0.0f, 0.0f, 0x1.4ab62ap-43f, 0.0f,
     0.0f, 0.0f, 0x1.d8c896p-31f, 0x1.4dd1dcp-76f, 0x1.2b14ep-53f, 0.0f, 0.0f,
     0x1.6c2d08p-72f, 0x1.1f57dp-9f, 0.0f, 0.0f, 0.0f, 0x1.ec6d2cp-124f,
     0x1.9ae404p-81f, 0x1.7e6084p-15f, 0x1.80e53cp-15f, 0.0f, 0.0f, 0.0f,
     0x1.a4068ap-12f, 0x1.f64d54p-105f, 0x1.d2ea9cp-60f, 0.0f, 0x1.3c93b6p-73f,
     0x1.5cb9b8p-60f, 0x1p0f, 0.0f, 0.0f, 0x1.35f142p-21f, 0x1.38484ap-21f,
     0x1.0e2532p-95f, 0x1.b20324p-38f, 0x1.68bf16p-12f, 0x1.204c4ap-110f,
     0x1.33f3e2p-47f, 0.0f, 0x1.382f8ap-80f, 0x1.b355bcp-53f, 0.0f, 0.0f,
     0x1.640e58p-59f, 0x1.9393dep-103f, 0.0f, 0x1.10d798p-96f, 0x1.2298bep-36f,
     0x1.1002b8p-112f, 0.0f, 0x1.753516p-22f, 0x1.e1d43cp-50f, 0x1.bee258p-17f, 0.0f,
     0x1.bc5b8ep-13f, 0.0f, 0x1.b92678p-51f, 0x1.63b004p-47f, 0x1.9abea6p-114f, 0.0f,
     0.0f, 0x1.ae9bc8p-97f, 0x1.358e7ap-53f, 0.0f, 0x1.269ef2p-69f, 0.0f,
     0x1.7386ap-69f, 0.0f, 0.0f, 0x1.da52fap-2f, 0x1.37af7ep-59f, 0.0f,
     0x1.6eaa0ep-119f, 0.0f, 0x1.4e4734p-82f, 0x1.a321cp-90f, 0.0f, 0x1.1863f2p-90f,
     0x1.583d4p-88f, 0.0f, 0.0f, 0.0f, 0x1.3a3da6p-92f, 0.0f, 0.0f, 0x1.390a7ep-96f,
     0x1.a17eep-86f, 0.0f, 0x1.8c1dacp-46f, 0x1.6627fcp-101f, 0x1.deb64ep-2f, 0.0f,
     0.0f, 0x1.e0e246p-64f, 0x1.7ab844p-117f, 0x1.3cfd56p-11f, 0.0f, 0x1.41f8cp-35f,
     0x1.aae898p-102f, 0x1.97bd6ep-79f, 0x1.86fc34p-2f, 0.0f, 0x1.443f6cp-55f,
     0x1.eb982cp-107f, 0x1.265cf8p-92f, 0x1.ead3p-81f, 0x1.4b7c74p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7b9168p-105f, 0.0f, 0x1.9ea544p-112f, 0x1.a15022p-41f,
     0x1.a071aep-28f, 0.0f, 0.0f, 0x1.b2d466p-70f, 0.0f, 0x1.13c992p-101f,
     0x1.c0024ap-10f, 0.0f, 0x1.bf576ap-126f, 0x1.908144p-51f, 0x1.fb3dfap-117f,
     0x1.499172p-123f, 0.0f, 0.0f, 0.0f, 0x1.7f4a5ap-109f, 0.0f, 0.0f,
     0x1.5c8522p-73f, 0x1.0cea3cp-26f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.a27fa8p-71f,
     0.0f, 0x1.487bf6p-30f, 0x1.3a858cp-12f, 0.0f, 0x1.4788bp-119f, 0.0f,
     0x1.40e264p-85f, 0x1.ed9416p-104f, 0.0f, 0x1.00fd92p-40f, 0.0f, 0x1.c4cad2p-9f,
     0.0f, 0x1.8f59d2p-35f, 0x1.d1b416p-52f, 0.0f, 0x1.280d2ep-57f, 0x1.8e6876p-19f,
     0x1.0ef41ap-29f, 0x1.23ef94p-78f, 0x1.1b546ep-88f, 0x1.8c21c2p-91f,
     0x1.67983cp-39f, 0x1.2a69aap-1f, 0.0f, 0.0f, 0.0f, 0x1.14ab6cp-41f,
     0x1.fd963ep-33f, 0x1.3be9ecp-10f, 0.0f, 0x1.b8df42p-40f, 0x1.6e832ap-110f, 0.0f,
     0.0f, 0x1.128ab8p-52f, 0x1.9c7p-42f, 0x1.4782ccp-70f, 0.0f, 0.0f, 0.0f,
     0x1.8d1766p-88f, 0.0f, 0x1.a2c07p-78f, 0x1.7c8d7cp-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6c3408p-14f, 0.0f, 0x1.348284p-30f, 0.0f, 0x1.d17d56p-56f,
     0x1.87bfaep-114f, 0x1.71d48ep-67f, 0x1.466a14p-107f, 0.0f, 0.0f, 0x1.017888p-17f,
     0.0f, 0x1.daa106p-10f, 0x1.20f4aep-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f2b822p-79f, 0x1.0acc5ep-117f, 0x1.daac14p-104f, 0x1.f4488ap-10f, 0.0f,
     0x1.3b2fbcp-31f, 0x1.cec3cap-120f, 0.0f, 0x1.9856a2p-33f, 0.0f, 0.0f, 0.0f,
     0x1.6a955ep-124f, 0x1.b8efc8p-86f, 0x1.1d7bb6p-124f, 0.0f, 0x1.781cb2p-36f,
     0x1.eaafe4p-121f, 0x1.a0e262p-16f, 0.0f, 0x1.379f98p-14f, 0x1.72ca3p-64f, 0.0f,
     0x1.8af25ap-74f, 0.0f, 0.0f, 0x1.5ebe2ep-106f, 0x1.4dfeaap-88f, 0.0f, 0.0f, 0.0f,
     0x1.1931ap-48f, 0x1.f234p-87f, 0.0f, 0.0f, 0.0f, 0x1.0f2b16p-88f,
     0x1.2f907ap-126f, 0.0f, 0.0f, 0.0f, 0x1.9adc4cp-122f, 0x1.d96a2cp-7f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d15d26p-35f, 0.0f, 0x1.e3241ep-16f, 0.0f, 0.0f, 0x1.b9f91ap-104f,
     0x1.72a1e8p-110f, 0.0f, 0x1.382ddap-65f, 0x1.95c932p-22f, 0x1.42426cp-124f,
     0x1p0f, 0.0f, 0x1.270858p-17f, 0x1.5e716ap-80f, 0x1.b9e78ap-93f, 0x1.b345fp-120f,
     0x1.d27a7p-56f, 0x1.341ae6p-75f, 0x1.a144c2p-6f, 0x1.b67fd8p-51f,
     0x1.5cdd48p-76f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.5d1b3p-51f, 0.0f, 0.0f, 0x1p0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d6a366p-93f, 0x1.8ad9e2p-1f, 0.0f,
     0x1.51e492p-65f, 0x1.e18b36p-42f, 0.0f, 0x1.7c5866p-26f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.847ceep-52f, 0.0f, 0.0f, 0x1p0f, 0x1.4b4536p-58f, 0x1.9c761p-30f, 0.0f,
     0x1.788dbap-43f, 0x1.8d4698p-73f, 0.0f, 0x1.6e29f6p-111f, 0.0f, 0.0f, 0.0f,
     0x1.bdcfa4p-6f, 0.0f, 0.0f, 0.0f, 0x1.e13bdap-100f, 0x1.e252c2p-75f,
     0x1.1e7f9p-21f, 0.0f, 0.0f, 0x1.5c1334p-121f, 0.0f, 0x1.a30002p-75f, 0.0f, 0.0f,
     0.0f, 0x1.6bb02ap-51f, 0x1.ebb716p-105f, 0.0f, 0x1.b0db82p-53f, 0.0f, 0.0f,
     0x1.28f85ep-115f, 0x1.482812p-32f, 0.0f, 0x1.864ea4p-99f, 0.0f, 0.0f, 0.0f,
     0x1.5e7d7p-12f, 0x1.a90f48p-44f, 0.0f, 0x1.d839p-79f, 0.0f, 0x1.bd626ep-61f,
     0.0f, 0.0f, 0.0f, 0x1.2d3e08p-56f, 0x1.e857b2p-120f, 0.0f, 0x1.08360ap-107f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b78354p-39f, 0.0f, 0.0f, 0x1.fa7fbp-114f, 0.0f,
     0x1.c2ce94p-59f, 0x1.03ad4ep-52f, 0x1.2e80bap-124f, 0.0f, 0.0f, 0x1.c1176cp-38f,
     0.0f, 0x1.d592a4p-65f, 0x1.65527p-122f, 0x1.2a04a6p-47f, 0.0f, 0x1.4bf75cp-85f,
     0x1.4c38b2p-72f, 0.0f, 0.0f, 0x1.c30d7p-40f, 0x1.3dff8p-91f, 0.0f, 0.0f, 0.0f,
     0x1.f030a8p-21f, 0x1.3ea362p-44f, 0.0f, 0.0f, 0x1.645826p-114f, 0.0f,
     0x1.4ba102p-126f, 0x1.19eddap-90f, 0x1.a6c61cp-1f, 0x1.f4fd92p-10f, 0.0f, 0.0f,
     0.0f, 0x1.8d9a34p-98f, 0x1.2c153p-68f, 0x1.0396a4p-59f, 0x1.722c9cp-17f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f5baap-53f, 0.0f, 0x1.33f266p-116f, 0.0f, 0x1.b27714p-10f,
     0.0f, 0x1.9ba8c2p-52f, 0x1.690708p-29f, 0.0f, 0.0f, 0x1.4d40bcp-49f, 0.0f, 0.0f,
     0x1.6feb12p-46f, 0.0f, 0x1.00e27p-36f, 0x1.50beaap-8f, 0x1.3b81bap-65f, 0.0f,
     0x1.7ad06ap-119f, 0x1.c7ee18p-11f, 0x1.7ce778p-76f, 0x1.7d59d4p-52f
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
            tmp1 = Sleef_finz_sinf8_u10kvx(tmp0);
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
    printf("Sleef_finz_sinf8_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10080000), timer, cpe_measure);
    printf("Sleef_finz_sinf8_u10kvx bench acc [%a, %a, %a, %a, %a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3], global_bench_acc[4], global_bench_acc[5], global_bench_acc[6], global_bench_acc[7]);
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
