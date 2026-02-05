/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_nextafterf4_kvx.c --function \
 *     Sleef_finz_nextafterf4_kvx --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary32,binary32 \
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
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.320d6p-87f, 0x1.fd0658p-105f, 0x1.79a206p-74f,
     0x1.f9550ap-112f, 0x1.ce66f2p-17f, 0x1.476d8ep-113f, 0.0f, 0x1.8411fp-109f, 0.0f,
     0x1.663bep-89f, 0x1.72b774p-3f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fb7438p-22f, 0.0f,
     0x1.9c87dp-18f, 0x1.a8e49ep-47f, 0.0f, 0x1.e880cp-106f, 0x1.95a5e6p-54f,
     0x1.03f1d4p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bfe8p-21f, 0.0f, 0.0f,
     0x1.c8afdep-68f, 0x1.a8545cp-36f, 0.0f, 0x1.9f6a64p-77f, 0x1.20ff24p-16f,
     0x1.1f8bbcp-5f, 0.0f, 0.0f, 0x1.fb209p-93f, 0.0f, 0x1.57fc96p-72f, 0.0f,
     0x1.b230aep-109f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c33994p-99f, 0.0f, 0x1.032946p-93f,
     0.0f, 0.0f, 0x1.95f1e2p-33f, 0x1.237dd4p-65f, 0.0f, 0x1.84ffd6p-5f,
     0x1.e2e122p-101f, 0x1.dbde92p-120f, 0.0f, 0x1.c7f7ccp-16f, 0.0f, 0.0f,
     0x1.adbaacp-24f, 0.0f, 0x1.2cf45ep-77f, 0x1.52f528p-16f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.7ffcc4p-74f, 0x1.5f3dfp-106f, 0x1.e0ad4ep-95f, 0x1.f76a3ap-43f,
     0.0f, 0.0f, 0x1.28f5cap-48f, 0.0f, 0x1.68eb78p-115f, 0.0f, 0x1.a112d2p-48f,
     0x1.f27a4ep-38f, 0.0f, 0.0f, 0x1.258f0ep-51f, 0x1.20b9fap-80f, 0x1.048732p-63f,
     0x1.90b0dap-21f, 0.0f, 0.0f, 0.0f, 0x1.3f7282p-44f, 0x1.62bdc8p-6f, 0.0f,
     0x1.4d9be4p-25f, 0x1.041092p-90f, 0x1.be36eep-12f, 0.0f, 0x1.35c292p-35f,
     0x1.90c744p-69f, 0x1.6c1a6ep-31f, 0x1.90693ep-40f, 0.0f, 0.0f, 0x1.7d8b2ep-109f,
     0.0f, 0.0f, 0.0f, 0x1.29b4a6p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a8c398p-52f,
     0x1.0991a4p-30f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9ab1f6p-43f, 0.0f,
     0x1.0a1f2p-91f, 0x1.54216ep-40f, 0.0f, 0x1.b3cad4p-80f, 0x1.a73da2p-100f,
     0x1.000138p-75f, 0x1.331742p-122f, 0.0f, 0x1.d8725cp-114f, 0.0f, 0.0f,
     0x1.e14d38p-118f, 0.0f, 0x1.913d44p-26f, 0x1.62767ep-40f, 0.0f, 0x1.1dda96p-31f,
     0.0f, 0x1.5937f2p-114f, 0x1.3b083ap-84f, 0.0f, 0.0f, 0x1.2dd25cp-80f,
     0x1.9101c6p-80f, 0x1.a1990cp-84f, 0x1.370c2cp-126f, 0x1.48a736p-52f, 0.0f, 0.0f,
     0x1.03bf2cp-68f, 0.0f, 0x1.40a54ep-29f, 0x1.41c4cep-66f, 0.0f, 0x1.dd7444p-113f,
     0x1.626c44p-66f, 0.0f, 0x1.4a9d36p-84f, 0.0f, 0.0f, 0x1.d41ec8p-103f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.b34e0cp-89f, 0x1.1bdf1cp-122f, 0.0f, 0x1.fdae1ap-72f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.191744p-83f, 0.0f, 0x1.9263c2p-112f, 0x1.70bdep-35f,
     0x1.42843p-72f, 0x1.2435d2p-125f, 0.0f, 0x1.ef7ccep-95f, 0.0f, 0.0f, 0.0f,
     0x1.d84b3cp-20f, 0.0f, 0x1.719dap-48f, 0x1.4b1d2cp-75f, 0x1.fd5e66p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.79856ep-26f, 0.0f, 0x1.06fbfep-29f, 0x1.b48f82p-115f,
     0x1.ce8204p-59f, 0x1.d5a45ep-51f, 0x1.5b84cp-80f, 0x1.f04f14p-36f, 0.0f, 0.0f,
     0x1.d830d4p-106f, 0.0f, 0.0f, 0.0f, 0x1.9096cp-105f, 0x1.c5c654p-36f, 0.0f,
     0x1.a4bb8ap-38f, 0x1.83f84p-7f, 0x1.54d2e4p-89f, 0x1.721e98p-6f, 0.0f,
     0x1.5d8cf8p-9f, 0x1.4637dcp-30f, 0.0f, 0x1.27f62ep-102f, 0.0f, 0.0f,
     0x1.3dd21p-1f, 0.0f, 0.0f, 0.0f, 0x1.82a1p-75f, 0.0f, 0.0f, 0x1.6746dep-124f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.12ee8cp-56f, 0x1.1a901cp-19f, 0x1.1f55fp-30f,
     0x1.aa22acp-113f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.839f56p-60f, 0x1.0f21b2p-36f, 0.0f,
     0x1.97c27cp-126f, 0x1.7621dep-58f, 0x1.7fe66p-112f, 0x1.286eacp-13f,
     0x1.9c2056p-25f, 0.0f, 0x1.107224p-74f, 0x1.126f28p-28f, 0x1.1585bp-16f, 0.0f,
     0.0f, 0x1.2d764ep-124f, 0x1.92729ap-110f, 0.0f, 0.0f, 0x1.b0b8d4p-69f, 0.0f,
     0.0f, 0x1.59718ep-59f, 0x1.82f73ap-45f, 0.0f, 0x1.76eee6p-25f, 0.0f,
     0x1.aed882p-40f, 0.0f, 0.0f, 0x1.d30b34p-79f, 0.0f, 0.0f, 0x1.0cbad6p-18f, 0.0f,
     0.0f, 0x1.70952cp-119f, 0x1.a473ap-101f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.190628p-35f,
     0.0f, 0x1.01767p-79f, 0.0f, 0x1.0348e8p-90f, 0.0f, 0x1.bcc704p-30f,
     0x1.08b238p-100f, 0x1.25ed2ap-35f, 0x1.38ddcep-91f, 0x1.b007bcp-111f, 0.0f, 0.0f,
     0.0f, 0x1.ee3e86p-63f, 0.0f, 0x1.6f17fap-106f, 0.0f, 0x1.4b8d8ep-35f, 0.0f, 0.0f,
     0x1.02ea34p-25f, 0.0f, 0x1.e9a0d6p-45f, 0x1.a29fbep-41f, 0.0f, 0.0f,
     0x1.700dacp-56f, 0x1.1ac29cp-12f, 0x1.c63928p-16f, 0.0f, 0x1.64365p-120f, 0.0f,
     0.0f, 0.0f, 0x1.0bb894p-15f, 0.0f, 0x1.405c88p-6f, 0x1.63ac14p-55f, 0.0f, 0.0f,
     0x1.306174p-105f, 0.0f, 0.0f, 0x1.17acdp-77f, 0x1.f51a66p-12f, 0x1.3332a4p-5f,
     0.0f, 0x1.83eaecp-105f, 0x1.4562bp-112f, 0.0f, 0.0f, 0.0f, 0x1.495a02p-16f, 0.0f,
     0.0f, 0x1.e571ecp-73f, 0x1.11e50ep-76f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2502c2p-91f, 0x1.2586a6p-103f, 0x1.c66c2p-36f, 0.0f, 0x1.267d1p-116f, 0.0f,
     0x1.7f7958p-68f, 0x1.bf1d02p-75f, 0.0f, 0x1.1b1fb2p-95f, 0x1.130038p-48f, 0.0f,
     0x1.f067d6p-49f, 0.0f, 0x1.0af622p-121f, 0.0f, 0x1p0f, 0x1.128054p-16f,
     0x1.21f5fep-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.fbbbf4p-22f, 0.0f,
     0x1.5c334cp-67f, 0.0f, 0.0f, 0.0f, 0x1.ad3ccap-93f, 0.0f, 0x1.0e141ep-124f,
     0x1.bcb01ap-92f, 0.0f, 0x1.074ab4p-31f, 0.0f, 0x1.dac008p-120f, 0x1.c45842p-43f,
     0.0f, 0.0f, 0x1.b9f2ecp-30f, 0.0f, 0x1.ebe93ap-66f, 0x1.c216e6p-48f, 0.0f, 0.0f,
     0x1.e40618p-81f, 0x1.192d56p-69f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c9086cp-50f, 0.0f,
     0.0f, 0x1.284c5ap-72f, 0.0f, 0x1p0f, 0.0f, 0x1.ae070ap-124f, 0.0f,
     0x1.2fcd3ap-39f, 0x1.d2df06p-88f, 0.0f, 0x1.a67266p-80f, 0.0f, 0.0f, 0.0f,
     0x1.f783p-72f, 0.0f, 0x1.0a486ep-19f, 0x1.5983dap-59f, 0.0f, 0.0f, 0.0f,
     0x1.f1fd26p-43f, 0x1.7438dcp-113f, 0.0f, 0.0f, 0x1.103442p-121f, 0.0f, 0.0f,
     0x1.d031bap-70f, 0.0f, 0.0f, 0x1.6b8698p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.273f6p-103f, 0.0f, 0.0f, 0.0f, 0x1.a865b2p-79f, 0x1.a12eccp-48f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83990ap-82f,
     0x1.f95496p-49f, 0.0f, 0x1.afecdp-21f, 0x1.00541ap-91f, 0x1.276028p-119f,
     0x1.c091b6p-41f, 0.0f, 0.0f, 0.0f, 0x1.05629ap-56f, 0.0f, 0x1.56682ap-29f,
     0x1.e15646p-85f, 0x1.d4be66p-111f, 0.0f, 0x1.47d678p-6f, 0x1.95d3a8p-32f, 0.0f,
     0.0f, 0x1.58185p-54f, 0.0f, 0x1.9941e8p-21f, 0.0f, 0x1.0bee16p-51f, 0.0f,
     0x1.6bb084p-23f, 0x1.c12e44p-88f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.491a0ap-48f,
     0x1.aa4ba4p-62f, 0.0f, 0x1.1593eap-99f, 0x1.184b98p-20f, 0x1.cb7bep-41f,
     0x1.2a746cp-85f, 0x1.22805ap-62f, 0.0f, 0x1.354894p-117f, 0.0f, 0x1.97d444p-102f,
     0x1.9b29c6p-45f, 0.0f, 0.0f, 0x1.e42042p-42f, 0x1.821b84p-63f, 0.0f,
     0x1.a3fdd6p-122f, 0.0f, 0.0f, 0x1.20638cp-9f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.fbaa74p-90f, 0x1.d14824p-40f, 0.0f, 0x1.0fbcb8p-30f, 0x1.48922ap-124f, 0.0f,
     0x1.137a58p-80f, 0x1.0ad9eap-29f, 0x1.1635dp-77f, 0x1.95b742p-107f, 0.0f,
     0x1.8a2f42p-114f, 0.0f, 0x1.a7e93cp-17f, 0.0f, 0.0f, 0.0f, 0x1.a85de2p-53f, 0.0f,
     0x1.f4d4d2p-45f, 0.0f, 0.0f, 0x1.5ed7aep-71f, 0x1.8b6e5ep-54f, 0.0f,
     0x1.d8178ep-23f, 0x1.3be238p-97f, 0x1.01f74p-61f, 0x1.b38a2p-6f, 0.0f,
     0x1.bba94ap-30f, 0x1.f1de62p-107f, 0.0f, 0x1.369148p-38f, 0.0f, 0x1.781d42p-57f,
     0x1.6ac7fep-8f, 0x1.3aadecp-37f, 0x1.0851b4p-119f, 0.0f, 0.0f, 0x1.1c4174p-121f,
     0.0f, 0.0f, 0.0f, 0x1.efd336p-97f, 0.0f, 0.0f, 0x1.52444ap-17f, 0x1.12d50ep-16f,
     0.0f, 0.0f, 0x1.721adap-4f, 0.0f, 0.0f, 0x1.cd9abep-13f, 0x1.79d924p-42f, 0.0f,
     0.0f, 0x1.aa300ep-5f, 0x1.a0d22ep-15f, 0.0f, 0.0f, 0x1.c45ceep-102f,
     0x1.cfa938p-113f, 0.0f, 0x1.f4ff24p-76f, 0.0f, 0x1.d96886p-86f, 0.0f, 0.0f, 0.0f,
     0x1.ba43dp-89f, 0x1.693676p-119f, 0x1.2286c4p-70f, 0.0f, 0x1.443c9cp-27f, 0.0f,
     0.0f, 0x1.28d38p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1p0f, 0x1.f58182p-94f,
     0x1.b68822p-61f, 0x1.2ad672p-59f, 0x1.0cf434p-126f, 0x1.88eadp-100f,
     0x1.8b946ep-96f, 0x1.a45662p-69f, 0.0f, 0x1.9b8b78p-54f, 0x1.6e42cep-31f,
     0x1.8ece28p-91f, 0x1.d218e2p-89f, 0x1.17839ap-75f, 0x1.517ecep-79f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.87c2c4p-10f, 0.0f, 0.0f, 0x1.a2839ep-63f, 0x1.c8c1ccp-18f,
     0x1.d02152p-126f, 0.0f, 0.0f, 0x1.13936p-107f, 0x1.def0aap-97f, 0.0f,
     0x1.1abe86p-74f, 0.0f, 0x1.5a9274p-93f, 0x1.bb5126p-15f, 0.0f, 0x1.679cc6p-69f,
     0x1.9bc83p-49f, 0x1.07dfacp-5f, 0x1.5e4ad6p-39f, 0.0f, 0x1.ed271cp-44f,
     0x1.00194cp-78f, 0x1.b875f4p-88f, 0x1.131c86p-95f, 0x1.6fef36p-9f,
     0x1.3bb7c2p-7f, 0x1.62bf7cp-74f, 0x1.6dd21ap-122f, 0x1.64a53ep-103f, 0.0f,
     0x1.8eea9cp-48f, 0x1.46f80cp-77f, 0.0f, 0x1.7cd4c8p-104f, 0x1.b35212p-40f, 0.0f,
     0.0f, 0.0f, 0x1.2276p-12f, 0.0f, 0x1.7411e4p-114f, 0x1.f87016p-118f,
     0x1.9e89d2p-22f, 0.0f, 0x1.0b054ep-102f, 0.0f, 0x1.9fe344p-77f, 0.0f,
     0x1.e4f19ep-10f, 0x1.888d88p-37f, 0.0f, 0.0f, 0x1.79246ap-52f, 0.0f,
     0x1.30c7d6p-89f, 0x1.76334p-86f, 0.0f, 0x1.248e36p-122f, 0.0f, 0x1.0d2d4p-16f,
     0.0f, 0.0f, 0.0f, 0x1.8eca9p-35f, 0x1.99883ep-126f, 0x1.6ef836p-117f,
     0x1.2c29d2p-53f, 0x1.71ab58p-29f, 0.0f, 0x1.4fbbeep-105f, 0x1.c123fp-44f, 0.0f,
     0x1.a357f6p-84f, 0x1.e5669p-38f, 0x1.6a0ba6p-99f, 0x1.483f4ep-14f,
     0x1.27231ep-30f, 0x1.d4639ep-46f, 0.0f, 0x1.714bd6p-46f, 0.0f, 0x1.4afb6cp-52f,
     0.0f, 0.0f, 0.0f, 0x1.3c20c2p-85f, 0x1.f52482p-121f, 0.0f, 0.0f, 0.0f,
     0x1.a7e0fcp-96f, 0.0f, 0.0f, 0x1.86004ap-74f, 0x1.93337cp-23f, 0x1.5fb7eep-14f,
     0.0f, 0x1.59ebeep-70f, 0x1.5d4472p-50f, 0x1.5b3c5p-58f, 0.0f, 0x1.85bep-2f, 0.0f,
     0x1.8d5554p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.37727ap-90f, 0x1.a317fp-11f,
     0.0f, 0.0f, 0.0f, 0x1.e48192p-10f, 0.0f, 0.0f, 0.0f, 0x1.74e5cp-78f,
     0x1.bb7a46p-67f, 0.0f, 0.0f, 0.0f, 0x1.edd09cp-50f, 0x1.7d0f8ep-88f, 0.0f,
     0x1.368bd8p-63f, 0.0f, 0x1.8f7952p-28f, 0x1.ddafd4p-125f, 0.0f, 0x1.3557aep-64f,
     0x1.710cacp-40f, 0x1.e2b79ep-84f, 0.0f, 0x1.ccabe8p-120f, 0x1.4b06e8p-43f, 0.0f,
     0.0f, 0.0f, 0x1.ab10f4p-59f, 0x1.3d76f2p-66f, 0.0f, 0x1.591fb8p-37f,
     0x1.3abceap-19f, 0x1.a6f7b8p-93f, 0x1.c6db9p-126f, 0x1.0d187ep-17f,
     0x1.c0c1fcp-36f, 0.0f, 0.0f, 0.0f, 0x1.116e0ep-68f, 0.0f, 0.0f, 0.0f,
     0x1.c41ad4p-66f, 0.0f, 0x1.5ed498p-92f, 0.0f, 0.0f, 0x1.a36deep-8f, 0.0f,
     0x1.4ccf6cp-79f, 0.0f, 0.0f, 0x1.cf8d52p-31f, 0.0f, 0x1.3da54ep-15f, 0.0f,
     0x1.8612dep-101f, 0.0f, 0x1.62d9bcp-15f, 0x1.aed9c2p-69f, 0.0f, 0x1.b6a988p-108f,
     0x1.120668p-9f, 0x1.763982p-19f, 0x1.e17cb8p-33f, 0.0f, 0.0f, 0x1.c31ff2p-126f,
     0.0f, 0.0f, 0.0f, 0x1.e3c2e6p-101f, 0.0f, 0.0f, 0x1.8296b2p-9f, 0.0f,
     0x1.2edfb6p-32f, 0x1.ab610ap-95f, 0.0f, 0x1.ac4098p-69f, 0.0f, 0.0f,
     0x1.a39294p-95f, 0.0f, 0x1.cd55p-79f, 0.0f, 0x1.055f1cp-65f, 0.0f,
     0x1.e4284ep-66f, 0x1.43d59ap-56f, 0.0f, 0x1.242316p-1f, 0.0f, 0x1.b9ed1cp-122f,
     0x1.fc60f6p-93f, 0x1.613dd8p-113f, 0.0f, 0.0f, 0x1.9309bcp-57f, 0x1.02fe54p-39f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.e08262p-75f, 0x1.ef290ep-43f, 0x1.9afdaep-31f,
     0x1.3e952cp-82f, 0.0f, 0x1.09a4f2p-88f, 0.0f, 0.0f, 0.0f, 0x1.66cf5cp-13f,
     0x1.f5b6e4p-92f, 0.0f, 0x1.008918p-123f, 0x1.c29182p-41f, 0.0f, 0.0f,
     0x1.5a415cp-70f, 0x1.b39328p-86f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e02ep-63f, 0.0f,
     0.0f, 0x1.e4ef84p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.407c14p-104f,
     0x1.f1962ep-24f, 0.0f, 0x1.20afeep-94f, 0x1.89f7bep-44f, 0x1.48b3eap-119f, 0.0f,
     0x1.1d0422p-115f, 0.0f, 0x1.ea1bdp-16f, 0.0f, 0x1.7ee79ap-71f, 0x1.c13702p-70f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7c6048p-18f, 0x1.d93b5cp-7f, 0.0f, 0.0f,
     0x1.73475p-124f, 0x1.9947dep-10f, 0x1.fa2836p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.c4f932p-34f, 0x1.10544cp-90f, 0x1.98e4f2p-65f, 0.0f, 0.0f, 0.0f,
     0x1.6de1f6p-67f, 0x1.e2be16p-120f, 0x1.a222aep-82f, 0.0f, 0x1.8c2b1ap-45f,
     0x1.b8e196p-57f, 0.0f, 0x1.2e8ce6p-16f, 0.0f, 0x1.8cb5eap-45f, 0.0f,
     0x1.619bf2p-99f, 0.0f, 0x1.ae3632p-16f, 0x1.e1a352p-107f, 0.0f, 0.0f,
     0x1.a994b8p-41f, 0x1.15434ap-32f, 0.0f, 0.0f, 0.0f, 0x1.625954p-87f, 0.0f, 0.0f,
     0x1.f98ff4p-80f, 0x1.861c74p-83f, 0x1.06f9b6p-48f, 0x1.2dd77ap-103f, 0.0f, 0.0f,
     0x1.09c9dep-38f, 0x1.4a42dp-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.17d5dep-11f, 0.0f,
     0x1.1e802p-84f, 0x1.02162ap-80f, 0.0f, 0x1.8b806cp-40f, 0x1.ef5016p-58f, 0.0f,
     0.0f, 0x1.e9d5f4p-51f, 0.0f, 0.0f, 0x1.576326p-49f, 0.0f, 0.0f, 0.0f,
     0x1.dcf0f4p-70f, 0x1.b83efcp-39f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8f93a8p-47f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.91c402p-91f, 0x1.05583cp-46f,
     0x1.327eeap-55f, 0x1.b1bf04p-65f, 0x1.fb955ep-90f, 0x1.c69e6cp-123f, 0.0f,
     0x1.219506p-90f, 0x1p0f, 0.0f, 0x1.4c0992p-40f, 0x1.c236f4p-13f, 0x1.741782p-77f,
     0.0f, 0.0f, 0x1.b8ae68p-57f, 0.0f, 0x1.d282bap-19f, 0.0f, 0.0f, 0x1.4a1728p-122f
};
static const float external_bench_wrapper_input_table_arg1[1004]  = {
     0x1.c1decep-95f, 0x1.f5484cp-34f, 0x1.b90c1cp-58f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.02f114p-16f, 0.0f, 0x1.d29f6cp-17f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.784e94p-27f, 0.0f, 0x1.548f54p-61f, 0.0f, 0x1.378926p-30f, 0.0f, 0.0f,
     0x1.dfc3fp-64f, 0x1.9014a4p-113f, 0.0f, 0x1.bc029cp-70f, 0.0f, 0.0f, 0.0f,
     0x1.9eb304p-41f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.059a2p-114f, 0.0f,
     0x1.0db504p-118f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c11e4ap-30f, 0.0f, 0x1.040ec6p-44f,
     0x1.2ac382p-60f, 0.0f, 0x1.877036p-32f, 0x1.3106d6p-98f, 0.0f, 0x1.e9565p-43f,
     0x1.b474dcp-77f, 0x1.ec053cp-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0f6062p-1f,
     0x1.899412p-45f, 0x1.940382p-45f, 0x1.c63416p-34f, 0.0f, 0x1.29c478p-48f,
     0x1.349a6ep-11f, 0x1.8ba6f8p-37f, 0.0f, 0.0f, 0x1.351a26p-48f, 0x1.4d3b5p-83f,
     0x1.21b7fp-109f, 0.0f, 0x1.0804c8p-94f, 0.0f, 0.0f, 0.0f, 0x1.4ecde8p-10f, 0.0f,
     0x1.92387ep-71f, 0x1.ef9978p-34f, 0.0f, 0x1.2bb3d8p-114f, 0.0f, 0.0f,
     0x1.e48c1ap-61f, 0.0f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.ddfca4p-10f, 0.0f,
     0x1.a86586p-24f, 0x1.71111ap-50f, 0x1.9cf198p-40f, 0x1.4bf03ep-120f, 0.0f,
     0x1.561e6p-65f, 0x1.52bbf4p-46f, 0x1.06559ap-2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1e75ep-69f, 0.0f, 0.0f, 0x1.aae326p-67f, 0x1.2401b6p-50f, 0x1.a429f2p-3f,
     0x1.3f0984p-13f, 0.0f, 0x1.18cc58p-51f, 0.0f, 0.0f, 0x1.fe0e4ep-36f, 0.0f,
     0x1.6a7ac4p-59f, 0x1.071086p-116f, 0.0f, 0x1.293826p-57f, 0.0f, 0x1.251f24p-29f,
     0.0f, 0.0f, 0.0f, 0x1.abec78p-76f, 0x1.fed29cp-54f, 0.0f, 0x1.eada7ap-38f, 0.0f,
     0.0f, 0.0f, 0x1.16b12cp-113f, 0x1.687902p-26f, 0x1.ea7408p-102f, 0.0f,
     0x1.1588fcp-47f, 0.0f, 0.0f, 0.0f, 0x1.2826dp-20f, 0x1.85cc5ep-80f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.b61d68p-76f, 0x1.5dca94p-4f, 0x1.f081b2p-120f, 0.0f,
     0x1.44b704p-9f, 0x1.1f23bcp-46f, 0.0f, 0x1.c59c26p-54f, 0x1.3ab952p-98f,
     0x1.6ad7fp-123f, 0.0f, 0.0f, 0x1.4fd572p-115f, 0x1.e9b274p-102f, 0x1.c62e64p-68f,
     0x1.b1d966p-24f, 0x1.5c87eep-46f, 0.0f, 0x1.883278p-68f, 0.0f, 0x1.2f7b8cp-10f,
     0.0f, 0.0f, 0x1.4543c4p-87f, 0x1.49889cp-98f, 0.0f, 0x1.3b1928p-55f,
     0x1.1eeac6p-45f, 0x1.5b928ap-103f, 0x1.155fcap-31f, 0x1.2520b6p-62f,
     0x1.ce71eap-51f, 0.0f, 0x1.7ca368p-34f, 0x1.c9dc16p-51f, 0.0f, 0.0f,
     0x1.0044cp-81f, 0.0f, 0x1.17fdd6p-53f, 0.0f, 0x1.f688dap-64f, 0x1.5f9da6p-117f,
     0x1.55e574p-101f, 0x1.6e640ep-67f, 0x1.315722p-126f, 0x1.18306ap-91f,
     0x1.e2adbcp-29f, 0x1.eeaccep-26f, 0x1.09b25cp-43f, 0x1.03af34p-98f,
     0x1.e26b06p-87f, 0x1.bed74cp-34f, 0.0f, 0x1.4c856ep-35f, 0x1.7d18eap-120f,
     0x1.ce2db4p-19f, 0x1.03dadap-93f, 0x1.336024p-26f, 0x1.2e0f3p-98f, 0.0f,
     0x1.c96a7ap-116f, 0.0f, 0x1.d3e3acp-32f, 0.0f, 0.0f, 0.0f, 0x1.820d84p-45f,
     0x1.e2d402p-91f, 0x1.4e041ap-29f, 0.0f, 0.0f, 0x1.204e82p-42f, 0.0f,
     0x1.a11972p-61f, 0x1.598a28p-33f, 0x1.ceada6p-72f, 0.0f, 0.0f, 0x1.538c24p-72f,
     0.0f, 0x1.3da9b6p-15f, 0x1.9bf7dp-1f, 0x1.ecc39ep-117f, 0x1.1bcdfap-45f, 0.0f,
     0.0f, 0x1.aba756p-125f, 0x1.0f467cp-48f, 0.0f, 0.0f, 0.0f, 0x1.4e2856p-9f, 0.0f,
     0x1.5f050ap-91f, 0x1.f5aec8p-122f, 0x1.04be26p-81f, 0x1.353b38p-104f,
     0x1.25265cp-76f, 0.0f, 0x1.259ae6p-37f, 0x1.f1e9d6p-3f, 0.0f, 0x1p0f,
     0x1.253d04p-89f, 0.0f, 0.0f, 0.0f, 0x1.4092dcp-48f, 0x1.1bfa16p-122f, 0.0f, 0.0f,
     0x1.0fdba2p-63f, 0x1.e7c58ep-96f, 0.0f, 0x1.4faaep-105f, 0.0f, 0x1.32908ap-101f,
     0.0f, 0.0f, 0x1.0d77d2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.781302p-89f, 0.0f,
     0x1.ee448ep-108f, 0.0f, 0.0f, 0x1.dd85eep-11f, 0x1.c22926p-108f, 0.0f,
     0x1.13c5c2p-8f, 0x1.8c8bdp-104f, 0.0f, 0x1.456fd6p-63f, 0x1.ba30e8p-117f,
     0x1.da870cp-111f, 0x1.2110b8p-46f, 0x1.dfba8ap-93f, 0x1.dae91ap-34f, 0.0f,
     0x1.2667fep-40f, 0x1.d678c6p-114f, 0x1.06200ep-116f, 0.0f, 0x1.d2c43ep-61f,
     0x1.61a286p-65f, 0x1.37579cp-91f, 0x1.72c11p-35f, 0x1.b6d97ep-91f, 0.0f, 0.0f,
     0.0f, 0x1.1839f4p-76f, 0x1.808abap-73f, 0.0f, 0.0f, 0.0f, 0x1.5f0d9p-89f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.96314ep-34f, 0.0f, 0x1.4bbf96p-8f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.84d42ap-106f, 0x1.62f73ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0353b4p-72f, 0x1.104872p-10f, 0x1.a6eec4p-63f, 0x1.465748p-89f,
     0x1.9afb8ep-72f, 0.0f, 0.0f, 0x1.e746d2p-61f, 0x1.d7cae6p-95f, 0x1.ddf96cp-103f,
     0.0f, 0.0f, 0.0f, 0x1.771946p-44f, 0.0f, 0x1.3eb988p-108f, 0.0f, 0x1.685f08p-7f,
     0x1.5273a4p-109f, 0.0f, 0x1.42b532p-49f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7fcb96p-23f,
     0.0f, 0x1.59e516p-32f, 0.0f, 0x1.82a75ap-107f, 0x1.4ba9aep-75f, 0x1.173b3p-83f,
     0.0f, 0x1.db0eb8p-39f, 0x1.8aa114p-57f, 0.0f, 0x1.a829e8p-17f, 0.0f, 0.0f,
     0x1.a84144p-115f, 0x1.53d3fep-74f, 0.0f, 0.0f, 0.0f, 0x1.151d8cp-43f,
     0x1.389f1cp-40f, 0x1.fa439cp-63f, 0x1.2a91fep-18f, 0x1.470ca8p-126f, 0.0f, 0.0f,
     0x1.7f78cep-119f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.5781dcp-89f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.869dd2p-12f, 0x1.478f82p-44f, 0x1.207b8ep-46f, 0x1.bed018p-53f,
     0x1.9ecaa4p-105f, 0x1.9c11eep-46f, 0.0f, 0x1.bf5028p-93f, 0x1.593c86p-121f, 0.0f,
     0x1.50ea88p-58f, 0x1.855444p-43f, 0.0f, 0x1.defd76p-79f, 0.0f, 0.0f, 0.0f,
     0x1.33f6c6p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.91624ap-123f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0ff8bap-105f, 0.0f, 0x1.0992ap-87f,
     0.0f, 0x1.6e917p-43f, 0.0f, 0.0f, 0x1.6cff34p-8f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.3a334cp-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b63e54p-10f, 0x1.bc4362p-51f,
     0.0f, 0.0f, 0x1.77ca1p-19f, 0.0f, 0.0f, 0.0f, 0x1.3abd64p-85f, 0.0f,
     0x1.503594p-24f, 0x1.33a898p-61f, 0x1.9dba46p-70f, 0x1.73931ep-55f, 0.0f, 0.0f,
     0.0f, 0x1.db953cp-96f, 0.0f, 0x1.a30a1cp-112f, 0x1.2a76c8p-1f, 0.0f, 0.0f, 0.0f,
     0x1.6215p-99f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.b4d6cap-6f, 0x1.17b4e6p-38f,
     0x1.d83972p-5f, 0.0f, 0.0f, 0.0f, 0x1.59a76cp-89f, 0.0f, 0x1.90d4eep-86f, 0.0f,
     0x1.c0de1ap-81f, 0x1.07577ap-39f, 0.0f, 0x1.7447ccp-14f, 0x1.6fd5f4p-91f,
     0x1.252efap-52f, 0x1.48a8fap-81f, 0.0f, 0x1.09b53p-60f, 0x1.83aa92p-68f, 0.0f,
     0.0f, 0.0f, 0x1.fd9388p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e361aap-68f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.34d17ep-9f, 0x1.005418p-90f, 0x1.f61958p-1f,
     0.0f, 0x1.e7d544p-85f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.04a3dp-111f, 0x1.acf9dap-98f,
     0.0f, 0.0f, 0x1.8f403ep-99f, 0.0f, 0x1.40e0d2p-116f, 0.0f, 0.0f, 0x1.120be4p-22f,
     0.0f, 0.0f, 0x1.1ee1e4p-88f, 0x1.fe343p-83f, 0.0f, 0.0f, 0x1.bdc8ecp-116f,
     0x1.0dba4ep-23f, 0.0f, 0.0f, 0.0f, 0x1.4d920ep-88f, 0x1.7e4cf6p-64f,
     0x1.060448p-88f, 0.0f, 0.0f, 0x1.a252cp-11f, 0.0f, 0x1.063b02p-55f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.e071fap-52f,
     0x1.94216ap-10f, 0x1p0f, 0x1.4df6e4p-106f, 0x1.d60074p-35f, 0x1.1b6dccp-41f,
     0.0f, 0x1.15cb42p-101f, 0.0f, 0.0f, 0x1.144756p-67f, 0x1.a9c6bep-80f,
     0x1.072d8ep-10f, 0.0f, 0.0f, 0x1.073b86p-27f, 0.0f, 0.0f, 0x1.2a0e5p-59f,
     0x1.c13996p-27f, 0.0f, 0x1.0086bcp-25f, 0x1.bc022ap-76f, 0.0f, 0x1.2594d8p-1f,
     0x1.512af2p-91f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.83473ap-126f, 0x1.c365eep-123f,
     0x1.5a99f2p-93f, 0x1.0788a4p-38f, 0x1.7a3956p-72f, 0.0f, 0.0f, 0x1.67c274p-61f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.58f6c6p-58f, 0x1.408c9p-35f, 0.0f, 0x1.77453ap-97f,
     0x1.d488bcp-114f, 0x1.aca4a6p-85f, 0x1.ae054ap-47f, 0.0f, 0x1.ded346p-80f,
     0x1.89a66ap-98f, 0x1.b20c88p-89f, 0.0f, 0x1.51ec72p-93f, 0.0f, 0.0f,
     0x1.abd18ep-74f, 0.0f, 0x1.90e148p-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.e2c13ap-43f, 0.0f, 0x1.a9fb4ep-31f, 0x1.876eb4p-41f, 0x1.6febcap-24f,
     0.0f, 0.0f, 0x1.186dfap-9f, 0x1.f3c1a8p-56f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.633cc8p-97f, 0x1.a1a0a4p-124f, 0.0f, 0.0f, 0.0f, 0x1.da5d4cp-62f, 0.0f,
     0x1.f0ca3ep-98f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.da537ap-119f, 0x1.36632p-58f,
     0.0f, 0x1.fda2dep-27f, 0x1.7df01ap-37f, 0x1.6d02a2p-89f, 0x1.482076p-76f,
     0x1.fcd3fp-47f, 0.0f, 0x1.ab26f6p-17f, 0x1.e51342p-82f, 0.0f, 0x1.3193acp-68f,
     0.0f, 0x1.199ff2p-7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6047cap-96f,
     0.0f, 0.0f, 0x1.e595a4p-16f, 0x1.c50cacp-38f, 0.0f, 0x1.16cf0ap-68f,
     0x1.1a1ca6p-38f, 0x1.90b66p-92f, 0.0f, 0x1.274bcp-28f, 0x1.570d4ep-79f, 0.0f,
     0x1.9c8ad2p-20f, 0x1.053278p-52f, 0x1.a0dc98p-16f, 0.0f, 0.0f, 0x1.02eb68p-15f,
     0x1.df523cp-72f, 0x1.971bb2p-101f, 0x1.123046p-23f, 0x1.1039ap-41f,
     0x1.3a6788p-45f, 0x1.e0bcbp-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3ead12p-50f,
     0x1.c56c26p-122f, 0.0f, 0x1.fa7828p-105f, 0.0f, 0.0f, 0x1.3620eep-20f, 0.0f,
     0x1.2cabe2p-86f, 0x1.8166c8p-58f, 0x1.e216bp-101f, 0.0f, 0.0f, 0.0f,
     0x1.40d4d8p-48f, 0.0f, 0x1.b7d954p-114f, 0.0f, 0.0f, 0x1.eae304p-101f, 0.0f,
     0.0f, 0.0f, 0x1.4f1916p-110f, 0.0f, 0.0f, 0x1.04fce2p-37f, 0.0f, 0.0f, 0.0f,
     0x1.7302dcp-125f, 0.0f, 0x1.40b06p-87f, 0.0f, 0x1.06c0aep-25f, 0x1.bb366ap-13f,
     0.0f, 0.0f, 0x1.9bee7ep-67f, 0x1.9c3faap-107f, 0.0f, 0x1.4e286ap-25f,
     0x1.80fbbcp-77f, 0x1.191494p-104f, 0.0f, 0.0f, 0x1.8bca3ap-19f, 0.0f, 0.0f,
     0x1.b75ceep-95f, 0.0f, 0x1.d95d56p-114f, 0.0f, 0x1.9eceaap-81f, 0x1.5835ccp-66f,
     0.0f, 0.0f, 0x1.f83e18p-97f, 0x1.b605d8p-109f, 0.0f, 0x1.5bf884p-6f, 0.0f, 0.0f,
     0x1.7e2a14p-87f, 0.0f, 0x1.49bbcp-126f, 0.0f, 0.0f, 0x1.12d1dp-91f,
     0x1.10759ap-35f, 0x1.b277e6p-109f, 0.0f, 0x1.72487ap-31f, 0.0f, 0x1.21518p-62f,
     0x1.d8e1bap-108f, 0.0f, 0x1.5df296p-75f, 0.0f, 0.0f, 0x1.a8b9b6p-14f,
     0x1.d73c58p-25f, 0x1.4b988cp-74f, 0.0f, 0x1.5b98f4p-26f, 0.0f, 0x1.68a9ccp-64f,
     0x1.4484e6p-22f, 0x1.1d3c2cp-13f, 0x1p0f, 0x1.d27fc2p-92f, 0.0f, 0.0f,
     0x1.26f1fp-27f, 0x1.d29534p-47f, 0x1.73402ep-85f, 0x1.134442p-2f,
     0x1.7524f2p-94f, 0.0f, 0.0f, 0x1.c04d18p-50f, 0.0f, 0.0f, 0x1.1dd9d4p-65f,
     0x1.e9be2ep-33f, 0x1.edd356p-9f, 0x1.94907p-117f, 0.0f, 0x1.cfee68p-58f,
     0x1.cff0bep-67f, 0x1.bebd18p-53f, 0x1.bffa4ap-27f, 0.0f, 0.0f, 0x1.a9c15cp-97f,
     0.0f, 0.0f, 0x1.30ce96p-87f, 0x1.467f6ap-118f, 0x1.ec039ep-101f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.044ca2p-82f, 0.0f, 0.0f, 0.0f, 0x1.ad5ab4p-3f,
     0x1.339dbap-76f, 0x1.2e678ep-87f, 0x1.aaac08p-94f, 0x1.1a7efep-47f,
     0x1.0cd836p-102f, 0.0f, 0x1.b0cd7cp-100f, 0x1.a8a47ep-11f, 0.0f, 0x1.788f1ap-12f,
     0x1.ab1628p-22f, 0.0f, 0.0f, 0.0f, 0x1.9b96acp-61f, 0x1.3d5b6cp-103f, 0.0f, 0.0f,
     0x1.63deb6p-73f, 0.0f, 0x1.7e2a2ap-75f, 0.0f, 0x1.b9bc14p-62f, 0x1.17aa36p-68f,
     0.0f, 0x1.2722a8p-106f, 0x1.7dc5a6p-3f, 0.0f, 0x1.1d3a14p-5f, 0x1.4e73fep-66f,
     0.0f, 0x1.d5ab48p-2f, 0x1.7fcd6cp-123f, 0.0f, 0.0f, 0x1.8d3e78p-64f, 0.0f,
     0x1.f0f35cp-68f, 0x1.b3e682p-92f, 0.0f, 0x1.89086ep-124f, 0.0f, 0.0f,
     0x1.f157a2p-62f, 0x1.8abe52p-84f, 0x1.c94802p-13f, 0x1.fcf2ecp-65f,
     0x1.161568p-20f, 0.0f, 0.0f, 0x1.2f6feep-99f, 0.0f, 0x1.b739f6p-86f, 0.0f,
     0x1.9ff37ep-67f, 0x1.d9bd24p-34f, 0x1.37e386p-82f, 0x1.a833a4p-62f,
     0x1.78fd4cp-82f, 0x1.2ba5f2p-37f, 0.0f, 0.0f, 0x1.4697b4p-91f, 0x1.6e4a26p-23f,
     0x1.65d408p-117f, 0.0f, 0.0f, 0x1.905402p-125f, 0x1.df9ce6p-122f, 0.0f,
     0x1.4efdfcp-30f, 0x1.a0fc38p-7f, 0.0f, 0x1.15b2d4p-83f, 0.0f, 0x1.2e347ap-101f,
     0x1.98efcp-112f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4e402p-5f, 0.0f,
     0x1.0c3c1cp-28f, 0x1.207f9ap-35f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ef774cp-57f, 0x1.707cbp-54f, 0x1.21acb2p-123f, 0.0f, 0.0f, 0x1.07fac8p-25f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.3f815ep-24f, 0x1.94a026p-48f, 0x1.3cf518p-107f,
     0x1.f34476p-80f, 0.0f, 0.0f, 0x1.331284p-3f, 0x1.057506p-2f, 0x1.05a14cp-116f,
     0.0f, 0x1.620b7ep-14f, 0.0f, 0.0f, 0x1.45c76p-107f, 0.0f, 0x1.eee452p-99f,
     0x1.08fcdap-4f, 0x1.ed3422p-86f, 0.0f, 0x1.1bfd9cp-47f, 0x1.7d100ap-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.9d5fdp-15f, 0x1.55185cp-52f, 0.0f, 0x1.35d28ep-41f,
     0x1.951eb8p-20f, 0x1.fc00e2p-120f, 0x1.530168p-103f, 0x1.6edbaap-75f,
     0x1.b68808p-72f, 0.0f, 0.0f, 0x1.60625cp-89f, 0.0f, 0x1.45e6d6p-71f,
     0x1.a7f806p-57f, 0x1.f5ec24p-29f, 0x1.f33b3cp-20f, 0.0f, 0x1.e4e9a4p-44f,
     0x1.53e8dp-47f, 0.0f, 0x1.8a8162p-23f, 0x1.6f141ep-102f, 0x1.34882ep-87f,
     0x1.d67496p-104f, 0.0f, 0x1.d22c4p-23f, 0x1.ebe818p-100f, 0.0f, 0.0f, 0.0f,
     0x1.25012cp-106f, 0x1.69e5f2p-66f, 0.0f, 0.0f, 0x1.4c2512p-24f, 0x1.ddb81p-4f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
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
            tmp2 = Sleef_finz_nextafterf4_kvx(tmp0, tmp1);
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
    printf("Sleef_finz_nextafterf4_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_nextafterf4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
