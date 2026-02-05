/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_sqrtf.c --function sqrtf --headers math.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0.0f, 0x1.f3be34p-106f, 0x1.c12974p-29f, 0x1.e2f67cp-41f, 0x1.f18aaep-85f, 0.0f,
     0.0f, 0.0f, 0x1.36fde4p-72f, 0x1.a2ecacp-3f, 0.0f, 0x1.ab0b96p-57f, 0.0f, 0.0f,
     0x1.3a757cp-110f, 0x1.6a6952p-78f, 0.0f, 0.0f, 0x1.bc3d24p-19f, 0.0f,
     0x1.2fa9dcp-28f, 0.0f, 0x1.6944a8p-47f, 0.0f, 0.0f, 0.0f, 0x1.6e182p-46f,
     0x1.3e0eccp-49f, 0x1.3f7812p-90f, 0.0f, 0x1.c3234p-103f, 0x1.e1df14p-81f,
     0x1.5a65ccp-11f, 0.0f, 0x1.8d22b2p-67f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.13bc6p-49f, 0x1.da8c6cp-73f, 0.0f, 0x1.fe08dep-58f, 0.0f, 0.0f,
     0x1.1ebaeap-84f, 0x1.bbd79ap-103f, 0.0f, 0x1.d846bcp-56f, 0x1.802fc2p-8f,
     0x1.87ee1ap-61f, 0.0f, 0x1.581368p-53f, 0.0f, 0.0f, 0x1.ab64dep-27f,
     0x1.20dc78p-96f, 0x1.1cee9p-101f, 0x1.a2fdbep-37f, 0x1.67114cp-46f,
     0x1.f61932p-17f, 0.0f, 0.0f, 0.0f, 0x1.8f2fb4p-106f, 0.0f, 0x1.2f8c68p-39f,
     0x1.eae7aep-79f, 0x1.10fe6p-112f, 0.0f, 0x1.e8d16ep-57f, 0.0f, 0.0f,
     0x1.fcf7bap-26f, 0.0f, 0.0f, 0x1.b60fa4p-68f, 0.0f, 0x1.12eb22p-100f,
     0x1.9eaa1ep-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c04e4p-20f, 0.0f, 0.0f, 0.0f,
     0x1.188354p-17f, 0.0f, 0.0f, 0x1.ace556p-69f, 0x1.a74026p-1f, 0x1.8968c2p-102f,
     0.0f, 0.0f, 0.0f, 0x1.e616bp-92f, 0x1.f3d5cap-79f, 0.0f, 0x1.785e08p-32f, 0.0f,
     0.0f, 0.0f, 0x1.5f8794p-91f, 0.0f, 0x1.77fdc4p-38f, 0x1.0361bep-84f,
     0x1.437fa2p-48f, 0x1.b3f756p-46f, 0x1.53dedp-49f, 0.0f, 0.0f, 0.0f,
     0x1.5ff7b4p-56f, 0x1.a8152p-114f, 0.0f, 0x1.a0002cp-81f, 0.0f, 0.0f, 0.0f,
     0x1.f5b0fcp-45f, 0x1.f7f3eap-94f, 0x1.8e5316p-49f, 0x1.347cd2p-95f,
     0x1.6db704p-22f, 0x1.7bd128p-21f, 0x1.3ae046p-110f, 0.0f, 0.0f, 0.0f,
     0x1.a2911ap-78f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ab1f12p-76f, 0x1.7a2fdcp-67f,
     0.0f, 0.0f, 0x1.4e5304p-87f, 0x1.fb7dd4p-104f, 0.0f, 0.0f, 0.0f, 0x1.9194fcp-18f,
     0.0f, 0.0f, 0x1p0f, 0.0f, 0x1.0dd67ap-102f, 0x1.c1973ep-35f, 0x1.bcd088p-63f,
     0x1.1226b8p-10f, 0.0f, 0x1.288fb4p-122f, 0.0f, 0x1.17c66ep-48f, 0.0f,
     0x1.b7a8dap-100f, 0x1.398bbap-63f, 0.0f, 0x1.4c4b46p-3f, 0.0f, 0.0f,
     0x1.b20674p-60f, 0.0f, 0.0f, 0x1.f681f6p-4f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b309p-26f, 0.0f, 0.0f, 0x1.ce69b6p-91f, 0.0f, 0.0f, 0.0f, 0x1.c5f484p-18f,
     0x1.ecf2ep-24f, 0.0f, 0x1.b27852p-37f, 0.0f, 0.0f, 0x1.97a132p-124f, 0.0f,
     0x1.f5e7a8p-111f, 0.0f, 0x1.f3203p-10f, 0.0f, 0x1.89d8d2p-125f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.c72b6ep-30f, 0.0f, 0x1.13d7eep-45f, 0.0f, 0.0f, 0x1.72e4ep-106f,
     0x1.d24928p-125f, 0x1.af60cp-11f, 0x1.b2f8c2p-65f, 0x1.86f7bcp-41f, 0.0f, 0.0f,
     0.0f, 0x1.18a7e8p-100f, 0x1.1d579cp-55f, 0x1.ab4a5p-121f, 0x1.a136p-72f,
     0x1.7f6ed8p-13f, 0.0f, 0x1.8be26ep-92f, 0.0f, 0.0f, 0x1.9892c4p-88f,
     0x1.de4548p-64f, 0x1.247beep-122f, 0.0f, 0.0f, 0x1.68ebcp-66f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.47a3d4p-122f, 0.0f, 0.0f, 0x1.bc03dp-126f, 0.0f, 0x1.a912e2p-58f,
     0.0f, 0x1.c4e14ep-67f, 0x1.4e1678p-57f, 0x1.3ead9ep-125f, 0x1.030dd4p-66f, 0.0f,
     0x1.fd8c44p-77f, 0.0f, 0x1.aa07c6p-64f, 0x1.3d9f4cp-77f, 0.0f, 0x1.20b148p-117f,
     0x1.3b78c8p-116f, 0.0f, 0.0f, 0x1.a0c132p-59f, 0.0f, 0x1.5df3c4p-86f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.0b92dcp-94f, 0x1.be16cap-46f, 0x1.5b7dd6p-110f, 0.0f, 0.0f, 0.0f,
     0x1.d15c5p-12f, 0x1.71b11p-97f, 0x1.509588p-48f, 0.0f, 0x1.0e04eap-10f,
     0x1.5efbcep-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f7d426p-81f, 0x1.8a47c8p-72f,
     0x1.c6cc4cp-42f, 0x1.22c672p-26f, 0x1.0bc33p-84f, 0x1.5157cap-120f,
     0x1.a4a7a6p-51f, 0.0f, 0x1.9fc24ep-27f, 0.0f, 0x1.7c3738p-41f, 0.0f,
     0x1.1ae6ccp-93f, 0x1.dad80ap-10f, 0x1.acb322p-49f, 0.0f, 0x1.d6d7e4p-73f, 0.0f,
     0.0f, 0x1.3b4ec6p-92f, 0.0f, 0.0f, 0.0f, 0x1.99e5b8p-42f, 0.0f, 0.0f,
     0x1.d73936p-46f, 0x1.0f64dap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6989a4p-91f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.03352ap-15f, 0x1.3dddp-10f, 0.0f, 0.0f,
     0x1.de0bf4p-61f, 0x1.064d6ep-57f, 0x1.d8367ap-115f, 0x1.63fb78p-91f, 0.0f,
     0x1.076188p-33f, 0x1.868112p-25f, 0x1.19d0b6p-119f, 0x1.161724p-14f, 0.0f, 0.0f,
     0.0f, 0x1.c088aep-123f, 0.0f, 0.0f, 0x1.25fd6cp-123f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6027ecp-118f, 0.0f, 0x1.716f1ep-78f, 0.0f, 0.0f, 0.0f,
     0x1.108f88p-23f, 0x1.3e732ep-25f, 0.0f, 0x1.dbad56p-26f, 0.0f, 0.0f,
     0x1.13e846p-90f, 0.0f, 0x1.ed1232p-84f, 0x1.f93deap-77f, 0x1.b2b492p-11f,
     0x1.85f776p-52f, 0.0f, 0.0f, 0.0f, 0x1.728684p-24f, 0.0f, 0.0f, 0.0f,
     0x1.33cd2cp-118f, 0.0f, 0.0f, 0.0f, 0x1.489352p-1f, 0.0f, 0x1.c6f0cap-75f, 0.0f,
     0.0f, 0.0f, 0x1.d025a4p-26f, 0.0f, 0.0f, 0.0f, 0x1.9748b6p-56f, 0.0f, 0.0f, 0.0f,
     0x1.6b3e14p-20f, 0.0f, 0.0f, 0x1.470f9ap-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.5b6994p-115f, 0.0f, 0.0f, 0.0f, 0x1.9a1b54p-94f, 0x1.d85d8cp-100f, 0.0f,
     0x1.642b4cp-6f, 0.0f, 0x1.eab402p-23f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dfa85cp-126f, 0.0f, 0x1.9f8cccp-41f, 0x1.64110ap-106f, 0x1.d8ff16p-13f, 0.0f,
     0x1.fcd198p-83f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.51013ap-95f, 0.0f,
     0x1.4f1d52p-30f, 0x1.30992p-90f, 0x1.bc926p-88f, 0.0f, 0x1.0c579cp-64f, 0.0f,
     0.0f, 0x1.39bcd4p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5a07cep-111f, 0.0f,
     0.0f, 0.0f, 0x1.37dddap-84f, 0.0f, 0x1.59fdc6p-1f, 0x1.86396cp-65f,
     0x1.4d3bf4p-112f, 0x1.bbc7b4p-63f, 0x1.e80e48p-114f, 0.0f, 0x1.beb616p-40f,
     0x1.27388cp-4f, 0x1.0bb81ap-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b5dd42p-14f,
     0x1.ef146ep-43f, 0x1.54a52ep-53f, 0.0f, 0.0f, 0x1.f4011ep-27f, 0.0f,
     0x1.c0bca4p-3f, 0.0f, 0x1.d859d4p-3f, 0x1.7925dcp-69f, 0.0f, 0x1.b94ab2p-42f,
     0.0f, 0x1.ce5916p-91f, 0x1.c6a28p-17f, 0x1.eba18cp-5f, 0x1.ba3ec8p-111f,
     0x1.414b2ap-64f, 0.0f, 0.0f, 0.0f, 0x1.d5b532p-78f, 0.0f, 0.0f, 0x1.1c5018p-62f,
     0x1.c031p-87f, 0.0f, 0x1.8d1c8p-104f, 0x1.9ca3d8p-102f, 0.0f, 0.0f,
     0x1.42bf2cp-85f, 0.0f, 0x1.52cd3cp-88f, 0.0f, 0x1.7a352ep-78f, 0x1.e9c262p-75f,
     0.0f, 0x1.b4534cp-32f, 0x1.ae0e86p-90f, 0x1.ce391ap-41f, 0x1.27cbeep-105f, 0.0f,
     0x1.6f1da2p-37f, 0.0f, 0x1.3a6612p-120f, 0.0f, 0x1.1002p-7f, 0x1.13d616p-89f,
     0.0f, 0.0f, 0x1.187496p-81f, 0.0f, 0x1.53f04p-21f, 0.0f, 0.0f, 0.0f,
     0x1.3f575ep-34f, 0x1.aa9dd8p-27f, 0x1.5af18cp-98f, 0x1.5c7f9p-124f, 0.0f,
     0x1.a2054cp-32f, 0.0f, 0.0f, 0x1.7d8344p-34f, 0x1.b4b376p-85f, 0.0f, 0.0f,
     0x1p0f, 0.0f, 0.0f, 0x1.fcc53ap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.118fcap-68f,
     0x1.47fcdp-101f, 0x1.a88f28p-30f, 0.0f, 0.0f, 0x1.c393cp-89f, 0x1.3ba194p-9f,
     0x1.658652p-46f, 0.0f, 0.0f, 0.0f, 0x1.6d8c4p-70f, 0x1.274a82p-71f, 0.0f,
     0x1.2053dep-5f, 0x1.ce125ap-124f, 0.0f, 0x1.447e04p-75f, 0x1.518098p-87f, 0.0f,
     0.0f, 0x1.a0bc16p-69f, 0x1.9f7944p-6f, 0x1.49dcf2p-6f, 0.0f, 0x1.e3ae4ep-9f,
     0.0f, 0.0f, 0x1.18632p-1f, 0x1.19e10ep-35f, 0x1.e3402ap-79f, 0x1.6451c4p-76f,
     0x1.e49132p-5f, 0.0f, 0.0f, 0x1.d953cp-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.546f5p-27f, 0x1.22f3fap-56f, 0.0f, 0x1.65d2c8p-84f, 0x1.6a54d6p-98f, 0.0f,
     0x1.de0d9ep-31f, 0.0f, 0x1.bee8dap-19f, 0.0f, 0x1.90b52cp-62f, 0x1.2d98e4p-4f,
     0x1.7fe6e4p-120f, 0.0f, 0x1.36cf42p-47f, 0x1.90a6dcp-30f, 0.0f, 0x1.a2ca02p-88f,
     0.0f, 0x1.c59f72p-97f, 0x1.96dcccp-120f, 0.0f, 0.0f, 0x1.171eb4p-35f, 0.0f,
     0x1.9ad47p-58f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6ef0f2p-48f, 0.0f, 0.0f,
     0x1.35e61ap-126f, 0x1.a59964p-66f, 0x1.e7ca1ap-111f, 0.0f, 0x1.30fd2ep-106f,
     0.0f, 0.0f, 0x1.8fde66p-79f, 0x1.5d68b4p-13f, 0x1.8ad71ap-92f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.97ade2p-74f, 0.0f, 0x1.77c868p-5f, 0x1.767c5p-108f, 0.0f,
     0x1.bcbcc6p-29f, 0.0f, 0x1.3a168cp-122f, 0.0f, 0.0f, 0x1.ef6bc8p-87f, 0.0f, 0.0f,
     0x1.74b50cp-79f, 0x1.0b7da4p-123f, 0x1.4eaefp-107f, 0x1.2d4e74p-114f,
     0x1.894092p-98f, 0x1.addfa4p-63f, 0x1.e4d0a4p-60f, 0x1.8183d8p-50f, 0.0f,
     0x1.b1dbf4p-61f, 0x1.092ff6p-75f, 0.0f, 0.0f, 0x1.13158p-125f, 0.0f, 0.0f,
     0x1.3e704ap-53f, 0x1.da5bcep-2f, 0x1.3e9f12p-24f, 0x1.def6ep-29f,
     0x1.e47a9ap-54f, 0x1.f63c1cp-37f, 0x1.d4f13ep-42f, 0x1.df5e4ap-2f,
     0x1.0383eap-45f, 0x1.ee4eb2p-20f, 0x1.24b6ecp-48f, 0.0f, 0x1.3981fap-35f,
     0x1.ee5344p-108f, 0.0f, 0x1.33a6cp-51f, 0.0f, 0.0f, 0x1.ef1e82p-118f,
     0x1.ea0a34p-97f, 0.0f, 0.0f, 0.0f, 0x1.ab84cep-103f, 0.0f, 0x1.d76a8p-17f,
     0x1.c2f8e4p-68f, 0x1.8ec57cp-23f, 0x1.425512p-102f, 0x1.2d4362p-8f,
     0x1.8b23dep-111f, 0.0f, 0x1.42c0e2p-104f, 0.0f, 0.0f, 0x1.209b22p-107f, 0.0f,
     0x1.9e3fc2p-114f, 0.0f, 0.0f, 0.0f, 0x1.18266ep-63f, 0.0f, 0x1.53790ap-32f, 0.0f,
     0x1.c1d7eap-63f, 0.0f, 0x1.8f4p-49f, 0x1.525946p-108f, 0.0f, 0.0f,
     0x1.ca2f08p-113f, 0.0f, 0x1.90b1ccp-22f, 0.0f, 0.0f, 0x1.27afbap-59f, 0.0f,
     0x1.35d31ap-8f, 0x1.86a7dp-101f, 0x1.1369a8p-34f, 0x1.6cc084p-75f,
     0x1.c3cebp-32f, 0x1.72b21ep-70f, 0.0f, 0.0f, 0.0f, 0x1.df841p-97f,
     0x1.af429cp-78f, 0x1.0589bcp-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c83a9p-23f,
     0.0f, 0.0f, 0x1.7e58ccp-86f, 0.0f, 0.0f, 0x1.90c9e4p-56f, 0.0f, 0.0f,
     0x1.ddf312p-68f, 0x1.0760ccp-34f, 0.0f, 0x1.f9519ap-121f, 0x1.9ca3c6p-96f,
     0x1.aecbacp-58f, 0.0f, 0.0f, 0.0f, 0x1.c33d22p-4f, 0.0f, 0x1.91bcbcp-93f,
     0x1.da4acep-37f, 0x1.1d7fdap-48f, 0x1.2a8b44p-76f, 0x1.9ba9ecp-83f,
     0x1.2fa876p-89f, 0.0f, 0x1.02784cp-87f, 0.0f, 0.0f, 0x1.62c9d4p-70f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.c223ecp-96f, 0x1.f8ad3ep-34f, 0.0f, 0x1.5fc714p-82f,
     0x1.e5c32cp-124f, 0x1.18b354p-34f, 0.0f, 0x1.9779f2p-79f, 0x1.b80526p-67f, 0.0f,
     0.0f, 0x1.05c47ap-67f, 0.0f, 0.0f, 0.0f, 0x1.73b00cp-7f, 0x1.1e3adp-73f, 0.0f,
     0.0f, 0.0f, 0x1.48a246p-75f, 0.0f, 0x1.b5727cp-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.9a984cp-11f, 0.0f, 0.0f, 0x1.eae06ep-70f, 0.0f, 0.0f, 0x1.2edc5ep-28f,
     0.0f, 0x1.b40864p-41f, 0x1.011bbcp-15f, 0.0f, 0.0f, 0x1.4e93p-53f, 0.0f,
     0x1.bd7eaep-40f, 0.0f, 0.0f, 0x1.3c9096p-29f, 0.0f, 0x1.2e6db6p-121f,
     0x1.6c2af6p-9f, 0x1.fcb606p-122f, 0x1.03d05ep-26f, 0x1.719dccp-73f,
     0x1.ea10dep-13f, 0x1.9a314ap-88f, 0x1.e67818p-15f, 0.0f, 0x1.07e262p-35f,
     0x1.ea067p-99f, 0.0f, 0x1.77d83ap-103f, 0.0f, 0x1.6e3168p-34f, 0x1.627e36p-80f,
     0.0f, 0x1.2a10bep-28f, 0.0f, 0.0f, 0.0f, 0x1.052654p-109f, 0.0f, 0.0f, 0.0f,
     0x1.40f3ccp-52f, 0.0f, 0.0f, 0x1.95f216p-117f, 0x1.216b16p-105f, 0.0f, 0.0f,
     0x1.aa1accp-48f, 0x1.ab5562p-118f, 0x1.4a86cep-16f, 0.0f, 0x1.59286cp-40f, 0.0f,
     0x1.90d9d8p-41f, 0x1.212ec6p-12f, 0x1.06e688p-54f, 0.0f, 0x1.763292p-119f, 0.0f,
     0.0f, 0x1.fcc8dcp-60f, 0.0f, 0.0f, 0x1.5677c2p-115f, 0.0f, 0x1.8f9f38p-104f,
     0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f, 0x1.30d56ep-55f, 0x1.ffaefep-31f,
     0.0f, 0.0f, 0.0f, 0x1.3dd492p-20f, 0x1.85d922p-8f, 0.0f, 0x1.1d742p-72f, 0.0f,
     0x1.309f76p-26f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.74e74cp-7f, 0x1.9f477p-4f,
     0.0f, 0.0f, 0.0f, 0x1.329776p-54f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.38104ap-68f, 0.0f, 0x1.cf8d64p-69f, 0.0f, 0x1.3eff36p-125f, 0x1.46cddap-77f,
     0.0f, 0.0f, 0x1.d6831ep-90f, 0.0f, 0x1.58012cp-22f, 0x1.80f2d4p-9f, 0.0f,
     0x1.7cdb16p-1f, 0.0f, 0.0f, 0x1.5bc32ep-105f, 0x1.7ab636p-81f, 0.0f, 0.0f,
     0x1.4f4e72p-75f, 0.0f, 0.0f, 0.0f, 0x1.d76f4ap-4f, 0.0f, 0x1.d65aacp-16f,
     0x1.66cb0ap-21f, 0.0f, 0x1.c663d6p-17f, 0.0f, 0x1.7eb03cp-31f, 0x1.7949f2p-37f,
     0.0f, 0x1.e90912p-112f, 0.0f, 0.0f, 0.0f, 0x1.342efcp-42f, 0x1.dafd8p-117f,
     0x1.7315bcp-104f, 0.0f, 0.0f, 0x1.18a322p-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.73851ap-85f, 0.0f, 0.0f, 0.0f, 0x1.30d188p-82f, 0.0f, 0x1.378604p-71f,
     0x1.f64518p-67f, 0x1.be7b7p-121f, 0.0f, 0.0f, 0.0f, 0x1.05309ap-7f, 0.0f,
     0x1.592e1p-64f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.dbacbp-24f, 0.0f,
     0x1.4ab7f4p-70f, 0x1.503c14p-66f, 0x1.1ad646p-22f, 0x1.285d72p-81f, 0.0f, 0.0f,
     0.0f, 0x1.68c12ap-90f, 0x1.368f5cp-101f, 0.0f, 0x1.972bbcp-29f, 0x1.41fba6p-69f,
     0.0f, 0x1.ecedcp-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.a9614p-89f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0f;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        float bench_acc;
        int32_t i;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = sqrtf(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("sqrtf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("sqrtf bench acc %a\n", global_bench_acc);
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
