/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atan2f4_u10kvx.c --function Sleef_atan2f4_u10kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary32,binary32 --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_float4_t external_bench_wrapper_cst = {0.0f, 0.0f, 0.0f, 0.0f};
static const ml_float4_t external_bench_wrapper_cst1 = {0.0f, 0.0f, 0.0f, 0.0f};
volatile float external_bench_wrapper_output_table[1004];
static const float external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.e314a4p-125f, 0.0f, 0x1.3500d4p-79f, 0x1.4fb23cp-22f, 0x1.a1610ep-40f, 0.0f,
     0.0f, 0x1.c9f454p-13f, 0.0f, 0x1.6d5c52p-106f, 0.0f, 0x1.cc8574p-67f, 0.0f, 0.0f,
     0x1.d9ae0cp-48f, 0.0f, 0x1.8b764cp-39f, 0x1.dbffacp-110f, 0.0f, 0.0f,
     0x1.481242p-88f, 0.0f, 0.0f, 0x1.2d88eap-66f, 0x1.6eff04p-40f, 0x1.72b804p-13f,
     0.0f, 0x1.797d1p-80f, 0.0f, 0x1.66ae22p-120f, 0.0f, 0.0f, 0.0f, 0x1.d54e68p-25f,
     0x1.46c618p-75f, 0x1.3fa622p-106f, 0x1.967dc8p-16f, 0.0f, 0x1.2ab0fap-120f,
     0x1.92c4aep-87f, 0.0f, 0.0f, 0.0f, 0x1.9f2336p-46f, 0.0f, 0x1.8d0c4p-22f,
     0x1.7e1ceep-82f, 0.0f, 0x1.0281bep-110f, 0x1.42dd64p-27f, 0.0f, 0x1.db22bcp-117f,
     0.0f, 0x1.49d0f6p-76f, 0.0f, 0x1.a624b4p-54f, 0.0f, 0.0f, 0x1.6143cp-114f, 0.0f,
     0.0f, 0x1.09124cp-16f, 0x1.146668p-75f, 0.0f, 0x1.20a6d4p-4f, 0x1.ccbc4ap-21f,
     0.0f, 0x1.4b3366p-36f, 0.0f, 0.0f, 0x1.e577eep-111f, 0x1.eccfe2p-15f,
     0x1.0cbcbp-5f, 0.0f, 0x1.fb6f02p-61f, 0x1.d2b518p-123f, 0.0f, 0.0f,
     0x1.c2ee3p-99f, 0.0f, 0x1.0081bcp-91f, 0.0f, 0x1.ef1abap-56f, 0x1.dd70e8p-3f,
     0x1.88018ap-103f, 0.0f, 0x1.36a64ep-37f, 0x1.fe0ef8p-50f, 0.0f, 0.0f,
     0x1.4f06c6p-19f, 0.0f, 0x1.7329bcp-58f, 0x1.0d8f4ap-47f, 0.0f, 0x1.f64d24p-111f,
     0x1.09bca8p-79f, 0x1.891202p-79f, 0x1.694428p-100f, 0x1.0738f8p-73f,
     0x1.0a23ccp-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b9255cp-106f, 0.0f,
     0x1.b0393ep-123f, 0.0f, 0x1.13c592p-2f, 0x1.5e2a66p-89f, 0x1.7e1b6ep-11f, 0.0f,
     0x1.cd560ep-44f, 0x1.145234p-42f, 0x1.8f5a86p-81f, 0x1.43b73cp-110f, 0.0f,
     0x1.4a3b84p-33f, 0x1.60e83ap-89f, 0x1.b41feep-55f, 0.0f, 0.0f, 0.0f,
     0x1.42ce14p-87f, 0x1.816f06p-78f, 0.0f, 0.0f, 0x1.e9f96ep-25f, 0x1.f4020cp-58f,
     0x1.a7fbe8p-37f, 0x1.afa106p-83f, 0.0f, 0x1.a0c376p-71f, 0.0f, 0x1.163196p-54f,
     0x1.e40bc4p-126f, 0x1.b52044p-108f, 0.0f, 0x1.391c18p-73f, 0.0f, 0.0f,
     0x1.300398p-25f, 0x1.d859a4p-68f, 0x1.05034p-25f, 0x1.590fbp-51f, 0.0f, 0.0f,
     0.0f, 0x1.bc40bep-57f, 0.0f, 0x1.a100d2p-54f, 0.0f, 0x1.da46e6p-113f,
     0x1.059312p-120f, 0.0f, 0x1.98fe42p-4f, 0.0f, 0.0f, 0x1.b0bc84p-28f,
     0x1.ffe20ap-64f, 0x1.8d3c88p-91f, 0.0f, 0x1.f57b26p-103f, 0x1.0f8928p-56f,
     0x1.e1c0b8p-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad2408p-99f, 0.0f, 0.0f,
     0x1.199772p-1f, 0x1.31a166p-8f, 0x1.3fa092p-26f, 0.0f, 0x1.f55a76p-107f,
     0x1.2d2924p-84f, 0.0f, 0.0f, 0x1.9b620cp-43f, 0.0f, 0.0f, 0x1.6c330cp-5f,
     0x1.a581d2p-43f, 0.0f, 0x1.69fc1ep-84f, 0x1.5ba5fap-29f, 0.0f, 0.0f,
     0x1.6f7d48p-29f, 0x1.9d0ad6p-19f, 0.0f, 0.0f, 0x1.13a03cp-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1fed18p-111f, 0.0f, 0x1.85ff96p-20f, 0x1.4b248ep-21f,
     0x1.a014c8p-88f, 0.0f, 0.0f, 0x1.20788cp-105f, 0x1.1bf238p-98f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.a150d6p-76f, 0x1.899602p-37f, 0.0f, 0x1.c98a1cp-119f, 0.0f, 0.0f,
     0x1.a028bep-4f, 0x1.38cc6ap-110f, 0.0f, 0.0f, 0.0f, 0x1.a0423cp-119f, 0.0f,
     0x1.857224p-61f, 0.0f, 0.0f, 0x1.905d4cp-21f, 0.0f, 0x1.85f864p-18f,
     0x1.3d5e34p-111f, 0.0f, 0.0f, 0x1.d3b15cp-16f, 0.0f, 0.0f, 0x1.3df4c6p-118f,
     0.0f, 0.0f, 0.0f, 0x1.026982p-101f, 0.0f, 0.0f, 0x1.45387ep-101f, 0.0f, 0.0f,
     0.0f, 0x1.2b7002p-64f, 0x1.1f224p-29f, 0x1.af03b8p-72f, 0.0f, 0x1.013948p-34f,
     0x1.49826cp-77f, 0x1.0acb3cp-2f, 0x1.b2dc02p-80f, 0x1.ba74e8p-104f, 0.0f,
     0x1.29e766p-66f, 0x1.96cf4ap-60f, 0x1.df684cp-24f, 0.0f, 0x1.fd7924p-44f,
     0x1.643894p-72f, 0.0f, 0.0f, 0x1.16b30ap-56f, 0x1.34f1a4p-7f, 0x1.64f2d2p-109f,
     0x1.4ac252p-5f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.daf52cp-28f, 0x1.0044b2p-49f,
     0x1.342474p-65f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9b21eap-115f, 0x1.426f58p-117f,
     0x1p0f, 0.0f, 0x1.b7d98p-85f, 0.0f, 0.0f, 0x1.8eb892p-113f, 0x1.65f93ap-120f,
     0.0f, 0x1.843de6p-97f, 0x1.5e0822p-91f, 0x1.871088p-113f, 0x1.30a2b6p-8f, 0.0f,
     0.0f, 0x1.11f4cp-30f, 0.0f, 0x1.8ac314p-111f, 0x1.00f88p-111f, 0x1.f9ccc4p-17f,
     0.0f, 0x1.70299ap-49f, 0.0f, 0.0f, 0x1.4051c2p-105f, 0.0f, 0x1.9e8b4cp-120f,
     0.0f, 0.0f, 0.0f, 0x1.eec01p-67f, 0.0f, 0.0f, 0.0f, 0x1.531eb4p-113f, 0.0f,
     0x1.1eb14ap-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3a26aap-125f, 0x1.d39af6p-21f, 0.0f,
     0x1.e6976p-37f, 0.0f, 0x1.653e88p-83f, 0x1.55988cp-51f, 0x1.7cea42p-107f, 0.0f,
     0x1.2704p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cf5604p-97f, 0.0f,
     0x1.df7d98p-52f, 0x1.9bc092p-58f, 0x1.37d5c4p-53f, 0.0f, 0.0f, 0x1.c37ccp-21f,
     0.0f, 0x1.56dbfap-114f, 0x1.4da67ep-58f, 0x1.7e01aep-101f, 0.0f, 0.0f,
     0x1.25b9c4p-54f, 0x1.7a9a9ap-1f, 0x1.c4b96p-110f, 0.0f, 0x1.f9b974p-14f,
     0x1.cca1e2p-76f, 0x1.972584p-103f, 0x1.2be0c4p-49f, 0.0f, 0.0f, 0x1.067bfep-41f,
     0x1.9a1e54p-46f, 0.0f, 0x1.9dce9ep-22f, 0x1.646a86p-75f, 0x1.82619p-119f,
     0x1.92825p-114f, 0x1.023bp-5f, 0.0f, 0x1.4b71a8p-113f, 0.0f, 0x1.50b2f4p-57f,
     0.0f, 0x1.fa93d8p-91f, 0x1.62536ep-116f, 0x1.23202p-99f, 0x1.26840ap-50f, 0.0f,
     0.0f, 0.0f, 0x1.03ec62p-120f, 0.0f, 0.0f, 0.0f, 0x1.36efb4p-110f, 0x1.387dp-89f,
     0.0f, 0.0f, 0.0f, 0x1.513354p-108f, 0.0f, 0x1.823898p-74f, 0x1.0a88d4p-81f,
     0x1.c80b54p-118f, 0.0f, 0x1.7c08dp-5f, 0.0f, 0x1.2b9108p-119f, 0x1.2dd352p-59f,
     0x1.084086p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.505e92p-41f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.49ec06p-9f, 0x1.20d5f8p-63f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1ab502p-52f,
     0.0f, 0.0f, 0x1.b1db72p-41f, 0x1.c40e42p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7e758p-115f, 0x1.a528b2p-64f, 0x1.b8c464p-113f, 0.0f, 0x1.5ecc22p-68f, 0.0f,
     0.0f, 0x1.6a09f2p-80f, 0x1.a3f052p-27f, 0x1.1873a4p-115f, 0x1.cc29aap-29f,
     0x1.be282ep-120f, 0x1.3a4c94p-46f, 0x1.764dc8p-14f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.749e4ep-86f, 0.0f, 0.0f, 0x1.45b916p-2f, 0.0f, 0x1.77f586p-66f,
     0x1.bb10f6p-100f, 0.0f, 0x1.512fe4p-87f, 0x1.e62b7ap-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.56ec74p-53f, 0.0f, 0x1.8b026ap-44f, 0.0f,
     0x1.00f0a2p-47f, 0x1.57724cp-75f, 0.0f, 0x1.9f0922p-22f, 0.0f, 0.0f,
     0x1.f79fbep-57f, 0.0f, 0.0f, 0x1.ab942ep-6f, 0x1.c02aa4p-35f, 0.0f, 0.0f,
     0x1.2876cap-116f, 0.0f, 0x1.722c6cp-24f, 0x1.d2f79ep-82f, 0.0f, 0x1.e47d3p-102f,
     0x1.b1c39ep-124f, 0x1.6cff5cp-38f, 0x1.7b14p-79f, 0x1.d6b7ep-20f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.8d3186p-20f, 0x1.eea594p-40f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7adc24p-107f, 0x1.1c1c16p-29f, 0x1.f8b26ap-79f, 0.0f, 0.0f, 0x1.fde44ap-88f,
     0x1.b9f27p-24f, 0.0f, 0.0f, 0.0f, 0x1.04e9p-45f, 0x1.f1fcaap-4f, 0.0f,
     0x1.db65fp-70f, 0x1.178e3cp-23f, 0x1.8d67fap-80f, 0.0f, 0x1.3259b8p-120f,
     0x1.93973ep-30f, 0.0f, 0.0f, 0x1.9659dap-121f, 0.0f, 0.0f, 0.0f, 0x1.3edbccp-19f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8279b6p-121f, 0x1.b96c5p-86f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1c1a58p-21f, 0.0f, 0.0f, 0.0f, 0x1.7f08eep-4f, 0.0f, 0.0f, 0x1.888b8cp-85f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c4a842p-21f, 0x1.5fc166p-26f,
     0x1.67cf62p-89f, 0x1.b60846p-21f, 0.0f, 0x1.f67dcp-84f, 0x1.4d1ccap-102f, 0.0f,
     0x1.8a47b4p-125f, 0x1.b05534p-100f, 0x1.857d9ep-48f, 0x1.50b192p-121f,
     0x1.c2431p-29f, 0x1.4cfb3ep-68f, 0x1.7f9b94p-94f, 0.0f, 0x1.ba3f9ap-97f,
     0x1.5a67c4p-16f, 0.0f, 0.0f, 0.0f, 0x1.3ece8ep-116f, 0x1.f7f9ecp-45f, 0.0f,
     0x1.a1fa94p-9f, 0x1.caddd6p-122f, 0.0f, 0.0f, 0x1.25e07ep-86f, 0.0f,
     0x1.6e732p-73f, 0.0f, 0x1.0f944p-35f, 0.0f, 0.0f, 0x1.9e7d9p-12f, 0.0f, 0.0f,
     0x1.46e5f6p-43f, 0.0f, 0.0f, 0x1.0abdf2p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.746894p-66f, 0.0f, 0.0f, 0.0f, 0x1.897264p-5f,
     0x1.5fb6aep-126f, 0.0f, 0.0f, 0x1.cb3a76p-62f, 0x1.8ff88ep-51f, 0.0f, 0.0f,
     0x1.d71d28p-110f, 0.0f, 0x1.de8222p-1f, 0.0f, 0x1.2ce4a8p-97f, 0x1.98755ep-102f,
     0x1.4d6bd4p-18f, 0.0f, 0x1.5a4e46p-92f, 0.0f, 0.0f, 0.0f, 0x1.c40164p-15f, 0.0f,
     0.0f, 0x1.1c95c6p-83f, 0.0f, 0x1.088edp-10f, 0x1.f81f7ap-19f, 0x1.9b37cap-57f,
     0x1.0f7f94p-29f, 0.0f, 0x1.be191cp-63f, 0x1.d9e8a2p-98f, 0.0f, 0x1.0629ep-113f,
     0.0f, 0x1.c5b7ecp-93f, 0x1.2f3458p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.b8aec4p-48f, 0.0f, 0.0f, 0x1.a5a3d2p-104f, 0.0f, 0.0f, 0x1.7a674cp-63f, 0.0f,
     0.0f, 0.0f, 0x1.21c478p-12f, 0.0f, 0.0f, 0x1.a5f9fp-25f, 0x1.f00f68p-51f,
     0x1.c8d7fep-81f, 0x1.227f14p-17f, 0.0f, 0.0f, 0.0f, 0x1.939994p-70f, 0.0f,
     0x1.2868f6p-66f, 0x1.8013ecp-60f, 0x1.5e8322p-99f, 0x1.e4454p-28f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.50be42p-37f, 0x1.9e39c6p-39f, 0.0f, 0x1.21350ep-45f,
     0x1.88d95p-99f, 0.0f, 0.0f, 0x1.6ce6c6p-118f, 0x1.55245cp-25f, 0x1.066ddcp-90f,
     0.0f, 0.0f, 0x1.3511c4p-14f, 0.0f, 0x1.c0a46ep-82f, 0x1.af9e8ep-53f, 0.0f,
     0x1.185aep-53f, 0x1.2c97fap-60f, 0.0f, 0x1.2aaaa8p-121f, 0x1.63fc04p-6f,
     0x1.cfd192p-105f, 0.0f, 0.0f, 0x1.bca49p-38f, 0.0f, 0.0f, 0x1.ad4146p-55f,
     0x1.eb6dd4p-59f, 0x1.23024p-121f, 0x1.447f28p-115f, 0.0f, 0x1.ddd77p-3f,
     0x1.5731bp-28f, 0x1.0fef4ep-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.709236p-13f, 0.0f,
     0.0f, 0.0f, 0x1.56af7ep-83f, 0x1.76269p-111f, 0.0f, 0x1.ab143cp-105f,
     0x1.83bfep-117f, 0.0f, 0x1.8c1e6cp-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d33b28p-59f,
     0x1.94ad78p-65f, 0.0f, 0x1.b56f04p-33f, 0x1.03f03cp-77f, 0x1.6dfe52p-2f, 0.0f,
     0x1.f97316p-27f, 0.0f, 0x1.77d058p-112f, 0.0f, 0.0f, 0x1.df092ap-72f, 0.0f, 0.0f,
     0.0f, 0x1.5fb038p-89f, 0.0f, 0x1.b4eb62p-87f, 0.0f, 0.0f, 0x1.ac267p-96f, 0.0f,
     0.0f, 0.0f, 0x1.852354p-81f, 0x1.53ba14p-71f, 0.0f, 0x1.a9e9bap-29f, 0.0f, 0.0f,
     0x1.8cf94ap-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.12e15ep-10f, 0x1.d30d94p-30f, 0.0f, 0x1.466e66p-22f, 0x1.0817e2p-119f,
     0.0f, 0.0f, 0x1.17c5dp-72f, 0x1.fadeecp-35f, 0x1.2e0438p-21f, 0.0f, 0.0f,
     0x1.483fbap-86f, 0x1.2f9bdep-49f, 0x1.59f6a2p-120f, 0x1.2620c8p-125f, 0.0f,
     0x1.3c86fap-19f, 0.0f, 0x1.c25d4ap-123f, 0x1.23c40ep-64f, 0.0f, 0x1.eb1cb8p-21f,
     0x1.7d5742p-126f, 0x1.bf6152p-26f, 0x1.398586p-71f, 0x1.c81064p-10f,
     0x1.867c8cp-29f, 0x1.8fbc3ap-30f, 0.0f, 0.0f, 0.0f, 0x1.7bf0cp-70f,
     0x1.dace3cp-33f, 0x1.351632p-82f, 0x1.cbcd06p-42f, 0x1.c61894p-113f,
     0x1.970cep-99f, 0.0f, 0x1.a9c2ccp-79f, 0.0f, 0x1.4a1b4p-70f, 0x1.861438p-5f,
     0x1.f5596ep-117f, 0.0f, 0.0f, 0x1.f705dep-116f, 0x1.8819ecp-115f,
     0x1.8a5a8p-117f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.377ffep-82f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0f342cp-123f, 0.0f, 0.0f, 0.0f, 0x1.bc31a2p-82f, 0.0f, 0x1.db55bap-7f,
     0x1.104198p-82f, 0x1.001ee6p-65f, 0.0f, 0x1.29119cp-71f, 0.0f, 0x1.e90c74p-72f,
     0x1.fc1b08p-70f, 0.0f, 0x1.41ce2ep-16f, 0x1.de4068p-109f, 0x1.157ac4p-2f,
     0x1.fcae3ap-107f, 0.0f, 0.0f, 0x1.ad684ap-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.66358ep-36f, 0.0f, 0.0f, 0x1.3e7c6p-28f, 0.0f, 0.0f, 0.0f, 0x1.56a0f8p-110f,
     0x1.f8137cp-112f, 0.0f, 0.0f, 0x1.c3fa9cp-57f, 0.0f, 0x1.83a9e2p-29f,
     0x1.33fb1ep-44f, 0.0f, 0.0f, 0x1.c4bf46p-60f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0a08d2p-42f, 0.0f, 0.0f, 0.0f, 0x1.362544p-113f, 0x1.6287c8p-18f,
     0x1.5ba68ap-61f, 0.0f, 0x1.d9ddaap-16f, 0x1.d8d8ccp-62f, 0.0f, 0x1.d051b6p-26f,
     0.0f, 0.0f, 0x1.b0b534p-44f, 0.0f, 0.0f, 0.0f, 0x1.f3e358p-58f, 0.0f,
     0x1.d97246p-81f, 0x1.a3d108p-94f, 0x1.5c9e6ap-11f, 0x1.c6da26p-7f, 0.0f,
     0x1.d3659cp-117f, 0.0f, 0.0f, 0x1.671382p-21f, 0.0f, 0.0f, 0x1.cb317p-52f, 0.0f,
     0x1.c85c6ap-90f, 0.0f, 0x1.228714p-114f, 0x1.13132p-54f, 0.0f, 0x1.6a7236p-54f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d769b8p-69f, 0x1.4dbf44p-49f, 0x1.f4ac3cp-122f,
     0x1.a41b6p-108f, 0.0f, 0x1.528074p-67f, 0.0f, 0x1.550f8p-68f, 0x1.d25ab2p-23f,
     0.0f, 0x1.2b99d6p-82f, 0.0f, 0x1.788162p-123f, 0.0f, 0.0f, 0.0f, 0x1.7e78cap-6f,
     0x1.1bfbccp-115f, 0x1.55f4a8p-30f, 0.0f, 0x1.b525dp-74f, 0x1.e96f04p-74f, 0.0f,
     0x1.bcd772p-33f, 0x1.e49e12p-120f, 0.0f, 0x1.a4bbcp-13f, 0.0f, 0.0f, 0.0f,
     0x1.d974fep-25f, 0x1p0f, 0x1.a17354p-15f, 0.0f, 0x1.0da468p-54f, 0.0f,
     0x1.49195cp-9f, 0.0f, 0x1.22be1p-63f, 0.0f, 0x1.f081p-119f, 0.0f, 0.0f,
     0x1.27322p-27f, 0x1.c5e4b4p-10f, 0x1.d1a52ep-31f, 0.0f, 0x1.e67698p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b7518p-8f, 0.0f, 0.0f, 0x1.a75136p-107f,
     0x1.62e734p-17f, 0.0f, 0x1.0d78a8p-104f, 0x1.28d7ap-58f, 0.0f, 0x1.61e9fep-71f,
     0.0f, 0x1.6664a2p-76f, 0x1.80aa76p-23f, 0.0f, 0.0f, 0.0f, 0.0f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0.0f, 0.0f, 0.0f, 0x1.22c356p-13f, 0.0f, 0.0f, 0x1.9b22a2p-121f, 0.0f,
     0x1.07cd6ap-28f, 0x1.160596p-68f, 0x1.6dccaap-106f, 0.0f, 0.0f, 0.0f,
     0x1.a1696p-58f, 0.0f, 0.0f, 0x1.d586b4p-107f, 0.0f, 0.0f, 0x1.d916eep-42f,
     0x1.b36b36p-88f, 0x1.253cb6p-2f, 0x1.5db318p-30f, 0x1.983eap-36f,
     0x1.48b3cp-112f, 0.0f, 0.0f, 0.0f, 0x1.10ca72p-43f, 0.0f, 0x1.6e0d1ep-111f, 0.0f,
     0x1.14e616p-100f, 0x1.c4f188p-100f, 0.0f, 0x1.1acbd4p-75f, 0.0f, 0x1.46e2c8p-41f,
     0.0f, 0.0f, 0.0f, 0x1.1b4be2p-38f, 0x1.ae944p-49f, 0.0f, 0x1.d621f6p-59f,
     0x1.d4775ap-21f, 0x1.897406p-6f, 0x1.6f1924p-113f, 0x1.181d26p-126f, 0.0f, 0.0f,
     0x1.e99864p-35f, 0x1.fe2abp-6f, 0x1.c30122p-17f, 0.0f, 0x1.5bc8e6p-67f,
     0x1.635fcp-97f, 0x1.5272e6p-64f, 0x1.eb7c4cp-11f, 0x1.51ae8ep-56f,
     0x1.076154p-108f, 0.0f, 0.0f, 0x1.25d134p-122f, 0.0f, 0.0f, 0x1.51aec2p-8f,
     0x1.7dea4ep-101f, 0.0f, 0.0f, 0.0f, 0x1.fcad88p-122f, 0.0f, 0.0f,
     0x1.d639c2p-61f, 0.0f, 0.0f, 0.0f, 0x1.92b13ep-22f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.347418p-33f, 0x1.eebce8p-113f, 0x1.5133a2p-90f, 0.0f, 0x1.bc469ep-37f,
     0x1.06bd5cp-15f, 0.0f, 0x1.87ce92p-19f, 0x1.26a02cp-27f, 0x1.998bcep-115f,
     0x1.7ff85p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3a3c4p-4f, 0.0f, 0x1.39911p-105f,
     0x1.25434cp-58f, 0.0f, 0x1.0778ep-59f, 0x1.41558p-30f, 0x1.337e38p-54f,
     0x1.f03c4cp-4f, 0.0f, 0.0f, 0x1.0040bp-17f, 0x1.28707cp-46f, 0x1.8714d8p-10f,
     0.0f, 0.0f, 0x1.33eee2p-56f, 0.0f, 0x1.d20b28p-14f, 0.0f, 0x1.008a46p-41f,
     0x1.8d3598p-96f, 0.0f, 0.0f, 0x1.95415ep-70f, 0x1.2925e6p-112f, 0.0f, 0.0f, 0.0f,
     0x1.d71e24p-98f, 0.0f, 0.0f, 0x1.02379p-57f, 0x1.957d86p-54f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d71ff8p-100f, 0x1.89203ap-11f, 0x1.a52f26p-120f,
     0x1.60ce18p-114f, 0x1.351162p-55f, 0x1.3ddc4ap-97f, 0x1.92887ep-47f, 0.0f, 0.0f,
     0.0f, 0x1.8cc3cep-97f, 0.0f, 0x1.9cc634p-89f, 0.0f, 0.0f, 0x1.8c770ep-101f,
     0x1.ecb6a6p-85f, 0x1.2613ep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9e5d82p-4f,
     0x1.2240dap-4f, 0x1.c4248p-107f, 0.0f, 0.0f, 0x1.0048ap-69f, 0x1.d61e9p-72f,
     0x1.cc8f26p-61f, 0x1.2fa072p-105f, 0x1.c76a44p-115f, 0.0f, 0x1.0b82dcp-84f,
     0x1.a3ad2ep-64f, 0.0f, 0x1.fe1f8p-24f, 0.0f, 0x1.a9dbfap-6f, 0.0f, 0.0f,
     0x1.d6bebep-106f, 0x1.4ffe8cp-108f, 0.0f, 0x1.7cbc8cp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.78ddfap-103f, 0.0f, 0x1.3cd236p-118f, 0x1.89882p-37f, 0x1.09428ep-50f,
     0x1.d8c41p-119f, 0.0f, 0.0f, 0x1.2a040cp-95f, 0x1.1d6c14p-64f, 0x1.3bb376p-122f,
     0x1.52c05ep-9f, 0.0f, 0.0f, 0x1.4a1424p-10f, 0.0f, 0x1.26cd82p-45f, 0.0f,
     0x1.376cf6p-10f, 0.0f, 0.0f, 0x1.04df8p-112f, 0x1.de183cp-50f, 0.0f, 0.0f,
     0x1.26f664p-10f, 0x1.6be7e8p-104f, 0x1.3c4a7ap-102f, 0x1.50e66cp-46f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b09ccp-64f, 0.0f, 0x1.3cb6d6p-16f, 0.0f, 0.0f,
     0x1.6a5e1ep-36f, 0x1.6721a6p-82f, 0.0f, 0.0f, 0x1.7f990ap-48f, 0x1.2a82f8p-36f,
     0.0f, 0x1.37581cp-11f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.421b9ep-79f, 0x1.2e5e4ep-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.169df8p-81f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.92580ep-37f, 0.0f, 0x1.8c3476p-19f, 0.0f, 0.0f, 0x1.311e2ep-21f, 0.0f,
     0x1.b016d6p-64f, 0x1.b73212p-39f, 0x1.d64788p-17f, 0.0f, 0x1.c07c9p-3f, 0.0f,
     0.0f, 0.0f, 0x1.28b66ep-85f, 0.0f, 0.0f, 0x1.b517b8p-105f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.eaa952p-50f, 0.0f, 0.0f, 0x1.9ee68cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.03e824p-46f, 0x1.35cbe6p-45f, 0x1.35493ap-30f, 0.0f, 0x1.5439e4p-117f, 0.0f,
     0.0f, 0x1.19419cp-13f, 0.0f, 0x1.39b54ep-9f, 0x1.a7c1e2p-92f, 0x1.b46d6ep-122f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9507b4p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.16eefcp-57f,
     0x1.2ba552p-108f, 0x1.cacbb8p-99f, 0x1.6f5eaap-70f, 0x1.12fa76p-5f,
     0x1.d530bcp-70f, 0.0f, 0x1.79e026p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.496bf6p-31f,
     0.0f, 0x1.c92b12p-107f, 0x1.0576a4p-23f, 0x1.c34212p-109f, 0.0f,
     0x1.ec746ep-107f, 0.0f, 0x1.b320eap-63f, 0x1.3d586cp-10f, 0.0f, 0.0f,
     0x1.058de4p-73f, 0x1.bdf488p-65f, 0.0f, 0.0f, 0x1.6e284cp-41f, 0x1.5a97aep-61f,
     0.0f, 0x1.db246ep-82f, 0x1.2b1554p-37f, 0x1.d2dd48p-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.3b388cp-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a283e8p-4f,
     0.0f, 0x1.aaf02ep-107f, 0.0f, 0x1.9aabc2p-61f, 0x1.25ac7ep-106f, 0.0f, 0.0f,
     0x1.d28b16p-17f, 0x1.181cap-75f, 0.0f, 0x1.6e7a3p-120f, 0x1.274a4ep-109f,
     0x1.bfd32ep-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ba516ap-65f, 0.0f, 0x1.0b10cp-41f,
     0.0f, 0x1.e5848ap-11f, 0.0f, 0.0f, 0x1.bb4cbcp-122f, 0x1.89745ep-28f,
     0x1.12c276p-12f, 0x1.26d95ep-82f, 0.0f, 0x1.fbc434p-44f, 0x1.edcab8p-36f, 0.0f,
     0x1.1ff49cp-89f, 0x1.a52d34p-66f, 0.0f, 0x1.733438p-107f, 0.0f, 0x1.4043d6p-4f,
     0x1.9d07aep-31f, 0.0f, 0x1.cebf16p-17f, 0x1.8f7ebp-7f, 0x1.d11648p-73f,
     0x1.5b68c6p-74f, 0x1.66b28p-18f, 0.0f, 0.0f, 0x1.48c956p-32f, 0.0f, 0.0f, 0.0f,
     0x1.444d64p-120f, 0.0f, 0x1.b3628cp-116f, 0x1.6e750ep-4f, 0.0f, 0.0f,
     0x1.7aa1d6p-120f, 0.0f, 0.0f, 0.0f, 0x1.439dep-73f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.37bcaap-65f, 0x1.89f548p-49f, 0x1.c26148p-78f, 0.0f, 0.0f, 0.0f,
     0x1.a4c8fp-6f, 0.0f, 0.0f, 0x1.3ffb9p-121f, 0x1.d892f6p-104f, 0x1.3e76e2p-62f,
     0x1.f6088ap-46f, 0.0f, 0.0f, 0.0f, 0x1.db0d78p-106f, 0.0f, 0x1.1772b6p-70f,
     0x1.f4dcecp-8f, 0.0f, 0x1.71c1bep-46f, 0.0f, 0.0f, 0.0f, 0x1.c27cep-79f, 0.0f,
     0.0f, 0.0f, 0x1.530a8cp-17f, 0.0f, 0.0f, 0x1.4df12ep-43f, 0.0f, 0x1.cf0454p-38f,
     0.0f, 0x1.6912ep-102f, 0x1.fc3208p-43f, 0x1.06466cp-9f, 0x1.c824ep-98f, 0.0f,
     0x1.e49d18p-51f, 0.0f, 0x1.5aa898p-57f, 0x1.39b09ap-90f, 0.0f, 0x1.c3c3cep-64f,
     0.0f, 0x1.ecdfaap-54f, 0x1.3084bep-72f, 0.0f, 0x1.ac6a26p-101f, 0x1.f352f6p-29f,
     0x1.d21f1p-83f, 0x1.193e04p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d4fdeap-120f,
     0x1.4775a2p-21f, 0x1.1da21cp-80f, 0.0f, 0x1.e52242p-57f, 0x1.08f3eap-47f, 0.0f,
     0x1.e694d8p-3f, 0x1.dfb34ap-49f, 0x1.42f23ep-65f, 0x1.e3fa04p-12f, 0.0f, 0.0f,
     0x1.aa5e56p-60f, 0x1.adec02p-121f, 0.0f, 0x1.8ba52cp-118f, 0x1.d7a552p-6f,
     0x1.b52094p-97f, 0x1.13702cp-53f, 0x1.d98a88p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.83ab94p-93f, 0.0f, 0.0f, 0x1.1b6fb8p-62f, 0x1.5cbe48p-96f, 0.0f,
     0x1.8ff596p-108f, 0.0f, 0x1.f373dep-30f, 0x1.08fe84p-91f, 0x1.72fabcp-89f, 0.0f,
     0.0f, 0x1.ac6bfep-27f, 0x1.76dea8p-96f, 0x1.d35ab8p-110f, 0.0f, 0x1.55d8a4p-18f,
     0.0f, 0x1.26bfc4p-62f, 0x1.db5088p-98f, 0x1.e5a17ep-110f, 0.0f, 0x1.2d3d1ap-45f,
     0x1.7ab73cp-101f, 0x1.40636p-23f, 0.0f, 0.0f, 0.0f, 0x1.c458c2p-113f, 0.0f, 0.0f,
     0x1.9c2f98p-95f, 0.0f, 0x1.8a9f4ap-5f, 0x1.97c782p-94f, 0.0f, 0.0f, 0.0f,
     0x1.b9a568p-54f, 0.0f, 0.0f, 0x1.a50554p-126f, 0.0f, 0x1.f9e5ccp-48f,
     0x1.a932d4p-23f, 0.0f, 0x1.14711p-104f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eaa84ep-82f,
     0x1.ecba3cp-107f, 0x1.1c37bap-32f, 0x1.148afcp-36f, 0x1.5343d4p-61f, 0.0f,
     0x1.d461c2p-31f, 0x1.085e4ep-66f, 0x1.8fb39cp-122f, 0.0f, 0x1.f5e05p-80f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.41e59ap-23f, 0.0f, 0.0f, 0.0f, 0x1.d0e1a8p-68f, 0.0f,
     0x1.c62ca2p-110f, 0.0f, 0x1.a6954ap-101f, 0x1.2d0048p-76f, 0x1.606e9ep-74f,
     0x1.16f12ep-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f42b6p-17f,
     0x1.875f5cp-69f, 0.0f, 0x1.10bc4p-27f, 0.0f, 0x1.9a7718p-59f, 0x1.578752p-107f,
     0.0f, 0.0f, 0x1.e20ebap-86f, 0x1.4d67a8p-23f, 0.0f, 0x1.46b0bcp-66f, 0.0f, 0.0f,
     0.0f, 0x1.36f708p-58f, 0.0f, 0x1.f466bcp-33f, 0.0f, 0.0f, 0x1.172c5ep-55f,
     0x1.833f3ap-49f, 0x1.c3208ap-121f, 0x1.17ae2p-113f, 0.0f, 0.0f, 0x1.c15f0ep-17f,
     0x1.04286ep-64f, 0x1.17ac82p-62f, 0.0f, 0.0f, 0x1.891cccp-98f, 0x1.05f60ap-4f,
     0.0f, 0.0f, 0x1.64d894p-54f, 0.0f, 0x1.92672ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.25107ap-46f, 0.0f, 0x1.26785cp-87f, 0x1.498ba8p-29f, 0x1.a51f46p-106f,
     0x1.c4fa7ap-19f, 0.0f, 0.0f, 0.0f, 0x1.92a072p-58f, 0x1.2d2b78p-2f, 0.0f,
     0x1.749eeap-122f, 0.0f, 0x1.44ef74p-113f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fb4054p-105f, 0x1.52d034p-22f, 0.0f, 0.0f, 0x1.d15d54p-67f, 0x1.4f8d7ap-24f,
     0.0f, 0x1.5d9da2p-20f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2615bep-40f, 0.0f,
     0x1.672a8ap-106f, 0x1.e72372p-111f, 0x1.c3e48ap-75f, 0x1.24822cp-1f,
     0x1.37ccd2p-45f, 0.0f, 0.0f, 0x1.36996ap-40f, 0.0f, 0x1.b054d6p-21f, 0.0f,
     0x1.5c56a2p-61f, 0.0f, 0x1.136ca4p-2f, 0.0f, 0x1.3d36fep-30f, 0.0f,
     0x1.02413cp-88f, 0.0f, 0x1.f8e2dp-79f, 0.0f, 0.0f, 0.0f, 0x1.66a4fap-96f,
     0x1.504cc4p-90f, 0.0f, 0x1.2d449cp-47f, 0.0f, 0.0f, 0.0f, 0x1.7ac65p-29f, 0.0f,
     0.0f, 0x1.6f1454p-53f, 0x1.3c7facp-116f, 0.0f, 0x1.5d8c22p-42f, 0x1.9c105cp-73f,
     0x1.b218fcp-70f, 0.0f, 0.0f, 0x1.d2cf74p-96f, 0.0f, 0x1.239e02p-1f, 0.0f,
     0x1.fc908p-69f, 0x1.669ca4p-36f, 0x1.7376cep-78f, 0.0f, 0.0f, 0x1.6d671ep-115f,
     0x1.e7508ap-32f, 0.0f, 0x1.e60232p-38f, 0.0f, 0.0f, 0x1.24ecbcp-124f, 0.0f, 0.0f,
     0x1.ea874cp-85f, 0x1.12b412p-107f, 0x1.00fe06p-65f, 0.0f, 0x1.67c6d4p-37f,
     0x1.9731fcp-40f, 0x1.b97a32p-103f, 0x1.c798fp-8f, 0x1.f6b39ap-99f, 0.0f,
     0x1.39c572p-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.29bb18p-17f, 0.0f,
     0.0f, 0x1.b4f31ep-87f, 0.0f, 0x1.6c61a2p-7f, 0x1.e93022p-57f, 0.0f,
     0x1.11e4dcp-91f, 0x1.f759ecp-108f, 0.0f, 0.0f, 0x1.16718ap-14f, 0.0f, 0.0f,
     0x1.da1acep-93f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e9da88p-110f, 0.0f,
     0x1.921bb4p-87f, 0.0f, 0x1.2b896ep-13f, 0x1.418ef2p-43f, 0.0f, 0.0f,
     0x1.e76ecp-26f, 0.0f, 0.0f, 0x1.f55e8p-39f, 0.0f, 0x1.c0cfb6p-119f,
     0x1.34056p-123f, 0x1.b14e9ep-12f, 0.0f, 0.0f, 0x1.40da94p-50f, 0.0f, 0.0f, 0.0f,
     0x1.caa5ep-7f, 0.0f, 0.0f, 0x1.fe1d08p-79f, 0.0f, 0x1.124a2cp-89f,
     0x1.e8f62ep-89f, 0x1.af725ap-3f, 0.0f, 0x1.ad2e36p-113f, 0.0f, 0x1.d0548ep-47f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.a13f54p-86f, 0x1.ec4416p-109f, 0.0f, 0.0f,
     0x1.5cfa84p-50f, 0.0f, 0x1.5f82acp-50f, 0x1.b8c862p-23f, 0.0f, 0x1.5a7084p-21f,
     0.0f, 0x1.8370cap-118f, 0.0f, 0x1.bf69d8p-121f, 0x1.4f89b6p-45f,
     0x1.e95482p-113f, 0x1.12b272p-28f, 0x1.24a108p-58f, 0x1.fa06aep-104f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.db2b2p-117f, 0x1.5f1bap-20f, 0.0f, 0.0f, 0x1.dca822p-58f,
     0x1.030da8p-1f, 0.0f, 0.0f, 0.0f, 0x1.8643d6p-108f, 0x1.5c343ep-88f,
     0x1.4c5c52p-97f, 0x1.3afc54p-15f, 0.0f, 0x1.d55b86p-67f, 0x1.64f16cp-40f,
     0x1.648ffcp-91f, 0.0f, 0x1.03f866p-116f, 0.0f, 0.0f, 0x1.d13074p-32f,
     0x1.633efep-45f, 0x1.ae4d06p-29f, 0.0f, 0x1.79e09ep-23f, 0.0f, 0.0f,
     0x1.be9de8p-57f, 0x1.9e6324p-121f, 0.0f, 0x1.52ef32p-14f, 0.0f, 0x1.0de4aap-24f,
     0.0f, 0.0f, 0.0f, 0x1.6b03p-101f, 0.0f, 0x1.78dd3ap-5f, 0x1.c526d4p-104f, 0.0f,
     0x1.91124ap-74f, 0x1.cf9f4cp-2f, 0x1.c5c708p-59f, 0.0f, 0x1.1c86cap-47f, 0.0f,
     0.0f, 0.0f, 0x1.e7eec4p-94f, 0.0f, 0.0f, 0x1.2e055ap-79f, 0.0f, 0x1.d970a2p-57f,
     0x1.54832p-31f, 0x1.a88cfcp-61f, 0x1.84b2b2p-79f, 0.0f, 0x1.e38cd2p-117f,
     0x1.c53386p-1f, 0.0f, 0.0f, 0.0f, 0x1.bf51dep-68f, 0.0f, 0x1.24b98ap-109f, 0.0f,
     0.0f, 0.0f, 0x1.7a83e6p-59f, 0x1.0acf5p-38f, 0.0f, 0.0f, 0x1.272f1ep-69f,
     0x1.6a9de8p-125f, 0x1.546c56p-95f, 0x1.c4c3d8p-37f, 0x1.29da14p-6f,
     0x1.ff0ac6p-40f, 0.0f, 0x1.ff81cep-88f, 0x1.1a848cp-111f, 0.0f, 0.0f,
     0x1.80705ap-75f, 0x1.f0c8bcp-60f, 0x1.337b2p-49f, 0x1.8e28dcp-10f,
     0x1.ec7806p-56f, 0x1.27ae2cp-11f, 0x1.3000d8p-26f, 0x1.b858eep-87f,
     0x1.f98bb2p-106f, 0.0f, 0.0f, 0x1.dad66ap-71f, 0x1.66d6e4p-98f, 0x1.f4fd6p-14f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.81cc0ep-65f, 0x1.3da042p-93f, 0.0f,
     0x1.3674e4p-126f, 0x1.8b5068p-114f, 0x1.dbd8f8p-116f, 0.0f, 0.0f,
     0x1.458746p-37f, 0.0f, 0x1.6c9d42p-30f, 0x1.9390e2p-111f, 0.0f, 0.0f,
     0x1.d5d536p-89f, 0x1.d5360cp-110f, 0.0f, 0x1.0db48ep-71f, 0x1.bd40bep-125f,
     0x1.34729p-20f, 0x1.8eeeeap-79f, 0.0f, 0.0f, 0x1.4b7aacp-25f, 0.0f,
     0x1.d340cep-66f, 0.0f, 0.0f, 0x1.fc65a6p-53f, 0.0f, 0.0f, 0x1.83ca2ep-38f, 0.0f,
     0x1.4b1cep-52f, 0x1.118a2p-36f, 0x1.293f62p-60f, 0x1.d5275ap-124f,
     0x1.58c424p-16f, 0.0f, 0.0f, 0x1.356556p-118f, 0x1.7388e4p-104f,
     0x1.5acb72p-103f, 0x1.268346p-16f, 0x1.ada9c4p-83f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7ea282p-78f, 0x1.ee8f9cp-126f, 0.0f, 0.0f, 0x1.3ea2c8p-53f, 0x1.b2f526p-20f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.f759f8p-122f, 0x1.082ea2p-46f, 0x1.39b77p-98f, 0.0f,
     0x1.b2203ep-37f, 0.0f, 0x1.b3f148p-53f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dd628cp-44f,
     0.0f
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            ml_float4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_float4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_atan2f4_u10kvx(tmp0, tmp1);
            memcpy(((ml_float4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_atan2f4_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atan2f4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
