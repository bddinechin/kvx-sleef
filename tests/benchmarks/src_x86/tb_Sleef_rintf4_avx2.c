/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintf4_avx2128.c --function Sleef_rintf4_avx2128 --headers \
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
     0x1.d9303ap-109f, 0x1.b8c378p-85f, 0x1.4decccp-80f, 0x1.55028cp-69f, 0.0f, 0.0f,
     0x1.105c9ap-69f, 0.0f, 0.0f, 0x1.4b90dap-63f, 0.0f, 0.0f, 0x1.b64d66p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00fabep-100f, 0x1.7c897ap-58f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a83f24p-100f,
     0x1.fcc224p-103f, 0x1.5b2da2p-79f, 0x1.b05278p-11f, 0x1.50a01ep-30f,
     0x1.3eb1p-9f, 0x1.943556p-35f, 0.0f, 0.0f, 0x1.e20f26p-80f, 0.0f,
     0x1.14557ap-111f, 0x1.2160d6p-88f, 0x1.fb36ap-83f, 0x1.638852p-36f, 0.0f,
     0x1.52d1fap-7f, 0x1.fc444p-98f, 0x1.6c6cf6p-36f, 0.0f, 0.0f, 0.0f,
     0x1.2d4552p-93f, 0x1.ef18e2p-68f, 0.0f, 0.0f, 0x1.8386dep-32f, 0x1.c5880ep-78f,
     0.0f, 0.0f, 0.0f, 0x1.eee6fcp-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.391f12p-44f, 0.0f, 0x1.365344p-105f, 0x1.fb9dbp-21f,
     0x1.38e2bp-18f, 0.0f, 0.0f, 0.0f, 0x1.934568p-121f, 0x1.2bfbe4p-32f,
     0x1.1e546ap-30f, 0.0f, 0x1.451722p-86f, 0.0f, 0x1.cdd5d6p-117f, 0.0f,
     0x1.f5e1p-90f, 0x1.79d14p-97f, 0x1.48cb42p-32f, 0.0f, 0x1.d8cdd2p-99f,
     0x1.2c7f76p-110f, 0x1.f2c904p-52f, 0.0f, 0x1.bcee46p-103f, 0x1.dee12ep-118f,
     0x1.566dc2p-20f, 0.0f, 0x1.25d8d4p-99f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.4e7174p-19f, 0x1.e39baep-99f, 0.0f, 0.0f, 0x1.ce0cap-23f, 0x1.58d214p-72f,
     0.0f, 0x1.99ee48p-125f, 0x1.f0a0d4p-64f, 0x1.2b79dap-119f, 0.0f, 0.0f,
     0x1.d1141p-99f, 0x1.03f172p-79f, 0.0f, 0.0f, 0x1.f22f6ep-15f, 0x1.9b5d68p-35f,
     0.0f, 0x1.0c9fc6p-98f, 0x1.58c474p-1f, 0x1.5050d6p-14f, 0.0f, 0x1.e5d792p-122f,
     0x1.3159acp-118f, 0x1.bcb216p-47f, 0x1.9aff32p-68f, 0.0f, 0.0f, 0x1.0f074cp-94f,
     0.0f, 0x1.24739p-28f, 0x1.3f1cacp-37f, 0.0f, 0x1.ab4be2p-92f, 0x1.f9966p-22f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.210674p-63f, 0x1.36bf3ap-105f,
     0x1.a19dep-20f, 0x1.85a22cp-70f, 0x1.6cad4ap-116f, 0x1.ea78dep-85f, 0.0f, 0.0f,
     0.0f, 0x1.5cc166p-3f, 0x1.aa4df2p-123f, 0.0f, 0x1.cf584ep-12f, 0.0f, 0.0f,
     0x1.3b0528p-85f, 0.0f, 0.0f, 0.0f, 0x1.c825fcp-27f, 0.0f, 0x1.a77224p-72f,
     0x1.4b6c1p-62f, 0.0f, 0x1.b6c356p-4f, 0x1.8edc6p-18f, 0.0f, 0x1.2a0be8p-88f,
     0.0f, 0x1.0bfc3ep-111f, 0x1.562156p-9f, 0.0f, 0x1.24eee2p-3f, 0x1.ab4cb4p-74f,
     0.0f, 0.0f, 0x1.22f49cp-67f, 0x1.55acb2p-2f, 0.0f, 0.0f, 0.0f, 0x1.c3885p-31f,
     0x1.c27c2cp-121f, 0.0f, 0x1.7fde7p-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cbcb3cp-1f,
     0x1.a787aap-53f, 0.0f, 0.0f, 0.0f, 0x1.cb5fc6p-7f, 0x1.c3fae4p-95f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.21d88p-43f, 0x1.ea5a5ap-101f, 0.0f, 0.0f, 0.0f, 0x1.8d485cp-110f,
     0x1.e4ef96p-117f, 0.0f, 0.0f, 0x1.e9b326p-61f, 0.0f, 0x1.07e42cp-61f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e6ae64p-74f, 0x1.25b2d6p-95f, 0.0f, 0.0f, 0.0f, 0x1.ec0f6ep-60f,
     0x1.164c3p-96f, 0.0f, 0x1.3ec0bap-124f, 0x1.58fa84p-98f, 0x1.d2215cp-15f,
     0x1.4ae704p-17f, 0x1.60a768p-44f, 0.0f, 0x1.299de4p-42f, 0.0f, 0x1.9cf484p-109f,
     0.0f, 0.0f, 0.0f, 0x1.75624p-33f, 0.0f, 0x1.59395ap-55f, 0.0f, 0.0f,
     0x1.803102p-34f, 0x1.c683e2p-92f, 0x1.49a7f2p-96f, 0.0f, 0.0f, 0x1.071ffcp-104f,
     0.0f, 0x1.e40216p-27f, 0x1.b5125p-29f, 0x1.df0146p-56f, 0.0f, 0x1.d4c13ep-117f,
     0x1.5b9506p-119f, 0x1.b73c3ep-28f, 0x1.1bb3p-65f, 0.0f, 0.0f, 0x1.4a91ap-117f,
     0.0f, 0.0f, 0x1.e0b178p-65f, 0x1.b011c2p-9f, 0.0f, 0x1.dd8cacp-102f,
     0x1.bfc1bcp-14f, 0.0f, 0.0f, 0x1.a321dcp-11f, 0.0f, 0.0f, 0x1.3e8a8cp-37f, 0.0f,
     0.0f, 0x1.ff02bcp-120f, 0.0f, 0.0f, 0x1.ee89f2p-94f, 0.0f, 0.0f, 0.0f,
     0x1.c7e9a6p-1f, 0x1.164db6p-115f, 0.0f, 0x1.aa732cp-34f, 0.0f, 0.0f,
     0x1.7baa9ep-53f, 0.0f, 0x1.8b745ap-122f, 0.0f, 0.0f, 0x1.b631b8p-86f,
     0x1.a235a4p-51f, 0.0f, 0.0f, 0x1.61a144p-91f, 0x1.1709fep-50f, 0x1.58cfc4p-10f,
     0.0f, 0.0f, 0x1.1cd58ap-2f, 0.0f, 0x1p0f, 0x1.5ffb18p-59f, 0x1.6b7f46p-114f,
     0.0f, 0.0f, 0.0f, 0x1.ff9d76p-35f, 0x1.42f8cep-53f, 0x1.473d6ap-97f,
     0x1.ad49cap-54f, 0x1.39ec1cp-112f, 0x1.e66ap-60f, 0x1.89d784p-10f,
     0x1.c951dcp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.803cf8p-1f,
     0x1.cd756ap-93f, 0x1.0500ap-29f, 0x1.023754p-75f, 0.0f, 0.0f, 0x1.52ee98p-1f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d4cc8p-107f, 0.0f,
     0x1.1df63cp-33f, 0.0f, 0.0f, 0x1.a9d8f4p-10f, 0x1.4f58eep-80f, 0.0f, 0.0f, 0.0f,
     0x1.1b595cp-64f, 0.0f, 0.0f, 0.0f, 0x1.5ff3dcp-12f, 0x1.0ea18ep-50f,
     0x1.8fe248p-100f, 0.0f, 0x1p0f, 0.0f, 0x1.e43c22p-110f, 0x1.bc6a06p-87f, 0.0f,
     0x1.89d8dp-63f, 0.0f, 0x1.802246p-34f, 0.0f, 0x1.94f844p-103f, 0.0f,
     0x1.4c6b4p-2f, 0.0f, 0.0f, 0x1.ee0ee4p-42f, 0.0f, 0.0f, 0.0f, 0x1.a1da6p-116f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5f7b5ap-11f, 0x1.7910bap-57f, 0.0f,
     0x1.fbf8e4p-84f, 0.0f, 0x1.24cfeep-91f, 0.0f, 0.0f, 0x1.7cf908p-42f, 0.0f,
     0x1.ca88f4p-75f, 0x1.653766p-61f, 0x1.dc81bep-72f, 0.0f, 0.0f, 0.0f,
     0x1.3b5fbp-42f, 0.0f, 0.0f, 0x1.cc042ap-80f, 0.0f, 0x1.30e006p-114f,
     0x1.b15c36p-13f, 0x1.e688ep-110f, 0.0f, 0x1.7c5766p-68f, 0x1.05037ep-98f,
     0x1.6dac9p-99f, 0.0f, 0.0f, 0.0f, 0x1.20da08p-46f, 0x1.b17c52p-78f,
     0x1.c07beep-39f, 0x1.dd48e6p-68f, 0x1.8a4274p-46f, 0.0f, 0.0f, 0x1.26ae74p-41f,
     0x1.2b568ap-125f, 0x1.82ffp-117f, 0x1.f9c58ep-57f, 0.0f, 0x1.fb990cp-112f,
     0x1.4601b8p-52f, 0x1.d1b228p-116f, 0x1.e23f2ap-89f, 0.0f, 0x1.125b2ap-71f, 0.0f,
     0.0f, 0.0f, 0x1.be033ap-1f, 0.0f, 0x1.5ff9c8p-24f, 0x1.2e4eeap-93f,
     0x1.05c866p-42f, 0x1.56dfa4p-38f, 0.0f, 0.0f, 0x1.346306p-3f, 0.0f, 0.0f, 0.0f,
     0x1.30c73p-98f, 0.0f, 0x1.7b8b76p-80f, 0.0f, 0x1.13948ap-6f, 0x1.403c5ap-120f,
     0x1.bc7426p-8f, 0.0f, 0x1.aad04ap-102f, 0.0f, 0.0f, 0x1.5e77a4p-37f, 0.0f,
     0x1.b865b4p-30f, 0x1.d778ecp-111f, 0.0f, 0.0f, 0x1.ae4906p-65f, 0.0f,
     0x1.c566b4p-43f, 0x1.404d98p-14f, 0.0f, 0.0f, 0x1.348e08p-84f, 0x1.457d66p-46f,
     0x1.33ce8p-35f, 0x1.afe5d4p-50f, 0x1.50f684p-19f, 0x1.439522p-73f,
     0x1.20f1b4p-19f, 0x1.b135e2p-24f, 0x1.2893a6p-34f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.41b41p-72f, 0x1.0fafa4p-6f, 0.0f, 0x1.d2dcep-91f, 0.0f, 0.0f,
     0x1.ea8894p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bff1d4p-117f,
     0x1.01246cp-23f, 0.0f, 0.0f, 0x1.e0c128p-39f, 0x1.32ce82p-17f, 0.0f,
     0x1.47d064p-22f, 0x1.57e41cp-104f, 0x1.0c3514p-31f, 0x1.885d48p-79f, 0.0f, 0.0f,
     0x1.a6645ep-16f, 0.0f, 0x1.00028cp-113f, 0x1.1d24ep-109f, 0.0f, 0x1.9c6ep-87f,
     0x1.74c354p-21f, 0.0f, 0x1.baaf42p-3f, 0x1.bad7f8p-75f, 0.0f, 0.0f,
     0x1.c06fe2p-116f, 0x1.4efd22p-95f, 0x1.03bbaap-40f, 0.0f, 0x1.e72a82p-90f,
     0x1.535cb2p-84f, 0.0f, 0.0f, 0x1.002914p-88f, 0.0f, 0x1.0323c4p-45f,
     0x1.9631d2p-37f, 0.0f, 0x1.3845d2p-71f, 0x1.f12aecp-114f, 0.0f, 0x1.8f00aep-70f,
     0x1.c3d93ep-93f, 0.0f, 0.0f, 0x1.10aa52p-2f, 0x1.7834fcp-84f, 0.0f, 0.0f,
     0x1.2322f2p-25f, 0x1.22729ep-6f, 0.0f, 0x1.8dd4b2p-8f, 0.0f, 0x1.778da4p-37f,
     0x1.c0e6ep-55f, 0x1.898998p-75f, 0.0f, 0.0f, 0x1.b7cce2p-68f, 0x1.aa4e8ap-3f,
     0x1.0ababp-120f, 0.0f, 0.0f, 0x1.ad9cd8p-72f, 0.0f, 0x1.2c1d8cp-90f,
     0x1.c76a5cp-97f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d481c6p-73f, 0.0f, 0.0f, 0.0f,
     0x1.c51b8p-79f, 0.0f, 0.0f, 0x1.4f58cp-14f, 0.0f, 0x1.636c2ap-51f,
     0x1.86f032p-79f, 0x1.ba08e2p-29f, 0.0f, 0x1.071176p-64f, 0x1.3961f2p-9f, 0.0f,
     0.0f, 0.0f, 0x1.25fb5cp-120f, 0x1.982b9ap-117f, 0x1.edc9a4p-21f,
     0x1.37648ep-111f, 0x1.bf90b6p-66f, 0.0f, 0.0f, 0.0f, 0x1.6aad0ap-108f,
     0x1.934144p-13f, 0.0f, 0x1.fc5262p-102f, 0x1.d95d0ep-5f, 0.0f, 0x1.a9d846p-20f,
     0x1.9607aep-62f, 0.0f, 0x1.528854p-82f, 0.0f, 0x1.f818a8p-74f, 0x1.9af31ep-15f,
     0.0f, 0x1.ad2b7ap-110f, 0x1.bd45b2p-106f, 0x1.89f06cp-85f, 0x1.cb147p-75f,
     0x1.cd955p-101f, 0x1.f4f7ecp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.53ff6p-30f, 0.0f,
     0x1.8fda68p-20f, 0x1.6aacdep-65f, 0x1.5afbeep-121f, 0x1.bb47a8p-59f, 0.0f,
     0x1.880a22p-91f, 0x1.79f7fcp-104f, 0x1.acbb5cp-23f, 0x1.29ac06p-26f, 0.0f,
     0x1.1181bcp-48f, 0x1.a023dp-78f, 0.0f, 0x1.91f0fep-22f, 0.0f, 0x1.fd9dep-92f,
     0x1.5c3a7ep-84f, 0.0f, 0.0f, 0x1.d519fap-27f, 0.0f, 0.0f, 0.0f, 0x1.ad125ap-17f,
     0.0f, 0.0f, 0x1.ee91bcp-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c5f6d2p-37f,
     0x1.b0dc52p-63f, 0.0f, 0x1.a20f86p-71f, 0.0f, 0x1.b5b342p-26f, 0.0f,
     0x1.bde73cp-40f, 0.0f, 0.0f, 0.0f, 0x1.7006ap-41f, 0.0f, 0x1.8a55c4p-115f, 0.0f,
     0x1.f896c6p-91f, 0.0f, 0.0f, 0x1.11f386p-41f, 0.0f, 0x1.7760bp-124f, 0.0f,
     0x1.ad86fcp-104f, 0x1.6fa9d2p-62f, 0x1.b7ed98p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8ed5f2p-66f, 0x1.ef21acp-43f, 0.0f, 0x1.acc58ap-121f, 0.0f, 0x1.d5b25ep-28f,
     0x1.d6cd56p-33f, 0x1.21bd7ep-9f, 0x1.aef83p-1f, 0.0f, 0x1.8965ccp-37f, 0.0f,
     0x1.f1a8acp-77f, 0x1.2e5d66p-117f, 0.0f, 0.0f, 0x1.e8609ep-70f, 0.0f, 0.0f, 0.0f,
     0x1.7ea802p-31f, 0.0f, 0x1.e0e148p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.cfafa6p-41f, 0x1.8e7fe8p-121f, 0.0f, 0.0f, 0x1.a67612p-28f, 0x1.c4f3e2p-20f,
     0x1.23aafep-60f, 0x1.a1ee1cp-84f, 0x1.823934p-55f, 0.0f, 0x1.2436c2p-117f,
     0x1.73cc3cp-18f, 0x1.b1f244p-31f, 0.0f, 0x1.99b504p-45f, 0x1.f2cafap-40f, 0.0f,
     0x1.ac366ep-94f, 0x1.dec53ap-119f, 0.0f, 0x1.144ddp-23f, 0x1.5c8ff2p-62f,
     0x1.b3445ep-102f, 0x1.b1553cp-120f, 0x1.67f446p-121f, 0.0f, 0.0f, 0x1.6b9a08p-6f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ae1ccap-67f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bf52cp-115f, 0.0f, 0x1.ff2cp-27f,
     0x1.9c8194p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.770868p-20f, 0.0f, 0.0f, 0.0f,
     0x1.32b914p-68f, 0x1.2e191p-11f, 0.0f, 0x1.ab82ep-123f, 0.0f, 0.0f, 0.0f,
     0x1.6b137ep-63f, 0.0f, 0x1.302422p-120f, 0.0f, 0x1.018ff6p-54f, 0.0f,
     0x1.ab2718p-116f, 0x1.ea2d5ep-106f, 0.0f, 0x1.e9175cp-95f, 0x1.49969p-39f, 0.0f,
     0x1.b95198p-6f, 0.0f, 0.0f, 0x1.3118fp-10f, 0x1.80235ap-33f, 0x1.8c30fep-46f,
     0x1.e9bfc8p-4f, 0x1.ac3ee8p-67f, 0x1.1c1a9ep-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6af4aep-117f, 0x1.8e5ffap-34f, 0.0f, 0.0f, 0.0f, 0x1.f2bed4p-92f, 0.0f, 0.0f,
     0x1.36dcd4p-90f, 0.0f, 0.0f, 0x1.509f94p-13f, 0x1.7fb8dap-48f, 0x1.39af62p-72f,
     0.0f, 0x1.5308bp-115f, 0.0f, 0.0f, 0x1.8e2d84p-116f, 0.0f, 0.0f, 0.0f,
     0x1.8b0e2ap-99f, 0x1.cfb20ap-70f, 0.0f, 0x1.38e1d8p-118f, 0.0f, 0.0f,
     0x1.c817fep-99f, 0.0f, 0x1.385782p-89f, 0.0f, 0.0f, 0.0f, 0x1.5b90e8p-88f, 0.0f,
     0.0f, 0.0f, 0x1.5b0edcp-10f, 0x1p0f, 0.0f, 0.0f, 0x1.7cd71p-39f,
     0x1.72a676p-106f, 0.0f, 0.0f, 0x1.090826p-106f, 0x1.88d19cp-65f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7d407ep-88f, 0.0f, 0.0f, 0x1.a74db2p-6f, 0.0f,
     0x1.705af4p-54f, 0.0f, 0x1.828d5cp-82f, 0.0f, 0x1.57abbp-8f, 0.0f,
     0x1.b47d24p-29f, 0x1.b94b2ap-47f, 0.0f, 0.0f, 0x1.0dd406p-120f, 0x1.3bf276p-126f,
     0x1.8fea2ep-93f, 0.0f, 0x1.7cff72p-35f, 0.0f, 0x1.1dac5p-35f, 0x1.9ffed8p-7f,
     0.0f, 0x1.bfebdep-64f, 0.0f, 0x1.80a1fep-74f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.879b3p-80f, 0x1.f5abd6p-3f, 0.0f, 0x1.44ecc4p-48f, 0x1.b23e02p-26f, 0.0f,
     0.0f, 0.0f, 0x1.b62c24p-98f, 0x1.a582a2p-30f, 0.0f, 0x1.73b77p-103f, 0.0f, 0.0f,
     0x1.f94924p-110f, 0x1.56889p-21f, 0x1.e52166p-117f, 0.0f, 0x1.e395b4p-26f, 0.0f,
     0.0f, 0x1.55abcap-92f, 0x1.f7d736p-66f, 0x1.3d2f8cp-72f, 0.0f, 0.0f, 0.0f,
     0x1.30e45cp-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.350a9p-80f, 0.0f, 0x1.956b42p-49f,
     0.0f, 0.0f, 0x1.cab0f6p-96f, 0x1.970c66p-80f, 0x1.e472fcp-64f, 0x1.82f1eep-108f,
     0x1.da23a8p-125f, 0x1.128a56p-115f, 0x1.af7774p-11f, 0.0f, 0.0f, 0.0f,
     0x1.a8a774p-2f, 0x1.b71286p-111f, 0x1.9df8ep-118f, 0x1.9d344cp-55f,
     0x1.9560b6p-26f, 0.0f, 0.0f, 0.0f, 0x1.87d042p-86f, 0x1.101fe4p-9f, 0.0f,
     0x1.8e60cap-82f, 0.0f, 0x1.f6843ap-19f, 0x1.06d7ap-54f, 0x1.178e5ep-66f, 0.0f,
     0.0f, 0.0f, 0x1.8f31dcp-56f, 0.0f, 0.0f, 0x1.592952p-37f, 0.0f, 0x1.8d182p-32f,
     0x1.054d56p-113f, 0x1.facc1cp-8f, 0.0f, 0.0f, 0x1.6b432cp-10f, 0x1.f2630ep-122f,
     0.0f, 0.0f, 0.0f, 0x1.0b7a2ep-63f, 0x1.74a6dap-10f, 0.0f, 0x1.2ad90ep-69f,
     0x1.576deep-10f, 0.0f, 0x1.020e54p-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4d11ap-113f,
     0.0f, 0.0f, 0x1.bbda42p-101f, 0x1.f6c65ap-104f, 0.0f, 0.0f, 0x1.393758p-106f,
     0x1.7781eep-111f, 0.0f, 0x1.3f442ep-5f, 0.0f, 0x1.9b2a76p-91f, 0x1.44aa42p-54f,
     0.0f, 0.0f, 0.0f, 0x1.8a6fcep-28f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp1 = Sleef_rintf4_avx2128(tmp0);
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
    printf("Sleef_rintf4_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_rintf4_avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
