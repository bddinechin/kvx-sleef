/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshf1_u35purecfma.c --function \
 *     Sleef_coshf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.867754p-110f, 0.0f, 0.0f, 0.0f, 0x1.fdcdep-105f, 0.0f, 0x1.d1c1e8p-25f,
     0x1.56873cp-117f, 0.0f, 0x1.d8b7bcp-124f, 0x1.e48c96p-76f, 0.0f, 0.0f, 0.0f,
     0x1.49942ap-111f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dcd98ep-25f, 0.0f, 0.0f,
     0.0f, 0x1.e959e8p-89f, 0.0f, 0x1.de373ep-67f, 0.0f, 0.0f, 0x1.7bfcc6p-125f, 0.0f,
     0.0f, 0x1.5bc06p-18f, 0.0f, 0.0f, 0x1.a5bb38p-90f, 0x1.ffa708p-58f, 0.0f, 0.0f,
     0.0f, 0x1.e5350cp-108f, 0x1.ce9584p-30f, 0.0f, 0x1.b25b1p-9f, 0x1.4a3664p-37f,
     0x1.c0b128p-70f, 0.0f, 0.0f, 0x1.a26e78p-20f, 0.0f, 0x1.be8864p-85f,
     0x1.6195c2p-73f, 0x1.5e0c12p-50f, 0x1.d43ea2p-90f, 0x1.c9deaep-46f, 0.0f, 0.0f,
     0.0f, 0x1.4ece44p-115f, 0.0f, 0x1.963fb2p-28f, 0.0f, 0.0f, 0x1.b35a32p-22f,
     0x1.51ab9cp-12f, 0x1.6fe65ep-45f, 0.0f, 0.0f, 0.0f, 0x1.1b9b52p-33f,
     0x1.9f6d7p-125f, 0.0f, 0.0f, 0x1.c72cfep-68f, 0.0f, 0.0f, 0x1.dee4e2p-126f, 0.0f,
     0.0f, 0x1.cd002p-125f, 0x1.01cc32p-22f, 0.0f, 0.0f, 0x1.845584p-98f,
     0x1.240cf6p-86f, 0x1.b26b58p-50f, 0.0f, 0x1.758bb2p-98f, 0.0f, 0.0f, 0.0f,
     0x1.d4b416p-65f, 0x1.437fap-40f, 0x1.74c896p-44f, 0.0f, 0x1.96c86p-17f,
     0x1.902618p-4f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0a28e6p-12f,
     0x1.f33cdap-114f, 0.0f, 0.0f, 0.0f, 0x1.c5646p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.201382p-109f, 0x1.0aad9ap-114f, 0x1.f8c20cp-124f, 0x1.37d796p-98f,
     0x1.f80ae8p-92f, 0x1.be93cap-31f, 0.0f, 0x1.1f1b0ep-82f, 0.0f, 0x1.5001f2p-55f,
     0x1.3567b6p-73f, 0x1.1983d4p-111f, 0.0f, 0x1.36b1eep-104f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.efdd54p-12f, 0x1.ecaf18p-66f, 0x1.7fd8c6p-44f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ff393p-69f, 0x1.05e3cep-38f, 0.0f, 0.0f, 0.0f, 0x1.377596p-109f, 0.0f, 0.0f,
     0x1.b42744p-66f, 0x1.b188e2p-101f, 0x1.ef4122p-48f, 0.0f, 0.0f, 0x1.a9e188p-23f,
     0.0f, 0x1.68129ep-96f, 0x1.00e43cp-37f, 0x1.c709dcp-101f, 0.0f, 0.0f,
     0x1.dbeb12p-115f, 0x1.8b4cc6p-108f, 0.0f, 0.0f, 0x1.94fa0cp-37f, 0x1.6cfc34p-16f,
     0x1.895f1ep-96f, 0.0f, 0.0f, 0x1.29da0ap-81f, 0x1.56a13ap-56f, 0.0f, 0.0f,
     0x1.42ade6p-14f, 0x1.52d534p-1f, 0x1.072c2ep-66f, 0.0f, 0x1.d5a32cp-76f,
     0x1.ae92aap-76f, 0x1.42de22p-18f, 0x1.0f9f8p-100f, 0.0f, 0x1.294b82p-118f,
     0x1.a6db64p-71f, 0.0f, 0.0f, 0.0f, 0x1.6ef802p-80f, 0x1.c81858p-55f,
     0x1.bae06cp-104f, 0.0f, 0.0f, 0x1.5d2ad6p-121f, 0.0f, 0x1.4bd6eap-121f,
     0x1.529bbcp-45f, 0.0f, 0x1.7f1d54p-87f, 0x1.2d0c54p-29f, 0x1.2183a8p-40f,
     0x1.55956cp-40f, 0x1.34ae2cp-67f, 0.0f, 0.0f, 0x1.9766fep-9f, 0x1.bbb9f6p-32f,
     0x1.5465fap-47f, 0.0f, 0x1.e98ab4p-7f, 0.0f, 0x1.24d3bcp-31f, 0x1.f90cf2p-36f,
     0.0f, 0.0f, 0x1.d65796p-92f, 0x1.f46e2ep-39f, 0.0f, 0.0f, 0.0f, 0x1.d5c694p-97f,
     0.0f, 0x1.912dcap-30f, 0.0f, 0x1.8fecap-9f, 0x1.ccc13ep-124f, 0.0f,
     0x1.7350f8p-104f, 0x1.e6ca14p-40f, 0x1.7617bcp-117f, 0.0f, 0x1.1f9ad8p-103f,
     0x1.500424p-68f, 0x1.c8d9dcp-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.203a9cp-99f, 0.0f,
     0x1.4129cp-105f, 0.0f, 0x1.026596p-44f, 0.0f, 0.0f, 0.0f, 0x1.5f8df8p-39f,
     0x1.3b277cp-13f, 0.0f, 0x1.0631dcp-68f, 0.0f, 0x1.d88726p-32f, 0.0f,
     0x1.26177ap-94f, 0.0f, 0.0f, 0x1.923b94p-1f, 0.0f, 0x1.54568ap-90f, 0.0f,
     0x1.8a99b4p-48f, 0.0f, 0.0f, 0x1.a6bbe8p-41f, 0x1.f4b334p-77f, 0.0f,
     0x1.ccc6e2p-97f, 0x1.4ac15ap-124f, 0.0f, 0.0f, 0.0f, 0x1.371802p-35f,
     0x1.8590a6p-116f, 0.0f, 0x1.0257cap-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.73813p-36f,
     0.0f, 0.0f, 0.0f, 0x1.4d95b4p-46f, 0x1.b31dfap-80f, 0.0f, 0x1.3b9d84p-55f, 0.0f,
     0x1.0c1622p-47f, 0.0f, 0x1.eed9b6p-16f, 0x1.dad4b4p-14f, 0x1.409c58p-121f, 0.0f,
     0x1p0f, 0.0f, 0x1.5ddf7ap-95f, 0x1.91310ep-90f, 0x1.7d4778p-112f, 0.0f,
     0x1.aedfd8p-72f, 0x1.7fd23p-30f, 0x1.6d69d4p-114f, 0.0f, 0.0f, 0.0f,
     0x1.f05194p-107f, 0.0f, 0.0f, 0x1.835068p-103f, 0x1.c7e082p-21f, 0x1.0c74d6p-26f,
     0.0f, 0.0f, 0x1.8d8c9cp-29f, 0.0f, 0x1.4e213p-62f, 0.0f, 0.0f, 0x1.4d988cp-108f,
     0x1.969758p-62f, 0.0f, 0x1.bee536p-115f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.aa7beap-27f, 0.0f, 0x1.d1804cp-1f, 0x1.a8c43cp-41f,
     0x1.094044p-75f, 0x1.9ed466p-124f, 0x1.ff4066p-62f, 0.0f, 0.0f, 0.0f,
     0x1.25090cp-87f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f1ad3ap-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.ffe818p-67f, 0x1.6e8aacp-98f, 0x1.40255cp-118f, 0x1.c0bcfap-89f, 0.0f,
     0x1.506dcp-72f, 0.0f, 0x1.f1b4cap-56f, 0.0f, 0.0f, 0.0f, 0x1.c4179cp-63f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.8527bep-101f, 0.0f, 0x1.c0ff0cp-37f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.e2aa9ap-46f, 0.0f, 0x1.2c7b98p-124f, 0.0f, 0.0f, 0.0f,
     0x1.01bcf2p-31f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.394f54p-124f, 0x1.7c456ap-31f, 0.0f,
     0.0f, 0.0f, 0x1.bfef9ep-106f, 0x1.00e0c2p-54f, 0.0f, 0x1.b8535p-39f,
     0x1.09971ap-102f, 0.0f, 0.0f, 0x1.f0d7aap-79f, 0.0f, 0x1.25aaeap-80f,
     0x1.729c8ep-73f, 0x1.8fb8a2p-122f, 0.0f, 0x1.20095ap-118f, 0.0f, 0x1.f98adp-20f,
     0.0f, 0x1.1fd55cp-106f, 0.0f, 0x1.75f202p-50f, 0.0f, 0x1.ae761p-66f,
     0x1.f8e804p-63f, 0.0f, 0x1.9e7156p-81f, 0x1.78675cp-106f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2d7438p-33f, 0x1.5ff0fep-101f, 0x1.e98e74p-90f, 0.0f, 0.0f, 0.0f,
     0x1.a5baacp-85f, 0x1.46080ap-116f, 0.0f, 0x1.fa3cb4p-52f, 0x1.02915ep-62f, 0.0f,
     0x1.332b34p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ceee8p-58f, 0x1.afcc0ep-122f,
     0.0f, 0x1.af35acp-112f, 0x1.ede024p-105f, 0x1.d2ae12p-82f, 0x1.ddcd06p-126f,
     0.0f, 0.0f, 0x1.01f776p-68f, 0.0f, 0.0f, 0.0f, 0x1.4b67b8p-11f, 0x1.68179ap-112f,
     0.0f, 0.0f, 0x1.2e987ap-103f, 0x1.05b54ep-16f, 0.0f, 0.0f, 0.0f, 0x1.0cc292p-36f,
     0x1.441578p-37f, 0x1.68511ap-40f, 0x1.e9058cp-17f, 0x1.0b7e72p-63f,
     0x1.75a4d8p-80f, 0x1.c26ed2p-124f, 0.0f, 0.0f, 0.0f, 0x1.97ba1cp-123f,
     0x1.f5a08cp-58f, 0.0f, 0x1.5f3a7p-41f, 0x1.9c5be8p-58f, 0.0f, 0.0f,
     0x1.bf70f2p-61f, 0.0f, 0.0f, 0x1.5cabecp-5f, 0x1.6c638cp-86f, 0x1.49e0dep-66f,
     0x1.7b5cacp-11f, 0.0f, 0.0f, 0x1.9d10ap-95f, 0x1.8ea714p-48f, 0x1.c6b61ep-36f,
     0.0f, 0x1.dc2276p-72f, 0.0f, 0x1.ef606p-23f, 0x1.846652p-15f, 0x1.1c44ap-3f,
     0x1p0f, 0x1.f220f8p-116f, 0.0f, 0.0f, 0.0f, 0x1.2fb1dp-40f, 0.0f, 0.0f, 0.0f,
     0x1.55885p-75f, 0x1.b5c752p-53f, 0x1.1835cap-13f, 0x1.77be74p-70f,
     0x1.56d45cp-55f, 0x1.eaa2b4p-91f, 0x1.df6446p-78f, 0x1.67e204p-47f, 0.0f, 0.0f,
     0x1.89cbf6p-59f, 0x1.d589d6p-118f, 0x1.0fa762p-91f, 0x1.a1cbbep-10f,
     0x1.5791e6p-90f, 0x1.0ef596p-26f, 0.0f, 0.0f, 0x1.3264f6p-27f, 0x1.979e88p-63f,
     0x1.280ea4p-31f, 0.0f, 0x1.fbf71ep-18f, 0.0f, 0.0f, 0x1.198122p-106f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.65dd3cp-82f, 0x1.e60086p-50f, 0.0f, 0x1.d0c5p-100f,
     0x1.142aaap-15f, 0x1.967fd4p-85f, 0.0f, 0x1.dc1cf6p-36f, 0.0f, 0x1.39bb34p-36f,
     0x1.adc774p-70f, 0x1.9b68a8p-48f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d86d58p-2f,
     0x1.3713cp-24f, 0x1.d5900cp-113f, 0.0f, 0x1.fb6608p-62f, 0x1.bb523cp-72f, 0.0f,
     0x1.a31d68p-93f, 0x1.9f07f8p-32f, 0x1.07fa8p-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.d8908cp-97f, 0x1.5a7102p-22f, 0x1.7f9a44p-45f, 0.0f, 0.0f,
     0x1.63517cp-98f, 0x1.536eeap-64f, 0x1.ed7d0ap-19f, 0x1.cf4004p-30f,
     0x1.b5e43p-31f, 0x1.ba21fep-86f, 0x1.20a476p-33f, 0.0f, 0.0f, 0x1.7cfa92p-92f,
     0.0f, 0x1.ae2628p-77f, 0x1.76b532p-4f, 0.0f, 0.0f, 0x1.62ed8cp-79f, 0.0f, 0.0f,
     0.0f, 0x1.9b4854p-77f, 0.0f, 0x1.59184ap-14f, 0.0f, 0x1.6c5a28p-71f,
     0x1.700928p-30f, 0x1.f25df6p-122f, 0x1.0540c8p-7f, 0x1.73574cp-82f, 0.0f,
     0x1.f694e4p-14f, 0.0f, 0x1.087574p-28f, 0.0f, 0x1.bbb312p-43f, 0.0f,
     0x1.ffe2bp-75f, 0.0f, 0x1.71702p-13f, 0.0f, 0x1.edc294p-21f, 0.0f, 0.0f,
     0x1.e7557ep-54f, 0.0f, 0.0f, 0x1.98cc8ep-6f, 0x1.ba1b2ap-74f, 0.0f,
     0x1.b48582p-11f, 0x1.4685p-9f, 0x1.727fd6p-76f, 0x1.aa2a6ep-81f, 0x1.b33a0cp-44f,
     0x1.5d77e6p-54f, 0x1.adaa68p-78f, 0x1.92bcd6p-48f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9a042p-19f, 0.0f, 0.0f, 0x1.5e3888p-99f, 0.0f, 0.0f, 0x1.6aef92p-35f,
     0x1.80a33ap-36f, 0.0f, 0.0f, 0.0f, 0x1.f903a4p-115f, 0x1.c52baep-20f, 0.0f,
     0x1.86d088p-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.eb1014p-34f, 0.0f, 0.0f,
     0x1.1b216ap-92f, 0x1.781868p-58f, 0.0f, 0x1.a12e0ep-37f, 0.0f, 0.0f, 0.0f,
     0x1.8def6ap-72f, 0.0f, 0.0f, 0x1.6960dcp-45f, 0.0f, 0x1.7174c6p-88f, 0.0f,
     0x1.d88b3p-35f, 0x1.cba2c6p-45f, 0.0f, 0x1.35a6aap-47f, 0x1.a3ed0cp-58f,
     0x1.bece34p-113f, 0.0f, 0.0f, 0x1.723f64p-25f, 0.0f, 0x1.37f5e8p-124f,
     0x1.04b4acp-47f, 0x1.ebeebep-93f, 0.0f, 0x1.88a02ap-115f, 0.0f, 0x1.cf06bap-2f,
     0.0f, 0.0f, 0x1.36f0e8p-88f, 0x1.881f3ap-25f, 0.0f, 0x1.bbdd8ap-119f, 0.0f, 0.0f,
     0.0f, 0x1.3399f2p-41f, 0.0f, 0.0f, 0x1.85b68p-12f, 0x1.e2e176p-30f,
     0x1.b5fc98p-68f, 0x1.b61426p-90f, 0.0f, 0x1.32f038p-33f, 0x1.c1c7c6p-100f, 0.0f,
     0.0f, 0x1.7157bp-27f, 0.0f, 0x1.ecbb5ap-37f, 0.0f, 0x1.13cap-68f,
     0x1.3f5fa2p-106f, 0.0f, 0x1.ef5826p-52f, 0x1.31f218p-98f, 0x1.1b9d4p-111f, 0.0f,
     0x1.e1bcdep-16f, 0.0f, 0.0f, 0x1.4c8d2cp-115f, 0x1.bdbe08p-3f, 0.0f,
     0x1.83c9a2p-69f, 0x1.b853ep-8f, 0x1.f262e6p-57f, 0.0f, 0x1.64ab2ep-34f,
     0x1.61640cp-79f, 0.0f, 0x1.caa3fap-58f, 0x1.e9d896p-110f, 0.0f, 0.0f, 0.0f,
     0x1.e44f54p-25f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f65bp-70f, 0x1.b9e8bp-84f,
     0x1.f4a1aap-7f, 0.0f, 0.0f, 0.0f, 0x1.c29a18p-126f, 0.0f, 0x1.dc7c88p-116f, 0.0f,
     0x1.24cec8p-65f, 0.0f, 0x1.1decfep-54f, 0.0f, 0x1.893f98p-113f, 0.0f, 0.0f,
     0x1.fba054p-66f, 0x1.2b851cp-57f, 0x1.78d45p-9f, 0x1.b1f4c2p-1f, 0.0f,
     0x1.a4a9bcp-121f, 0x1.4d94fep-72f, 0x1.ee41bp-119f, 0x1.a56488p-54f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.185ffap-91f, 0x1.68b654p-97f, 0x1.6a64c6p-119f, 0x1.af9e7p-9f,
     0x1.b90a6ep-35f, 0x1.5d4e38p-74f, 0.0f, 0x1.eb235cp-82f, 0.0f, 0x1.eba614p-53f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.5ad292p-75f, 0x1.d0d712p-22f, 0x1.58d3d2p-123f,
     0x1.4b613p-49f, 0.0f, 0x1.f0f4e4p-79f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.24421cp-19f, 0x1.d4f986p-88f, 0x1.79088ep-1f, 0.0f, 0.0f, 0x1.7af95p-115f,
     0x1.f75d2ap-60f, 0x1.b6a086p-113f, 0.0f, 0.0f, 0.0f, 0x1.ae7a8cp-10f, 0.0f, 0.0f,
     0x1.9b194ep-100f, 0.0f, 0.0f, 0x1.6b05eap-90f, 0.0f, 0.0f, 0x1.d627aep-31f,
     0x1.787f98p-20f, 0x1.7bcecep-11f, 0x1.978dd2p-108f, 0.0f, 0x1.6ccfb4p-28f,
     0x1.2f1856p-76f, 0.0f, 0.0f, 0x1.05a606p-125f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.708ad8p-69f, 0x1.691e38p-45f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d5cb94p-54f, 0.0f,
     0.0f, 0x1.50332cp-107f, 0x1.b55894p-99f, 0x1.02993p-95f, 0.0f, 0.0f,
     0x1.fbb8dap-39f, 0.0f, 0.0f, 0.0f, 0x1.7cef84p-69f, 0x1.77d5c4p-63f,
     0x1.816b2cp-12f, 0x1.711f7ep-77f, 0x1.9b089p-12f, 0x1.f976d6p-36f, 0.0f, 0.0f,
     0x1.f4a54p-62f, 0x1.702ce6p-107f, 0.0f, 0x1.60c09p-10f, 0x1.ce2d6ep-29f,
     0x1.d13a12p-124f, 0.0f, 0x1.183e46p-21f, 0x1.1c10aap-118f, 0.0f,
     0x1.463632p-117f, 0x1.325688p-35f, 0x1.6c18b2p-56f, 0.0f, 0x1.5099e8p-116f,
     0x1.a78184p-57f, 0x1.a7a2c2p-7f, 0x1.07dbccp-35f, 0x1.07e49ap-98f,
     0x1.41b386p-98f, 0.0f, 0.0f, 0x1.91f2acp-18f, 0x1.975f6cp-32f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34aca8p-34f, 0x1.463c22p-33f, 0x1.ec44cep-81f, 0.0f,
     0.0f, 0x1.e807d4p-50f, 0.0f, 0x1.dce17cp-12f, 0.0f, 0.0f, 0x1.ed3e0ep-55f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9f8c44p-78f, 0x1.5126cep-69f, 0.0f, 0.0f, 0x1.4414e8p-79f,
     0x1.7735ccp-69f, 0.0f, 0x1.89dc26p-85f, 0x1.ae4c1ap-92f, 0.0f, 0x1.15f6b8p-116f,
     0x1.46ef2ap-56f, 0.0f, 0x1.9166fap-50f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.136d54p-117f,
     0.0f, 0x1.633c7ap-93f, 0.0f, 0.0f, 0.0f, 0x1.31c444p-118f, 0.0f, 0x1.d309b8p-25f,
     0.0f, 0x1.78b624p-121f, 0.0f, 0.0f, 0.0f, 0x1.4a9d3ap-24f, 0x1.3cab1p-87f, 0.0f,
     0x1.097c0cp-104f, 0.0f, 0.0f, 0.0f, 0x1.2e58a8p-24f, 0x1.890278p-57f,
     0x1.aa6d52p-72f, 0.0f, 0x1.029a76p-7f, 0x1.90e092p-104f, 0.0f, 0x1.f7b0b8p-96f,
     0.0f, 0.0f, 0x1.328596p-61f, 0.0f, 0x1.1c340cp-54f, 0.0f, 0.0f, 0.0f,
     0x1.a9080ep-82f, 0.0f, 0x1.10b068p-31f, 0.0f, 0x1.7c1cdp-54f, 0x1.64a2aep-67f,
     0x1.2125bep-54f, 0x1.46b28ap-38f, 0.0f, 0.0f, 0x1.6ecfe8p-9f, 0.0f, 0.0f, 0.0f,
     0x1.f086e8p-115f, 0x1.4c5304p-25f, 0x1.ac626ap-74f, 0.0f, 0x1.d263bap-50f,
     0x1.34630cp-77f, 0.0f, 0.0f, 0x1.129706p-121f, 0x1.122a5cp-102f, 0x1.a34c14p-39f,
     0x1.bfccb6p-21f, 0x1.bcca64p-93f, 0.0f, 0x1.7c1fe2p-97f, 0x1.4e6e7ep-42f, 0.0f,
     0x1.1077ap-100f, 0.0f, 0x1.ef3cdp-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08e638p-4f,
     0x1.bb4382p-22f, 0.0f, 0.0f, 0x1.85a708p-59f, 0x1.ad5662p-38f
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
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_coshf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_coshf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshf1_u35purecfma bench acc %a\n", global_bench_acc);
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
