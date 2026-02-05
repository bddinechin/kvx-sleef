/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosf4_u35kvx.c --function Sleef_acosf4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.8d7e18p-61f, 0x1.118b2p-103f, 0.0f, 0x1.8957cp-24f, 0.0f, 0.0f, 0.0f,
     0x1.55c004p-74f, 0x1.dec64cp-3f, 0x1.312084p-97f, 0x1.ba735cp-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83763p-124f, 0x1.2003f8p-73f,
     0x1.a93e7ep-59f, 0.0f, 0x1.a8590cp-78f, 0x1.02fe8ap-115f, 0.0f, 0x1.fd3d46p-68f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ed3a7ep-57f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.986262p-1f,
     0x1.5816aep-38f, 0x1.cbc1b2p-84f, 0x1.b1ab5cp-108f, 0.0f, 0x1.8827fp-99f,
     0x1.1152d6p-41f, 0x1.509d02p-118f, 0.0f, 0.0f, 0x1.8f324ep-121f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.7146c6p-103f, 0x1.647edep-2f, 0x1.815b2p-89f, 0.0f,
     0x1.2ad036p-30f, 0x1.e1006ep-83f, 0.0f, 0x1.96935ap-124f, 0x1.455796p-117f, 0.0f,
     0.0f, 0x1.633458p-82f, 0x1.e7f896p-122f, 0.0f, 0.0f, 0.0f, 0x1.a762a2p-23f,
     0x1.f70336p-86f, 0x1.b92304p-39f, 0x1.c293f6p-6f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ff56p-121f, 0x1.fe9dfep-39f, 0x1.61660cp-69f, 0.0f, 0x1.dbe5d8p-120f, 0.0f,
     0x1.ffb642p-91f, 0.0f, 0.0f, 0x1.227d98p-79f, 0.0f, 0x1.782d12p-123f,
     0x1.34d03p-106f, 0x1.85d048p-40f, 0.0f, 0.0f, 0x1.3e9f84p-32f, 0.0f, 0.0f,
     0x1.4ae6c4p-48f, 0x1.ea32fep-12f, 0.0f, 0.0f, 0.0f, 0x1.902aep-116f,
     0x1.ab8ed2p-31f, 0x1.ae88cap-123f, 0.0f, 0.0f, 0x1.b24318p-17f, 0.0f, 0.0f,
     0x1.5f1306p-58f, 0x1.916c5p-101f, 0x1.3110d2p-42f, 0.0f, 0.0f, 0x1.0f6786p-14f,
     0x1.4afb0ep-46f, 0.0f, 0x1.f84fe8p-41f, 0x1.f95858p-62f, 0.0f, 0.0f,
     0x1.112088p-113f, 0.0f, 0x1.c2d1eep-119f, 0.0f, 0x1.fdea8p-115f, 0x1.7a0dap-117f,
     0.0f, 0x1.bc901ep-60f, 0x1.f526f8p-6f, 0x1.688b72p-5f, 0.0f, 0x1.46fecp-36f,
     0x1.18444p-38f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.63eb4ep-92f, 0.0f, 0x1.9dd628p-88f,
     0.0f, 0.0f, 0x1.9ab468p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.54ec46p-13f, 0.0f,
     0x1.6d7d68p-64f, 0x1.f9c164p-6f, 0x1.4a973ap-28f, 0x1.969f3p-112f, 0.0f,
     0x1.83936p-98f, 0x1.f21f16p-86f, 0.0f, 0.0f, 0x1.354d16p-70f, 0.0f, 0.0f,
     0x1.087618p-11f, 0x1.1d4c8ap-116f, 0x1.678568p-8f, 0x1.cf2602p-27f, 0.0f, 0.0f,
     0x1.19ee7p-48f, 0x1.2fcc46p-119f, 0.0f, 0.0f, 0x1.0ad00ap-30f, 0x1.41c14ap-14f,
     0.0f, 0x1.f3e47cp-95f, 0.0f, 0.0f, 0x1.21b5ecp-34f, 0.0f, 0.0f, 0.0f,
     0x1.8aaed4p-50f, 0x1.83187p-51f, 0.0f, 0x1.4d3692p-2f, 0x1.8a24bcp-92f, 0.0f,
     0.0f, 0x1.1889cep-82f, 0x1.626d16p-45f, 0x1.43a606p-83f, 0x1.7302bp-33f, 0.0f,
     0x1.28d89ap-28f, 0x1.faf9dcp-54f, 0x1.dfafaap-98f, 0x1.99364cp-42f, 0.0f,
     0x1.db4734p-114f, 0.0f, 0x1.d5ee4cp-21f, 0.0f, 0.0f, 0.0f, 0x1.18d358p-111f,
     0.0f, 0.0f, 0x1.28e06cp-3f, 0.0f, 0.0f, 0x1.af3084p-118f, 0x1.7135p-61f,
     0x1.c5953cp-41f, 0.0f, 0x1.74c28ep-92f, 0.0f, 0x1.f3ea84p-55f, 0x1.83f4c4p-65f,
     0.0f, 0.0f, 0.0f, 0x1.e6ce92p-4f, 0x1.00dfc4p-81f, 0x1.fadd12p-103f,
     0x1.d42d2ep-8f, 0.0f, 0x1.fb22d4p-50f, 0.0f, 0x1.7aeeeep-78f, 0x1.d3cedcp-104f,
     0x1.96c884p-66f, 0x1.33d8b4p-23f, 0x1.3c657cp-35f, 0x1.9c2822p-120f,
     0x1.22bfbp-91f, 0x1.879218p-13f, 0x1.506d1ap-59f, 0.0f, 0.0f, 0x1.db2fecp-51f,
     0.0f, 0x1.6f5ep-51f, 0x1.1a5abep-67f, 0x1.9c0e58p-32f, 0x1.24455ap-111f,
     0x1.86369ap-116f, 0x1.767204p-32f, 0.0f, 0x1.6da3ccp-115f, 0x1.b2a806p-94f,
     0x1.b7f5a2p-7f, 0.0f, 0x1.fb80acp-72f, 0.0f, 0.0f, 0x1.df223p-7f,
     0x1.38efc6p-35f, 0x1.89c9dp-14f, 0.0f, 0x1.5e181ep-69f, 0.0f, 0x1.81e346p-27f,
     0.0f, 0.0f, 0x1.18cc7ap-58f, 0.0f, 0.0f, 0x1.21e31p-72f, 0.0f, 0.0f,
     0x1.72043ap-34f, 0.0f, 0.0f, 0x1.96c8cp-27f, 0.0f, 0.0f, 0.0f, 0x1.cc6b1ap-12f,
     0x1.17fa78p-4f, 0.0f, 0x1.d3194p-70f, 0.0f, 0x1.6daadp-29f, 0.0f, 0x1.57848p-95f,
     0x1.3da384p-51f, 0.0f, 0.0f, 0x1.97dba2p-26f, 0x1.beed34p-39f, 0x1.ad3c2ap-115f,
     0.0f, 0.0f, 0x1.eabc34p-16f, 0x1.f82f8ap-62f, 0x1.e67dacp-111f, 0.0f,
     0x1.6e7f6ap-29f, 0.0f, 0.0f, 0x1.a45548p-51f, 0.0f, 0x1.13e9cp-61f,
     0x1.403184p-117f, 0x1.501fb2p-34f, 0x1.73849cp-36f, 0x1.c380aap-71f,
     0x1.44d43ap-19f, 0.0f, 0x1.6e97b6p-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e760aap-83f, 0x1.ad934ap-109f, 0.0f, 0.0f, 0x1.f2dfp-99f, 0x1.4d33cep-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.75bdd2p-8f, 0x1.ba46cap-114f, 0x1.f9948ep-51f, 0.0f,
     0x1.69346ep-53f, 0x1.e42474p-20f, 0x1.decdecp-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3b0e14p-88f, 0.0f, 0x1.3b4502p-19f, 0x1.5c1a9p-47f, 0.0f, 0.0f,
     0x1.aae916p-13f, 0x1.514d0ap-96f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e93474p-6f, 0.0f,
     0.0f, 0x1.bce846p-3f, 0.0f, 0.0f, 0.0f, 0x1.26d6f4p-125f, 0x1.034122p-112f, 0.0f,
     0.0f, 0x1.de49fep-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9854ccp-65f, 0.0f, 0.0f,
     0x1.4c3f4ap-78f, 0.0f, 0.0f, 0x1.2fad36p-24f, 0.0f, 0x1.3f2fa8p-41f, 0.0f, 0.0f,
     0.0f, 0x1.660954p-24f, 0x1.9d24f8p-126f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0ab616p-113f, 0x1.7cee36p-106f, 0.0f, 0.0f, 0x1.a551cep-125f,
     0x1.e4bafcp-90f, 0.0f, 0x1.4f55e6p-71f, 0x1.9c96e6p-102f, 0.0f, 0x1.823224p-89f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.698386p-96f, 0.0f,
     0x1.34e554p-91f, 0.0f, 0x1.073bb8p-120f, 0.0f, 0x1.bef24cp-118f, 0x1.c563f6p-39f,
     0.0f, 0.0f, 0.0f, 0x1.d5328cp-13f, 0.0f, 0x1.e5bb28p-74f, 0x1.21570ap-91f, 0.0f,
     0x1.0f417ep-89f, 0x1.26a67cp-104f, 0x1.cdb6d6p-23f, 0x1.c14394p-114f,
     0x1.fa7ec8p-8f, 0x1.b69c38p-22f, 0x1.374938p-31f, 0.0f, 0x1.faf06ap-52f, 0.0f,
     0x1.d6f3acp-21f, 0x1.a36acap-119f, 0x1.be5e0ap-77f, 0.0f, 0.0f, 0x1.4ea31ep-111f,
     0.0f, 0x1.b7b274p-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.151326p-72f,
     0x1.895edap-22f, 0.0f, 0x1.3ffc1cp-36f, 0.0f, 0.0f, 0x1.8961bep-16f, 0.0f, 0.0f,
     0.0f, 0x1.5fe744p-10f, 0.0f, 0x1.bfdb42p-11f, 0.0f, 0.0f, 0.0f, 0x1.048d4ap-23f,
     0.0f, 0x1.ef1d88p-125f, 0x1.079078p-60f, 0x1.5ea91ep-118f, 0x1.cfcd66p-2f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5fff8cp-98f, 0x1.bae4c6p-101f,
     0x1.2dd018p-101f, 0x1.bd66bp-54f, 0x1.c8c0d8p-111f, 0.0f, 0x1.4c3d28p-72f, 0.0f,
     0.0f, 0x1.946586p-103f, 0x1.b91076p-84f, 0.0f, 0x1.99c368p-43f, 0x1.56bc3cp-14f,
     0x1.f56fbap-125f, 0x1.e66b7ap-35f, 0x1.b26064p-43f, 0x1.dbfdbp-36f, 0.0f,
     0x1.73c632p-46f, 0.0f, 0.0f, 0x1.52b3eap-21f, 0.0f, 0.0f, 0.0f, 0x1.2a6318p-86f,
     0.0f, 0.0f, 0.0f, 0x1.745d18p-30f, 0.0f, 0x1.889082p-104f, 0.0f, 0x1.c0d2b4p-26f,
     0x1.1ca846p-17f, 0.0f, 0.0f, 0x1.d8e4dep-112f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.db3bc4p-116f, 0x1.00c5c4p-119f, 0x1.8e8a0ep-26f, 0.0f, 0x1.d7ecd6p-83f, 0.0f,
     0.0f, 0x1.417428p-22f, 0x1.dc0e78p-78f, 0x1.2732dcp-77f, 0x1.54cf5p-75f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.11074p-13f, 0.0f, 0x1.ba33a4p-71f, 0.0f, 0.0f, 0.0f,
     0x1.972f5ap-52f, 0.0f, 0x1.0df324p-86f, 0x1.bd9c22p-18f, 0x1.ecfe22p-81f, 0.0f,
     0x1.11aff2p-12f, 0.0f, 0.0f, 0x1.cc8ae8p-126f, 0.0f, 0x1.d790fap-29f, 0.0f,
     0x1.99016ep-44f, 0.0f, 0x1.3bcf46p-5f, 0x1.c7116ep-7f, 0x1.609012p-4f, 0.0f,
     0.0f, 0.0f, 0x1.cbfd7cp-97f, 0.0f, 0x1.f96facp-29f, 0x1.79246p-117f, 0.0f, 0.0f,
     0x1.6e4628p-96f, 0x1.844eaep-123f, 0.0f, 0x1.fd3dbcp-46f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.635a1ap-79f, 0x1.f1d42cp-118f, 0x1.5e74d2p-8f, 0.0f, 0.0f, 0.0f,
     0x1.a06f3cp-53f, 0x1.512326p-112f, 0.0f, 0.0f, 0x1.f237d8p-80f, 0x1.eb01e8p-6f,
     0x1.e5a614p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f71092p-40f, 0.0f, 0x1.64858p-110f,
     0.0f, 0x1.530b7cp-30f, 0.0f, 0.0f, 0x1.c2d42ap-123f, 0x1.d3b302p-76f,
     0x1.eaaa6ep-46f, 0x1.84237ep-91f, 0.0f, 0x1.66f17p-13f, 0.0f, 0x1.a2ded2p-67f,
     0.0f, 0x1.9cd0cap-52f, 0x1.319138p-22f, 0x1.900e1p-77f, 0.0f, 0x1.f87ef2p-40f,
     0x1.e70ad8p-61f, 0.0f, 0x1.b336aap-8f, 0x1.af1f1ep-9f, 0x1.ae67e6p-88f,
     0x1.fcd6fp-99f, 0.0f, 0x1.7bd05p-88f, 0.0f, 0x1.74f9f8p-98f, 0.0f, 0.0f,
     0x1.cc2c68p-103f, 0.0f, 0x1.bf42cap-57f, 0x1.67ec4ep-113f, 0x1.9b736p-113f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34c444p-24f, 0.0f, 0x1.6e664p-83f, 0.0f,
     0x1.12f644p-10f, 0.0f, 0.0f, 0.0f, 0x1.0fcffcp-42f, 0x1.68d47p-73f,
     0x1.8e3ddep-67f, 0x1.d30354p-84f, 0.0f, 0.0f, 0.0f, 0x1.7793fap-123f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5852dap-97f, 0.0f, 0x1.7efad2p-57f,
     0.0f, 0x1.592f3ep-32f, 0x1.8a6812p-22f, 0x1.e5e4p-52f, 0.0f, 0x1.fc6336p-95f,
     0.0f, 0.0f, 0x1.cd45c2p-119f, 0.0f, 0.0f, 0x1.3faedep-48f, 0x1.d113ep-16f, 0.0f,
     0.0f, 0.0f, 0x1.28ed38p-1f, 0x1.80b9d2p-106f, 0.0f, 0.0f, 0x1.91870ep-83f, 0.0f,
     0x1.9eb8ap-14f, 0.0f, 0.0f, 0.0f, 0x1.7468d8p-105f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0496e8p-96f, 0x1.98dbf6p-16f, 0x1.04f3a4p-68f, 0x1.59b03ep-46f, 0.0f,
     0x1.6ea0d6p-14f, 0.0f, 0x1.c9543ap-86f, 0.0f, 0x1.b7a31ep-72f, 0.0f, 0.0f,
     0x1.b60014p-90f, 0x1.fa7e92p-57f, 0.0f, 0x1.b22e54p-122f, 0.0f, 0x1.3d88p-1f,
     0x1.b7e026p-124f, 0x1.7f1b8cp-86f, 0x1.561c66p-44f, 0.0f, 0x1.b99a3cp-6f,
     0x1.5175b2p-120f, 0.0f, 0.0f, 0x1.8e58cep-87f, 0x1.88afdp-105f, 0x1.dd0086p-37f,
     0x1.fb031cp-120f, 0.0f, 0.0f, 0.0f, 0x1.5828eap-117f, 0.0f, 0x1.0f3f2cp-41f,
     0x1.58206ap-12f, 0x1.ba2aacp-53f, 0x1.304b5cp-110f, 0x1.7af43ap-17f, 0.0f,
     0x1.7a8d04p-95f, 0x1.aa9842p-95f, 0.0f, 0.0f, 0.0f, 0x1.bcf98ep-88f,
     0x1.2b9394p-61f, 0x1.b2e926p-112f, 0x1.34bb8p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7d6accp-19f, 0.0f, 0.0f, 0.0f, 0x1.34c79ep-31f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.494772p-2f, 0x1.ca1212p-8f, 0x1.fc096ep-36f, 0x1.0fd55p-89f, 0x1.85cfecp-97f,
     0x1.719846p-88f, 0.0f, 0x1.9ecffap-68f, 0x1.7dc6bep-116f, 0x1.11cf6ep-38f, 0.0f,
     0x1.69469ep-34f, 0.0f, 0.0f, 0x1.4acf5ep-82f, 0x1.4a5564p-17f, 0.0f, 0.0f,
     0x1.bc8db6p-97f, 0.0f, 0x1.91836ap-112f, 0x1.27e038p-91f, 0.0f, 0x1.36233ep-82f,
     0.0f, 0.0f, 0x1.f4ae8cp-92f, 0x1.eb0458p-24f, 0x1.b9d35cp-51f, 0x1.6f9d66p-98f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.328078p-11f, 0.0f, 0.0f,
     0.0f, 0x1.aedap-29f, 0x1.5b1476p-108f, 0x1.8652b2p-35f, 0.0f, 0.0f, 0.0f,
     0x1.c74512p-112f, 0.0f, 0.0f, 0x1.ebd3f4p-90f, 0x1.b4978p-85f, 0x1.a30f2cp-75f,
     0x1.dcf4c2p-10f, 0.0f, 0.0f, 0x1.e91952p-11f, 0x1.091b66p-18f, 0.0f,
     0x1.38b6d2p-37f, 0.0f, 0.0f, 0x1.a3e648p-8f, 0x1.cd79c8p-96f, 0.0f,
     0x1.059234p-15f, 0x1.15b3aep-21f, 0.0f, 0x1.ca72b2p-10f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.2683acp-96f, 0.0f, 0x1.ea1fccp-95f, 0.0f, 0.0f, 0x1.70a63cp-70f, 0.0f,
     0.0f, 0.0f, 0x1.954b3cp-17f, 0.0f, 0.0f, 0x1.92b3c6p-6f, 0x1.b2d0eap-118f,
     0x1.532bcp-48f, 0x1.ca71d8p-89f, 0.0f, 0x1.641de4p-82f, 0x1.7c7a3cp-86f,
     0x1.4dfc88p-48f, 0.0f, 0x1.c1e3b6p-82f, 0.0f, 0x1.cc1ed6p-90f, 0x1.82d2bp-121f,
     0x1.ee97b4p-55f, 0.0f, 0x1.3730bcp-51f, 0x1.0c499p-53f, 0.0f, 0x1.4d2c04p-117f,
     0x1.f30d82p-16f, 0.0f, 0.0f, 0x1.585418p-100f, 0.0f, 0x1.7c2982p-96f, 0.0f,
     0x1.9aa32p-43f, 0.0f, 0.0f, 0.0f, 0x1.1e5326p-25f, 0.0f, 0x1.1f2cdcp-34f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.e286eap-64f, 0.0f, 0.0f, 0.0f, 0x1.8269a6p-68f,
     0x1.e09d4p-87f, 0x1.b3d498p-60f, 0.0f, 0x1p0f, 0x1.d3a794p-22f, 0x1.f0044p-120f,
     0.0f, 0x1.0a4cc6p-19f, 0x1.f9edbcp-89f, 0.0f, 0x1.0515b8p-122f, 0x1.d4bc8cp-6f,
     0.0f, 0.0f, 0x1.28daa2p-9f, 0x1.fdd336p-92f, 0x1.c5791cp-76f, 0x1.337186p-75f,
     0x1.08e56ep-11f, 0x1.e92a1cp-111f, 0.0f, 0.0f, 0x1.24c2e8p-105f, 0.0f,
     0x1.09fb6p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.64b20cp-102f, 0x1.214e9p-4f,
     0x1.d23e5p-46f, 0x1.049bbep-122f, 0.0f, 0.0f, 0.0f, 0x1.284f8ep-78f,
     0x1.5a20b4p-120f, 0.0f, 0.0f, 0x1.5c909ap-79f, 0x1.99a3aep-57f, 0x1.684e9cp-36f,
     0x1.348b06p-24f, 0x1.dd4a82p-72f, 0x1.6e254cp-53f, 0x1.d4211ap-100f,
     0x1.955f5p-111f, 0.0f, 0x1.8ae2acp-51f, 0.0f, 0.0f, 0x1.0c0858p-40f,
     0x1.13a64ap-115f, 0.0f, 0x1.d2ee54p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fe4c34p-81f, 0.0f, 0x1.8df4fep-107f, 0x1.ac0eb4p-52f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.ba063ap-6f, 0.0f, 0.0f, 0.0f, 0x1.1168e8p-69f, 0.0f,
     0x1.6201d4p-55f, 0.0f, 0.0f, 0x1.ffe644p-63f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ddf6cp-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e39e32p-97f,
     0x1.e0df06p-19f, 0x1.0bc3d4p-108f, 0x1.7e666p-71f, 0x1.09d798p-66f,
     0x1.38fcacp-37f, 0x1.d6faf2p-11f, 0.0f, 0x1.de7268p-112f, 0x1.244a46p-32f,
     0x1.c54e1p-52f, 0.0f, 0.0f, 0x1.bf1adep-57f, 0.0f, 0.0f, 0x1.1b26ep-30f,
     0x1.f365aap-104f, 0x1.de729p-72f, 0.0f, 0.0f, 0x1.2cf85cp-66f, 0x1.cf682p-101f,
     0.0f, 0.0f, 0x1.93df16p-53f, 0x1.8d2bc4p-52f
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
            tmp1 = Sleef_acosf4_u35kvx(tmp0);
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
    printf("Sleef_acosf4_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosf4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
