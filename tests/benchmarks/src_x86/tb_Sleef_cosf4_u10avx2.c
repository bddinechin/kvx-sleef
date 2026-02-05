/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf4_u10avx2128.c --function Sleef_cosf4_u10avx2128 --headers \
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
     0.0f, 0x1.d71dfep-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1c8ed8p-60f,
     0x1.7dc48p-10f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.76ceccp-27f,
     0x1.5fc424p-32f, 0x1.3cbf7cp-55f, 0.0f, 0x1.aba4aap-95f, 0.0f, 0.0f,
     0x1.02b3d4p-35f, 0.0f, 0x1.a1db66p-12f, 0.0f, 0x1.ccca36p-17f, 0x1.33890cp-56f,
     0x1.d84f94p-67f, 0x1.bbcea8p-64f, 0.0f, 0.0f, 0x1.073eb2p-27f, 0x1.53576p-39f,
     0.0f, 0.0f, 0.0f, 0x1.bec182p-100f, 0.0f, 0x1.ba05c2p-119f, 0.0f, 0.0f,
     0x1.d575bcp-56f, 0.0f, 0.0f, 0x1.dc830ep-100f, 0x1.14d89cp-13f, 0.0f, 0.0f,
     0x1.c1bb32p-6f, 0.0f, 0x1.d88192p-56f, 0.0f, 0x1.e201dep-50f, 0x1.83cfa2p-37f,
     0x1.3b0966p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e2404p-9f, 0.0f, 0x1.097e2ep-26f,
     0.0f, 0x1.0c82aep-35f, 0.0f, 0.0f, 0x1.7bff1cp-100f, 0x1.84a8e8p-19f, 0.0f,
     0x1.8d3efep-108f, 0.0f, 0.0f, 0.0f, 0x1.bc8f2ap-18f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2734ap-63f, 0.0f, 0.0f, 0.0f, 0x1.8eeed8p-79f, 0.0f, 0.0f, 0x1.220f0cp-38f,
     0.0f, 0x1.c1984ap-119f, 0.0f, 0x1.653834p-98f, 0.0f, 0x1.7ec136p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7d26c4p-47f, 0x1.439f96p-79f, 0.0f, 0x1.919c22p-114f,
     0x1.87a08ap-111f, 0x1.37f908p-115f, 0x1.9acce4p-47f, 0x1.16895cp-2f,
     0x1.95adb6p-68f, 0.0f, 0.0f, 0x1.5fa97ep-16f, 0x1.f22a7cp-23f, 0.0f,
     0x1.33efd8p-69f, 0.0f, 0.0f, 0x1.93b5f4p-78f, 0.0f, 0x1.d35678p-50f, 0.0f, 0.0f,
     0.0f, 0x1.4e7a98p-40f, 0x1.6420d6p-105f, 0.0f, 0x1.a72468p-121f, 0.0f,
     0x1.0d8d18p-107f, 0x1.f72406p-65f, 0.0f, 0x1.81b358p-14f, 0.0f, 0x1.12766ap-106f,
     0x1.2d6442p-100f, 0x1.33abb8p-103f, 0.0f, 0x1.2ce30ep-52f, 0x1.f32e1p-6f, 0.0f,
     0.0f, 0x1.976ca4p-47f, 0x1.624846p-115f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.531faep-118f, 0.0f, 0x1.befb08p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0fc8b8p-118f, 0.0f, 0x1.d1b3bp-113f, 0x1.e6d0d6p-1f, 0x1.6813cep-63f, 0.0f,
     0.0f, 0x1.e2b75ep-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1508fp-26f,
     0x1.db9a3cp-77f, 0x1.53b02ap-112f, 0x1.b414bcp-30f, 0.0f, 0.0f, 0.0f,
     0x1.2a26e6p-100f, 0.0f, 0.0f, 0.0f, 0x1.217602p-100f, 0x1.656546p-78f,
     0x1.46d03cp-2f, 0x1.608bdcp-4f, 0.0f, 0x1.670928p-21f, 0.0f, 0.0f, 0.0f,
     0x1.8078p-36f, 0x1.89399p-88f, 0x1.b7669ap-123f, 0.0f, 0.0f, 0.0f,
     0x1.323642p-103f, 0.0f, 0x1.cdcf9ep-83f, 0x1.800246p-107f, 0x1.3ef5ccp-125f,
     0x1.c516d8p-55f, 0.0f, 0x1.17d4ep-38f, 0x1.b9384p-22f, 0x1.2c7526p-90f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.2230eep-64f, 0.0f, 0.0f, 0x1.5e76f4p-73f,
     0x1.1037f6p-114f, 0.0f, 0x1.1c7e94p-96f, 0.0f, 0x1.d97262p-95f, 0x1.a444c8p-11f,
     0x1.280d08p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b59a9ep-105f, 0x1.1139d8p-116f,
     0.0f, 0x1.4a8106p-116f, 0x1.560604p-106f, 0x1.85c5b6p-7f, 0.0f, 0.0f,
     0x1.0bc77p-1f, 0x1.4ec2a8p-46f, 0x1.c08f58p-70f, 0x1.1ff97ep-122f,
     0x1.f80cdcp-102f, 0x1.2e2f3p-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d7dc12p-55f,
     0.0f, 0.0f, 0x1.8f25eep-47f, 0x1.ccc7dep-108f, 0.0f, 0x1.80b79p-105f, 0.0f, 0.0f,
     0.0f, 0x1.929f7cp-85f, 0x1.f30adcp-90f, 0.0f, 0x1.66c7dap-74f, 0.0f,
     0x1.d613dp-25f, 0x1.fcc086p-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ead6aap-62f, 0.0f, 0.0f, 0.0f, 0x1.044fbcp-6f, 0x1.85ec6ep-26f,
     0x1.b418bep-93f, 0x1.dbec9ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dfda3cp-22f,
     0x1.e82c22p-99f, 0x1.7c051p-87f, 0x1.a5d7a4p-117f, 0x1.c66e8p-36f,
     0x1.a05a9ep-39f, 0x1.36cb5cp-85f, 0x1.0473fep-57f, 0.0f, 0.0f, 0x1.b9f534p-19f,
     0.0f, 0x1.2192cp-69f, 0.0f, 0.0f, 0x1.74f22cp-24f, 0x1.241f0cp-117f, 0.0f,
     0x1.bf86f6p-30f, 0.0f, 0.0f, 0.0f, 0x1.44215ap-33f, 0.0f, 0.0f, 0x1.53404ep-104f,
     0x1.ec52dep-14f, 0.0f, 0x1.a0971cp-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f7194p-78f, 0.0f, 0x1.1672c4p-120f, 0x1.ed014p-96f, 0.0f, 0x1.da5ab2p-122f,
     0.0f, 0.0f, 0.0f, 0x1.40faaep-59f, 0x1.b99b28p-103f, 0x1.988a1cp-18f,
     0x1.4c78aap-68f, 0.0f, 0x1.995388p-109f, 0.0f, 0.0f, 0x1.99ec32p-59f,
     0x1.eb2d2cp-83f, 0x1.6d913p-46f, 0x1.fd51acp-61f, 0x1.5e41f4p-115f,
     0x1.935faep-69f, 0.0f, 0x1.b6f5dap-113f, 0.0f, 0.0f, 0x1.c5ae14p-15f,
     0x1.e2fa8p-79f, 0x1.663544p-15f, 0.0f, 0x1.ebb038p-25f, 0x1.08058ep-20f,
     0x1.87295ep-106f, 0.0f, 0.0f, 0x1.827f1ep-106f, 0x1.a425d2p-52f, 0.0f, 0.0f,
     0.0f, 0x1.e15fc6p-70f, 0.0f, 0.0f, 0x1.00dbc2p-46f, 0.0f, 0.0f, 0.0f,
     0x1.b7cf82p-39f, 0x1.80fd5ap-51f, 0x1.683314p-1f, 0x1.bd0b94p-78f, 0.0f, 0.0f,
     0.0f, 0x1.5de7ecp-85f, 0x1.fae0ccp-122f, 0.0f, 0x1.3aa8fep-11f, 0x1.28308cp-26f,
     0.0f, 0x1.ff376cp-6f, 0x1.9d6a24p-85f, 0.0f, 0.0f, 0x1.398d9ap-41f, 0.0f,
     0x1.af45e8p-73f, 0.0f, 0x1.829f1ap-7f, 0.0f, 0x1.9d12b2p-40f, 0x1.8c44c2p-111f,
     0x1.4d7884p-91f, 0.0f, 0x1.e10d38p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bdd62p-21f,
     0x1.64a406p-4f, 0.0f, 0.0f, 0x1.63e2ep-30f, 0.0f, 0x1.14a74ep-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.698396p-5f, 0x1.50abap-70f, 0x1.bbdce4p-94f,
     0x1.25b7ep-58f, 0.0f, 0.0f, 0x1.902dfcp-91f, 0.0f, 0x1.b00c1ep-99f,
     0x1.ffd4e6p-48f, 0.0f, 0x1.5bd55p-2f, 0x1.a420f8p-117f, 0.0f, 0x1.275da2p-7f,
     0.0f, 0.0f, 0.0f, 0x1.8995aep-124f, 0.0f, 0.0f, 0x1.18843cp-61f,
     0x1.3bf782p-126f, 0.0f, 0x1.3d68dap-35f, 0x1.663a8ep-118f, 0x1.41e12ap-29f,
     0x1.686ae8p-30f, 0.0f, 0x1.f533cap-37f, 0x1.aa05acp-109f, 0.0f, 0x1.91e142p-91f,
     0x1.e830d6p-6f, 0x1.978e62p-87f, 0.0f, 0x1.b19e68p-126f, 0x1.d03408p-59f,
     0x1.8e247cp-109f, 0.0f, 0.0f, 0x1.b0437cp-97f, 0x1.b3d5d4p-96f, 0x1.59df8p-16f,
     0x1.1336b4p-118f, 0x1.02d20cp-12f, 0.0f, 0.0f, 0x1.dbbb68p-116f, 0x1.6871b6p-71f,
     0.0f, 0x1.432182p-61f, 0.0f, 0x1.3a0962p-20f, 0.0f, 0x1.9056b2p-81f,
     0x1.b491ecp-100f, 0x1.db3b36p-78f, 0.0f, 0.0f, 0x1.25595ap-50f, 0x1.4c4796p-80f,
     0.0f, 0.0f, 0x1.1953fep-122f, 0.0f, 0x1.a525fp-94f, 0.0f, 0x1.4efae2p-92f, 0.0f,
     0.0f, 0x1.d0a22cp-126f, 0x1.0ebd62p-56f, 0.0f, 0x1.f546b8p-46f, 0.0f,
     0x1.f47abap-19f, 0x1.a81732p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aced44p-58f,
     0.0f, 0.0f, 0.0f, 0x1.00d37ep-116f, 0x1.040144p-43f, 0.0f, 0.0f, 0.0f,
     0x1.39905ep-22f, 0.0f, 0.0f, 0.0f, 0x1.27cca4p-21f, 0.0f, 0x1.15c878p-46f, 0.0f,
     0.0f, 0x1.5a824cp-100f, 0x1.a181d2p-5f, 0.0f, 0.0f, 0.0f, 0x1.30c5b2p-46f, 0.0f,
     0x1.710224p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a2fbep-65f,
     0x1.cf810ep-43f, 0.0f, 0.0f, 0.0f, 0x1.72953p-10f, 0x1.323c3ap-52f,
     0x1.425e78p-97f, 0.0f, 0x1.a461c4p-120f, 0x1.9ac2ccp-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9f9e34p-26f, 0.0f, 0.0f, 0x1.c381b8p-18f, 0x1.e199cep-75f, 0x1.2378d2p-38f,
     0x1.0e3706p-83f, 0x1.13c79p-118f, 0x1.8728fap-112f, 0x1.a08af6p-93f, 0.0f,
     0x1.f0342ep-10f, 0.0f, 0x1.92ba6cp-115f, 0x1.15fef2p-57f, 0x1.416842p-4f, 0.0f,
     0x1.41d2c6p-21f, 0x1.f9be8ep-5f, 0x1.219d2ap-85f, 0.0f, 0x1.1717b8p-50f,
     0x1.cf07b4p-114f, 0.0f, 0x1.d43b9cp-1f, 0x1.756baep-22f, 0.0f, 0x1.2be446p-59f,
     0x1.ca7eaep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4a6438p-21f, 0x1.8ff66ep-94f,
     0x1.22f724p-29f, 0x1.dfaf84p-118f, 0x1.946636p-69f, 0.0f, 0x1.30a992p-19f,
     0x1.bf749ap-88f, 0x1.6c6d54p-13f, 0x1.7a919ap-120f, 0x1.9bbd3ap-115f,
     0x1.bf8b3p-89f, 0x1.8effd8p-42f, 0x1.178fa4p-16f, 0.0f, 0.0f, 0x1.dce99p-20f,
     0x1.3c0938p-113f, 0x1.ddfb5cp-121f, 0.0f, 0x1.f7b50ep-38f, 0x1.b3231ep-40f,
     0x1.60616ap-23f, 0.0f, 0.0f, 0x1.347528p-96f, 0x1.e61a48p-89f, 0x1.a62848p-70f,
     0x1.4bacaep-85f, 0x1.80ddbap-60f, 0.0f, 0.0f, 0x1.3f52dp-48f, 0.0f, 0.0f,
     0x1.137952p-66f, 0.0f, 0.0f, 0x1.5b4aa2p-117f, 0x1.b925bp-48f, 0x1.49cebap-15f,
     0x1.fdf06p-91f, 0.0f, 0.0f, 0.0f, 0x1.32773ep-45f, 0x1.3fbc74p-52f, 0.0f,
     0x1.ba834ep-44f, 0x1.cb3c4ap-28f, 0x1.133872p-60f, 0x1.73dfaap-29f, 0.0f,
     0x1.b12c74p-126f, 0x1.341096p-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4d8276p-66f, 0.0f,
     0.0f, 0x1.2115c6p-30f, 0x1.6323e2p-94f, 0.0f, 0x1.546474p-117f, 0x1.313fa6p-61f,
     0.0f, 0.0f, 0.0f, 0x1.576ecp-41f, 0.0f, 0x1.a0e8aep-68f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1fdee2p-8f, 0x1.508b9ep-111f, 0x1.b0fc98p-76f, 0.0f, 0x1.722168p-45f, 0.0f,
     0.0f, 0x1.5dc008p-54f, 0x1.0c2716p-69f, 0x1.eb2918p-63f, 0x1.168d9ep-29f, 0.0f,
     0.0f, 0x1.cc8f4ap-53f, 0x1.93771cp-38f, 0x1.359be2p-25f, 0.0f, 0x1.a3cc2p-69f,
     0.0f, 0.0f, 0x1.eeea84p-79f, 0x1.1a997ep-115f, 0x1.1ccb48p-44f, 0.0f, 0.0f,
     0x1.ddd3b6p-105f, 0x1.cd4dfap-84f, 0x1.abb1fcp-64f, 0.0f, 0x1.41afdep-16f, 0.0f,
     0.0f, 0x1.6502cap-44f, 0.0f, 0.0f, 0x1.660c8p-21f, 0x1.e1612ep-74f,
     0x1.863896p-112f, 0x1.56d424p-65f, 0.0f, 0x1.e824cp-18f, 0.0f, 0.0f, 0.0f,
     0x1.10d8c2p-15f, 0.0f, 0x1.335b06p-78f, 0.0f, 0.0f, 0x1.86e852p-76f,
     0x1.8b715cp-54f, 0.0f, 0x1.982c7ep-27f, 0.0f, 0.0f, 0x1.67c1p-43f,
     0x1.07dd7p-30f, 0.0f, 0.0f, 0x1.280e62p-49f, 0.0f, 0x1.76cd22p-30f,
     0x1.6fca3ep-108f, 0.0f, 0.0f, 0.0f, 0x1.5a8c44p-66f, 0.0f, 0.0f, 0x1.4ed414p-14f,
     0x1.23e0b8p-122f, 0x1.05a196p-96f, 0.0f, 0x1.3e0f1ep-14f, 0.0f, 0.0f, 0.0f,
     0x1.c4cc48p-43f, 0x1.828d28p-126f, 0x1.48b33cp-113f, 0.0f, 0.0f, 0.0f,
     0x1.ddf38p-52f, 0.0f, 0.0f, 0x1.e977f4p-110f, 0x1.4335ep-64f, 0x1.24630ap-90f,
     0.0f, 0.0f, 0x1.db1f18p-88f, 0.0f, 0.0f, 0.0f, 0x1.9f4042p-24f, 0x1.1c577ap-38f,
     0.0f, 0x1.44c7p-26f, 0.0f, 0x1.f0d0e4p-2f, 0.0f, 0.0f, 0.0f, 0x1.2f44fcp-104f,
     0.0f, 0x1.1a8c6ap-71f, 0x1.ddb534p-96f, 0x1p0f, 0x1.de2558p-97f, 0.0f, 0.0f,
     0x1.f6bd38p-49f, 0.0f, 0x1.ec288cp-84f, 0x1.2964bep-108f, 0x1.7cd28ep-18f, 0.0f,
     0x1.9cf508p-6f, 0x1.928976p-86f, 0x1.53a3cp-92f, 0x1.683742p-70f,
     0x1.002fc8p-55f, 0.0f, 0x1.6e627ep-59f, 0.0f, 0.0f, 0x1.b533aep-79f, 0.0f, 0.0f,
     0.0f, 0x1.26784cp-100f, 0x1.012662p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1f7518p-6f,
     0x1.06ef8p-25f, 0x1.244304p-106f, 0.0f, 0x1.71ab64p-126f, 0x1.b020c4p-47f,
     0x1.26a812p-54f, 0.0f, 0x1.1e0bfp-57f, 0x1.b02f2ep-17f, 0.0f, 0.0f,
     0x1.e63deap-118f, 0x1.03fe2ep-96f, 0x1.38d348p-79f, 0.0f, 0.0f, 0x1.63903ap-95f,
     0.0f, 0x1.b9e0a4p-11f, 0.0f, 0.0f, 0x1.3f393ep-87f, 0.0f, 0.0f, 0.0f,
     0x1.152f4ap-5f, 0.0f, 0x1.fd8146p-88f, 0.0f, 0.0f, 0x1.cf0a08p-122f,
     0x1.636aacp-96f, 0x1.a007aep-120f, 0x1.20473cp-12f, 0.0f, 0x1.807252p-107f, 0.0f,
     0x1.be5264p-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c3d4b6p-10f, 0.0f,
     0x1.c60ed2p-24f, 0.0f, 0x1.675cfcp-81f, 0x1.0b4d8p-125f, 0.0f, 0x1.e11c26p-71f,
     0x1.425738p-55f, 0x1.8a40bep-45f, 0.0f, 0x1.2b44c8p-85f, 0.0f, 0x1.e0848ap-47f,
     0x1.8760a6p-91f, 0.0f, 0x1.af0596p-114f, 0.0f, 0.0f, 0x1.2d74c2p-96f, 0.0f,
     0x1.c1481cp-9f, 0x1.4c5968p-71f, 0.0f, 0x1.d3fcd6p-64f, 0.0f, 0x1.1a1854p-39f,
     0x1.0bf972p-17f, 0.0f, 0x1.371698p-34f, 0x1.ac2358p-111f, 0.0f, 0.0f,
     0x1.3ef968p-95f, 0x1.83b282p-49f, 0x1.3314dep-74f, 0x1.79c7e8p-55f, 0.0f, 0.0f,
     0.0f, 0x1.2569fcp-123f, 0x1.cc1ce8p-55f, 0x1.f731e4p-8f, 0x1.a1b494p-61f,
     0x1.1bc8f8p-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9cadc8p-65f, 0.0f, 0.0f, 0x1.026fap-53f, 0x1.20d128p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a8a238p-97f, 0x1.c30efp-59f, 0.0f, 0x1.a4103ap-78f, 0x1.ffd3c8p-75f,
     0.0f, 0.0f, 0x1.bfa676p-49f, 0x1.b29ed8p-24f, 0x1.bec948p-111f, 0.0f,
     0x1.6595p-16f, 0x1.a5074ap-42f, 0x1.4b718p-45f, 0x1.4663c2p-42f, 0.0f,
     0x1.42615cp-68f, 0.0f, 0.0f, 0.0f, 0x1.27b12cp-91f, 0.0f, 0x1.e7ab34p-28f,
     0x1.95aaccp-109f, 0x1.b2875p-73f, 0x1.95e07cp-37f, 0.0f, 0.0f, 0x1.866edap-96f,
     0x1.43dbeep-31f, 0x1.f831dp-69f, 0.0f, 0.0f, 0.0f, 0x1.6695c2p-92f,
     0x1.0a2866p-80f, 0.0f, 0.0f, 0x1.4fb282p-39f, 0.0f, 0x1.5d5f84p-41f,
     0x1.916044p-93f, 0.0f, 0.0f, 0x1.61c28ep-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ebb3aep-9f, 0.0f, 0x1.63d73cp-86f, 0x1.3049c8p-101f, 0x1.7002bcp-115f,
     0x1.a55b38p-28f, 0.0f, 0x1.fe9916p-97f, 0.0f, 0.0f, 0x1.568d76p-46f,
     0x1.505408p-74f, 0.0f, 0.0f, 0x1.94979ep-112f, 0x1.6106d4p-72f, 0x1.f17e42p-1f,
     0.0f, 0x1.7a7842p-40f, 0.0f, 0.0f, 0x1.9bc14cp-20f, 0x1.ff1f96p-4f, 0.0f, 0.0f,
     0.0f, 0x1.512e8ap-85f, 0x1.4b40d4p-39f, 0.0f, 0x1.439586p-58f, 0.0f,
     0x1.4427bap-48f, 0x1.8126eep-96f, 0.0f, 0x1.095b42p-124f, 0x1.9ee028p-1f,
     0x1.17ffd4p-101f, 0.0f, 0.0f, 0x1.f6c12cp-66f, 0x1.aac138p-110f, 0x1.025c1ap-64f,
     0x1.f2071ap-110f, 0.0f, 0x1.49f9d6p-85f, 0.0f, 0.0f, 0x1.e72e94p-54f, 0.0f,
     0x1.242496p-121f, 0.0f, 0x1.a4a5dp-72f, 0x1.464e38p-24f, 0x1.db4d4ep-61f,
     0x1.f635eep-20f, 0x1.75bd96p-60f, 0x1.1a5f14p-3f, 0.0f, 0x1.7766dep-32f,
     0x1.72fcfep-18f, 0.0f, 0.0f
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
            tmp1 = Sleef_cosf4_u10avx2128(tmp0);
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
    printf("Sleef_cosf4_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosf4_u10avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
