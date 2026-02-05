/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf4_u35avx2128.c --function Sleef_cosf4_u35avx2128 --headers \
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
     0.0f, 0.0f, 0x1.b26ed8p-96f, 0.0f, 0x1.1347dap-26f, 0x1.3ea1c6p-51f,
     0x1.a62752p-105f, 0x1.a63fep-21f, 0x1.807d9ep-23f, 0.0f, 0x1.1d6df2p-52f, 0.0f,
     0.0f, 0x1.5dc6dap-91f, 0.0f, 0x1.b9959p-65f, 0x1.5f8b74p-80f, 0x1.a5db0cp-16f,
     0.0f, 0x1.b4b4d4p-96f, 0.0f, 0x1.ec5aecp-117f, 0.0f, 0.0f, 0x1.9bb57cp-60f, 0.0f,
     0x1.5d4c7ep-101f, 0.0f, 0x1.54c3cap-44f, 0x1.267772p-24f, 0x1.f016fp-77f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.d11c6cp-86f, 0x1.41cbacp-107f, 0x1.51b156p-5f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.831bf2p-87f, 0x1.dbd8ep-12f, 0x1.6b0cfep-70f,
     0.0f, 0.0f, 0x1.1fb73cp-69f, 0.0f, 0.0f, 0x1.135564p-126f, 0.0f, 0x1.fead7p-97f,
     0.0f, 0x1.49a6c6p-49f, 0.0f, 0x1.e822d8p-85f, 0x1.cab7e4p-89f, 0.0f, 0.0f, 0.0f,
     0x1.9744fcp-62f, 0.0f, 0x1.29e182p-11f, 0x1.4dcb32p-110f, 0.0f, 0.0f, 0.0f,
     0x1.288a1cp-10f, 0.0f, 0x1.aeb64p-110f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d04148p-124f, 0.0f, 0.0f, 0.0f, 0x1.ed2dfcp-46f, 0.0f, 0x1.9ce578p-101f,
     0x1.44c352p-73f, 0.0f, 0.0f, 0x1.222ec4p-90f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d0592cp-45f, 0.0f, 0.0f, 0.0f, 0x1.7f2936p-54f, 0x1.1ac4bp-51f,
     0x1.f157ep-96f, 0.0f, 0x1.fb6bd8p-43f, 0x1.1d9eb6p-29f, 0x1.aba218p-59f,
     0x1.fc5ad2p-124f, 0.0f, 0.0f, 0x1.f73c78p-31f, 0x1.2ec0bcp-118f, 0.0f,
     0x1.8e4a3p-21f, 0x1.2f88c8p-53f, 0x1.7c267cp-52f, 0x1.9dfb98p-110f, 0.0f,
     0x1.a5c83cp-55f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c2c66p-120f, 0x1.34b84p-9f,
     0.0f, 0x1.c33708p-54f, 0x1.9de398p-32f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d9f39p-9f, 0x1.c65282p-109f, 0.0f, 0.0f, 0x1.c76418p-122f, 0x1.54dbdp-7f,
     0x1.c2d55ep-2f, 0.0f, 0x1.3058fcp-119f, 0x1.f53266p-54f, 0x1.f90ec8p-15f, 0.0f,
     0x1.1b0872p-30f, 0x1.eb42b6p-11f, 0.0f, 0x1.ef3d18p-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.42c254p-112f, 0.0f, 0x1.017404p-20f, 0.0f, 0.0f, 0x1.58eb72p-42f,
     0x1.3b98eap-101f, 0.0f, 0x1.06dc0cp-68f, 0x1.7b6178p-38f, 0.0f, 0.0f, 0.0f,
     0x1.82d66ap-70f, 0x1.1431bep-87f, 0.0f, 0.0f, 0x1.0ba69p-13f, 0.0f,
     0x1.22ce3ep-93f, 0x1.b8deeep-22f, 0.0f, 0x1.e5f4b8p-11f, 0.0f, 0.0f, 0.0f,
     0x1.0b6482p-29f, 0.0f, 0.0f, 0x1.a96b8p-70f, 0x1.4a8eaap-32f, 0.0f,
     0x1.875fc2p-43f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d026fep-48f, 0x1.139ac2p-56f,
     0.0f, 0.0f, 0x1.6a55c6p-3f, 0x1.b4888p-120f, 0x1.d2ddcep-24f, 0.0f, 0.0f, 0.0f,
     0x1.51eap-120f, 0x1.766b56p-33f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.e24a12p-18f, 0.0f, 0.0f, 0.0f, 0x1.19a2bep-22f, 0x1.c8ba3cp-22f, 0.0f,
     0x1.fb4302p-9f, 0x1.a1a36cp-112f, 0.0f, 0x1.c60b4cp-54f, 0x1.499464p-89f, 0.0f,
     0x1.786d74p-78f, 0.0f, 0x1.81f71ep-5f, 0.0f, 0.0f, 0x1.a6088p-117f,
     0x1.20836p-101f, 0.0f, 0x1.ecc44p-54f, 0x1.e59fe2p-6f, 0.0f, 0.0f,
     0x1.7b83aep-42f, 0.0f, 0.0f, 0x1.a842acp-4f, 0x1.3720bcp-93f, 0x1.4fb3f6p-54f,
     0.0f, 0.0f, 0.0f, 0x1.a9168cp-69f, 0.0f, 0.0f, 0x1.374312p-119f, 0.0f,
     0x1.e88b32p-20f, 0x1.8454bp-84f, 0.0f, 0.0f, 0.0f, 0x1.b49294p-117f, 0.0f,
     0x1.cd43ecp-116f, 0x1.9249e6p-58f, 0x1.2ebedcp-46f, 0.0f, 0.0f, 0x1.b388e4p-18f,
     0.0f, 0x1.1acc06p-37f, 0.0f, 0x1.c34434p-79f, 0.0f, 0x1.a9531cp-107f,
     0x1.73b402p-48f, 0x1.515a8cp-106f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.dd6ab8p-100f, 0x1.d8b37ep-98f, 0x1.408f72p-100f, 0x1.87c00ap-109f,
     0x1.07887ap-27f, 0.0f, 0.0f, 0x1.6e3b6p-7f, 0x1.e1f11ep-112f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.fd3e3ep-57f, 0.0f, 0x1.d3082ep-31f, 0.0f, 0.0f, 0.0f, 0x1.8db73ep-120f,
     0x1.b57834p-35f, 0.0f, 0x1.7fd88ep-71f, 0.0f, 0x1.9c6384p-63f, 0x1.80adcp-4f,
     0.0f, 0.0f, 0x1.b46948p-67f, 0x1.034b5cp-99f, 0.0f, 0x1.ce4e3ap-19f, 0.0f, 0.0f,
     0x1.8214f6p-9f, 0.0f, 0x1.4e62aap-114f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ade6f8p-57f,
     0x1.9ffebp-33f, 0x1.5bc682p-82f, 0.0f, 0x1.42f222p-90f, 0.0f, 0x1.0f1e0ep-91f,
     0.0f, 0.0f, 0x1.f2b66cp-60f, 0x1.f046c8p-70f, 0x1.ef3854p-29f, 0.0f,
     0x1.1e14dcp-47f, 0x1.fc9c96p-80f, 0x1.6f0812p-53f, 0.0f, 0x1.d7438cp-10f,
     0x1.a9b8b8p-125f, 0x1.cb0f24p-4f, 0x1.21571ap-95f, 0x1.c6c574p-58f, 0.0f,
     0x1.006efp-43f, 0x1.827a58p-88f, 0x1.08b5fp-88f, 0x1.5b91bep-98f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.65d9cap-32f, 0x1.46436cp-33f, 0x1.c0eabcp-32f, 0.0f, 0.0f, 0.0f,
     0x1.27fa2cp-93f, 0.0f, 0x1.4db8p-90f, 0.0f, 0.0f, 0.0f, 0x1.e6a9c4p-34f,
     0x1.55abeep-121f, 0.0f, 0x1.9611dap-104f, 0x1.bcc9fap-17f, 0.0f, 0x1.6286acp-37f,
     0x1.545006p-75f, 0.0f, 0.0f, 0x1.29ff98p-41f, 0.0f, 0.0f, 0.0f, 0x1.dcf652p-94f,
     0x1.1ed414p-54f, 0.0f, 0x1.6c7aeep-60f, 0x1.fa3bcap-26f, 0x1.5bd21ap-56f,
     0x1.621b78p-33f, 0.0f, 0x1.e48586p-5f, 0x1.70cd5cp-111f, 0.0f, 0.0f, 0.0f,
     0x1.9638a8p-63f, 0x1.2197bp-73f, 0x1.1bb884p-46f, 0x1.8cf52p-95f,
     0x1.46db6ep-103f, 0.0f, 0.0f, 0.0f, 0x1.5f56bp-11f, 0x1.f54a9cp-18f, 0.0f, 0.0f,
     0.0f, 0x1.d225cap-2f, 0x1.307f74p-105f, 0x1.ba4ee4p-120f, 0x1.bf545ap-35f,
     0x1.b358a4p-27f, 0x1.ad4722p-93f, 0x1.e1e5e2p-106f, 0x1.1668e4p-61f, 0.0f,
     0x1.c5ae62p-47f, 0.0f, 0.0f, 0.0f, 0x1.ed746p-40f, 0x1.cbcd6ep-14f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.512b18p-125f, 0.0f,
     0x1.c1bdb8p-87f, 0.0f, 0x1.c33196p-31f, 0x1.4e3012p-8f, 0x1.786cb4p-66f, 0.0f,
     0x1p0f, 0x1.28f3c4p-1f, 0x1.190eap-86f, 0x1.164d66p-4f, 0x1.408cfcp-46f,
     0x1.aeb54ap-74f, 0x1.26164ep-99f, 0.0f, 0.0f, 0.0f, 0x1.150004p-32f,
     0x1.f07e5p-112f, 0x1.2be5d6p-35f, 0x1.d77508p-62f, 0.0f, 0x1.03ea78p-31f,
     0x1.8b02cep-10f, 0x1.4bfaa4p-52f, 0.0f, 0x1.55e9b4p-111f, 0.0f, 0.0f, 0.0f,
     0x1.fafe2p-40f, 0.0f, 0.0f, 0.0f, 0x1.e664fcp-110f, 0.0f, 0x1.4211e8p-83f, 0.0f,
     0.0f, 0x1.6c3b96p-110f, 0.0f, 0x1.a836dep-30f, 0.0f, 0x1.d1dcecp-2f, 0.0f,
     0x1.ad6b06p-20f, 0.0f, 0x1.fa19a4p-57f, 0.0f, 0x1.3a51b4p-66f, 0x1.6284bp-89f,
     0.0f, 0x1.bcc464p-34f, 0x1.e52fa2p-100f, 0x1.2089acp-70f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f756f2p-21f, 0x1.5052a6p-56f, 0.0f, 0x1.cf94c8p-28f, 0.0f, 0x1.cc8b4cp-32f,
     0.0f, 0x1.3a51a6p-59f, 0x1.680fc8p-121f, 0x1.84a282p-56f, 0x1.c848e8p-119f,
     0x1.0f635cp-95f, 0.0f, 0x1.d4925ep-24f, 0.0f, 0x1.addfc4p-90f, 0.0f, 0.0f, 0.0f,
     0x1.a5d91cp-120f, 0.0f, 0.0f, 0.0f, 0x1.35c41ap-52f, 0.0f, 0.0f, 0x1.a10e34p-4f,
     0x1.26c102p-45f, 0x1.0abeb2p-61f, 0x1.22963p-119f, 0x1.9b00bp-3f,
     0x1.f91812p-120f, 0x1.15a934p-62f, 0x1.e4789p-92f, 0.0f, 0x1.f13c46p-64f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.22a57p-21f, 0.0f, 0.0f, 0x1.325a7p-67f, 0.0f, 0.0f, 0.0f,
     0x1.8ac758p-13f, 0x1.6dd22cp-118f, 0.0f, 0x1.2dfa8p-2f, 0x1.79a3d4p-10f, 0.0f,
     0x1.0b5d32p-73f, 0.0f, 0x1.78d84p-121f, 0.0f, 0x1.728f54p-118f, 0.0f,
     0x1.8fcb6p-28f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.df9acep-61f,
     0x1.9906f2p-31f, 0x1.782b6cp-32f, 0.0f, 0.0f, 0x1.e7d2c6p-95f, 0x1.c741b8p-121f,
     0x1.29c6cp-87f, 0x1.c1b44cp-73f, 0.0f, 0x1.e60c58p-119f, 0.0f, 0.0f,
     0x1.3eb6cep-38f, 0x1.2270eap-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2c0a9ep-3f, 0.0f,
     0x1.60863ap-84f, 0x1.a0956ep-69f, 0.0f, 0x1.1029cep-17f, 0x1.da584cp-35f, 0.0f,
     0.0f, 0x1.27abeep-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a85bc2p-87f, 0.0f, 0.0f,
     0x1.eb8f5p-32f, 0x1.d1d384p-36f, 0x1.eb3892p-47f, 0x1.13cb8ep-39f,
     0x1.6ba4fap-34f, 0.0f, 0x1.205f02p-115f, 0x1.041246p-12f, 0x1.63953ep-23f,
     0x1.71fa1ap-20f, 0x1.0869c8p-58f, 0x1.cf50d4p-121f, 0x1.503db2p-113f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1dfa74p-48f, 0x1.86fa06p-54f, 0x1.6aa7eap-40f, 0.0f,
     0x1.d0bc8ep-31f, 0.0f, 0x1.19574ap-90f, 0x1.487baap-36f, 0x1.d5ddc4p-74f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.51ade6p-105f, 0x1.d7508cp-24f, 0x1.2b4682p-88f, 0.0f,
     0.0f, 0x1.fa4ad2p-47f, 0.0f, 0.0f, 0x1.c7e498p-62f, 0x1.bc78c4p-55f, 0.0f,
     0x1.77bc96p-63f, 0.0f, 0.0f, 0x1.64b726p-94f, 0.0f, 0x1.b08c3ep-58f,
     0x1.82ad5ap-30f, 0x1.0a7fc2p-23f, 0x1.27cac8p-97f, 0x1.bde89ep-99f, 0.0f, 0.0f,
     0x1.ca08f6p-86f, 0x1.ca2c2ep-80f, 0.0f, 0.0f, 0x1.d0fbd8p-97f, 0x1.b0dcc4p-31f,
     0.0f, 0x1.446a56p-81f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2ac91p-34f,
     0x1.b8c9fap-117f, 0x1.0be8d6p-96f, 0x1.8c8952p-75f, 0.0f, 0.0f, 0x1.0fe0a6p-53f,
     0x1.e30362p-69f, 0x1.a8242p-91f, 0.0f, 0.0f, 0x1.b440ep-97f, 0x1.e9cb34p-88f,
     0x1.bb46dcp-27f, 0.0f, 0.0f, 0.0f, 0x1.8933f2p-32f, 0x1.99498ep-110f,
     0x1.3e81ap-124f, 0x1.f77624p-39f, 0x1.39b2aap-98f, 0.0f, 0x1.385abcp-53f, 0.0f,
     0.0f, 0x1.cfe1e8p-5f, 0x1.679b3p-69f, 0.0f, 0.0f, 0.0f, 0x1.81f9ccp-54f,
     0x1.ef74e6p-92f, 0.0f, 0x1.18f18cp-15f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0.0f,
     0x1.5297f8p-12f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2e3024p-74f, 0.0f, 0.0f,
     0x1.098f4ap-64f, 0.0f, 0.0f, 0x1.86cfa4p-123f, 0x1.eace8ep-101f, 0x1.65efd8p-1f,
     0.0f, 0.0f, 0x1.075f52p-93f, 0x1.a55be6p-110f, 0x1.bd372ep-18f, 0.0f,
     0x1.c1eaecp-47f, 0x1.90d2dp-113f, 0.0f, 0x1.ce5d8ap-50f, 0.0f, 0x1.dfc76ap-88f,
     0.0f, 0.0f, 0x1.c13e76p-102f, 0x1.26d6ccp-8f, 0.0f, 0.0f, 0x1.01315p-19f,
     0x1.2c6ec6p-12f, 0x1.ec7b1p-87f, 0.0f, 0x1.16a84ep-31f, 0x1.a706a6p-95f,
     0x1.5553bcp-122f, 0.0f, 0x1.261806p-100f, 0x1.6577c2p-109f, 0x1.b1975ep-87f,
     0x1.f8a9bep-107f, 0.0f, 0x1.f1de2p-111f, 0x1.215884p-44f, 0.0f, 0.0f, 0.0f,
     0x1.56b2c8p-116f, 0x1.8b4918p-36f, 0.0f, 0.0f, 0x1.2ff95ap-27f, 0x1.a0adaep-2f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.684d6ep-81f, 0.0f, 0x1.1750d2p-33f, 0x1.c54af2p-71f,
     0.0f, 0x1.67de86p-117f, 0x1.f9bb5cp-74f, 0x1.8e8aeap-11f, 0.0f, 0.0f,
     0x1.dd0ceep-118f, 0.0f, 0x1.1c218ep-97f, 0x1.509f8cp-70f, 0x1.aeb05p-49f, 0.0f,
     0x1.36e276p-14f, 0.0f, 0x1.78b6dp-124f, 0x1.0aebe2p-61f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.ad2a5cp-14f, 0x1.55dfa6p-40f, 0.0f, 0x1.3cb35ep-101f,
     0x1.a6d852p-124f, 0x1.d6a784p-66f, 0x1.70fabap-102f, 0.0f, 0.0f, 0.0f,
     0x1.f82a96p-116f, 0x1.a7f972p-66f, 0x1.c26a38p-76f, 0x1.78e0a8p-10f,
     0x1.b36b22p-38f, 0.0f, 0x1.7c2ba2p-107f, 0x1.81da86p-68f, 0.0f, 0.0f,
     0x1.81c70ap-77f, 0.0f, 0.0f, 0x1.0507f8p-63f, 0x1.b1b986p-89f, 0.0f, 0.0f,
     0x1.bfcfb6p-102f, 0x1.c1e4fap-50f, 0.0f, 0x1.7288eep-70f, 0x1.2c2ab4p-69f,
     0x1.a9872p-23f, 0x1.831032p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f4bc98p-25f, 0.0f,
     0x1.e3c0fcp-35f, 0.0f, 0x1.98665ep-89f, 0.0f, 0.0f, 0x1.a436d6p-109f, 0.0f,
     0x1.33809ep-86f, 0.0f, 0x1.422a3ap-86f, 0x1.b4c92cp-122f, 0.0f, 0.0f,
     0x1.db55cp-37f, 0.0f, 0.0f, 0x1.51aad8p-102f, 0.0f, 0.0f, 0x1.8d093ep-107f, 0.0f,
     0.0f, 0x1.4ab9ep-94f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.13f13p-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.1c1fc4p-122f, 0.0f, 0.0f, 0x1.edd82ep-31f, 0x1.618e26p-111f,
     0x1.3f7208p-16f, 0x1.e9cba4p-102f, 0.0f, 0.0f, 0.0f, 0x1.2a1f0cp-112f, 0.0f,
     0x1.0010a8p-7f, 0.0f, 0.0f, 0x1.94084ap-18f, 0x1.9d5d1cp-107f, 0x1.13dcf8p-126f,
     0.0f, 0x1.fc203ap-122f, 0.0f, 0.0f, 0.0f, 0x1.184a9ep-51f, 0.0f, 0x1.4306c8p-29f,
     0.0f, 0.0f, 0x1.77cd56p-116f, 0x1.28d164p-100f, 0.0f, 0x1.4d5754p-73f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.34b4b4p-46f, 0.0f, 0x1.bdc89ep-93f, 0.0f,
     0x1.4be638p-48f, 0.0f, 0x1.f208dap-108f, 0x1.454b0cp-82f, 0.0f, 0x1.8b5eb4p-54f,
     0x1.0b638p-78f, 0x1.4907eap-108f, 0x1.9b588p-77f, 0.0f, 0.0f, 0.0f,
     0x1.0dc796p-88f, 0x1.b3d35p-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.ef48cap-15f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a3ba08p-72f, 0x1.329d94p-98f, 0.0f,
     0x1.3375c8p-62f, 0.0f, 0.0f, 0.0f, 0x1.bdbaacp-69f, 0x1.85fcc8p-50f, 0.0f,
     0x1.7c551ep-58f, 0x1.ab617ap-43f, 0x1.454da2p-71f, 0x1.29dfc4p-98f,
     0x1.5acfeap-39f, 0.0f, 0x1.e63cb6p-3f, 0x1.349716p-103f, 0.0f, 0x1.542e7ap-98f,
     0.0f, 0.0f, 0x1.90db62p-58f, 0x1.17fc44p-73f, 0x1.e228e4p-39f, 0x1.fa3436p-24f,
     0.0f, 0x1.697256p-38f, 0.0f, 0x1.cc0308p-80f, 0.0f, 0.0f, 0x1.aaf8dap-64f,
     0x1.8da374p-62f, 0.0f, 0x1.cb0274p-57f, 0x1.e0aca4p-18f, 0x1.cbc0b4p-19f,
     0x1.69788ap-66f, 0.0f, 0.0f, 0x1.ac8186p-79f, 0.0f, 0.0f, 0.0f, 0x1.d2cf06p-42f,
     0x1.e30baep-37f, 0x1.262856p-98f, 0x1.78935ep-29f, 0x1.f06d38p-79f,
     0x1.0635b6p-12f, 0.0f, 0x1.e20c82p-89f, 0x1.a6538ap-27f, 0.0f, 0x1.b3f59p-66f,
     0.0f, 0x1.37fcbep-43f, 0x1.143f0ep-33f, 0.0f, 0x1.af894ap-67f, 0.0f,
     0x1.6145dep-26f, 0x1.76553cp-3f, 0.0f, 0x1.8cb9b6p-30f, 0.0f, 0x1.aebd32p-97f,
     0.0f, 0x1.1c9ffp-73f, 0.0f, 0x1.2b31fp-85f, 0x1.79d558p-46f, 0x1.e5aac8p-23f,
     0.0f, 0x1.c6fb32p-85f, 0.0f, 0.0f, 0x1.637p-76f, 0x1.6fe32ap-126f,
     0x1.41001ap-45f, 0.0f
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
            tmp1 = Sleef_cosf4_u35avx2128(tmp0);
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
    printf("Sleef_cosf4_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosf4_u35avx2128 bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
