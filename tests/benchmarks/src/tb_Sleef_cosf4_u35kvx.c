/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf4_u35kvx.c --function Sleef_cosf4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32 --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.104bb6p-68f, 0x1.0a40bap-26f, 0.0f, 0.0f, 0x1.e7eceap-21f, 0x1.8774a4p-106f,
     0x1.093d9p-117f, 0.0f, 0x1.093658p-73f, 0x1.5a1058p-109f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d841d6p-75f, 0.0f, 0x1.0b3266p-78f, 0x1.af994p-3f, 0.0f, 0x1.ca2d96p-60f,
     0x1.3a0db2p-126f, 0x1.741f9ep-79f, 0x1.3f17dap-107f, 0.0f, 0x1.cbfc68p-5f, 0.0f,
     0x1.a088p-51f, 0.0f, 0x1.f0f16p-71f, 0x1.8b0802p-110f, 0x1.3b5aeap-82f, 0.0f,
     0x1.9c8628p-36f, 0.0f, 0x1.c7188p-94f, 0.0f, 0x1.782e06p-36f, 0.0f,
     0x1.af949p-33f, 0x1.4e77fp-44f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b98272p-3f,
     0x1.dca8e4p-108f, 0.0f, 0x1.03d55ap-71f, 0x1.c9fc0ep-44f, 0x1.dab6f4p-89f,
     0x1.389cdap-57f, 0x1.d0b50cp-35f, 0.0f, 0x1.90a7p-61f, 0x1.d2501ap-66f,
     0x1.ae473ap-66f, 0.0f, 0.0f, 0x1.c8619ep-74f, 0x1.d5435ap-39f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8d14p-61f, 0x1.760e72p-101f, 0.0f, 0.0f, 0.0f,
     0x1.81318cp-14f, 0x1.992b92p-4f, 0.0f, 0.0f, 0x1p0f, 0x1.d16128p-98f, 0.0f,
     0x1.182254p-21f, 0x1.a06514p-48f, 0x1.eed342p-6f, 0x1.e775d8p-30f,
     0x1.8e5514p-120f, 0x1.1d3656p-94f, 0.0f, 0x1.77b5e4p-85f, 0.0f, 0x1.53a4a4p-44f,
     0.0f, 0x1.3795aap-54f, 0.0f, 0x1.d8f42cp-83f, 0.0f, 0x1.cec082p-108f, 0.0f, 0.0f,
     0x1.f6f62ap-78f, 0.0f, 0x1.21bf8ap-116f, 0x1.bf94eap-43f, 0x1.0f5ffep-95f, 0.0f,
     0x1.7d647cp-119f, 0.0f, 0.0f, 0.0f, 0x1.67cb3ap-9f, 0x1.4ec096p-45f,
     0x1.3138acp-20f, 0x1.28446cp-78f, 0x1.bf7546p-15f, 0.0f, 0.0f, 0x1.7dad86p-43f,
     0x1.c29aa6p-16f, 0x1.8f9a1cp-11f, 0.0f, 0x1.31cffcp-82f, 0.0f, 0.0f, 0.0f,
     0x1.419e68p-79f, 0x1.3efc9ep-103f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6b7d2ep-16f, 0x1.026958p-69f, 0x1.d48d24p-32f, 0.0f, 0x1.f8c60cp-56f,
     0x1.bf1958p-105f, 0.0f, 0x1.19ada6p-72f, 0x1.b9a0ecp-35f, 0.0f, 0.0f,
     0x1.faa0b4p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1e8868p-1f,
     0x1.7ead36p-60f, 0.0f, 0x1.2398c2p-117f, 0x1.5dd5f4p-102f, 0x1.88b5aap-73f,
     0x1.e291d8p-15f, 0.0f, 0x1.f68626p-118f, 0x1.6db53ap-14f, 0x1.7ae85ap-94f, 0.0f,
     0x1.903e1p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d359bep-93f, 0.0f,
     0x1.ad10c8p-85f, 0x1.8e706ep-37f, 0x1.7b5332p-18f, 0x1.1f852p-18f,
     0x1.102684p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c6a4f6p-50f, 0x1.b4226ap-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.3ec02ep-31f, 0x1.be2166p-79f, 0x1.1ef088p-33f,
     0x1.8658ep-121f, 0x1.a1b202p-75f, 0.0f, 0x1.09ccbap-56f, 0.0f, 0x1.8cdb0ep-77f,
     0x1.5d8fbcp-86f, 0x1.f631e8p-2f, 0x1.6f3864p-4f, 0.0f, 0x1.95218ap-48f, 0.0f,
     0.0f, 0x1.98196p-104f, 0x1.36877ep-55f, 0x1.5146b4p-19f, 0.0f, 0x1.ea32bep-78f,
     0.0f, 0.0f, 0.0f, 0x1.3d171ep-70f, 0x1.fa20ep-15f, 0.0f, 0.0f, 0x1.92fbdcp-120f,
     0.0f, 0.0f, 0.0f, 0x1.89db2p-11f, 0.0f, 0x1.1ddf52p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.923f24p-112f, 0x1.998834p-114f, 0x1.e56376p-31f, 0.0f, 0x1.89d298p-96f,
     0x1.8f065cp-32f, 0x1.624512p-37f, 0x1.32d928p-14f, 0x1.d90b04p-77f, 0.0f,
     0x1.2fea06p-56f, 0x1.400198p-63f, 0.0f, 0x1.2ebea2p-112f, 0.0f, 0.0f,
     0x1.d4c172p-51f, 0x1.7f05eep-74f, 0.0f, 0x1.8e4b2cp-85f, 0x1.d53f38p-70f,
     0x1.21456p-52f, 0x1.77f7aep-70f, 0.0f, 0x1.0ae7aap-57f, 0x1.69d412p-118f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ade34p-18f, 0.0f, 0x1.9a52e6p-102f,
     0x1.554456p-87f, 0x1.c5a1e2p-31f, 0x1.f8e484p-26f, 0.0f, 0.0f, 0.0f,
     0x1.2b7d24p-31f, 0x1.1725b2p-79f, 0x1.077558p-120f, 0.0f, 0.0f, 0x1.0ee2eap-68f,
     0.0f, 0x1.6303cp-124f, 0x1.c8e3d2p-58f, 0.0f, 0x1.183b26p-67f, 0x1.9e4346p-68f,
     0x1.4dabe4p-120f, 0.0f, 0.0f, 0x1.fcb6bp-72f, 0x1.d2497cp-44f, 0x1.c4e71ap-66f,
     0x1.6724b6p-89f, 0x1.6743e2p-114f, 0x1.344bb2p-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.323da2p-93f, 0.0f, 0.0f, 0x1.635176p-8f, 0.0f, 0.0f, 0x1.a36e5ep-108f,
     0x1.0638bp-101f, 0x1.31063ep-7f, 0.0f, 0.0f, 0x1.7d8c42p-121f, 0x1.e7e022p-21f,
     0x1.490bcap-10f, 0x1.3ec1ecp-111f, 0x1.4099dcp-40f, 0.0f, 0x1.1352fcp-126f,
     0x1.6ec1a6p-49f, 0.0f, 0x1.ad6736p-101f, 0x1.c4562p-78f, 0.0f, 0x1.e82c34p-77f,
     0.0f, 0x1.0e2fe6p-86f, 0x1.b3cb98p-54f, 0.0f, 0x1.3dced8p-49f, 0.0f,
     0x1.6afe4ap-38f, 0x1.ebfc56p-117f, 0.0f, 0x1.2b86c6p-21f, 0.0f, 0.0f, 0.0f,
     0x1.fc289cp-39f, 0.0f, 0.0f, 0x1.53efcp-28f, 0x1.a3bcc2p-93f, 0.0f, 0.0f,
     0x1.ade8d4p-34f, 0x1.c38974p-3f, 0.0f, 0.0f, 0x1.b59d8p-107f, 0x1.d0598ap-64f,
     0x1.0e3314p-42f, 0x1.0f497ep-19f, 0.0f, 0x1.3393dap-36f, 0.0f, 0.0f,
     0x1.12f9fep-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6bf4dcp-18f,
     0x1.3d717ap-35f, 0x1.b040d4p-53f, 0x1.d7336p-17f, 0.0f, 0x1.e049eep-18f, 0.0f,
     0.0f, 0x1.40f974p-85f, 0.0f, 0.0f, 0.0f, 0x1.43e992p-19f, 0x1.2e683ep-107f, 0.0f,
     0x1.0e6f78p-35f, 0.0f, 0.0f, 0x1.267a8ap-5f, 0x1.d6b2f8p-113f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.165fb2p-75f, 0.0f, 0.0f, 0x1.fceff8p-38f, 0.0f,
     0x1.bb2dc2p-34f, 0x1.0549d2p-37f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5cda1cp-32f, 0.0f,
     0.0f, 0.0f, 0x1.23455ap-2f, 0x1.10ffc4p-18f, 0.0f, 0.0f, 0x1.720e6ap-98f,
     0x1.387556p-53f, 0x1.29056cp-72f, 0x1.ed3b02p-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.242a46p-90f, 0x1.71aac2p-8f, 0.0f, 0.0f, 0.0f, 0x1.885d66p-126f,
     0x1.aefe4p-33f, 0x1.60cc5ap-29f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4dbc04p-15f, 0.0f,
     0.0f, 0.0f, 0x1.27e4f8p-44f, 0.0f, 0x1.a8cc18p-22f, 0x1.e3a4aap-86f, 0.0f, 0.0f,
     0.0f, 0x1.a4f014p-56f, 0.0f, 0x1.191246p-71f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.22f348p-61f, 0x1.6e0e16p-87f, 0.0f, 0x1.554da8p-26f, 0.0f, 0x1.007696p-114f,
     0.0f, 0x1.980ca8p-68f, 0.0f, 0.0f, 0x1.4fbae4p-104f, 0.0f, 0.0f, 0.0f,
     0x1.36c7bp-7f, 0.0f, 0.0f, 0x1.2b9f58p-105f, 0.0f, 0x1.82e884p-110f, 0.0f, 0.0f,
     0x1.51f846p-83f, 0x1.1ded9cp-39f, 0x1.27d074p-65f, 0.0f, 0.0f, 0x1.81eb44p-67f,
     0.0f, 0x1.371c62p-103f, 0x1.341cbp-114f, 0.0f, 0.0f, 0x1.5c276ap-61f,
     0x1.b0e448p-57f, 0.0f, 0.0f, 0x1.fab7dep-120f, 0.0f, 0.0f, 0x1.3d3a56p-100f,
     0x1.936176p-108f, 0x1.0efc7cp-33f, 0.0f, 0.0f, 0x1.a5c22p-14f, 0.0f,
     0x1.3d8fd8p-57f, 0x1.8c4186p-106f, 0.0f, 0.0f, 0x1.03d88ap-11f, 0x1.3f58bap-107f,
     0x1.eecdbap-20f, 0.0f, 0.0f, 0x1.2ceac4p-93f, 0.0f, 0x1.218268p-56f,
     0x1.331ceap-76f, 0.0f, 0x1.c1c0aep-91f, 0x1.b78602p-28f, 0.0f, 0.0f,
     0x1.cd4dcp-75f, 0x1.d6fefep-76f, 0.0f, 0x1.2a9d86p-103f, 0.0f, 0x1.4305cap-51f,
     0x1.b3e4bcp-63f, 0x1.f65db2p-74f, 0x1.519f5cp-21f, 0.0f, 0x1.578bd6p-2f, 0.0f,
     0x1.eb1242p-108f, 0.0f, 0x1.31f2cep-15f, 0.0f, 0x1.bb772cp-42f, 0x1.479bbap-107f,
     0.0f, 0x1.7e80a4p-43f, 0x1.0ed15ep-6f, 0.0f, 0x1.60f5a6p-29f, 0x1.16fbp-113f,
     0.0f, 0x1.29d41cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4adbeap-88f, 0.0f, 0.0f,
     0x1.7d816ep-3f, 0x1.4596dp-71f, 0x1.d5770cp-81f, 0.0f, 0x1.939d5cp-54f,
     0x1.a06e24p-14f, 0.0f, 0x1.04882ep-123f, 0.0f, 0.0f, 0x1.1247c2p-98f,
     0x1.b2f53p-111f, 0x1.03a4eep-103f, 0x1.f99f46p-29f, 0x1.195f24p-67f, 0.0f,
     0x1.e1c13ep-2f, 0x1.3578dap-2f, 0x1.4964dep-124f, 0x1.d70c0cp-70f, 0.0f,
     0x1.01137ep-99f, 0x1.11a272p-98f, 0x1.44bc98p-103f, 0x1.de7f3p-116f, 0.0f,
     0x1.3d3f2ep-17f, 0.0f, 0x1.b2aea4p-99f, 0x1.f4ea98p-1f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d440eap-98f, 0.0f, 0x1.0f87bap-79f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.a23b42p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a6ad2ap-54f, 0x1.d80466p-115f,
     0x1.857274p-108f, 0.0f, 0.0f, 0x1.fb4b82p-47f, 0x1.c5e22cp-96f, 0.0f,
     0x1.cd142cp-74f, 0x1.9105d4p-74f, 0.0f, 0x1.0d5feep-63f, 0x1.cd98c6p-31f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fdb668p-122f, 0.0f, 0.0f, 0.0f, 0x1.54ee4ep-102f, 0.0f,
     0x1.50ebc6p-53f, 0.0f, 0x1.6dc3fp-49f, 0x1.12b49ap-8f, 0.0f, 0x1.8ee1a2p-56f,
     0x1.434d1p-121f, 0x1.ab7fdap-117f, 0.0f, 0x1.961fb4p-71f, 0.0f, 0x1.df4d2cp-118f,
     0.0f, 0.0f, 0x1.679c86p-98f, 0x1.f23afp-18f, 0x1.316188p-30f, 0x1.895678p-115f,
     0x1.5b35dep-106f, 0x1.e26beep-78f, 0x1.c8ca8p-3f, 0.0f, 0x1.e1adcap-122f, 0.0f,
     0.0f, 0x1.e450dep-45f, 0.0f, 0x1.42064ep-29f, 0x1.08639p-66f, 0x1.c94ab2p-55f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b02d1p-111f, 0.0f, 0x1.05dfbap-98f, 0.0f,
     0x1.f3d07ep-120f, 0.0f, 0x1.d8f08ap-95f, 0.0f, 0x1.1f3dcep-24f, 0.0f, 0.0f,
     0x1.e164b8p-36f, 0.0f, 0x1.c11142p-24f, 0.0f, 0x1.c2a6e6p-9f, 0x1.632f64p-5f,
     0x1.3b428p-11f, 0x1.94f334p-24f, 0.0f, 0.0f, 0.0f, 0x1.7bc87p-117f,
     0x1.9abbfap-26f, 0.0f, 0.0f, 0.0f, 0x1.633bbap-83f, 0.0f, 0.0f, 0x1.dd1022p-44f,
     0.0f, 0x1.466a04p-63f, 0.0f, 0x1.afe168p-93f, 0.0f, 0x1.be6ad2p-2f,
     0x1.10b5acp-70f, 0.0f, 0.0f, 0x1.85784p-32f, 0x1.2ba644p-26f, 0x1.7e11bap-96f,
     0x1.d31ae8p-61f, 0.0f, 0x1.9f275ap-1f, 0x1.e7c65ap-43f, 0.0f, 0x1.e92fcap-110f,
     0x1.f5e228p-58f, 0x1.43ed0cp-5f, 0x1.f2cb6cp-9f, 0x1.674bdcp-38f,
     0x1.c2f314p-27f, 0.0f, 0x1.6b349cp-2f, 0.0f, 0x1.b4830ap-32f, 0.0f,
     0x1.e89cacp-18f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dab48ep-75f, 0.0f,
     0x1.b94e28p-6f, 0x1.976aecp-30f, 0x1.1b5d36p-45f, 0x1.4d39a4p-91f, 0.0f,
     0x1.7ea524p-124f, 0x1.54d62ep-86f, 0x1.4d88bep-65f, 0x1.5341d6p-42f, 0.0f, 0.0f,
     0x1.06109p-42f, 0x1.4d6af2p-27f, 0.0f, 0.0f, 0x1.f2732p-5f, 0.0f,
     0x1.2a29f8p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.93968cp-79f, 0x1.c7e56ep-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.d84644p-124f, 0.0f, 0x1.21eff2p-36f, 0x1.24b7a6p-44f, 0.0f,
     0x1.bc5d3ep-4f, 0.0f, 0x1.b452c2p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc26f6p-84f,
     0x1.f85276p-103f, 0x1.aa769p-48f, 0.0f, 0.0f, 0.0f, 0x1.251c5ep-89f, 0.0f,
     0x1.685658p-22f, 0.0f, 0.0f, 0x1.adb4dp-119f, 0x1.4a4ce4p-26f, 0.0f,
     0x1.24795p-63f, 0.0f, 0.0f, 0x1.b551ecp-17f, 0x1.4eb14cp-12f, 0.0f, 0.0f,
     0x1.f06a12p-39f, 0.0f, 0.0f, 0x1.620d46p-80f, 0.0f, 0x1.095baep-96f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.dba294p-28f, 0x1.8d642cp-111f, 0x1.ca725cp-83f, 0.0f,
     0x1.d3ebbp-36f, 0x1.eb357cp-123f, 0x1.b5363p-73f, 0x1.59f09p-99f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.4a3ec6p-4f, 0x1.f2f602p-37f, 0x1.469464p-17f, 0.0f, 0.0f,
     0x1.314176p-32f, 0x1.d65fc6p-101f, 0x1.0b2ffp-102f, 0x1.b7de0ap-98f,
     0x1.bd7ce2p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.117396p-39f, 0x1.d0ee08p-36f,
     0x1.eccf8cp-17f, 0x1.0dfd0ap-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b2573ep-120f,
     0x1.2bb43cp-60f, 0.0f, 0x1.a7ad1ap-83f, 0x1.432eaep-64f, 0.0f, 0.0f,
     0x1.d2074cp-89f, 0.0f, 0x1.d174bap-28f, 0.0f, 0.0f, 0x1.a61ff8p-11f,
     0x1.a857f4p-116f, 0x1.ec06a2p-9f, 0x1.c77dfcp-22f, 0.0f, 0x1.a1faa6p-82f, 0.0f,
     0.0f, 0x1.5d180ap-6f, 0.0f, 0.0f, 0x1.c149a4p-15f, 0.0f, 0x1.9b7ab8p-110f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.10bc52p-50f, 0.0f, 0.0f, 0x1.db666ep-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdf68ap-49f, 0.0f, 0x1.ae8fe2p-85f,
     0x1.31af5p-86f, 0x1.ae29aep-121f, 0x1.ec48a2p-112f, 0x1.5521p-112f,
     0x1.e1a9c6p-47f, 0.0f, 0.0f, 0.0f, 0x1.c3c5aep-86f, 0.0f, 0x1.b0fe7p-73f, 0.0f,
     0.0f, 0x1.0ece76p-119f, 0x1.5a87aep-25f, 0x1.7dcf0ep-42f, 0x1.631eccp-126f,
     0x1.5dfa8cp-92f, 0x1.d37612p-7f, 0x1.65e3fap-56f, 0x1.538b64p-8f, 0.0f, 0.0f,
     0x1.4c67c4p-65f, 0x1.7512c4p-76f, 0x1.269b02p-31f, 0x1.66ac38p-59f,
     0x1.335852p-125f, 0.0f, 0.0f, 0.0f, 0x1.99ca12p-16f, 0x1.1110b8p-22f,
     0x1.21fdep-91f, 0.0f, 0x1.65d754p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a7f33ap-87f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.47daaep-8f, 0.0f, 0x1.dba46cp-103f, 0x1.3ed5a6p-106f,
     0x1.88e056p-22f, 0.0f, 0x1.f8d254p-65f, 0x1.60dd3p-31f, 0x1.b29d4cp-71f,
     0x1.b98356p-42f, 0.0f, 0x1.28006cp-14f, 0x1.bbb0ep-95f, 0x1.0fb826p-25f,
     0x1.f8d8bap-126f, 0x1.561cc6p-74f, 0x1.3c5154p-125f, 0x1.c68456p-100f,
     0x1.47a798p-31f, 0x1.cb6208p-86f, 0.0f, 0x1.cfc382p-56f, 0x1.f197bcp-30f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.717b8cp-110f, 0.0f, 0.0f, 0.0f, 0x1.d8b2ap-39f,
     0x1.2fbe02p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a87d4ap-50f,
     0x1.c4f5bcp-35f, 0x1.b37d36p-100f, 0.0f, 0.0f, 0x1.4e759ep-72f, 0.0f,
     0x1.200906p-124f, 0x1.0ba7cap-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6066e2p-91f, 0x1.a8050ap-76f, 0.0f, 0x1.bdd394p-78f, 0x1.0cbe6p-17f, 0.0f,
     0x1.eaaad8p-68f, 0x1.dabaf4p-60f, 0x1.365a6cp-70f, 0.0f, 0.0f, 0x1.8a17dp-66f,
     0x1.03fa74p-87f, 0.0f, 0.0f, 0.0f, 0x1.133038p-72f, 0.0f, 0x1.763326p-69f, 0.0f,
     0x1.ec72e8p-90f, 0.0f, 0x1.101cacp-27f, 0.0f, 0.0f, 0.0f, 0x1.e9a93cp-68f,
     0x1.3adc18p-74f, 0x1.3566fcp-98f, 0.0f, 0x1.08d32cp-17f, 0.0f, 0.0f, 0.0f,
     0x1.629d0ap-92f, 0x1.8db89ep-1f, 0x1.4c115p-59f
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
            int32_t tmp3;

            memcpy(&tmp0, ((ml_float4_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_cosf4_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_cosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
