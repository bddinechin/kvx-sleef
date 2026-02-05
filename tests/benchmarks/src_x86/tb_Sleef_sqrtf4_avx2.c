/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtf4_avx2128.c --function Sleef_sqrtf4_avx2128 --headers \
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
     0.0f, 0x1.1b04c8p-76f, 0x1.9d45ccp-81f, 0.0f, 0x1.1aecf8p-31f, 0x1.1589bcp-62f,
     0.0f, 0.0f, 0x1.8607eap-38f, 0x1.13ff16p-88f, 0.0f, 0x1.37e43p-47f, 0.0f, 0.0f,
     0x1.975756p-113f, 0.0f, 0.0f, 0x1.7f2cf4p-76f, 0x1.468a52p-2f, 0.0f, 0.0f,
     0x1.874354p-18f, 0x1.9e7518p-107f, 0.0f, 0.0f, 0x1.e3714cp-107f, 0.0f, 0.0f,
     0x1.7d796p-81f, 0.0f, 0x1.7668dp-102f, 0x1.bceab8p-90f, 0.0f, 0.0f,
     0x1.a73ea4p-73f, 0.0f, 0.0f, 0x1.fd179ep-115f, 0.0f, 0x1.3368c4p-43f,
     0x1.68eadap-22f, 0x1.97e572p-65f, 0x1.14f1cp-116f, 0x1.b6befap-47f, 0.0f,
     0x1.0a7162p-73f, 0x1.f7514ep-72f, 0x1.965628p-37f, 0x1.10a3d2p-7f, 0.0f,
     0x1.2e575cp-37f, 0x1.7d56b4p-99f, 0x1.c4d0cep-19f, 0x1.6b2ecp-22f,
     0x1.10c4e2p-2f, 0.0f, 0x1.955d88p-6f, 0.0f, 0x1.90214cp-115f, 0.0f,
     0x1.0f39f8p-5f, 0x1.86e5a8p-46f, 0x1.06b1fep-57f, 0x1.bf6218p-24f,
     0x1.8d233cp-65f, 0x1.94b04cp-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe9d4ap-60f, 0.0f, 0x1.5e14b6p-75f, 0x1.fe75fp-106f, 0x1.0f9caep-101f, 0.0f,
     0.0f, 0.0f, 0x1.31f03cp-78f, 0x1.45d9acp-18f, 0.0f, 0.0f, 0x1.e4944cp-57f, 0.0f,
     0.0f, 0x1.d50e66p-87f, 0.0f, 0.0f, 0x1.9ac956p-109f, 0x1.a7246ap-102f, 0.0f,
     0x1.36dd2cp-71f, 0.0f, 0.0f, 0x1.4e1cecp-68f, 0x1.f80a7cp-103f, 0x1.8b147cp-83f,
     0x1.706adap-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81b4d4p-114f, 0.0f, 0.0f,
     0x1.ca65bep-77f, 0.0f, 0x1.eac068p-101f, 0x1.055d3ep-47f, 0.0f, 0x1.d494fep-90f,
     0x1.306c5ep-74f, 0x1.92dbd2p-57f, 0.0f, 0.0f, 0.0f, 0x1.d26712p-47f,
     0x1.042edp-115f, 0x1.7e6afep-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c667cep-2f, 0.0f,
     0x1.40a44cp-104f, 0x1.a867e8p-87f, 0x1.e32084p-96f, 0x1.e7dd2cp-100f, 0.0f,
     0x1.526ce6p-12f, 0x1.b05da8p-97f, 0.0f, 0x1.05bfa4p-126f, 0.0f, 0x1.6260aap-41f,
     0x1.243fa6p-50f, 0x1.40910ap-107f, 0.0f, 0x1.b8d57ap-121f, 0x1.3d280ap-126f,
     0x1.3ef802p-121f, 0.0f, 0x1.c2fd84p-26f, 0x1.1e2142p-125f, 0x1.89fc76p-93f,
     0x1p0f, 0.0f, 0x1.44584cp-10f, 0.0f, 0x1.d698aep-10f, 0x1.2cd428p-91f, 0.0f,
     0x1.4e2094p-113f, 0.0f, 0.0f, 0.0f, 0x1.f8e53ap-19f, 0x1.a07b64p-94f,
     0x1.557df6p-104f, 0.0f, 0x1.11bf3cp-96f, 0x1.1185dp-31f, 0x1.468992p-78f,
     0x1.4084ep-44f, 0.0f, 0.0f, 0x1.75593ap-33f, 0x1.74c52ep-46f, 0x1.67a5f8p-2f,
     0x1.0f9998p-120f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fba86p-80f, 0x1.457a72p-56f,
     0x1.644388p-69f, 0.0f, 0x1.706d36p-26f, 0x1.6f3066p-98f, 0x1.fdfcd2p-80f,
     0x1.b47d84p-126f, 0x1.def642p-69f, 0x1.2761c6p-91f, 0.0f, 0.0f, 0.0f,
     0x1.ab269ep-60f, 0.0f, 0x1.a791f6p-83f, 0x1.c7627ap-11f, 0x1.6b084ep-39f, 0.0f,
     0x1.30c8e2p-10f, 0.0f, 0.0f, 0.0f, 0x1.6569aap-52f, 0x1.b4a16p-11f, 0.0f,
     0x1.dac664p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1beb8p-38f, 0x1.080a74p-62f,
     0x1.5f9dep-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bd421cp-19f,
     0x1.f5be6ep-58f, 0x1.2f9456p-54f, 0.0f, 0x1.0ec138p-95f, 0.0f, 0.0f,
     0x1.28d1bp-82f, 0.0f, 0.0f, 0.0f, 0x1.64cecp-1f, 0x1.76fd3cp-44f, 0.0f,
     0x1.1ecd64p-46f, 0.0f, 0x1.7158aep-104f, 0.0f, 0.0f, 0x1.9b9b4p-124f, 0.0f,
     0x1.05e5aep-58f, 0x1.bf2bcep-116f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.9bf2eap-102f,
     0x1.bb3f6ap-90f, 0.0f, 0x1.06d9b2p-36f, 0.0f, 0x1.3ba44ap-69f, 0.0f,
     0x1.21745ep-51f, 0.0f, 0x1.310522p-5f, 0.0f, 0x1.7bd082p-114f, 0x1.ded906p-51f,
     0.0f, 0.0f, 0x1.ea53fcp-54f, 0x1.e90e7p-53f, 0.0f, 0.0f, 0.0f, 0x1.bbeef8p-64f,
     0x1.755786p-22f, 0.0f, 0x1.f93eb4p-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.bb6a26p-90f, 0x1.73e72p-8f, 0x1.4df2bep-4f, 0x1.48b724p-46f, 0.0f,
     0x1.92f6aep-63f, 0x1.b99fbep-41f, 0.0f, 0.0f, 0x1.6359d6p-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c003b4p-38f, 0.0f, 0x1.9c5fbcp-74f, 0.0f, 0.0f, 0x1.c0bc2ap-125f,
     0x1.061666p-18f, 0.0f, 0x1.2ff022p-84f, 0x1.fafb44p-66f, 0x1.6bec64p-78f,
     0x1.3bc152p-92f, 0.0f, 0x1.ea35b2p-72f, 0.0f, 0x1.fc60e6p-47f, 0x1.c63b18p-17f,
     0.0f, 0x1.20f7bep-46f, 0.0f, 0x1.586e06p-56f, 0.0f, 0x1.0fbdp-59f, 0.0f,
     0x1.578d4p-86f, 0x1.233964p-109f, 0x1.d2396cp-35f, 0.0f, 0.0f, 0.0f,
     0x1.ac35f2p-122f, 0.0f, 0.0f, 0.0f, 0x1.b82068p-69f, 0.0f, 0x1.68ce7ap-31f, 0.0f,
     0x1.470c92p-20f, 0.0f, 0x1.f33f7p-46f, 0.0f, 0.0f, 0x1.047b08p-6f, 0.0f,
     0x1.b69d6ap-124f, 0x1.4849fap-80f, 0x1.188b7p-21f, 0x1.43d00ep-55f, 0.0f, 0.0f,
     0.0f, 0x1.98e1ap-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8a1088p-33f, 0x1.9b09cp-35f,
     0.0f, 0x1.bbde5p-121f, 0x1.2301fep-78f, 0.0f, 0x1.955ccep-33f, 0x1.7437e4p-45f,
     0x1.1f3eecp-27f, 0.0f, 0.0f, 0.0f, 0x1.ac58e6p-82f, 0.0f, 0.0f, 0x1.81894cp-75f,
     0x1.dbb8a8p-59f, 0.0f, 0.0f, 0x1.1c51d6p-32f, 0x1.f7fef6p-65f, 0x1.e54544p-78f,
     0x1.95a76cp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf7adp-93f, 0x1.d3936ap-116f,
     0x1.552286p-74f, 0x1.d34a6cp-119f, 0.0f, 0.0f, 0.0f, 0x1.b0d3c2p-107f, 0.0f,
     0.0f, 0x1.7c1002p-15f, 0x1.49ebbcp-1f, 0x1.f7ca72p-13f, 0.0f, 0x1.08124ep-108f,
     0.0f, 0.0f, 0x1.e1f4aep-23f, 0.0f, 0.0f, 0.0f, 0x1.1ce7bap-81f, 0x1.8a90ep-124f,
     0.0f, 0.0f, 0.0f, 0x1.946b46p-115f, 0.0f, 0.0f, 0.0f, 0x1.79b55ep-121f,
     0x1.048662p-112f, 0x1.820f68p-57f, 0x1.e7ba14p-31f, 0x1.66be04p-126f,
     0x1.d7ad34p-123f, 0.0f, 0x1.2e4054p-61f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fd316cp-55f, 0x1.34ed5ap-54f, 0x1.18b0e4p-126f, 0x1.16e788p-44f, 0.0f, 0.0f,
     0.0f, 0x1.aee6d8p-7f, 0x1.f36edcp-81f, 0x1.d2f672p-78f, 0.0f, 0x1.1b2468p-81f,
     0x1.8211dap-70f, 0.0f, 0x1.e0a08ap-47f, 0.0f, 0.0f, 0x1.d4dd62p-89f,
     0x1.66377ep-83f, 0.0f, 0.0f, 0x1.041a2p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2c10d8p-118f, 0.0f, 0x1.5fac8cp-119f, 0x1.9d3534p-64f, 0x1.c05fd2p-116f,
     0.0f, 0x1.7f98ep-13f, 0.0f, 0x1.d7b8aep-9f, 0.0f, 0x1.9c1ba8p-67f,
     0x1.765fdap-62f, 0.0f, 0x1.692f1ep-46f, 0.0f, 0.0f, 0x1.bc9d0ap-103f, 0.0f,
     0x1.fb6254p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12e408p-94f, 0.0f,
     0x1.ffa144p-75f, 0x1.82668ep-99f, 0.0f, 0x1.6ae2b4p-24f, 0x1.4ae3d8p-38f,
     0x1.261cecp-92f, 0.0f, 0x1.2ec0aap-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4c1a2cp-112f,
     0x1.671486p-30f, 0.0f, 0x1.56cc68p-2f, 0x1.20d75ap-44f, 0x1.c8a762p-80f,
     0x1.711e9ep-97f, 0x1.886412p-41f, 0x1.f21362p-67f, 0.0f, 0.0f, 0x1.5ee354p-91f,
     0x1.5a0bbcp-76f, 0x1.fa650ap-89f, 0x1.958f6cp-47f, 0x1.001672p-54f,
     0x1.e352e8p-13f, 0x1.e49b58p-65f, 0x1.92ba88p-1f, 0x1.3475cp-66f, 0.0f,
     0x1.42003cp-114f, 0x1.c9593cp-60f, 0.0f, 0.0f, 0.0f, 0x1.ac7d26p-10f,
     0x1.3c2de8p-21f, 0x1.947602p-46f, 0x1.6ac21ap-87f, 0x1.38acdep-122f,
     0x1.2a4376p-105f, 0.0f, 0x1.3b7e72p-71f, 0.0f, 0x1.eb6ce2p-70f, 0.0f,
     0x1.2ed086p-84f, 0x1.f6d0aep-39f, 0.0f, 0x1.59b484p-41f, 0x1.86e64cp-47f, 0.0f,
     0x1.1f7ff8p-74f, 0x1.08fc26p-108f, 0.0f, 0.0f, 0x1.113954p-109f, 0.0f, 0.0f,
     0x1.6b40a4p-29f, 0x1.c751fap-92f, 0x1.3ab92cp-118f, 0x1.8299c8p-50f, 0.0f, 0.0f,
     0x1.caf45p-80f, 0x1.77c60cp-87f, 0.0f, 0x1.1f2f8p-6f, 0.0f, 0x1.d8a09ap-121f,
     0x1.dd1342p-39f, 0.0f, 0.0f, 0.0f, 0x1.2fa8bp-49f, 0x1.d24f34p-62f,
     0x1.e12148p-53f, 0x1.c35112p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.22e8c8p-48f, 0.0f,
     0x1.c50ef2p-5f, 0x1.427fdp-84f, 0x1.8489dap-35f, 0x1.11bd74p-93f, 0.0f, 0.0f,
     0x1.8087aap-99f, 0x1.a7bd0ep-13f, 0.0f, 0.0f, 0.0f, 0x1.05dep-68f, 0.0f, 0.0f,
     0x1.4774bcp-78f, 0.0f, 0x1.2f661p-59f, 0.0f, 0.0f, 0x1.0bdd54p-52f, 0.0f,
     0x1.adebd6p-48f, 0.0f, 0.0f, 0.0f, 0x1.eea06cp-82f, 0x1.439692p-73f, 0.0f, 0.0f,
     0.0f, 0x1.2855dcp-5f, 0.0f, 0.0f, 0.0f, 0x1.581c52p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4d3616p-96f, 0x1.514d12p-89f, 0.0f, 0.0f, 0x1.3b4ce4p-52f, 0.0f,
     0x1.0792fcp-85f, 0x1.41796cp-16f, 0x1.b60f98p-70f, 0.0f, 0x1.41a1fcp-95f,
     0x1.05492cp-51f, 0.0f, 0.0f, 0x1.9aec9ep-79f, 0x1.7cec62p-74f, 0x1.696cep-4f,
     0.0f, 0x1.b250aep-110f, 0x1.165a9ap-77f, 0x1.c643dap-49f, 0.0f, 0.0f, 0.0f,
     0x1.e5ff7p-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.30e6ecp-71f,
     0.0f, 0.0f, 0x1.b6eaa2p-2f, 0x1.b51ee6p-5f, 0x1.b952c6p-22f, 0x1.4c6bf4p-109f,
     0.0f, 0.0f, 0x1.18a20ep-28f, 0x1.414ec8p-92f, 0x1.7b0a22p-50f, 0x1.e1cb9p-4f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.254e8cp-122f, 0x1.c17172p-98f, 0.0f,
     0x1.93a954p-19f, 0.0f, 0.0f, 0.0f, 0x1.77dd44p-12f, 0.0f, 0x1.5ba94ap-79f,
     0x1.5d897ap-91f, 0x1.a5deaep-66f, 0.0f, 0x1p0f, 0x1.041456p-81f, 0.0f, 0.0f,
     0x1.25eabep-59f, 0.0f, 0x1.90b5f4p-118f, 0.0f, 0.0f, 0x1.177e22p-71f, 0x1p0f,
     0.0f, 0.0f, 0x1.f08ed8p-13f, 0x1.4c0228p-113f, 0.0f, 0.0f, 0x1.e8795ep-50f,
     0x1.393f92p-110f, 0x1.ad15bap-77f, 0.0f, 0x1.69a1ap-80f, 0.0f, 0x1.9d9d72p-116f,
     0.0f, 0x1.5d3c7p-124f, 0x1.8e02dp-21f, 0x1.ef92cp-3f, 0.0f, 0x1.8a8f5p-84f, 0.0f,
     0x1.8b2bf6p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.52a1a4p-91f, 0x1.730504p-35f, 0.0f,
     0x1.39eefcp-73f, 0.0f, 0x1.4fd006p-66f, 0x1.15825cp-10f, 0.0f, 0.0f,
     0x1.5dfde8p-15f, 0x1.70cd88p-57f, 0x1.241858p-28f, 0x1.53bc62p-91f, 0.0f,
     0x1.4f1848p-80f, 0x1.9760c6p-75f, 0x1.666164p-29f, 0.0f, 0x1.a6f0e4p-84f, 0.0f,
     0.0f, 0.0f, 0x1.6400d8p-72f, 0.0f, 0x1.b2c576p-80f, 0x1.a15fd6p-26f, 0.0f,
     0x1.7f5b46p-43f, 0x1.f74a66p-58f, 0x1.2c2428p-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.556222p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81aed4p-77f,
     0.0f, 0x1.6d463cp-57f, 0x1.507216p-67f, 0.0f, 0x1.a3d5d2p-15f, 0.0f, 0.0f, 0.0f,
     0x1.d5b0f4p-46f, 0x1.0226c8p-58f, 0x1.7cd22ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.771284p-117f, 0x1.e3fb9ap-123f, 0x1.75307ap-9f, 0.0f, 0.0f, 0x1.2a87fcp-53f,
     0x1.70a632p-68f, 0.0f, 0.0f, 0x1.527924p-112f, 0x1.f766fp-107f, 0.0f, 0.0f, 0.0f,
     0x1.7ca282p-106f, 0x1.65ecd2p-82f, 0x1.0b279ap-91f, 0x1.0cf952p-40f, 0.0f,
     0x1.0f0424p-110f, 0.0f, 0.0f, 0x1.d19788p-33f, 0x1.2ff316p-69f, 0x1.b0363p-100f,
     0.0f, 0.0f, 0.0f, 0x1.b86eb6p-7f, 0x1.425df6p-69f, 0.0f, 0x1.039e92p-61f,
     0x1.52d69ap-84f, 0x1.05a3d2p-51f, 0.0f, 0x1.462b58p-124f, 0x1.7ec486p-36f,
     0x1.b99898p-73f, 0.0f, 0.0f, 0x1.dbd46ep-26f, 0x1.141e92p-37f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.f40372p-84f, 0.0f, 0.0f, 0x1.7253ccp-11f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.eba998p-126f, 0.0f, 0x1.12c4cap-62f, 0x1.39d184p-59f, 0.0f, 0.0f, 0.0f,
     0x1.237f94p-102f, 0x1.b07394p-87f, 0x1.8e43dp-69f, 0.0f, 0x1.9f1984p-25f,
     0x1.a1a8ap-16f, 0x1.e0e33ap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.53473ap-63f, 0x1.aed8c6p-84f, 0x1.84b5dap-108f, 0.0f, 0x1.abd0fcp-3f, 0.0f,
     0.0f, 0.0f, 0x1.e3a02cp-30f, 0.0f, 0.0f, 0x1.74068p-63f, 0x1.30449p-107f,
     0x1.ac255p-34f, 0x1.2c1d86p-75f, 0.0f, 0.0f, 0x1.d0c13p-26f, 0.0f,
     0x1.d11a34p-93f, 0.0f, 0.0f, 0x1.80b128p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.344604p-37f, 0.0f, 0x1.cddae8p-24f, 0.0f, 0.0f, 0.0f, 0x1.a2a422p-19f, 0.0f,
     0x1.fe5912p-123f, 0x1.b965f2p-4f, 0.0f, 0x1.b679ep-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.253164p-112f, 0.0f, 0.0f, 0.0f, 0x1.8335cap-29f,
     0x1.a73c2cp-24f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0b36cep-120f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3513ap-76f, 0.0f, 0x1.0dfda4p-104f, 0.0f, 0.0f, 0x1.3b4b72p-29f,
     0x1.d5b0e8p-100f, 0.0f, 0.0f, 0.0f, 0x1.822da8p-50f, 0x1.ef63bap-95f,
     0x1.99b72cp-12f, 0.0f, 0x1.64853cp-63f, 0x1.7b6776p-42f, 0x1.982b94p-36f, 0.0f,
     0x1.f50f24p-71f, 0.0f, 0x1.a5699p-94f, 0.0f, 0x1.640c5ep-122f, 0.0f,
     0x1.5c2786p-112f, 0.0f, 0x1.eac7e2p-1f, 0.0f, 0x1.88b792p-64f, 0x1.ddd86ep-27f,
     0x1.50ab48p-75f, 0.0f, 0x1.60dc3ap-55f, 0.0f, 0.0f, 0x1.4da41ep-70f, 0.0f, 0.0f,
     0x1.c1e174p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdfe38p-69f, 0x1.3f4f0cp-38f, 0.0f,
     0x1.001724p-19f, 0.0f, 0.0f, 0.0f, 0x1.8d897p-68f, 0x1.cb80d6p-21f, 0.0f,
     0x1.5b8b26p-23f, 0x1.e58614p-123f, 0x1.69212ap-14f, 0x1.ce6bbp-51f,
     0x1.e1b588p-118f, 0x1.f83d42p-42f, 0.0f, 0x1.c08f74p-112f, 0.0f, 0x1.bcc8c8p-84f,
     0x1.281e68p-101f, 0x1.9b3fa4p-9f, 0x1.0d12c4p-49f, 0x1.d9b57cp-104f,
     0x1.b59e7ap-115f, 0x1.2921fp-92f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3bc668p-39f,
     0x1.bf21ecp-54f, 0x1.e5fd12p-78f, 0x1.2e5256p-71f, 0.0f, 0.0f, 0.0f,
     0x1.07a3bep-61f, 0.0f, 0x1.0fa484p-78f, 0x1.881f5p-80f, 0.0f, 0.0f,
     0x1.7c0012p-105f, 0x1.3f1568p-77f, 0.0f, 0.0f, 0x1.0295e8p-117f, 0x1.d2859p-49f,
     0x1.693948p-71f, 0.0f, 0x1.17461p-1f, 0x1.a8a966p-65f, 0x1.528cacp-87f,
     0x1.d869cep-116f, 0x1.2ffc4ep-49f, 0.0f, 0.0f, 0x1.1b6754p-23f, 0x1.bc463ap-5f,
     0.0f, 0.0f, 0x1.aa387cp-100f, 0.0f, 0x1.e0b648p-91f, 0x1.55323cp-108f, 0.0f,
     0.0f, 0x1.358c96p-11f, 0.0f
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
            tmp1 = Sleef_sqrtf4_avx2128(tmp0);
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
    printf("Sleef_sqrtf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
